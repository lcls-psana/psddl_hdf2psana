#ifndef PSDDL_HDF2PSANA_ANDOR_DDL_H
#define PSDDL_HDF2PSANA_ANDOR_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/andor.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
namespace psddl_hdf2psana {
namespace Andor {

namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::Andor::ConfigV1& psanaobj);
  ~dataset_config();

  uint32_t width;
  uint32_t height;
  uint32_t orgX;
  uint32_t orgY;
  uint32_t binX;
  uint32_t binY;
  float exposureTime;
  float coolingTemp;
  uint8_t fanMode;
  uint8_t baselineClamp;
  uint8_t highCapacity;
  uint8_t gainIndex;
  uint16_t readoutSpeedIndex;
  uint16_t exposureEventCode;
  uint32_t numDelayShots;
  uint32_t frameSize;
  uint32_t numPixelsX;
  uint32_t numPixelsY;
  uint32_t numPixels;


};
}


class ConfigV1_v0 : public Psana::Andor::ConfigV1 {
public:
  typedef Psana::Andor::ConfigV1 PsanaType;
  ConfigV1_v0() {}
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV1_v0(const boost::shared_ptr<Andor::ns_ConfigV1_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV1_v0() {}
  virtual uint32_t width() const;
  virtual uint32_t height() const;
  virtual uint32_t orgX() const;
  virtual uint32_t orgY() const;
  virtual uint32_t binX() const;
  virtual uint32_t binY() const;
  virtual float exposureTime() const;
  virtual float coolingTemp() const;
  virtual Psana::Andor::ConfigV1::EnumFanMode fanMode() const;
  virtual uint8_t baselineClamp() const;
  virtual uint8_t highCapacity() const;
  virtual uint8_t gainIndex() const;
  virtual uint16_t readoutSpeedIndex() const;
  virtual uint16_t exposureEventCode() const;
  virtual uint32_t numDelayShots() const;
  virtual uint32_t frameSize() const;
  virtual uint32_t numPixelsX() const;
  virtual uint32_t numPixelsY() const;
  virtual uint32_t numPixels() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Andor::ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Andor::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Andor::ConfigV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Andor::ConfigV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method
void append(const Psana::Andor::ConfigV1& obj, hdf5pp::Group group, int version = -1);


namespace ns_FrameV1_v0 {
struct dataset_frame {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_frame();
  dataset_frame(const Psana::Andor::FrameV1& psanaobj);
  ~dataset_frame();

  uint32_t shotIdStart;
  float readoutTime;
  float temperature;


};
}


template <typename Config>
class FrameV1_v0 : public Psana::Andor::FrameV1 {
public:
  typedef Psana::Andor::FrameV1 PsanaType;
  FrameV1_v0() {}
  FrameV1_v0(hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Config>& cfg)
    : m_group(group), m_idx(idx), m_cfg(cfg) {}
  virtual ~FrameV1_v0() {}
  virtual uint32_t shotIdStart() const;
  virtual float readoutTime() const;
  virtual float temperature() const;
  virtual ndarray<const uint16_t, 2> data() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<Config> m_cfg;
  mutable boost::shared_ptr<Andor::ns_FrameV1_v0::dataset_frame> m_ds_frame;
  void read_ds_frame() const;
  mutable ndarray<const uint16_t, 2> m_ds_data;
  void read_ds_data() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Andor::FrameV1> > make_FrameV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::Andor::ConfigV1>& cfg);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Andor::FrameV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Andor::FrameV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method
void append(const Psana::Andor::FrameV1& obj, hdf5pp::Group group, int version = -1);

} // namespace Andor
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_ANDOR_DDL_H
