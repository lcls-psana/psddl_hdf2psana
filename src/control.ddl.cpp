
// *** Do not edit this file, it is auto-generated ***

#include "psddl_hdf2psana/control.ddl.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/EnumType.h"
#include "hdf5pp/Utils.h"
#include "PSEvt/DataProxy.h"
namespace psddl_hdf2psana {
namespace ControlData {

hdf5pp::Type ns_PVControl_v0_dataset_config_stored_type()
{
  typedef ns_PVControl_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("name", offsetof(DsType, name), hdf5pp::TypeTraits<const char*>::stored_type());
  type.insert("index", offsetof(DsType, index), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("value", offsetof(DsType, value), hdf5pp::TypeTraits<double>::stored_type());
  type.insert("array", offsetof(DsType, array), hdf5pp::TypeTraits<uint8_t>::stored_type());
  return type;
}

hdf5pp::Type ns_PVControl_v0::dataset_config::stored_type()
{
  static hdf5pp::Type type = ns_PVControl_v0_dataset_config_stored_type();
  return type;
}

hdf5pp::Type ns_PVControl_v0_dataset_config_native_type()
{
  typedef ns_PVControl_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("name", offsetof(DsType, name), hdf5pp::TypeTraits<const char*>::native_type());
  type.insert("index", offsetof(DsType, index), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("value", offsetof(DsType, value), hdf5pp::TypeTraits<double>::native_type());
  type.insert("array", offsetof(DsType, array), hdf5pp::TypeTraits<uint8_t>::native_type());
  return type;
}

hdf5pp::Type ns_PVControl_v0::dataset_config::native_type()
{
  static hdf5pp::Type type = ns_PVControl_v0_dataset_config_native_type();
  return type;
}
ns_PVControl_v0::dataset_config::dataset_config()
{
}
ns_PVControl_v0::dataset_config::~dataset_config()
{
}
boost::shared_ptr<Psana::ControlData::PVControl>
Proxy_PVControl_v0::getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key)
{
  boost::shared_ptr<ns_PVControl_v0::dataset_config> m_ds_config = hdf5pp::Utils::readGroup<ns_PVControl_v0::dataset_config>(m_group, "config", m_idx);
  return boost::make_shared<PsanaType>(m_ds_config->name, m_ds_config->index, m_ds_config->value);
}

boost::shared_ptr<PSEvt::Proxy<Psana::ControlData::PVControl> > make_PVControl(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<Proxy_PVControl_v0>(group, idx);
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::ControlData::PVControl> >(boost::shared_ptr<Psana::ControlData::PVControl>());
  }
}

hdf5pp::Type ns_PVMonitor_v0_dataset_data_stored_type()
{
  typedef ns_PVMonitor_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("name", offsetof(DsType, name), hdf5pp::TypeTraits<const char*>::stored_type());
  type.insert("index", offsetof(DsType, index), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("loValue", offsetof(DsType, loValue), hdf5pp::TypeTraits<double>::stored_type());
  type.insert("hiValue", offsetof(DsType, hiValue), hdf5pp::TypeTraits<double>::stored_type());
  type.insert("array", offsetof(DsType, array), hdf5pp::TypeTraits<uint8_t>::stored_type());
  return type;
}

hdf5pp::Type ns_PVMonitor_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_PVMonitor_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_PVMonitor_v0_dataset_data_native_type()
{
  typedef ns_PVMonitor_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("name", offsetof(DsType, name), hdf5pp::TypeTraits<const char*>::native_type());
  type.insert("index", offsetof(DsType, index), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("loValue", offsetof(DsType, loValue), hdf5pp::TypeTraits<double>::native_type());
  type.insert("hiValue", offsetof(DsType, hiValue), hdf5pp::TypeTraits<double>::native_type());
  type.insert("array", offsetof(DsType, array), hdf5pp::TypeTraits<uint8_t>::native_type());
  return type;
}

hdf5pp::Type ns_PVMonitor_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_PVMonitor_v0_dataset_data_native_type();
  return type;
}
ns_PVMonitor_v0::dataset_data::dataset_data()
{
}
ns_PVMonitor_v0::dataset_data::~dataset_data()
{
}
boost::shared_ptr<Psana::ControlData::PVMonitor>
Proxy_PVMonitor_v0::getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key)
{
  boost::shared_ptr<ns_PVMonitor_v0::dataset_data> m_ds_data = hdf5pp::Utils::readGroup<ns_PVMonitor_v0::dataset_data>(m_group, "data", m_idx);
  return boost::make_shared<PsanaType>(m_ds_data->name, m_ds_data->index, m_ds_data->loValue, m_ds_data->hiValue);
}

boost::shared_ptr<PSEvt::Proxy<Psana::ControlData::PVMonitor> > make_PVMonitor(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<Proxy_PVMonitor_v0>(group, idx);
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::ControlData::PVMonitor> >(boost::shared_ptr<Psana::ControlData::PVMonitor>());
  }
}

hdf5pp::Type ns_PVLabel_v0_dataset_data_stored_type()
{
  typedef ns_PVLabel_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("name", offsetof(DsType, name), hdf5pp::TypeTraits<const char*>::stored_type());
  type.insert("value", offsetof(DsType, value), hdf5pp::TypeTraits<const char*>::stored_type());
  return type;
}

hdf5pp::Type ns_PVLabel_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_PVLabel_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_PVLabel_v0_dataset_data_native_type()
{
  typedef ns_PVLabel_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("name", offsetof(DsType, name), hdf5pp::TypeTraits<const char*>::native_type());
  type.insert("value", offsetof(DsType, value), hdf5pp::TypeTraits<const char*>::native_type());
  return type;
}

hdf5pp::Type ns_PVLabel_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_PVLabel_v0_dataset_data_native_type();
  return type;
}
ns_PVLabel_v0::dataset_data::dataset_data()
{
}
ns_PVLabel_v0::dataset_data::~dataset_data()
{
}
boost::shared_ptr<Psana::ControlData::PVLabel>
Proxy_PVLabel_v0::getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key)
{
  boost::shared_ptr<ns_PVLabel_v0::dataset_data> m_ds_data = hdf5pp::Utils::readGroup<ns_PVLabel_v0::dataset_data>(m_group, "data", m_idx);
  return boost::make_shared<PsanaType>(m_ds_data->name, m_ds_data->value);
}

