#ifndef PSDDL_HDF2PSANA_BLD_DDL_H
#define PSDDL_HDF2PSANA_BLD_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/bld.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
#include "psddl_hdf2psana/ChunkPolicy.h"
#include "psddl_hdf2psana/acqiris.ddl.h"
#include "psddl_hdf2psana/camera.ddl.h"
#include "psddl_hdf2psana/ipimb.ddl.h"
#include "psddl_hdf2psana/lusi.ddl.h"
#include "psddl_hdf2psana/pulnix.ddl.h"
#include "psddl_hdf2psana/lusi.ddl.h"
#include "psddl_hdf2psana/ipimb.ddl.h"
namespace psddl_hdf2psana {
namespace Bld {

namespace ns_BldDataFEEGasDetEnergy_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Bld::BldDataFEEGasDetEnergy& psanaobj);
  ~dataset_data();

  double f_11_ENRC;
  double f_12_ENRC;
  double f_21_ENRC;
  double f_22_ENRC;

  operator Psana::Bld::BldDataFEEGasDetEnergy() const { return Psana::Bld::BldDataFEEGasDetEnergy(f_11_ENRC, f_12_ENRC, f_21_ENRC, f_22_ENRC); }

};
}
class Proxy_BldDataFEEGasDetEnergy_v0 : public PSEvt::Proxy<Psana::Bld::BldDataFEEGasDetEnergy> {
public:
  typedef Psana::Bld::BldDataFEEGasDetEnergy PsanaType;

  Proxy_BldDataFEEGasDetEnergy_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_BldDataFEEGasDetEnergy_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Bld::BldDataFEEGasDetEnergy> > make_BldDataFEEGasDetEnergy(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Bld::BldDataFEEGasDetEnergy& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Bld::BldDataFEEGasDetEnergy& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Bld::BldDataFEEGasDetEnergy* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_BldDataFEEGasDetEnergyV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Bld::BldDataFEEGasDetEnergyV1& psanaobj);
  ~dataset_data();

  double f_11_ENRC;
  double f_12_ENRC;
  double f_21_ENRC;
  double f_22_ENRC;
  double f_63_ENRC;
  double f_64_ENRC;

  operator Psana::Bld::BldDataFEEGasDetEnergyV1() const { return Psana::Bld::BldDataFEEGasDetEnergyV1(f_11_ENRC, f_12_ENRC, f_21_ENRC, f_22_ENRC, f_63_ENRC, f_64_ENRC); }

};
}
class Proxy_BldDataFEEGasDetEnergyV1_v0 : public PSEvt::Proxy<Psana::Bld::BldDataFEEGasDetEnergyV1> {
public:
  typedef Psana::Bld::BldDataFEEGasDetEnergyV1 PsanaType;

  Proxy_BldDataFEEGasDetEnergyV1_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_BldDataFEEGasDetEnergyV1_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Bld::BldDataFEEGasDetEnergyV1> > make_BldDataFEEGasDetEnergyV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Bld::BldDataFEEGasDetEnergyV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Bld::BldDataFEEGasDetEnergyV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Bld::BldDataFEEGasDetEnergyV1* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_BldDataEBeamV0_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Bld::BldDataEBeamV0& psanaobj);
  ~dataset_data();

  uint32_t uDamageMask;
  double fEbeamCharge;
  double fEbeamL3Energy;
  double fEbeamLTUPosX;
  double fEbeamLTUPosY;
  double fEbeamLTUAngX;
  double fEbeamLTUAngY;

  operator Psana::Bld::BldDataEBeamV0() const { return Psana::Bld::BldDataEBeamV0(uDamageMask, fEbeamCharge, fEbeamL3Energy, fEbeamLTUPosX, fEbeamLTUPosY, fEbeamLTUAngX, fEbeamLTUAngY); }

};
}
class Proxy_BldDataEBeamV0_v0 : public PSEvt::Proxy<Psana::Bld::BldDataEBeamV0> {
public:
  typedef Psana::Bld::BldDataEBeamV0 PsanaType;

  Proxy_BldDataEBeamV0_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_BldDataEBeamV0_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Bld::BldDataEBeamV0> > make_BldDataEBeamV0(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Bld::BldDataEBeamV0& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Bld::BldDataEBeamV0& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Bld::BldDataEBeamV0* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_BldDataEBeamV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Bld::BldDataEBeamV1& psanaobj);
  ~dataset_data();

