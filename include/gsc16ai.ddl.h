#ifndef PSDDL_HDF2PSANA_GSC16AI_DDL_H
#define PSDDL_HDF2PSANA_GSC16AI_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/gsc16ai.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
#include "psddl_hdf2psana/ChunkPolicy.h"
#include "psddl_hdf2psana/oceanoptics.ddl.h"
namespace psddl_hdf2psana {
namespace Gsc16ai {

namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::Gsc16ai::ConfigV1& psanaobj);
  ~dataset_config();

  uint16_t voltageRange;
  uint16_t firstChan;
  uint16_t lastChan;
  uint16_t inputMode;
  uint16_t triggerMode;
  uint16_t dataFormat;
  uint16_t fps;
  uint8_t autocalibEnable;
  uint8_t timeTagEnable;


};
}


class ConfigV1_v0 : public Psana::Gsc16ai::ConfigV1 {
public:
  typedef Psana::Gsc16ai::ConfigV1 PsanaType;
  ConfigV1_v0() {}
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV1_v0(const boost::shared_ptr<Gsc16ai::ns_ConfigV1_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV1_v0() {}
  virtual Psana::Gsc16ai::ConfigV1::VoltageRange voltageRange() const;
  virtual uint16_t firstChan() const;
  virtual uint16_t lastChan() const;
  virtual Psana::Gsc16ai::ConfigV1::InputMode inputMode() const;
  virtual Psana::Gsc16ai::ConfigV1::TriggerMode triggerMode() const;
  virtual Psana::Gsc16ai::ConfigV1::DataFormat dataFormat() const;
  virtual uint16_t fps() const;
  virtual uint8_t autocalibEnable() const;
  virtual uint8_t timeTagEnable() const;
    uint16_t numChannels() const { return this->lastChan() - this->firstChan() + 1; }
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Gsc16ai::ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Gsc16ai::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Gsc16ai::ConfigV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Gsc16ai::ConfigV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Gsc16ai::ConfigV1* obj, hdf5pp::Group group, long index = -1, int version = -1);



template <typename Config>
class DataV1_v0 : public Psana::Gsc16ai::DataV1 {
public:
  typedef Psana::Gsc16ai::DataV1 PsanaType;
  DataV1_v0() {}
  DataV1_v0(hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Config>& cfg)
    : m_group(group), m_idx(idx), m_cfg(cfg) {}
  virtual ~DataV1_v0() {}
  virtual ndarray<const uint16_t, 1> timestamp() const;
  virtual ndarray<const uint16_t, 1> channelValue() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<Config> m_cfg;
  mutable ndarray<const uint16_t, 1> m_ds_channelValue;
  void read_ds_channelValue() const;
  mutable ndarray<const uint16_t, 1> m_ds_timestamps;
  void read_ds_timestamps() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Gsc16ai::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::Gsc16ai::ConfigV1>& cfg);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Gsc16ai::DataV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Gsc16ai::DataV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Gsc16ai::DataV1* obj, hdf5pp::Group group, long index = -1, int version = -1);

} // namespace Gsc16ai
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_GSC16AI_DDL_H
