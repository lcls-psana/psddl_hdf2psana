
// *** Do not edit this file, it is auto-generated ***

#include "psddl_hdf2psana/encoder.ddl.h"
#include "hdf5pp/ArrayType.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/EnumType.h"
#include "hdf5pp/VlenType.h"
#include "hdf5pp/Utils.h"
#include "PSEvt/DataProxy.h"
#include "psddl_hdf2psana/Exceptions.h"
#include "psddl_hdf2psana/HdfParameters.h"
namespace psddl_hdf2psana {
namespace Encoder {

hdf5pp::Type ns_ConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_ConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("chan_num", offsetof(DsType, chan_num), hdf5pp::TypeTraits<uint32_t>::stored_type());
  hdf5pp::EnumType<uint32_t> _enum_type_count_mode = hdf5pp::EnumType<uint32_t>::enumType();
  _enum_type_count_mode.insert("WRAP_FULL", Psana::Encoder::ConfigV1::WRAP_FULL);
  _enum_type_count_mode.insert("LIMIT", Psana::Encoder::ConfigV1::LIMIT);
  _enum_type_count_mode.insert("HALT", Psana::Encoder::ConfigV1::HALT);
  _enum_type_count_mode.insert("WRAP_PRESET", Psana::Encoder::ConfigV1::WRAP_PRESET);
  _enum_type_count_mode.insert("END", Psana::Encoder::ConfigV1::COUNT_END);
  type.insert("count_mode", offsetof(DsType, count_mode), _enum_type_count_mode);
  hdf5pp::EnumType<uint32_t> _enum_type_quadrature_mode = hdf5pp::EnumType<uint32_t>::enumType();
  _enum_type_quadrature_mode.insert("CLOCK_DIR", Psana::Encoder::ConfigV1::CLOCK_DIR);
  _enum_type_quadrature_mode.insert("X1", Psana::Encoder::ConfigV1::X1);
  _enum_type_quadrature_mode.insert("X2", Psana::Encoder::ConfigV1::X2);
  _enum_type_quadrature_mode.insert("X4", Psana::Encoder::ConfigV1::X4);
  _enum_type_quadrature_mode.insert("END", Psana::Encoder::ConfigV1::QUAD_END);
  type.insert("quadrature_mode", offsetof(DsType, quadrature_mode), _enum_type_quadrature_mode);
  type.insert("input_num", offsetof(DsType, input_num), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("input_rising", offsetof(DsType, input_rising), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("ticks_per_sec", offsetof(DsType, ticks_per_sec), hdf5pp::TypeTraits<uint32_t>::stored_type());
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
  type.insert("chan_num", offsetof(DsType, chan_num), hdf5pp::TypeTraits<uint32_t>::native_type());
  hdf5pp::EnumType<uint32_t> _enum_type_count_mode = hdf5pp::EnumType<uint32_t>::enumType();
  _enum_type_count_mode.insert("WRAP_FULL", Psana::Encoder::ConfigV1::WRAP_FULL);
  _enum_type_count_mode.insert("LIMIT", Psana::Encoder::ConfigV1::LIMIT);
  _enum_type_count_mode.insert("HALT", Psana::Encoder::ConfigV1::HALT);
  _enum_type_count_mode.insert("WRAP_PRESET", Psana::Encoder::ConfigV1::WRAP_PRESET);
  _enum_type_count_mode.insert("END", Psana::Encoder::ConfigV1::COUNT_END);
  type.insert("count_mode", offsetof(DsType, count_mode), _enum_type_count_mode);
  hdf5pp::EnumType<uint32_t> _enum_type_quadrature_mode = hdf5pp::EnumType<uint32_t>::enumType();
  _enum_type_quadrature_mode.insert("CLOCK_DIR", Psana::Encoder::ConfigV1::CLOCK_DIR);
  _enum_type_quadrature_mode.insert("X1", Psana::Encoder::ConfigV1::X1);
  _enum_type_quadrature_mode.insert("X2", Psana::Encoder::ConfigV1::X2);
  _enum_type_quadrature_mode.insert("X4", Psana::Encoder::ConfigV1::X4);
  _enum_type_quadrature_mode.insert("END", Psana::Encoder::ConfigV1::QUAD_END);
  type.insert("quadrature_mode", offsetof(DsType, quadrature_mode), _enum_type_quadrature_mode);
  type.insert("input_num", offsetof(DsType, input_num), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("input_rising", offsetof(DsType, input_rising), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("ticks_per_sec", offsetof(DsType, ticks_per_sec), hdf5pp::TypeTraits<uint32_t>::native_type());
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

ns_ConfigV1_v0::dataset_config::dataset_config(const Psana::Encoder::ConfigV1& psanaobj)
  : chan_num(psanaobj.chan_num())
  , count_mode(psanaobj.count_mode())
  , quadrature_mode(psanaobj.quadrature_mode())
  , input_num(psanaobj.input_num())
  , input_rising(psanaobj.input_rising())
  , ticks_per_sec(psanaobj.ticks_per_sec())
{
}

ns_ConfigV1_v0::dataset_config::~dataset_config()
{
}
uint32_t ConfigV1_v0::chan_num() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->chan_num);
}
Psana::Encoder::ConfigV1::count_mode_type ConfigV1_v0::count_mode() const {
  if (not m_ds_config) read_ds_config();
  return Psana::Encoder::ConfigV1::count_mode_type(m_ds_config->count_mode);
}
Psana::Encoder::ConfigV1::quad_mode ConfigV1_v0::quadrature_mode() const {
  if (not m_ds_config) read_ds_config();
  return Psana::Encoder::ConfigV1::quad_mode(m_ds_config->quadrature_mode);
}
uint32_t ConfigV1_v0::input_num() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->input_num);
}
uint32_t ConfigV1_v0::input_rising() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->input_rising);
}
uint32_t ConfigV1_v0::ticks_per_sec() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->ticks_per_sec);
}
void ConfigV1_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<Encoder::ns_ConfigV1_v0::dataset_config>(m_group, "config", m_idx);
}

