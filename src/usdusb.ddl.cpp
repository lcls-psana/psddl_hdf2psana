
// *** Do not edit this file, it is auto-generated ***

#include "psddl_hdf2psana/usdusb.ddl.h"
#include "hdf5pp/ArrayType.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/EnumType.h"
#include "hdf5pp/VlenType.h"
#include "hdf5pp/Utils.h"
#include "PSEvt/DataProxy.h"
#include "psddl_hdf2psana/Exceptions.h"
#include "psddl_hdf2psana/HdfParameters.h"
#include "psddl_hdf2psana/usdusb.h"
namespace psddl_hdf2psana {
namespace UsdUsb {

hdf5pp::Type ns_ConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_ConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  hdf5pp::EnumType<uint32_t> _enum_type_counting_mode = hdf5pp::EnumType<uint32_t>::enumType();
  _enum_type_counting_mode.insert("WRAP_FULL", Psana::UsdUsb::ConfigV1::WRAP_FULL);
  _enum_type_counting_mode.insert("LIMIT", Psana::UsdUsb::ConfigV1::LIMIT);
  _enum_type_counting_mode.insert("HALT", Psana::UsdUsb::ConfigV1::HALT);
  _enum_type_counting_mode.insert("WRAP_PRESET", Psana::UsdUsb::ConfigV1::WRAP_PRESET);
  hsize_t _array_type_counting_mode_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_counting_mode = hdf5pp::ArrayType::arrayType(_enum_type_counting_mode, 1, _array_type_counting_mode_shape);
  type.insert("counting_mode", offsetof(DsType, counting_mode), _array_type_counting_mode);
  hdf5pp::EnumType<uint32_t> _enum_type_quadrature_mode = hdf5pp::EnumType<uint32_t>::enumType();
  _enum_type_quadrature_mode.insert("CLOCK_DIR", Psana::UsdUsb::ConfigV1::CLOCK_DIR);
  _enum_type_quadrature_mode.insert("X1", Psana::UsdUsb::ConfigV1::X1);
  _enum_type_quadrature_mode.insert("X2", Psana::UsdUsb::ConfigV1::X2);
  _enum_type_quadrature_mode.insert("X4", Psana::UsdUsb::ConfigV1::X4);
  hsize_t _array_type_quadrature_mode_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_quadrature_mode = hdf5pp::ArrayType::arrayType(_enum_type_quadrature_mode, 1, _array_type_quadrature_mode_shape);
  type.insert("quadrature_mode", offsetof(DsType, quadrature_mode), _array_type_quadrature_mode);
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
  hdf5pp::EnumType<uint32_t> _enum_type_counting_mode = hdf5pp::EnumType<uint32_t>::enumType();
  _enum_type_counting_mode.insert("WRAP_FULL", Psana::UsdUsb::ConfigV1::WRAP_FULL);
  _enum_type_counting_mode.insert("LIMIT", Psana::UsdUsb::ConfigV1::LIMIT);
  _enum_type_counting_mode.insert("HALT", Psana::UsdUsb::ConfigV1::HALT);
  _enum_type_counting_mode.insert("WRAP_PRESET", Psana::UsdUsb::ConfigV1::WRAP_PRESET);
  hsize_t _array_type_counting_mode_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_counting_mode = hdf5pp::ArrayType::arrayType(_enum_type_counting_mode, 1, _array_type_counting_mode_shape);
  type.insert("counting_mode", offsetof(DsType, counting_mode), _array_type_counting_mode);
  hdf5pp::EnumType<uint32_t> _enum_type_quadrature_mode = hdf5pp::EnumType<uint32_t>::enumType();
  _enum_type_quadrature_mode.insert("CLOCK_DIR", Psana::UsdUsb::ConfigV1::CLOCK_DIR);
  _enum_type_quadrature_mode.insert("X1", Psana::UsdUsb::ConfigV1::X1);
  _enum_type_quadrature_mode.insert("X2", Psana::UsdUsb::ConfigV1::X2);
  _enum_type_quadrature_mode.insert("X4", Psana::UsdUsb::ConfigV1::X4);
  hsize_t _array_type_quadrature_mode_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_quadrature_mode = hdf5pp::ArrayType::arrayType(_enum_type_quadrature_mode, 1, _array_type_quadrature_mode_shape);
  type.insert("quadrature_mode", offsetof(DsType, quadrature_mode), _array_type_quadrature_mode);
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

ns_ConfigV1_v0::dataset_config::dataset_config(const Psana::UsdUsb::ConfigV1& psanaobj)
{
  {
    const __typeof__(psanaobj.counting_mode())& arr = psanaobj.counting_mode();
    std::copy(arr.begin(), arr.begin()+4, counting_mode);
  }
  {
    const __typeof__(psanaobj.quadrature_mode())& arr = psanaobj.quadrature_mode();
    std::copy(arr.begin(), arr.begin()+4, quadrature_mode);
  }
}

ns_ConfigV1_v0::dataset_config::~dataset_config()
{
}
ndarray<const uint32_t, 1> ConfigV1_v0::counting_mode() const {
  if (not m_ds_config) read_ds_config();
  boost::shared_ptr<uint32_t> ptr(m_ds_config, m_ds_config->counting_mode);
  return make_ndarray(ptr, NCHANNELS);
}
ndarray<const uint32_t, 1> ConfigV1_v0::quadrature_mode() const {
  if (not m_ds_config) read_ds_config();
  boost::shared_ptr<uint32_t> ptr(m_ds_config, m_ds_config->quadrature_mode);
  return make_ndarray(ptr, NCHANNELS);
}
void ConfigV1_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<UsdUsb::ns_ConfigV1_v0::dataset_config>(m_group, "config", m_idx);
}

void make_datasets_ConfigV1_v0(const Psana::UsdUsb::ConfigV1& obj, 
      hdf5pp::Group group, hsize_t chunk_size, int deflate, bool shuffle)
{
  {
    hdf5pp::Type dstype = UsdUsb::ns_ConfigV1_v0::dataset_config::stored_type();
    unsigned chunk_cache_size = HdfParameters::chunkCacheSize(dstype, chunk_size);
    hdf5pp::Utils::createDataset(group, "config", dstype, chunk_size, chunk_cache_size, deflate, shuffle);    
  }
}

void store_ConfigV1_v0(const Psana::UsdUsb::ConfigV1* obj, hdf5pp::Group group, long index, bool append)
{
  if (obj) {
    UsdUsb::ns_ConfigV1_v0::dataset_config ds_data(*obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "config", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "config", ds_data);
    }
  } else if (append) {
    hdf5pp::Utils::resizeDataset(group, "config", index < 0 ? index : index + 1);
  }
}

