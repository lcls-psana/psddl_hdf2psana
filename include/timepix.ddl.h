#ifndef PSDDL_HDF2PSANA_TIMEPIX_DDL_H
#define PSDDL_HDF2PSANA_TIMEPIX_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/timepix.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
namespace psddl_hdf2psana {
namespace Timepix {

namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::Timepix::ConfigV1& psanaobj);
  ~dataset_config();

  uint8_t readoutSpeed;
  uint8_t triggerMode;
  int32_t shutterTimeout;
  int32_t dac0Ikrum;
  int32_t dac0Disc;
  int32_t dac0Preamp;
  int32_t dac0BufAnalogA;
  int32_t dac0BufAnalogB;
  int32_t dac0Hist;
  int32_t dac0ThlFine;
  int32_t dac0ThlCourse;
  int32_t dac0Vcas;
  int32_t dac0Fbk;
  int32_t dac0Gnd;
  int32_t dac0Ths;
  int32_t dac0BiasLvds;
  int32_t dac0RefLvds;
  int32_t dac1Ikrum;
  int32_t dac1Disc;
  int32_t dac1Preamp;
  int32_t dac1BufAnalogA;
  int32_t dac1BufAnalogB;
  int32_t dac1Hist;
  int32_t dac1ThlFine;
  int32_t dac1ThlCourse;
  int32_t dac1Vcas;
  int32_t dac1Fbk;
  int32_t dac1Gnd;
  int32_t dac1Ths;
  int32_t dac1BiasLvds;
  int32_t dac1RefLvds;
  int32_t dac2Ikrum;
  int32_t dac2Disc;
  int32_t dac2Preamp;
  int32_t dac2BufAnalogA;
  int32_t dac2BufAnalogB;
  int32_t dac2Hist;
  int32_t dac2ThlFine;
  int32_t dac2ThlCourse;
  int32_t dac2Vcas;
  int32_t dac2Fbk;
  int32_t dac2Gnd;
  int32_t dac2Ths;
  int32_t dac2BiasLvds;
  int32_t dac2RefLvds;
  int32_t dac3Ikrum;
  int32_t dac3Disc;
  int32_t dac3Preamp;
  int32_t dac3BufAnalogA;
  int32_t dac3BufAnalogB;
  int32_t dac3Hist;
  int32_t dac3ThlFine;
  int32_t dac3ThlCourse;
  int32_t dac3Vcas;
  int32_t dac3Fbk;
  int32_t dac3Gnd;
  int32_t dac3Ths;
  int32_t dac3BiasLvds;
  int32_t dac3RefLvds;


};
}


class ConfigV1_v0 : public Psana::Timepix::ConfigV1 {
public:
  typedef Psana::Timepix::ConfigV1 PsanaType;
  ConfigV1_v0() {}
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV1_v0(const boost::shared_ptr<Timepix::ns_ConfigV1_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV1_v0() {}
  virtual Psana::Timepix::ConfigV1::ReadoutSpeed readoutSpeed() const;
  virtual Psana::Timepix::ConfigV1::TriggerMode triggerMode() const;
  virtual int32_t shutterTimeout() const;
  virtual int32_t dac0Ikrum() const;
  virtual int32_t dac0Disc() const;
  virtual int32_t dac0Preamp() const;
  virtual int32_t dac0BufAnalogA() const;
  virtual int32_t dac0BufAnalogB() const;
  virtual int32_t dac0Hist() const;
  virtual int32_t dac0ThlFine() const;
  virtual int32_t dac0ThlCourse() const;
  virtual int32_t dac0Vcas() const;
  virtual int32_t dac0Fbk() const;
  virtual int32_t dac0Gnd() const;
  virtual int32_t dac0Ths() const;
  virtual int32_t dac0BiasLvds() const;
  virtual int32_t dac0RefLvds() const;
  virtual int32_t dac1Ikrum() const;
  virtual int32_t dac1Disc() const;
  virtual int32_t dac1Preamp() const;
  virtual int32_t dac1BufAnalogA() const;
  virtual int32_t dac1BufAnalogB() const;
  virtual int32_t dac1Hist() const;
  virtual int32_t dac1ThlFine() const;
  virtual int32_t dac1ThlCourse() const;
  virtual int32_t dac1Vcas() const;
  virtual int32_t dac1Fbk() const;
  virtual int32_t dac1Gnd() const;
  virtual int32_t dac1Ths() const;
  virtual int32_t dac1BiasLvds() const;
  virtual int32_t dac1RefLvds() const;
  virtual int32_t dac2Ikrum() const;
  virtual int32_t dac2Disc() const;
  virtual int32_t dac2Preamp() const;
  virtual int32_t dac2BufAnalogA() const;
  virtual int32_t dac2BufAnalogB() const;
  virtual int32_t dac2Hist() const;
  virtual int32_t dac2ThlFine() const;
  virtual int32_t dac2ThlCourse() const;
  virtual int32_t dac2Vcas() const;
  virtual int32_t dac2Fbk() const;
  virtual int32_t dac2Gnd() const;
  virtual int32_t dac2Ths() const;
  virtual int32_t dac2BiasLvds() const;
  virtual int32_t dac2RefLvds() const;
  virtual int32_t dac3Ikrum() const;
  virtual int32_t dac3Disc() const;
  virtual int32_t dac3Preamp() const;
  virtual int32_t dac3BufAnalogA() const;
  virtual int32_t dac3BufAnalogB() const;
  virtual int32_t dac3Hist() const;
  virtual int32_t dac3ThlFine() const;
  virtual int32_t dac3ThlCourse() const;
  virtual int32_t dac3Vcas() const;
  virtual int32_t dac3Fbk() const;
  virtual int32_t dac3Gnd() const;
  virtual int32_t dac3Ths() const;
  virtual int32_t dac3BiasLvds() const;
  virtual int32_t dac3RefLvds() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Timepix::ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Timepix::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Timepix::ConfigV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Timepix::ConfigV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method
void append(const Psana::Timepix::ConfigV1& obj, hdf5pp::Group group, int version = -1);


namespace ns_ConfigV2_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::Timepix::ConfigV2& psanaobj);
  ~dataset_config();

