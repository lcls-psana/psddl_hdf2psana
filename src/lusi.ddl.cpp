
// *** Do not edit this file, it is auto-generated ***

#include "psddl_hdf2psana/lusi.ddl.h"
#include "hdf5pp/ArrayType.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/EnumType.h"
#include "hdf5pp/VlenType.h"
#include "hdf5pp/Utils.h"
#include "PSEvt/DataProxy.h"
#include "psddl_hdf2psana/Exceptions.h"
namespace psddl_hdf2psana {
namespace Lusi {

hdf5pp::Type ns_DiodeFexConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_DiodeFexConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  hsize_t _array_type_base_shape[] = { 3 };
  hdf5pp::ArrayType _array_type_base = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<float>::stored_type(), 1, _array_type_base_shape);
  type.insert("base", offsetof(DsType, base), _array_type_base);
  hsize_t _array_type_scale_shape[] = { 3 };
  hdf5pp::ArrayType _array_type_scale = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<float>::stored_type(), 1, _array_type_scale_shape);
  type.insert("scale", offsetof(DsType, scale), _array_type_scale);
  return type;
}

hdf5pp::Type ns_DiodeFexConfigV1_v0::dataset_config::stored_type()
{
  static hdf5pp::Type type = ns_DiodeFexConfigV1_v0_dataset_config_stored_type();
  return type;
}

hdf5pp::Type ns_DiodeFexConfigV1_v0_dataset_config_native_type()
{
  typedef ns_DiodeFexConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  hsize_t _array_type_base_shape[] = { 3 };
  hdf5pp::ArrayType _array_type_base = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<float>::native_type(), 1, _array_type_base_shape);
  type.insert("base", offsetof(DsType, base), _array_type_base);
  hsize_t _array_type_scale_shape[] = { 3 };
  hdf5pp::ArrayType _array_type_scale = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<float>::native_type(), 1, _array_type_scale_shape);
  type.insert("scale", offsetof(DsType, scale), _array_type_scale);
  return type;
}

hdf5pp::Type ns_DiodeFexConfigV1_v0::dataset_config::native_type()
{
  static hdf5pp::Type type = ns_DiodeFexConfigV1_v0_dataset_config_native_type();
  return type;
}

ns_DiodeFexConfigV1_v0::dataset_config::dataset_config()
{
}

ns_DiodeFexConfigV1_v0::dataset_config::dataset_config(const Psana::Lusi::DiodeFexConfigV1& psanaobj)
{
  {
    const __typeof__(psanaobj.base())& arr = psanaobj.base();
    std::copy(arr.begin(), arr.begin()+3, base);
  }
  {
    const __typeof__(psanaobj.scale())& arr = psanaobj.scale();
    std::copy(arr.begin(), arr.begin()+3, scale);
  }
}

ns_DiodeFexConfigV1_v0::dataset_config::~dataset_config()
{
}
boost::shared_ptr<Psana::Lusi::DiodeFexConfigV1>
Proxy_DiodeFexConfigV1_v0::getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key)
{
  if (not m_data) {
    boost::shared_ptr<Lusi::ns_DiodeFexConfigV1_v0::dataset_config> ds_config = hdf5pp::Utils::readGroup<Lusi::ns_DiodeFexConfigV1_v0::dataset_config>(m_group, "config", m_idx);
    m_data.reset(new PsanaType(ds_config->base, ds_config->scale));
  }
  return m_data;
}

boost::shared_ptr<PSEvt::Proxy<Psana::Lusi::DiodeFexConfigV1> > make_DiodeFexConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<Proxy_DiodeFexConfigV1_v0>(group, idx);
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Lusi::DiodeFexConfigV1> >(boost::shared_ptr<Psana::Lusi::DiodeFexConfigV1>());
  }
}

