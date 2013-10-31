#ifndef PSDDL_HDF2PSANA_CSPAD_DDL_H
#define PSDDL_HDF2PSANA_CSPAD_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/cspad.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
#include "psddl_hdf2psana/ChunkPolicy.h"
namespace psddl_hdf2psana {
namespace CsPad {
  enum {
    MaxQuadsPerSensor = 4 /**< Defines number of quadrants in a CsPad device. */
  };
  enum {
    ASICsPerQuad = 16 /**< Total number of ASICs in one quadrant. */
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
    TwoByTwosPerQuad = 4 /**< Total number of 2x2s in single quadrant. */
  };
  enum {
    SectorsPerQuad = 8 /**< Total number of sectors (2x1) per single quadrant. */
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

namespace ns_CsPadDigitalPotsCfg_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::CsPad::CsPadDigitalPotsCfg& psanaobj);
  ~dataset_data();

  uint8_t pots[80];


};
}


class CsPadDigitalPotsCfg_v0 : public Psana::CsPad::CsPadDigitalPotsCfg {
public:
  typedef Psana::CsPad::CsPadDigitalPotsCfg PsanaType;
  CsPadDigitalPotsCfg_v0() {}
  CsPadDigitalPotsCfg_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  CsPadDigitalPotsCfg_v0(const boost::shared_ptr<CsPad::ns_CsPadDigitalPotsCfg_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~CsPadDigitalPotsCfg_v0() {}
  virtual ndarray<const uint8_t, 1> pots() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<CsPad::ns_CsPadDigitalPotsCfg_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
};


namespace ns_CsPadReadOnlyCfg_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::CsPad::CsPadReadOnlyCfg& psanaobj);
  ~dataset_data();

  uint32_t shiftTest;
  uint32_t version;

  operator Psana::CsPad::CsPadReadOnlyCfg() const { return Psana::CsPad::CsPadReadOnlyCfg(shiftTest, version); }

};
}

namespace ns_ProtectionSystemThreshold_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::CsPad::ProtectionSystemThreshold& psanaobj);
  ~dataset_data();

  uint32_t adcThreshold;
  uint32_t pixelCountThreshold;

  operator Psana::CsPad::ProtectionSystemThreshold() const { return Psana::CsPad::ProtectionSystemThreshold(adcThreshold, pixelCountThreshold); }

};
}

namespace ns_CsPadGainMapCfg_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::CsPad::CsPadGainMapCfg& psanaobj);
  ~dataset_data();

  uint16_t gainMap[35890];


};
}


class CsPadGainMapCfg_v0 : public Psana::CsPad::CsPadGainMapCfg {
public:
  typedef Psana::CsPad::CsPadGainMapCfg PsanaType;
  CsPadGainMapCfg_v0() {}
  CsPadGainMapCfg_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  CsPadGainMapCfg_v0(const boost::shared_ptr<CsPad::ns_CsPadGainMapCfg_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~CsPadGainMapCfg_v0() {}
  virtual ndarray<const uint16_t, 2> gainMap() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<CsPad::ns_CsPadGainMapCfg_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
};


namespace ns_ConfigV1QuadReg_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::CsPad::ConfigV1QuadReg& psanaobj);
  ~dataset_data();

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
  CsPad::ns_CsPadReadOnlyCfg_v0::dataset_data readOnly;
  CsPad::ns_CsPadDigitalPotsCfg_v0::dataset_data digitalPots;
  CsPad::ns_CsPadGainMapCfg_v0::dataset_data gainMap;
  uint32_t shiftSelect[4];
  uint32_t edgeSelect[4];


};
}


