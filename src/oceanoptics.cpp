#include "psddl_hdf2psana/oceanoptics.h"
#include "hdf5pp/ArrayType.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/Utils.h"
#include "psddl_hdf2psana/Exceptions.h"

namespace psddl_hdf2psana {
namespace OceanOptics {


hdf5pp::Type ns_DataV1_v0_dataset_data_stored_type()
{
  typedef ns_DataV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("frameCounter", offsetof(DsType, frameCounter), hdf5pp::TypeTraits<uint64_t>::stored_type());
  type.insert("numDelayedFrames", offsetof(DsType, numDelayedFrames), hdf5pp::TypeTraits<uint64_t>::stored_type());
  type.insert("numDiscardFrames", offsetof(DsType, numDiscardFrames), hdf5pp::TypeTraits<uint64_t>::stored_type());
  type.insert("timeFrameStart", offsetof(DsType, timeFrameStart), hdf5pp::TypeTraits<OceanOptics::ns_timespec64_v0::dataset_data>::stored_type());
  type.insert("timeFrameFirstData", offsetof(DsType, timeFrameFirstData), hdf5pp::TypeTraits<OceanOptics::ns_timespec64_v0::dataset_data>::stored_type());
  type.insert("timeFrameEnd", offsetof(DsType, timeFrameEnd), hdf5pp::TypeTraits<OceanOptics::ns_timespec64_v0::dataset_data>::stored_type());
  type.insert("numSpectraInData", offsetof(DsType, numSpectraInData), hdf5pp::TypeTraits<int8_t>::stored_type());
  type.insert("numSpectraInQueue", offsetof(DsType, numSpectraInQueue), hdf5pp::TypeTraits<int8_t>::stored_type());
  type.insert("numSpectraUnused", offsetof(DsType, numSpectraUnused), hdf5pp::TypeTraits<int8_t>::stored_type());
  type.insert("durationOfFrame", offsetof(DsType, durationOfFrame), hdf5pp::TypeTraits<double>::stored_type());
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
  type.insert("frameCounter", offsetof(DsType, frameCounter), hdf5pp::TypeTraits<uint64_t>::native_type());
  type.insert("numDelayedFrames", offsetof(DsType, numDelayedFrames), hdf5pp::TypeTraits<uint64_t>::native_type());
  type.insert("numDiscardFrames", offsetof(DsType, numDiscardFrames), hdf5pp::TypeTraits<uint64_t>::native_type());
  type.insert("timeFrameStart", offsetof(DsType, timeFrameStart), hdf5pp::TypeTraits<OceanOptics::ns_timespec64_v0::dataset_data>::native_type());
  type.insert("timeFrameFirstData", offsetof(DsType, timeFrameFirstData), hdf5pp::TypeTraits<OceanOptics::ns_timespec64_v0::dataset_data>::native_type());
  type.insert("timeFrameEnd", offsetof(DsType, timeFrameEnd), hdf5pp::TypeTraits<OceanOptics::ns_timespec64_v0::dataset_data>::native_type());
  type.insert("numSpectraInData", offsetof(DsType, numSpectraInData), hdf5pp::TypeTraits<int8_t>::native_type());
  type.insert("numSpectraInQueue", offsetof(DsType, numSpectraInQueue), hdf5pp::TypeTraits<int8_t>::native_type());
  type.insert("numSpectraUnused", offsetof(DsType, numSpectraUnused), hdf5pp::TypeTraits<int8_t>::native_type());
  type.insert("durationOfFrame", offsetof(DsType, durationOfFrame), hdf5pp::TypeTraits<double>::native_type());
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

ns_DataV1_v0::dataset_data::dataset_data(const Psana::OceanOptics::DataV1& psanaobj)
  : frameCounter(psanaobj.frameCounter())
  , numDelayedFrames(psanaobj.numDelayedFrames())
  , numDiscardFrames(psanaobj.numDiscardFrames())
  , timeFrameStart(psanaobj.timeFrameStart())
  , timeFrameFirstData(psanaobj.timeFrameFirstData())
  , timeFrameEnd(psanaobj.timeFrameEnd())
  , numSpectraInData(psanaobj.numSpectraInData())
  , numSpectraInQueue(psanaobj.numSpectraInQueue())
  , numSpectraUnused(psanaobj.numSpectraUnused())
  , durationOfFrame(psanaobj.durationOfFrame())
{
}

ns_DataV1_v0::dataset_data::~dataset_data()
{
}
template <typename Config>
ndarray<const uint16_t, 1> DataV1_v0<Config>::data() const {
  if (m_ds_spectra.empty()) read_ds_spectra();
  return m_ds_spectra;
}
template <typename Config>
uint64_t DataV1_v0<Config>::frameCounter() const {
  if (not m_ds_data) read_ds_data();
  return uint64_t(m_ds_data->frameCounter);
}
template <typename Config>
uint64_t DataV1_v0<Config>::numDelayedFrames() const {
  if (not m_ds_data) read_ds_data();
  return uint64_t(m_ds_data->numDelayedFrames);
}
template <typename Config>
uint64_t DataV1_v0<Config>::numDiscardFrames() const {
  if (not m_ds_data) read_ds_data();
  return uint64_t(m_ds_data->numDiscardFrames);
}
template <typename Config>
const Psana::OceanOptics::timespec64& DataV1_v0<Config>::timeFrameStart() const {
  if (not m_ds_data) read_ds_data();
  m_ds_storage_data_timeFrameStart = Psana::OceanOptics::timespec64(m_ds_data->timeFrameStart);
  return m_ds_storage_data_timeFrameStart;
}
template <typename Config>
const Psana::OceanOptics::timespec64& DataV1_v0<Config>::timeFrameFirstData() const {
  if (not m_ds_data) read_ds_data();
  m_ds_storage_data_timeFrameFirstData = Psana::OceanOptics::timespec64(m_ds_data->timeFrameFirstData);
  return m_ds_storage_data_timeFrameFirstData;
}
template <typename Config>
const Psana::OceanOptics::timespec64& DataV1_v0<Config>::timeFrameEnd() const {
  if (not m_ds_data) read_ds_data();
  m_ds_storage_data_timeFrameEnd = Psana::OceanOptics::timespec64(m_ds_data->timeFrameEnd);
  return m_ds_storage_data_timeFrameEnd;
}
template <typename Config>
int8_t DataV1_v0<Config>::numSpectraInData() const {
  if (not m_ds_data) read_ds_data();
  return int8_t(m_ds_data->numSpectraInData);
}
template <typename Config>
int8_t DataV1_v0<Config>::numSpectraInQueue() const {
  if (not m_ds_data) read_ds_data();
  return int8_t(m_ds_data->numSpectraInQueue);
}
template <typename Config>
int8_t DataV1_v0<Config>::numSpectraUnused() const {
  if (not m_ds_data) read_ds_data();
  return int8_t(m_ds_data->numSpectraUnused);
}
template <typename Config>
double DataV1_v0<Config>::durationOfFrame() const {
  if (not m_ds_data) read_ds_data();
  return double(m_ds_data->durationOfFrame);
}
template <typename Config>
double
DataV1_v0<Config>::nonlinerCorrected(uint32_t iPixel) const{ 

    double fRawValue = (double) (this->data()[iPixel] ^ 0x2000);
    const ndarray<const double, 1>& corr = m_cfg->nonlinCorrect();
    return fRawValue / (                      
	corr[0] + fRawValue *
       (corr[1] + fRawValue *
       (corr[2] + fRawValue *
       (corr[3] + fRawValue *
       (corr[4] + fRawValue *
       (corr[5] + fRawValue *
       (corr[6] + fRawValue *
        corr[7])))))));
 
}
template <typename Config>
void DataV1_v0<Config>::read_ds_spectra() const {
  m_ds_spectra = hdf5pp::Utils::readNdarray<uint16_t, 1>(m_group, "spectra", m_idx);
}
template <typename Config>
void DataV1_v0<Config>::read_ds_data() const {
  m_ds_data = hdf5pp::Utils::readGroup<OceanOptics::ns_DataV1_v0::dataset_data>(m_group, "data", m_idx);
}
template class DataV1_v0<Psana::OceanOptics::ConfigV1>;
template class DataV1_v0<Psana::OceanOptics::ConfigV2>;

void make_datasets_DataV1_v0(const Psana::OceanOptics::DataV1& obj, 
      hdf5pp::Group group, const ChunkPolicy& chunkPolicy, int deflate, bool shuffle)
{
  {
    typedef __typeof__(obj.data()) PsanaArray;
    const PsanaArray& psana_array = obj.data();
    hdf5pp::Type dstype = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<uint16_t>::stored_type(), psana_array.shape()[0]);
    hdf5pp::Utils::createDataset(group, "spectra", dstype, chunkPolicy.chunkSize(dstype), chunkPolicy.chunkCacheSize(dstype), deflate, shuffle);    

    // special dataset for corrected data
    hdf5pp::Type dstype2 = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<float>::stored_type(), psana_array.shape()[0]);
    hdf5pp::Utils::createDataset(group, "corrSpectra", dstype2, chunkPolicy.chunkSize(dstype2), chunkPolicy.chunkCacheSize(dstype2), deflate, shuffle);
  }
  {
    hdf5pp::Type dstype = OceanOptics::ns_DataV1_v0::dataset_data::stored_type();
    hdf5pp::Utils::createDataset(group, "data", dstype, chunkPolicy.chunkSize(dstype), chunkPolicy.chunkCacheSize(dstype), deflate, shuffle);    
  }
}

void store_DataV1_v0(const Psana::OceanOptics::DataV1* obj, hdf5pp::Group group, long index, bool append)
{
  if (append) {
    if (obj) {
      hdf5pp::Utils::storeNDArrayAt(group, "spectra", obj->data(), index);
    } else {
      hdf5pp::Utils::resizeDataset(group, "spectra", index < 0 ? index : index + 1);
    }
  } else {
    hdf5pp::Utils::storeNDArray(group, "spectra", obj->data());
  }

  // make corrected data
  ndarray<float, 1> corrData = make_ndarray<float>(Psana::OceanOptics::DataV1::iNumPixels);
  if (obj) {
    for (int i = 0; i != Psana::OceanOptics::DataV1::iNumPixels; ++ i) {
      corrData[i] = obj->nonlinerCorrected(i);
    }
  }
  if (append) {
    if (obj) {
      hdf5pp::Utils::storeNDArrayAt(group, "corrSpectra", corrData, index);
    } else {
      hdf5pp::Utils::resizeDataset(group, "corrSpectra", index < 0 ? index : index + 1);
    }
  } else {
    hdf5pp::Utils::storeNDArray(group, "corrSpectra", corrData);
  }


  if (obj) {
    OceanOptics::ns_DataV1_v0::dataset_data ds_data(*obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "data", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "data", ds_data);
    }
  } else if (append) {
    hdf5pp::Utils::resizeDataset(group, "data", index < 0 ? index : index + 1);
  }
}