void store_DiodeFexConfigV1(const Psana::Lusi::DiodeFexConfigV1& obj, hdf5pp::Group group, int version, bool append)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    //store_DiodeFexConfigV1_v0(object, group, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Lusi.DiodeFexConfigV1", version);
  }
}

void store(const Psana::Lusi::DiodeFexConfigV1& obj, hdf5pp::Group group, int version) 
{
  store_DiodeFexConfigV1(obj, group, version, false);
}

void append(const Psana::Lusi::DiodeFexConfigV1& obj, hdf5pp::Group group, int version)
{
  store_DiodeFexConfigV1(obj, group, version, true);
}


hdf5pp::Type ns_DiodeFexConfigV2_v0_dataset_config_stored_type()
{
  typedef ns_DiodeFexConfigV2_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  hsize_t _array_type_base_shape[] = { 16 };
  hdf5pp::ArrayType _array_type_base = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<float>::stored_type(), 1, _array_type_base_shape);
  type.insert("base", offsetof(DsType, base), _array_type_base);
  hsize_t _array_type_scale_shape[] = { 16 };
  hdf5pp::ArrayType _array_type_scale = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<float>::stored_type(), 1, _array_type_scale_shape);
  type.insert("scale", offsetof(DsType, scale), _array_type_scale);
  return type;
}

hdf5pp::Type ns_DiodeFexConfigV2_v0::dataset_config::stored_type()
{
  static hdf5pp::Type type = ns_DiodeFexConfigV2_v0_dataset_config_stored_type();
  return type;
}

hdf5pp::Type ns_DiodeFexConfigV2_v0_dataset_config_native_type()
{
  typedef ns_DiodeFexConfigV2_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  hsize_t _array_type_base_shape[] = { 16 };
  hdf5pp::ArrayType _array_type_base = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<float>::native_type(), 1, _array_type_base_shape);
  type.insert("base", offsetof(DsType, base), _array_type_base);
  hsize_t _array_type_scale_shape[] = { 16 };
  hdf5pp::ArrayType _array_type_scale = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<float>::native_type(), 1, _array_type_scale_shape);
  type.insert("scale", offsetof(DsType, scale), _array_type_scale);
  return type;
}

hdf5pp::Type ns_DiodeFexConfigV2_v0::dataset_config::native_type()
{
  static hdf5pp::Type type = ns_DiodeFexConfigV2_v0_dataset_config_native_type();
  return type;
}

ns_DiodeFexConfigV2_v0::dataset_config::dataset_config()
{
}

ns_DiodeFexConfigV2_v0::dataset_config::dataset_config(const Psana::Lusi::DiodeFexConfigV2& psanaobj)
{
  {
    const __typeof__(psanaobj.base())& arr = psanaobj.base();
    std::copy(arr.begin(), arr.begin()+16, base);
  }
  {
    const __typeof__(psanaobj.scale())& arr = psanaobj.scale();
    std::copy(arr.begin(), arr.begin()+16, scale);
  }
}

ns_DiodeFexConfigV2_v0::dataset_config::~dataset_config()
{
}
boost::shared_ptr<Psana::Lusi::DiodeFexConfigV2>
Proxy_DiodeFexConfigV2_v0::getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key)
{
  if (not m_data) {
    boost::shared_ptr<Lusi::ns_DiodeFexConfigV2_v0::dataset_config> ds_config = hdf5pp::Utils::readGroup<Lusi::ns_DiodeFexConfigV2_v0::dataset_config>(m_group, "config", m_idx);
    m_data.reset(new PsanaType(ds_config->base, ds_config->scale));
  }
  return m_data;
}

boost::shared_ptr<PSEvt::Proxy<Psana::Lusi::DiodeFexConfigV2> > make_DiodeFexConfigV2(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<Proxy_DiodeFexConfigV2_v0>(group, idx);
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Lusi::DiodeFexConfigV2> >(boost::shared_ptr<Psana::Lusi::DiodeFexConfigV2>());
  }
}