boost::shared_ptr<PSEvt::Proxy<Psana::ControlData::PVLabel> > make_PVLabel(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<Proxy_PVLabel_v0>(group, idx);
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::ControlData::PVLabel> >(boost::shared_ptr<Psana::ControlData::PVLabel>());
  }
}

hdf5pp::Type ns_ConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_ConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("events", offsetof(DsType, events), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("uses_duration", offsetof(DsType, uses_duration), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("uses_events", offsetof(DsType, uses_events), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("duration", offsetof(DsType, duration), Pds::ns_ClockTime_v0::dataset_data::stored_type());
  type.insert("npvControls", offsetof(DsType, npvControls), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("npvMonitors", offsetof(DsType, npvMonitors), hdf5pp::TypeTraits<uint32_t>::stored_type());
  return type;
}

hdf5pp::Type ns_ConfigV1_v0::dataset_config::stored_type()
{
  static hdf5pp::Type type = ns_ConfigV1_v0_dataset_config_stored_type();
  return type;
}

hdf5pp::Type ns_ConfigV1_v0_dataset_config_native_type()
{
  typedef ns_ConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("events", offsetof(DsType, events), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("uses_duration", offsetof(DsType, uses_duration), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("uses_events", offsetof(DsType, uses_events), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("duration", offsetof(DsType, duration), Pds::ns_ClockTime_v0::dataset_data::native_type());
  type.insert("npvControls", offsetof(DsType, npvControls), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("npvMonitors", offsetof(DsType, npvMonitors), hdf5pp::TypeTraits<uint32_t>::native_type());
  return type;
}

hdf5pp::Type ns_ConfigV1_v0::dataset_config::native_type()
{
  static hdf5pp::Type type = ns_ConfigV1_v0_dataset_config_native_type();
  return type;
}
ns_ConfigV1_v0::dataset_config::dataset_config()
{
}
ns_ConfigV1_v0::dataset_config::~dataset_config()
{
}

hdf5pp::Type ns_ConfigV1_v0_dataset_pvControls_stored_type()
{
  typedef ns_ConfigV1_v0::dataset_pvControls DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("pvControls", offsetof(DsType, pvControls), ControlData::ns_PVControl_v0::dataset_config::stored_type());
  return type;
}

hdf5pp::Type ns_ConfigV1_v0::dataset_pvControls::stored_type()
{
  static hdf5pp::Type type = ns_ConfigV1_v0_dataset_pvControls_stored_type();
  return type;
}

hdf5pp::Type ns_ConfigV1_v0_dataset_pvControls_native_type()
{
  typedef ns_ConfigV1_v0::dataset_pvControls DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("pvControls", offsetof(DsType, pvControls), ControlData::ns_PVControl_v0::dataset_config::native_type());
  return type;
}

hdf5pp::Type ns_ConfigV1_v0::dataset_pvControls::native_type()
{
  static hdf5pp::Type type = ns_ConfigV1_v0_dataset_pvControls_native_type();
  return type;
}
ns_ConfigV1_v0::dataset_pvControls::dataset_pvControls()
{
  this->pvControls = 0;
}
ns_ConfigV1_v0::dataset_pvControls::~dataset_pvControls()
{
  delete [] this->pvControls;
}

hdf5pp::Type ns_ConfigV1_v0_dataset_pvMonitors_stored_type()
{
  typedef ns_ConfigV1_v0::dataset_pvMonitors DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("pvMonitors", offsetof(DsType, pvMonitors), ControlData::ns_PVMonitor_v0::dataset_data::stored_type());
  return type;
}

hdf5pp::Type ns_ConfigV1_v0::dataset_pvMonitors::stored_type()
{
  static hdf5pp::Type type = ns_ConfigV1_v0_dataset_pvMonitors_stored_type();
  return type;
}

hdf5pp::Type ns_ConfigV1_v0_dataset_pvMonitors_native_type()
{
  typedef ns_ConfigV1_v0::dataset_pvMonitors DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("pvMonitors", offsetof(DsType, pvMonitors), ControlData::ns_PVMonitor_v0::dataset_data::native_type());
  return type;
}

hdf5pp::Type ns_ConfigV1_v0::dataset_pvMonitors::native_type()
{
  static hdf5pp::Type type = ns_ConfigV1_v0_dataset_pvMonitors_native_type();
  return type;
}
ns_ConfigV1_v0::dataset_pvMonitors::dataset_pvMonitors()
{
  this->pvMonitors = 0;
}
ns_ConfigV1_v0::dataset_pvMonitors::~dataset_pvMonitors()
{
  delete [] this->pvMonitors;
}
uint32_t ConfigV1_v0::events() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->events);
}
uint8_t ConfigV1_v0::uses_duration() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint8_t(m_ds_config->uses_duration);
}
uint8_t ConfigV1_v0::uses_events() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint8_t(m_ds_config->uses_events);
}
const Pds::ClockTime& ConfigV1_v0::duration() const {
  if (not m_ds_config.get()) read_ds_config();
  m_ds_storage_config_duration = Pds::ClockTime(m_ds_config->duration);
  return m_ds_storage_config_duration;
}
uint32_t ConfigV1_v0::npvControls() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->npvControls);
}
uint32_t ConfigV1_v0::npvMonitors() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->npvMonitors);
}
ndarray<const Psana::ControlData::PVControl, 1> ConfigV1_v0::pvControls() const {
  if (not m_ds_pvControls.get()) read_ds_pvControls();
  if (m_ds_storage_pvControls_pvControls.empty()) {
    unsigned shape[] = {this->npvControls()};
    ndarray<Psana::ControlData::PVControl, 1> tmparr(shape);
    std::copy(m_ds_pvControls->pvControls, m_ds_pvControls->pvControls+this->npvControls(), tmparr.begin());
    m_ds_storage_pvControls_pvControls = tmparr;
  }
  return m_ds_storage_pvControls_pvControls;
}
ndarray<const Psana::ControlData::PVMonitor, 1> ConfigV1_v0::pvMonitors() const {
  if (not m_ds_pvMonitors.get()) read_ds_pvMonitors();
  if (m_ds_storage_pvMonitors_pvMonitors.empty()) {
    unsigned shape[] = {this->npvMonitors()};
    ndarray<Psana::ControlData::PVMonitor, 1> tmparr(shape);
    std::copy(m_ds_pvMonitors->pvMonitors, m_ds_pvMonitors->pvMonitors+this->npvMonitors(), tmparr.begin());
    m_ds_storage_pvMonitors_pvMonitors = tmparr;
  }
  return m_ds_storage_pvMonitors_pvMonitors;
}
void ConfigV1_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<ns_ConfigV1_v0::dataset_config>(m_group, "config", m_idx);
}
void ConfigV1_v0::read_ds_pvControls() const {
  m_ds_pvControls = hdf5pp::Utils::readGroup<ns_ConfigV1_v0::dataset_pvControls>(m_group, "pvControls", m_idx);
}
void ConfigV1_v0::read_ds_pvMonitors() const {
  m_ds_pvMonitors = hdf5pp::Utils::readGroup<ns_ConfigV1_v0::dataset_pvMonitors>(m_group, "pvMonitors", m_idx);
}
boost::shared_ptr<PSEvt::Proxy<Psana::ControlData::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::ControlData::ConfigV1> >(boost::make_shared<ConfigV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::ControlData::ConfigV1> >(boost::shared_ptr<Psana::ControlData::ConfigV1>());
  }
}