void make_datasets_ConfigV1_v0(const Psana::Encoder::ConfigV1& obj, 
      hdf5pp::Group group, hsize_t chunk_size, int deflate, bool shuffle)
{
  {
    hdf5pp::Type dstype = Encoder::ns_ConfigV1_v0::dataset_config::stored_type();
    unsigned chunk_cache_size = HdfParameters::chunkCacheSize(dstype, chunk_size);
    hdf5pp::Utils::createDataset(group, "config", dstype, chunk_size, chunk_cache_size, deflate, shuffle);    
  }
}

void store_ConfigV1_v0(const Psana::Encoder::ConfigV1& obj, hdf5pp::Group group, long index, bool append)
{
  {
    Encoder::ns_ConfigV1_v0::dataset_config ds_data(obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "config", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "config", ds_data);
    }
  }
}

boost::shared_ptr<PSEvt::Proxy<Psana::Encoder::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Encoder::ConfigV1> >(boost::make_shared<ConfigV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Encoder::ConfigV1> >(boost::shared_ptr<Psana::Encoder::ConfigV1>());
  }
}

void make_datasets(const Psana::Encoder::ConfigV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    make_datasets_ConfigV1_v0(obj, group, chunk_size, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Encoder.ConfigV1", version);
  }
}

void store_ConfigV1(const Psana::Encoder::ConfigV1& obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    store_ConfigV1_v0(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Encoder.ConfigV1", version);
  }
}

void store(const Psana::Encoder::ConfigV1& obj, hdf5pp::Group group, int version) 
{
  store_ConfigV1(obj, group, 0, version, false);
}

