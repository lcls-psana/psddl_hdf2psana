#ifndef PSDDL_HDF2PSANA_CSPAD2X2_DDL_H
#define PSDDL_HDF2PSANA_CSPAD2X2_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/cspad2x2.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
namespace psddl_hdf2psana {
namespace CsPad2x2 {
  enum {
    QuadsPerSensor = 1 /**< Defines number of quadrants in a CsPad2x2 device. */
  };
  enum {
    ASICsPerQuad = 4 /**< Total number of ASICs in one quadrant. */
  };
  enum {
    RowsPerBank = 26 /**< Number of rows per readout bank? */
  };
  enum {
    FullBanksPerASIC = 7 /**< Number of full readout banks per one ASIC? */
  };
  enum {
    BanksPerASIC = 8 /**< Number of readout banks per one ASIC? */
  };
  enum {
    ColumnsPerASIC = 185 /**< Number of columns readout by single ASIC. */
  };
  enum {
    MaxRowsPerASIC = 194 /**< Maximum number of rows readout by single ASIC. */
  };
  enum {
    PotsPerQuad = 80 /**< Number of POTs? per single quadrant. */
  };
  enum {
    TwoByTwosPerQuad = 1 /**< Total number of 2x2s in single quadrant. */
  };
  enum {
    SectorsPerQuad = 2 /**< Total number of sectors (2x1) per single quadrant. */
  };

  /** Enum specifying different running modes. */
  enum RunModes {
    NoRunning,
    RunButDrop,
    RunAndSendToRCE,
    RunAndSendTriggeredByTTL,
    ExternalTriggerSendToRCE,
    ExternalTriggerDrop,
    NumberOfRunModes,
  };

  /** Enum specifying different data collection modes. */
  enum DataModes {
    normal = 0,
    shiftTest = 1,
    testData = 2,
    reserved = 3,
  };

namespace ns_CsPad2x2DigitalPotsCfg_v0 {
struct dataset_pots {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_pots();
  ~dataset_pots();

  uint8_t pots[80]; 

};
}


class CsPad2x2DigitalPotsCfg_v0 : public Psana::CsPad2x2::CsPad2x2DigitalPotsCfg {
public:
  typedef Psana::CsPad2x2::CsPad2x2DigitalPotsCfg PsanaType;
  CsPad2x2DigitalPotsCfg_v0() {}
  CsPad2x2DigitalPotsCfg_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  CsPad2x2DigitalPotsCfg_v0(const boost::shared_ptr<ns_CsPad2x2DigitalPotsCfg_v0::dataset_pots>& ds) : m_ds_pots(ds) {}
  virtual ~CsPad2x2DigitalPotsCfg_v0() {}
  virtual ndarray<const uint8_t, 1> pots() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<ns_CsPad2x2DigitalPotsCfg_v0::dataset_pots> m_ds_pots;
  void read_ds_pots() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::CsPad2x2::CsPad2x2DigitalPotsCfg> > make_CsPad2x2DigitalPotsCfg(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_CsPad2x2ReadOnlyCfg_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  uint32_t shiftTest; 
  uint32_t version; 

  operator Psana::CsPad2x2::CsPad2x2ReadOnlyCfg() const { return Psana::CsPad2x2::CsPad2x2ReadOnlyCfg(shiftTest, version); }
};
}
class Proxy_CsPad2x2ReadOnlyCfg_v0 : public PSEvt::Proxy<Psana::CsPad2x2::CsPad2x2ReadOnlyCfg> {
public:
  typedef Psana::CsPad2x2::CsPad2x2ReadOnlyCfg PsanaType;

  Proxy_CsPad2x2ReadOnlyCfg_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_CsPad2x2ReadOnlyCfg_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::CsPad2x2::CsPad2x2ReadOnlyCfg> > make_CsPad2x2ReadOnlyCfg(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_ProtectionSystemThreshold_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  uint32_t adcThreshold; 
  uint32_t pixelCountThreshold; 

  operator Psana::CsPad2x2::ProtectionSystemThreshold() const { return Psana::CsPad2x2::ProtectionSystemThreshold(adcThreshold, pixelCountThreshold); }
};
}
class Proxy_ProtectionSystemThreshold_v0 : public PSEvt::Proxy<Psana::CsPad2x2::ProtectionSystemThreshold> {
public:
  typedef Psana::CsPad2x2::ProtectionSystemThreshold PsanaType;

