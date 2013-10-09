#ifndef PSDDL_HDF2PSANA_LUSI_DDL_H
#define PSDDL_HDF2PSANA_LUSI_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/lusi.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
namespace psddl_hdf2psana {
namespace Lusi {

namespace ns_DiodeFexConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::Lusi::DiodeFexConfigV1& psanaobj);
  ~dataset_config();

  float base[3];
  float scale[3];

  operator Psana::Lusi::DiodeFexConfigV1() const { return Psana::Lusi::DiodeFexConfigV1(base, scale); }

};
}
class Proxy_DiodeFexConfigV1_v0 : public PSEvt::Proxy<Psana::Lusi::DiodeFexConfigV1> {
public:
  typedef Psana::Lusi::DiodeFexConfigV1 PsanaType;

  Proxy_DiodeFexConfigV1_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_DiodeFexConfigV1_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Lusi::DiodeFexConfigV1> > make_DiodeFexConfigV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Lusi::DiodeFexConfigV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Lusi::DiodeFexConfigV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Lusi::DiodeFexConfigV1* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_DiodeFexConfigV2_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::Lusi::DiodeFexConfigV2& psanaobj);
  ~dataset_config();

  float base[16];
  float scale[16];

  operator Psana::Lusi::DiodeFexConfigV2() const { return Psana::Lusi::DiodeFexConfigV2(base, scale); }

};
}
class Proxy_DiodeFexConfigV2_v0 : public PSEvt::Proxy<Psana::Lusi::DiodeFexConfigV2> {
public:
  typedef Psana::Lusi::DiodeFexConfigV2 PsanaType;

  Proxy_DiodeFexConfigV2_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_DiodeFexConfigV2_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Lusi::DiodeFexConfigV2> > make_DiodeFexConfigV2(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Lusi::DiodeFexConfigV2& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Lusi::DiodeFexConfigV2& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Lusi::DiodeFexConfigV2* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_DiodeFexV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Lusi::DiodeFexV1& psanaobj);
  ~dataset_data();

  float value;

  operator Psana::Lusi::DiodeFexV1() const { return Psana::Lusi::DiodeFexV1(value); }

};
}
class Proxy_DiodeFexV1_v0 : public PSEvt::Proxy<Psana::Lusi::DiodeFexV1> {
public:
  typedef Psana::Lusi::DiodeFexV1 PsanaType;

  Proxy_DiodeFexV1_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_DiodeFexV1_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Lusi::DiodeFexV1> > make_DiodeFexV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Lusi::DiodeFexV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Lusi::DiodeFexV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Lusi::DiodeFexV1* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_IpmFexConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::Lusi::IpmFexConfigV1& psanaobj);
  ~dataset_config();

  Lusi::ns_DiodeFexConfigV1_v0::dataset_config diode[4];
  float xscale;
  float yscale;


};
}


class IpmFexConfigV1_v0 : public Psana::Lusi::IpmFexConfigV1 {
public:
  typedef Psana::Lusi::IpmFexConfigV1 PsanaType;
  IpmFexConfigV1_v0() {}
  IpmFexConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  IpmFexConfigV1_v0(const boost::shared_ptr<Lusi::ns_IpmFexConfigV1_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~IpmFexConfigV1_v0() {}
  virtual ndarray<const Psana::Lusi::DiodeFexConfigV1, 1> diode() const;
  virtual float xscale() const;
  virtual float yscale() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Lusi::ns_IpmFexConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable ndarray<const Psana::Lusi::DiodeFexConfigV1, 1> m_ds_storage_config_diode;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Lusi::IpmFexConfigV1> > make_IpmFexConfigV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Lusi::IpmFexConfigV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Lusi::IpmFexConfigV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Lusi::IpmFexConfigV1* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_IpmFexConfigV2_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::Lusi::IpmFexConfigV2& psanaobj);
  ~dataset_config();

  Lusi::ns_DiodeFexConfigV2_v0::dataset_config diode[4];
  float xscale;
  float yscale;


};
}


class IpmFexConfigV2_v0 : public Psana::Lusi::IpmFexConfigV2 {
public:
  typedef Psana::Lusi::IpmFexConfigV2 PsanaType;
  IpmFexConfigV2_v0() {}
  IpmFexConfigV2_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  IpmFexConfigV2_v0(const boost::shared_ptr<Lusi::ns_IpmFexConfigV2_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~IpmFexConfigV2_v0() {}
  virtual ndarray<const Psana::Lusi::DiodeFexConfigV2, 1> diode() const;
  virtual float xscale() const;
  virtual float yscale() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Lusi::ns_IpmFexConfigV2_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable ndarray<const Psana::Lusi::DiodeFexConfigV2, 1> m_ds_storage_config_diode;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Lusi::IpmFexConfigV2> > make_IpmFexConfigV2(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Lusi::IpmFexConfigV2& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Lusi::IpmFexConfigV2& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Lusi::IpmFexConfigV2* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_IpmFexV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Lusi::IpmFexV1& psanaobj);
  ~dataset_data();

  float channel[4];
  float sum;
  float xpos;
  float ypos;

  operator Psana::Lusi::IpmFexV1() const { return Psana::Lusi::IpmFexV1(channel, sum, xpos, ypos); }

};
}
class Proxy_IpmFexV1_v0 : public PSEvt::Proxy<Psana::Lusi::IpmFexV1> {
public:
  typedef Psana::Lusi::IpmFexV1 PsanaType;

  Proxy_IpmFexV1_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_IpmFexV1_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Lusi::IpmFexV1> > make_IpmFexV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Lusi::IpmFexV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Lusi::IpmFexV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Lusi::IpmFexV1* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_PimImageConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::Lusi::PimImageConfigV1& psanaobj);
  ~dataset_config();

  float xscale;
  float yscale;

  operator Psana::Lusi::PimImageConfigV1() const { return Psana::Lusi::PimImageConfigV1(xscale, yscale); }

};
}
class Proxy_PimImageConfigV1_v0 : public PSEvt::Proxy<Psana::Lusi::PimImageConfigV1> {
public:
  typedef Psana::Lusi::PimImageConfigV1 PsanaType;

  Proxy_PimImageConfigV1_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_PimImageConfigV1_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Lusi::PimImageConfigV1> > make_PimImageConfigV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Lusi::PimImageConfigV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Lusi::PimImageConfigV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Lusi::PimImageConfigV1* obj, hdf5pp::Group group, long index = -1, int version = -1);

} // namespace Lusi
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_LUSI_DDL_H
