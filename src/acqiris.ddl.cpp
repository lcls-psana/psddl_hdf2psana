
// *** Do not edit this file, it is auto-generated ***

#include "psddl_hdf2psana/acqiris.ddl.h"
#include "hdf5pp/ArrayType.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/EnumType.h"
#include "hdf5pp/VlenType.h"
#include "hdf5pp/Utils.h"
#include "PSEvt/DataProxy.h"
#include "psddl_hdf2psana/acqiris.ddlm.h"
#include "psddl_hdf2psana/acqiris.ddlm.h"
#include "psddl_hdf2psana/acqiris.ddlm.h"
#include "psddl_hdf2psana/acqiris.ddlm.h"
#include "psddl_hdf2psana/acqiris.ddlm.h"
namespace psddl_hdf2psana {
namespace Acqiris {

hdf5pp::Type ns_VertV1_v0_dataset_data_stored_type()
{
  typedef ns_VertV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("fullScale", offsetof(DsType, fullScale), hdf5pp::TypeTraits<double>::stored_type());
  type.insert("offset", offsetof(DsType, offset), hdf5pp::TypeTraits<double>::stored_type());
  type.insert("coupling", offsetof(DsType, coupling), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("bandwidth", offsetof(DsType, bandwidth), hdf5pp::TypeTraits<uint32_t>::stored_type());
  return type;
}

hdf5pp::Type ns_VertV1_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_VertV1_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_VertV1_v0_dataset_data_native_type()
{
  typedef ns_VertV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("fullScale", offsetof(DsType, fullScale), hdf5pp::TypeTraits<double>::native_type());
  type.insert("offset", offsetof(DsType, offset), hdf5pp::TypeTraits<double>::native_type());
  type.insert("coupling", offsetof(DsType, coupling), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("bandwidth", offsetof(DsType, bandwidth), hdf5pp::TypeTraits<uint32_t>::native_type());
  return type;
}

hdf5pp::Type ns_VertV1_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_VertV1_v0_dataset_data_native_type();
  return type;
}
ns_VertV1_v0::dataset_data::dataset_data()
{
}
ns_VertV1_v0::dataset_data::~dataset_data()
{
}
boost::shared_ptr<Psana::Acqiris::VertV1>
Proxy_VertV1_v0::getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key)
{
  if (not m_data) {
    boost::shared_ptr<Acqiris::ns_VertV1_v0::dataset_data> ds_data = hdf5pp::Utils::readGroup<Acqiris::ns_VertV1_v0::dataset_data>(m_group, "data", m_idx);
    m_data.reset(new PsanaType(ds_data->fullScale, ds_data->offset, ds_data->coupling, ds_data->bandwidth));
  }
  return m_data;
}

boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::VertV1> > make_VertV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<Proxy_VertV1_v0>(group, idx);
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Acqiris::VertV1> >(boost::shared_ptr<Psana::Acqiris::VertV1>());
  }
}

hdf5pp::Type ns_HorizV1_v0_dataset_data_stored_type()
{
  typedef ns_HorizV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("sampInterval", offsetof(DsType, sampInterval), hdf5pp::TypeTraits<double>::stored_type());
  type.insert("delayTime", offsetof(DsType, delayTime), hdf5pp::TypeTraits<double>::stored_type());
  type.insert("nbrSamples", offsetof(DsType, nbrSamples), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("nbrSegments", offsetof(DsType, nbrSegments), hdf5pp::TypeTraits<uint32_t>::stored_type());
  return type;
}

hdf5pp::Type ns_HorizV1_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_HorizV1_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_HorizV1_v0_dataset_data_native_type()
{
  typedef ns_HorizV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("sampInterval", offsetof(DsType, sampInterval), hdf5pp::TypeTraits<double>::native_type());
  type.insert("delayTime", offsetof(DsType, delayTime), hdf5pp::TypeTraits<double>::native_type());
  type.insert("nbrSamples", offsetof(DsType, nbrSamples), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("nbrSegments", offsetof(DsType, nbrSegments), hdf5pp::TypeTraits<uint32_t>::native_type());
  return type;
}

hdf5pp::Type ns_HorizV1_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_HorizV1_v0_dataset_data_native_type();
  return type;
}
ns_HorizV1_v0::dataset_data::dataset_data()
{
}
ns_HorizV1_v0::dataset_data::~dataset_data()
{
}
boost::shared_ptr<Psana::Acqiris::HorizV1>
Proxy_HorizV1_v0::getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key)
{
  if (not m_data) {
    boost::shared_ptr<Acqiris::ns_HorizV1_v0::dataset_data> ds_data = hdf5pp::Utils::readGroup<Acqiris::ns_HorizV1_v0::dataset_data>(m_group, "data", m_idx);
    m_data.reset(new PsanaType(ds_data->sampInterval, ds_data->delayTime, ds_data->nbrSamples, ds_data->nbrSegments));
  }
  return m_data;
}

boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::HorizV1> > make_HorizV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<Proxy_HorizV1_v0>(group, idx);
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Acqiris::HorizV1> >(boost::shared_ptr<Psana::Acqiris::HorizV1>());
  }
}

hdf5pp::Type ns_TrigV1_v0_dataset_data_stored_type()
{
  typedef ns_TrigV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("coupling", offsetof(DsType, coupling), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("input", offsetof(DsType, input), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("slope", offsetof(DsType, slope), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("level", offsetof(DsType, level), hdf5pp::TypeTraits<double>::stored_type());
  return type;
}

hdf5pp::Type ns_TrigV1_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_TrigV1_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_TrigV1_v0_dataset_data_native_type()
{
  typedef ns_TrigV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("coupling", offsetof(DsType, coupling), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("input", offsetof(DsType, input), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("slope", offsetof(DsType, slope), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("level", offsetof(DsType, level), hdf5pp::TypeTraits<double>::native_type());
  return type;
}

hdf5pp::Type ns_TrigV1_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_TrigV1_v0_dataset_data_native_type();
  return type;
}
ns_TrigV1_v0::dataset_data::dataset_data()
{
}
ns_TrigV1_v0::dataset_data::~dataset_data()
{
}
boost::shared_ptr<Psana::Acqiris::TrigV1>
Proxy_TrigV1_v0::getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key)
{
  if (not m_data) {
    boost::shared_ptr<Acqiris::ns_TrigV1_v0::dataset_data> ds_data = hdf5pp::Utils::readGroup<Acqiris::ns_TrigV1_v0::dataset_data>(m_group, "data", m_idx);
    m_data.reset(new PsanaType(ds_data->coupling, ds_data->input, ds_data->slope, ds_data->level));
  }
  return m_data;
}

boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::TrigV1> > make_TrigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<Proxy_TrigV1_v0>(group, idx);
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Acqiris::TrigV1> >(boost::shared_ptr<Psana::Acqiris::TrigV1>());
  }
}

hdf5pp::Type ns_ConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_ConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("nbrConvertersPerChannel", offsetof(DsType, nbrConvertersPerChannel), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("channelMask", offsetof(DsType, channelMask), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("nbrBanks", offsetof(DsType, nbrBanks), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("nbrChannels", offsetof(DsType, nbrChannels), hdf5pp::TypeTraits<uint32_t>::stored_type());
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
  type.insert("nbrConvertersPerChannel", offsetof(DsType, nbrConvertersPerChannel), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("channelMask", offsetof(DsType, channelMask), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("nbrBanks", offsetof(DsType, nbrBanks), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("nbrChannels", offsetof(DsType, nbrChannels), hdf5pp::TypeTraits<uint32_t>::native_type());
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
uint32_t ConfigV1_v0::nbrConvertersPerChannel() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->nbrConvertersPerChannel);
}
uint32_t ConfigV1_v0::channelMask() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->channelMask);
}
uint32_t ConfigV1_v0::nbrBanks() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->nbrBanks);
}
const Psana::Acqiris::TrigV1& ConfigV1_v0::trig() const {
  if (not m_ds_trig) read_ds_trig();
  m_ds_storage_trig = Psana::Acqiris::TrigV1(*m_ds_trig);
  return m_ds_storage_trig;
}
const Psana::Acqiris::HorizV1& ConfigV1_v0::horiz() const {
  if (not m_ds_horiz) read_ds_horiz();
  m_ds_storage_horiz = Psana::Acqiris::HorizV1(*m_ds_horiz);
  return m_ds_storage_horiz;
}
ndarray<const Psana::Acqiris::VertV1, 1> ConfigV1_v0::vert() const {
  if (m_ds_vert.empty()) read_ds_vert();
  return m_ds_vert;
}
uint32_t ConfigV1_v0::nbrChannels() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->nbrChannels);
}
void ConfigV1_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<Acqiris::ns_ConfigV1_v0::dataset_config>(m_group, "config", m_idx);
}
void ConfigV1_v0::read_ds_horiz() const {
  m_ds_horiz = hdf5pp::Utils::readGroup<Acqiris::ns_HorizV1_v0::dataset_data>(m_group, "horiz", m_idx);
  m_ds_storage_horiz = *m_ds_horiz;
}
void ConfigV1_v0::read_ds_trig() const {
  m_ds_trig = hdf5pp::Utils::readGroup<Acqiris::ns_TrigV1_v0::dataset_data>(m_group, "trig", m_idx);
  m_ds_storage_trig = *m_ds_trig;
}
void ConfigV1_v0::read_ds_vert() const {
  ndarray<Acqiris::ns_VertV1_v0::dataset_data, 1> arr = hdf5pp::Utils::readNdarray<Acqiris::ns_VertV1_v0::dataset_data, 1>(m_group, "vert", m_idx);
  ndarray<Psana::Acqiris::VertV1, 1> tmp(arr.shape());
  std::copy(arr.begin(), arr.end(), tmp.begin());
  m_ds_vert = tmp;
}
boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Acqiris::ConfigV1> >(boost::make_shared<ConfigV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Acqiris::ConfigV1> >(boost::shared_ptr<Psana::Acqiris::ConfigV1>());
  }
}