hdf5pp::Type ns_ConfigV2_v0_dataset_config_stored_type()
{
  typedef ns_ConfigV2_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("events", offsetof(DsType, events), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("uses_duration", offsetof(DsType, uses_duration), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("uses_events", offsetof(DsType, uses_events), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("duration", offsetof(DsType, duration), Pds::ns_ClockTime_v0::dataset_data::stored_type());
  type.insert("npvControls", offsetof(DsType, npvControls), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("npvMonitors", offsetof(DsType, npvMonitors), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("npvLabels", offsetof(DsType, npvLabels), hdf5pp::TypeTraits<uint32_t>::stored_type());
  return type;
}

hdf5pp::Type ns_ConfigV2_v0::dataset_config::stored_type()
{
  static hdf5pp::Type type = ns_ConfigV2_v0_dataset_config_stored_type();
  return type;
}

hdf5pp::Type ns_ConfigV2_v0_dataset_config_native_type()
{
  typedef ns_ConfigV2_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("events", offsetof(DsType, events), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("uses_duration", offsetof(DsType, uses_duration), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("uses_events", offsetof(DsType, uses_events), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("duration", offsetof(DsType, duration), Pds::ns_ClockTime_v0::dataset_data::native_type());
  type.insert("npvControls", offsetof(DsType, npvControls), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("npvMonitors", offsetof(DsType, npvMonitors), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("npvLabels", offsetof(DsType, npvLabels), hdf5pp::TypeTraits<uint32_t>::native_type());
  return type;
}

hdf5pp::Type ns_ConfigV2_v0::dataset_config::native_type()
{
  static hdf5pp::Type type = ns_ConfigV2_v0_dataset_config_native_type();
  return type;
}
ns_ConfigV2_v0::dataset_config::dataset_config()
{
}
ns_ConfigV2_v0::dataset_config::~dataset_config()
{
}

hdf5pp::Type ns_ConfigV2_v0_dataset_pvControls_stored_type()
{
  typedef ns_ConfigV2_v0::dataset_pvControls DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("pvControls", offsetof(DsType, pvControls), ControlData::ns_PVControl_v0::dataset_config::stored_type());
  return type;
}

hdf5pp::Type ns_ConfigV2_v0::dataset_pvControls::stored_type()
{
  static hdf5pp::Type type = ns_ConfigV2_v0_dataset_pvControls_stored_type();
  return type;
}

hdf5pp::Type ns_ConfigV2_v0_dataset_pvControls_native_type()
{
  typedef ns_ConfigV2_v0::dataset_pvControls DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("pvControls", offsetof(DsType, pvControls), ControlData::ns_PVControl_v0::dataset_config::native_type());
  return type;
}

hdf5pp::Type ns_ConfigV2_v0::dataset_pvControls::native_type()
{
  static hdf5pp::Type type = ns_ConfigV2_v0_dataset_pvControls_native_type();
  return type;
}
ns_ConfigV2_v0::dataset_pvControls::dataset_pvControls()
{
  this->pvControls = 0;
}
ns_ConfigV2_v0::dataset_pvControls::~dataset_pvControls()
{
  delete [] this->pvControls;
}

hdf5pp::Type ns_ConfigV2_v0_dataset_pvMonitors_stored_type()
{
  typedef ns_ConfigV2_v0::dataset_pvMonitors DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("pvMonitors", offsetof(DsType, pvMonitors), ControlData::ns_PVMonitor_v0::dataset_data::stored_type());
  return type;
}

hdf5pp::Type ns_ConfigV2_v0::dataset_pvMonitors::stored_type()
{
  static hdf5pp::Type type = ns_ConfigV2_v0_dataset_pvMonitors_stored_type();
  return type;
}

hdf5pp::Type ns_ConfigV2_v0_dataset_pvMonitors_native_type()
{
  typedef ns_ConfigV2_v0::dataset_pvMonitors DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("pvMonitors", offsetof(DsType, pvMonitors), ControlData::ns_PVMonitor_v0::dataset_data::native_type());
  return type;
}

hdf5pp::Type ns_ConfigV2_v0::dataset_pvMonitors::native_type()
{
  static hdf5pp::Type type = ns_ConfigV2_v0_dataset_pvMonitors_native_type();
  return type;
}
ns_ConfigV2_v0::dataset_pvMonitors::dataset_pvMonitors()
{
  this->pvMonitors = 0;
}
ns_ConfigV2_v0::dataset_pvMonitors::~dataset_pvMonitors()
{
  delete [] this->pvMonitors;
}

hdf5pp::Type ns_ConfigV2_v0_dataset_pvLabels_stored_type()
{
  typedef ns_ConfigV2_v0::dataset_pvLabels DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("pvLabels", offsetof(DsType, pvLabels), ControlData::ns_PVLabel_v0::dataset_data::stored_type());
  return type;
}

hdf5pp::Type ns_ConfigV2_v0::dataset_pvLabels::stored_type()
{
  static hdf5pp::Type type = ns_ConfigV2_v0_dataset_pvLabels_stored_type();
  return type;
}

hdf5pp::Type ns_ConfigV2_v0_dataset_pvLabels_native_type()
{
  typedef ns_ConfigV2_v0::dataset_pvLabels DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("pvLabels", offsetof(DsType, pvLabels), ControlData::ns_PVLabel_v0::dataset_data::native_type());
  return type;
}

hdf5pp::Type ns_ConfigV2_v0::dataset_pvLabels::native_type()
{
  static hdf5pp::Type type = ns_ConfigV2_v0_dataset_pvLabels_native_type();
  return type;
}
ns_ConfigV2_v0::dataset_pvLabels::dataset_pvLabels()
{
  this->pvLabels = 0;
}
ns_ConfigV2_v0::dataset_pvLabels::~dataset_pvLabels()
{
  delete [] this->pvLabels;
}
uint32_t ConfigV2_v0::events() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->events);
}
uint8_t ConfigV2_v0::uses_duration() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint8_t(m_ds_config->uses_duration);
}
uint8_t ConfigV2_v0::uses_events() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint8_t(m_ds_config->uses_events);
}
const Pds::ClockTime& ConfigV2_v0::duration() const {
  if (not m_ds_config.get()) read_ds_config();
  m_ds_storage_config_duration = Pds::ClockTime(m_ds_config->duration);
  return m_ds_storage_config_duration;
}
uint32_t ConfigV2_v0::npvControls() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->npvControls);
}
uint32_t ConfigV2_v0::npvMonitors() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->npvMonitors);
}
uint32_t ConfigV2_v0::npvLabels() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->npvLabels);
}
ndarray<const Psana::ControlData::PVControl, 1> ConfigV2_v0::pvControls() const {
  if (not m_ds_pvControls.get()) read_ds_pvControls();
  if (m_ds_storage_pvControls_pvControls.empty()) {
    unsigned shape[] = {this->npvControls()};
    ndarray<Psana::ControlData::PVControl, 1> tmparr(shape);
    std::copy(m_ds_pvControls->pvControls, m_ds_pvControls->pvControls+this->npvControls(), tmparr.begin());
    m_ds_storage_pvControls_pvControls = tmparr;
  }
  return m_ds_storage_pvControls_pvControls;
}
ndarray<const Psana::ControlData::PVMonitor, 1> ConfigV2_v0::pvMonitors() const {
  if (not m_ds_pvMonitors.get()) read_ds_pvMonitors();
  if (m_ds_storage_pvMonitors_pvMonitors.empty()) {
    unsigned shape[] = {this->npvMonitors()};
    ndarray<Psana::ControlData::PVMonitor, 1> tmparr(shape);
    std::copy(m_ds_pvMonitors->pvMonitors, m_ds_pvMonitors->pvMonitors+this->npvMonitors(), tmparr.begin());
    m_ds_storage_pvMonitors_pvMonitors = tmparr;
  }
  return m_ds_storage_pvMonitors_pvMonitors;
}
ndarray<const Psana::ControlData::PVLabel, 1> ConfigV2_v0::pvLabels() const {
  if (not m_ds_pvLabels.get()) read_ds_pvLabels();
  if (m_ds_storage_pvLabels_pvLabels.empty()) {
    unsigned shape[] = {this->npvLabels()};
    ndarray<Psana::ControlData::PVLabel, 1> tmparr(shape);
    std::copy(m_ds_pvLabels->pvLabels, m_ds_pvLabels->pvLabels+this->npvLabels(), tmparr.begin());
    m_ds_storage_pvLabels_pvLabels = tmparr;
  }
  return m_ds_storage_pvLabels_pvLabels;
}
void ConfigV2_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<ns_ConfigV2_v0::dataset_config>(m_group, "config", m_idx);
}
void ConfigV2_v0::read_ds_pvControls() const {
  m_ds_pvControls = hdf5pp::Utils::readGroup<ns_ConfigV2_v0::dataset_pvControls>(m_group, "pvControls", m_idx);
}
void ConfigV2_v0::read_ds_pvMonitors() const {
  m_ds_pvMonitors = hdf5pp::Utils::readGroup<ns_ConfigV2_v0::dataset_pvMonitors>(m_group, "pvMonitors", m_idx);
}
void ConfigV2_v0::read_ds_pvLabels() const {
  m_ds_pvLabels = hdf5pp::Utils::readGroup<ns_ConfigV2_v0::dataset_pvLabels>(m_group, "pvLabels", m_idx);
}
boost::shared_ptr<PSEvt::Proxy<Psana::ControlData::ConfigV2> > make_ConfigV2(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::ControlData::ConfigV2> >(boost::make_shared<ConfigV2_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::ControlData::ConfigV2> >(boost::shared_ptr<Psana::ControlData::ConfigV2>());
  }
}
} // namespace ControlData
} // namespace psddl_hdf2psana