void store_at(const Psana::Encoder::ConfigV1& obj, hdf5pp::Group group, long index, int version)
{
  store_ConfigV1(obj, group, index, version, true);
}


hdf5pp::Type ns_ConfigV2_v0_dataset_config_stored_type()
{
  typedef ns_ConfigV2_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("chan_mask", offsetof(DsType, chan_mask), hdf5pp::TypeTraits<uint32_t>::stored_type());
  hdf5pp::EnumType<uint32_t> _enum_type_count_mode = hdf5pp::EnumType<uint32_t>::enumType();
  _enum_type_count_mode.insert("WRAP_FULL", Psana::Encoder::ConfigV2::WRAP_FULL);
  _enum_type_count_mode.insert("LIMIT", Psana::Encoder::ConfigV2::LIMIT);
  _enum_type_count_mode.insert("HALT", Psana::Encoder::ConfigV2::HALT);
  _enum_type_count_mode.insert("WRAP_PRESET", Psana::Encoder::ConfigV2::WRAP_PRESET);
  _enum_type_count_mode.insert("END", Psana::Encoder::ConfigV2::COUNT_END);
  type.insert("count_mode", offsetof(DsType, count_mode), _enum_type_count_mode);
  hdf5pp::EnumType<uint32_t> _enum_type_quadrature_mode = hdf5pp::EnumType<uint32_t>::enumType();
  _enum_type_quadrature_mode.insert("CLOCK_DIR", Psana::Encoder::ConfigV2::CLOCK_DIR);
  _enum_type_quadrature_mode.insert("X1", Psana::Encoder::ConfigV2::X1);
  _enum_type_quadrature_mode.insert("X2", Psana::Encoder::ConfigV2::X2);
  _enum_type_quadrature_mode.insert("X4", Psana::Encoder::ConfigV2::X4);
  _enum_type_quadrature_mode.insert("END", Psana::Encoder::ConfigV2::QUAD_END);
  type.insert("quadrature_mode", offsetof(DsType, quadrature_mode), _enum_type_quadrature_mode);
  type.insert("input_num", offsetof(DsType, input_num), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("input_rising", offsetof(DsType, input_rising), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("ticks_per_sec", offsetof(DsType, ticks_per_sec), hdf5pp::TypeTraits<uint32_t>::stored_type());
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
  type.insert("chan_mask", offsetof(DsType, chan_mask), hdf5pp::TypeTraits<uint32_t>::native_type());
  hdf5pp::EnumType<uint32_t> _enum_type_count_mode = hdf5pp::EnumType<uint32_t>::enumType();
  _enum_type_count_mode.insert("WRAP_FULL", Psana::Encoder::ConfigV2::WRAP_FULL);
  _enum_type_count_mode.insert("LIMIT", Psana::Encoder::ConfigV2::LIMIT);
  _enum_type_count_mode.insert("HALT", Psana::Encoder::ConfigV2::HALT);
  _enum_type_count_mode.insert("WRAP_PRESET", Psana::Encoder::ConfigV2::WRAP_PRESET);
  _enum_type_count_mode.insert("END", Psana::Encoder::ConfigV2::COUNT_END);
  type.insert("count_mode", offsetof(DsType, count_mode), _enum_type_count_mode);
  hdf5pp::EnumType<uint32_t> _enum_type_quadrature_mode = hdf5pp::EnumType<uint32_t>::enumType();
  _enum_type_quadrature_mode.insert("CLOCK_DIR", Psana::Encoder::ConfigV2::CLOCK_DIR);
  _enum_type_quadrature_mode.insert("X1", Psana::Encoder::ConfigV2::X1);
  _enum_type_quadrature_mode.insert("X2", Psana::Encoder::ConfigV2::X2);
  _enum_type_quadrature_mode.insert("X4", Psana::Encoder::ConfigV2::X4);
  _enum_type_quadrature_mode.insert("END", Psana::Encoder::ConfigV2::QUAD_END);
  type.insert("quadrature_mode", offsetof(DsType, quadrature_mode), _enum_type_quadrature_mode);
  type.insert("input_num", offsetof(DsType, input_num), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("input_rising", offsetof(DsType, input_rising), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("ticks_per_sec", offsetof(DsType, ticks_per_sec), hdf5pp::TypeTraits<uint32_t>::native_type());
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

ns_ConfigV2_v0::dataset_config::dataset_config(const Psana::Encoder::ConfigV2& psanaobj)
  : chan_mask(psanaobj.chan_mask())
  , count_mode(psanaobj.count_mode())
  , quadrature_mode(psanaobj.quadrature_mode())
  , input_num(psanaobj.input_num())
  , input_rising(psanaobj.input_rising())
  , ticks_per_sec(psanaobj.ticks_per_sec())
{
}

ns_ConfigV2_v0::dataset_config::~dataset_config()
{
}
uint32_t ConfigV2_v0::chan_mask() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->chan_mask);
}
Psana::Encoder::ConfigV2::count_mode_type ConfigV2_v0::count_mode() const {
  if (not m_ds_config) read_ds_config();
  return Psana::Encoder::ConfigV2::count_mode_type(m_ds_config->count_mode);
}
Psana::Encoder::ConfigV2::quad_mode ConfigV2_v0::quadrature_mode() const {
  if (not m_ds_config) read_ds_config();
  return Psana::Encoder::ConfigV2::quad_mode(m_ds_config->quadrature_mode);
}
uint32_t ConfigV2_v0::input_num() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->input_num);
}
uint32_t ConfigV2_v0::input_rising() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->input_rising);
}
uint32_t ConfigV2_v0::ticks_per_sec() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->ticks_per_sec);
}
void ConfigV2_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<Encoder::ns_ConfigV2_v0::dataset_config>(m_group, "config", m_idx);
}

