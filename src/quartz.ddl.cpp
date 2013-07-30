
// *** Do not edit this file, it is auto-generated ***

#include "psddl_hdf2psana/quartz.ddl.h"
#include "hdf5pp/ArrayType.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/EnumType.h"
#include "hdf5pp/VlenType.h"
#include "hdf5pp/Utils.h"
#include "PSEvt/DataProxy.h"
#include "psddl_hdf2psana/Exceptions.h"
namespace psddl_hdf2psana {
namespace Quartz {

hdf5pp::Type ns_ConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_ConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("black_level", offsetof(DsType, black_level), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("gain_percent", offsetof(DsType, gain_percent), hdf5pp::TypeTraits<uint16_t>::stored_type());
  hdf5pp::EnumType<uint8_t> _enum_type_output_resolution = hdf5pp::EnumType<uint8_t>::enumType();
  _enum_type_output_resolution.insert("Eight_bit", Psana::Quartz::ConfigV1::Eight_bit);
  _enum_type_output_resolution.insert("Ten_bit", Psana::Quartz::ConfigV1::Ten_bit);
  type.insert("output_resolution", offsetof(DsType, output_resolution), _enum_type_output_resolution);
  hdf5pp::EnumType<uint8_t> _enum_type_horizontal_binning = hdf5pp::EnumType<uint8_t>::enumType();
  _enum_type_horizontal_binning.insert("x1", Psana::Quartz::ConfigV1::x1);
  _enum_type_horizontal_binning.insert("x2", Psana::Quartz::ConfigV1::x2);
  _enum_type_horizontal_binning.insert("x4", Psana::Quartz::ConfigV1::x4);
  type.insert("horizontal_binning", offsetof(DsType, horizontal_binning), _enum_type_horizontal_binning);
  hdf5pp::EnumType<uint8_t> _enum_type_vertical_binning = hdf5pp::EnumType<uint8_t>::enumType();
  _enum_type_vertical_binning.insert("x1", Psana::Quartz::ConfigV1::x1);
  _enum_type_vertical_binning.insert("x2", Psana::Quartz::ConfigV1::x2);
  _enum_type_vertical_binning.insert("x4", Psana::Quartz::ConfigV1::x4);
  type.insert("vertical_binning", offsetof(DsType, vertical_binning), _enum_type_vertical_binning);
  hdf5pp::EnumType<uint8_t> _enum_type_output_mirroring = hdf5pp::EnumType<uint8_t>::enumType();
  _enum_type_output_mirroring.insert("None", Psana::Quartz::ConfigV1::None);
  _enum_type_output_mirroring.insert("HFlip", Psana::Quartz::ConfigV1::HFlip);
  _enum_type_output_mirroring.insert("VFlip", Psana::Quartz::ConfigV1::VFlip);
  _enum_type_output_mirroring.insert("HVFlip", Psana::Quartz::ConfigV1::HVFlip);
  type.insert("output_mirroring", offsetof(DsType, output_mirroring), _enum_type_output_mirroring);
  type.insert("output_lookup_table_enabled", offsetof(DsType, output_lookup_table_enabled), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("defect_pixel_correction_enabled", offsetof(DsType, defect_pixel_correction_enabled), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("number_of_defect_pixels", offsetof(DsType, number_of_defect_pixels), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("output_offset", offsetof(DsType, output_offset), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("output_resolution_bits", offsetof(DsType, output_resolution_bits), hdf5pp::TypeTraits<uint32_t>::stored_type());
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
  type.insert("black_level", offsetof(DsType, black_level), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("gain_percent", offsetof(DsType, gain_percent), hdf5pp::TypeTraits<uint16_t>::native_type());
  hdf5pp::EnumType<uint8_t> _enum_type_output_resolution = hdf5pp::EnumType<uint8_t>::enumType();
  _enum_type_output_resolution.insert("Eight_bit", Psana::Quartz::ConfigV1::Eight_bit);
  _enum_type_output_resolution.insert("Ten_bit", Psana::Quartz::ConfigV1::Ten_bit);
  type.insert("output_resolution", offsetof(DsType, output_resolution), _enum_type_output_resolution);
  hdf5pp::EnumType<uint8_t> _enum_type_horizontal_binning = hdf5pp::EnumType<uint8_t>::enumType();
  _enum_type_horizontal_binning.insert("x1", Psana::Quartz::ConfigV1::x1);
  _enum_type_horizontal_binning.insert("x2", Psana::Quartz::ConfigV1::x2);
  _enum_type_horizontal_binning.insert("x4", Psana::Quartz::ConfigV1::x4);
  type.insert("horizontal_binning", offsetof(DsType, horizontal_binning), _enum_type_horizontal_binning);
  hdf5pp::EnumType<uint8_t> _enum_type_vertical_binning = hdf5pp::EnumType<uint8_t>::enumType();
  _enum_type_vertical_binning.insert("x1", Psana::Quartz::ConfigV1::x1);
  _enum_type_vertical_binning.insert("x2", Psana::Quartz::ConfigV1::x2);
  _enum_type_vertical_binning.insert("x4", Psana::Quartz::ConfigV1::x4);
  type.insert("vertical_binning", offsetof(DsType, vertical_binning), _enum_type_vertical_binning);
  hdf5pp::EnumType<uint8_t> _enum_type_output_mirroring = hdf5pp::EnumType<uint8_t>::enumType();
  _enum_type_output_mirroring.insert("None", Psana::Quartz::ConfigV1::None);
  _enum_type_output_mirroring.insert("HFlip", Psana::Quartz::ConfigV1::HFlip);
  _enum_type_output_mirroring.insert("VFlip", Psana::Quartz::ConfigV1::VFlip);
  _enum_type_output_mirroring.insert("HVFlip", Psana::Quartz::ConfigV1::HVFlip);
  type.insert("output_mirroring", offsetof(DsType, output_mirroring), _enum_type_output_mirroring);
  type.insert("output_lookup_table_enabled", offsetof(DsType, output_lookup_table_enabled), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("defect_pixel_correction_enabled", offsetof(DsType, defect_pixel_correction_enabled), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("number_of_defect_pixels", offsetof(DsType, number_of_defect_pixels), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("output_offset", offsetof(DsType, output_offset), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("output_resolution_bits", offsetof(DsType, output_resolution_bits), hdf5pp::TypeTraits<uint32_t>::native_type());
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

ns_ConfigV1_v0::dataset_config::dataset_config(const Psana::Quartz::ConfigV1& psanaobj)
  : black_level(psanaobj.black_level())
  , gain_percent(psanaobj.gain_percent())
  , output_resolution(psanaobj.output_resolution())
  , horizontal_binning(psanaobj.horizontal_binning())
  , vertical_binning(psanaobj.vertical_binning())
  , output_mirroring(psanaobj.output_mirroring())
  , output_lookup_table_enabled(psanaobj.output_lookup_table_enabled())
  , defect_pixel_correction_enabled(psanaobj.defect_pixel_correction_enabled())
  , number_of_defect_pixels(psanaobj.number_of_defect_pixels())
  , output_offset(psanaobj.output_offset())
  , output_resolution_bits(psanaobj.output_resolution_bits())
{
}

ns_ConfigV1_v0::dataset_config::~dataset_config()
{
}
uint16_t ConfigV1_v0::black_level() const {
  if (not m_ds_config) read_ds_config();
  return uint16_t(m_ds_config->black_level);
}
uint16_t ConfigV1_v0::gain_percent() const {
  if (not m_ds_config) read_ds_config();
  return uint16_t(m_ds_config->gain_percent);
}
Psana::Quartz::ConfigV1::Depth ConfigV1_v0::output_resolution() const {
  if (not m_ds_config) read_ds_config();
  return Psana::Quartz::ConfigV1::Depth(m_ds_config->output_resolution);
}
Psana::Quartz::ConfigV1::Binning ConfigV1_v0::horizontal_binning() const {
  if (not m_ds_config) read_ds_config();
  return Psana::Quartz::ConfigV1::Binning(m_ds_config->horizontal_binning);
}
Psana::Quartz::ConfigV1::Binning ConfigV1_v0::vertical_binning() const {
  if (not m_ds_config) read_ds_config();
  return Psana::Quartz::ConfigV1::Binning(m_ds_config->vertical_binning);
}
Psana::Quartz::ConfigV1::Mirroring ConfigV1_v0::output_mirroring() const {
  if (not m_ds_config) read_ds_config();
  return Psana::Quartz::ConfigV1::Mirroring(m_ds_config->output_mirroring);
}
uint8_t ConfigV1_v0::output_lookup_table_enabled() const {
  if (not m_ds_config) read_ds_config();
  return uint8_t(m_ds_config->output_lookup_table_enabled);
}
uint8_t ConfigV1_v0::defect_pixel_correction_enabled() const {
  if (not m_ds_config) read_ds_config();
  return uint8_t(m_ds_config->defect_pixel_correction_enabled);
}
uint32_t ConfigV1_v0::number_of_defect_pixels() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->number_of_defect_pixels);
}
ndarray<const uint16_t, 1> ConfigV1_v0::output_lookup_table() const {
  if (m_ds_output_lookup_table.empty()) read_ds_output_lookup_table();
  return m_ds_output_lookup_table;
}
ndarray<const Psana::Camera::FrameCoord, 1> ConfigV1_v0::defect_pixel_coordinates() const {
  if (m_ds_defect_pixel_coordinates.empty()) read_ds_defect_pixel_coordinates();
  return m_ds_defect_pixel_coordinates;
}
uint16_t ConfigV1_v0::output_offset() const {
  if (not m_ds_config) read_ds_config();
  return uint16_t(m_ds_config->output_offset);
}
uint32_t ConfigV1_v0::output_resolution_bits() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->output_resolution_bits);
}
void ConfigV1_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<Quartz::ns_ConfigV1_v0::dataset_config>(m_group, "config", m_idx);
}
void ConfigV1_v0::read_ds_output_lookup_table() const {
  m_ds_output_lookup_table = hdf5pp::Utils::readNdarray<uint16_t, 1>(m_group, "output_lookup_table", m_idx);
}
void ConfigV1_v0::read_ds_defect_pixel_coordinates() const {
  ndarray<Camera::ns_FrameCoord_v0::dataset_data, 1> arr = hdf5pp::Utils::readNdarray<Camera::ns_FrameCoord_v0::dataset_data, 1>(m_group, "defect_pixel_coordinates", m_idx);
  ndarray<Psana::Camera::FrameCoord, 1> tmp(arr.shape());
  std::copy(arr.begin(), arr.end(), tmp.begin());
  m_ds_defect_pixel_coordinates = tmp;
}

void store_ConfigV1_v0(const Psana::Quartz::ConfigV1& obj, hdf5pp::Group group, bool append)
{
}

boost::shared_ptr<PSEvt::Proxy<Psana::Quartz::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Quartz::ConfigV1> >(boost::make_shared<ConfigV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Quartz::ConfigV1> >(boost::shared_ptr<Psana::Quartz::ConfigV1>());
  }
}

void store_ConfigV1(const Psana::Quartz::ConfigV1& obj, hdf5pp::Group group, int version, bool append)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    store_ConfigV1_v0(obj, group, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Quartz.ConfigV1", version);
  }
}

void store(const Psana::Quartz::ConfigV1& obj, hdf5pp::Group group, int version) 
{
  store_ConfigV1(obj, group, version, false);
}

void append(const Psana::Quartz::ConfigV1& obj, hdf5pp::Group group, int version)
{
  store_ConfigV1(obj, group, version, true);
}

} // namespace Quartz
} // namespace psddl_hdf2psana
