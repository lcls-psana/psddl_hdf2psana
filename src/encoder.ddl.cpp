
// *** Do not edit this file, it is auto-generated ***

#include "psddl_hdf2psana/encoder.ddl.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/EnumType.h"
#include "hdf5pp/Utils.h"
#include "PSEvt/DataProxy.h"
namespace psddl_hdf2psana {
namespace Encoder {

hdf5pp::Type ns_ConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_ConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("chan_num", offsetof(DsType, chan_num), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("count_mode", offsetof(DsType, count_mode), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("quadrature_mode", offsetof(DsType, quadrature_mode), hdf5pp::TypeTraits<uint32_t>::stored_type());
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
  type.insert("count_mode", offsetof(DsType, count_mode), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("quadrature_mode", offsetof(DsType, quadrature_mode), hdf5pp::TypeTraits<uint32_t>::native_type());
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
ns_ConfigV1_v0::dataset_config::~dataset_config()
{
}
uint32_t ConfigV1_v0::chan_num() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->chan_num);
}
uint32_t ConfigV1_v0::count_mode() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->count_mode);
}
uint32_t ConfigV1_v0::quadrature_mode() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->quadrature_mode);
}
uint32_t ConfigV1_v0::input_num() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->input_num);
}
uint32_t ConfigV1_v0::input_rising() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->input_rising);
}
uint32_t ConfigV1_v0::ticks_per_sec() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->ticks_per_sec);
}
void ConfigV1_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<ns_ConfigV1_v0::dataset_config>(m_group, "config", m_idx);
}
boost::shared_ptr<PSEvt::Proxy<Psana::Encoder::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Encoder::ConfigV1> >(boost::make_shared<ConfigV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Encoder::ConfigV1> >(boost::shared_ptr<Psana::Encoder::ConfigV1>());
  }
}

hdf5pp::Type ns_ConfigV2_v0_dataset_config_stored_type()
{
  typedef ns_ConfigV2_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("chan_mask", offsetof(DsType, chan_mask), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("count_mode", offsetof(DsType, count_mode), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("quadrature_mode", offsetof(DsType, quadrature_mode), hdf5pp::TypeTraits<uint32_t>::stored_type());
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
  type.insert("count_mode", offsetof(DsType, count_mode), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("quadrature_mode", offsetof(DsType, quadrature_mode), hdf5pp::TypeTraits<uint32_t>::native_type());
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
ns_ConfigV2_v0::dataset_config::~dataset_config()
{
}
uint32_t ConfigV2_v0::chan_mask() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->chan_mask);
}
uint32_t ConfigV2_v0::count_mode() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->count_mode);
}
uint32_t ConfigV2_v0::quadrature_mode() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->quadrature_mode);
}
uint32_t ConfigV2_v0::input_num() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->input_num);
}
uint32_t ConfigV2_v0::input_rising() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->input_rising);
}
uint32_t ConfigV2_v0::ticks_per_sec() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint32_t(m_ds_config->ticks_per_sec);
}
void ConfigV2_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<ns_ConfigV2_v0::dataset_config>(m_group, "config", m_idx);
}
boost::shared_ptr<PSEvt::Proxy<Psana::Encoder::ConfigV2> > make_ConfigV2(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Encoder::ConfigV2> >(boost::make_shared<ConfigV2_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Encoder::ConfigV2> >(boost::shared_ptr<Psana::Encoder::ConfigV2>());
  }
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
ns_DataV1_v0::dataset_data::~dataset_data()
{
}
uint32_t DataV1_v0::timestamp() const {
  if (not m_ds_data.get()) read_ds_data();
  return uint32_t(m_ds_data->_33mhz_timestamp);
}
uint32_t DataV1_v0::encoder_count() const {
  if (not m_ds_data.get()) read_ds_data();
  return uint32_t(m_ds_data->encoder_count);
}
int32_t
DataV1_v0::value() const{ 
return int(this->encoder_count() << 8)/256;; 
}
void DataV1_v0::read_ds_data() const {
  m_ds_data = hdf5pp::Utils::readGroup<ns_DataV1_v0::dataset_data>(m_group, "data", m_idx);
}
boost::shared_ptr<PSEvt::Proxy<Psana::Encoder::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Encoder::DataV1> >(boost::make_shared<DataV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Encoder::DataV1> >(boost::shared_ptr<Psana::Encoder::DataV1>());
  }
}

hdf5pp::Type ns_DataV2_v0_dataset_data_stored_type()
{
  typedef ns_DataV2_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("_33mhz_timestamp", offsetof(DsType, _33mhz_timestamp), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("encoder_count", offsetof(DsType, encoder_count), hdf5pp::TypeTraits<uint32_t>::stored_type());
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
  type.insert("encoder_count", offsetof(DsType, encoder_count), hdf5pp::TypeTraits<uint32_t>::native_type());
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
ns_DataV2_v0::dataset_data::~dataset_data()
{
}
uint32_t DataV2_v0::timestamp() const {
  if (not m_ds_data.get()) read_ds_data();
  return uint32_t(m_ds_data->_33mhz_timestamp);
}
ndarray<const uint32_t, 1> DataV2_v0::encoder_count() const {
  if (not m_ds_data.get()) read_ds_data();
  boost::shared_ptr<uint32_t> ptr(m_ds_data, m_ds_data->encoder_count);
  return make_ndarray(ptr, NEncoders);
}
int32_t
DataV2_v0::value(uint32_t i) const{ 
return int(this->encoder_count()[i] << 8)/256;; 
}
void DataV2_v0::read_ds_data() const {
  m_ds_data = hdf5pp::Utils::readGroup<ns_DataV2_v0::dataset_data>(m_group, "data", m_idx);
}
boost::shared_ptr<PSEvt::Proxy<Psana::Encoder::DataV2> > make_DataV2(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Encoder::DataV2> >(boost::make_shared<DataV2_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Encoder::DataV2> >(boost::shared_ptr<Psana::Encoder::DataV2>());
  }
}
} // namespace Encoder
} // namespace psddl_hdf2psana