void make_datasets_ConfigV2_v0(const Psana::Encoder::ConfigV2& obj, 
      hdf5pp::Group group, hsize_t chunk_size, int deflate, bool shuffle)
{
  {
    hdf5pp::Type dstype = Encoder::ns_ConfigV2_v0::dataset_config::stored_type();
    unsigned chunk_cache_size = HdfParameters::chunkCacheSize(dstype, chunk_size);
    hdf5pp::Utils::createDataset(group, "config", dstype, chunk_size, chunk_cache_size, deflate, shuffle);    
  }
}

void store_ConfigV2_v0(const Psana::Encoder::ConfigV2& obj, hdf5pp::Group group, long index, bool append)
{
  {
    Encoder::ns_ConfigV2_v0::dataset_config ds_data(obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "config", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "config", ds_data);
    }
  }
}

boost::shared_ptr<PSEvt::Proxy<Psana::Encoder::ConfigV2> > make_ConfigV2(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Encoder::ConfigV2> >(boost::make_shared<ConfigV2_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Encoder::ConfigV2> >(boost::shared_ptr<Psana::Encoder::ConfigV2>());
  }
}

void make_datasets(const Psana::Encoder::ConfigV2& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    make_datasets_ConfigV2_v0(obj, group, chunk_size, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Encoder.ConfigV2", version);
  }
}

void store_ConfigV2(const Psana::Encoder::ConfigV2& obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    store_ConfigV2_v0(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Encoder.ConfigV2", version);
  }
}

void store(const Psana::Encoder::ConfigV2& obj, hdf5pp::Group group, int version) 
{
  store_ConfigV2(obj, group, 0, version, false);
}

void store_at(const Psana::Encoder::ConfigV2& obj, hdf5pp::Group group, long index, int version)
{
  store_ConfigV2(obj, group, index, version, true);
}