  uint8_t readoutSpeed;
  uint8_t triggerMode;
  int32_t timepixSpeed;
  int32_t dac0Ikrum;
  int32_t dac0Disc;
  int32_t dac0Preamp;
  int32_t dac0BufAnalogA;
  int32_t dac0BufAnalogB;
  int32_t dac0Hist;
  int32_t dac0ThlFine;
  int32_t dac0ThlCourse;
  int32_t dac0Vcas;
  int32_t dac0Fbk;
  int32_t dac0Gnd;
  int32_t dac0Ths;
  int32_t dac0BiasLvds;
  int32_t dac0RefLvds;
  int32_t dac1Ikrum;
  int32_t dac1Disc;
  int32_t dac1Preamp;
  int32_t dac1BufAnalogA;
  int32_t dac1BufAnalogB;
  int32_t dac1Hist;
  int32_t dac1ThlFine;
  int32_t dac1ThlCourse;
  int32_t dac1Vcas;
  int32_t dac1Fbk;
  int32_t dac1Gnd;
  int32_t dac1Ths;
  int32_t dac1BiasLvds;
  int32_t dac1RefLvds;
  int32_t dac2Ikrum;
  int32_t dac2Disc;
  int32_t dac2Preamp;
  int32_t dac2BufAnalogA;
  int32_t dac2BufAnalogB;
  int32_t dac2Hist;
  int32_t dac2ThlFine;
  int32_t dac2ThlCourse;
  int32_t dac2Vcas;
  int32_t dac2Fbk;
  int32_t dac2Gnd;
  int32_t dac2Ths;
  int32_t dac2BiasLvds;
  int32_t dac2RefLvds;
  int32_t dac3Ikrum;
  int32_t dac3Disc;
  int32_t dac3Preamp;
  int32_t dac3BufAnalogA;
  int32_t dac3BufAnalogB;
  int32_t dac3Hist;
  int32_t dac3ThlFine;
  int32_t dac3ThlCourse;
  int32_t dac3Vcas;
  int32_t dac3Fbk;
  int32_t dac3Gnd;
  int32_t dac3Ths;
  int32_t dac3BiasLvds;
  int32_t dac3RefLvds;
  int32_t driverVersion;
  uint32_t firmwareVersion;
  uint32_t pixelThreshSize;
  uint8_t pixelThresh[4*256*256];
  char* chip0Name;
  char* chip1Name;
  char* chip2Name;
  char* chip3Name;
  int32_t chip0ID;
  int32_t chip1ID;
  int32_t chip2ID;
  int32_t chip3ID;
  int32_t chipCount;


};
}


