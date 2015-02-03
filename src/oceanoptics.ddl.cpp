
// *** Do not edit this file, it is auto-generated ***

#include "psddl_hdf2psana/oceanoptics.ddl.h"
#include "hdf5pp/ArrayType.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/EnumType.h"
#include "hdf5pp/VlenType.h"
#include "hdf5pp/Utils.h"
#include "PSEvt/DataProxy.h"
#include "psddl_hdf2psana/Exceptions.h"
#include "psddl_hdf2psana/oceanoptics.h"
namespace psddl_hdf2psana {
namespace OceanOptics {

hdf5pp::Type ns_ConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_ConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("exposureTime", offsetof(DsType, exposureTime), hdf5pp::TypeTraits<float>::stored_type());
  hsize_t _array_type_waveLenCalib_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_waveLenCalib = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<double>::stored_type(), 1, _array_type_waveLenCalib_shape);
  type.insert("waveLenCalib", offsetof(DsType, waveLenCalib), _array_type_waveLenCalib);
  hsize_t _array_type_nonlinCorrect_shape[] = { 8 };
  hdf5pp::ArrayType _array_type_nonlinCorrect = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<double>::stored_type(), 1, _array_type_nonlinCorrect_shape);
  type.insert("nonlinCorrect", offsetof(DsType, nonlinCorrect), _array_type_nonlinCorrect);
  type.insert("strayLightConstant", offsetof(DsType, strayLightConstant), hdf5pp::TypeTraits<double>::stored_type());
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
  type.insert("exposureTime", offsetof(DsType, exposureTime), hdf5pp::TypeTraits<float>::native_type());
  hsize_t _array_type_waveLenCalib_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_waveLenCalib = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<double>::native_type(), 1, _array_type_waveLenCalib_shape);
  type.insert("waveLenCalib", offsetof(DsType, waveLenCalib), _array_type_waveLenCalib);
  hsize_t _array_type_nonlinCorrect_shape[] = { 8 };
  hdf5pp::ArrayType _array_type_nonlinCorrect = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<double>::native_type(), 1, _array_type_nonlinCorrect_shape);
  type.insert("nonlinCorrect", offsetof(DsType, nonlinCorrect), _array_type_nonlinCorrect);
  type.insert("strayLightConstant", offsetof(DsType, strayLightConstant), hdf5pp::TypeTraits<double>::native_type());
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

ns_ConfigV1_v0::dataset_config::dataset_config(const Psana::OceanOptics::ConfigV1& psanaobj)
  : exposureTime(psanaobj.exposureTime())
  , strayLightConstant(psanaobj.strayLightConstant())
{
  {
    const __typeof__(psanaobj.waveLenCalib())& arr = psanaobj.waveLenCalib();
    std::copy(arr.begin(), arr.begin()+4, waveLenCalib);
  }
  {
    const __typeof__(psanaobj.nonlinCorrect())& arr = psanaobj.nonlinCorrect();
    std::copy(arr.begin(), arr.begin()+8, nonlinCorrect);
  }
}

ns_ConfigV1_v0::dataset_config::~dataset_config()
{
}
float ConfigV1_v0::exposureTime() const {
  if (not m_ds_config) read_ds_config();
  return float(m_ds_config->exposureTime);
}
ndarray<const double, 1> ConfigV1_v0::waveLenCalib() const {
  if (not m_ds_config) read_ds_config();
  boost::shared_ptr<double> ptr(m_ds_config, m_ds_config->waveLenCalib);
  return make_ndarray(ptr, 4);
}
ndarray<const double, 1> ConfigV1_v0::nonlinCorrect() const {
  if (not m_ds_config) read_ds_config();
  boost::shared_ptr<double> ptr(m_ds_config, m_ds_config->nonlinCorrect);
  return make_ndarray(ptr, 8);
}
double ConfigV1_v0::strayLightConstant() const {
  if (not m_ds_config) read_ds_config();
  return double(m_ds_config->strayLightConstant);
}
void ConfigV1_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<OceanOptics::ns_ConfigV1_v0::dataset_config>(m_group, "config", m_idx);
}