hdf5pp::Type ns_TimestampV1_v0_dataset_data_stored_type()
{
  typedef ns_TimestampV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("pos", offsetof(DsType, pos), hdf5pp::TypeTraits<double>::stored_type());
  type.insert("timeStampLo", offsetof(DsType, timeStampLo), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("timeStampHi", offsetof(DsType, timeStampHi), hdf5pp::TypeTraits<uint32_t>::stored_type());
  return type;
}

hdf5pp::Type ns_TimestampV1_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_TimestampV1_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_TimestampV1_v0_dataset_data_native_type()
{
  typedef ns_TimestampV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("pos", offsetof(DsType, pos), hdf5pp::TypeTraits<double>::native_type());
  type.insert("timeStampLo", offsetof(DsType, timeStampLo), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("timeStampHi", offsetof(DsType, timeStampHi), hdf5pp::TypeTraits<uint32_t>::native_type());
  return type;
}

hdf5pp::Type ns_TimestampV1_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_TimestampV1_v0_dataset_data_native_type();
  return type;
}
ns_TimestampV1_v0::dataset_data::dataset_data()
{
}
ns_TimestampV1_v0::dataset_data::~dataset_data()
{
}
boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::DataDescV1> > make_DataDescV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::Acqiris::ConfigV1>& cfg) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Acqiris::DataDescV1> >(boost::make_shared<DataDescV1_v0<Psana::Acqiris::ConfigV1> >(group, idx, cfg));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Acqiris::DataDescV1> >(boost::shared_ptr<Psana::Acqiris::DataDescV1>());
  }
}

