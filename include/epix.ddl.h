#ifndef PSDDL_HDF2PSANA_EPIX_DDL_H
#define PSDDL_HDF2PSANA_EPIX_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/epix.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
#include "psddl_hdf2psana/ChunkPolicy.h"
namespace psddl_hdf2psana {
namespace Epix {

namespace ns_AsicConfigV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Epix::AsicConfigV1& psanaobj);
  ~dataset_data();

  uint8_t monostPulser;
  uint8_t dummyTest;
  uint8_t dummyMask;
  uint16_t pulser;
  uint8_t pbit;
  uint8_t atest;
  uint8_t test;
  uint8_t sabTest;
  uint8_t hrTest;
  uint8_t digMon1;
  uint8_t digMon2;
  uint8_t pulserDac;
  uint8_t Dm1En;
  uint8_t Dm2En;
  uint8_t slvdSBit;
  uint8_t VRefDac;
  uint8_t TpsTComp;
  uint8_t TpsMux;
  uint8_t RoMonost;
  uint8_t TpsGr;
  uint8_t S2dGr;
  uint8_t PpOcbS2d;
  uint8_t Ocb;
  uint8_t Monost;
  uint8_t FastppEnable;
  uint8_t Preamp;
  uint8_t PixelCb;
  uint8_t S2dTComp;
  uint8_t FilterDac;
  uint8_t TC;
  uint8_t S2d;
  uint8_t S2dDacBias;
  uint8_t TpsTcDac;
  uint8_t TpsDac;
  uint8_t S2dTcDac;
  uint8_t S2dDac;
  uint8_t TestBe;
  uint8_t IsEn;
  uint8_t DelExec;
  uint8_t DelCckReg;
  uint16_t RowStartAddr;
  uint16_t RowStopAddr;
  uint8_t ColStartAddr;
  uint8_t ColStopAddr;
  uint16_t chipID;


};
}


class AsicConfigV1_v0 : public Psana::Epix::AsicConfigV1 {
public:
  typedef Psana::Epix::AsicConfigV1 PsanaType;
  AsicConfigV1_v0() {}
  AsicConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  AsicConfigV1_v0(const boost::shared_ptr<Epix::ns_AsicConfigV1_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~AsicConfigV1_v0() {}
  virtual uint8_t monostPulser() const;
  virtual uint8_t dummyTest() const;
  virtual uint8_t dummyMask() const;
  virtual uint16_t pulser() const;
  virtual uint8_t pbit() const;
  virtual uint8_t atest() const;
  virtual uint8_t test() const;
  virtual uint8_t sabTest() const;
  virtual uint8_t hrTest() const;
  virtual uint8_t digMon1() const;
  virtual uint8_t digMon2() const;
  virtual uint8_t pulserDac() const;
  virtual uint8_t Dm1En() const;
  virtual uint8_t Dm2En() const;
  virtual uint8_t slvdSBit() const;
  virtual uint8_t VRefDac() const;
  virtual uint8_t TpsTComp() const;
  virtual uint8_t TpsMux() const;
  virtual uint8_t RoMonost() const;
  virtual uint8_t TpsGr() const;
  virtual uint8_t S2dGr() const;
  virtual uint8_t PpOcbS2d() const;
  virtual uint8_t Ocb() const;
  virtual uint8_t Monost() const;
  virtual uint8_t FastppEnable() const;
  virtual uint8_t Preamp() const;
  virtual uint8_t PixelCb() const;
  virtual uint8_t S2dTComp() const;
  virtual uint8_t FilterDac() const;
  virtual uint8_t TC() const;
  virtual uint8_t S2d() const;
  virtual uint8_t S2dDacBias() const;
  virtual uint8_t TpsTcDac() const;
  virtual uint8_t TpsDac() const;
  virtual uint8_t S2dTcDac() const;
  virtual uint8_t S2dDac() const;
  virtual uint8_t TestBe() const;
  virtual uint8_t IsEn() const;
  virtual uint8_t DelExec() const;
  virtual uint8_t DelCckReg() const;
  virtual uint16_t RowStartAddr() const;
  virtual uint16_t RowStopAddr() const;
  virtual uint8_t ColStartAddr() const;
  virtual uint8_t ColStopAddr() const;
  virtual uint16_t chipID() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Epix::ns_AsicConfigV1_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
};


namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::Epix::ConfigV1& psanaobj);
  ~dataset_config();

  uint32_t version;
  uint32_t runTrigDelay;
  uint32_t daqTrigDelay;
  uint32_t dacSetting;
  uint8_t asicGR;
  uint8_t asicAcq;
  uint8_t asicR0;
  uint8_t asicPpmat;
  uint8_t asicPpbe;
  uint8_t asicRoClk;
  uint8_t asicGRControl;
  uint8_t asicAcqControl;
  uint8_t asicR0Control;
  uint8_t asicPpmatControl;
  uint8_t asicPpbeControl;
  uint8_t asicR0ClkControl;
  uint8_t prepulseR0En;
  uint32_t adcStreamMode;
  uint8_t testPatternEnable;
  uint32_t acqToAsicR0Delay;
  uint32_t asicR0ToAsicAcq;
  uint32_t asicAcqWidth;
  uint32_t asicAcqLToPPmatL;
  uint32_t asicRoClkHalfT;
  uint32_t adcReadsPerPixel;
  uint32_t adcClkHalfT;
  uint32_t asicR0Width;
  uint32_t adcPipelineDelay;
  uint32_t prepulseR0Width;
  uint32_t prepulseR0Delay;
  uint32_t digitalCardId0;
  uint32_t digitalCardId1;
  uint32_t analogCardId0;
  uint32_t analogCardId1;
  uint32_t lastRowExclusions;
  uint32_t numberOfAsicsPerRow;
  uint32_t numberOfAsicsPerColumn;
  uint32_t numberOfRowsPerAsic;
  uint32_t numberOfPixelsPerAsicRow;
  uint32_t baseClockFrequency;
  uint32_t asicMask;
  uint32_t numberOfRows;
  uint32_t numberOfColumns;
  uint32_t numberOfAsics;


};
}