hdf5pp::Type ns_DataV2_v0_dataset_data_stored_type()
{
  typedef ns_DataV2_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("frameCounter", offsetof(DsType, frameCounter), hdf5pp::TypeTraits<uint64_t>::stored_type());
  type.insert("numDelayedFrames", offsetof(DsType, numDelayedFrames), hdf5pp::TypeTraits<uint64_t>::stored_type());
  type.insert("numDiscardFrames", offsetof(DsType, numDiscardFrames), hdf5pp::TypeTraits<uint64_t>::stored_type());
  type.insert("timeFrameStart", offsetof(DsType, timeFrameStart), hdf5pp::TypeTraits<OceanOptics::ns_timespec64_v0::dataset_data>::stored_type());
  type.insert("timeFrameFirstData", offsetof(DsType, timeFrameFirstData), hdf5pp::TypeTraits<OceanOptics::ns_timespec64_v0::dataset_data>::stored_type());
  type.insert("timeFrameEnd", offsetof(DsType, timeFrameEnd), hdf5pp::TypeTraits<OceanOptics::ns_timespec64_v0::dataset_data>::stored_type());
  type.insert("numSpectraInData", offsetof(DsType, numSpectraInData), hdf5pp::TypeTraits<int8_t>::stored_type());
  type.insert("numSpectraInQueue", offsetof(DsType, numSpectraInQueue), hdf5pp::TypeTraits<int8_t>::stored_type());
  type.insert("numSpectraUnused", offsetof(DsType, numSpectraUnused), hdf5pp::TypeTraits<int8_t>::stored_type());
  type.insert("durationOfFrame", offsetof(DsType, durationOfFrame), hdf5pp::TypeTraits<double>::stored_type());
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
  type.insert("frameCounter", offsetof(DsType, frameCounter), hdf5pp::TypeTraits<uint64_t>::native_type());
  type.insert("numDelayedFrames", offsetof(DsType, numDelayedFrames), hdf5pp::TypeTraits<uint64_t>::native_type());
  type.insert("numDiscardFrames", offsetof(DsType, numDiscardFrames), hdf5pp::TypeTraits<uint64_t>::native_type());
  type.insert("timeFrameStart", offsetof(DsType, timeFrameStart), hdf5pp::TypeTraits<OceanOptics::ns_timespec64_v0::dataset_data>::native_type());
  type.insert("timeFrameFirstData", offsetof(DsType, timeFrameFirstData), hdf5pp::TypeTraits<OceanOptics::ns_timespec64_v0::dataset_data>::native_type());
  type.insert("timeFrameEnd", offsetof(DsType, timeFrameEnd), hdf5pp::TypeTraits<OceanOptics::ns_timespec64_v0::dataset_data>::native_type());
  type.insert("numSpectraInData", offsetof(DsType, numSpectraInData), hdf5pp::TypeTraits<int8_t>::native_type());
  type.insert("numSpectraInQueue", offsetof(DsType, numSpectraInQueue), hdf5pp::TypeTraits<int8_t>::native_type());
  type.insert("numSpectraUnused", offsetof(DsType, numSpectraUnused), hdf5pp::TypeTraits<int8_t>::native_type());
  type.insert("durationOfFrame", offsetof(DsType, durationOfFrame), hdf5pp::TypeTraits<double>::native_type());
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

ns_DataV2_v0::dataset_data::dataset_data(const Psana::OceanOptics::DataV2& psanaobj)
  : frameCounter(psanaobj.frameCounter())
  , numDelayedFrames(psanaobj.numDelayedFrames())
  , numDiscardFrames(psanaobj.numDiscardFrames())
  , timeFrameStart(psanaobj.timeFrameStart())
  , timeFrameFirstData(psanaobj.timeFrameFirstData())
  , timeFrameEnd(psanaobj.timeFrameEnd())
  , numSpectraInData(psanaobj.numSpectraInData())
  , numSpectraInQueue(psanaobj.numSpectraInQueue())
  , numSpectraUnused(psanaobj.numSpectraUnused())
  , durationOfFrame(psanaobj.durationOfFrame())
{
}

ns_DataV2_v0::dataset_data::~dataset_data()
{
}
template <typename Config>
ndarray<const uint16_t, 1> DataV2_v0<Config>::data() const {
  if (m_ds_spectra.empty()) read_ds_spectra();
  return m_ds_spectra;
}
template <typename Config>
uint64_t DataV2_v0<Config>::frameCounter() const {
  if (not m_ds_data) read_ds_data();
  return uint64_t(m_ds_data->frameCounter);
}
template <typename Config>
uint64_t DataV2_v0<Config>::numDelayedFrames() const {
  if (not m_ds_data) read_ds_data();
  return uint64_t(m_ds_data->numDelayedFrames);
}
template <typename Config>
uint64_t DataV2_v0<Config>::numDiscardFrames() const {
  if (not m_ds_data) read_ds_data();
  return uint64_t(m_ds_data->numDiscardFrames);
}
template <typename Config>
const Psana::OceanOptics::timespec64& DataV2_v0<Config>::timeFrameStart() const {
  if (not m_ds_data) read_ds_data();
  m_ds_storage_data_timeFrameStart = Psana::OceanOptics::timespec64(m_ds_data->timeFrameStart);
  return m_ds_storage_data_timeFrameStart;
}
template <typename Config>
const Psana::OceanOptics::timespec64& DataV2_v0<Config>::timeFrameFirstData() const {
  if (not m_ds_data) read_ds_data();
  m_ds_storage_data_timeFrameFirstData = Psana::OceanOptics::timespec64(m_ds_data->timeFrameFirstData);
  return m_ds_storage_data_timeFrameFirstData;
}
template <typename Config>
const Psana::OceanOptics::timespec64& DataV2_v0<Config>::timeFrameEnd() const {
  if (not m_ds_data) read_ds_data();
  m_ds_storage_data_timeFrameEnd = Psana::OceanOptics::timespec64(m_ds_data->timeFrameEnd);
  return m_ds_storage_data_timeFrameEnd;
}
template <typename Config>
int8_t DataV2_v0<Config>::numSpectraInData() const {
  if (not m_ds_data) read_ds_data();
  return int8_t(m_ds_data->numSpectraInData);
}
template <typename Config>
int8_t DataV2_v0<Config>::numSpectraInQueue() const {
  if (not m_ds_data) read_ds_data();
  return int8_t(m_ds_data->numSpectraInQueue);
}
template <typename Config>
int8_t DataV2_v0<Config>::numSpectraUnused() const {
  if (not m_ds_data) read_ds_data();
  return int8_t(m_ds_data->numSpectraUnused);
}
template <typename Config>
double DataV2_v0<Config>::durationOfFrame() const {
  if (not m_ds_data) read_ds_data();
  return double(m_ds_data->durationOfFrame);
}
template <typename Config>
double
DataV2_v0<Config>::nonlinerCorrected(uint32_t iPixel) const{

    double fRawValue = (double) (this->data()[iPixel]);
    const ndarray<const double, 1>& corr = m_cfg->nonlinCorrect();
    return fRawValue / (
  corr[0] + fRawValue *
       (corr[1] + fRawValue *
       (corr[2] + fRawValue *
       (corr[3] + fRawValue *
       (corr[4] + fRawValue *
       (corr[5] + fRawValue *
       (corr[6] + fRawValue *
        corr[7])))))));

}
template <typename Config>
void DataV2_v0<Config>::read_ds_spectra() const {
  m_ds_spectra = hdf5pp::Utils::readNdarray<uint16_t, 1>(m_group, "spectra", m_idx);
}
template <typename Config>
void DataV2_v0<Config>::read_ds_data() const {
  m_ds_data = hdf5pp::Utils::readGroup<OceanOptics::ns_DataV2_v0::dataset_data>(m_group, "data", m_idx);
}
template class DataV2_v0<Psana::OceanOptics::ConfigV2>;

void make_datasets_DataV2_v0(const Psana::OceanOptics::DataV2& obj,
      hdf5pp::Group group, const ChunkPolicy& chunkPolicy, int deflate, bool shuffle)
{
  {
    typedef __typeof__(obj.data()) PsanaArray;
    const PsanaArray& psana_array = obj.data();
    hdf5pp::Type dstype = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<uint16_t>::stored_type(), psana_array.shape()[0]);
    hdf5pp::Utils::createDataset(group, "spectra", dstype, chunkPolicy.chunkSize(dstype), chunkPolicy.chunkCacheSize(dstype), deflate, shuffle);

    // special dataset for corrected data
    hdf5pp::Type dstype2 = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<float>::stored_type(), psana_array.shape()[0]);
    hdf5pp::Utils::createDataset(group, "corrSpectra", dstype2, chunkPolicy.chunkSize(dstype2), chunkPolicy.chunkCacheSize(dstype2), deflate, shuffle);
  }
  {
    hdf5pp::Type dstype = OceanOptics::ns_DataV2_v0::dataset_data::stored_type();
    hdf5pp::Utils::createDataset(group, "data", dstype, chunkPolicy.chunkSize(dstype), chunkPolicy.chunkCacheSize(dstype), deflate, shuffle);
  }
}