class ConfigV2_v0 : public Psana::Timepix::ConfigV2 {
public:
  typedef Psana::Timepix::ConfigV2 PsanaType;
  ConfigV2_v0() {}
  ConfigV2_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV2_v0(const boost::shared_ptr<Timepix::ns_ConfigV2_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV2_v0() {}
  virtual Psana::Timepix::ConfigV2::ReadoutSpeed readoutSpeed() const;
  virtual Psana::Timepix::ConfigV2::TriggerMode triggerMode() const;
  virtual int32_t timepixSpeed() const;
  virtual int32_t dac0Ikrum() const;
  virtual int32_t dac0Disc() const;
  virtual int32_t dac0Preamp() const;
  virtual int32_t dac0BufAnalogA() const;
  virtual int32_t dac0BufAnalogB() const;
  virtual int32_t dac0Hist() const;
  virtual int32_t dac0ThlFine() const;
  virtual int32_t dac0ThlCourse() const;
  virtual int32_t dac0Vcas() const;
  virtual int32_t dac0Fbk() const;
  virtual int32_t dac0Gnd() const;
  virtual int32_t dac0Ths() const;
  virtual int32_t dac0BiasLvds() const;
  virtual int32_t dac0RefLvds() const;
  virtual int32_t dac1Ikrum() const;
  virtual int32_t dac1Disc() const;
  virtual int32_t dac1Preamp() const;
  virtual int32_t dac1BufAnalogA() const;
  virtual int32_t dac1BufAnalogB() const;
  virtual int32_t dac1Hist() const;
  virtual int32_t dac1ThlFine() const;
  virtual int32_t dac1ThlCourse() const;
  virtual int32_t dac1Vcas() const;
  virtual int32_t dac1Fbk() const;
  virtual int32_t dac1Gnd() const;
  virtual int32_t dac1Ths() const;
  virtual int32_t dac1BiasLvds() const;
  virtual int32_t dac1RefLvds() const;
  virtual int32_t dac2Ikrum() const;
  virtual int32_t dac2Disc() const;
  virtual int32_t dac2Preamp() const;
  virtual int32_t dac2BufAnalogA() const;
  virtual int32_t dac2BufAnalogB() const;
  virtual int32_t dac2Hist() const;
  virtual int32_t dac2ThlFine() const;
  virtual int32_t dac2ThlCourse() const;
  virtual int32_t dac2Vcas() const;
  virtual int32_t dac2Fbk() const;
  virtual int32_t dac2Gnd() const;
  virtual int32_t dac2Ths() const;
  virtual int32_t dac2BiasLvds() const;
  virtual int32_t dac2RefLvds() const;
  virtual int32_t dac3Ikrum() const;
  virtual int32_t dac3Disc() const;
  virtual int32_t dac3Preamp() const;
  virtual int32_t dac3BufAnalogA() const;
  virtual int32_t dac3BufAnalogB() const;
  virtual int32_t dac3Hist() const;
  virtual int32_t dac3ThlFine() const;
  virtual int32_t dac3ThlCourse() const;
  virtual int32_t dac3Vcas() const;
  virtual int32_t dac3Fbk() const;
  virtual int32_t dac3Gnd() const;
  virtual int32_t dac3Ths() const;
  virtual int32_t dac3BiasLvds() const;
  virtual int32_t dac3RefLvds() const;
  virtual int32_t driverVersion() const;
  virtual uint32_t firmwareVersion() const;
  virtual uint32_t pixelThreshSize() const;
  virtual ndarray<const uint8_t, 1> pixelThresh() const;
  virtual const char* chip0Name() const;
  virtual const char* chip1Name() const;
  virtual const char* chip2Name() const;
  virtual const char* chip3Name() const;
  virtual int32_t chip0ID() const;
  virtual int32_t chip1ID() const;
  virtual int32_t chip2ID() const;
  virtual int32_t chip3ID() const;
  virtual int32_t chipCount() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Timepix::ns_ConfigV2_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Timepix::ConfigV2> > make_ConfigV2(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Timepix::ConfigV2& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Timepix::ConfigV2& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method
void append(const Psana::Timepix::ConfigV2& obj, hdf5pp::Group group, int version = -1);


namespace ns_ConfigV3_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::Timepix::ConfigV3& psanaobj);
  ~dataset_config();

  uint8_t readoutSpeed;
  uint8_t timepixMode;
  int32_t timepixSpeed;
  int32_t dac0Ikrum;
  int32_t dac0Disc;
  int32_t dac0Preamp;
  int32_t dac0BufAnalogA;
  int32_t dac0BufAnalogB;
  int32_t dac0Hist;
  int32_t dac0ThlFine;
  int32_t dac0ThlCourse;
  int32_t dac0Vcas;
  int32_t dac0Fbk;
  int32_t dac0Gnd;
  int32_t dac0Ths;
  int32_t dac0BiasLvds;
  int32_t dac0RefLvds;
  int32_t dac1Ikrum;
  int32_t dac1Disc;
  int32_t dac1Preamp;
  int32_t dac1BufAnalogA;
  int32_t dac1BufAnalogB;
  int32_t dac1Hist;
  int32_t dac1ThlFine;
  int32_t dac1ThlCourse;
  int32_t dac1Vcas;
  int32_t dac1Fbk;
  int32_t dac1Gnd;
  int32_t dac1Ths;
  int32_t dac1BiasLvds;
  int32_t dac1RefLvds;
  int32_t dac2Ikrum;
  int32_t dac2Disc;
  int32_t dac2Preamp;
  int32_t dac2BufAnalogA;
  int32_t dac2BufAnalogB;
  int32_t dac2Hist;
  int32_t dac2ThlFine;
  int32_t dac2ThlCourse;
  int32_t dac2Vcas;
  int32_t dac2Fbk;
  int32_t dac2Gnd;
  int32_t dac2Ths;
  int32_t dac2BiasLvds;
  int32_t dac2RefLvds;
  int32_t dac3Ikrum;
  int32_t dac3Disc;
  int32_t dac3Preamp;
  int32_t dac3BufAnalogA;
  int32_t dac3BufAnalogB;
  int32_t dac3Hist;
  int32_t dac3ThlFine;
  int32_t dac3ThlCourse;
  int32_t dac3Vcas;
  int32_t dac3Fbk;
  int32_t dac3Gnd;
  int32_t dac3Ths;
  int32_t dac3BiasLvds;
  int32_t dac3RefLvds;
  int8_t dacBias;
  int8_t flags;
  int32_t driverVersion;
  uint32_t firmwareVersion;
  uint32_t pixelThreshSize;
  uint8_t pixelThresh[4*256*256];
  char* chip0Name;
  char* chip1Name;
  char* chip2Name;
  char* chip3Name;
  int32_t chip0ID;
  int32_t chip1ID;
  int32_t chip2ID;
  int32_t chip3ID;
  int32_t chipCount;


};
}


