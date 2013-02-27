#ifndef PSDDL_HDF2PSANA_CONTROL_DDL_H
#define PSDDL_HDF2PSANA_CONTROL_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/control.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
#include "pdsdata/xtc/ClockTime.hh"
#include "psddl_hdf2psana/xtc.ddlm.h"
namespace psddl_hdf2psana {
namespace ControlData {

namespace ns_PVControl_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  ~dataset_config();

  char name[32]; 
  uint32_t index; 
  double value; 
  uint8_t array; 

  operator Psana::ControlData::PVControl() const { return Psana::ControlData::PVControl(name, index, value); }
};
}
class Proxy_PVControl_v0 : public PSEvt::Proxy<Psana::ControlData::PVControl> {
public:
  typedef Psana::ControlData::PVControl PsanaType;

  Proxy_PVControl_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_PVControl_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::ControlData::PVControl> > make_PVControl(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_PVMonitor_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  char name[32]; 
  uint32_t index; 
  double loValue; 
  double hiValue; 
  uint8_t array; 

  operator Psana::ControlData::PVMonitor() const { return Psana::ControlData::PVMonitor(name, index, loValue, hiValue); }
};
}
class Proxy_PVMonitor_v0 : public PSEvt::Proxy<Psana::ControlData::PVMonitor> {
public:
  typedef Psana::ControlData::PVMonitor PsanaType;

  Proxy_PVMonitor_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_PVMonitor_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::ControlData::PVMonitor> > make_PVMonitor(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_PVLabel_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  char name[32]; 
  char value[64]; 

  operator Psana::ControlData::PVLabel() const { return Psana::ControlData::PVLabel(name, value); }
};
}
class Proxy_PVLabel_v0 : public PSEvt::Proxy<Psana::ControlData::PVLabel> {
public:
  typedef Psana::ControlData::PVLabel PsanaType;

  Proxy_PVLabel_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_PVLabel_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::ControlData::PVLabel> > make_PVLabel(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  ~dataset_config();

  uint32_t events; 
  uint8_t uses_duration; 
  uint8_t uses_events; 
  Pds::ns_ClockTime_v0::dataset_data duration; 
  uint32_t npvControls; 
  uint32_t npvMonitors; 

};
}

namespace ns_ConfigV1_v0 {
struct dataset_pvControls {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_pvControls();
  ~dataset_pvControls();

  ControlData::ns_PVControl_v0::dataset_config* pvControls; 

};
}

namespace ns_ConfigV1_v0 {
struct dataset_pvMonitors {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_pvMonitors();
  ~dataset_pvMonitors();

  ControlData::ns_PVMonitor_v0::dataset_data* pvMonitors; 

};
}


class ConfigV1_v0 : public Psana::ControlData::ConfigV1 {
public:
  typedef Psana::ControlData::ConfigV1 PsanaType;
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~ConfigV1_v0() {}
  virtual uint32_t events() const;
  virtual uint8_t uses_duration() const;
  virtual uint8_t uses_events() const;
  virtual const Pds::ClockTime& duration() const;
  virtual uint32_t npvControls() const;
  virtual uint32_t npvMonitors() const;
  virtual ndarray<const Psana::ControlData::PVControl, 1> pvControls() const;
  virtual ndarray<const Psana::ControlData::PVMonitor, 1> pvMonitors() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable Pds::ClockTime m_ds_storage_config_duration;
  mutable boost::shared_ptr<ns_ConfigV1_v0::dataset_pvControls> m_ds_pvControls;
  void read_ds_pvControls() const;
  mutable ndarray<const Psana::ControlData::PVControl, 1> m_ds_storage_pvControls_pvControls;
  mutable boost::shared_ptr<ns_ConfigV1_v0::dataset_pvMonitors> m_ds_pvMonitors;
  void read_ds_pvMonitors() const;
  mutable ndarray<const Psana::ControlData::PVMonitor, 1> m_ds_storage_pvMonitors_pvMonitors;
};

boost::shared_ptr<PSEvt::Proxy<Psana::ControlData::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_ConfigV2_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  ~dataset_config();

  uint32_t events; 
  uint8_t uses_duration; 
  uint8_t uses_events; 
  Pds::ns_ClockTime_v0::dataset_data duration; 
  uint32_t npvControls; 
  uint32_t npvMonitors; 
  uint32_t npvLabels; 

};
}

namespace ns_ConfigV2_v0 {
struct dataset_pvControls {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_pvControls();
  ~dataset_pvControls();

  ControlData::ns_PVControl_v0::dataset_config* pvControls; 

};
}

namespace ns_ConfigV2_v0 {
struct dataset_pvMonitors {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_pvMonitors();
  ~dataset_pvMonitors();

  ControlData::ns_PVMonitor_v0::dataset_data* pvMonitors; 

};
}

namespace ns_ConfigV2_v0 {
struct dataset_pvLabels {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_pvLabels();
  ~dataset_pvLabels();

  ControlData::ns_PVLabel_v0::dataset_data* pvLabels; 

};
}


class ConfigV2_v0 : public Psana::ControlData::ConfigV2 {
public:
  typedef Psana::ControlData::ConfigV2 PsanaType;
  ConfigV2_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~ConfigV2_v0() {}
  virtual uint32_t events() const;
  virtual uint8_t uses_duration() const;
  virtual uint8_t uses_events() const;
  virtual const Pds::ClockTime& duration() const;
  virtual uint32_t npvControls() const;
  virtual uint32_t npvMonitors() const;
  virtual uint32_t npvLabels() const;
  virtual ndarray<const Psana::ControlData::PVControl, 1> pvControls() const;
  virtual ndarray<const Psana::ControlData::PVMonitor, 1> pvMonitors() const;
  virtual ndarray<const Psana::ControlData::PVLabel, 1> pvLabels() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<ns_ConfigV2_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable Pds::ClockTime m_ds_storage_config_duration;
  mutable boost::shared_ptr<ns_ConfigV2_v0::dataset_pvControls> m_ds_pvControls;
  void read_ds_pvControls() const;
  mutable ndarray<const Psana::ControlData::PVControl, 1> m_ds_storage_pvControls_pvControls;
  mutable boost::shared_ptr<ns_ConfigV2_v0::dataset_pvMonitors> m_ds_pvMonitors;
  void read_ds_pvMonitors() const;
  mutable ndarray<const Psana::ControlData::PVMonitor, 1> m_ds_storage_pvMonitors_pvMonitors;
  mutable boost::shared_ptr<ns_ConfigV2_v0::dataset_pvLabels> m_ds_pvLabels;
  void read_ds_pvLabels() const;
  mutable ndarray<const Psana::ControlData::PVLabel, 1> m_ds_storage_pvLabels_pvLabels;
};

boost::shared_ptr<PSEvt::Proxy<Psana::ControlData::ConfigV2> > make_ConfigV2(int version, hdf5pp::Group group, hsize_t idx);
} // namespace ControlData
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_CONTROL_DDL_H