  uint32_t uDamageMask;
  double fEbeamCharge;
  double fEbeamL3Energy;
  double fEbeamLTUPosX;
  double fEbeamLTUPosY;
  double fEbeamLTUAngX;
  double fEbeamLTUAngY;
  double fEbeamPkCurrBC2;

  operator Psana::Bld::BldDataEBeamV1() const { return Psana::Bld::BldDataEBeamV1(uDamageMask, fEbeamCharge, fEbeamL3Energy, fEbeamLTUPosX, fEbeamLTUPosY, fEbeamLTUAngX, fEbeamLTUAngY, fEbeamPkCurrBC2); }

};
}
class Proxy_BldDataEBeamV1_v0 : public PSEvt::Proxy<Psana::Bld::BldDataEBeamV1> {
public:
  typedef Psana::Bld::BldDataEBeamV1 PsanaType;

  Proxy_BldDataEBeamV1_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_BldDataEBeamV1_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Bld::BldDataEBeamV1> > make_BldDataEBeamV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Bld::BldDataEBeamV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Bld::BldDataEBeamV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Bld::BldDataEBeamV1* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_BldDataEBeamV2_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Bld::BldDataEBeamV2& psanaobj);
  ~dataset_data();

  uint32_t uDamageMask;
  double fEbeamCharge;
  double fEbeamL3Energy;
  double fEbeamLTUPosX;
  double fEbeamLTUPosY;
  double fEbeamLTUAngX;
  double fEbeamLTUAngY;
  double fEbeamPkCurrBC2;
  double fEbeamEnergyBC2;

  operator Psana::Bld::BldDataEBeamV2() const { return Psana::Bld::BldDataEBeamV2(uDamageMask, fEbeamCharge, fEbeamL3Energy, fEbeamLTUPosX, fEbeamLTUPosY, fEbeamLTUAngX, fEbeamLTUAngY, fEbeamPkCurrBC2, fEbeamEnergyBC2); }

};
}
class Proxy_BldDataEBeamV2_v0 : public PSEvt::Proxy<Psana::Bld::BldDataEBeamV2> {
public:
  typedef Psana::Bld::BldDataEBeamV2 PsanaType;

  Proxy_BldDataEBeamV2_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_BldDataEBeamV2_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Bld::BldDataEBeamV2> > make_BldDataEBeamV2(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Bld::BldDataEBeamV2& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Bld::BldDataEBeamV2& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Bld::BldDataEBeamV2* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_BldDataEBeamV3_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Bld::BldDataEBeamV3& psanaobj);
  ~dataset_data();

  uint32_t uDamageMask;
  double fEbeamCharge;
  double fEbeamL3Energy;
  double fEbeamLTUPosX;
  double fEbeamLTUPosY;
  double fEbeamLTUAngX;
  double fEbeamLTUAngY;
  double fEbeamPkCurrBC2;
  double fEbeamEnergyBC2;
  double fEbeamPkCurrBC1;
  double fEbeamEnergyBC1;

  operator Psana::Bld::BldDataEBeamV3() const { return Psana::Bld::BldDataEBeamV3(uDamageMask, fEbeamCharge, fEbeamL3Energy, fEbeamLTUPosX, fEbeamLTUPosY, fEbeamLTUAngX, fEbeamLTUAngY, fEbeamPkCurrBC2, fEbeamEnergyBC2, fEbeamPkCurrBC1, fEbeamEnergyBC1); }

};
}
class Proxy_BldDataEBeamV3_v0 : public PSEvt::Proxy<Psana::Bld::BldDataEBeamV3> {
public:
  typedef Psana::Bld::BldDataEBeamV3 PsanaType;

  Proxy_BldDataEBeamV3_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_BldDataEBeamV3_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Bld::BldDataEBeamV3> > make_BldDataEBeamV3(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Bld::BldDataEBeamV3& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Bld::BldDataEBeamV3& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Bld::BldDataEBeamV3* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_BldDataEBeamV4_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Bld::BldDataEBeamV4& psanaobj);
  ~dataset_data();

  uint32_t uDamageMask;
  double fEbeamCharge;
  double fEbeamL3Energy;
  double fEbeamLTUPosX;
  double fEbeamLTUPosY;
  double fEbeamLTUAngX;
  double fEbeamLTUAngY;
  double fEbeamPkCurrBC2;
  double fEbeamEnergyBC2;
  double fEbeamPkCurrBC1;
  double fEbeamEnergyBC1;
  double fEbeamUndPosX;
  double fEbeamUndPosY;
  double fEbeamUndAngX;
  double fEbeamUndAngY;

