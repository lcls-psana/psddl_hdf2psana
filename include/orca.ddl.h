#ifndef PSDDL_HDF2PSANA_ORCA_DDL_H
#define PSDDL_HDF2PSANA_ORCA_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/orca.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
namespace psddl_hdf2psana {
namespace Orca {

namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::Orca::ConfigV1& psanaobj);
  ~dataset_config();

  uint8_t mode;
  uint8_t cooling;
  uint8_t defect_pixel_correction_enabled;
  uint32_t rows;


};
}


class ConfigV1_v0 : public Psana::Orca::ConfigV1 {
public:
  typedef Psana::Orca::ConfigV1 PsanaType;
  ConfigV1_v0() {}
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV1_v0(const boost::shared_ptr<Orca::ns_ConfigV1_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV1_v0() {}
  virtual Psana::Orca::ConfigV1::ReadoutMode mode() const;
  virtual Psana::Orca::ConfigV1::Cooling cooling() const;
  virtual uint8_t defect_pixel_correction_enabled() const;
  virtual uint32_t rows() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Orca::ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Orca::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Orca::ConfigV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Orca::ConfigV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Orca::ConfigV1* obj, hdf5pp::Group group, long index = -1, int version = -1);

} // namespace Orca
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_ORCA_DDL_H
