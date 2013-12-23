
// *** Do not edit this file, it is auto-generated ***

#include "psddl_hdf2psana/imp.ddl.h"
#include "hdf5pp/ArrayType.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/EnumType.h"
#include "hdf5pp/VlenType.h"
#include "hdf5pp/Utils.h"
#include "PSEvt/DataProxy.h"
#include "psddl_hdf2psana/Exceptions.h"
namespace psddl_hdf2psana {
namespace Imp {

hdf5pp::Type ns_ConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_ConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("range", offsetof(DsType, range), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("calRange", offsetof(DsType, calRange), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("reset", offsetof(DsType, reset), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("biasData", offsetof(DsType, biasData), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("calData", offsetof(DsType, calData), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("biasDacData", offsetof(DsType, biasDacData), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("calStrobe", offsetof(DsType, calStrobe), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("numberOfSamples", offsetof(DsType, numberOfSamples), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("trigDelay", offsetof(DsType, trigDelay), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("adcDelay", offsetof(DsType, adcDelay), hdf5pp::TypeTraits<uint32_t>::stored_type());
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
  type.insert("range", offsetof(DsType, range), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("calRange", offsetof(DsType, calRange), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("reset", offsetof(DsType, reset), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("biasData", offsetof(DsType, biasData), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("calData", offsetof(DsType, calData), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("biasDacData", offsetof(DsType, biasDacData), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("calStrobe", offsetof(DsType, calStrobe), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("numberOfSamples", offsetof(DsType, numberOfSamples), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("trigDelay", offsetof(DsType, trigDelay), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("adcDelay", offsetof(DsType, adcDelay), hdf5pp::TypeTraits<uint32_t>::native_type());
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

ns_ConfigV1_v0::dataset_config::dataset_config(const Psana::Imp::ConfigV1& psanaobj)
  : range(psanaobj.range())
  , calRange(psanaobj.calRange())
  , reset(psanaobj.reset())
  , biasData(psanaobj.biasData())
  , calData(psanaobj.calData())
  , biasDacData(psanaobj.biasDacData())
  , calStrobe(psanaobj.calStrobe())
  , numberOfSamples(psanaobj.numberOfSamples())
  , trigDelay(psanaobj.trigDelay())
  , adcDelay(psanaobj.adcDelay())
{
}

ns_ConfigV1_v0::dataset_config::~dataset_config()
{
}
uint32_t ConfigV1_v0::range() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->range);
}
uint32_t ConfigV1_v0::calRange() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->calRange);
}
uint32_t ConfigV1_v0::reset() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->reset);
}
uint32_t ConfigV1_v0::biasData() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->biasData);
}
uint32_t ConfigV1_v0::calData() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->calData);
}
uint32_t ConfigV1_v0::biasDacData() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->biasDacData);
}
uint32_t ConfigV1_v0::calStrobe() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->calStrobe);
}
uint32_t ConfigV1_v0::numberOfSamples() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->numberOfSamples);
}
uint32_t ConfigV1_v0::trigDelay() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->trigDelay);
}
uint32_t ConfigV1_v0::adcDelay() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->adcDelay);
}
void ConfigV1_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<Imp::ns_ConfigV1_v0::dataset_config>(m_group, "config", m_idx);
}

void make_datasets_ConfigV1_v0(const Psana::Imp::ConfigV1& obj, 
      hdf5pp::Group group, const ChunkPolicy& chunkPolicy, int deflate, bool shuffle)
{
  {
    hdf5pp::Type dstype = Imp::ns_ConfigV1_v0::dataset_config::stored_type();
    hdf5pp::Utils::createDataset(group, "config", dstype, chunkPolicy.chunkSize(dstype), chunkPolicy.chunkCacheSize(dstype), deflate, shuffle);    
  }
}