void store_DiodeFexConfigV2(const Psana::Lusi::DiodeFexConfigV2& obj, hdf5pp::Group group, int version, bool append)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    //store_DiodeFexConfigV2_v0(object, group, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Lusi.DiodeFexConfigV2", version);
  }
}

void store(const Psana::Lusi::DiodeFexConfigV2& obj, hdf5pp::Group group, int version) 
{
  store_DiodeFexConfigV2(obj, group, version, false);
}

void append(const Psana::Lusi::DiodeFexConfigV2& obj, hdf5pp::Group group, int version)
{
  store_DiodeFexConfigV2(obj, group, version, true);
}


hdf5pp::Type ns_DiodeFexV1_v0_dataset_data_stored_type()
{
  typedef ns_DiodeFexV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("value", offsetof(DsType, value), hdf5pp::TypeTraits<float>::stored_type());
  return type;
}

hdf5pp::Type ns_DiodeFexV1_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_DiodeFexV1_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_DiodeFexV1_v0_dataset_data_native_type()
{
  typedef ns_DiodeFexV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("value", offsetof(DsType, value), hdf5pp::TypeTraits<float>::native_type());
  return type;
}

hdf5pp::Type ns_DiodeFexV1_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_DiodeFexV1_v0_dataset_data_native_type();
  return type;
}

ns_DiodeFexV1_v0::dataset_data::dataset_data()
{
}

ns_DiodeFexV1_v0::dataset_data::dataset_data(const Psana::Lusi::DiodeFexV1& psanaobj)
  : value(psanaobj.value())
{
}

ns_DiodeFexV1_v0::dataset_data::~dataset_data()
{
}
boost::shared_ptr<Psana::Lusi::DiodeFexV1>
Proxy_DiodeFexV1_v0::getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key)
{
  if (not m_data) {
    boost::shared_ptr<Lusi::ns_DiodeFexV1_v0::dataset_data> ds_data = hdf5pp::Utils::readGroup<Lusi::ns_DiodeFexV1_v0::dataset_data>(m_group, "data", m_idx);
    m_data.reset(new PsanaType(ds_data->value));
  }
  return m_data;
}

boost::shared_ptr<PSEvt::Proxy<Psana::Lusi::DiodeFexV1> > make_DiodeFexV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<Proxy_DiodeFexV1_v0>(group, idx);
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Lusi::DiodeFexV1> >(boost::shared_ptr<Psana::Lusi::DiodeFexV1>());
  }
}

void store_DiodeFexV1(const Psana::Lusi::DiodeFexV1& obj, hdf5pp::Group group, int version, bool append)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    //store_DiodeFexV1_v0(object, group, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Lusi.DiodeFexV1", version);
  }
}

void store(const Psana::Lusi::DiodeFexV1& obj, hdf5pp::Group group, int version) 
{
  store_DiodeFexV1(obj, group, version, false);
}

void append(const Psana::Lusi::DiodeFexV1& obj, hdf5pp::Group group, int version)
{
  store_DiodeFexV1(obj, group, version, true);
}


hdf5pp::Type ns_IpmFexConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_IpmFexConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  hsize_t _array_type_diode_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_diode = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<Lusi::ns_DiodeFexConfigV1_v0::dataset_config>::stored_type(), 1, _array_type_diode_shape);
  type.insert("diode", offsetof(DsType, diode), _array_type_diode);
  type.insert("xscale", offsetof(DsType, xscale), hdf5pp::TypeTraits<float>::stored_type());
  type.insert("yscale", offsetof(DsType, yscale), hdf5pp::TypeTraits<float>::stored_type());
  return type;
}

hdf5pp::Type ns_IpmFexConfigV1_v0::dataset_config::stored_type()
{
  static hdf5pp::Type type = ns_IpmFexConfigV1_v0_dataset_config_stored_type();
  return type;
}