class ConfigV1_v0 : public Psana::Epix::ConfigV1 {
public:
  typedef Psana::Epix::ConfigV1 PsanaType;
  ConfigV1_v0() {}
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~ConfigV1_v0() {}
  virtual uint32_t version() const;
  virtual uint32_t runTrigDelay() const;
  virtual uint32_t daqTrigDelay() const;
  virtual uint32_t dacSetting() const;
  virtual uint8_t asicGR() const;
  virtual uint8_t asicAcq() const;
  virtual uint8_t asicR0() const;
  virtual uint8_t asicPpmat() const;
  virtual uint8_t asicPpbe() const;
  virtual uint8_t asicRoClk() const;
  virtual uint8_t asicGRControl() const;
  virtual uint8_t asicAcqControl() const;
  virtual uint8_t asicR0Control() const;
  virtual uint8_t asicPpmatControl() const;
  virtual uint8_t asicPpbeControl() const;
  virtual uint8_t asicR0ClkControl() const;
  virtual uint8_t prepulseR0En() const;
  virtual uint32_t adcStreamMode() const;
  virtual uint8_t testPatternEnable() const;
  virtual uint32_t acqToAsicR0Delay() const;
  virtual uint32_t asicR0ToAsicAcq() const;
  virtual uint32_t asicAcqWidth() const;
  virtual uint32_t asicAcqLToPPmatL() const;
  virtual uint32_t asicRoClkHalfT() const;
  virtual uint32_t adcReadsPerPixel() const;
  virtual uint32_t adcClkHalfT() const;
  virtual uint32_t asicR0Width() const;
  virtual uint32_t adcPipelineDelay() const;
  virtual uint32_t prepulseR0Width() const;
  virtual uint32_t prepulseR0Delay() const;
  virtual uint32_t digitalCardId0() const;
  virtual uint32_t digitalCardId1() const;
  virtual uint32_t analogCardId0() const;
  virtual uint32_t analogCardId1() const;
  virtual uint32_t lastRowExclusions() const;
  virtual uint32_t numberOfAsicsPerRow() const;
  virtual uint32_t numberOfAsicsPerColumn() const;
  virtual uint32_t numberOfRowsPerAsic() const;
  virtual uint32_t numberOfPixelsPerAsicRow() const;
  virtual uint32_t baseClockFrequency() const;
  virtual uint32_t asicMask() const;
  virtual const Psana::Epix::AsicConfigV1& asics(uint32_t i0) const;
  virtual ndarray<const uint32_t, 3> asicPixelTestArray() const;
  virtual ndarray<const uint32_t, 3> asicPixelMaskArray() const;
  virtual uint32_t numberOfRows() const;
  virtual uint32_t numberOfColumns() const;
  virtual uint32_t numberOfAsics() const;
  /** Method which returns the shape (dimensions) of the data returned by asics() method. */
  std::vector<int> asics_shape() const;

private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Epix::ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable ndarray<const AsicConfigV1_v0, 1> m_ds_asics;
  void read_ds_asics() const;
  mutable ndarray<const uint32_t, 3> m_ds_asicPixelTestArray;
  void read_ds_asicPixelTestArray() const;
  mutable ndarray<const uint32_t, 3> m_ds_asicPixelMaskArray;
  void read_ds_asicPixelMaskArray() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Epix::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Epix::ConfigV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Epix::ConfigV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Epix::ConfigV1* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_ElementV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Epix::ElementV1& psanaobj);
  ~dataset_data();

  uint8_t vc;
  uint8_t lane;
  uint16_t acqCount;
  uint32_t frameNumber;
  uint32_t ticks;
  uint32_t fiducials;
  uint32_t lastWord;


};
}


template <typename Config>
class ElementV1_v0 : public Psana::Epix::ElementV1 {
public:
  typedef Psana::Epix::ElementV1 PsanaType;
  ElementV1_v0() {}
  ElementV1_v0(hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Config>& cfg)
    : m_group(group), m_idx(idx), m_cfg(cfg) {}
  virtual ~ElementV1_v0() {}
  virtual uint8_t vc() const;
  virtual uint8_t lane() const;
  virtual uint16_t acqCount() const;
  virtual uint32_t frameNumber() const;
  virtual uint32_t ticks() const;
  virtual uint32_t fiducials() const;
  virtual ndarray<const uint16_t, 2> frame() const;
  virtual ndarray<const uint16_t, 2> excludedRows() const;
  virtual ndarray<const uint16_t, 1> temperatures() const;
  virtual uint32_t lastWord() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<Config> m_cfg;
  mutable boost::shared_ptr<Epix::ns_ElementV1_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
  mutable ndarray<const uint16_t, 2> m_ds_frame;
  void read_ds_frame() const;
  mutable ndarray<const uint16_t, 2> m_ds_excludedRows;
  void read_ds_excludedRows() const;
  mutable ndarray<const uint16_t, 1> m_ds_temperatures;
  void read_ds_temperatures() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Epix::ElementV1> > make_ElementV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::Epix::ConfigV1>& cfg);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Epix::ElementV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Epix::ElementV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::Epix::ElementV1* obj, hdf5pp::Group group, long index = -1, int version = -1);

} // namespace Epix
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_EPIX_DDL_H