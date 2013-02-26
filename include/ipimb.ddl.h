#ifndef PSDDL_HDF2PSANA_IPIMB_DDL_H
#define PSDDL_HDF2PSANA_IPIMB_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/ipimb.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
namespace psddl_hdf2psana {
namespace Ipimb {

namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  ~dataset_config();

  uint64_t triggerCounter; 
  uint64_t serialID; 
  uint16_t chargeAmpRange; 
  uint16_t calibrationRange; 
  uint32_t resetLength; 
  uint32_t resetDelay; 
  float chargeAmpRefVoltage; 
  float calibrationVoltage; 
  float diodeBias; 
  uint16_t status; 
  uint16_t errors; 
  uint16_t calStrobeLength; 
  uint32_t trigDelay; 

};
}


class ConfigV1_v0 : public Psana::Ipimb::ConfigV1 {
public:
  typedef Psana::Ipimb::ConfigV1 PsanaType;
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~ConfigV1_v0() {}
  virtual uint64_t triggerCounter() const;
  virtual uint64_t serialID() const;
  virtual uint16_t chargeAmpRange() const;
  virtual uint16_t calibrationRange() const;
  virtual uint32_t resetLength() const;
  virtual uint32_t resetDelay() const;
  virtual float chargeAmpRefVoltage() const;
  virtual float calibrationVoltage() const;
  virtual float diodeBias() const;
  virtual uint16_t status() const;
  virtual uint16_t errors() const;
  virtual uint16_t calStrobeLength() const;
  virtual uint32_t trigDelay() const;
  /** Returns CapacitorValue enum for given channel number (0..3). */
  Psana::Ipimb::ConfigV1::CapacitorValue capacitorValue(uint32_t ch) const { return CapacitorValue((this->chargeAmpRange() >> (ch*2)) & 0x3); }
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Ipimb::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_ConfigV2_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  ~dataset_config();

  uint64_t triggerCounter; 
  uint64_t serialID; 
  uint16_t chargeAmpRange; 
  uint16_t calibrationRange; 
  uint32_t resetLength; 
  uint32_t resetDelay; 
  float chargeAmpRefVoltage; 
  float calibrationVoltage; 
  float diodeBias; 
  uint16_t status; 
  uint16_t errors; 
  uint16_t calStrobeLength; 
  uint32_t trigDelay; 
  uint32_t trigPsDelay; 
  uint32_t adcDelay; 

};
}


class ConfigV2_v0 : public Psana::Ipimb::ConfigV2 {
public:
  typedef Psana::Ipimb::ConfigV2 PsanaType;
  ConfigV2_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~ConfigV2_v0() {}
  virtual uint64_t triggerCounter() const;
  virtual uint64_t serialID() const;
  virtual uint16_t chargeAmpRange() const;
  virtual uint16_t calibrationRange() const;
  virtual uint32_t resetLength() const;
  virtual uint32_t resetDelay() const;
  virtual float chargeAmpRefVoltage() const;
  virtual float calibrationVoltage() const;
  virtual float diodeBias() const;
  virtual uint16_t status() const;
  virtual uint16_t errors() const;
  virtual uint16_t calStrobeLength() const;
  virtual uint32_t trigDelay() const;
  virtual uint32_t trigPsDelay() const;
  virtual uint32_t adcDelay() const;
  /** Returns CapacitorValue enum for given channel number (0..3). */
  Psana::Ipimb::ConfigV2::CapacitorValue capacitorValue(uint32_t ch) const { return CapacitorValue((this->chargeAmpRange() >> (ch*4)) & 0xf); }
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<ns_ConfigV2_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Ipimb::ConfigV2> > make_ConfigV2(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_DataV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  uint64_t triggerCounter; 
  uint16_t config0; 
  uint16_t config1; 
  uint16_t config2; 
  uint16_t channel0; 
  uint16_t channel1; 
  uint16_t channel2; 
  uint16_t channel3; 
  uint16_t checksum; 
  float channel0Volts; 
  float channel1Volts; 
  float channel2Volts; 
  float channel3Volts; 

};
}


class DataV1_v0 : public Psana::Ipimb::DataV1 {
public:
  typedef Psana::Ipimb::DataV1 PsanaType;
  DataV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~DataV1_v0() {}
  virtual uint64_t triggerCounter() const;
  virtual uint16_t config0() const;
  virtual uint16_t config1() const;
  virtual uint16_t config2() const;
  virtual uint16_t channel0() const;
  virtual uint16_t channel1() const;
  virtual uint16_t channel2() const;
  virtual uint16_t channel3() const;
  virtual uint16_t checksum() const;
  virtual float channel0Volts() const;
  virtual float channel1Volts() const;
  virtual float channel2Volts() const;
  virtual float channel3Volts() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<ns_DataV1_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Ipimb::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_DataV2_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  uint16_t config0; 
  uint16_t config1; 
  uint16_t config2; 
  uint16_t channel0; 
  uint16_t channel1; 
  uint16_t channel2; 
  uint16_t channel3; 
  uint16_t channel0ps; 
  uint16_t channel1ps; 
  uint16_t channel2ps; 
  uint16_t channel3ps; 
  uint16_t checksum; 
  float channel0Volts; 
  float channel1Volts; 
  float channel2Volts; 
  float channel3Volts; 
  float channel0psVolts; 
  float channel1psVolts; 
  float channel2psVolts; 
  float channel3psVolts; 
  uint64_t triggerCounter; 

};
}


class DataV2_v0 : public Psana::Ipimb::DataV2 {
public:
  typedef Psana::Ipimb::DataV2 PsanaType;
  DataV2_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~DataV2_v0() {}
  virtual uint16_t config0() const;
  virtual uint16_t config1() const;
  virtual uint16_t config2() const;
  virtual uint16_t channel0() const;
  virtual uint16_t channel1() const;
  virtual uint16_t channel2() const;
  virtual uint16_t channel3() const;
  virtual uint16_t channel0ps() const;
  virtual uint16_t channel1ps() const;
  virtual uint16_t channel2ps() const;
  virtual uint16_t channel3ps() const;
  virtual uint16_t checksum() const;
  virtual float channel0Volts() const;
  virtual float channel1Volts() const;
  virtual float channel2Volts() const;
  virtual float channel3Volts() const;
  virtual float channel0psVolts() const;
  virtual float channel1psVolts() const;
  virtual float channel2psVolts() const;
  virtual float channel3psVolts() const;
  virtual uint64_t triggerCounter() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<ns_DataV2_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Ipimb::DataV2> > make_DataV2(int version, hdf5pp::Group group, hsize_t idx);
} // namespace Ipimb
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_IPIMB_DDL_H
