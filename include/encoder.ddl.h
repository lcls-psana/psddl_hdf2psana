#ifndef PSDDL_HDF2PSANA_ENCODER_DDL_H
#define PSDDL_HDF2PSANA_ENCODER_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/encoder.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
namespace psddl_hdf2psana {
namespace Encoder {

namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::Encoder::ConfigV1& psanaobj);
  ~dataset_config();

  uint32_t chan_num;
  uint32_t count_mode;
  uint32_t quadrature_mode;
  uint32_t input_num;
  uint32_t input_rising;
  uint32_t ticks_per_sec;


};
}


class ConfigV1_v0 : public Psana::Encoder::ConfigV1 {
public:
  typedef Psana::Encoder::ConfigV1 PsanaType;
  ConfigV1_v0() {}
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV1_v0(const boost::shared_ptr<Encoder::ns_ConfigV1_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV1_v0() {}
  virtual uint32_t chan_num() const;
  virtual Psana::Encoder::ConfigV1::count_mode_type count_mode() const;
  virtual Psana::Encoder::ConfigV1::quad_mode quadrature_mode() const;
  virtual uint32_t input_num() const;
  virtual uint32_t input_rising() const;
  virtual uint32_t ticks_per_sec() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Encoder::ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Encoder::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Encoder::ConfigV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Encoder::ConfigV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset.
void store_at(const Psana::Encoder::ConfigV1& obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_ConfigV2_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::Encoder::ConfigV2& psanaobj);
  ~dataset_config();

  uint32_t chan_mask;
  uint32_t count_mode;
  uint32_t quadrature_mode;
  uint32_t input_num;
  uint32_t input_rising;
  uint32_t ticks_per_sec;


};
}


class ConfigV2_v0 : public Psana::Encoder::ConfigV2 {
public:
  typedef Psana::Encoder::ConfigV2 PsanaType;
  ConfigV2_v0() {}
  ConfigV2_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV2_v0(const boost::shared_ptr<Encoder::ns_ConfigV2_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV2_v0() {}
  virtual uint32_t chan_mask() const;
  virtual Psana::Encoder::ConfigV2::count_mode_type count_mode() const;
  virtual Psana::Encoder::ConfigV2::quad_mode quadrature_mode() const;
  virtual uint32_t input_num() const;
  virtual uint32_t input_rising() const;
  virtual uint32_t ticks_per_sec() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Encoder::ns_ConfigV2_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Encoder::ConfigV2> > make_ConfigV2(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Encoder::ConfigV2& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Encoder::ConfigV2& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset.
void store_at(const Psana::Encoder::ConfigV2& obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_DataV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Encoder::DataV1& psanaobj);
  ~dataset_data();

  uint32_t _33mhz_timestamp;
  uint32_t encoder_count;


};
}


class DataV1_v0 : public Psana::Encoder::DataV1 {
public:
  typedef Psana::Encoder::DataV1 PsanaType;
  DataV1_v0() {}
  DataV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  DataV1_v0(const boost::shared_ptr<Encoder::ns_DataV1_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~DataV1_v0() {}
  virtual uint32_t timestamp() const;
  virtual uint32_t encoder_count() const;
  /** Lower 24 bits of encoder_count as signed integer value. */
  int32_t value() const;

private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Encoder::ns_DataV1_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Encoder::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Encoder::DataV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Encoder::DataV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset.
void store_at(const Psana::Encoder::DataV1& obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_DataV2_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Encoder::DataV2& psanaobj);
  ~dataset_data();

  uint32_t _33mhz_timestamp;
  uint32_t encoder_count[3];


};
}


class DataV2_v0 : public Psana::Encoder::DataV2 {
public:
  typedef Psana::Encoder::DataV2 PsanaType;
  DataV2_v0() {}
  DataV2_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  DataV2_v0(const boost::shared_ptr<Encoder::ns_DataV2_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~DataV2_v0() {}
  virtual uint32_t timestamp() const;
  virtual ndarray<const uint32_t, 1> encoder_count() const;
  /** Lower 24 bits of encoder_count as signed integer value. */
  int32_t value(uint32_t i) const;

private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Encoder::ns_DataV2_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Encoder::DataV2> > make_DataV2(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Encoder::DataV2& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Encoder::DataV2& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset.
void store_at(const Psana::Encoder::DataV2& obj, hdf5pp::Group group, long index = -1, int version = -1);

} // namespace Encoder
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_ENCODER_DDL_H