hdf5pp::Type ns_DataV1_v0_dataset_data_stored_type()
{
  typedef ns_DataV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("_33mhz_timestamp", offsetof(DsType, _33mhz_timestamp), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("encoder_count", offsetof(DsType, encoder_count), hdf5pp::TypeTraits<uint32_t>::stored_type());
  return type;
}

hdf5pp::Type ns_DataV1_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_DataV1_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_DataV1_v0_dataset_data_native_type()
{
  typedef ns_DataV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("_33mhz_timestamp", offsetof(DsType, _33mhz_timestamp), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("encoder_count", offsetof(DsType, encoder_count), hdf5pp::TypeTraits<uint32_t>::native_type());
  return type;
}

hdf5pp::Type ns_DataV1_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_DataV1_v0_dataset_data_native_type();
  return type;
}

ns_DataV1_v0::dataset_data::dataset_data()
{
}

ns_DataV1_v0::dataset_data::dataset_data(const Psana::Encoder::DataV1& psanaobj)
  : _33mhz_timestamp(psanaobj.timestamp())
  , encoder_count(psanaobj.encoder_count())
{
}

ns_DataV1_v0::dataset_data::~dataset_data()
{
}
uint32_t DataV1_v0::timestamp() const {
  if (not m_ds_data) read_ds_data();
  return uint32_t(m_ds_data->_33mhz_timestamp);
}
uint32_t DataV1_v0::encoder_count() const {
  if (not m_ds_data) read_ds_data();
  return uint32_t(m_ds_data->encoder_count);
}
int32_t
DataV1_v0::value() const{ 
return int(this->encoder_count() << 8)/256;; 
}
void DataV1_v0::read_ds_data() const {
  m_ds_data = hdf5pp::Utils::readGroup<Encoder::ns_DataV1_v0::dataset_data>(m_group, "data", m_idx);
}

void make_datasets_DataV1_v0(const Psana::Encoder::DataV1& obj, 
      hdf5pp::Group group, hsize_t chunk_size, int deflate, bool shuffle)
{
  {
    hdf5pp::Type dstype = Encoder::ns_DataV1_v0::dataset_data::stored_type();
    unsigned chunk_cache_size = HdfParameters::chunkCacheSize(dstype, chunk_size);
    hdf5pp::Utils::createDataset(group, "data", dstype, chunk_size, chunk_cache_size, deflate, shuffle);    
  }
}

void store_DataV1_v0(const Psana::Encoder::DataV1& obj, hdf5pp::Group group, long index, bool append)
{
  {
    Encoder::ns_DataV1_v0::dataset_data ds_data(obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "data", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "data", ds_data);
    }
  }
}

boost::shared_ptr<PSEvt::Proxy<Psana::Encoder::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Encoder::DataV1> >(boost::make_shared<DataV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Encoder::DataV1> >(boost::shared_ptr<Psana::Encoder::DataV1>());
  }
}

void make_datasets(const Psana::Encoder::DataV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    make_datasets_DataV1_v0(obj, group, chunk_size, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Encoder.DataV1", version);
  }
}

void store_DataV1(const Psana::Encoder::DataV1& obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    store_DataV1_v0(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Encoder.DataV1", version);
  }
}

void store(const Psana::Encoder::DataV1& obj, hdf5pp::Group group, int version) 
{
  store_DataV1(obj, group, 0, version, false);
}

void store_at(const Psana::Encoder::DataV1& obj, hdf5pp::Group group, long index, int version)
{
  store_DataV1(obj, group, index, version, true);
}


hdf5pp::Type ns_DataV2_v0_dataset_data_stored_type()
{
  typedef ns_DataV2_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("_33mhz_timestamp", offsetof(DsType, _33mhz_timestamp), hdf5pp::TypeTraits<uint32_t>::stored_type());
  hsize_t _array_type_encoder_count_shape[] = { 3 };
  hdf5pp::ArrayType _array_type_encoder_count = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<uint32_t>::stored_type(), 1, _array_type_encoder_count_shape);
  type.insert("encoder_count", offsetof(DsType, encoder_count), _array_type_encoder_count);
  return type;
}

