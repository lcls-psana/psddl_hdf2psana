
// *** Do not edit this file, it is auto-generated ***

#include "psddl_hdf2psana/gsc16ai.ddl.h"
#include "hdf5pp/ArrayType.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/EnumType.h"
#include "hdf5pp/VlenType.h"
#include "hdf5pp/Utils.h"
#include "PSEvt/DataProxy.h"
namespace psddl_hdf2psana {
namespace Gsc16ai {

hdf5pp::Type ns_ConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_ConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  hdf5pp::EnumType<uint16_t> _enum_type_voltageRange = hdf5pp::EnumType<uint16_t>::enumType();
  _enum_type_voltageRange.insert("VoltageRange_10V", Psana::Gsc16ai::ConfigV1::VoltageRange_10V);
  _enum_type_voltageRange.insert("VoltageRange_5V", Psana::Gsc16ai::ConfigV1::VoltageRange_5V);
  _enum_type_voltageRange.insert("VoltageRange_2_5V", Psana::Gsc16ai::ConfigV1::VoltageRange_2_5V);
  type.insert("voltageRange", offsetof(DsType, voltageRange), _enum_type_voltageRange);
  type.insert("firstChan", offsetof(DsType, firstChan), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("lastChan", offsetof(DsType, lastChan), hdf5pp::TypeTraits<uint16_t>::stored_type());
  hdf5pp::EnumType<uint16_t> _enum_type_inputMode = hdf5pp::EnumType<uint16_t>::enumType();
  _enum_type_inputMode.insert("InputMode_Differential", Psana::Gsc16ai::ConfigV1::InputMode_Differential);
  _enum_type_inputMode.insert("InputMode_Zero", Psana::Gsc16ai::ConfigV1::InputMode_Zero);
  _enum_type_inputMode.insert("InputMode_Vref", Psana::Gsc16ai::ConfigV1::InputMode_Vref);
  type.insert("inputMode", offsetof(DsType, inputMode), _enum_type_inputMode);
  hdf5pp::EnumType<uint16_t> _enum_type_triggerMode = hdf5pp::EnumType<uint16_t>::enumType();
  _enum_type_triggerMode.insert("TriggerMode_ExtPos", Psana::Gsc16ai::ConfigV1::TriggerMode_ExtPos);
  _enum_type_triggerMode.insert("TriggerMode_ExtNeg", Psana::Gsc16ai::ConfigV1::TriggerMode_ExtNeg);
  _enum_type_triggerMode.insert("TriggerMode_IntClk", Psana::Gsc16ai::ConfigV1::TriggerMode_IntClk);
  type.insert("triggerMode", offsetof(DsType, triggerMode), _enum_type_triggerMode);
  hdf5pp::EnumType<uint16_t> _enum_type_dataFormat = hdf5pp::EnumType<uint16_t>::enumType();
  _enum_type_dataFormat.insert("DataFormat_TwosComplement", Psana::Gsc16ai::ConfigV1::DataFormat_TwosComplement);
  _enum_type_dataFormat.insert("DataFormat_OffsetBinary", Psana::Gsc16ai::ConfigV1::DataFormat_OffsetBinary);
  type.insert("dataFormat", offsetof(DsType, dataFormat), _enum_type_dataFormat);
  type.insert("fps", offsetof(DsType, fps), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("autocalibEnable", offsetof(DsType, autocalibEnable), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("timeTagEnable", offsetof(DsType, timeTagEnable), hdf5pp::TypeTraits<uint8_t>::stored_type());
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
  hdf5pp::EnumType<uint16_t> _enum_type_voltageRange = hdf5pp::EnumType<uint16_t>::enumType();
  _enum_type_voltageRange.insert("VoltageRange_10V", Psana::Gsc16ai::ConfigV1::VoltageRange_10V);
  _enum_type_voltageRange.insert("VoltageRange_5V", Psana::Gsc16ai::ConfigV1::VoltageRange_5V);
  _enum_type_voltageRange.insert("VoltageRange_2_5V", Psana::Gsc16ai::ConfigV1::VoltageRange_2_5V);
  type.insert("voltageRange", offsetof(DsType, voltageRange), _enum_type_voltageRange);
  type.insert("firstChan", offsetof(DsType, firstChan), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("lastChan", offsetof(DsType, lastChan), hdf5pp::TypeTraits<uint16_t>::native_type());
  hdf5pp::EnumType<uint16_t> _enum_type_inputMode = hdf5pp::EnumType<uint16_t>::enumType();
  _enum_type_inputMode.insert("InputMode_Differential", Psana::Gsc16ai::ConfigV1::InputMode_Differential);
  _enum_type_inputMode.insert("InputMode_Zero", Psana::Gsc16ai::ConfigV1::InputMode_Zero);
  _enum_type_inputMode.insert("InputMode_Vref", Psana::Gsc16ai::ConfigV1::InputMode_Vref);
  type.insert("inputMode", offsetof(DsType, inputMode), _enum_type_inputMode);
  hdf5pp::EnumType<uint16_t> _enum_type_triggerMode = hdf5pp::EnumType<uint16_t>::enumType();
  _enum_type_triggerMode.insert("TriggerMode_ExtPos", Psana::Gsc16ai::ConfigV1::TriggerMode_ExtPos);
  _enum_type_triggerMode.insert("TriggerMode_ExtNeg", Psana::Gsc16ai::ConfigV1::TriggerMode_ExtNeg);
  _enum_type_triggerMode.insert("TriggerMode_IntClk", Psana::Gsc16ai::ConfigV1::TriggerMode_IntClk);
  type.insert("triggerMode", offsetof(DsType, triggerMode), _enum_type_triggerMode);
  hdf5pp::EnumType<uint16_t> _enum_type_dataFormat = hdf5pp::EnumType<uint16_t>::enumType();
  _enum_type_dataFormat.insert("DataFormat_TwosComplement", Psana::Gsc16ai::ConfigV1::DataFormat_TwosComplement);
  _enum_type_dataFormat.insert("DataFormat_OffsetBinary", Psana::Gsc16ai::ConfigV1::DataFormat_OffsetBinary);
  type.insert("dataFormat", offsetof(DsType, dataFormat), _enum_type_dataFormat);
  type.insert("fps", offsetof(DsType, fps), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("autocalibEnable", offsetof(DsType, autocalibEnable), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("timeTagEnable", offsetof(DsType, timeTagEnable), hdf5pp::TypeTraits<uint8_t>::native_type());
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
Psana::Gsc16ai::ConfigV1::VoltageRange ConfigV1_v0::voltageRange() const {
  if (not m_ds_config) read_ds_config();
  return Psana::Gsc16ai::ConfigV1::VoltageRange(m_ds_config->voltageRange);
}
uint16_t ConfigV1_v0::firstChan() const {
  if (not m_ds_config) read_ds_config();
  return uint16_t(m_ds_config->firstChan);
}
uint16_t ConfigV1_v0::lastChan() const {
  if (not m_ds_config) read_ds_config();
  return uint16_t(m_ds_config->lastChan);
}
Psana::Gsc16ai::ConfigV1::InputMode ConfigV1_v0::inputMode() const {
  if (not m_ds_config) read_ds_config();
  return Psana::Gsc16ai::ConfigV1::InputMode(m_ds_config->inputMode);
}
Psana::Gsc16ai::ConfigV1::TriggerMode ConfigV1_v0::triggerMode() const {
  if (not m_ds_config) read_ds_config();
  return Psana::Gsc16ai::ConfigV1::TriggerMode(m_ds_config->triggerMode);
}
Psana::Gsc16ai::ConfigV1::DataFormat ConfigV1_v0::dataFormat() const {
  if (not m_ds_config) read_ds_config();
  return Psana::Gsc16ai::ConfigV1::DataFormat(m_ds_config->dataFormat);
}
uint16_t ConfigV1_v0::fps() const {
  if (not m_ds_config) read_ds_config();
  return uint16_t(m_ds_config->fps);
}
uint8_t ConfigV1_v0::autocalibEnable() const {
  if (not m_ds_config) read_ds_config();
  return uint8_t(m_ds_config->autocalibEnable);
}
uint8_t ConfigV1_v0::timeTagEnable() const {
  if (not m_ds_config) read_ds_config();
  return uint8_t(m_ds_config->timeTagEnable);
}

void ConfigV1_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<Gsc16ai::ns_ConfigV1_v0::dataset_config>(m_group, "config", m_idx);
}
boost::shared_ptr<PSEvt::Proxy<Psana::Gsc16ai::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Gsc16ai::ConfigV1> >(boost::make_shared<ConfigV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Gsc16ai::ConfigV1> >(boost::shared_ptr<Psana::Gsc16ai::ConfigV1>());
  }
}
template <typename Config>
ndarray<const uint16_t, 1> DataV1_v0<Config>::timestamp() const {
  if (m_ds_timestamps.empty()) read_ds_timestamps();
  return m_ds_timestamps;
}
template <typename Config>
ndarray<const uint16_t, 1> DataV1_v0<Config>::channelValue() const {
  if (m_ds_channelValue.empty()) read_ds_channelValue();
  return m_ds_channelValue;
}
template <typename Config>
void DataV1_v0<Config>::read_ds_channelValue() const {
  m_ds_channelValue = hdf5pp::Utils::readNdarray<uint16_t, 1>(m_group, "channelValue", m_idx);
}
template <typename Config>
void DataV1_v0<Config>::read_ds_timestamps() const {
  m_ds_timestamps = hdf5pp::Utils::readNdarray<uint16_t, 1>(m_group, "timestamps", m_idx);
}
template class DataV1_v0<Psana::Gsc16ai::ConfigV1>;
boost::shared_ptr<PSEvt::Proxy<Psana::Gsc16ai::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::Gsc16ai::ConfigV1>& cfg) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Gsc16ai::DataV1> >(boost::make_shared<DataV1_v0<Psana::Gsc16ai::ConfigV1> >(group, idx, cfg));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Gsc16ai::DataV1> >(boost::shared_ptr<Psana::Gsc16ai::DataV1>());
  }
}
} // namespace Gsc16ai
} // namespace psddl_hdf2psana
