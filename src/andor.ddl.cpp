
// *** Do not edit this file, it is auto-generated ***

#include "psddl_hdf2psana/andor.ddl.h"
#include "hdf5pp/ArrayType.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/EnumType.h"
#include "hdf5pp/VlenType.h"
#include "hdf5pp/Utils.h"
#include "PSEvt/DataProxy.h"
#include "psddl_hdf2psana/Exceptions.h"
namespace psddl_hdf2psana {
namespace Andor {

hdf5pp::Type ns_ConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_ConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("width", offsetof(DsType, width), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("height", offsetof(DsType, height), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("orgX", offsetof(DsType, orgX), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("orgY", offsetof(DsType, orgY), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("binX", offsetof(DsType, binX), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("binY", offsetof(DsType, binY), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("exposureTime", offsetof(DsType, exposureTime), hdf5pp::TypeTraits<float>::stored_type());
  type.insert("coolingTemp", offsetof(DsType, coolingTemp), hdf5pp::TypeTraits<float>::stored_type());
  hdf5pp::EnumType<uint8_t> _enum_type_fanMode = hdf5pp::EnumType<uint8_t>::enumType();
  _enum_type_fanMode.insert("ENUM_FAN_FULL", Psana::Andor::ConfigV1::ENUM_FAN_FULL);
  _enum_type_fanMode.insert("ENUM_FAN_LOW", Psana::Andor::ConfigV1::ENUM_FAN_LOW);
  _enum_type_fanMode.insert("ENUM_FAN_OFF", Psana::Andor::ConfigV1::ENUM_FAN_OFF);
  _enum_type_fanMode.insert("ENUM_FAN_ACQOFF", Psana::Andor::ConfigV1::ENUM_FAN_ACQOFF);
  _enum_type_fanMode.insert("ENUM_FAN_NUM", Psana::Andor::ConfigV1::ENUM_FAN_NUM);
  type.insert("fanMode", offsetof(DsType, fanMode), _enum_type_fanMode);
  type.insert("baselineClamp", offsetof(DsType, baselineClamp), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("highCapacity", offsetof(DsType, highCapacity), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("gainIndex", offsetof(DsType, gainIndex), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("readoutSpeedIndex", offsetof(DsType, readoutSpeedIndex), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("exposureEventCode", offsetof(DsType, exposureEventCode), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("numDelayShots", offsetof(DsType, numDelayShots), hdf5pp::TypeTraits<uint32_t>::stored_type());
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
  type.insert("width", offsetof(DsType, width), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("height", offsetof(DsType, height), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("orgX", offsetof(DsType, orgX), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("orgY", offsetof(DsType, orgY), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("binX", offsetof(DsType, binX), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("binY", offsetof(DsType, binY), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("exposureTime", offsetof(DsType, exposureTime), hdf5pp::TypeTraits<float>::native_type());
  type.insert("coolingTemp", offsetof(DsType, coolingTemp), hdf5pp::TypeTraits<float>::native_type());
  hdf5pp::EnumType<uint8_t> _enum_type_fanMode = hdf5pp::EnumType<uint8_t>::enumType();
  _enum_type_fanMode.insert("ENUM_FAN_FULL", Psana::Andor::ConfigV1::ENUM_FAN_FULL);
  _enum_type_fanMode.insert("ENUM_FAN_LOW", Psana::Andor::ConfigV1::ENUM_FAN_LOW);
  _enum_type_fanMode.insert("ENUM_FAN_OFF", Psana::Andor::ConfigV1::ENUM_FAN_OFF);
  _enum_type_fanMode.insert("ENUM_FAN_ACQOFF", Psana::Andor::ConfigV1::ENUM_FAN_ACQOFF);
  _enum_type_fanMode.insert("ENUM_FAN_NUM", Psana::Andor::ConfigV1::ENUM_FAN_NUM);
  type.insert("fanMode", offsetof(DsType, fanMode), _enum_type_fanMode);
  type.insert("baselineClamp", offsetof(DsType, baselineClamp), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("highCapacity", offsetof(DsType, highCapacity), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("gainIndex", offsetof(DsType, gainIndex), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("readoutSpeedIndex", offsetof(DsType, readoutSpeedIndex), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("exposureEventCode", offsetof(DsType, exposureEventCode), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("numDelayShots", offsetof(DsType, numDelayShots), hdf5pp::TypeTraits<uint32_t>::native_type());
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

ns_ConfigV1_v0::dataset_config::dataset_config(const Psana::Andor::ConfigV1& psanaobj)
  : width(psanaobj.width())
  , height(psanaobj.height())
  , orgX(psanaobj.orgX())
  , orgY(psanaobj.orgY())
  , binX(psanaobj.binX())
  , binY(psanaobj.binY())
  , exposureTime(psanaobj.exposureTime())
  , coolingTemp(psanaobj.coolingTemp())
  , fanMode(psanaobj.fanMode())
  , baselineClamp(psanaobj.baselineClamp())
  , highCapacity(psanaobj.highCapacity())
  , gainIndex(psanaobj.gainIndex())
  , readoutSpeedIndex(psanaobj.readoutSpeedIndex())
  , exposureEventCode(psanaobj.exposureEventCode())
  , numDelayShots(psanaobj.numDelayShots())
{
}

ns_ConfigV1_v0::dataset_config::~dataset_config()
{
}
uint32_t ConfigV1_v0::width() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->width);
}
uint32_t ConfigV1_v0::height() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->height);
}
uint32_t ConfigV1_v0::orgX() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->orgX);
}
uint32_t ConfigV1_v0::orgY() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->orgY);
}
uint32_t ConfigV1_v0::binX() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->binX);
}
uint32_t ConfigV1_v0::binY() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->binY);
}
float ConfigV1_v0::exposureTime() const {
  if (not m_ds_config) read_ds_config();
  return float(m_ds_config->exposureTime);
}
float ConfigV1_v0::coolingTemp() const {
  if (not m_ds_config) read_ds_config();
  return float(m_ds_config->coolingTemp);
}
Psana::Andor::ConfigV1::EnumFanMode ConfigV1_v0::fanMode() const {
  if (not m_ds_config) read_ds_config();
  return Psana::Andor::ConfigV1::EnumFanMode(m_ds_config->fanMode);
}
uint8_t ConfigV1_v0::baselineClamp() const {
  if (not m_ds_config) read_ds_config();
  return uint8_t(m_ds_config->baselineClamp);
}
uint8_t ConfigV1_v0::highCapacity() const {
  if (not m_ds_config) read_ds_config();
  return uint8_t(m_ds_config->highCapacity);
}
uint8_t ConfigV1_v0::gainIndex() const {
  if (not m_ds_config) read_ds_config();
  return uint8_t(m_ds_config->gainIndex);
}
uint16_t ConfigV1_v0::readoutSpeedIndex() const {
  if (not m_ds_config) read_ds_config();
  return uint16_t(m_ds_config->readoutSpeedIndex);
}
uint16_t ConfigV1_v0::exposureEventCode() const {
  if (not m_ds_config) read_ds_config();
  return uint16_t(m_ds_config->exposureEventCode);
}
uint32_t ConfigV1_v0::numDelayShots() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->numDelayShots);
}
uint32_t
ConfigV1_v0::frameSize() const{ 
return 12 + this->numPixels()*2; 
}



void ConfigV1_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<Andor::ns_ConfigV1_v0::dataset_config>(m_group, "config", m_idx);
}

void make_datasets_ConfigV1_v0(const Psana::Andor::ConfigV1& obj, 
      hdf5pp::Group group, const ChunkPolicy& chunkPolicy, int deflate, bool shuffle)
{
  {
    hdf5pp::Type dstype = Andor::ns_ConfigV1_v0::dataset_config::stored_type();
    hdf5pp::Utils::createDataset(group, "config", dstype, chunkPolicy.chunkSize(dstype), chunkPolicy.chunkCacheSize(dstype), deflate, shuffle);    
  }
}

void store_ConfigV1_v0(const Psana::Andor::ConfigV1* obj, hdf5pp::Group group, long index, bool append)
{
  if (obj) {
    Andor::ns_ConfigV1_v0::dataset_config ds_data(*obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "config", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "config", ds_data);
    }
  } else if (append) {
    hdf5pp::Utils::resizeDataset(group, "config", index < 0 ? index : index + 1);
  }
}

boost::shared_ptr<PSEvt::Proxy<Psana::Andor::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Andor::ConfigV1> >(boost::make_shared<ConfigV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Andor::ConfigV1> >(boost::shared_ptr<Psana::Andor::ConfigV1>());
  }
}

void make_datasets(const Psana::Andor::ConfigV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 0;
  group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    make_datasets_ConfigV1_v0(obj, group, chunkPolicy, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Andor.ConfigV1", version);
  }
}

void store_ConfigV1(const Psana::Andor::ConfigV1* obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 0;
  if (not append) group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    store_ConfigV1_v0(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Andor.ConfigV1", version);
  }
}

void store(const Psana::Andor::ConfigV1& obj, hdf5pp::Group group, int version) 
{
  store_ConfigV1(&obj, group, 0, version, false);
}

void store_at(const Psana::Andor::ConfigV1* obj, hdf5pp::Group group, long index, int version)
{
  store_ConfigV1(obj, group, index, version, true);
}


hdf5pp::Type ns_FrameV1_v0_dataset_frame_stored_type()
{
  typedef ns_FrameV1_v0::dataset_frame DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("shotIdStart", offsetof(DsType, shotIdStart), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("readoutTime", offsetof(DsType, readoutTime), hdf5pp::TypeTraits<float>::stored_type());
  type.insert("temperature", offsetof(DsType, temperature), hdf5pp::TypeTraits<float>::stored_type());
  return type;
}

hdf5pp::Type ns_FrameV1_v0::dataset_frame::stored_type()
{
  static hdf5pp::Type type = ns_FrameV1_v0_dataset_frame_stored_type();
  return type;
}

hdf5pp::Type ns_FrameV1_v0_dataset_frame_native_type()
{
  typedef ns_FrameV1_v0::dataset_frame DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("shotIdStart", offsetof(DsType, shotIdStart), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("readoutTime", offsetof(DsType, readoutTime), hdf5pp::TypeTraits<float>::native_type());
  type.insert("temperature", offsetof(DsType, temperature), hdf5pp::TypeTraits<float>::native_type());
  return type;
}

hdf5pp::Type ns_FrameV1_v0::dataset_frame::native_type()
{
  static hdf5pp::Type type = ns_FrameV1_v0_dataset_frame_native_type();
  return type;
}

ns_FrameV1_v0::dataset_frame::dataset_frame()
{
}

ns_FrameV1_v0::dataset_frame::dataset_frame(const Psana::Andor::FrameV1& psanaobj)
  : shotIdStart(psanaobj.shotIdStart())
  , readoutTime(psanaobj.readoutTime())
  , temperature(psanaobj.temperature())
{
}

ns_FrameV1_v0::dataset_frame::~dataset_frame()
{
}
template <typename Config>
uint32_t FrameV1_v0<Config>::shotIdStart() const {
  if (not m_ds_frame) read_ds_frame();
  return uint32_t(m_ds_frame->shotIdStart);
}
template <typename Config>
float FrameV1_v0<Config>::readoutTime() const {
  if (not m_ds_frame) read_ds_frame();
  return float(m_ds_frame->readoutTime);
}
template <typename Config>
float FrameV1_v0<Config>::temperature() const {
  if (not m_ds_frame) read_ds_frame();
  return float(m_ds_frame->temperature);
}
template <typename Config>
ndarray<const uint16_t, 2> FrameV1_v0<Config>::data() const {
  if (m_ds_data.empty()) read_ds_data();
  return m_ds_data;
}
template <typename Config>
void FrameV1_v0<Config>::read_ds_frame() const {
  m_ds_frame = hdf5pp::Utils::readGroup<Andor::ns_FrameV1_v0::dataset_frame>(m_group, "frame", m_idx);
}
template <typename Config>
void FrameV1_v0<Config>::read_ds_data() const {
  m_ds_data = hdf5pp::Utils::readNdarray<uint16_t, 2>(m_group, "data", m_idx);
}
template class FrameV1_v0<Psana::Andor::ConfigV1>;

void make_datasets_FrameV1_v0(const Psana::Andor::FrameV1& obj, 
      hdf5pp::Group group, const ChunkPolicy& chunkPolicy, int deflate, bool shuffle)
{
  {
    hdf5pp::Type dstype = Andor::ns_FrameV1_v0::dataset_frame::stored_type();
    hdf5pp::Utils::createDataset(group, "frame", dstype, chunkPolicy.chunkSize(dstype), chunkPolicy.chunkCacheSize(dstype), deflate, shuffle);    
  }
  {
    typedef __typeof__(obj.data()) PsanaArray;
    const PsanaArray& psana_array = obj.data();
    hsize_t dims[2];
    std::copy(psana_array.shape(), psana_array.shape()+2, dims);
    hdf5pp::Type dstype = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<uint16_t>::stored_type(), 2, dims);
    hdf5pp::Utils::createDataset(group, "data", dstype, chunkPolicy.chunkSize(dstype), chunkPolicy.chunkCacheSize(dstype), deflate, shuffle);    
  }
}

void store_FrameV1_v0(const Psana::Andor::FrameV1* obj, hdf5pp::Group group, long index, bool append)
{
  if (obj) {
    Andor::ns_FrameV1_v0::dataset_frame ds_data(*obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "frame", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "frame", ds_data);
    }
  } else if (append) {
    hdf5pp::Utils::resizeDataset(group, "frame", index < 0 ? index : index + 1);
  }
  if (append) {
    if (obj) {
      hdf5pp::Utils::storeNDArrayAt(group, "data", obj->data(), index);
    } else {
      hdf5pp::Utils::resizeDataset(group, "data", index < 0 ? index : index + 1);
    }
  } else {
    hdf5pp::Utils::storeNDArray(group, "data", obj->data());
  }
}

boost::shared_ptr<PSEvt::Proxy<Psana::Andor::FrameV1> > make_FrameV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::Andor::ConfigV1>& cfg) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Andor::FrameV1> >(boost::make_shared<FrameV1_v0<Psana::Andor::ConfigV1> >(group, idx, cfg));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Andor::FrameV1> >(boost::shared_ptr<Psana::Andor::FrameV1>());
  }
}

void make_datasets(const Psana::Andor::FrameV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 0;
  group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    make_datasets_FrameV1_v0(obj, group, chunkPolicy, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Andor.FrameV1", version);
  }
}

void store_FrameV1(const Psana::Andor::FrameV1* obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 0;
  if (not append) group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    store_FrameV1_v0(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Andor.FrameV1", version);
  }
}

void store(const Psana::Andor::FrameV1& obj, hdf5pp::Group group, int version) 
{
  store_FrameV1(&obj, group, 0, version, false);
}

void store_at(const Psana::Andor::FrameV1* obj, hdf5pp::Group group, long index, int version)
{
  store_FrameV1(obj, group, index, version, true);
}

} // namespace Andor
} // namespace psddl_hdf2psana