  operator Psana::Bld::BldDataEBeamV4() const { return Psana::Bld::BldDataEBeamV4(uDamageMask, fEbeamCharge, fEbeamL3Energy, fEbeamLTUPosX, fEbeamLTUPosY, fEbeamLTUAngX, fEbeamLTUAngY, fEbeamPkCurrBC2, fEbeamEnergyBC2, fEbeamPkCurrBC1, fEbeamEnergyBC1, fEbeamUndPosX, fEbeamUndPosY, fEbeamUndAngX, fEbeamUndAngY); }

};
}
class Proxy_BldDataEBeamV4_v0 : public PSEvt::Proxy<Psana::Bld::BldDataEBeamV4> {
public:
  typedef Psana::Bld::BldDataEBeamV4 PsanaType;

  Proxy_BldDataEBeamV4_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_BldDataEBeamV4_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Bld::BldDataEBeamV4> > make_BldDataEBeamV4(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Bld::BldDataEBeamV4& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Bld::BldDataEBeamV4& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Bld::BldDataEBeamV4* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_BldDataEBeamV5_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Bld::BldDataEBeamV5& psanaobj);
  ~dataset_data();

  uint32_t uDamageMask;
  double fEbeamCharge;
  double fEbeamL3Energy;
  double fEbeamLTUPosX;
  double fEbeamLTUPosY;
  double fEbeamLTUAngX;
  double fEbeamLTUAngY;
  double fEbeamPkCurrBC2;
  double fEbeamEnergyBC2;
  double fEbeamPkCurrBC1;
  double fEbeamEnergyBC1;
  double fEbeamUndPosX;
  double fEbeamUndPosY;
  double fEbeamUndAngX;
  double fEbeamUndAngY;
  double fEbeamXTCAVAmpl;
  double fEbeamXTCAVPhase;
  double fEbeamDumpCharge;

  operator Psana::Bld::BldDataEBeamV5() const { return Psana::Bld::BldDataEBeamV5(uDamageMask, fEbeamCharge, fEbeamL3Energy, fEbeamLTUPosX, fEbeamLTUPosY, fEbeamLTUAngX, fEbeamLTUAngY, fEbeamPkCurrBC2, fEbeamEnergyBC2, fEbeamPkCurrBC1, fEbeamEnergyBC1, fEbeamUndPosX, fEbeamUndPosY, fEbeamUndAngX, fEbeamUndAngY, fEbeamXTCAVAmpl, fEbeamXTCAVPhase, fEbeamDumpCharge); }

};
}
class Proxy_BldDataEBeamV5_v0 : public PSEvt::Proxy<Psana::Bld::BldDataEBeamV5> {
public:
  typedef Psana::Bld::BldDataEBeamV5 PsanaType;

  Proxy_BldDataEBeamV5_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_BldDataEBeamV5_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Bld::BldDataEBeamV5> > make_BldDataEBeamV5(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Bld::BldDataEBeamV5& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Bld::BldDataEBeamV5& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Bld::BldDataEBeamV5* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_BldDataPhaseCavity_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Bld::BldDataPhaseCavity& psanaobj);
  ~dataset_data();

  double fFitTime1;
  double fFitTime2;
  double fCharge1;
  double fCharge2;

  operator Psana::Bld::BldDataPhaseCavity() const { return Psana::Bld::BldDataPhaseCavity(fFitTime1, fFitTime2, fCharge1, fCharge2); }

};
}
class Proxy_BldDataPhaseCavity_v0 : public PSEvt::Proxy<Psana::Bld::BldDataPhaseCavity> {
public:
  typedef Psana::Bld::BldDataPhaseCavity PsanaType;

  Proxy_BldDataPhaseCavity_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_BldDataPhaseCavity_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Bld::BldDataPhaseCavity> > make_BldDataPhaseCavity(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Bld::BldDataPhaseCavity& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Bld::BldDataPhaseCavity& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Bld::BldDataPhaseCavity* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_BldDataIpimbV0_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Bld::BldDataIpimbV0& psanaobj);
  ~dataset_data();

  Ipimb::ns_DataV1_v0::dataset_data ipimbData;
  Ipimb::ns_ConfigV1_v0::dataset_config ipimbConfig;
  Lusi::ns_IpmFexV1_v0::dataset_data ipmFexData;


};
}