void store_DataV2_v0(const Psana::OceanOptics::DataV2* obj, hdf5pp::Group group, long index, bool append)
{
  if (append) {
    if (obj) {
      hdf5pp::Utils::storeNDArrayAt(group, "spectra", obj->data(), index);
    } else {
      hdf5pp::Utils::resizeDataset(group, "spectra", index < 0 ? index : index + 1);
    }
  } else {
    hdf5pp::Utils::storeNDArray(group, "spectra", obj->data());
  }

  // make corrected data
  ndarray<float, 1> corrData = make_ndarray<float>(Psana::OceanOptics::DataV2::iNumPixels);
  if (obj) {
    for (int i = 0; i != Psana::OceanOptics::DataV2::iNumPixels; ++ i) {
      corrData[i] = obj->nonlinerCorrected(i);
    }
  }
  if (append) {
    if (obj) {
      hdf5pp::Utils::storeNDArrayAt(group, "corrSpectra", corrData, index);
    } else {
      hdf5pp::Utils::resizeDataset(group, "corrSpectra", index < 0 ? index : index + 1);
    }
  } else {
    hdf5pp::Utils::storeNDArray(group, "corrSpectra", corrData);
  }


  if (obj) {
    OceanOptics::ns_DataV2_v0::dataset_data ds_data(*obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "data", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "data", ds_data);
    }
  } else if (append) {
    hdf5pp::Utils::resizeDataset(group, "data", index < 0 ? index : index + 1);
  }
}

  // DataV3
