#ifndef PSDDL_HDF2PSANA_EPICS_DDL_H
#define PSDDL_HDF2PSANA_EPICS_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/epics.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
namespace psddl_hdf2psana {
namespace Epics {
  enum {
    iXtcVersion = 1 /**<  */
  };
  enum {
    iMaxPvNameLength = 64 /**< Maximum size of PV name string. */
  };
  enum {
    MAX_STRING_SIZE = 40 /**< Maximum length of strings in EPICS. */
  };
  enum {
    MAX_UNITS_SIZE = 8 /**< Maximum lenght of units strings. */
  };
  enum {
    MAX_ENUM_STRING_SIZE = 26 /**< Maximum length of strings specifying ENUMs. */
  };
  enum {
    MAX_ENUM_STATES = 16 /**< Maximum number of different ENUM constants. */
  };

  /** Enum specifying type of DBR structures. */
  enum DbrTypes {
    DBR_STRING = 0,
    DBR_SHORT = 1,
    DBR_FLOAT = 2,
    DBR_ENUM = 3,
    DBR_CHAR = 4,
    DBR_LONG = 5,
    DBR_DOUBLE = 6,
    DBR_STS_STRING = 7,
    DBR_STS_SHORT = 8,
    DBR_STS_FLOAT = 9,
    DBR_STS_ENUM = 10,
    DBR_STS_CHAR = 11,
    DBR_STS_LONG = 12,
    DBR_STS_DOUBLE = 13,
    DBR_TIME_STRING = 14,
    DBR_TIME_INT = 15,
    DBR_TIME_SHORT = 15,
    DBR_TIME_FLOAT = 16,
    DBR_TIME_ENUM = 17,
    DBR_TIME_CHAR = 18,
    DBR_TIME_LONG = 19,
    DBR_TIME_DOUBLE = 20,
    DBR_GR_STRING = 21,
    DBR_GR_SHORT = 22,
    DBR_GR_FLOAT = 23,
    DBR_GR_ENUM = 24,
    DBR_GR_CHAR = 25,
    DBR_GR_LONG = 26,
    DBR_GR_DOUBLE = 27,
    DBR_CTRL_STRING = 28,
    DBR_CTRL_SHORT = 29,
    DBR_CTRL_FLOAT = 30,
    DBR_CTRL_ENUM = 31,
    DBR_CTRL_CHAR = 32,
    DBR_CTRL_LONG = 33,
    DBR_CTRL_DOUBLE = 34,
  };

namespace ns_epicsTimeStamp_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Epics::epicsTimeStamp& psanaobj);
  ~dataset_data();

  uint32_t secPastEpoch;
  uint32_t nsec;

  operator Psana::Epics::epicsTimeStamp() const { return Psana::Epics::epicsTimeStamp(secPastEpoch, nsec); }

};
}

namespace ns_EpicsPvHeader_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Epics::EpicsPvHeader& psanaobj);
  ~dataset_data();

  int16_t pvId;
  int16_t dbrType;
  int16_t numElements;


};
}


class EpicsPvHeader_v0 : public Psana::Epics::EpicsPvHeader {
public:
  typedef Psana::Epics::EpicsPvHeader PsanaType;
  EpicsPvHeader_v0() {}
  EpicsPvHeader_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  EpicsPvHeader_v0(const boost::shared_ptr<Epics::ns_EpicsPvHeader_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~EpicsPvHeader_v0() {}
  virtual int16_t pvId() const;
  virtual int16_t dbrType() const;
  virtual int16_t numElements() const;
  /** Returns 1 if PV is one of CTRL types, 0 otherwise. */
  uint8_t isCtrl() const;

  /** Returns 1 if PV is one of TIME types, 0 otherwise. */
  uint8_t isTime() const;

  /** Returns status value for the PV. */
  uint16_t status() const;

  /** Returns severity value for the PV. */
  uint16_t severity() const;

private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Epics::ns_EpicsPvHeader_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
};


namespace ns_PvConfigV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Epics::PvConfigV1& psanaobj);
  ~dataset_data();

  int16_t pvId;
  char description[64];
  float interval;

  operator Psana::Epics::PvConfigV1() const { return Psana::Epics::PvConfigV1(pvId, description, interval); }

};
}

namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::Epics::ConfigV1& psanaobj);
  ~dataset_config();

  int32_t numPv;


};
}


class ConfigV1_v0 : public Psana::Epics::ConfigV1 {
public:
  typedef Psana::Epics::ConfigV1 PsanaType;
  ConfigV1_v0() {}
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~ConfigV1_v0() {}
  virtual int32_t numPv() const;
  virtual ndarray<const Psana::Epics::PvConfigV1, 1> pvControls() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Epics::ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable ndarray<const Psana::Epics::PvConfigV1, 1> m_ds_pvConfig;
  void read_ds_pvConfig() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Epics::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::Epics::ConfigV1& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::Epics::ConfigV1& obj, hdf5pp::Group group, int version = -1);

} // namespace Epics
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_EPICS_DDL_H