boost::shared_ptr<PSEvt::Proxy<Psana::UsdUsb::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::UsdUsb::ConfigV1> >(boost::make_shared<ConfigV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::UsdUsb::ConfigV1> >(boost::shared_ptr<Psana::UsdUsb::ConfigV1>());
  }
}

void make_datasets(const Psana::UsdUsb::ConfigV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 0;
  group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    make_datasets_ConfigV1_v0(obj, group, chunk_size, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "UsdUsb.ConfigV1", version);
  }
}

void store_ConfigV1(const Psana::UsdUsb::ConfigV1* obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 0;
  if (not append) group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    store_ConfigV1_v0(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "UsdUsb.ConfigV1", version);
  }
}

void store(const Psana::UsdUsb::ConfigV1& obj, hdf5pp::Group group, int version) 
{
  store_ConfigV1(&obj, group, 0, version, false);
}

void store_at(const Psana::UsdUsb::ConfigV1* obj, hdf5pp::Group group, long index, int version)
{
  store_ConfigV1(obj, group, index, version, true);
}


hdf5pp::Type ns_DataV1_v1_dataset_data_stored_type()
{
  typedef ns_DataV1_v1::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("digital_in", offsetof(DsType, digital_in), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("timestamp", offsetof(DsType, timestamp), hdf5pp::TypeTraits<uint32_t>::stored_type());
  hsize_t _array_type_status_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_status = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<uint8_t>::stored_type(), 1, _array_type_status_shape);
  type.insert("status", offsetof(DsType, status), _array_type_status);
  hsize_t _array_type_analog_in_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_analog_in = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<uint16_t>::stored_type(), 1, _array_type_analog_in_shape);
  type.insert("analog_in", offsetof(DsType, analog_in), _array_type_analog_in);
  hsize_t _array_type_encoder_count_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_encoder_count = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<int32_t>::stored_type(), 1, _array_type_encoder_count_shape);
  type.insert("encoder_count", offsetof(DsType, encoder_count), _array_type_encoder_count);
  return type;
}

hdf5pp::Type ns_DataV1_v1::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_DataV1_v1_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_DataV1_v1_dataset_data_native_type()
{
  typedef ns_DataV1_v1::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("digital_in", offsetof(DsType, digital_in), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("timestamp", offsetof(DsType, timestamp), hdf5pp::TypeTraits<uint32_t>::native_type());
  hsize_t _array_type_status_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_status = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<uint8_t>::native_type(), 1, _array_type_status_shape);
  type.insert("status", offsetof(DsType, status), _array_type_status);
  hsize_t _array_type_analog_in_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_analog_in = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<uint16_t>::native_type(), 1, _array_type_analog_in_shape);
  type.insert("analog_in", offsetof(DsType, analog_in), _array_type_analog_in);
  hsize_t _array_type_encoder_count_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_encoder_count = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<int32_t>::native_type(), 1, _array_type_encoder_count_shape);
  type.insert("encoder_count", offsetof(DsType, encoder_count), _array_type_encoder_count);
  return type;
}