hdf5pp::Type ns_DataV3_v0_dataset_data_stored_type()
{
  typedef ns_DataV3_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("frameCounter", offsetof(DsType, frameCounter), hdf5pp::TypeTraits<uint64_t>::stored_type());
  type.insert("numDelayedFrames", offsetof(DsType, numDelayedFrames), hdf5pp::TypeTraits<uint64_t>::stored_type());
  type.insert("numDiscardFrames", offsetof(DsType, numDiscardFrames), hdf5pp::TypeTraits<uint64_t>::stored_type());
  type.insert("timeFrameStart", offsetof(DsType, timeFrameStart), hdf5pp::TypeTraits<OceanOptics::ns_timespec64_v0::dataset_data>::stored_type());
  type.insert("timeFrameFirstData", offsetof(DsType, timeFrameFirstData), hdf5pp::TypeTraits<OceanOptics::ns_timespec64_v0::dataset_data>::stored_type());
  type.insert("timeFrameEnd", offsetof(DsType, timeFrameEnd), hdf5pp::TypeTraits<OceanOptics::ns_timespec64_v0::dataset_data>::stored_type());
  type.insert("numSpectraInData", offsetof(DsType, numSpectraInData), hdf5pp::TypeTraits<int8_t>::stored_type());
  type.insert("numSpectraInQueue", offsetof(DsType, numSpectraInQueue), hdf5pp::TypeTraits<int8_t>::stored_type());
  type.insert("numSpectraUnused", offsetof(DsType, numSpectraUnused), hdf5pp::TypeTraits<int8_t>::stored_type());
  type.insert("durationOfFrame", offsetof(DsType, durationOfFrame), hdf5pp::TypeTraits<double>::stored_type());
  return type;
}