void store_ConfigV1_v0(const Psana::Imp::ConfigV1* obj, hdf5pp::Group group, long index, bool append)
{
  if (obj) {
    Imp::ns_ConfigV1_v0::dataset_config ds_data(*obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "config", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "config", ds_data);
    }
  } else if (append) {
    hdf5pp::Utils::resizeDataset(group, "config", index < 0 ? index : index + 1);
  }
}

boost::shared_ptr<PSEvt::Proxy<Psana::Imp::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Imp::ConfigV1> >(boost::make_shared<ConfigV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Imp::ConfigV1> >(boost::shared_ptr<Psana::Imp::ConfigV1>());
  }
}

void make_datasets(const Psana::Imp::ConfigV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 0;
  group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    make_datasets_ConfigV1_v0(obj, group, chunkPolicy, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Imp.ConfigV1", version);
  }
}

void store_ConfigV1(const Psana::Imp::ConfigV1* obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 0;
  if (not append) group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    store_ConfigV1_v0(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Imp.ConfigV1", version);
  }
}

void store(const Psana::Imp::ConfigV1& obj, hdf5pp::Group group, int version) 
{
  store_ConfigV1(&obj, group, 0, version, false);
}

void store_at(const Psana::Imp::ConfigV1* obj, hdf5pp::Group group, long index, int version)
{
  store_ConfigV1(obj, group, index, version, true);
}


hdf5pp::Type ns_Sample_v0_dataset_data_stored_type()
{
  typedef ns_Sample_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  hsize_t _array_type_channels_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_channels = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<uint16_t>::stored_type(), 1, _array_type_channels_shape);
  type.insert("channels", offsetof(DsType, channels), _array_type_channels);
  return type;
}

hdf5pp::Type ns_Sample_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_Sample_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_Sample_v0_dataset_data_native_type()
{
  typedef ns_Sample_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  hsize_t _array_type_channels_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_channels = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<uint16_t>::native_type(), 1, _array_type_channels_shape);
  type.insert("channels", offsetof(DsType, channels), _array_type_channels);
  return type;
}

hdf5pp::Type ns_Sample_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_Sample_v0_dataset_data_native_type();
  return type;
}

ns_Sample_v0::dataset_data::dataset_data()
{
}

ns_Sample_v0::dataset_data::dataset_data(const Psana::Imp::Sample& psanaobj)
{
  {
    const __typeof__(psanaobj.channels())& arr = psanaobj.channels();
    std::copy(arr.begin(), arr.begin()+4, channels);
  }
}

ns_Sample_v0::dataset_data::~dataset_data()
{
}