class ConfigV1QuadReg_v0 : public Psana::CsPad::ConfigV1QuadReg {
public:
  typedef Psana::CsPad::ConfigV1QuadReg PsanaType;
  ConfigV1QuadReg_v0() {}
  ConfigV1QuadReg_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV1QuadReg_v0(const boost::shared_ptr<CsPad::ns_ConfigV1QuadReg_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~ConfigV1QuadReg_v0() {}
  virtual ndarray<const uint32_t, 1> shiftSelect() const;
  virtual ndarray<const uint32_t, 1> edgeSelect() const;
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
  virtual const Psana::CsPad::CsPadReadOnlyCfg& ro() const;
  virtual const Psana::CsPad::CsPadDigitalPotsCfg& dp() const;
  virtual const Psana::CsPad::CsPadGainMapCfg& gm() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<CsPad::ns_ConfigV1QuadReg_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
  mutable Psana::CsPad::CsPadReadOnlyCfg m_ds_storage_data_readOnly;
  mutable boost::shared_ptr<Psana::CsPad::CsPadDigitalPotsCfg> m_ds_storage_data_digitalPots;
  mutable boost::shared_ptr<Psana::CsPad::CsPadGainMapCfg> m_ds_storage_data_gainMap;
};


namespace ns_ConfigV2QuadReg_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::CsPad::ConfigV2QuadReg& psanaobj);
  ~dataset_data();

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
  CsPad::ns_CsPadReadOnlyCfg_v0::dataset_data readOnly;
  CsPad::ns_CsPadDigitalPotsCfg_v0::dataset_data digitalPots;
  CsPad::ns_CsPadGainMapCfg_v0::dataset_data gainMap;
  uint32_t shiftSelect[4];
  uint32_t edgeSelect[4];


};
}


class ConfigV2QuadReg_v0 : public Psana::CsPad::ConfigV2QuadReg {
public:
  typedef Psana::CsPad::ConfigV2QuadReg PsanaType;
  ConfigV2QuadReg_v0() {}
  ConfigV2QuadReg_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV2QuadReg_v0(const boost::shared_ptr<CsPad::ns_ConfigV2QuadReg_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~ConfigV2QuadReg_v0() {}
  virtual ndarray<const uint32_t, 1> shiftSelect() const;
  virtual ndarray<const uint32_t, 1> edgeSelect() const;
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
  virtual const Psana::CsPad::CsPadReadOnlyCfg& ro() const;
  virtual const Psana::CsPad::CsPadDigitalPotsCfg& dp() const;
  virtual const Psana::CsPad::CsPadGainMapCfg& gm() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<CsPad::ns_ConfigV2QuadReg_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
  mutable Psana::CsPad::CsPadReadOnlyCfg m_ds_storage_data_readOnly;
  mutable boost::shared_ptr<Psana::CsPad::CsPadDigitalPotsCfg> m_ds_storage_data_digitalPots;
  mutable boost::shared_ptr<Psana::CsPad::CsPadGainMapCfg> m_ds_storage_data_gainMap;
};


namespace ns_ConfigV3QuadReg_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::CsPad::ConfigV3QuadReg& psanaobj);
  ~dataset_data();

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
  uint32_t biasTuning;
  uint32_t pdpmndnmBalance;
  CsPad::ns_CsPadReadOnlyCfg_v0::dataset_data readOnly;
  CsPad::ns_CsPadDigitalPotsCfg_v0::dataset_data digitalPots;
  CsPad::ns_CsPadGainMapCfg_v0::dataset_data gainMap;
  uint32_t shiftSelect[4];
  uint32_t edgeSelect[4];


};
}


class ConfigV3QuadReg_v0 : public Psana::CsPad::ConfigV3QuadReg {
public:
  typedef Psana::CsPad::ConfigV3QuadReg PsanaType;
  ConfigV3QuadReg_v0() {}
  ConfigV3QuadReg_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV3QuadReg_v0(const boost::shared_ptr<CsPad::ns_ConfigV3QuadReg_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~ConfigV3QuadReg_v0() {}
  virtual ndarray<const uint32_t, 1> shiftSelect() const;
  virtual ndarray<const uint32_t, 1> edgeSelect() const;
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
  virtual uint32_t biasTuning() const;
  virtual uint32_t pdpmndnmBalance() const;
  virtual const Psana::CsPad::CsPadReadOnlyCfg& ro() const;
  virtual const Psana::CsPad::CsPadDigitalPotsCfg& dp() const;
  virtual const Psana::CsPad::CsPadGainMapCfg& gm() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<CsPad::ns_ConfigV3QuadReg_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
  mutable Psana::CsPad::CsPadReadOnlyCfg m_ds_storage_data_readOnly;
  mutable boost::shared_ptr<Psana::CsPad::CsPadDigitalPotsCfg> m_ds_storage_data_digitalPots;
  mutable boost::shared_ptr<Psana::CsPad::CsPadGainMapCfg> m_ds_storage_data_gainMap;
};


namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::CsPad::ConfigV1& psanaobj);
  ~dataset_config();

  uint32_t concentratorVersion;
  uint32_t runDelay;
  uint32_t eventCode;
  uint32_t inactiveRunMode;
  uint32_t activeRunMode;
  uint32_t testDataIndex;
  uint32_t payloadPerQuad;
  uint32_t badAsicMask0;
  uint32_t badAsicMask1;
  uint32_t asicMask;
  uint32_t quadMask;
  CsPad::ns_ConfigV1QuadReg_v0::dataset_data quads[4];


};
}