class BldDataIpimbV0_v0 : public Psana::Bld::BldDataIpimbV0 {
public:
  typedef Psana::Bld::BldDataIpimbV0 PsanaType;
  BldDataIpimbV0_v0() {}
  BldDataIpimbV0_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  BldDataIpimbV0_v0(const boost::shared_ptr<Bld::ns_BldDataIpimbV0_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~BldDataIpimbV0_v0() {}
  virtual const Psana::Ipimb::DataV1& ipimbData() const;
  virtual const Psana::Ipimb::ConfigV1& ipimbConfig() const;
  virtual const Psana::Lusi::IpmFexV1& ipmFexData() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Bld::ns_BldDataIpimbV0_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
  mutable boost::shared_ptr<Psana::Ipimb::DataV1> m_ds_storage_data_ipimbData;
  mutable boost::shared_ptr<Psana::Ipimb::ConfigV1> m_ds_storage_data_ipimbConfig;
  mutable Psana::Lusi::IpmFexV1 m_ds_storage_data_ipmFexData;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Bld::BldDataIpimbV0> > make_BldDataIpimbV0(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Bld::BldDataIpimbV0& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Bld::BldDataIpimbV0& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Bld::BldDataIpimbV0* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_BldDataIpimbV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Bld::BldDataIpimbV1& psanaobj);
  ~dataset_data();

  Ipimb::ns_DataV2_v0::dataset_data ipimbData;
  Ipimb::ns_ConfigV2_v0::dataset_config ipimbConfig;
  Lusi::ns_IpmFexV1_v0::dataset_data ipmFexData;


};
}


class BldDataIpimbV1_v0 : public Psana::Bld::BldDataIpimbV1 {
public:
  typedef Psana::Bld::BldDataIpimbV1 PsanaType;
  BldDataIpimbV1_v0() {}
  BldDataIpimbV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  BldDataIpimbV1_v0(const boost::shared_ptr<Bld::ns_BldDataIpimbV1_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~BldDataIpimbV1_v0() {}
  virtual const Psana::Ipimb::DataV2& ipimbData() const;
  virtual const Psana::Ipimb::ConfigV2& ipimbConfig() const;
  virtual const Psana::Lusi::IpmFexV1& ipmFexData() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Bld::ns_BldDataIpimbV1_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
  mutable boost::shared_ptr<Psana::Ipimb::DataV2> m_ds_storage_data_ipimbData;
  mutable boost::shared_ptr<Psana::Ipimb::ConfigV2> m_ds_storage_data_ipimbConfig;
  mutable Psana::Lusi::IpmFexV1 m_ds_storage_data_ipmFexData;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Bld::BldDataIpimbV1> > make_BldDataIpimbV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Bld::BldDataIpimbV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Bld::BldDataIpimbV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Bld::BldDataIpimbV1* obj, hdf5pp::Group group, long index = -1, int version = -1);

boost::shared_ptr<PSEvt::Proxy<Psana::Bld::BldDataPimV1> > make_BldDataPimV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Bld::BldDataPimV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Bld::BldDataPimV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Bld::BldDataPimV1* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_BldDataGMDV0_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Bld::BldDataGMDV0& psanaobj);
  ~dataset_data();

  char strGasType[32];
  double fPressure;
  double fTemperature;
  double fCurrent;
  double fHvMeshElectron;
  double fHvMeshIon;
  double fHvMultIon;
  double fChargeQ;
  double fPhotonEnergy;
  double fMultPulseIntensity;
  double fKeithleyPulseIntensity;
  double fPulseEnergy;
  double fPulseEnergyFEE;
  double fTransmission;
  double fTransmissionFEE;


};
}


class BldDataGMDV0_v0 : public Psana::Bld::BldDataGMDV0 {
public:
  typedef Psana::Bld::BldDataGMDV0 PsanaType;
  BldDataGMDV0_v0() {}
  BldDataGMDV0_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  BldDataGMDV0_v0(const boost::shared_ptr<Bld::ns_BldDataGMDV0_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~BldDataGMDV0_v0() {}
  virtual const char* gasType() const;
  virtual double pressure() const;
  virtual double temperature() const;
  virtual double current() const;
  virtual double hvMeshElectron() const;
  virtual double hvMeshIon() const;
  virtual double hvMultIon() const;
  virtual double chargeQ() const;
  virtual double photonEnergy() const;
  virtual double multPulseIntensity() const;
  virtual double keithleyPulseIntensity() const;
  virtual double pulseEnergy() const;
  virtual double pulseEnergyFEE() const;
  virtual double transmission() const;
  virtual double transmissionFEE() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Bld::ns_BldDataGMDV0_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Bld::BldDataGMDV0> > make_BldDataGMDV0(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Bld::BldDataGMDV0& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Bld::BldDataGMDV0& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Bld::BldDataGMDV0* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_BldDataGMDV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Bld::BldDataGMDV1& psanaobj);
  ~dataset_data();

  double fMilliJoulesPerPulse;
  double fMilliJoulesAverage;
  double fCorrectedSumPerPulse;
  double fBgValuePerSample;
  double fRelativeEnergyPerPulse;


};
}