hdf5pp::Type ns_TdcChannel_v0_dataset_data_stored_type()
{
  typedef ns_TdcChannel_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("_channel_int", offsetof(DsType, _channel_int), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("_mode_int", offsetof(DsType, _mode_int), hdf5pp::TypeTraits<uint32_t>::stored_type());
  hdf5pp::EnumType<int32_t> _enum_type_slope = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_slope.insert("Positive", Psana::Acqiris::TdcChannel::Positive);
  _enum_type_slope.insert("Negative", Psana::Acqiris::TdcChannel::Negative);
  type.insert("slope", offsetof(DsType, slope), _enum_type_slope);
  hdf5pp::EnumType<int32_t> _enum_type_mode = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_mode.insert("Active", Psana::Acqiris::TdcChannel::Active);
  _enum_type_mode.insert("Inactive", Psana::Acqiris::TdcChannel::Inactive);
  type.insert("mode", offsetof(DsType, mode), _enum_type_mode);
  type.insert("level", offsetof(DsType, level), hdf5pp::TypeTraits<double>::stored_type());
  hdf5pp::EnumType<int32_t> _enum_type_channel = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_channel.insert("Veto", Psana::Acqiris::TdcChannel::Veto);
  _enum_type_channel.insert("Common", Psana::Acqiris::TdcChannel::Common);
  _enum_type_channel.insert("Input1", Psana::Acqiris::TdcChannel::Input1);
  _enum_type_channel.insert("Input2", Psana::Acqiris::TdcChannel::Input2);
  _enum_type_channel.insert("Input3", Psana::Acqiris::TdcChannel::Input3);
  _enum_type_channel.insert("Input4", Psana::Acqiris::TdcChannel::Input4);
  _enum_type_channel.insert("Input5", Psana::Acqiris::TdcChannel::Input5);
  _enum_type_channel.insert("Input6", Psana::Acqiris::TdcChannel::Input6);
  type.insert("channel", offsetof(DsType, channel), _enum_type_channel);
  return type;
}

hdf5pp::Type ns_TdcChannel_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_TdcChannel_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_TdcChannel_v0_dataset_data_native_type()
{
  typedef ns_TdcChannel_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("_channel_int", offsetof(DsType, _channel_int), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("_mode_int", offsetof(DsType, _mode_int), hdf5pp::TypeTraits<uint32_t>::native_type());
  hdf5pp::EnumType<int32_t> _enum_type_slope = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_slope.insert("Positive", Psana::Acqiris::TdcChannel::Positive);
  _enum_type_slope.insert("Negative", Psana::Acqiris::TdcChannel::Negative);
  type.insert("slope", offsetof(DsType, slope), _enum_type_slope);
  hdf5pp::EnumType<int32_t> _enum_type_mode = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_mode.insert("Active", Psana::Acqiris::TdcChannel::Active);
  _enum_type_mode.insert("Inactive", Psana::Acqiris::TdcChannel::Inactive);
  type.insert("mode", offsetof(DsType, mode), _enum_type_mode);
  type.insert("level", offsetof(DsType, level), hdf5pp::TypeTraits<double>::native_type());
  hdf5pp::EnumType<int32_t> _enum_type_channel = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_channel.insert("Veto", Psana::Acqiris::TdcChannel::Veto);
  _enum_type_channel.insert("Common", Psana::Acqiris::TdcChannel::Common);
  _enum_type_channel.insert("Input1", Psana::Acqiris::TdcChannel::Input1);
  _enum_type_channel.insert("Input2", Psana::Acqiris::TdcChannel::Input2);
  _enum_type_channel.insert("Input3", Psana::Acqiris::TdcChannel::Input3);
  _enum_type_channel.insert("Input4", Psana::Acqiris::TdcChannel::Input4);
  _enum_type_channel.insert("Input5", Psana::Acqiris::TdcChannel::Input5);
  _enum_type_channel.insert("Input6", Psana::Acqiris::TdcChannel::Input6);
  type.insert("channel", offsetof(DsType, channel), _enum_type_channel);
  return type;
}

hdf5pp::Type ns_TdcChannel_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_TdcChannel_v0_dataset_data_native_type();
  return type;
}
ns_TdcChannel_v0::dataset_data::dataset_data()
{
}
ns_TdcChannel_v0::dataset_data::~dataset_data()
{
}
boost::shared_ptr<Psana::Acqiris::TdcChannel>
Proxy_TdcChannel_v0::getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key)
{
  if (not m_data) {
    boost::shared_ptr<Acqiris::ns_TdcChannel_v0::dataset_data> ds_data = hdf5pp::Utils::readGroup<Acqiris::ns_TdcChannel_v0::dataset_data>(m_group, "data", m_idx);
    m_data.reset(new PsanaType(ds_data->_channel_int, Psana::Acqiris::TdcChannel::Slope(ds_data->slope), Psana::Acqiris::TdcChannel::Mode(ds_data->mode), ds_data->level));
  }
  return m_data;
}

boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::TdcChannel> > make_TdcChannel(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<Proxy_TdcChannel_v0>(group, idx);
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Acqiris::TdcChannel> >(boost::shared_ptr<Psana::Acqiris::TdcChannel>());
  }
}

