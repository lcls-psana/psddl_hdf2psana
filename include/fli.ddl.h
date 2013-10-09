#ifndef PSDDL_HDF2PSANA_FLI_DDL_H
#define PSDDL_HDF2PSANA_FLI_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/fli.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
namespace psddl_hdf2psana {
namespace Fli {

namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::Fli::ConfigV1& psanaobj);
  ~dataset_config();

  uint32_t width;
  uint32_t height;
  uint32_t orgX;
  uint32_t orgY;
  uint32_t binX;
  uint32_t binY;
  float exposureTime;
  float coolingTemp;
  uint8_t gainIndex;
  uint8_t readoutSpeedIndex;
  uint16_t exposureEventCode;
  uint32_t numDelayShots;


};
}


class ConfigV1_v0 : public Psana::Fli::ConfigV1 {
public:
  typedef Psana::Fli::ConfigV1 PsanaType;
  ConfigV1_v0() {}
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV1_v0(const boost::shared_ptr<Fli::ns_ConfigV1_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV1_v0() {}
  virtual uint32_t width() const;
  virtual uint32_t height() const;
  virtual uint32_t orgX() const;
  virtual uint32_t orgY() const;
  virtual uint32_t binX() const;
  virtual uint32_t binY() const;
  virtual float exposureTime() const;
  virtual float coolingTemp() const;
  virtual uint8_t gainIndex() const;
  virtual uint8_t readoutSpeedIndex() const;
  virtual uint16_t exposureEventCode() const;
  virtual uint32_t numDelayShots() const;
  /** Total size in bytes of the Frame object, including image and frame header. */
  uint32_t frameSize() const;

  /** calculate frame X size in pixels based on the current ROI and binning settings */
  uint32_t numPixelsX() const { return (this->width() + this->binX() - 1) / this->binX(); }
  /** calculate frame Y size in pixels based on the current ROI and binning settings */
  uint32_t numPixelsY() const { return (this->height() + this->binY() - 1) / this->binY(); }
  /** calculate total frame size in pixels based on the current ROI and binning settings */
  uint32_t numPixels() const { return ((this->width() + this->binX() - 1)/ this->binX())*((this->height() + this->binY() - 1)/ this->binY()); }
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Fli::ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Fli::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Fli::ConfigV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Fli::ConfigV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Fli::ConfigV1* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_FrameV1_v0 {
struct dataset_frame {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_frame();
  dataset_frame(const Psana::Fli::FrameV1& psanaobj);
  ~dataset_frame();

  uint32_t shotIdStart;
  float readoutTime;
  float temperature;


};
}


template <typename Config>
class FrameV1_v0 : public Psana::Fli::FrameV1 {
public:
  typedef Psana::Fli::FrameV1 PsanaType;
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
  mutable boost::shared_ptr<Fli::ns_FrameV1_v0::dataset_frame> m_ds_frame;
  void read_ds_frame() const;
  mutable ndarray<const uint16_t, 2> m_ds_data;
  void read_ds_data() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Fli::FrameV1> > make_FrameV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::Fli::ConfigV1>& cfg);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Fli::FrameV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Fli::FrameV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Fli::FrameV1* obj, hdf5pp::Group group, long index = -1, int version = -1);

} // namespace Fli
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_FLI_DDL_H