hdf5pp::Type ns_LaneStatus_v0_dataset_data_stored_type()
{
  typedef ns_LaneStatus_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("linkErrCount", offsetof(DsType, linkErrCount), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("linkDownCount", offsetof(DsType, linkDownCount), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("cellErrCount", offsetof(DsType, cellErrCount), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("rxCount", offsetof(DsType, rxCount), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("locLinked", offsetof(DsType, locLinked), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("remLinked", offsetof(DsType, remLinked), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("zeros", offsetof(DsType, zeros), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("powersOkay", offsetof(DsType, powersOkay), hdf5pp::TypeTraits<uint8_t>::stored_type());
  return type;
}

hdf5pp::Type ns_LaneStatus_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_LaneStatus_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_LaneStatus_v0_dataset_data_native_type()
{
  typedef ns_LaneStatus_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("linkErrCount", offsetof(DsType, linkErrCount), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("linkDownCount", offsetof(DsType, linkDownCount), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("cellErrCount", offsetof(DsType, cellErrCount), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("rxCount", offsetof(DsType, rxCount), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("locLinked", offsetof(DsType, locLinked), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("remLinked", offsetof(DsType, remLinked), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("zeros", offsetof(DsType, zeros), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("powersOkay", offsetof(DsType, powersOkay), hdf5pp::TypeTraits<uint8_t>::native_type());
  return type;
}

hdf5pp::Type ns_LaneStatus_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_LaneStatus_v0_dataset_data_native_type();
  return type;
}

ns_LaneStatus_v0::dataset_data::dataset_data()
{
}

ns_LaneStatus_v0::dataset_data::dataset_data(const Psana::Imp::LaneStatus& psanaobj)
  : linkErrCount(psanaobj.linkErrCount())
  , linkDownCount(psanaobj.linkDownCount())
  , cellErrCount(psanaobj.cellErrCount())
  , rxCount(psanaobj.rxCount())
  , locLinked(psanaobj.locLinked())
  , remLinked(psanaobj.remLinked())
  , zeros(psanaobj.zeros())
  , powersOkay(psanaobj.powersOkay())
{
}

ns_LaneStatus_v0::dataset_data::~dataset_data()
{
}

hdf5pp::Type ns_ElementV1_v0_dataset_data_stored_type()
{
  typedef ns_ElementV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("vc", offsetof(DsType, vc), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("lane", offsetof(DsType, lane), hdf5pp::TypeTraits<uint8_t>::stored_type());
  type.insert("frameNumber", offsetof(DsType, frameNumber), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("range", offsetof(DsType, range), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("laneStatus", offsetof(DsType, laneStatus), hdf5pp::TypeTraits<Imp::ns_LaneStatus_v0::dataset_data>::stored_type());
  return type;
}

hdf5pp::Type ns_ElementV1_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_ElementV1_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_ElementV1_v0_dataset_data_native_type()
{
  typedef ns_ElementV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("vc", offsetof(DsType, vc), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("lane", offsetof(DsType, lane), hdf5pp::TypeTraits<uint8_t>::native_type());
  type.insert("frameNumber", offsetof(DsType, frameNumber), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("range", offsetof(DsType, range), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("laneStatus", offsetof(DsType, laneStatus), hdf5pp::TypeTraits<Imp::ns_LaneStatus_v0::dataset_data>::native_type());
  return type;
}

hdf5pp::Type ns_ElementV1_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_ElementV1_v0_dataset_data_native_type();
  return type;
}

ns_ElementV1_v0::dataset_data::dataset_data()
{
}

ns_ElementV1_v0::dataset_data::dataset_data(const Psana::Imp::ElementV1& psanaobj)
  : vc(psanaobj.vc())
  , lane(psanaobj.lane())
  , frameNumber(psanaobj.frameNumber())
  , range(psanaobj.range())
  , laneStatus(psanaobj.laneStatus())
{
}

ns_ElementV1_v0::dataset_data::~dataset_data()
{
}
template <typename Config>
uint8_t ElementV1_v0<Config>::vc() const {
  if (not m_ds_data) read_ds_data();
  return uint8_t(m_ds_data->vc);
}
template <typename Config>
uint8_t ElementV1_v0<Config>::lane() const {
  if (not m_ds_data) read_ds_data();
  return uint8_t(m_ds_data->lane);
}
template <typename Config>
uint32_t ElementV1_v0<Config>::frameNumber() const {
  if (not m_ds_data) read_ds_data();
  return uint32_t(m_ds_data->frameNumber);
}
template <typename Config>
uint32_t ElementV1_v0<Config>::range() const {
  if (not m_ds_data) read_ds_data();
  return uint32_t(m_ds_data->range);
}
template <typename Config>
const Psana::Imp::LaneStatus& ElementV1_v0<Config>::laneStatus() const {
  if (not m_ds_data) read_ds_data();
  m_ds_storage_data_laneStatus = Psana::Imp::LaneStatus(m_ds_data->laneStatus);
  return m_ds_storage_data_laneStatus;
}
template <typename Config>
ndarray<const Psana::Imp::Sample, 1> ElementV1_v0<Config>::samples() const {
  if (m_ds_samples.empty()) read_ds_samples();
  return m_ds_samples;
}
template <typename Config>
void ElementV1_v0<Config>::read_ds_data() const {
  m_ds_data = hdf5pp::Utils::readGroup<Imp::ns_ElementV1_v0::dataset_data>(m_group, "data", m_idx);
}
template <typename Config>
void ElementV1_v0<Config>::read_ds_samples() const {
  ndarray<Imp::ns_Sample_v0::dataset_data, 1> arr = hdf5pp::Utils::readNdarray<Imp::ns_Sample_v0::dataset_data, 1>(m_group, "samples", m_idx);
  ndarray<Psana::Imp::Sample, 1> tmp(arr.shape());
  std::copy(arr.begin(), arr.end(), tmp.begin());
  m_ds_samples = tmp;
}
template class ElementV1_v0<Psana::Imp::ConfigV1>;

void make_datasets_ElementV1_v0(const Psana::Imp::ElementV1& obj, 
      hdf5pp::Group group, const ChunkPolicy& chunkPolicy, int deflate, bool shuffle)
{
  {
    hdf5pp::Type dstype = Imp::ns_ElementV1_v0::dataset_data::stored_type();
    hdf5pp::Utils::createDataset(group, "data", dstype, chunkPolicy.chunkSize(dstype), chunkPolicy.chunkCacheSize(dstype), deflate, shuffle);    
  }
  {
    typedef __typeof__(obj.samples()) PsanaArray;
    const PsanaArray& psana_array = obj.samples();
    hdf5pp::Type dstype = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<Imp::ns_Sample_v0::dataset_data>::stored_type(), psana_array.shape()[0]);
    hdf5pp::Utils::createDataset(group, "samples", dstype, chunkPolicy.chunkSize(dstype), chunkPolicy.chunkCacheSize(dstype), deflate, shuffle);    
  }
}

void store_ElementV1_v0(const Psana::Imp::ElementV1* obj, hdf5pp::Group group, long index, bool append)
{
  if (obj) {
    Imp::ns_ElementV1_v0::dataset_data ds_data(*obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "data", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "data", ds_data);
    }
  } else if (append) {
    hdf5pp::Utils::resizeDataset(group, "data", index < 0 ? index : index + 1);
  }
  if (obj) {
    typedef __typeof__(obj->samples()) PsanaArray;
    typedef ndarray<Imp::ns_Sample_v0::dataset_data, 1> HdfArray;
    PsanaArray psana_array = obj->samples();
    HdfArray hdf_array(psana_array.shape());
    HdfArray::iterator out = hdf_array.begin();
    for (PsanaArray::iterator it = psana_array.begin(); it != psana_array.end(); ++ it, ++ out) {
      *out = Imp::ns_Sample_v0::dataset_data(*it);
    }
    if (append) {
      hdf5pp::Utils::storeNDArrayAt(group, "samples", hdf_array, index);
    } else {
      hdf5pp::Utils::storeNDArray(group, "samples", hdf_array);
    }
  } else if (append) {
    hdf5pp::Utils::resizeDataset(group, "samples", index < 0 ? index : index + 1);
  }

}

boost::shared_ptr<PSEvt::Proxy<Psana::Imp::ElementV1> > make_ElementV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::Imp::ConfigV1>& cfg) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Imp::ElementV1> >(boost::make_shared<ElementV1_v0<Psana::Imp::ConfigV1> >(group, idx, cfg));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Imp::ElementV1> >(boost::shared_ptr<Psana::Imp::ElementV1>());
  }
}

void make_datasets(const Psana::Imp::ElementV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 0;
  group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    make_datasets_ElementV1_v0(obj, group, chunkPolicy, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Imp.ElementV1", version);
  }
}

void store_ElementV1(const Psana::Imp::ElementV1* obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 0;
  if (not append) group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    store_ElementV1_v0(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Imp.ElementV1", version);
  }
}

void store(const Psana::Imp::ElementV1& obj, hdf5pp::Group group, int version) 
{
  store_ElementV1(&obj, group, 0, version, false);
}

void store_at(const Psana::Imp::ElementV1* obj, hdf5pp::Group group, long index, int version)
{
  store_ElementV1(obj, group, index, version, true);
}

} // namespace Imp
} // namespace psddl_hdf2psana