void make_datasets_ConfigV1_v0(const Psana::OceanOptics::ConfigV1& obj, 
      hdf5pp::Group group, const ChunkPolicy& chunkPolicy, int deflate, bool shuffle)
{
  {
    hdf5pp::Type dstype = OceanOptics::ns_ConfigV1_v0::dataset_config::stored_type();
    hdf5pp::Utils::createDataset(group, "config", dstype, chunkPolicy.chunkSize(dstype), chunkPolicy.chunkCacheSize(dstype), deflate, shuffle);    
  }
}

void store_ConfigV1_v0(const Psana::OceanOptics::ConfigV1* obj, hdf5pp::Group group, long index, bool append)
{
  if (obj) {
    OceanOptics::ns_ConfigV1_v0::dataset_config ds_data(*obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "config", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "config", ds_data);
    }
  } else if (append) {
    hdf5pp::Utils::resizeDataset(group, "config", index < 0 ? index : index + 1);
  }
}

boost::shared_ptr<PSEvt::Proxy<Psana::OceanOptics::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::OceanOptics::ConfigV1> >(boost::make_shared<ConfigV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::OceanOptics::ConfigV1> >(boost::shared_ptr<Psana::OceanOptics::ConfigV1>());
  }
}

void make_datasets(const Psana::OceanOptics::ConfigV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 0;
  group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    make_datasets_ConfigV1_v0(obj, group, chunkPolicy, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "OceanOptics.ConfigV1", version);
  }
}

void store_ConfigV1(const Psana::OceanOptics::ConfigV1* obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 0;
  if (not append) group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    store_ConfigV1_v0(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "OceanOptics.ConfigV1", version);
  }
}

void store(const Psana::OceanOptics::ConfigV1& obj, hdf5pp::Group group, int version) 
{
  store_ConfigV1(&obj, group, 0, version, false);
}

void store_at(const Psana::OceanOptics::ConfigV1* obj, hdf5pp::Group group, long index, int version)
{
  store_ConfigV1(obj, group, index, version, true);
}


hdf5pp::Type ns_ConfigV2_v0_dataset_config_stored_type()
{
  typedef ns_ConfigV2_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("exposureTime", offsetof(DsType, exposureTime), hdf5pp::TypeTraits<float>::stored_type());
  type.insert("deviceType", offsetof(DsType, deviceType), hdf5pp::TypeTraits<int32_t>::stored_type());
  hsize_t _array_type_waveLenCalib_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_waveLenCalib = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<double>::stored_type(), 1, _array_type_waveLenCalib_shape);
  type.insert("waveLenCalib", offsetof(DsType, waveLenCalib), _array_type_waveLenCalib);
  hsize_t _array_type_nonlinCorrect_shape[] = { 8 };
  hdf5pp::ArrayType _array_type_nonlinCorrect = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<double>::stored_type(), 1, _array_type_nonlinCorrect_shape);
  type.insert("nonlinCorrect", offsetof(DsType, nonlinCorrect), _array_type_nonlinCorrect);
  type.insert("strayLightConstant", offsetof(DsType, strayLightConstant), hdf5pp::TypeTraits<double>::stored_type());
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
  type.insert("exposureTime", offsetof(DsType, exposureTime), hdf5pp::TypeTraits<float>::native_type());
  type.insert("deviceType", offsetof(DsType, deviceType), hdf5pp::TypeTraits<int32_t>::native_type());
  hsize_t _array_type_waveLenCalib_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_waveLenCalib = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<double>::native_type(), 1, _array_type_waveLenCalib_shape);
  type.insert("waveLenCalib", offsetof(DsType, waveLenCalib), _array_type_waveLenCalib);
  hsize_t _array_type_nonlinCorrect_shape[] = { 8 };
  hdf5pp::ArrayType _array_type_nonlinCorrect = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<double>::native_type(), 1, _array_type_nonlinCorrect_shape);
  type.insert("nonlinCorrect", offsetof(DsType, nonlinCorrect), _array_type_nonlinCorrect);
  type.insert("strayLightConstant", offsetof(DsType, strayLightConstant), hdf5pp::TypeTraits<double>::native_type());
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

ns_ConfigV2_v0::dataset_config::dataset_config(const Psana::OceanOptics::ConfigV2& psanaobj)
  : exposureTime(psanaobj.exposureTime())
  , deviceType(psanaobj.deviceType())
  , strayLightConstant(psanaobj.strayLightConstant())
{
  {
    const __typeof__(psanaobj.waveLenCalib())& arr = psanaobj.waveLenCalib();
    std::copy(arr.begin(), arr.begin()+4, waveLenCalib);
  }
  {
    const __typeof__(psanaobj.nonlinCorrect())& arr = psanaobj.nonlinCorrect();
    std::copy(arr.begin(), arr.begin()+8, nonlinCorrect);
  }
}

