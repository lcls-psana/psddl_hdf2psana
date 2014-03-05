
// *** Do not edit this file, it is auto-generated ***

#include "psddl_hdf2psana/partition.ddl.h"
#include "hdf5pp/ArrayType.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/EnumType.h"
#include "hdf5pp/VlenType.h"
#include "hdf5pp/Utils.h"
#include "PSEvt/DataProxy.h"
#include "psddl_hdf2psana/Exceptions.h"
namespace psddl_hdf2psana {
namespace Partition {

hdf5pp::Type ns_Source_v0_dataset_data_stored_type()
{
  typedef ns_Source_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("src", offsetof(DsType, src), hdf5pp::TypeTraits<Pds::ns_Src_v0::dataset_data>::stored_type());
  type.insert("group", offsetof(DsType, group), hdf5pp::TypeTraits<uint32_t>::stored_type());
  return type;
}

hdf5pp::Type ns_Source_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_Source_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_Source_v0_dataset_data_native_type()
{
  typedef ns_Source_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("src", offsetof(DsType, src), hdf5pp::TypeTraits<Pds::ns_Src_v0::dataset_data>::native_type());
  type.insert("group", offsetof(DsType, group), hdf5pp::TypeTraits<uint32_t>::native_type());
  return type;
}

hdf5pp::Type ns_Source_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_Source_v0_dataset_data_native_type();
  return type;
}

ns_Source_v0::dataset_data::dataset_data()
{
}

ns_Source_v0::dataset_data::dataset_data(const Psana::Partition::Source& psanaobj)
  : src(psanaobj.src())
  , group(psanaobj.group())
{
}

ns_Source_v0::dataset_data::~dataset_data()
{
}

hdf5pp::Type ns_ConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_ConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("bldMask", offsetof(DsType, bldMask), hdf5pp::TypeTraits<uint64_t>::stored_type());
  type.insert("numSources", offsetof(DsType, numSources), hdf5pp::TypeTraits<uint32_t>::stored_type());
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
  type.insert("bldMask", offsetof(DsType, bldMask), hdf5pp::TypeTraits<uint64_t>::native_type());
  type.insert("numSources", offsetof(DsType, numSources), hdf5pp::TypeTraits<uint32_t>::native_type());
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

ns_ConfigV1_v0::dataset_config::dataset_config(const Psana::Partition::ConfigV1& psanaobj)
  : bldMask(psanaobj.bldMask())
  , numSources(psanaobj.numSources())
{
}

ns_ConfigV1_v0::dataset_config::~dataset_config()
{
}
uint64_t ConfigV1_v0::bldMask() const {
  if (not m_ds_config) read_ds_config();
  return uint64_t(m_ds_config->bldMask);
}
uint32_t ConfigV1_v0::numSources() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->numSources);
}
ndarray<const Psana::Partition::Source, 1> ConfigV1_v0::sources() const {
  if (m_ds_sources.empty()) read_ds_sources();
  return m_ds_sources;
}
void ConfigV1_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<Partition::ns_ConfigV1_v0::dataset_config>(m_group, "config", m_idx);
}
void ConfigV1_v0::read_ds_sources() const {
  ndarray<Partition::ns_Source_v0::dataset_data, 1> arr = hdf5pp::Utils::readNdarray<Partition::ns_Source_v0::dataset_data, 1>(m_group, "sources", m_idx);
  ndarray<Psana::Partition::Source, 1> tmp(arr.shape());
  std::copy(arr.begin(), arr.end(), tmp.begin());
  m_ds_sources = tmp;
}

void make_datasets_ConfigV1_v0(const Psana::Partition::ConfigV1& obj, 
      hdf5pp::Group group, const ChunkPolicy& chunkPolicy, int deflate, bool shuffle)
{
  {
    hdf5pp::Type dstype = Partition::ns_ConfigV1_v0::dataset_config::stored_type();
    hdf5pp::Utils::createDataset(group, "config", dstype, chunkPolicy.chunkSize(dstype), chunkPolicy.chunkCacheSize(dstype), deflate, shuffle);    
  }
  {
    typedef __typeof__(obj.sources()) PsanaArray;
    const PsanaArray& psana_array = obj.sources();
    hdf5pp::Type dstype = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<Partition::ns_Source_v0::dataset_data>::stored_type(), psana_array.shape()[0]);
    hdf5pp::Utils::createDataset(group, "sources", dstype, chunkPolicy.chunkSize(dstype), chunkPolicy.chunkCacheSize(dstype), deflate, shuffle);    
  }
}

void store_ConfigV1_v0(const Psana::Partition::ConfigV1* obj, hdf5pp::Group group, long index, bool append)
{
  if (obj) {
    Partition::ns_ConfigV1_v0::dataset_config ds_data(*obj);
    if (append) {
      hdf5pp::Utils::storeAt(group, "config", ds_data, index);
    } else {
      hdf5pp::Utils::storeScalar(group, "config", ds_data);
    }
  } else if (append) {
    hdf5pp::Utils::resizeDataset(group, "config", index < 0 ? index : index + 1);
  }
  if (obj) {
    typedef __typeof__(obj->sources()) PsanaArray;
    typedef ndarray<Partition::ns_Source_v0::dataset_data, 1> HdfArray;
    PsanaArray psana_array = obj->sources();
    HdfArray hdf_array(psana_array.shape());
    HdfArray::iterator out = hdf_array.begin();
    for (PsanaArray::iterator it = psana_array.begin(); it != psana_array.end(); ++ it, ++ out) {
      *out = Partition::ns_Source_v0::dataset_data(*it);
    }
    if (append) {
      hdf5pp::Utils::storeNDArrayAt(group, "sources", hdf_array, index);
    } else {
      hdf5pp::Utils::storeNDArray(group, "sources", hdf_array);
    }
  } else if (append) {
    hdf5pp::Utils::resizeDataset(group, "sources", index < 0 ? index : index + 1);
  }

}

boost::shared_ptr<PSEvt::Proxy<Psana::Partition::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Partition::ConfigV1> >(boost::make_shared<ConfigV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Partition::ConfigV1> >(boost::shared_ptr<Psana::Partition::ConfigV1>());
  }
}

void make_datasets(const Psana::Partition::ConfigV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version)
{
  if (version < 0) version = 0;
  group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    make_datasets_ConfigV1_v0(obj, group, chunkPolicy, deflate, shuffle);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Partition.ConfigV1", version);
  }
}

void store_ConfigV1(const Psana::Partition::ConfigV1* obj, hdf5pp::Group group, long index, int version, bool append)
{
  if (version < 0) version = 0;
  if (not append) group.createAttr<uint32_t>("_schemaVersion").store(version);
  switch (version) {
  case 0:
    store_ConfigV1_v0(obj, group, index, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Partition.ConfigV1", version);
  }
}

void store(const Psana::Partition::ConfigV1& obj, hdf5pp::Group group, int version) 
{
  store_ConfigV1(&obj, group, 0, version, false);
}

void store_at(const Psana::Partition::ConfigV1* obj, hdf5pp::Group group, long index, int version)
{
  store_ConfigV1(obj, group, index, version, true);
}

} // namespace Partition
} // namespace psddl_hdf2psana