hdf5pp::Type ns_TdcAuxIO_v0_dataset_data_stored_type()
{
  typedef ns_TdcAuxIO_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("channel_int", offsetof(DsType, channel_int), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("signal_int", offsetof(DsType, signal_int), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("qualifier_int", offsetof(DsType, qualifier_int), hdf5pp::TypeTraits<uint32_t>::stored_type());
  hdf5pp::EnumType<int32_t> _enum_type_channel = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_channel.insert("IOAux1", Psana::Acqiris::TdcAuxIO::IOAux1);
  _enum_type_channel.insert("IOAux2", Psana::Acqiris::TdcAuxIO::IOAux2);
  type.insert("channel", offsetof(DsType, channel), _enum_type_channel);
  hdf5pp::EnumType<int32_t> _enum_type_mode = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_mode.insert("BankSwitch", Psana::Acqiris::TdcAuxIO::BankSwitch);
  _enum_type_mode.insert("Marker", Psana::Acqiris::TdcAuxIO::Marker);
  _enum_type_mode.insert("OutputLo", Psana::Acqiris::TdcAuxIO::OutputLo);
  _enum_type_mode.insert("OutputHi", Psana::Acqiris::TdcAuxIO::OutputHi);
  type.insert("mode", offsetof(DsType, mode), _enum_type_mode);
  hdf5pp::EnumType<int32_t> _enum_type_term = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_term.insert("ZHigh", Psana::Acqiris::TdcAuxIO::ZHigh);
  _enum_type_term.insert("Z50", Psana::Acqiris::TdcAuxIO::Z50);
  type.insert("term", offsetof(DsType, term), _enum_type_term);
  return type;
}

hdf5pp::Type ns_TdcAuxIO_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_TdcAuxIO_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_TdcAuxIO_v0_dataset_data_native_type()
{
  typedef ns_TdcAuxIO_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("channel_int", offsetof(DsType, channel_int), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("signal_int", offsetof(DsType, signal_int), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("qualifier_int", offsetof(DsType, qualifier_int), hdf5pp::TypeTraits<uint32_t>::native_type());
  hdf5pp::EnumType<int32_t> _enum_type_channel = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_channel.insert("IOAux1", Psana::Acqiris::TdcAuxIO::IOAux1);
  _enum_type_channel.insert("IOAux2", Psana::Acqiris::TdcAuxIO::IOAux2);
  type.insert("channel", offsetof(DsType, channel), _enum_type_channel);
  hdf5pp::EnumType<int32_t> _enum_type_mode = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_mode.insert("BankSwitch", Psana::Acqiris::TdcAuxIO::BankSwitch);
  _enum_type_mode.insert("Marker", Psana::Acqiris::TdcAuxIO::Marker);
  _enum_type_mode.insert("OutputLo", Psana::Acqiris::TdcAuxIO::OutputLo);
  _enum_type_mode.insert("OutputHi", Psana::Acqiris::TdcAuxIO::OutputHi);
  type.insert("mode", offsetof(DsType, mode), _enum_type_mode);
  hdf5pp::EnumType<int32_t> _enum_type_term = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_term.insert("ZHigh", Psana::Acqiris::TdcAuxIO::ZHigh);
  _enum_type_term.insert("Z50", Psana::Acqiris::TdcAuxIO::Z50);
  type.insert("term", offsetof(DsType, term), _enum_type_term);
  return type;
}

hdf5pp::Type ns_TdcAuxIO_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_TdcAuxIO_v0_dataset_data_native_type();
  return type;
}
ns_TdcAuxIO_v0::dataset_data::dataset_data()
{
}
ns_TdcAuxIO_v0::dataset_data::~dataset_data()
{
}
boost::shared_ptr<Psana::Acqiris::TdcAuxIO>
Proxy_TdcAuxIO_v0::getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key)
{
  if (not m_data) {
    boost::shared_ptr<Acqiris::ns_TdcAuxIO_v0::dataset_data> ds_data = hdf5pp::Utils::readGroup<Acqiris::ns_TdcAuxIO_v0::dataset_data>(m_group, "data", m_idx);
    m_data.reset(new PsanaType(ds_data->channel_int, ds_data->signal_int, ds_data->qualifier_int));
  }
  return m_data;
}

boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::TdcAuxIO> > make_TdcAuxIO(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<Proxy_TdcAuxIO_v0>(group, idx);
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Acqiris::TdcAuxIO> >(boost::shared_ptr<Psana::Acqiris::TdcAuxIO>());
  }
}

hdf5pp::Type ns_TdcVetoIO_v0_dataset_data_stored_type()
{
  typedef ns_TdcVetoIO_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("signal_int", offsetof(DsType, signal_int), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("qualifier_int", offsetof(DsType, qualifier_int), hdf5pp::TypeTraits<uint32_t>::stored_type());
  hdf5pp::EnumType<int32_t> _enum_type_channel = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_channel.insert("ChVeto", Psana::Acqiris::TdcVetoIO::ChVeto);
  type.insert("channel", offsetof(DsType, channel), _enum_type_channel);
  hdf5pp::EnumType<int32_t> _enum_type_mode = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_mode.insert("Veto", Psana::Acqiris::TdcVetoIO::Veto);
  _enum_type_mode.insert("SwitchVeto", Psana::Acqiris::TdcVetoIO::SwitchVeto);
  _enum_type_mode.insert("InvertedVeto", Psana::Acqiris::TdcVetoIO::InvertedVeto);
  _enum_type_mode.insert("InvertedSwitchVeto", Psana::Acqiris::TdcVetoIO::InvertedSwitchVeto);
  type.insert("mode", offsetof(DsType, mode), _enum_type_mode);
  hdf5pp::EnumType<int32_t> _enum_type_term = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_term.insert("ZHigh", Psana::Acqiris::TdcVetoIO::ZHigh);
  _enum_type_term.insert("Z50", Psana::Acqiris::TdcVetoIO::Z50);
  type.insert("term", offsetof(DsType, term), _enum_type_term);
  return type;
}

hdf5pp::Type ns_TdcVetoIO_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_TdcVetoIO_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_TdcVetoIO_v0_dataset_data_native_type()
{
  typedef ns_TdcVetoIO_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("signal_int", offsetof(DsType, signal_int), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("qualifier_int", offsetof(DsType, qualifier_int), hdf5pp::TypeTraits<uint32_t>::native_type());
  hdf5pp::EnumType<int32_t> _enum_type_channel = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_channel.insert("ChVeto", Psana::Acqiris::TdcVetoIO::ChVeto);
  type.insert("channel", offsetof(DsType, channel), _enum_type_channel);
  hdf5pp::EnumType<int32_t> _enum_type_mode = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_mode.insert("Veto", Psana::Acqiris::TdcVetoIO::Veto);
  _enum_type_mode.insert("SwitchVeto", Psana::Acqiris::TdcVetoIO::SwitchVeto);
  _enum_type_mode.insert("InvertedVeto", Psana::Acqiris::TdcVetoIO::InvertedVeto);
  _enum_type_mode.insert("InvertedSwitchVeto", Psana::Acqiris::TdcVetoIO::InvertedSwitchVeto);
  type.insert("mode", offsetof(DsType, mode), _enum_type_mode);
  hdf5pp::EnumType<int32_t> _enum_type_term = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_term.insert("ZHigh", Psana::Acqiris::TdcVetoIO::ZHigh);
  _enum_type_term.insert("Z50", Psana::Acqiris::TdcVetoIO::Z50);
  type.insert("term", offsetof(DsType, term), _enum_type_term);
  return type;
}

hdf5pp::Type ns_TdcVetoIO_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_TdcVetoIO_v0_dataset_data_native_type();
  return type;
}
ns_TdcVetoIO_v0::dataset_data::dataset_data()
{
}
ns_TdcVetoIO_v0::dataset_data::~dataset_data()
{
}
boost::shared_ptr<Psana::Acqiris::TdcVetoIO>
Proxy_TdcVetoIO_v0::getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key)
{
  if (not m_data) {
    boost::shared_ptr<Acqiris::ns_TdcVetoIO_v0::dataset_data> ds_data = hdf5pp::Utils::readGroup<Acqiris::ns_TdcVetoIO_v0::dataset_data>(m_group, "data", m_idx);
    m_data.reset(new PsanaType(ds_data->signal_int, ds_data->qualifier_int));
  }
  return m_data;
}

boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::TdcVetoIO> > make_TdcVetoIO(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<Proxy_TdcVetoIO_v0>(group, idx);
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Acqiris::TdcVetoIO> >(boost::shared_ptr<Psana::Acqiris::TdcVetoIO>());
  }
}