ns_ConfigV2_v0::dataset_config::~dataset_config()
{
}
float ConfigV2_v0::exposureTime() const {
  if (not m_ds_config) read_ds_config();
  return float(m_ds_config->exposureTime);
}
int32_t ConfigV2_v0::deviceType() const {
  if (not m_ds_config) read_ds_config();
  return int32_t(m_ds_config->deviceType);
}
ndarray<const double, 1> ConfigV2_v0::waveLenCalib() const {
  if (not m_ds_config) read_ds_config();
  boost::shared_ptr<double> ptr(m_ds_config, m_ds_config->waveLenCalib);
  return make_ndarray(ptr, 4);
}
ndarray<const double, 1> ConfigV2_v0::nonlinCorrect() const {
  if (not m_ds_config) read_ds_config();
  boost::shared_ptr<double> ptr(m_ds_config, m_ds_config->nonlinCorrect);
  return make_ndarray(ptr, 8);
}
double ConfigV2_v0::strayLightConstant() const {
  if (not m_ds_config) read_ds_config();
  return double(m_ds_config->strayLightConstant);
}
void ConfigV2_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<OceanOptics::ns_ConfigV2_v0::dataset_config>(m_group, "config", m_idx);
}

void make_datasets_ConfigV2_v0(const Psana::OceanOptics::ConfigV2& obj, 
      hdf5pp::Group group, const ChunkPolicy& chunkPolicy, int deflate, bool shuffle)
{
  {
    hdf5pp::Type dstype = OceanOptics::ns_ConfigV2_v0::dataset_config::stored_type();
    hdf5pp::Utils::createDataset(group, "config", dstype, chunkPolicy.chunkSize(dstype), chunkPolicy.chunkCacheSize(dstype), deflate, shuffle);    
  }
}

void store_ConfigV2_v0(const Psana::OceanOptics::ConfigV2* obj, hdf5pp::Group group, long index, bool append)
{
  if (obj) {
    OceanOptics::ns_ConfigV2_v0::dataset_config ds_data(*obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "config", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "config", ds_data);
    }
  } else if (append) {
    hdf5pp::Utils::resizeDataset(group, "config", index < 0 ? index : index + 1);
  }
}

boost::shared_ptr<PSEvt::Proxy<Psana::OceanOptics::ConfigV2> > make_ConfigV2(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::OceanOptics::ConfigV2> >(boost::make_shared<ConfigV2_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::OceanOptics::ConfigV2> >(boost::shared_ptr<Psana::OceanOptics::ConfigV2>());
  }
}

void make_datasets(const Psana::OceanOptics::ConfigV2& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 0;
  group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    make_datasets_ConfigV2_v0(obj, group, chunkPolicy, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "OceanOptics.ConfigV2", version);
  }
}

void store_ConfigV2(const Psana::OceanOptics::ConfigV2* obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 0;
  if (not append) group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    store_ConfigV2_v0(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "OceanOptics.ConfigV2", version);
  }
}

void store(const Psana::OceanOptics::ConfigV2& obj, hdf5pp::Group group, int version) 
{
  store_ConfigV2(&obj, group, 0, version, false);
}

void store_at(const Psana::OceanOptics::ConfigV2* obj, hdf5pp::Group group, long index, int version)
{
  store_ConfigV2(obj, group, index, version, true);
}