hdf5pp::Type ns_IpmFexConfigV1_v0_dataset_config_native_type()
{
  typedef ns_IpmFexConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  hsize_t _array_type_diode_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_diode = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<Lusi::ns_DiodeFexConfigV1_v0::dataset_config>::native_type(), 1, _array_type_diode_shape);
  type.insert("diode", offsetof(DsType, diode), _array_type_diode);
  type.insert("xscale", offsetof(DsType, xscale), hdf5pp::TypeTraits<float>::native_type());
  type.insert("yscale", offsetof(DsType, yscale), hdf5pp::TypeTraits<float>::native_type());
  return type;
}

hdf5pp::Type ns_IpmFexConfigV1_v0::dataset_config::native_type()
{
  static hdf5pp::Type type = ns_IpmFexConfigV1_v0_dataset_config_native_type();
  return type;
}

ns_IpmFexConfigV1_v0::dataset_config::dataset_config()
{
}

ns_IpmFexConfigV1_v0::dataset_config::dataset_config(const Psana::Lusi::IpmFexConfigV1& psanaobj)
  : xscale(psanaobj.xscale())
  , yscale(psanaobj.yscale())
{
  {
    const __typeof__(psanaobj.diode())& arr = psanaobj.diode();
    std::copy(arr.begin(), arr.begin()+4, diode);
  }
}

ns_IpmFexConfigV1_v0::dataset_config::~dataset_config()
{
}
ndarray<const Psana::Lusi::DiodeFexConfigV1, 1> IpmFexConfigV1_v0::diode() const {
  if (not m_ds_config) read_ds_config();
  if (m_ds_storage_config_diode.empty()) {
    unsigned shape[] = {NCHANNELS};
    ndarray<Psana::Lusi::DiodeFexConfigV1, 1> tmparr(shape);
    unsigned size = tmparr.size();
    ndarray<Psana::Lusi::DiodeFexConfigV1, 1>::iterator it = tmparr.begin();
    for (unsigned i = 0; i != size; ++ i, ++ it) {
      *it = Psana::Lusi::DiodeFexConfigV1(m_ds_config->diode[i]);
    }
    m_ds_storage_config_diode = tmparr;
  }
  return m_ds_storage_config_diode;
}
float IpmFexConfigV1_v0::xscale() const {
  if (not m_ds_config) read_ds_config();
  return float(m_ds_config->xscale);
}
float IpmFexConfigV1_v0::yscale() const {
  if (not m_ds_config) read_ds_config();
  return float(m_ds_config->yscale);
}
void IpmFexConfigV1_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<Lusi::ns_IpmFexConfigV1_v0::dataset_config>(m_group, "config", m_idx);
}
boost::shared_ptr<PSEvt::Proxy<Psana::Lusi::IpmFexConfigV1> > make_IpmFexConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Lusi::IpmFexConfigV1> >(boost::make_shared<IpmFexConfigV1_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Lusi::IpmFexConfigV1> >(boost::shared_ptr<Psana::Lusi::IpmFexConfigV1>());
  }
}

void store_IpmFexConfigV1(const Psana::Lusi::IpmFexConfigV1& obj, hdf5pp::Group group, int version, bool append)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    //store_IpmFexConfigV1_v0(object, group, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Lusi.IpmFexConfigV1", version);
  }
}

void store(const Psana::Lusi::IpmFexConfigV1& obj, hdf5pp::Group group, int version) 
{
  store_IpmFexConfigV1(obj, group, version, false);
}

void append(const Psana::Lusi::IpmFexConfigV1& obj, hdf5pp::Group group, int version)
{
  store_IpmFexConfigV1(obj, group, version, true);
}


