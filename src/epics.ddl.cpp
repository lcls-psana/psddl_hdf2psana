
// *** Do not edit this file, it is auto-generated ***

#include "psddl_hdf2psana/epics.ddl.h"
#include "hdf5pp/ArrayType.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/EnumType.h"
#include "hdf5pp/VlenType.h"
#include "hdf5pp/Utils.h"
#include "PSEvt/DataProxy.h"
#include "psddl_hdf2psana/Exceptions.h"
#include "psddl_hdf2psana/epics.h"
#include "psddl_hdf2psana/epics.h"
#include "psddl_hdf2psana/epics.h"
#include "psddl_hdf2psana/epics.h"
#include "psddl_hdf2psana/epics.h"
#include "psddl_hdf2psana/epics.h"
#include "psddl_hdf2psana/epics.h"
#include "psddl_hdf2psana/epics.h"
#include "psddl_hdf2psana/epics.h"
#include "psddl_hdf2psana/epics.h"
#include "psddl_hdf2psana/epics.h"
#include "psddl_hdf2psana/epics.h"
#include "psddl_hdf2psana/epics.h"
#include "psddl_hdf2psana/epics.h"
namespace psddl_hdf2psana {
namespace Epics {

hdf5pp::Type ns_epicsTimeStamp_v0_dataset_data_stored_type()
{
  typedef ns_epicsTimeStamp_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("secPastEpoch", offsetof(DsType, secPastEpoch), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("nsec", offsetof(DsType, nsec), hdf5pp::TypeTraits<uint32_t>::stored_type());
  return type;
}

hdf5pp::Type ns_epicsTimeStamp_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_epicsTimeStamp_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_epicsTimeStamp_v0_dataset_data_native_type()
{
  typedef ns_epicsTimeStamp_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("secPastEpoch", offsetof(DsType, secPastEpoch), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("nsec", offsetof(DsType, nsec), hdf5pp::TypeTraits<uint32_t>::native_type());
  return type;
}

hdf5pp::Type ns_epicsTimeStamp_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_epicsTimeStamp_v0_dataset_data_native_type();
  return type;
}

ns_epicsTimeStamp_v0::dataset_data::dataset_data()
{
}

ns_epicsTimeStamp_v0::dataset_data::dataset_data(const Psana::Epics::epicsTimeStamp& psanaobj)
  : secPastEpoch(psanaobj.sec())
  , nsec(psanaobj.nsec())
{
}

ns_epicsTimeStamp_v0::dataset_data::~dataset_data()
{
}

hdf5pp::Type ns_EpicsPvHeader_v0_dataset_data_stored_type()
{
  typedef ns_EpicsPvHeader_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("pvId", offsetof(DsType, pvId), hdf5pp::TypeTraits<int16_t>::stored_type());
  type.insert("dbrType", offsetof(DsType, dbrType), hdf5pp::TypeTraits<int16_t>::stored_type());
  type.insert("numElements", offsetof(DsType, numElements), hdf5pp::TypeTraits<int16_t>::stored_type());
  return type;
}

hdf5pp::Type ns_EpicsPvHeader_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_EpicsPvHeader_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_EpicsPvHeader_v0_dataset_data_native_type()
{
  typedef ns_EpicsPvHeader_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("pvId", offsetof(DsType, pvId), hdf5pp::TypeTraits<int16_t>::native_type());
  type.insert("dbrType", offsetof(DsType, dbrType), hdf5pp::TypeTraits<int16_t>::native_type());
  type.insert("numElements", offsetof(DsType, numElements), hdf5pp::TypeTraits<int16_t>::native_type());
  return type;
}

hdf5pp::Type ns_EpicsPvHeader_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_EpicsPvHeader_v0_dataset_data_native_type();
  return type;
}

ns_EpicsPvHeader_v0::dataset_data::dataset_data()
{
}

ns_EpicsPvHeader_v0::dataset_data::dataset_data(const Psana::Epics::EpicsPvHeader& psanaobj)
  : pvId(psanaobj.pvId())
  , dbrType(psanaobj.dbrType())
  , numElements(psanaobj.numElements())
{
}

ns_EpicsPvHeader_v0::dataset_data::~dataset_data()
{
}
int16_t EpicsPvHeader_v0::pvId() const {
  if (not m_ds_data) read_ds_data();
  return int16_t(m_ds_data->pvId);
}
int16_t EpicsPvHeader_v0::dbrType() const {
  if (not m_ds_data) read_ds_data();
  return int16_t(m_ds_data->dbrType);
}
int16_t EpicsPvHeader_v0::numElements() const {
  if (not m_ds_data) read_ds_data();
  return int16_t(m_ds_data->numElements);
}
uint8_t
EpicsPvHeader_v0::isCtrl() const{ 
return this->dbrType() >= DBR_CTRL_STRING and this->dbrType() <= DBR_CTRL_DOUBLE; 
}
uint8_t
EpicsPvHeader_v0::isTime() const{ 
return this->dbrType() >= DBR_TIME_STRING and this->dbrType() <= DBR_TIME_DOUBLE; 
}


void EpicsPvHeader_v0::read_ds_data() const {
  m_ds_data = hdf5pp::Utils::readGroup<Epics::ns_EpicsPvHeader_v0::dataset_data>(m_group, "data", m_idx);
}

void store_EpicsPvHeader_v0(const Psana::Epics::EpicsPvHeader& obj, hdf5pp::Group group, bool append)
{
}


hdf5pp::Type ns_PvConfigV1_v0_dataset_data_stored_type()
{
  typedef ns_PvConfigV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("pvId", offsetof(DsType, pvId), hdf5pp::TypeTraits<int16_t>::stored_type());
  type.insert("description", offsetof(DsType, description), hdf5pp::TypeTraits<const char*>::stored_type(64));
  type.insert("interval", offsetof(DsType, interval), hdf5pp::TypeTraits<float>::stored_type());
  return type;
}

hdf5pp::Type ns_PvConfigV1_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_PvConfigV1_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_PvConfigV1_v0_dataset_data_native_type()
{
  typedef ns_PvConfigV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("pvId", offsetof(DsType, pvId), hdf5pp::TypeTraits<int16_t>::native_type());
  type.insert("description", offsetof(DsType, description), hdf5pp::TypeTraits<const char*>::native_type(64));
  type.insert("interval", offsetof(DsType, interval), hdf5pp::TypeTraits<float>::native_type());
  return type;
}

hdf5pp::Type ns_PvConfigV1_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_PvConfigV1_v0_dataset_data_native_type();
  return type;
}

ns_PvConfigV1_v0::dataset_data::dataset_data()
{
}

ns_PvConfigV1_v0::dataset_data::dataset_data(const Psana::Epics::PvConfigV1& psanaobj)
  : pvId(psanaobj.pvId())
  , interval(psanaobj.interval())
{
  strncpy(description, psanaobj.description(), 64);
}

ns_PvConfigV1_v0::dataset_data::~dataset_data()
{
}

hdf5pp::Type ns_ConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_ConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("numPv", offsetof(DsType, numPv), hdf5pp::TypeTraits<int32_t>::stored_type());
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
  type.insert("numPv", offsetof(DsType, numPv), hdf5pp::TypeTraits<int32_t>::native_type());
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

ns_ConfigV1_v0::dataset_config::dataset_config(const Psana::Epics::ConfigV1& psanaobj)
  : numPv(psanaobj.numPv())
{
}

ns_ConfigV1_v0::dataset_config::~dataset_config()
{
}
int32_t ConfigV1_v0::numPv() const {
  if (not m_ds_config) read_ds_config();
  return int32_t(m_ds_config->numPv);
}
ndarray<const Psana::Epics::PvConfigV1, 1> ConfigV1_v0::pvControls() const {
  if (m_ds_pvConfig.empty()) read_ds_pvConfig();
  return m_ds_pvConfig;
}
void ConfigV1_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<Epics::ns_ConfigV1_v0::dataset_config>(m_group, "config", m_idx);
}
void ConfigV1_v0::read_ds_pvConfig() const {
  ndarray<Epics::ns_PvConfigV1_v0::dataset_data, 1> arr = hdf5pp::Utils::readNdarray<Epics::ns_PvConfigV1_v0::dataset_data, 1>(m_group, "pvConfig", m_idx);
  ndarray<Psana::Epics::PvConfigV1, 1> tmp(arr.shape());
  std::copy(arr.begin(), arr.end(), tmp.begin());
  m_ds_pvConfig = tmp;
}

void store_ConfigV1_v0(const Psana::Epics::ConfigV1& obj, hdf5pp::Group group, bool append)
{
}

boost::shared_ptr<PSEvt::Proxy<Psana::Epics::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Epics::ConfigV1> >(boost::make_shared<ConfigV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Epics::ConfigV1> >(boost::shared_ptr<Psana::Epics::ConfigV1>());
  }
}

void store_ConfigV1(const Psana::Epics::ConfigV1& obj, hdf5pp::Group group, int version, bool append)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    store_ConfigV1_v0(obj, group, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Epics.ConfigV1", version);
  }
}

void store(const Psana::Epics::ConfigV1& obj, hdf5pp::Group group, int version) 
{
  store_ConfigV1(obj, group, version, false);
}

void append(const Psana::Epics::ConfigV1& obj, hdf5pp::Group group, int version)
{
  store_ConfigV1(obj, group, version, true);
}

} // namespace Epics
} // namespace psddl_hdf2psana