hdf5pp::Type ns_timespec64_v0_dataset_data_stored_type()
{
  typedef ns_timespec64_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("seconds", offsetof(DsType, seconds), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("nanoseconds", offsetof(DsType, nanoseconds), hdf5pp::TypeTraits<uint32_t>::stored_type());
  return type;
}

hdf5pp::Type ns_timespec64_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_timespec64_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_timespec64_v0_dataset_data_native_type()
{
  typedef ns_timespec64_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("seconds", offsetof(DsType, seconds), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("nanoseconds", offsetof(DsType, nanoseconds), hdf5pp::TypeTraits<uint32_t>::native_type());
  return type;
}

hdf5pp::Type ns_timespec64_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_timespec64_v0_dataset_data_native_type();
  return type;
}

ns_timespec64_v0::dataset_data::dataset_data()
{
}

ns_timespec64_v0::dataset_data::dataset_data(const Psana::OceanOptics::timespec64& psanaobj)
  : seconds(psanaobj.tv_sec())
  , nanoseconds(psanaobj.tv_nsec())
{
}

ns_timespec64_v0::dataset_data::~dataset_data()
{
}
boost::shared_ptr<PSEvt::Proxy<Psana::OceanOptics::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::OceanOptics::ConfigV1>& cfg) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::OceanOptics::DataV1> >(boost::make_shared<DataV1_v0<Psana::OceanOptics::ConfigV1> >(group, idx, cfg));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::OceanOptics::DataV1> >(boost::shared_ptr<Psana::OceanOptics::DataV1>());
  }
}
boost::shared_ptr<PSEvt::Proxy<Psana::OceanOptics::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::OceanOptics::ConfigV2>& cfg) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::OceanOptics::DataV1> >(boost::make_shared<DataV1_v0<Psana::OceanOptics::ConfigV2> >(group, idx, cfg));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::OceanOptics::DataV1> >(boost::shared_ptr<Psana::OceanOptics::DataV1>());
  }
}

void make_datasets(const Psana::OceanOptics::DataV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 0;
  group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    make_datasets_DataV1_v0(obj, group, chunkPolicy, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "OceanOptics.DataV1", version);
  }
}

void store_DataV1(const Psana::OceanOptics::DataV1* obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 0;
  if (not append) group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    store_DataV1_v0(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "OceanOptics.DataV1", version);
  }
}

void store(const Psana::OceanOptics::DataV1& obj, hdf5pp::Group group, int version) 
{
  store_DataV1(&obj, group, 0, version, false);
}

void store_at(const Psana::OceanOptics::DataV1* obj, hdf5pp::Group group, long index, int version)
{
  store_DataV1(obj, group, index, version, true);
}

boost::shared_ptr<PSEvt::Proxy<Psana::OceanOptics::DataV2> > make_DataV2(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::OceanOptics::ConfigV2>& cfg) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::OceanOptics::DataV2> >(boost::make_shared<DataV2_v0<Psana::OceanOptics::ConfigV2> >(group, idx, cfg));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::OceanOptics::DataV2> >(boost::shared_ptr<Psana::OceanOptics::DataV2>());
  }
}

void make_datasets(const Psana::OceanOptics::DataV2& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 0;
  group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    make_datasets_DataV2_v0(obj, group, chunkPolicy, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "OceanOptics.DataV2", version);
  }
}

void store_DataV2(const Psana::OceanOptics::DataV2* obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 0;
  if (not append) group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    store_DataV2_v0(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "OceanOptics.DataV2", version);
  }
}

void store(const Psana::OceanOptics::DataV2& obj, hdf5pp::Group group, int version) 
{
  store_DataV2(&obj, group, 0, version, false);
}

void store_at(const Psana::OceanOptics::DataV2* obj, hdf5pp::Group group, long index, int version)
{
  store_DataV2(obj, group, index, version, true);
}

boost::shared_ptr<PSEvt::Proxy<Psana::OceanOptics::DataV3> > make_DataV3(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::OceanOptics::ConfigV2>& cfg) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::OceanOptics::DataV3> >(boost::make_shared<DataV3_v0<Psana::OceanOptics::ConfigV2> >(group, idx, cfg));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::OceanOptics::DataV3> >(boost::shared_ptr<Psana::OceanOptics::DataV3>());
  }
}

void make_datasets(const Psana::OceanOptics::DataV3& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 0;
  group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    make_datasets_DataV3_v0(obj, group, chunkPolicy, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "OceanOptics.DataV3", version);
  }
}

void store_DataV3(const Psana::OceanOptics::DataV3* obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 0;
  if (not append) group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    store_DataV3_v0(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "OceanOptics.DataV3", version);
  }
}

void store(const Psana::OceanOptics::DataV3& obj, hdf5pp::Group group, int version) 
{
  store_DataV3(&obj, group, 0, version, false);
}

void store_at(const Psana::OceanOptics::DataV3* obj, hdf5pp::Group group, long index, int version)
{
  store_DataV3(obj, group, index, version, true);
}

} // namespace OceanOptics
} // namespace psddl_hdf2psana