hdf5pp::Type ns_DataV3_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_DataV3_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_DataV3_v0_dataset_data_native_type()
{
  typedef ns_DataV3_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("frameCounter", offsetof(DsType, frameCounter), hdf5pp::TypeTraits<uint64_t>::native_type());
  type.insert("numDelayedFrames", offsetof(DsType, numDelayedFrames), hdf5pp::TypeTraits<uint64_t>::native_type());
  type.insert("numDiscardFrames", offsetof(DsType, numDiscardFrames), hdf5pp::TypeTraits<uint64_t>::native_type());
  type.insert("timeFrameStart", offsetof(DsType, timeFrameStart), hdf5pp::TypeTraits<OceanOptics::ns_timespec64_v0::dataset_data>::native_type());
  type.insert("timeFrameFirstData", offsetof(DsType, timeFrameFirstData), hdf5pp::TypeTraits<OceanOptics::ns_timespec64_v0::dataset_data>::native_type());
  type.insert("timeFrameEnd", offsetof(DsType, timeFrameEnd), hdf5pp::TypeTraits<OceanOptics::ns_timespec64_v0::dataset_data>::native_type());
  type.insert("numSpectraInData", offsetof(DsType, numSpectraInData), hdf5pp::TypeTraits<int8_t>::native_type());
  type.insert("numSpectraInQueue", offsetof(DsType, numSpectraInQueue), hdf5pp::TypeTraits<int8_t>::native_type());
  type.insert("numSpectraUnused", offsetof(DsType, numSpectraUnused), hdf5pp::TypeTraits<int8_t>::native_type());
  type.insert("durationOfFrame", offsetof(DsType, durationOfFrame), hdf5pp::TypeTraits<double>::native_type());
  return type;
}

