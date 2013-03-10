
// *** Do not edit this file, it is auto-generated ***

#include "psddl_hdf2psana/lusi.ddl.h"
#include "hdf5pp/CompoundType.h"
#include "hdf5pp/EnumType.h"
#include "hdf5pp/Utils.h"
#include "PSEvt/DataProxy.h"
namespace psddl_hdf2psana {
namespace Lusi {

hdf5pp::Type ns_DiodeFexConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_DiodeFexConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("base", offsetof(DsType, base), hdf5pp::TypeTraits<float>::stored_type());
  type.insert("scale", offsetof(DsType, scale), hdf5pp::TypeTraits<float>::stored_type());
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
  type.insert("base", offsetof(DsType, base), hdf5pp::TypeTraits<float>::native_type());
  type.insert("scale", offsetof(DsType, scale), hdf5pp::TypeTraits<float>::native_type());
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

hdf5pp::Type ns_DiodeFexConfigV2_v0_dataset_config_stored_type()
{
  typedef ns_DiodeFexConfigV2_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("base", offsetof(DsType, base), hdf5pp::TypeTraits<float>::stored_type());
  type.insert("scale", offsetof(DsType, scale), hdf5pp::TypeTraits<float>::stored_type());
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
  type.insert("base", offsetof(DsType, base), hdf5pp::TypeTraits<float>::native_type());
  type.insert("scale", offsetof(DsType, scale), hdf5pp::TypeTraits<float>::native_type());
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

hdf5pp::Type ns_IpmFexConfigV1_v0_dataset_config_stored_type()
{
  typedef ns_IpmFexConfigV1_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("diode", offsetof(DsType, diode), hdf5pp::TypeTraits<Lusi::ns_DiodeFexConfigV1_v0::dataset_config>::stored_type());
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
  type.insert("diode", offsetof(DsType, diode), hdf5pp::TypeTraits<Lusi::ns_DiodeFexConfigV1_v0::dataset_config>::native_type());
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
ns_IpmFexConfigV1_v0::dataset_config::~dataset_config()
{
}
ndarray<const Psana::Lusi::DiodeFexConfigV1, 1> IpmFexConfigV1_v0::diode() const {
  if (not m_ds_config.get()) read_ds_config();
  if (m_ds_storage_config_diode.empty()) {
    unsigned shape[] = {NCHANNELS};
    ndarray<Psana::Lusi::DiodeFexConfigV1, 1> tmparr(shape);
    std::copy(m_ds_config->diode, m_ds_config->diode+4, tmparr.begin());
    m_ds_storage_config_diode = tmparr;
  }
  return m_ds_storage_config_diode;
}
float IpmFexConfigV1_v0::xscale() const {
  if (not m_ds_config.get()) read_ds_config();
  return float(m_ds_config->xscale);
}
float IpmFexConfigV1_v0::yscale() const {
  if (not m_ds_config.get()) read_ds_config();
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

hdf5pp::Type ns_IpmFexConfigV2_v0_dataset_config_stored_type()
{
  typedef ns_IpmFexConfigV2_v0::dataset_config DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("diode", offsetof(DsType, diode), hdf5pp::TypeTraits<Lusi::ns_DiodeFexConfigV2_v0::dataset_config>::stored_type());
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
  type.insert("diode", offsetof(DsType, diode), hdf5pp::TypeTraits<Lusi::ns_DiodeFexConfigV2_v0::dataset_config>::native_type());
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
ns_IpmFexConfigV2_v0::dataset_config::~dataset_config()
{
}
ndarray<const Psana::Lusi::DiodeFexConfigV2, 1> IpmFexConfigV2_v0::diode() const {
  if (not m_ds_config.get()) read_ds_config();
  if (m_ds_storage_config_diode.empty()) {
    unsigned shape[] = {NCHANNELS};
    ndarray<Psana::Lusi::DiodeFexConfigV2, 1> tmparr(shape);
    std::copy(m_ds_config->diode, m_ds_config->diode+4, tmparr.begin());
    m_ds_storage_config_diode = tmparr;
  }
  return m_ds_storage_config_diode;
}
float IpmFexConfigV2_v0::xscale() const {
  if (not m_ds_config.get()) read_ds_config();
  return float(m_ds_config->xscale);
}
float IpmFexConfigV2_v0::yscale() const {
  if (not m_ds_config.get()) read_ds_config();
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

hdf5pp::Type ns_IpmFexV1_v0_dataset_data_stored_type()
{
  typedef ns_IpmFexV1_v0::dataset_data DsType;
  hdf5pp::CompoundType type = hdf5pp::CompoundType::compoundType<DsType>();
  type.insert("channel", offsetof(DsType, channel), hdf5pp::TypeTraits<float>::stored_type());
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
  type.insert("channel", offsetof(DsType, channel), hdf5pp::TypeTraits<float>::native_type());
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
} // namespace Lusi
} // namespace psddl_hdf2psana