hdf5pp::Type ns_IpmFexConfigV2_v0_dataset_config_stored_type()
{
  typedef ns_IpmFexConfigV2_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  hsize_t _array_type_diode_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_diode = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<Lusi::ns_DiodeFexConfigV2_v0::dataset_config>::stored_type(), 1, _array_type_diode_shape);
  type.insert("diode", offsetof(DsType, diode), _array_type_diode);
  type.insert("xscale", offsetof(DsType, xscale), hdf5pp::TypeTraits<float>::stored_type());
  type.insert("yscale", offsetof(DsType, yscale), hdf5pp::TypeTraits<float>::stored_type());
  return type;
}

hdf5pp::Type ns_IpmFexConfigV2_v0::dataset_config::stored_type()
{
  static hdf5pp::Type type = ns_IpmFexConfigV2_v0_dataset_config_stored_type();
  return type;
}

hdf5pp::Type ns_IpmFexConfigV2_v0_dataset_config_native_type()
{
  typedef ns_IpmFexConfigV2_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  hsize_t _array_type_diode_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_diode = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<Lusi::ns_DiodeFexConfigV2_v0::dataset_config>::native_type(), 1, _array_type_diode_shape);
  type.insert("diode", offsetof(DsType, diode), _array_type_diode);
  type.insert("xscale", offsetof(DsType, xscale), hdf5pp::TypeTraits<float>::native_type());
  type.insert("yscale", offsetof(DsType, yscale), hdf5pp::TypeTraits<float>::native_type());
  return type;
}

hdf5pp::Type ns_IpmFexConfigV2_v0::dataset_config::native_type()
{
  static hdf5pp::Type type = ns_IpmFexConfigV2_v0_dataset_config_native_type();
  return type;
}

ns_IpmFexConfigV2_v0::dataset_config::dataset_config()
{
}

ns_IpmFexConfigV2_v0::dataset_config::dataset_config(const Psana::Lusi::IpmFexConfigV2& psanaobj)
  : xscale(psanaobj.xscale())
  , yscale(psanaobj.yscale())
{
  {
    const __typeof__(psanaobj.diode())& arr = psanaobj.diode();
    std::copy(arr.begin(), arr.begin()+4, diode);
  }
}

ns_IpmFexConfigV2_v0::dataset_config::~dataset_config()
{
}
ndarray<const Psana::Lusi::DiodeFexConfigV2, 1> IpmFexConfigV2_v0::diode() const {
  if (not m_ds_config) read_ds_config();
  if (m_ds_storage_config_diode.empty()) {
    unsigned shape[] = {NCHANNELS};
    ndarray<Psana::Lusi::DiodeFexConfigV2, 1> tmparr(shape);
    unsigned size = tmparr.size();
    ndarray<Psana::Lusi::DiodeFexConfigV2, 1>::iterator it = tmparr.begin();
    for (unsigned i = 0; i != size; ++ i, ++ it) {
      *it = Psana::Lusi::DiodeFexConfigV2(m_ds_config->diode[i]);
    }
    m_ds_storage_config_diode = tmparr;
  }
  return m_ds_storage_config_diode;
}
float IpmFexConfigV2_v0::xscale() const {
  if (not m_ds_config) read_ds_config();
  return float(m_ds_config->xscale);
}
float IpmFexConfigV2_v0::yscale() const {
  if (not m_ds_config) read_ds_config();
  return float(m_ds_config->yscale);
}
void IpmFexConfigV2_v0::read_ds_config() const {
  m_ds_config = hdf5pp::Utils::readGroup<Lusi::ns_IpmFexConfigV2_v0::dataset_config>(m_group, "config", m_idx);
}
boost::shared_ptr<PSEvt::Proxy<Psana::Lusi::IpmFexConfigV2> > make_IpmFexConfigV2(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<PSEvt::DataProxy<Psana::Lusi::IpmFexConfigV2> >(boost::make_shared<IpmFexConfigV2_v0>(group, idx));
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Lusi::IpmFexConfigV2> >(boost::shared_ptr<Psana::Lusi::IpmFexConfigV2>());
  }
}