hdf5pp::Type ns_DataV3_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_DataV3_v0_dataset_data_native_type();
  return type;
}

ns_DataV3_v0::dataset_data::dataset_data()
{
}

ns_DataV3_v0::dataset_data::dataset_data(const Psana::OceanOptics::DataV3& psanaobj)
  : frameCounter(psanaobj.frameCounter())
  , numDelayedFrames(psanaobj.numDelayedFrames())
  , numDiscardFrames(psanaobj.numDiscardFrames())
  , timeFrameStart(psanaobj.timeFrameStart())
  , timeFrameFirstData(psanaobj.timeFrameFirstData())
  , timeFrameEnd(psanaobj.timeFrameEnd())
  , numSpectraInData(psanaobj.numSpectraInData())
  , numSpectraInQueue(psanaobj.numSpectraInQueue())
  , numSpectraUnused(psanaobj.numSpectraUnused())
  , durationOfFrame(psanaobj.durationOfFrame())
{
}

ns_DataV3_v0::dataset_data::~dataset_data()
{
}
template <typename Config>
ndarray<const uint16_t, 1> DataV3_v0<Config>::data() const {
  if (m_ds_spectra.empty()) read_ds_spectra();
  return m_ds_spectra;
}
template <typename Config>
uint64_t DataV3_v0<Config>::frameCounter() const {
  if (not m_ds_data) read_ds_data();
  return uint64_t(m_ds_data->frameCounter);
}
template <typename Config>
uint64_t DataV3_v0<Config>::numDelayedFrames() const {
  if (not m_ds_data) read_ds_data();
  return uint64_t(m_ds_data->numDelayedFrames);
}
template <typename Config>
uint64_t DataV3_v0<Config>::numDiscardFrames() const {
  if (not m_ds_data) read_ds_data();
  return uint64_t(m_ds_data->numDiscardFrames);
}
template <typename Config>
const Psana::OceanOptics::timespec64& DataV3_v0<Config>::timeFrameStart() const {
  if (not m_ds_data) read_ds_data();
  m_ds_storage_data_timeFrameStart = Psana::OceanOptics::timespec64(m_ds_data->timeFrameStart);
  return m_ds_storage_data_timeFrameStart;
}
template <typename Config>
const Psana::OceanOptics::timespec64& DataV3_v0<Config>::timeFrameFirstData() const {
  if (not m_ds_data) read_ds_data();
  m_ds_storage_data_timeFrameFirstData = Psana::OceanOptics::timespec64(m_ds_data->timeFrameFirstData);
  return m_ds_storage_data_timeFrameFirstData;
}
template <typename Config>
const Psana::OceanOptics::timespec64& DataV3_v0<Config>::timeFrameEnd() const {
  if (not m_ds_data) read_ds_data();
  m_ds_storage_data_timeFrameEnd = Psana::OceanOptics::timespec64(m_ds_data->timeFrameEnd);
  return m_ds_storage_data_timeFrameEnd;
}
template <typename Config>
int8_t DataV3_v0<Config>::numSpectraInData() const {
  if (not m_ds_data) read_ds_data();
  return int8_t(m_ds_data->numSpectraInData);
}
template <typename Config>
int8_t DataV3_v0<Config>::numSpectraInQueue() const {
  if (not m_ds_data) read_ds_data();
  return int8_t(m_ds_data->numSpectraInQueue);
}
template <typename Config>
int8_t DataV3_v0<Config>::numSpectraUnused() const {
  if (not m_ds_data) read_ds_data();
  return int8_t(m_ds_data->numSpectraUnused);
}
template <typename Config>
double DataV3_v0<Config>::durationOfFrame() const {
  if (not m_ds_data) read_ds_data();
  return double(m_ds_data->durationOfFrame);
}
template <typename Config>
double
DataV3_v0<Config>::nonlinerCorrected(uint32_t iPixel) const{

    double fRawValue = (double) (this->data()[iPixel]);
    const ndarray<const double, 1>& corr = m_cfg->nonlinCorrect();
    return fRawValue / (
  corr[0] + fRawValue *
       (corr[1] + fRawValue *
       (corr[2] + fRawValue *
       (corr[3] + fRawValue *
       (corr[4] + fRawValue *
       (corr[5] + fRawValue *
       (corr[6] + fRawValue *
        corr[7])))))));

}
template <typename Config>
void DataV3_v0<Config>::read_ds_spectra() const {
  m_ds_spectra = hdf5pp::Utils::readNdarray<uint16_t, 1>(m_group, "spectra", m_idx);
}
template <typename Config>
void DataV3_v0<Config>::read_ds_data() const {
  m_ds_data = hdf5pp::Utils::readGroup<OceanOptics::ns_DataV3_v0::dataset_data>(m_group, "data", m_idx);
}
template class DataV3_v0<Psana::OceanOptics::ConfigV2>;

