#ifndef PSDDL_HDF2PSANA_JUNGFRAU_DDL_H
#define PSDDL_HDF2PSANA_JUNGFRAU_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/jungfrau.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
#include "psddl_hdf2psana/ChunkPolicy.h"
namespace psddl_hdf2psana {
namespace Jungfrau {

namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::Jungfrau::ConfigV1& psanaobj);
  ~dataset_config();

  uint32_t numberOfModules;
  uint32_t numberOfRowsPerModule;
  uint32_t numberOfColumnsPerModule;
  uint32_t biasVoltage;
  uint16_t gainMode;
  uint16_t speedMode;
  double triggerDelay;
  double exposureTime;
  uint32_t frameSize;
  uint32_t numPixels;


};
}


class ConfigV1_v0 : public Psana::Jungfrau::ConfigV1 {
public:
  typedef Psana::Jungfrau::ConfigV1 PsanaType;
  ConfigV1_v0() {}
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV1_v0(const boost::shared_ptr<Jungfrau::ns_ConfigV1_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV1_v0() {}
  virtual uint32_t numberOfModules() const;
  virtual uint32_t numberOfRowsPerModule() const;
  virtual uint32_t numberOfColumnsPerModule() const;
  virtual uint32_t biasVoltage() const;
  virtual Psana::Jungfrau::ConfigV1::GainMode gainMode() const;
  virtual Psana::Jungfrau::ConfigV1::SpeedMode speedMode() const;
  virtual double triggerDelay() const;
  virtual double exposureTime() const;
  virtual uint32_t frameSize() const;
  virtual uint32_t numPixels() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Jungfrau::ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Jungfrau::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Jungfrau::ConfigV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Jungfrau::ConfigV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Jungfrau::ConfigV1* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_ElementV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Jungfrau::ElementV1& psanaobj);
  ~dataset_data();

  uint32_t frameNumber;
  uint32_t ticks;
  uint32_t fiducials;


};
}


template <typename Config>
class ElementV1_v0 : public Psana::Jungfrau::ElementV1 {
public:
  typedef Psana::Jungfrau::ElementV1 PsanaType;
  ElementV1_v0() {}
  ElementV1_v0(hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Config>& cfg)
    : m_group(group), m_idx(idx), m_cfg(cfg) {}
  virtual ~ElementV1_v0() {}
  virtual uint32_t frameNumber() const;
  virtual uint32_t ticks() const;
  virtual uint32_t fiducials() const;
  virtual ndarray<const uint16_t, 3> frame() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<Config> m_cfg;
  mutable boost::shared_ptr<Jungfrau::ns_ElementV1_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
  mutable ndarray<const uint16_t, 3> m_ds_frame;
  void read_ds_frame() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Jungfrau::ElementV1> > make_ElementV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::Jungfrau::ConfigV1>& cfg);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Jungfrau::ElementV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Jungfrau::ElementV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Jungfrau::ElementV1* obj, hdf5pp::Group group, long index = -1, int version = -1);

} // namespace Jungfrau
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_JUNGFRAU_DDL_H