  Proxy_ProtectionSystemThreshold_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_ProtectionSystemThreshold_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::CsPad2x2::ProtectionSystemThreshold> > make_ProtectionSystemThreshold(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_CsPad2x2GainMapCfg_v0 {
struct dataset_gainMap {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_gainMap();
  ~dataset_gainMap();

  uint16_t gainMap[35890]; 

};
}


class CsPad2x2GainMapCfg_v0 : public Psana::CsPad2x2::CsPad2x2GainMapCfg {
public:
  typedef Psana::CsPad2x2::CsPad2x2GainMapCfg PsanaType;
  CsPad2x2GainMapCfg_v0() {}
  CsPad2x2GainMapCfg_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  CsPad2x2GainMapCfg_v0(const boost::shared_ptr<ns_CsPad2x2GainMapCfg_v0::dataset_gainMap>& ds) : m_ds_gainMap(ds) {}
  virtual ~CsPad2x2GainMapCfg_v0() {}
  virtual ndarray<const uint16_t, 2> gainMap() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<ns_CsPad2x2GainMapCfg_v0::dataset_gainMap> m_ds_gainMap;
  void read_ds_gainMap() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::CsPad2x2::CsPad2x2GainMapCfg> > make_CsPad2x2GainMapCfg(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_ConfigV1QuadReg_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  uint32_t shiftSelect; 
  uint32_t edgeSelect; 
  uint32_t readClkSet; 
  uint32_t readClkHold; 
  uint32_t dataMode; 
  uint32_t prstSel; 
  uint32_t acqDelay; 
  uint32_t intTime; 
  uint32_t digDelay; 
  uint32_t ampIdle; 
  uint32_t injTotal; 
  uint32_t rowColShiftPer; 
  uint32_t ampReset; 
  uint32_t digCount; 
  uint32_t digPeriod; 
  uint32_t PeltierEnable; 
  uint32_t kpConstant; 
  uint32_t kiConstant; 
  uint32_t kdConstant; 
  uint32_t humidThold; 
  uint32_t setPoint; 
  CsPad2x2::ns_CsPad2x2ReadOnlyCfg_v0::dataset_data readOnly; 
  CsPad2x2::ns_CsPad2x2DigitalPotsCfg_v0::dataset_pots digitalPots; 
  CsPad2x2::ns_CsPad2x2GainMapCfg_v0::dataset_gainMap gainMap; 

};
}


class ConfigV1QuadReg_v0 : public Psana::CsPad2x2::ConfigV1QuadReg {
public:
  typedef Psana::CsPad2x2::ConfigV1QuadReg PsanaType;
  ConfigV1QuadReg_v0() {}
  ConfigV1QuadReg_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV1QuadReg_v0(const boost::shared_ptr<ns_ConfigV1QuadReg_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~ConfigV1QuadReg_v0() {}
  virtual uint32_t shiftSelect() const;
  virtual uint32_t edgeSelect() const;
  virtual uint32_t readClkSet() const;
  virtual uint32_t readClkHold() const;
  virtual uint32_t dataMode() const;
  virtual uint32_t prstSel() const;
  virtual uint32_t acqDelay() const;
  virtual uint32_t intTime() const;
  virtual uint32_t digDelay() const;
  virtual uint32_t ampIdle() const;
  virtual uint32_t injTotal() const;
  virtual uint32_t rowColShiftPer() const;
  virtual uint32_t ampReset() const;
  virtual uint32_t digCount() const;
  virtual uint32_t digPeriod() const;
  virtual uint32_t PeltierEnable() const;
  virtual uint32_t kpConstant() const;
  virtual uint32_t kiConstant() const;
  virtual uint32_t kdConstant() const;
  virtual uint32_t humidThold() const;
  virtual uint32_t setPoint() const;
  virtual const Psana::CsPad2x2::CsPad2x2ReadOnlyCfg& ro() const;
  virtual const Psana::CsPad2x2::CsPad2x2DigitalPotsCfg& dp() const;
  virtual const Psana::CsPad2x2::CsPad2x2GainMapCfg& gm() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<ns_ConfigV1QuadReg_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
  mutable Psana::CsPad2x2::CsPad2x2ReadOnlyCfg m_ds_storage_data_readOnly;
  mutable boost::shared_ptr<Psana::CsPad2x2::CsPad2x2DigitalPotsCfg> m_ds_storage_data_digitalPots;
  mutable boost::shared_ptr<Psana::CsPad2x2::CsPad2x2GainMapCfg> m_ds_storage_data_gainMap;
};

boost::shared_ptr<PSEvt::Proxy<Psana::CsPad2x2::ConfigV1QuadReg> > make_ConfigV1QuadReg(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  ~dataset_config();

  uint32_t concentratorVersion; 
  CsPad2x2::ns_ProtectionSystemThreshold_v0::dataset_data protectionThreshold; 
  uint32_t protectionEnable; 
  uint32_t inactiveRunMode; 
  uint32_t activeRunMode; 
  uint32_t tdi; 
  uint32_t payloadSize; 
  uint32_t badAsicMask; 
  uint32_t asicMask; 
  uint32_t roiMask; 
  uint32_t numAsicsRead; 
  uint32_t numAsicsStored; 
  CsPad2x2::ns_ConfigV1QuadReg_v0::dataset_data quad; 

};
}


class ConfigV1_v0 : public Psana::CsPad2x2::ConfigV1 {
public:
  typedef Psana::CsPad2x2::ConfigV1 PsanaType;
  ConfigV1_v0() {}
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV1_v0(const boost::shared_ptr<ns_ConfigV1_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV1_v0() {}
  virtual uint32_t concentratorVersion() const;
  virtual const Psana::CsPad2x2::ProtectionSystemThreshold& protectionThreshold() const;
  virtual uint32_t protectionEnable() const;
  virtual uint32_t inactiveRunMode() const;
  virtual uint32_t activeRunMode() const;
  virtual uint32_t tdi() const;
  virtual uint32_t payloadSize() const;
  virtual uint32_t badAsicMask() const;
  virtual uint32_t asicMask() const;
  virtual uint32_t roiMask() const;
  virtual const Psana::CsPad2x2::ConfigV1QuadReg& quad() const;
  virtual uint32_t numAsicsRead() const;
  virtual uint32_t numAsicsStored() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable Psana::CsPad2x2::ProtectionSystemThreshold m_ds_storage_config_protectionThreshold;
  mutable boost::shared_ptr<Psana::CsPad2x2::ConfigV1QuadReg> m_ds_storage_config_quad;
};

boost::shared_ptr<PSEvt::Proxy<Psana::CsPad2x2::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_ConfigV2QuadReg_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  uint32_t shiftSelect; 
  uint32_t edgeSelect; 
  uint32_t readClkSet; 
  uint32_t readClkHold; 
  uint32_t dataMode; 
  uint32_t prstSel; 
  uint32_t acqDelay; 
  uint32_t intTime; 
  uint32_t digDelay; 
  uint32_t ampIdle; 
  uint32_t injTotal; 
  uint32_t rowColShiftPer; 
  uint32_t ampReset; 
  uint32_t digCount; 
  uint32_t digPeriod; 
  uint32_t PeltierEnable; 
  uint32_t kpConstant; 
  uint32_t kiConstant; 
  uint32_t kdConstant; 
  uint32_t humidThold; 
  uint32_t setPoint; 
  uint32_t biasTuning; 
  uint32_t pdpmndnmBalance; 
  CsPad2x2::ns_CsPad2x2ReadOnlyCfg_v0::dataset_data readOnly; 
  CsPad2x2::ns_CsPad2x2DigitalPotsCfg_v0::dataset_pots digitalPots; 
  CsPad2x2::ns_CsPad2x2GainMapCfg_v0::dataset_gainMap gainMap; 

};
}


class ConfigV2QuadReg_v0 : public Psana::CsPad2x2::ConfigV2QuadReg {
public:
  typedef Psana::CsPad2x2::ConfigV2QuadReg PsanaType;
  ConfigV2QuadReg_v0() {}
  ConfigV2QuadReg_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV2QuadReg_v0(const boost::shared_ptr<ns_ConfigV2QuadReg_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~ConfigV2QuadReg_v0() {}
  virtual uint32_t shiftSelect() const;
  virtual uint32_t edgeSelect() const;
  virtual uint32_t readClkSet() const;
  virtual uint32_t readClkHold() const;
  virtual uint32_t dataMode() const;
  virtual uint32_t prstSel() const;
  virtual uint32_t acqDelay() const;
  virtual uint32_t intTime() const;
  virtual uint32_t digDelay() const;
  virtual uint32_t ampIdle() const;
  virtual uint32_t injTotal() const;
  virtual uint32_t rowColShiftPer() const;
  virtual uint32_t ampReset() const;
  virtual uint32_t digCount() const;
  virtual uint32_t digPeriod() const;
  virtual uint32_t PeltierEnable() const;
  virtual uint32_t kpConstant() const;
  virtual uint32_t kiConstant() const;
  virtual uint32_t kdConstant() const;
  virtual uint32_t humidThold() const;
  virtual uint32_t setPoint() const;
  virtual uint32_t biasTuning() const;
  virtual uint32_t pdpmndnmBalance() const;
  virtual const Psana::CsPad2x2::CsPad2x2ReadOnlyCfg& ro() const;
  virtual const Psana::CsPad2x2::CsPad2x2DigitalPotsCfg& dp() const;
  virtual const Psana::CsPad2x2::CsPad2x2GainMapCfg& gm() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<ns_ConfigV2QuadReg_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
  mutable Psana::CsPad2x2::CsPad2x2ReadOnlyCfg m_ds_storage_data_readOnly;
  mutable boost::shared_ptr<Psana::CsPad2x2::CsPad2x2DigitalPotsCfg> m_ds_storage_data_digitalPots;
  mutable boost::shared_ptr<Psana::CsPad2x2::CsPad2x2GainMapCfg> m_ds_storage_data_gainMap;
};

boost::shared_ptr<PSEvt::Proxy<Psana::CsPad2x2::ConfigV2QuadReg> > make_ConfigV2QuadReg(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_ConfigV2_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  ~dataset_config();

  uint32_t concentratorVersion; 
  CsPad2x2::ns_ProtectionSystemThreshold_v0::dataset_data protectionThreshold; 
  uint32_t protectionEnable; 
  uint32_t inactiveRunMode; 
  uint32_t activeRunMode; 
  uint32_t runTriggerDelay; 
  uint32_t tdi; 
  uint32_t payloadSize; 
  uint32_t badAsicMask; 
  uint32_t asicMask; 
  uint32_t roiMask; 
  uint32_t numAsicsRead; 
  uint32_t numAsicsStored; 
  CsPad2x2::ns_ConfigV2QuadReg_v0::dataset_data quad; 

};
}


class ConfigV2_v0 : public Psana::CsPad2x2::ConfigV2 {
public:
  typedef Psana::CsPad2x2::ConfigV2 PsanaType;
  ConfigV2_v0() {}
  ConfigV2_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV2_v0(const boost::shared_ptr<ns_ConfigV2_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV2_v0() {}
  virtual uint32_t concentratorVersion() const;
  virtual const Psana::CsPad2x2::ProtectionSystemThreshold& protectionThreshold() const;
  virtual uint32_t protectionEnable() const;
  virtual uint32_t inactiveRunMode() const;
  virtual uint32_t activeRunMode() const;
  virtual uint32_t runTriggerDelay() const;
  virtual uint32_t tdi() const;
  virtual uint32_t payloadSize() const;
  virtual uint32_t badAsicMask() const;
  virtual uint32_t asicMask() const;
  virtual uint32_t roiMask() const;
  virtual const Psana::CsPad2x2::ConfigV2QuadReg& quad() const;
  virtual uint32_t numAsicsRead() const;
  virtual uint32_t numAsicsStored() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<ns_ConfigV2_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable Psana::CsPad2x2::ProtectionSystemThreshold m_ds_storage_config_protectionThreshold;
  mutable boost::shared_ptr<Psana::CsPad2x2::ConfigV2QuadReg> m_ds_storage_config_quad;
};

boost::shared_ptr<PSEvt::Proxy<Psana::CsPad2x2::ConfigV2> > make_ConfigV2(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_ElementV1_v0 {
struct dataset_element {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_element();
  ~dataset_element();

  uint32_t virtual_channel; 
  uint32_t lane; 
  uint32_t tid; 
  uint32_t acq_count; 
  uint32_t op_code; 
  uint32_t quad; 
  uint32_t seq_count; 
  uint32_t ticks; 
  uint32_t fiducials; 
  uint32_t frame_type; 
  uint16_t sb_temp[4]; 

};
}

namespace ns_ElementV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  int16_t* data; 

};
}


class ElementV1_v0 : public Psana::CsPad2x2::ElementV1 {
public:
  typedef Psana::CsPad2x2::ElementV1 PsanaType;
  ElementV1_v0() {}
  ElementV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~ElementV1_v0() {}
  virtual uint32_t virtual_channel() const;
  virtual uint32_t lane() const;
  virtual uint32_t tid() const;
  virtual uint32_t acq_count() const;
  virtual uint32_t op_code() const;
  virtual uint32_t quad() const;
  virtual uint32_t seq_count() const;
  virtual uint32_t ticks() const;
  virtual uint32_t fiducials() const;
  virtual ndarray<const uint16_t, 1> sb_temp() const;
  virtual uint32_t frame_type() const;
  virtual ndarray<const int16_t, 3> data() const;
  /** Common mode value for a given section, section number can be 0 or 1.
                Will return 0 for data read from XTC, may be non-zero after calibration. */
  float common_mode(uint32_t section) const;

private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<ns_ElementV1_v0::dataset_element> m_ds_element;
  void read_ds_element() const;
  mutable boost::shared_ptr<ns_ElementV1_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::CsPad2x2::ElementV1> > make_ElementV1(int version, hdf5pp::Group group, hsize_t idx);
} // namespace CsPad2x2
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_CSPAD2X2_DDL_H
