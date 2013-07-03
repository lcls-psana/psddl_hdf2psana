#ifndef PSDDL_HDF2PSANA_USDUSB_DDL_H
#define PSDDL_HDF2PSANA_USDUSB_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/usdusb.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
namespace psddl_hdf2psana {
namespace UsdUsb {

namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::UsdUsb::ConfigV1& psanaobj);
  ~dataset_config();

  uint32_t counting_mode[4];
  uint32_t quadrature_mode[4];


};
}


class ConfigV1_v0 : public Psana::UsdUsb::ConfigV1 {
public:
  typedef Psana::UsdUsb::ConfigV1 PsanaType;
  ConfigV1_v0() {}
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV1_v0(const boost::shared_ptr<UsdUsb::ns_ConfigV1_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV1_v0() {}
  virtual ndarray<const uint32_t, 1> counting_mode() const;
  virtual ndarray<const uint32_t, 1> quadrature_mode() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<UsdUsb::ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::UsdUsb::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::UsdUsb::ConfigV1& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::UsdUsb::ConfigV1& obj, hdf5pp::Group group, int version = -1);


namespace ns_DataV1_v1 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::UsdUsb::DataV1& psanaobj);
  ~dataset_data();

  uint8_t digital_in;
  uint32_t timestamp;
  uint8_t status[4];
  uint16_t analog_in[4];
  int32_t encoder_count[4];


};
}


class DataV1_v1 : public Psana::UsdUsb::DataV1 {
public:
  typedef Psana::UsdUsb::DataV1 PsanaType;
  DataV1_v1() {}
  DataV1_v1(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  DataV1_v1(const boost::shared_ptr<UsdUsb::ns_DataV1_v1::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~DataV1_v1() {}
  virtual uint8_t digital_in() const;
  virtual uint32_t timestamp() const;
  virtual ndarray<const uint8_t, 1> status() const;
  virtual ndarray<const uint16_t, 1> analog_in() const;
  virtual ndarray<const int32_t, 1> encoder_count() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<UsdUsb::ns_DataV1_v1::dataset_data> m_ds_data;
  void read_ds_data() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::UsdUsb::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::UsdUsb::DataV1& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::UsdUsb::DataV1& obj, hdf5pp::Group group, int version = -1);

} // namespace UsdUsb
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_USDUSB_DDL_H