class ConfigV3_v0 : public Psana::Timepix::ConfigV3 {
public:
  typedef Psana::Timepix::ConfigV3 PsanaType;
  ConfigV3_v0() {}
  ConfigV3_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  ConfigV3_v0(const boost::shared_ptr<Timepix::ns_ConfigV3_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~ConfigV3_v0() {}
  virtual Psana::Timepix::ConfigV3::ReadoutSpeed readoutSpeed() const;
  virtual Psana::Timepix::ConfigV3::TimepixMode timepixMode() const;
  virtual int32_t timepixSpeed() const;
  virtual int32_t dac0Ikrum() const;
  virtual int32_t dac0Disc() const;
  virtual int32_t dac0Preamp() const;
  virtual int32_t dac0BufAnalogA() const;
  virtual int32_t dac0BufAnalogB() const;
  virtual int32_t dac0Hist() const;
  virtual int32_t dac0ThlFine() const;
  virtual int32_t dac0ThlCourse() const;
  virtual int32_t dac0Vcas() const;
  virtual int32_t dac0Fbk() const;
  virtual int32_t dac0Gnd() const;
  virtual int32_t dac0Ths() const;
  virtual int32_t dac0BiasLvds() const;
  virtual int32_t dac0RefLvds() const;
  virtual int32_t dac1Ikrum() const;
  virtual int32_t dac1Disc() const;
  virtual int32_t dac1Preamp() const;
  virtual int32_t dac1BufAnalogA() const;
  virtual int32_t dac1BufAnalogB() const;
  virtual int32_t dac1Hist() const;
  virtual int32_t dac1ThlFine() const;
  virtual int32_t dac1ThlCourse() const;
  virtual int32_t dac1Vcas() const;
  virtual int32_t dac1Fbk() const;
  virtual int32_t dac1Gnd() const;
  virtual int32_t dac1Ths() const;
  virtual int32_t dac1BiasLvds() const;
  virtual int32_t dac1RefLvds() const;
  virtual int32_t dac2Ikrum() const;
  virtual int32_t dac2Disc() const;
  virtual int32_t dac2Preamp() const;
  virtual int32_t dac2BufAnalogA() const;
  virtual int32_t dac2BufAnalogB() const;
  virtual int32_t dac2Hist() const;
  virtual int32_t dac2ThlFine() const;
  virtual int32_t dac2ThlCourse() const;
  virtual int32_t dac2Vcas() const;
  virtual int32_t dac2Fbk() const;
  virtual int32_t dac2Gnd() const;
  virtual int32_t dac2Ths() const;
  virtual int32_t dac2BiasLvds() const;
  virtual int32_t dac2RefLvds() const;
  virtual int32_t dac3Ikrum() const;
  virtual int32_t dac3Disc() const;
  virtual int32_t dac3Preamp() const;
  virtual int32_t dac3BufAnalogA() const;
  virtual int32_t dac3BufAnalogB() const;
  virtual int32_t dac3Hist() const;
  virtual int32_t dac3ThlFine() const;
  virtual int32_t dac3ThlCourse() const;
  virtual int32_t dac3Vcas() const;
  virtual int32_t dac3Fbk() const;
  virtual int32_t dac3Gnd() const;
  virtual int32_t dac3Ths() const;
  virtual int32_t dac3BiasLvds() const;
  virtual int32_t dac3RefLvds() const;
  virtual int8_t dacBias() const;
  virtual int8_t flags() const;
  virtual int32_t driverVersion() const;
  virtual uint32_t firmwareVersion() const;
  virtual uint32_t pixelThreshSize() const;
  virtual ndarray<const uint8_t, 1> pixelThresh() const;
  virtual const char* chip0Name() const;
  virtual const char* chip1Name() const;
  virtual const char* chip2Name() const;
  virtual const char* chip3Name() const;
  virtual int32_t chip0ID() const;
  virtual int32_t chip1ID() const;
  virtual int32_t chip2ID() const;
  virtual int32_t chip3ID() const;
  virtual int32_t chipCount() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Timepix::ns_ConfigV3_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Timepix::ConfigV3> > make_ConfigV3(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Timepix::ConfigV3& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Timepix::ConfigV3& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method
void append(const Psana::Timepix::ConfigV3& obj, hdf5pp::Group group, int version = -1);


namespace ns_DataV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Timepix::DataV1& psanaobj);
  ~dataset_data();

  uint32_t timestamp;
  uint16_t frameCounter;
  uint16_t lostRows;


};
}