hdf5pp::Type ns_TdcConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_TdcConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("veto", offsetof(DsType, veto), hdf5pp::TypeTraits<Acqiris::ns_TdcVetoIO_v0::dataset_data>::stored_type());
  return type;
}

hdf5pp::Type ns_TdcConfigV1_v0::dataset_config::stored_type()
{
  static hdf5pp::Type type = ns_TdcConfigV1_v0_dataset_config_stored_type();
  return type;
}

hdf5pp::Type ns_TdcConfigV1_v0_dataset_config_native_type()
{
  typedef ns_TdcConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("veto", offsetof(DsType, veto), hdf5pp::TypeTraits<Acqiris::ns_TdcVetoIO_v0::dataset_data>::native_type());
  return type;
}

hdf5pp::Type ns_TdcConfigV1_v0::dataset_config::native_type()
{
  static hdf5pp::Type type = ns_TdcConfigV1_v0_dataset_config_native_type();
  return type;
}
ns_TdcConfigV1_v0::dataset_config::dataset_config()
{
}
ns_TdcConfigV1_v0::dataset_config::~dataset_config()
{
}
ndarray<const Psana::Acqiris::TdcChannel, 1> TdcConfigV1_v0::channels() const {
  if (m_ds_channels.empty()) read_ds_channels();
  return m_ds_channels;
}
ndarray<const Psana::Acqiris::TdcAuxIO, 1> TdcConfigV1_v0::auxio() const {
  if (m_ds_auxio.empty()) read_ds_auxio();
  return m_ds_auxio;
}
const Psana::Acqiris::TdcVetoIO& TdcConfigV1_v0::veto() const {
  if (not m_ds_config) read_ds_config();
  m_ds_storage_config_veto = Psana::Acqiris::TdcVetoIO(m_ds_config->veto);
  return m_ds_storage_config_veto;
}
void TdcConfigV1_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<Acqiris::ns_TdcConfigV1_v0::dataset_config>(m_group, "config", m_idx);
}
void TdcConfigV1_v0::read_ds_channels() const {
  ndarray<Acqiris::ns_TdcChannel_v0::dataset_data, 1> arr = hdf5pp::Utils::readNdarray<Acqiris::ns_TdcChannel_v0::dataset_data, 1>(m_group, "channels", m_idx);
  ndarray<Psana::Acqiris::TdcChannel, 1> tmp(arr.shape());
  std::copy(arr.begin(), arr.end(), tmp.begin());
  m_ds_channels = tmp;
}
void TdcConfigV1_v0::read_ds_auxio() const {
  ndarray<Acqiris::ns_TdcAuxIO_v0::dataset_data, 1> arr = hdf5pp::Utils::readNdarray<Acqiris::ns_TdcAuxIO_v0::dataset_data, 1>(m_group, "auxio", m_idx);
  ndarray<Psana::Acqiris::TdcAuxIO, 1> tmp(arr.shape());
  std::copy(arr.begin(), arr.end(), tmp.begin());
  m_ds_auxio = tmp;
}
boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::TdcConfigV1> > make_TdcConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Acqiris::TdcConfigV1> >(boost::make_shared<TdcConfigV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Acqiris::TdcConfigV1> >(boost::shared_ptr<Psana::Acqiris::TdcConfigV1>());
  }
}