class ConfigV1_v0 : public Psana::CsPad::ConfigV1 {
public:
  typedef Psana::CsPad::ConfigV1 PsanaType;
  ConfigV1_v0() {}
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV1_v0(const boost::shared_ptr<CsPad::ns_ConfigV1_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV1_v0() {}
  virtual uint32_t concentratorVersion() const;
  virtual uint32_t runDelay() const;
  virtual uint32_t eventCode() const;
  virtual uint32_t inactiveRunMode() const;
  virtual uint32_t activeRunMode() const;
  virtual uint32_t tdi() const;
  virtual uint32_t payloadSize() const;
  virtual uint32_t badAsicMask0() const;
  virtual uint32_t badAsicMask1() const;
  virtual uint32_t asicMask() const;
  virtual uint32_t quadMask() const;
  virtual const Psana::CsPad::ConfigV1QuadReg& quads(uint32_t i0) const;
    uint32_t numAsicsRead() const;

    uint32_t numQuads() const;

    uint32_t numSect() const;

  /** Method which returns the shape (dimensions) of the data returned by quads() method. */
  std::vector<int> quads_shape() const;

private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<CsPad::ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable ndarray<ConfigV1QuadReg_v0, 1> m_ds_storage_config_quads;
};

boost::shared_ptr<PSEvt::Proxy<Psana::CsPad::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::CsPad::ConfigV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::CsPad::ConfigV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::CsPad::ConfigV1* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_ConfigV2_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::CsPad::ConfigV2& psanaobj);
  ~dataset_config();

  uint32_t concentratorVersion;
  uint32_t runDelay;
  uint32_t eventCode;
  uint32_t inactiveRunMode;
  uint32_t activeRunMode;
  uint32_t testDataIndex;
  uint32_t payloadPerQuad;
  uint32_t badAsicMask0;
  uint32_t badAsicMask1;
  uint32_t asicMask;
  uint32_t quadMask;
  uint32_t roiMask;
  CsPad::ns_ConfigV1QuadReg_v0::dataset_data quads[4];


};
}


class ConfigV2_v0 : public Psana::CsPad::ConfigV2 {
public:
  typedef Psana::CsPad::ConfigV2 PsanaType;
  ConfigV2_v0() {}
  ConfigV2_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV2_v0(const boost::shared_ptr<CsPad::ns_ConfigV2_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV2_v0() {}
  virtual uint32_t concentratorVersion() const;
  virtual uint32_t runDelay() const;
  virtual uint32_t eventCode() const;
  virtual uint32_t inactiveRunMode() const;
  virtual uint32_t activeRunMode() const;
  virtual uint32_t tdi() const;
  virtual uint32_t payloadSize() const;
  virtual uint32_t badAsicMask0() const;
  virtual uint32_t badAsicMask1() const;
  virtual uint32_t asicMask() const;
  virtual uint32_t quadMask() const;
  virtual uint32_t roiMasks() const;
  virtual const Psana::CsPad::ConfigV1QuadReg& quads(uint32_t i0) const;
    uint32_t numAsicsRead() const;

  /** ROI mask for given quadrant */
  uint32_t roiMask(uint32_t iq) const;

  /** Number of ASICs in given quadrant */
  uint32_t numAsicsStored(uint32_t iq) const;

  /** Total number of quadrants in setup */
  uint32_t numQuads() const;

  /** Total number of sections (2x1) in all quadrants */
  uint32_t numSect() const;

  /** Method which returns the shape (dimensions) of the data returned by quads() method. */
  std::vector<int> quads_shape() const;

private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<CsPad::ns_ConfigV2_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable ndarray<ConfigV1QuadReg_v0, 1> m_ds_storage_config_quads;
};

boost::shared_ptr<PSEvt::Proxy<Psana::CsPad::ConfigV2> > make_ConfigV2(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::CsPad::ConfigV2& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::CsPad::ConfigV2& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::CsPad::ConfigV2* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_ConfigV3_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::CsPad::ConfigV3& psanaobj);
  ~dataset_config();

