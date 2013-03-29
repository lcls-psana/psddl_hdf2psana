#ifndef PSDDL_HDF2PSANA_PULNIX_DDL_H
#define PSDDL_HDF2PSANA_PULNIX_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/pulnix.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
namespace psddl_hdf2psana {
namespace Pulnix {

namespace ns_TM6740ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  ~dataset_config();

  uint16_t gain_a; 
  uint16_t gain_b; 
  uint16_t vref; 
  uint16_t shutter_width; 
  uint8_t gain_balance; 
  uint8_t output_resolution; 
  uint8_t horizontal_binning; 
  uint8_t vertical_binning; 
  uint8_t lookuptable_mode; 
  uint8_t output_resolution_bits; 

};
}


class TM6740ConfigV1_v0 : public Psana::Pulnix::TM6740ConfigV1 {
public:
  typedef Psana::Pulnix::TM6740ConfigV1 PsanaType;
  TM6740ConfigV1_v0() {}
  TM6740ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  TM6740ConfigV1_v0(const boost::shared_ptr<Pulnix::ns_TM6740ConfigV1_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~TM6740ConfigV1_v0() {}
  virtual uint16_t gain_a() const;
  virtual uint16_t gain_b() const;
  virtual uint16_t vref() const;
  virtual uint16_t shutter_width() const;
  virtual uint8_t gain_balance() const;
  virtual Psana::Pulnix::TM6740ConfigV1::Depth output_resolution() const;
  virtual Psana::Pulnix::TM6740ConfigV1::Binning horizontal_binning() const;
  virtual Psana::Pulnix::TM6740ConfigV1::Binning vertical_binning() const;
  virtual Psana::Pulnix::TM6740ConfigV1::LookupTable lookuptable_mode() const;
  virtual uint8_t output_resolution_bits() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Pulnix::ns_TM6740ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Pulnix::TM6740ConfigV1> > make_TM6740ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_TM6740ConfigV2_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  ~dataset_config();

  uint16_t gain_a; 
  uint16_t gain_b; 
  uint16_t vref_a; 
  uint16_t vref_b; 
  uint8_t gain_balance; 
  int32_t output_resolution; 
  int32_t horizontal_binning; 
  int32_t vertical_binning; 
  int32_t lookuptable_mode; 
  uint8_t output_resolution_bits; 

};
}


class TM6740ConfigV2_v0 : public Psana::Pulnix::TM6740ConfigV2 {
public:
  typedef Psana::Pulnix::TM6740ConfigV2 PsanaType;
  TM6740ConfigV2_v0() {}
  TM6740ConfigV2_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  TM6740ConfigV2_v0(const boost::shared_ptr<Pulnix::ns_TM6740ConfigV2_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~TM6740ConfigV2_v0() {}
  virtual uint16_t gain_a() const;
  virtual uint16_t gain_b() const;
  virtual uint16_t vref_a() const;
  virtual uint16_t vref_b() const;
  virtual uint8_t gain_balance() const;
  virtual Psana::Pulnix::TM6740ConfigV2::Depth output_resolution() const;
  virtual Psana::Pulnix::TM6740ConfigV2::Binning horizontal_binning() const;
  virtual Psana::Pulnix::TM6740ConfigV2::Binning vertical_binning() const;
  virtual Psana::Pulnix::TM6740ConfigV2::LookupTable lookuptable_mode() const;
  virtual uint8_t output_resolution_bits() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Pulnix::ns_TM6740ConfigV2_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Pulnix::TM6740ConfigV2> > make_TM6740ConfigV2(int version, hdf5pp::Group group, hsize_t idx);
} // namespace Pulnix
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_PULNIX_DDL_H