hdf5pp::Type ns_TdcDataV1_Item_v0_dataset_data_stored_type()
{
  typedef ns_TdcDataV1_Item_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  hdf5pp::EnumType<int32_t> _enum_type_source = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_source.insert("Comm", Psana::Acqiris::TdcDataV1_Item::Comm);
  _enum_type_source.insert("Chan1", Psana::Acqiris::TdcDataV1_Item::Chan1);
  _enum_type_source.insert("Chan2", Psana::Acqiris::TdcDataV1_Item::Chan2);
  _enum_type_source.insert("Chan3", Psana::Acqiris::TdcDataV1_Item::Chan3);
  _enum_type_source.insert("Chan4", Psana::Acqiris::TdcDataV1_Item::Chan4);
  _enum_type_source.insert("Chan5", Psana::Acqiris::TdcDataV1_Item::Chan5);
  _enum_type_source.insert("Chan6", Psana::Acqiris::TdcDataV1_Item::Chan6);
  _enum_type_source.insert("AuxIO", Psana::Acqiris::TdcDataV1_Item::AuxIO);
  type.insert("source", offsetof(DsType, source), _enum_type_source);
  type.insert("overflow", offsetof(DsType, overflow), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("value", offsetof(DsType, value), hdf5pp::TypeTraits<uint32_t>::stored_type());
  return type;
}

hdf5pp::Type ns_TdcDataV1_Item_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_TdcDataV1_Item_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_TdcDataV1_Item_v0_dataset_data_native_type()
{
  typedef ns_TdcDataV1_Item_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  hdf5pp::EnumType<int32_t> _enum_type_source = hdf5pp::EnumType<int32_t>::enumType();
  _enum_type_source.insert("Comm", Psana::Acqiris::TdcDataV1_Item::Comm);
  _enum_type_source.insert("Chan1", Psana::Acqiris::TdcDataV1_Item::Chan1);
  _enum_type_source.insert("Chan2", Psana::Acqiris::TdcDataV1_Item::Chan2);
  _enum_type_source.insert("Chan3", Psana::Acqiris::TdcDataV1_Item::Chan3);
  _enum_type_source.insert("Chan4", Psana::Acqiris::TdcDataV1_Item::Chan4);
  _enum_type_source.insert("Chan5", Psana::Acqiris::TdcDataV1_Item::Chan5);
  _enum_type_source.insert("Chan6", Psana::Acqiris::TdcDataV1_Item::Chan6);
  _enum_type_source.insert("AuxIO", Psana::Acqiris::TdcDataV1_Item::AuxIO);
  type.insert("source", offsetof(DsType, source), _enum_type_source);
  type.insert("overflow", offsetof(DsType, overflow), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("value", offsetof(DsType, value), hdf5pp::TypeTraits<uint32_t>::native_type());
  return type;
}

hdf5pp::Type ns_TdcDataV1_Item_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_TdcDataV1_Item_v0_dataset_data_native_type();
  return type;
}
ns_TdcDataV1_Item_v0::dataset_data::dataset_data()
{
}
ns_TdcDataV1_Item_v0::dataset_data::~dataset_data()
{
}
boost::shared_ptr<Psana::Acqiris::TdcDataV1_Item>
Proxy_TdcDataV1_Item_v0::getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key)
{
  if (not m_data) {
    boost::shared_ptr<Acqiris::ns_TdcDataV1_Item_v0::dataset_data> ds_data = hdf5pp::Utils::readGroup<Acqiris::ns_TdcDataV1_Item_v0::dataset_data>(m_group, "data", m_idx);
    m_data.reset(new PsanaType(ds_data->value, Psana::Acqiris::TdcDataV1_Item::Source(ds_data->source), ds_data->overflow));
  }
  return m_data;
}

boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::TdcDataV1_Item> > make_TdcDataV1_Item(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<Proxy_TdcDataV1_Item_v0>(group, idx);
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Acqiris::TdcDataV1_Item> >(boost::shared_ptr<Psana::Acqiris::TdcDataV1_Item>());
  }
}

hdf5pp::Type ns_TdcDataV1_v0_dataset_data_stored_type()
{
  typedef ns_TdcDataV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  hdf5pp::VlenType _array_type_data = hdf5pp::VlenType::vlenType(hdf5pp::TypeTraits<Acqiris::ns_TdcDataV1_Item_v0::dataset_data>::stored_type());
  type.insert("data", offsetof(DsType, vlen_data), _array_type_data);
  return type;
}

hdf5pp::Type ns_TdcDataV1_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_TdcDataV1_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_TdcDataV1_v0_dataset_data_native_type()
{
  typedef ns_TdcDataV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  hdf5pp::VlenType _array_type_data = hdf5pp::VlenType::vlenType(hdf5pp::TypeTraits<Acqiris::ns_TdcDataV1_Item_v0::dataset_data>::native_type());
  type.insert("data", offsetof(DsType, vlen_data), _array_type_data);
  return type;
}

hdf5pp::Type ns_TdcDataV1_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_TdcDataV1_v0_dataset_data_native_type();
  return type;
}
ns_TdcDataV1_v0::dataset_data::dataset_data()
{
  this->vlen_data = 0;
  this->data = 0;
}
ns_TdcDataV1_v0::dataset_data::~dataset_data()
{
  free(this->data);
}
ndarray<const Psana::Acqiris::TdcDataV1_Item, 1> TdcDataV1_v0::data() const {
  if (not m_ds_data) read_ds_data();
  if (m_ds_storage_data_data.empty()) {
    unsigned shape[] = {m_ds_data->vlen_data};
    ndarray<Psana::Acqiris::TdcDataV1_Item, 1> tmparr(shape);
    std::copy(m_ds_data->data, m_ds_data->data+m_ds_data->vlen_data, tmparr.begin());
    m_ds_storage_data_data = tmparr;
  }
  return m_ds_storage_data_data;
}
void TdcDataV1_v0::read_ds_data() const {
  m_ds_data = hdf5pp::Utils::readGroup<Acqiris::ns_TdcDataV1_v0::dataset_data>(m_group, "data", m_idx);
}
boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::TdcDataV1> > make_TdcDataV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Acqiris::TdcDataV1> >(boost::make_shared<TdcDataV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Acqiris::TdcDataV1> >(boost::shared_ptr<Psana::Acqiris::TdcDataV1>());
  }
}
} // namespace Acqiris
} // namespace psddl_hdf2psana