  uint32_t concentratorVersion;
  uint32_t runDelay;
  uint32_t eventCode;
  uint32_t protectionEnable;
  uint32_t inactiveRunMode;
  uint32_t activeRunMode;
  uint32_t testDataIndex;
  uint32_t payloadPerQuad;
  uint32_t badAsicMask0;
  uint32_t badAsicMask1;
  uint32_t asicMask;
  uint32_t quadMask;
  uint32_t roiMask;
  CsPad::ns_ProtectionSystemThreshold_v0::dataset_data protectionThresholds[4];
  CsPad::ns_ConfigV1QuadReg_v0::dataset_data quads[4];


};
}


class ConfigV3_v0 : public Psana::CsPad::ConfigV3 {
public:
  typedef Psana::CsPad::ConfigV3 PsanaType;
  ConfigV3_v0() {}
  ConfigV3_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV3_v0(const boost::shared_ptr<CsPad::ns_ConfigV3_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV3_v0() {}
  virtual uint32_t concentratorVersion() const;
  virtual uint32_t runDelay() const;
  virtual uint32_t eventCode() const;
  virtual ndarray<const Psana::CsPad::ProtectionSystemThreshold, 1> protectionThresholds() const;
  virtual uint32_t protectionEnable() const;
  virtual uint32_t inactiveRunMode() const;
  virtual uint32_t activeRunMode() const;
  virtual uint32_t tdi() const;
  virtual uint32_t payloadSize() const;
  virtual uint32_t badAsicMask0() const;
  virtual uint32_t badAsicMask1() const;
  virtual uint32_t asicMask() const;
  virtual uint32_t quadMask() const;
  virtual uint32_t roiMasks() const;
  virtual const Psana::CsPad::ConfigV1QuadReg& quads(uint32_t i0) const;
    uint32_t numAsicsRead() const;

  /** ROI mask for given quadrant */
  uint32_t roiMask(uint32_t iq) const;

  /** Number of ASICs in given quadrant */
  uint32_t numAsicsStored(uint32_t iq) const;

  /** Total number of quadrants in setup */
  uint32_t numQuads() const;

  /** Total number of sections (2x1) in all quadrants */
  uint32_t numSect() const;

  /** Method which returns the shape (dimensions) of the data returned by quads() method. */
  std::vector<int> quads_shape() const;

private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<CsPad::ns_ConfigV3_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable ndarray<const Psana::CsPad::ProtectionSystemThreshold, 1> m_ds_storage_config_protectionThresholds;
  mutable ndarray<ConfigV1QuadReg_v0, 1> m_ds_storage_config_quads;
};

boost::shared_ptr<PSEvt::Proxy<Psana::CsPad::ConfigV3> > make_ConfigV3(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::CsPad::ConfigV3& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::CsPad::ConfigV3& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::CsPad::ConfigV3* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_ConfigV4_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::CsPad::ConfigV4& psanaobj);
  ~dataset_config();

  uint32_t concentratorVersion;
  uint32_t runDelay;
  uint32_t eventCode;
  uint32_t protectionEnable;
  uint32_t inactiveRunMode;
  uint32_t activeRunMode;
  uint32_t testDataIndex;
  uint32_t payloadPerQuad;
  uint32_t badAsicMask0;
  uint32_t badAsicMask1;
  uint32_t asicMask;
  uint32_t quadMask;
  uint32_t roiMask;
  CsPad::ns_ProtectionSystemThreshold_v0::dataset_data protectionThresholds[4];
  CsPad::ns_ConfigV2QuadReg_v0::dataset_data quads[4];


};
}


