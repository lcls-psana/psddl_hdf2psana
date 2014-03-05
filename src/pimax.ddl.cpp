
// *** Do not edit this file, it is auto-generated ***

#include "psddl_hdf2psana/pimax.ddl.h"
#include "hdf5pp/ArrayType.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/EnumType.h"
#include "hdf5pp/VlenType.h"
#include "hdf5pp/Utils.h"
#include "PSEvt/DataProxy.h"
#include "psddl_hdf2psana/Exceptions.h"
namespace psddl_hdf2psana {
namespace Pimax {

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
  type.insert("readoutSpeed", offsetof(DsType, readoutSpeed), hdf5pp::TypeTraits<float>::stored_type());
  type.insert("gainIndex", offsetof(DsType, gainIndex), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("intesifierGain", offsetof(DsType, intesifierGain), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("gateDelay", offsetof(DsType, gateDelay), hdf5pp::TypeTraits<double>::stored_type());
  type.insert("gateWidth", offsetof(DsType, gateWidth), hdf5pp::TypeTraits<double>::stored_type());
  type.insert("maskedHeight", offsetof(DsType, maskedHeight), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("kineticHeight", offsetof(DsType, kineticHeight), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("vsSpeed", offsetof(DsType, vsSpeed), hdf5pp::TypeTraits<float>::stored_type());
  type.insert("infoReportInterval", offsetof(DsType, infoReportInterval), hdf5pp::TypeTraits<int16_t>::stored_type());
  type.insert("exposureEventCode", offsetof(DsType, exposureEventCode), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("numIntegrationShots", offsetof(DsType, numIntegrationShots), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("frameSize", offsetof(DsType, frameSize), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("numPixelsX", offsetof(DsType, numPixelsX), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("numPixelsY", offsetof(DsType, numPixelsY), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("numPixels", offsetof(DsType, numPixels), hdf5pp::TypeTraits<uint32_t>::stored_type());
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
  type.insert("readoutSpeed", offsetof(DsType, readoutSpeed), hdf5pp::TypeTraits<float>::native_type());
  type.insert("gainIndex", offsetof(DsType, gainIndex), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("intesifierGain", offsetof(DsType, intesifierGain), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("gateDelay", offsetof(DsType, gateDelay), hdf5pp::TypeTraits<double>::native_type());
  type.insert("gateWidth", offsetof(DsType, gateWidth), hdf5pp::TypeTraits<double>::native_type());
  type.insert("maskedHeight", offsetof(DsType, maskedHeight), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("kineticHeight", offsetof(DsType, kineticHeight), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("vsSpeed", offsetof(DsType, vsSpeed), hdf5pp::TypeTraits<float>::native_type());
  type.insert("infoReportInterval", offsetof(DsType, infoReportInterval), hdf5pp::TypeTraits<int16_t>::native_type());
  type.insert("exposureEventCode", offsetof(DsType, exposureEventCode), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("numIntegrationShots", offsetof(DsType, numIntegrationShots), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("frameSize", offsetof(DsType, frameSize), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("numPixelsX", offsetof(DsType, numPixelsX), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("numPixelsY", offsetof(DsType, numPixelsY), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("numPixels", offsetof(DsType, numPixels), hdf5pp::TypeTraits<uint32_t>::native_type());
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

ns_ConfigV1_v0::dataset_config::dataset_config(const Psana::Pimax::ConfigV1& psanaobj)
  : width(psanaobj.width())
  , height(psanaobj.height())
  , orgX(psanaobj.orgX())
  , orgY(psanaobj.orgY())
  , binX(psanaobj.binX())
  , binY(psanaobj.binY())
  , exposureTime(psanaobj.exposureTime())
  , coolingTemp(psanaobj.coolingTemp())
  , readoutSpeed(psanaobj.readoutSpeed())
  , gainIndex(psanaobj.gainIndex())
  , intesifierGain(psanaobj.intesifierGain())
  , gateDelay(psanaobj.gateDelay())
  , gateWidth(psanaobj.gateWidth())
  , maskedHeight(psanaobj.maskedHeight())
  , kineticHeight(psanaobj.kineticHeight())
  , vsSpeed(psanaobj.vsSpeed())
  , infoReportInterval(psanaobj.infoReportInterval())
  , exposureEventCode(psanaobj.exposureEventCode())
  , numIntegrationShots(psanaobj.numIntegrationShots())
  , frameSize(psanaobj.frameSize())
  , numPixelsX(psanaobj.numPixelsX())
  , numPixelsY(psanaobj.numPixelsY())
  , numPixels(psanaobj.numPixels())
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
float ConfigV1_v0::readoutSpeed() const {
  if (not m_ds_config) read_ds_config();
  return float(m_ds_config->readoutSpeed);
}
uint16_t ConfigV1_v0::gainIndex() const {
  if (not m_ds_config) read_ds_config();
  return uint16_t(m_ds_config->gainIndex);
}
uint16_t ConfigV1_v0::intesifierGain() const {
  if (not m_ds_config) read_ds_config();
  return uint16_t(m_ds_config->intesifierGain);
}
double ConfigV1_v0::gateDelay() const {
  if (not m_ds_config) read_ds_config();
  return double(m_ds_config->gateDelay);
}
double ConfigV1_v0::gateWidth() const {
  if (not m_ds_config) read_ds_config();
  return double(m_ds_config->gateWidth);
}
uint32_t ConfigV1_v0::maskedHeight() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->maskedHeight);
}
uint32_t ConfigV1_v0::kineticHeight() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->kineticHeight);
}
float ConfigV1_v0::vsSpeed() const {
  if (not m_ds_config) read_ds_config();
  return float(m_ds_config->vsSpeed);
}
int16_t ConfigV1_v0::infoReportInterval() const {
  if (not m_ds_config) read_ds_config();
  return int16_t(m_ds_config->infoReportInterval);
}
uint16_t ConfigV1_v0::exposureEventCode() const {
  if (not m_ds_config) read_ds_config();
  return uint16_t(m_ds_config->exposureEventCode);
}
uint32_t ConfigV1_v0::numIntegrationShots() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->numIntegrationShots);
}
uint32_t ConfigV1_v0::frameSize() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->frameSize);
}
uint32_t ConfigV1_v0::numPixelsX() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->numPixelsX);
}
uint32_t ConfigV1_v0::numPixelsY() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->numPixelsY);
}
uint32_t ConfigV1_v0::numPixels() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->numPixels);
}
void ConfigV1_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<Pimax::ns_ConfigV1_v0::dataset_config>(m_group, "config", m_idx);
}

void make_datasets_ConfigV1_v0(const Psana::Pimax::ConfigV1& obj, 
      hdf5pp::Group group, const ChunkPolicy& chunkPolicy, int deflate, bool shuffle)
{
  {
    hdf5pp::Type dstype = Pimax::ns_ConfigV1_v0::dataset_config::stored_type();
    hdf5pp::Utils::createDataset(group, "config", dstype, chunkPolicy.chunkSize(dstype), chunkPolicy.chunkCacheSize(dstype), deflate, shuffle);    
  }
}

void store_ConfigV1_v0(const Psana::Pimax::ConfigV1* obj, hdf5pp::Group group, long index, bool append)
{
  if (obj) {
    Pimax::ns_ConfigV1_v0::dataset_config ds_data(*obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "config", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "config", ds_data);
    }
  } else if (append) {
    hdf5pp::Utils::resizeDataset(group, "config", index < 0 ? index : index + 1);
  }
}

boost::shared_ptr<PSEvt::Proxy<Psana::Pimax::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Pimax::ConfigV1> >(boost::make_shared<ConfigV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Pimax::ConfigV1> >(boost::shared_ptr<Psana::Pimax::ConfigV1>());
  }
}

void make_datasets(const Psana::Pimax::ConfigV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 0;
  group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    make_datasets_ConfigV1_v0(obj, group, chunkPolicy, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Pimax.ConfigV1", version);
  }
}

void store_ConfigV1(const Psana::Pimax::ConfigV1* obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 0;
  if (not append) group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    store_ConfigV1_v0(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Pimax.ConfigV1", version);
  }
}

void store(const Psana::Pimax::ConfigV1& obj, hdf5pp::Group group, int version) 
{
  store_ConfigV1(&obj, group, 0, version, false);
}

void store_at(const Psana::Pimax::ConfigV1* obj, hdf5pp::Group group, long index, int version)
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

ns_FrameV1_v0::dataset_frame::dataset_frame(const Psana::Pimax::FrameV1& psanaobj)
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
  m_ds_frame = hdf5pp::Utils::readGroup<Pimax::ns_FrameV1_v0::dataset_frame>(m_group, "frame", m_idx);
}
template <typename Config>
void FrameV1_v0<Config>::read_ds_data() const {
  m_ds_data = hdf5pp::Utils::readNdarray<uint16_t, 2>(m_group, "data", m_idx);
}
template class FrameV1_v0<Psana::Pimax::ConfigV1>;

void make_datasets_FrameV1_v0(const Psana::Pimax::FrameV1& obj, 
      hdf5pp::Group group, const ChunkPolicy& chunkPolicy, int deflate, bool shuffle)
{
  {
    hdf5pp::Type dstype = Pimax::ns_FrameV1_v0::dataset_frame::stored_type();
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

void store_FrameV1_v0(const Psana::Pimax::FrameV1* obj, hdf5pp::Group group, long index, bool append)
{
  if (obj) {
    Pimax::ns_FrameV1_v0::dataset_frame ds_data(*obj);
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

boost::shared_ptr<PSEvt::Proxy<Psana::Pimax::FrameV1> > make_FrameV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::Pimax::ConfigV1>& cfg) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Pimax::FrameV1> >(boost::make_shared<FrameV1_v0<Psana::Pimax::ConfigV1> >(group, idx, cfg));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Pimax::FrameV1> >(boost::shared_ptr<Psana::Pimax::FrameV1>());
  }
}

void make_datasets(const Psana::Pimax::FrameV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 0;
  group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    make_datasets_FrameV1_v0(obj, group, chunkPolicy, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Pimax.FrameV1", version);
  }
}

void store_FrameV1(const Psana::Pimax::FrameV1* obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 0;
  if (not append) group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    store_FrameV1_v0(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Pimax.FrameV1", version);
  }
}

void store(const Psana::Pimax::FrameV1& obj, hdf5pp::Group group, int version) 
{
  store_FrameV1(&obj, group, 0, version, false);
}

void store_at(const Psana::Pimax::FrameV1* obj, hdf5pp::Group group, long index, int version)
{
  store_FrameV1(obj, group, index, version, true);
}

} // namespace Pimax
} // namespace psddl_hdf2psana
