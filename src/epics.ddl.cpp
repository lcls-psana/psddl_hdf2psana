
// *** Do not edit this file, it is auto-generated ***

#include "psddl_hdf2psana/epics.ddl.h"
#include "hdf5pp/ArrayType.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/EnumType.h"
#include "hdf5pp/VlenType.h"
#include "hdf5pp/Utils.h"
#include "PSEvt/DataProxy.h"
#include "psddl_hdf2psana/Exceptions.h"
#include "psddl_hdf2psana/HdfParameters.h"
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

void make_datasets_EpicsPvHeader_v0(const Psana::Epics::EpicsPvHeader& obj, 
      hdf5pp::Group group, hsize_t chunk_size, int deflate, bool shuffle)
{
  {
    hdf5pp::Type dstype = Epics::ns_EpicsPvHeader_v0::dataset_data::stored_type();
    unsigned chunk_cache_size = HdfParameters::chunkCacheSize(dstype, chunk_size);
    hdf5pp::Utils::createDataset(group, "data", dstype, chunk_size, chunk_cache_size, deflate, shuffle);    
  }
}

void store_EpicsPvHeader_v0(const Psana::Epics::EpicsPvHeader* obj, hdf5pp::Group group, long index, bool append)
{
  if (obj) {
    Epics::ns_EpicsPvHeader_v0::dataset_data ds_data(*obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "data", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "data", ds_data);
    }
  } else if (append) {
    hdf5pp::Utils::resizeDataset(group, "data", index < 0 ? index : index + 1);
  }
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
ndarray<const Psana::Epics::PvConfigV1, 1> ConfigV1_v0::getPvConfig() const {
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

void make_datasets_ConfigV1_v0(const Psana::Epics::ConfigV1& obj, 
      hdf5pp::Group group, hsize_t chunk_size, int deflate, bool shuffle)
{
  {
    hdf5pp::Type dstype = Epics::ns_ConfigV1_v0::dataset_config::stored_type();
    unsigned chunk_cache_size = HdfParameters::chunkCacheSize(dstype, chunk_size);
    hdf5pp::Utils::createDataset(group, "config", dstype, chunk_size, chunk_cache_size, deflate, shuffle);    
  }
  {
    typedef __typeof__(obj.getPvConfig()) PsanaArray;
    const PsanaArray& psana_array = obj.getPvConfig();
    hdf5pp::Type dstype = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<Epics::ns_PvConfigV1_v0::dataset_data>::stored_type(), psana_array.shape()[0]);
    unsigned chunk_cache_size = HdfParameters::chunkCacheSize(dstype, chunk_size);
    hdf5pp::Utils::createDataset(group, "pvConfig", dstype, chunk_size, chunk_cache_size, deflate, shuffle);    
  }
}

void store_ConfigV1_v0(const Psana::Epics::ConfigV1* obj, hdf5pp::Group group, long index, bool append)
{
  if (obj) {
    Epics::ns_ConfigV1_v0::dataset_config ds_data(*obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "config", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "config", ds_data);
    }
  } else if (append) {
    hdf5pp::Utils::resizeDataset(group, "config", index < 0 ? index : index + 1);
  }
  if (obj) {
    typedef __typeof__(obj->getPvConfig()) PsanaArray;
    typedef ndarray<Epics::ns_PvConfigV1_v0::dataset_data, 1> HdfArray;
    PsanaArray psana_array = obj->getPvConfig();
    HdfArray hdf_array(psana_array.shape());
    HdfArray::iterator out = hdf_array.begin();
    for (PsanaArray::iterator it = psana_array.begin(); it != psana_array.end(); ++ it, ++ out) {
      *out = Epics::ns_PvConfigV1_v0::dataset_data(*it);
    }
    if (append) {
      hdf5pp::Utils::storeNDArrayAt(group, "pvConfig", hdf_array, index);
    } else {
      hdf5pp::Utils::storeNDArray(group, "pvConfig", hdf_array);
    }
  } else if (append) {
    hdf5pp::Utils::resizeDataset(group, "pvConfig", index < 0 ? index : index + 1);
  }
}

boost::shared_ptr<PSEvt::Proxy<Psana::Epics::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Epics::ConfigV1> >(boost::make_shared<ConfigV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Epics::ConfigV1> >(boost::shared_ptr<Psana::Epics::ConfigV1>());
  }
}

void make_datasets(const Psana::Epics::ConfigV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 0;
  group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    make_datasets_ConfigV1_v0(obj, group, chunk_size, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Epics.ConfigV1", version);
  }
}

void store_ConfigV1(const Psana::Epics::ConfigV1* obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 0;
  if (not append) group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    store_ConfigV1_v0(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Epics.ConfigV1", version);
  }
}

void store(const Psana::Epics::ConfigV1& obj, hdf5pp::Group group, int version) 
{
  store_ConfigV1(&obj, group, 0, version, false);
}

void store_at(const Psana::Epics::ConfigV1* obj, hdf5pp::Group group, long index, int version)
{
  store_ConfigV1(obj, group, index, version, true);
}

} // namespace Epics
} // namespace psddl_hdf2psana