void store_IpmFexConfigV2(const Psana::Lusi::IpmFexConfigV2& obj, hdf5pp::Group group, int version, bool append)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    //store_IpmFexConfigV2_v0(object, group, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Lusi.IpmFexConfigV2", version);
  }
}

void store(const Psana::Lusi::IpmFexConfigV2& obj, hdf5pp::Group group, int version) 
{
  store_IpmFexConfigV2(obj, group, version, false);
}

void append(const Psana::Lusi::IpmFexConfigV2& obj, hdf5pp::Group group, int version)
{
  store_IpmFexConfigV2(obj, group, version, true);
}


hdf5pp::Type ns_IpmFexV1_v0_dataset_data_stored_type()
{
  typedef ns_IpmFexV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  hsize_t _array_type_channel_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_channel = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<float>::stored_type(), 1, _array_type_channel_shape);
  type.insert("channel", offsetof(DsType, channel), _array_type_channel);
  type.insert("sum", offsetof(DsType, sum), hdf5pp::TypeTraits<float>::stored_type());
  type.insert("xpos", offsetof(DsType, xpos), hdf5pp::TypeTraits<float>::stored_type());
  type.insert("ypos", offsetof(DsType, ypos), hdf5pp::TypeTraits<float>::stored_type());
  return type;
}

hdf5pp::Type ns_IpmFexV1_v0::dataset_data::stored_type()
{
  static hdf5pp::Type type = ns_IpmFexV1_v0_dataset_data_stored_type();
  return type;
}

hdf5pp::Type ns_IpmFexV1_v0_dataset_data_native_type()
{
  typedef ns_IpmFexV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  hsize_t _array_type_channel_shape[] = { 4 };
  hdf5pp::ArrayType _array_type_channel = hdf5pp::ArrayType::arrayType(hdf5pp::TypeTraits<float>::native_type(), 1, _array_type_channel_shape);
  type.insert("channel", offsetof(DsType, channel), _array_type_channel);
  type.insert("sum", offsetof(DsType, sum), hdf5pp::TypeTraits<float>::native_type());
  type.insert("xpos", offsetof(DsType, xpos), hdf5pp::TypeTraits<float>::native_type());
  type.insert("ypos", offsetof(DsType, ypos), hdf5pp::TypeTraits<float>::native_type());
  return type;
}

hdf5pp::Type ns_IpmFexV1_v0::dataset_data::native_type()
{
  static hdf5pp::Type type = ns_IpmFexV1_v0_dataset_data_native_type();
  return type;
}

ns_IpmFexV1_v0::dataset_data::dataset_data()
{
}

ns_IpmFexV1_v0::dataset_data::dataset_data(const Psana::Lusi::IpmFexV1& psanaobj)
  : sum(psanaobj.sum())
  , xpos(psanaobj.xpos())
  , ypos(psanaobj.ypos())
{
  {
    const __typeof__(psanaobj.channel())& arr = psanaobj.channel();
    std::copy(arr.begin(), arr.begin()+4, channel);
  }
}

ns_IpmFexV1_v0::dataset_data::~dataset_data()
{
}
boost::shared_ptr<Psana::Lusi::IpmFexV1>
Proxy_IpmFexV1_v0::getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key)
{
  if (not m_data) {
    boost::shared_ptr<Lusi::ns_IpmFexV1_v0::dataset_data> ds_data = hdf5pp::Utils::readGroup<Lusi::ns_IpmFexV1_v0::dataset_data>(m_group, "data", m_idx);
    m_data.reset(new PsanaType(ds_data->channel, ds_data->sum, ds_data->xpos, ds_data->ypos));
  }
  return m_data;
}

boost::shared_ptr<PSEvt::Proxy<Psana::Lusi::IpmFexV1> > make_IpmFexV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<Proxy_IpmFexV1_v0>(group, idx);
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Lusi::IpmFexV1> >(boost::shared_ptr<Psana::Lusi::IpmFexV1>());
  }
}