void make_datasets_DataV3_v0(const Psana::OceanOptics::DataV3& obj,
      hdf5pp::Group group, const ChunkPolicy& chunkPolicy, int deflate, bool shuffle)
{
  {
    typedef __typeof__(obj.data()) PsanaArray;
    const PsanaArray& psana_array = obj.data();
    hdf5pp::Type dstype = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<uint16_t>::stored_type(), psana_array.shape()[0]);
    hdf5pp::Utils::createDataset(group, "spectra", dstype, chunkPolicy.chunkSize(dstype), chunkPolicy.chunkCacheSize(dstype), deflate, shuffle);

    // special dataset for corrected data
    hdf5pp::Type dstype2 = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<float>::stored_type(), psana_array.shape()[0]);
    hdf5pp::Utils::createDataset(group, "corrSpectra", dstype2, chunkPolicy.chunkSize(dstype2), chunkPolicy.chunkCacheSize(dstype2), deflate, shuffle);
  }
  {
    hdf5pp::Type dstype = OceanOptics::ns_DataV3_v0::dataset_data::stored_type();
    hdf5pp::Utils::createDataset(group, "data", dstype, chunkPolicy.chunkSize(dstype), chunkPolicy.chunkCacheSize(dstype), deflate, shuffle);
  }
}