class ConfigV4_v0 : public Psana::CsPad::ConfigV4 {
public:
  typedef Psana::CsPad::ConfigV4 PsanaType;
  ConfigV4_v0() {}
  ConfigV4_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV4_v0(const boost::shared_ptr<CsPad::ns_ConfigV4_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV4_v0() {}
  virtual uint32_t concentratorVersion() const;
  virtual uint32_t runDelay() const;
  virtual uint32_t eventCode() const;
  virtual ndarray<const Psana::CsPad::ProtectionSystemThreshold, 1> protectionThresholds() const;
  virtual uint32_t protectionEnable() const;
  virtual uint32_t inactiveRunMode() const;
  virtual uint32_t activeRunMode() const;
  virtual uint32_t tdi() const;
  virtual uint32_t payloadSize() const;
  virtual uint32_t badAsicMask0() const;
  virtual uint32_t badAsicMask1() const;
  virtual uint32_t asicMask() const;
  virtual uint32_t quadMask() const;
  virtual uint32_t roiMasks() const;
  virtual const Psana::CsPad::ConfigV2QuadReg& quads(uint32_t i0) const;
    uint32_t numAsicsRead() const;

  /** ROI mask for given quadrant */
  uint32_t roiMask(uint32_t iq) const;

  /** Number of ASICs in given quadrant */
  uint32_t numAsicsStored(uint32_t iq) const;

  /** Total number of quadrants in setup */
  uint32_t numQuads() const;

  /** Total number of sections (2x1) in all quadrants */
  uint32_t numSect() const;

  /** Method which returns the shape (dimensions) of the data returned by quads() method. */
  std::vector<int> quads_shape() const;

private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<CsPad::ns_ConfigV4_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable ndarray<const Psana::CsPad::ProtectionSystemThreshold, 1> m_ds_storage_config_protectionThresholds;
  mutable ndarray<ConfigV2QuadReg_v0, 1> m_ds_storage_config_quads;
};

boost::shared_ptr<PSEvt::Proxy<Psana::CsPad::ConfigV4> > make_ConfigV4(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::CsPad::ConfigV4& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::CsPad::ConfigV4& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::CsPad::ConfigV4* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_ConfigV5_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::CsPad::ConfigV5& psanaobj);
  ~dataset_config();

  uint32_t concentratorVersion;
  uint32_t runDelay;
  uint32_t eventCode;
  uint32_t protectionEnable;
  uint32_t inactiveRunMode;
  uint32_t activeRunMode;
  uint32_t internalTriggerDelay;
  uint32_t testDataIndex;
  uint32_t payloadPerQuad;
  uint32_t badAsicMask0;
  uint32_t badAsicMask1;
  uint32_t asicMask;
  uint32_t quadMask;
  uint32_t roiMask;
  CsPad::ns_ProtectionSystemThreshold_v0::dataset_data protectionThresholds[4];
  CsPad::ns_ConfigV3QuadReg_v0::dataset_data quads[4];


};
}


