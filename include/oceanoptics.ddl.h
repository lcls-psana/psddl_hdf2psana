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

namespace ns_timespec64_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  uint64_t tv_sec; 
  uint64_t tv_nsec; 

  operator Psana::OceanOptics::timespec64() const { return Psana::OceanOptics::timespec64(tv_sec, tv_nsec); }
};
}
class Proxy_timespec64_v0 : public PSEvt::Proxy<Psana::OceanOptics::timespec64> {
public:
  typedef Psana::OceanOptics::timespec64 PsanaType;

  Proxy_timespec64_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_timespec64_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::OceanOptics::timespec64> > make_timespec64(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_DataV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  uint16_t data[3840]; 
  uint64_t frameCounter; 
  uint64_t numDelayedFrames; 
  uint64_t numDiscardFrames; 
  OceanOptics::ns_timespec64_v0::dataset_data timeFrameStart; 
  OceanOptics::ns_timespec64_v0::dataset_data timeFrameFirstData; 
  OceanOptics::ns_timespec64_v0::dataset_data timeFrameEnd; 
  int32_t version; 
  int8_t numSpectraInData; 
  int8_t numSpectraInQueue; 
  int8_t numSpectraUnused; 

};
}


template <typename Config>
class DataV1_v0 : public Psana::OceanOptics::DataV1 {
public:
  typedef Psana::OceanOptics::DataV1 PsanaType;
  DataV1_v0() {}
  DataV1_v0(hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Config>& cfg)
    : m_group(group), m_idx(idx), m_cfg(cfg) {}
  DataV1_v0(const boost::shared_ptr<OceanOptics::ns_DataV1_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~DataV1_v0() {}
  virtual ndarray<const uint16_t, 1> data() const;
  virtual uint64_t frameCounter() const;
  virtual uint64_t numDelayedFrames() const;
  virtual uint64_t numDiscardFrames() const;
  virtual const Psana::OceanOptics::timespec64& timeFrameStart() const;
  virtual const Psana::OceanOptics::timespec64& timeFrameFirstData() const;
  virtual const Psana::OceanOptics::timespec64& timeFrameEnd() const;
  virtual int32_t version() const;
  virtual int8_t numSpectraInData() const;
  virtual int8_t numSpectraInQueue() const;
  virtual int8_t numSpectraUnused() const;
    double durationOfFrame() const { return this->timeFrameEnd().tv_sec() - this->timeFrameStart().tv_sec() + (this->timeFrameEnd().tv_nsec() - this->timeFrameStart().tv_nsec()) * 1e-9; }
    double nonlinerCorrected(uint32_t iPixel) const;

private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<Config> m_cfg;
  mutable boost::shared_ptr<OceanOptics::ns_DataV1_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
  mutable Psana::OceanOptics::timespec64 m_ds_storage_data_timeFrameStart;
  mutable Psana::OceanOptics::timespec64 m_ds_storage_data_timeFrameFirstData;
  mutable Psana::OceanOptics::timespec64 m_ds_storage_data_timeFrameEnd;
};

boost::shared_ptr<PSEvt::Proxy<Psana::OceanOptics::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::OceanOptics::ConfigV1>& cfg);
} // namespace OceanOptics
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_OCEANOPTICS_DDL_H
