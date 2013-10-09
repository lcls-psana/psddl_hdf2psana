#ifndef PSDDL_HDF2PSANA_OCEANOPTICS_DDL_H
#define PSDDL_HDF2PSANA_OCEANOPTICS_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/oceanoptics.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
namespace psddl_hdf2psana {
namespace OceanOptics {

namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::OceanOptics::ConfigV1& psanaobj);
  ~dataset_config();

  float exposureTime;
  double waveLenCalib[4];
  double nonlinCorrect[8];
  double strayLightConstant;


};
}


class ConfigV1_v0 : public Psana::OceanOptics::ConfigV1 {
public:
  typedef Psana::OceanOptics::ConfigV1 PsanaType;
  ConfigV1_v0() {}
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV1_v0(const boost::shared_ptr<OceanOptics::ns_ConfigV1_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV1_v0() {}
  virtual float exposureTime() const;
  virtual ndarray<const double, 1> waveLenCalib() const;
  virtual ndarray<const double, 1> nonlinCorrect() const;
  virtual double strayLightConstant() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<OceanOptics::ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::OceanOptics::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::OceanOptics::ConfigV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::OceanOptics::ConfigV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::OceanOptics::ConfigV1* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_timespec64_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::OceanOptics::timespec64& psanaobj);
  ~dataset_data();

  uint32_t seconds;
  uint32_t nanoseconds;

  operator Psana::OceanOptics::timespec64() const { return Psana::OceanOptics::timespec64(seconds, nanoseconds); }

};
}

namespace ns_DataV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::OceanOptics::DataV1& psanaobj);
  ~dataset_data();

  uint64_t frameCounter;
  uint64_t numDelayedFrames;
  uint64_t numDiscardFrames;
  OceanOptics::ns_timespec64_v0::dataset_data timeFrameStart;
  OceanOptics::ns_timespec64_v0::dataset_data timeFrameFirstData;
  OceanOptics::ns_timespec64_v0::dataset_data timeFrameEnd;
  int8_t numSpectraInData;
  int8_t numSpectraInQueue;
  int8_t numSpectraUnused;
  double durationOfFrame;


};
}


template <typename Config>
class DataV1_v0 : public Psana::OceanOptics::DataV1 {
public:
  typedef Psana::OceanOptics::DataV1 PsanaType;
  DataV1_v0() {}
  DataV1_v0(hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Config>& cfg)
    : m_group(group), m_idx(idx), m_cfg(cfg) {}
  virtual ~DataV1_v0() {}
  virtual ndarray<const uint16_t, 1> data() const;
  virtual uint64_t frameCounter() const;
  virtual uint64_t numDelayedFrames() const;
  virtual uint64_t numDiscardFrames() const;
  virtual const Psana::OceanOptics::timespec64& timeFrameStart() const;
  virtual const Psana::OceanOptics::timespec64& timeFrameFirstData() const;
  virtual const Psana::OceanOptics::timespec64& timeFrameEnd() const;
  virtual int8_t numSpectraInData() const;
  virtual int8_t numSpectraInQueue() const;
  virtual int8_t numSpectraUnused() const;
  virtual double durationOfFrame() const;
    double nonlinerCorrected(uint32_t iPixel) const;

private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<Config> m_cfg;
  mutable ndarray<const uint16_t, 1> m_ds_spectra;
  void read_ds_spectra() const;
  mutable boost::shared_ptr<OceanOptics::ns_DataV1_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
  mutable Psana::OceanOptics::timespec64 m_ds_storage_data_timeFrameStart;
  mutable Psana::OceanOptics::timespec64 m_ds_storage_data_timeFrameFirstData;
  mutable Psana::OceanOptics::timespec64 m_ds_storage_data_timeFrameEnd;
};

boost::shared_ptr<PSEvt::Proxy<Psana::OceanOptics::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::OceanOptics::ConfigV1>& cfg);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::OceanOptics::DataV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::OceanOptics::DataV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::OceanOptics::DataV1* obj, hdf5pp::Group group, long index = -1, int version = -1);

} // namespace OceanOptics
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_OCEANOPTICS_DDL_H
