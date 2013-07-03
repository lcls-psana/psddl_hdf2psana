
// *** Do not edit this file, it is auto-generated ***

#include "psddl_hdf2psana/fccd.ddl.h"
#include "hdf5pp/ArrayType.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/EnumType.h"
#include "hdf5pp/VlenType.h"
#include "hdf5pp/Utils.h"
#include "PSEvt/DataProxy.h"
#include "psddl_hdf2psana/Exceptions.h"
#include "psddl_hdf2psana/fccd.h"
namespace psddl_hdf2psana {
namespace FCCD {

hdf5pp::Type ns_FccdConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_FccdConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("outputMode", offsetof(DsType, outputMode), hdf5pp::TypeTraits<uint16_t>::stored_type());
  type.insert("width", offsetof(DsType, width), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("height", offsetof(DsType, height), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("trimmedWidth", offsetof(DsType, trimmedWidth), hdf5pp::TypeTraits<uint32_t>::stored_type());
  type.insert("trimmedHeight", offsetof(DsType, trimmedHeight), hdf5pp::TypeTraits<uint32_t>::stored_type());
  return type;
}

hdf5pp::Type ns_FccdConfigV1_v0::dataset_config::stored_type()
{
  static hdf5pp::Type type = ns_FccdConfigV1_v0_dataset_config_stored_type();
  return type;
}

hdf5pp::Type ns_FccdConfigV1_v0_dataset_config_native_type()
{
  typedef ns_FccdConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("outputMode", offsetof(DsType, outputMode), hdf5pp::TypeTraits<uint16_t>::native_type());
  type.insert("width", offsetof(DsType, width), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("height", offsetof(DsType, height), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("trimmedWidth", offsetof(DsType, trimmedWidth), hdf5pp::TypeTraits<uint32_t>::native_type());
  type.insert("trimmedHeight", offsetof(DsType, trimmedHeight), hdf5pp::TypeTraits<uint32_t>::native_type());
  return type;
}

hdf5pp::Type ns_FccdConfigV1_v0::dataset_config::native_type()
{
  static hdf5pp::Type type = ns_FccdConfigV1_v0_dataset_config_native_type();
  return type;
}

ns_FccdConfigV1_v0::dataset_config::dataset_config()
{
}

ns_FccdConfigV1_v0::dataset_config::dataset_config(const Psana::FCCD::FccdConfigV1& psanaobj)
  : outputMode(psanaobj.outputMode())
  , width(psanaobj.width())
  , height(psanaobj.height())
  , trimmedWidth(psanaobj.trimmedWidth())
  , trimmedHeight(psanaobj.trimmedHeight())
{
}

ns_FccdConfigV1_v0::dataset_config::~dataset_config()
{
}
uint16_t FccdConfigV1_v0::outputMode() const {
  if (not m_ds_config) read_ds_config();
  return uint16_t(m_ds_config->outputMode);
}
uint32_t FccdConfigV1_v0::width() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->width);
}
uint32_t FccdConfigV1_v0::height() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->height);
}
uint32_t FccdConfigV1_v0::trimmedWidth() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->trimmedWidth);
}
uint32_t FccdConfigV1_v0::trimmedHeight() const {
  if (not m_ds_config) read_ds_config();
  return uint32_t(m_ds_config->trimmedHeight);
}
void FccdConfigV1_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<FCCD::ns_FccdConfigV1_v0::dataset_config>(m_group, "config", m_idx);
}
boost::shared_ptr<PSEvt::Proxy<Psana::FCCD::FccdConfigV1> > make_FccdConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::FCCD::FccdConfigV1> >(boost::make_shared<FccdConfigV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::FCCD::FccdConfigV1> >(boost::shared_ptr<Psana::FCCD::FccdConfigV1>());
  }
}

void store_FccdConfigV1(const Psana::FCCD::FccdConfigV1& obj, hdf5pp::Group group, int version, bool append)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    //store_FccdConfigV1_v0(object, group, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "FCCD.FccdConfigV1", version);
  }
}

void store(const Psana::FCCD::FccdConfigV1& obj, hdf5pp::Group group, int version) 
{
  store_FccdConfigV1(obj, group, version, false);
}

void append(const Psana::FCCD::FccdConfigV1& obj, hdf5pp::Group group, int version)
{
  store_FccdConfigV1(obj, group, version, true);
}

boost::shared_ptr<PSEvt::Proxy<Psana::FCCD::FccdConfigV2> > make_FccdConfigV2(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::FCCD::FccdConfigV2> >(boost::make_shared<FccdConfigV2_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::FCCD::FccdConfigV2> >(boost::shared_ptr<Psana::FCCD::FccdConfigV2>());
  }
}

void store_FccdConfigV2(const Psana::FCCD::FccdConfigV2& obj, hdf5pp::Group group, int version, bool append)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    //store_FccdConfigV2_v0(object, group, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "FCCD.FccdConfigV2", version);
  }
}

void store(const Psana::FCCD::FccdConfigV2& obj, hdf5pp::Group group, int version) 
{
  store_FccdConfigV2(obj, group, version, false);
}

void append(const Psana::FCCD::FccdConfigV2& obj, hdf5pp::Group group, int version)
{
  store_FccdConfigV2(obj, group, version, true);
}

} // namespace FCCD
} // namespace psddl_hdf2psana