void store_DataV3_v0(const Psana::OceanOptics::DataV3* obj, hdf5pp::Group group, long index, bool append)
{
  if (append) {
    if (obj) {
      hdf5pp::Utils::storeNDArrayAt(group, "spectra", obj->data(), index);
    } else {
      hdf5pp::Utils::resizeDataset(group, "spectra", index < 0 ? index : index + 1);
    }
  } else {
    hdf5pp::Utils::storeNDArray(group, "spectra", obj->data());
  }

  // make corrected data
  ndarray<float, 1> corrData = make_ndarray<float>(Psana::OceanOptics::DataV3::iNumPixels);
  if (obj) {
    for (int i = 0; i != Psana::OceanOptics::DataV3::iNumPixels; ++ i) {
      corrData[i] = obj->nonlinerCorrected(i);
    }
  }
  if (append) {
    if (obj) {
      hdf5pp::Utils::storeNDArrayAt(group, "corrSpectra", corrData, index);
    } else {
      hdf5pp::Utils::resizeDataset(group, "corrSpectra", index < 0 ? index : index + 1);
    }
  } else {
    hdf5pp::Utils::storeNDArray(group, "corrSpectra", corrData);
  }


  if (obj) {
    OceanOptics::ns_DataV3_v0::dataset_data ds_data(*obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "data", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "data", ds_data);
    }
  } else if (append) {
    hdf5pp::Utils::resizeDataset(group, "data", index < 0 ? index : index + 1);
  }
}


} // namespace OceanOptics
} // namespace psddl_hdf2psana
