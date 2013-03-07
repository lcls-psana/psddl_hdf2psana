
// *** Do not edit this file, it is auto-generated ***

#include "psddl_hdf2psana/pulnix.ddl.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/EnumType.h"
#include "hdf5pp/Utils.h"
#include "PSEvt/DataProxy.h"
namespace psddl_hdf2psana {
namespace Pulnix {

hdf5pp::Type ns_TM6740ConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_TM6740ConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("gain_a", offsetof(DsType, gain_a), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("gain_b", offsetof(DsType, gain_b), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("vref", offsetof(DsType, vref), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("shutter_width", offsetof(DsType, shutter_width), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("gain_balance", offsetof(DsType, gain_balance), hdf5pp::TypeTraits<uint8_t>::stored_type());
    hdf5pp::EnumType<int32_t> _enum_type_output_resolution = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_output_resolution.insert("Eight_bit", Psana::Pulnix::TM6740ConfigV1::Eight_bit);
  _enum_type_output_resolution.insert("Ten_bit", Psana::Pulnix::TM6740ConfigV1::Ten_bit);
  type.insert("output_resolution", offsetof(DsType, output_resolution), _enum_type_output_resolution);
    hdf5pp::EnumType<int32_t> _enum_type_horizontal_binning = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_horizontal_binning.insert("x1", Psana::Pulnix::TM6740ConfigV1::x1);
  _enum_type_horizontal_binning.insert("x2", Psana::Pulnix::TM6740ConfigV1::x2);
  _enum_type_horizontal_binning.insert("x4", Psana::Pulnix::TM6740ConfigV1::x4);
  type.insert("horizontal_binning", offsetof(DsType, horizontal_binning), _enum_type_horizontal_binning);
    hdf5pp::EnumType<int32_t> _enum_type_vertical_binning = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_vertical_binning.insert("x1", Psana::Pulnix::TM6740ConfigV1::x1);
  _enum_type_vertical_binning.insert("x2", Psana::Pulnix::TM6740ConfigV1::x2);
  _enum_type_vertical_binning.insert("x4", Psana::Pulnix::TM6740ConfigV1::x4);
  type.insert("vertical_binning", offsetof(DsType, vertical_binning), _enum_type_vertical_binning);
    hdf5pp::EnumType<int32_t> _enum_type_lookuptable_mode = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_lookuptable_mode.insert("Gamma", Psana::Pulnix::TM6740ConfigV1::Gamma);
  _enum_type_lookuptable_mode.insert("Linear", Psana::Pulnix::TM6740ConfigV1::Linear);
  type.insert("lookuptable_mode", offsetof(DsType, lookuptable_mode), _enum_type_lookuptable_mode);
  type.insert("output_resolution_bits", offsetof(DsType, output_resolution_bits), hdf5pp::TypeTraits<uint8_t>::stored_type());
  return type;
}

hdf5pp::Type ns_TM6740ConfigV1_v0::dataset_config::stored_type()
{
  static hdf5pp::Type type = ns_TM6740ConfigV1_v0_dataset_config_stored_type();
  return type;
}

hdf5pp::Type ns_TM6740ConfigV1_v0_dataset_config_native_type()
{
  typedef ns_TM6740ConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("gain_a", offsetof(DsType, gain_a), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("gain_b", offsetof(DsType, gain_b), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("vref", offsetof(DsType, vref), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("shutter_width", offsetof(DsType, shutter_width), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("gain_balance", offsetof(DsType, gain_balance), hdf5pp::TypeTraits<uint8_t>::native_type());
    hdf5pp::EnumType<int32_t> _enum_type_output_resolution = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_output_resolution.insert("Eight_bit", Psana::Pulnix::TM6740ConfigV1::Eight_bit);
  _enum_type_output_resolution.insert("Ten_bit", Psana::Pulnix::TM6740ConfigV1::Ten_bit);
  type.insert("output_resolution", offsetof(DsType, output_resolution), _enum_type_output_resolution);
    hdf5pp::EnumType<int32_t> _enum_type_horizontal_binning = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_horizontal_binning.insert("x1", Psana::Pulnix::TM6740ConfigV1::x1);
  _enum_type_horizontal_binning.insert("x2", Psana::Pulnix::TM6740ConfigV1::x2);
  _enum_type_horizontal_binning.insert("x4", Psana::Pulnix::TM6740ConfigV1::x4);
  type.insert("horizontal_binning", offsetof(DsType, horizontal_binning), _enum_type_horizontal_binning);
    hdf5pp::EnumType<int32_t> _enum_type_vertical_binning = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_vertical_binning.insert("x1", Psana::Pulnix::TM6740ConfigV1::x1);
  _enum_type_vertical_binning.insert("x2", Psana::Pulnix::TM6740ConfigV1::x2);
  _enum_type_vertical_binning.insert("x4", Psana::Pulnix::TM6740ConfigV1::x4);
  type.insert("vertical_binning", offsetof(DsType, vertical_binning), _enum_type_vertical_binning);
    hdf5pp::EnumType<int32_t> _enum_type_lookuptable_mode = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_lookuptable_mode.insert("Gamma", Psana::Pulnix::TM6740ConfigV1::Gamma);
  _enum_type_lookuptable_mode.insert("Linear", Psana::Pulnix::TM6740ConfigV1::Linear);
  type.insert("lookuptable_mode", offsetof(DsType, lookuptable_mode), _enum_type_lookuptable_mode);
  type.insert("output_resolution_bits", offsetof(DsType, output_resolution_bits), hdf5pp::TypeTraits<uint8_t>::native_type());
  return type;
}

hdf5pp::Type ns_TM6740ConfigV1_v0::dataset_config::native_type()
{
  static hdf5pp::Type type = ns_TM6740ConfigV1_v0_dataset_config_native_type();
  return type;
}
ns_TM6740ConfigV1_v0::dataset_config::dataset_config()
{
}
ns_TM6740ConfigV1_v0::dataset_config::~dataset_config()
{
}
uint16_t TM6740ConfigV1_v0::gain_a() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint16_t(m_ds_config->gain_a);
}
uint16_t TM6740ConfigV1_v0::gain_b() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint16_t(m_ds_config->gain_b);
}
uint16_t TM6740ConfigV1_v0::vref() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint16_t(m_ds_config->vref);
}
uint16_t TM6740ConfigV1_v0::shutter_width() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint16_t(m_ds_config->shutter_width);
}
uint8_t TM6740ConfigV1_v0::gain_balance() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint8_t(m_ds_config->gain_balance);
}
Psana::Pulnix::TM6740ConfigV1::Depth TM6740ConfigV1_v0::output_resolution() const {
  if (not m_ds_config.get()) read_ds_config();
  return Psana::Pulnix::TM6740ConfigV1::Depth(m_ds_config->output_resolution);
}
Psana::Pulnix::TM6740ConfigV1::Binning TM6740ConfigV1_v0::horizontal_binning() const {
  if (not m_ds_config.get()) read_ds_config();
  return Psana::Pulnix::TM6740ConfigV1::Binning(m_ds_config->horizontal_binning);
}
Psana::Pulnix::TM6740ConfigV1::Binning TM6740ConfigV1_v0::vertical_binning() const {
  if (not m_ds_config.get()) read_ds_config();
  return Psana::Pulnix::TM6740ConfigV1::Binning(m_ds_config->vertical_binning);
}
Psana::Pulnix::TM6740ConfigV1::LookupTable TM6740ConfigV1_v0::lookuptable_mode() const {
  if (not m_ds_config.get()) read_ds_config();
  return Psana::Pulnix::TM6740ConfigV1::LookupTable(m_ds_config->lookuptable_mode);
}
uint8_t TM6740ConfigV1_v0::output_resolution_bits() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint8_t(m_ds_config->output_resolution_bits);
}
void TM6740ConfigV1_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<Pulnix::ns_TM6740ConfigV1_v0::dataset_config>(m_group, "config", m_idx);
}
boost::shared_ptr<PSEvt::Proxy<Psana::Pulnix::TM6740ConfigV1> > make_TM6740ConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Pulnix::TM6740ConfigV1> >(boost::make_shared<TM6740ConfigV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Pulnix::TM6740ConfigV1> >(boost::shared_ptr<Psana::Pulnix::TM6740ConfigV1>());
  }
}

hdf5pp::Type ns_TM6740ConfigV2_v0_dataset_config_stored_type()
{
  typedef ns_TM6740ConfigV2_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("gain_a", offsetof(DsType, gain_a), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("gain_b", offsetof(DsType, gain_b), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("vref_a", offsetof(DsType, vref_a), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("vref_b", offsetof(DsType, vref_b), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("gain_balance", offsetof(DsType, gain_balance), hdf5pp::TypeTraits<uint8_t>::stored_type());
    hdf5pp::EnumType<int32_t> _enum_type_output_resolution = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_output_resolution.insert("Eight_bit", Psana::Pulnix::TM6740ConfigV2::Eight_bit);
  _enum_type_output_resolution.insert("Ten_bit", Psana::Pulnix::TM6740ConfigV2::Ten_bit);
  type.insert("output_resolution", offsetof(DsType, output_resolution), _enum_type_output_resolution);
    hdf5pp::EnumType<int32_t> _enum_type_horizontal_binning = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_horizontal_binning.insert("x1", Psana::Pulnix::TM6740ConfigV2::x1);
  _enum_type_horizontal_binning.insert("x2", Psana::Pulnix::TM6740ConfigV2::x2);
  _enum_type_horizontal_binning.insert("x4", Psana::Pulnix::TM6740ConfigV2::x4);
  type.insert("horizontal_binning", offsetof(DsType, horizontal_binning), _enum_type_horizontal_binning);
    hdf5pp::EnumType<int32_t> _enum_type_vertical_binning = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_vertical_binning.insert("x1", Psana::Pulnix::TM6740ConfigV2::x1);
  _enum_type_vertical_binning.insert("x2", Psana::Pulnix::TM6740ConfigV2::x2);
  _enum_type_vertical_binning.insert("x4", Psana::Pulnix::TM6740ConfigV2::x4);
  type.insert("vertical_binning", offsetof(DsType, vertical_binning), _enum_type_vertical_binning);
    hdf5pp::EnumType<int32_t> _enum_type_lookuptable_mode = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_lookuptable_mode.insert("Gamma", Psana::Pulnix::TM6740ConfigV2::Gamma);
  _enum_type_lookuptable_mode.insert("Linear", Psana::Pulnix::TM6740ConfigV2::Linear);
  type.insert("lookuptable_mode", offsetof(DsType, lookuptable_mode), _enum_type_lookuptable_mode);
  type.insert("output_resolution_bits", offsetof(DsType, output_resolution_bits), hdf5pp::TypeTraits<uint8_t>::stored_type());
  return type;
}

hdf5pp::Type ns_TM6740ConfigV2_v0::dataset_config::stored_type()
{
  static hdf5pp::Type type = ns_TM6740ConfigV2_v0_dataset_config_stored_type();
  return type;
}

hdf5pp::Type ns_TM6740ConfigV2_v0_dataset_config_native_type()
{
  typedef ns_TM6740ConfigV2_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("gain_a", offsetof(DsType, gain_a), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("gain_b", offsetof(DsType, gain_b), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("vref_a", offsetof(DsType, vref_a), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("vref_b", offsetof(DsType, vref_b), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("gain_balance", offsetof(DsType, gain_balance), hdf5pp::TypeTraits<uint8_t>::native_type());
    hdf5pp::EnumType<int32_t> _enum_type_output_resolution = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_output_resolution.insert("Eight_bit", Psana::Pulnix::TM6740ConfigV2::Eight_bit);
  _enum_type_output_resolution.insert("Ten_bit", Psana::Pulnix::TM6740ConfigV2::Ten_bit);
  type.insert("output_resolution", offsetof(DsType, output_resolution), _enum_type_output_resolution);
    hdf5pp::EnumType<int32_t> _enum_type_horizontal_binning = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_horizontal_binning.insert("x1", Psana::Pulnix::TM6740ConfigV2::x1);
  _enum_type_horizontal_binning.insert("x2", Psana::Pulnix::TM6740ConfigV2::x2);
  _enum_type_horizontal_binning.insert("x4", Psana::Pulnix::TM6740ConfigV2::x4);
  type.insert("horizontal_binning", offsetof(DsType, horizontal_binning), _enum_type_horizontal_binning);
    hdf5pp::EnumType<int32_t> _enum_type_vertical_binning = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_vertical_binning.insert("x1", Psana::Pulnix::TM6740ConfigV2::x1);
  _enum_type_vertical_binning.insert("x2", Psana::Pulnix::TM6740ConfigV2::x2);
  _enum_type_vertical_binning.insert("x4", Psana::Pulnix::TM6740ConfigV2::x4);
  type.insert("vertical_binning", offsetof(DsType, vertical_binning), _enum_type_vertical_binning);
    hdf5pp::EnumType<int32_t> _enum_type_lookuptable_mode = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_lookuptable_mode.insert("Gamma", Psana::Pulnix::TM6740ConfigV2::Gamma);
  _enum_type_lookuptable_mode.insert("Linear", Psana::Pulnix::TM6740ConfigV2::Linear);
  type.insert("lookuptable_mode", offsetof(DsType, lookuptable_mode), _enum_type_lookuptable_mode);
  type.insert("output_resolution_bits", offsetof(DsType, output_resolution_bits), hdf5pp::TypeTraits<uint8_t>::native_type());
  return type;
}

hdf5pp::Type ns_TM6740ConfigV2_v0::dataset_config::native_type()
{
  static hdf5pp::Type type = ns_TM6740ConfigV2_v0_dataset_config_native_type();
  return type;
}
ns_TM6740ConfigV2_v0::dataset_config::dataset_config()
{
}
ns_TM6740ConfigV2_v0::dataset_config::~dataset_config()
{
}
uint16_t TM6740ConfigV2_v0::gain_a() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint16_t(m_ds_config->gain_a);
}
uint16_t TM6740ConfigV2_v0::gain_b() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint16_t(m_ds_config->gain_b);
}
uint16_t TM6740ConfigV2_v0::vref_a() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint16_t(m_ds_config->vref_a);
}
uint16_t TM6740ConfigV2_v0::vref_b() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint16_t(m_ds_config->vref_b);
}
uint8_t TM6740ConfigV2_v0::gain_balance() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint8_t(m_ds_config->gain_balance);
}
Psana::Pulnix::TM6740ConfigV2::Depth TM6740ConfigV2_v0::output_resolution() const {
  if (not m_ds_config.get()) read_ds_config();
  return Psana::Pulnix::TM6740ConfigV2::Depth(m_ds_config->output_resolution);
}
Psana::Pulnix::TM6740ConfigV2::Binning TM6740ConfigV2_v0::horizontal_binning() const {
  if (not m_ds_config.get()) read_ds_config();
  return Psana::Pulnix::TM6740ConfigV2::Binning(m_ds_config->horizontal_binning);
}
Psana::Pulnix::TM6740ConfigV2::Binning TM6740ConfigV2_v0::vertical_binning() const {
  if (not m_ds_config.get()) read_ds_config();
  return Psana::Pulnix::TM6740ConfigV2::Binning(m_ds_config->vertical_binning);
}
Psana::Pulnix::TM6740ConfigV2::LookupTable TM6740ConfigV2_v0::lookuptable_mode() const {
  if (not m_ds_config.get()) read_ds_config();
  return Psana::Pulnix::TM6740ConfigV2::LookupTable(m_ds_config->lookuptable_mode);
}
uint8_t TM6740ConfigV2_v0::output_resolution_bits() const {
  if (not m_ds_config.get()) read_ds_config();
  return uint8_t(m_ds_config->output_resolution_bits);
}
void TM6740ConfigV2_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<Pulnix::ns_TM6740ConfigV2_v0::dataset_config>(m_group, "config", m_idx);
}
boost::shared_ptr<PSEvt::Proxy<Psana::Pulnix::TM6740ConfigV2> > make_TM6740ConfigV2(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Pulnix::TM6740ConfigV2> >(boost::make_shared<TM6740ConfigV2_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Pulnix::TM6740ConfigV2> >(boost::shared_ptr<Psana::Pulnix::TM6740ConfigV2>());
  }
}
} // namespace Pulnix
} // namespace psddl_hdf2psana