hdf5pp::Type ns_DataV2_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_DataV2_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_DataV2_v0_dataset_data_native_type()
{
  typedef ns_DataV2_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("_33mhz_timestamp", offsetof(DsType, _33mhz_timestamp), hdf5pp::TypeTraits<uint32_t>::native_type());
  hsize_t _array_type_encoder_count_shape[] = { 3 };
  hdf5pp::ArrayType _array_type_encoder_count = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<uint32_t>::native_type(), 1, _array_type_encoder_count_shape);
  type.insert("encoder_count", offsetof(DsType, encoder_count), _array_type_encoder_count);
  return type;
}

hdf5pp::Type ns_DataV2_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_DataV2_v0_dataset_data_native_type();
  return type;
}

ns_DataV2_v0::dataset_data::dataset_data()
{
}

ns_DataV2_v0::dataset_data::dataset_data(const Psana::Encoder::DataV2& psanaobj)
  : _33mhz_timestamp(psanaobj.timestamp())
{
  {
    const __typeof__(psanaobj.encoder_count())& arr = psanaobj.encoder_count();
    std::copy(arr.begin(), arr.begin()+3, encoder_count);
  }
}

ns_DataV2_v0::dataset_data::~dataset_data()
{
}
uint32_t DataV2_v0::timestamp() const {
  if (not m_ds_data) read_ds_data();
  return uint32_t(m_ds_data->_33mhz_timestamp);
}
ndarray<const uint32_t, 1> DataV2_v0::encoder_count() const {
  if (not m_ds_data) read_ds_data();
  boost::shared_ptr<uint32_t> ptr(m_ds_data, m_ds_data->encoder_count);
  return make_ndarray(ptr, NEncoders);
}
int32_t
DataV2_v0::value(uint32_t i) const{ 
return int(this->encoder_count()[i] << 8)/256;; 
}
void DataV2_v0::read_ds_data() const {
  m_ds_data = hdf5pp::Utils::readGroup<Encoder::ns_DataV2_v0::dataset_data>(m_group, "data", m_idx);
}

void make_datasets_DataV2_v0(const Psana::Encoder::DataV2& obj, 
      hdf5pp::Group group, hsize_t chunk_size, int deflate, bool shuffle)
{
  {
    hdf5pp::Type dstype = Encoder::ns_DataV2_v0::dataset_data::stored_type();
    unsigned chunk_cache_size = HdfParameters::chunkCacheSize(dstype, chunk_size);
    hdf5pp::Utils::createDataset(group, "data", dstype, chunk_size, chunk_cache_size, deflate, shuffle);    
  }
}

void store_DataV2_v0(const Psana::Encoder::DataV2& obj, hdf5pp::Group group, long index, bool append)
{
  {
    Encoder::ns_DataV2_v0::dataset_data ds_data(obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "data", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "data", ds_data);
    }
  }
}

boost::shared_ptr<PSEvt::Proxy<Psana::Encoder::DataV2> > make_DataV2(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Encoder::DataV2> >(boost::make_shared<DataV2_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Encoder::DataV2> >(boost::shared_ptr<Psana::Encoder::DataV2>());
  }
}

void make_datasets(const Psana::Encoder::DataV2& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    make_datasets_DataV2_v0(obj, group, chunk_size, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Encoder.DataV2", version);
  }
}

void store_DataV2(const Psana::Encoder::DataV2& obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    store_DataV2_v0(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Encoder.DataV2", version);
  }
}

void store(const Psana::Encoder::DataV2& obj, hdf5pp::Group group, int version) 
{
  store_DataV2(obj, group, 0, version, false);
}

void store_at(const Psana::Encoder::DataV2& obj, hdf5pp::Group group, long index, int version)
{
  store_DataV2(obj, group, index, version, true);
}

} // namespace Encoder
} // namespace psddl_hdf2psana
