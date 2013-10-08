#ifndef PSDDL_HDF2PSANA_PNCCD_DDL_H
#define PSDDL_HDF2PSANA_PNCCD_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/pnccd.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
namespace psddl_hdf2psana {
namespace PNCCD {

namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::PNCCD::ConfigV1& psanaobj);
  ~dataset_config();

  uint32_t numLinks;
  uint32_t payloadSizePerLink;


};
}


class ConfigV1_v0 : public Psana::PNCCD::ConfigV1 {
public:
  typedef Psana::PNCCD::ConfigV1 PsanaType;
  ConfigV1_v0() {}
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV1_v0(const boost::shared_ptr<PNCCD::ns_ConfigV1_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV1_v0() {}
  virtual uint32_t numLinks() const;
  virtual uint32_t payloadSizePerLink() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<PNCCD::ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::PNCCD::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::PNCCD::ConfigV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::PNCCD::ConfigV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset.
void store_at(const Psana::PNCCD::ConfigV1& obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_ConfigV2_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::PNCCD::ConfigV2& psanaobj);
  ~dataset_config();

  uint32_t numLinks;
  uint32_t payloadSizePerLink;
  uint32_t numChannels;
  uint32_t numRows;
  uint32_t numSubmoduleChannels;
  uint32_t numSubmoduleRows;
  uint32_t numSubmodules;
  uint32_t camexMagic;
  char* info;
  char* timingFName;


};
}


class ConfigV2_v0 : public Psana::PNCCD::ConfigV2 {
public:
  typedef Psana::PNCCD::ConfigV2 PsanaType;
  ConfigV2_v0() {}
  ConfigV2_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV2_v0(const boost::shared_ptr<PNCCD::ns_ConfigV2_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV2_v0() {}
  virtual uint32_t numLinks() const;
  virtual uint32_t payloadSizePerLink() const;
  virtual uint32_t numChannels() const;
  virtual uint32_t numRows() const;
  virtual uint32_t numSubmoduleChannels() const;
  virtual uint32_t numSubmoduleRows() const;
  virtual uint32_t numSubmodules() const;
  virtual uint32_t camexMagic() const;
  virtual const char* info() const;
  virtual const char* timingFName() const;
  /** Method which returns the shape (dimensions) of the data returned by info() method. */
  std::vector<int> info_shape() const;

  /** Method which returns the shape (dimensions) of the data returned by timingFName() method. */
  std::vector<int> timingFName_shape() const;

private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<PNCCD::ns_ConfigV2_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::PNCCD::ConfigV2> > make_ConfigV2(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::PNCCD::ConfigV2& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::PNCCD::ConfigV2& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset.
void store_at(const Psana::PNCCD::ConfigV2& obj, hdf5pp::Group group, long index = -1, int version = -1);

boost::shared_ptr<PSEvt::Proxy<Psana::PNCCD::FullFrameV1> > make_FullFrameV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::PNCCD::FullFrameV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::PNCCD::FullFrameV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset.
void store_at(const Psana::PNCCD::FullFrameV1& obj, hdf5pp::Group group, long index = -1, int version = -1);

boost::shared_ptr<PSEvt::Proxy<Psana::PNCCD::FramesV1> > make_FramesV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::PNCCD::ConfigV1>& cfg);
boost::shared_ptr<PSEvt::Proxy<Psana::PNCCD::FramesV1> > make_FramesV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::PNCCD::ConfigV2>& cfg);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::PNCCD::FramesV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::PNCCD::FramesV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset.
void store_at(const Psana::PNCCD::FramesV1& obj, hdf5pp::Group group, long index = -1, int version = -1);

} // namespace PNCCD
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_PNCCD_DDL_H