class ConfigV5_v0 : public Psana::CsPad::ConfigV5 {
public:
  typedef Psana::CsPad::ConfigV5 PsanaType;
  ConfigV5_v0() {}
  ConfigV5_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV5_v0(const boost::shared_ptr<CsPad::ns_ConfigV5_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV5_v0() {}
  virtual uint32_t concentratorVersion() const;
  virtual uint32_t runDelay() const;
  virtual uint32_t eventCode() const;
  virtual ndarray<const Psana::CsPad::ProtectionSystemThreshold, 1> protectionThresholds() const;
  virtual uint32_t protectionEnable() const;
  virtual uint32_t inactiveRunMode() const;
  virtual uint32_t activeRunMode() const;
  virtual uint32_t internalTriggerDelay() const;
  virtual uint32_t tdi() const;
  virtual uint32_t payloadSize() const;
  virtual uint32_t badAsicMask0() const;
  virtual uint32_t badAsicMask1() const;
  virtual uint32_t asicMask() const;
  virtual uint32_t quadMask() const;
  virtual uint32_t roiMasks() const;
  virtual const Psana::CsPad::ConfigV3QuadReg& quads(uint32_t i0) const;
    uint32_t numAsicsRead() const;

  /** ROI mask for given quadrant */
  uint32_t roiMask(uint32_t iq) const;

  /** Number of ASICs in given quadrant */
  uint32_t numAsicsStored(uint32_t iq) const;

  /** Total number of quadrants in setup */
  uint32_t numQuads() const;

  /** Total number of sections (2x1) in all quadrants */
  uint32_t numSect() const;

  /** Method which returns the shape (dimensions) of the data returned by quads() method. */
  std::vector<int> quads_shape() const;

private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<CsPad::ns_ConfigV5_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable ndarray<const Psana::CsPad::ProtectionSystemThreshold, 1> m_ds_storage_config_protectionThresholds;
  mutable ndarray<ConfigV3QuadReg_v0, 1> m_ds_storage_config_quads;
};

boost::shared_ptr<PSEvt::Proxy<Psana::CsPad::ConfigV5> > make_ConfigV5(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::CsPad::ConfigV5& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::CsPad::ConfigV5& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::CsPad::ConfigV5* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_ElementV1_v0 {
struct dataset_element {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_element();
  dataset_element(const Psana::CsPad::ElementV1& psanaobj);
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
  uint32_t sectionMask;
  uint16_t sb_temp[4];


};
}


template <typename Config>
class ElementV1_v0 : public Psana::CsPad::ElementV1 {
public:
  typedef Psana::CsPad::ElementV1 PsanaType;
  ElementV1_v0() {}
  ElementV1_v0(hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Config>& cfg)
    : m_group(group), m_idx(idx), m_cfg(cfg) {}
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
  virtual uint32_t sectionMask() const;
  /** Common mode value for a given section, section number can be 0 to config.numAsicsRead()/2.
                Will return 0 for data read from XTC, may be non-zero after calibration. */
  float common_mode(uint32_t section) const;

private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<Config> m_cfg;
  mutable boost::shared_ptr<CsPad::ns_ElementV1_v0::dataset_element> m_ds_element;
  void read_ds_element() const;
  mutable ndarray<const int16_t, 3> m_ds_data;
  void read_ds_data() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::CsPad::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::CsPad::ConfigV1>& cfg);
boost::shared_ptr<PSEvt::Proxy<Psana::CsPad::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::CsPad::ConfigV2>& cfg);
boost::shared_ptr<PSEvt::Proxy<Psana::CsPad::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::CsPad::ConfigV3>& cfg);
boost::shared_ptr<PSEvt::Proxy<Psana::CsPad::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::CsPad::ConfigV4>& cfg);
boost::shared_ptr<PSEvt::Proxy<Psana::CsPad::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::CsPad::ConfigV5>& cfg);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::CsPad::DataV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::CsPad::DataV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::CsPad::DataV1* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_ElementV2_v0 {
struct dataset_element {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_element();
  dataset_element(const Psana::CsPad::ElementV2& psanaobj);
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
  uint32_t sectionMask;
  uint16_t sb_temp[4];


};
}


template <typename Config>
class ElementV2_v0 : public Psana::CsPad::ElementV2 {
public:
  typedef Psana::CsPad::ElementV2 PsanaType;
  ElementV2_v0() {}
  ElementV2_v0(hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Config>& cfg)
    : m_group(group), m_idx(idx), m_cfg(cfg) {}
  virtual ~ElementV2_v0() {}
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
  virtual uint32_t sectionMask() const;
  /** Common mode value for a given section, section number can be 0 to config.numSect().
                Will return 0 for data read from XTC, may be non-zero after calibration. */
  float common_mode(uint32_t section) const;

private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<Config> m_cfg;
  mutable boost::shared_ptr<CsPad::ns_ElementV2_v0::dataset_element> m_ds_element;
  void read_ds_element() const;
  mutable ndarray<const int16_t, 3> m_ds_data;
  void read_ds_data() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::CsPad::DataV2> > make_DataV2(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::CsPad::ConfigV2>& cfg);
boost::shared_ptr<PSEvt::Proxy<Psana::CsPad::DataV2> > make_DataV2(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::CsPad::ConfigV3>& cfg);
boost::shared_ptr<PSEvt::Proxy<Psana::CsPad::DataV2> > make_DataV2(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::CsPad::ConfigV4>& cfg);
boost::shared_ptr<PSEvt::Proxy<Psana::CsPad::DataV2> > make_DataV2(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::CsPad::ConfigV5>& cfg);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::CsPad::DataV2& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::CsPad::DataV2& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::CsPad::DataV2* obj, hdf5pp::Group group, long index = -1, int version = -1);

} // namespace CsPad
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_CSPAD_DDL_H