void store_IpmFexV1(const Psana::Lusi::IpmFexV1& obj, hdf5pp::Group group, int version, bool append)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    //store_IpmFexV1_v0(object, group, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Lusi.IpmFexV1", version);
  }
}

void store(const Psana::Lusi::IpmFexV1& obj, hdf5pp::Group group, int version) 
{
  store_IpmFexV1(obj, group, version, false);
}

void append(const Psana::Lusi::IpmFexV1& obj, hdf5pp::Group group, int version)
{
  store_IpmFexV1(obj, group, version, true);
}


hdf5pp::Type ns_PimImageConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_PimImageConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("xscale", offsetof(DsType, xscale), hdf5pp::TypeTraits<float>::stored_type());
  type.insert("yscale", offsetof(DsType, yscale), hdf5pp::TypeTraits<float>::stored_type());
  return type;
}

hdf5pp::Type ns_PimImageConfigV1_v0::dataset_config::stored_type()
{
  static hdf5pp::Type type = ns_PimImageConfigV1_v0_dataset_config_stored_type();
  return type;
}

hdf5pp::Type ns_PimImageConfigV1_v0_dataset_config_native_type()
{
  typedef ns_PimImageConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("xscale", offsetof(DsType, xscale), hdf5pp::TypeTraits<float>::native_type());
  type.insert("yscale", offsetof(DsType, yscale), hdf5pp::TypeTraits<float>::native_type());
  return type;
}

hdf5pp::Type ns_PimImageConfigV1_v0::dataset_config::native_type()
{
  static hdf5pp::Type type = ns_PimImageConfigV1_v0_dataset_config_native_type();
  return type;
}

ns_PimImageConfigV1_v0::dataset_config::dataset_config()
{
}

ns_PimImageConfigV1_v0::dataset_config::dataset_config(const Psana::Lusi::PimImageConfigV1& psanaobj)
  : xscale(psanaobj.xscale())
  , yscale(psanaobj.yscale())
{
}

ns_PimImageConfigV1_v0::dataset_config::~dataset_config()
{
}
boost::shared_ptr<Psana::Lusi::PimImageConfigV1>
Proxy_PimImageConfigV1_v0::getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key)
{
  if (not m_data) {
    boost::shared_ptr<Lusi::ns_PimImageConfigV1_v0::dataset_config> ds_config = hdf5pp::Utils::readGroup<Lusi::ns_PimImageConfigV1_v0::dataset_config>(m_group, "config", m_idx);
    m_data.reset(new PsanaType(ds_config->xscale, ds_config->yscale));
  }
  return m_data;
}

boost::shared_ptr<PSEvt::Proxy<Psana::Lusi::PimImageConfigV1> > make_PimImageConfigV1(int version, hdf5pp::Group group, hsize_t idx) {
  switch (version) {
  case 0:
    return boost::make_shared<Proxy_PimImageConfigV1_v0>(group, idx);
  default:
    return boost::make_shared<PSEvt::DataProxy<Psana::Lusi::PimImageConfigV1> >(boost::shared_ptr<Psana::Lusi::PimImageConfigV1>());
  }
}

void store_PimImageConfigV1(const Psana::Lusi::PimImageConfigV1& obj, hdf5pp::Group group, int version, bool append)
{
  if (version < 0) version = 0;
  switch (version) {
  case 0:
    //store_PimImageConfigV1_v0(object, group, append);
    break;
  default:
    throw ExceptionSchemaVersion(ERR_LOC, "Lusi.PimImageConfigV1", version);
  }
}

void store(const Psana::Lusi::PimImageConfigV1& obj, hdf5pp::Group group, int version) 
{
  store_PimImageConfigV1(obj, group, version, false);
}

void append(const Psana::Lusi::PimImageConfigV1& obj, hdf5pp::Group group, int version)
{
  store_PimImageConfigV1(obj, group, version, true);
}

} // namespace Lusi
} // namespace psddl_hdf2psana