class BldDataGMDV1_v0 : public Psana::Bld::BldDataGMDV1 {
public:
  typedef Psana::Bld::BldDataGMDV1 PsanaType;
  BldDataGMDV1_v0() {}
  BldDataGMDV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  BldDataGMDV1_v0(const boost::shared_ptr<Bld::ns_BldDataGMDV1_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~BldDataGMDV1_v0() {}
  virtual double milliJoulesPerPulse() const;
  virtual double milliJoulesAverage() const;
  virtual double correctedSumPerPulse() const;
  virtual double bgValuePerSample() const;
  virtual double relativeEnergyPerPulse() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Bld::ns_BldDataGMDV1_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Bld::BldDataGMDV1> > make_BldDataGMDV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Bld::BldDataGMDV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Bld::BldDataGMDV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Bld::BldDataGMDV1* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_BldDataGMDV2_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Bld::BldDataGMDV2& psanaobj);
  ~dataset_data();

  double fMilliJoulesPerPulse;
  double fMilliJoulesAverage;
  double fSumAllPeaksFiltBkgd;
  double fRawAvgBkgd;
  double fRelativeEnergyPerPulse;
  double fSumAllPeaksRawBkgd;


};
}


class BldDataGMDV2_v0 : public Psana::Bld::BldDataGMDV2 {
public:
  typedef Psana::Bld::BldDataGMDV2 PsanaType;
  BldDataGMDV2_v0() {}
  BldDataGMDV2_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  BldDataGMDV2_v0(const boost::shared_ptr<Bld::ns_BldDataGMDV2_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~BldDataGMDV2_v0() {}
  virtual double milliJoulesPerPulse() const;
  virtual double milliJoulesAverage() const;
  virtual double sumAllPeaksFiltBkgd() const;
  virtual double rawAvgBkgd() const;
  virtual double relativeEnergyPerPulse() const;
  virtual double sumAllPeaksRawBkgd() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Bld::ns_BldDataGMDV2_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Bld::BldDataGMDV2> > make_BldDataGMDV2(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Bld::BldDataGMDV2& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Bld::BldDataGMDV2& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Bld::BldDataGMDV2* obj, hdf5pp::Group group, long index = -1, int version = -1);

boost::shared_ptr<PSEvt::Proxy<Psana::Bld::BldDataAcqADCV1> > make_BldDataAcqADCV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::Acqiris::ConfigV1>& cfg);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Bld::BldDataAcqADCV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Bld::BldDataAcqADCV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Bld::BldDataAcqADCV1* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_BldDataSpectrometerV0_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Bld::BldDataSpectrometerV0& psanaobj);
  ~dataset_data();

  uint32_t hproj[1024];
  uint32_t vproj[256];


};
}


class BldDataSpectrometerV0_v0 : public Psana::Bld::BldDataSpectrometerV0 {
public:
  typedef Psana::Bld::BldDataSpectrometerV0 PsanaType;
  BldDataSpectrometerV0_v0() {}
  BldDataSpectrometerV0_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  BldDataSpectrometerV0_v0(const boost::shared_ptr<Bld::ns_BldDataSpectrometerV0_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~BldDataSpectrometerV0_v0() {}
  virtual ndarray<const uint32_t, 1> hproj() const;
  virtual ndarray<const uint32_t, 1> vproj() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Bld::ns_BldDataSpectrometerV0_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Bld::BldDataSpectrometerV0> > make_BldDataSpectrometerV0(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Bld::BldDataSpectrometerV0& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Bld::BldDataSpectrometerV0& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Bld::BldDataSpectrometerV0* obj, hdf5pp::Group group, long index = -1, int version = -1);

} // namespace Bld
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_BLD_DDL_H