hdf5pp::Type ns_DataV1_v1::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_DataV1_v1_dataset_data_native_type();
  return type;
}

ns_DataV1_v1::dataset_data::dataset_data()
{
}

ns_DataV1_v1::dataset_data::dataset_data(const Psana::UsdUsb::DataV1& psanaobj)
  : digital_in(psanaobj.digital_in())
  , timestamp(psanaobj.timestamp())
{
  {
    const __typeof__(psanaobj.status())& arr = psanaobj.status();
    std::copy(arr.begin(), arr.begin()+4, status);
  }
  {
    const __typeof__(psanaobj.analog_in())& arr = psanaobj.analog_in();
    std::copy(arr.begin(), arr.begin()+4, analog_in);
  }
  {
    const __typeof__(psanaobj.encoder_count())& arr = psanaobj.encoder_count();
    std::copy(arr.begin(), arr.begin()+4, encoder_count);
  }
}

ns_DataV1_v1::dataset_data::~dataset_data()
{
}
uint8_t DataV1_v1::digital_in() const {
  if (not m_ds_data) read_ds_data();
  return uint8_t(m_ds_data->digital_in);
}
uint32_t DataV1_v1::timestamp() const {
  if (not m_ds_data) read_ds_data();
  return uint32_t(m_ds_data->timestamp);
}
ndarray<const uint8_t, 1> DataV1_v1::status() const {
  if (not m_ds_data) read_ds_data();
  boost::shared_ptr<uint8_t> ptr(m_ds_data, m_ds_data->status);
  return make_ndarray(ptr, 4);
}
ndarray<const uint16_t, 1> DataV1_v1::analog_in() const {
  if (not m_ds_data) read_ds_data();
  boost::shared_ptr<uint16_t> ptr(m_ds_data, m_ds_data->analog_in);
  return make_ndarray(ptr, Analog_Inputs);
}
ndarray<const int32_t, 1> DataV1_v1::encoder_count() const {
  if (not m_ds_data) read_ds_data();
  boost::shared_ptr<int32_t> ptr(m_ds_data, m_ds_data->encoder_count);
  return make_ndarray(ptr, Encoder_Inputs);
}
void DataV1_v1::read_ds_data() const {
  m_ds_data = hdf5pp::Utils::readGroup<UsdUsb::ns_DataV1_v1::dataset_data>(m_group, "data", m_idx);
}

void make_datasets_DataV1_v1(const Psana::UsdUsb::DataV1& obj, 
      hdf5pp::Group group, hsize_t chunk_size, int deflate, bool shuffle)
{
  {
    hdf5pp::Type dstype = UsdUsb::ns_DataV1_v1::dataset_data::stored_type();
    unsigned chunk_cache_size = HdfParameters::chunkCacheSize(dstype, chunk_size);
    hdf5pp::Utils::createDataset(group, "data", dstype, chunk_size, chunk_cache_size, deflate, shuffle);    
  }
}

void store_DataV1_v1(const Psana::UsdUsb::DataV1* obj, hdf5pp::Group group, long index, bool append)
{
  if (obj) {
    UsdUsb::ns_DataV1_v1::dataset_data ds_data(*obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "data", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "data", ds_data);
    }
  } else if (append) {
    hdf5pp::Utils::resizeDataset(group, "data", index < 0 ? index : index + 1);
  }
}

boost::shared_ptr<PSEvt::Proxy<Psana::UsdUsb::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::UsdUsb::DataV1> >(boost::make_shared<DataV1_v0>(group, idx));
  case 1:
    return boost::make_shared<PSEvt::DataProxy<Psana::UsdUsb::DataV1> >(boost::make_shared<DataV1_v1>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::UsdUsb::DataV1> >(boost::shared_ptr<Psana::UsdUsb::DataV1>());
  }
}

void make_datasets(const Psana::UsdUsb::DataV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 1;
  group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    make_datasets_DataV1_v0(obj, group, chunk_size, deflate, shuffle);
    break;
  case 1:
    make_datasets_DataV1_v1(obj, group, chunk_size, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "UsdUsb.DataV1", version);
  }
}

void store_DataV1(const Psana::UsdUsb::DataV1* obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 1;
  if (not append) group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    store_DataV1_v0(obj, group, index, append);
    break;
  case 1:
    store_DataV1_v1(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "UsdUsb.DataV1", version);
  }
}

void store(const Psana::UsdUsb::DataV1& obj, hdf5pp::Group group, int version) 
{
  store_DataV1(&obj, group, 0, version, false);
}

void store_at(const Psana::UsdUsb::DataV1* obj, hdf5pp::Group group, long index, int version)
{
  store_DataV1(obj, group, index, version, true);
}

} // namespace UsdUsb
} // namespace psddl_hdf2psana