class DataV1_v0 : public Psana::Timepix::DataV1 {
public:
  typedef Psana::Timepix::DataV1 PsanaType;
  DataV1_v0() {}
  DataV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~DataV1_v0() {}
  virtual uint32_t timestamp() const;
  virtual uint16_t frameCounter() const;
  virtual uint16_t lostRows() const;
  virtual ndarray<const uint16_t, 2> data() const;
    uint32_t width() const { return Width; }
    uint32_t height() const { return Height; }
    uint32_t depth() const { return Depth; }
    uint32_t depth_bytes() const { return DepthBytes; }
  /** Size of the image data in bytes. */
  uint32_t data_size() const { return this->width() * this->height() * this->depth_bytes(); }
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Timepix::ns_DataV1_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
  mutable ndarray<const uint16_t, 2> m_ds_image;
  void read_ds_image() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Timepix::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Timepix::DataV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Timepix::DataV1& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method
void append(const Psana::Timepix::DataV1& obj, hdf5pp::Group group, int version = -1);


namespace ns_DataV2_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::Timepix::DataV2& psanaobj);
  ~dataset_data();

  uint16_t width;
  uint16_t height;
  uint32_t timestamp;
  uint16_t frameCounter;
  uint16_t lostRows;


};
}


class DataV2_v0 : public Psana::Timepix::DataV2 {
public:
  typedef Psana::Timepix::DataV2 PsanaType;
  DataV2_v0() {}
  DataV2_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~DataV2_v0() {}
  virtual uint16_t width() const;
  virtual uint16_t height() const;
  virtual uint32_t timestamp() const;
  virtual uint16_t frameCounter() const;
  virtual uint16_t lostRows() const;
  virtual ndarray<const uint16_t, 2> data() const;
    uint32_t depth() const { return Depth; }
    uint32_t depth_bytes() const { return (Depth+7)/8; }
  /** Size of the image data in bytes. */
  uint32_t data_size() const { return this->width() * this->height() * this->depth_bytes(); }
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Timepix::ns_DataV2_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
  mutable ndarray<const uint16_t, 2> m_ds_image;
  void read_ds_image() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Timepix::DataV2> > make_DataV2(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::Timepix::DataV2& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::Timepix::DataV2& obj, hdf5pp::Group group, hsize_t chunk_size,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method
void append(const Psana::Timepix::DataV2& obj, hdf5pp::Group group, int version = -1);

} // namespace Timepix
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_TIMEPIX_DDL_H
