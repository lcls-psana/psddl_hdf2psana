#ifndef PSDDL_HDF2PSANA_EVR_DDL_H
#define PSDDL_HDF2PSANA_EVR_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/evr.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
#include "pdsdata/xtc/DetInfo.hh"
namespace psddl_hdf2psana {
namespace EvrData {

namespace ns_PulseConfig_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::EvrData::PulseConfig& psanaobj);
  ~dataset_data();

  uint32_t pulse;
  uint32_t _input_control_value;
  uint32_t _output_control_value;
  uint8_t polarity;
  uint8_t map_set_enable;
  uint8_t map_reset_enable;
  uint8_t map_trigger_enable;
  uint32_t prescale;
  uint32_t delay;
  uint32_t width;
  int16_t trigger;
  int16_t set;
  int16_t clear;

  operator Psana::EvrData::PulseConfig() const { return Psana::EvrData::PulseConfig(pulse, trigger, set, clear, polarity, map_set_enable, map_reset_enable, map_trigger_enable, prescale, delay, width); }

};
}
class Proxy_PulseConfig_v0 : public PSEvt::Proxy<Psana::EvrData::PulseConfig> {
public:
  typedef Psana::EvrData::PulseConfig PsanaType;

  Proxy_PulseConfig_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_PulseConfig_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::PulseConfig> > make_PulseConfig(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::PulseConfig& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::PulseConfig& obj, hdf5pp::Group group, int version = -1);


namespace ns_PulseConfigV3_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::EvrData::PulseConfigV3& psanaobj);
  ~dataset_data();

  uint16_t pulseId;
  uint16_t polarity;
  uint32_t prescale;
  uint32_t delay;
  uint32_t width;

  operator Psana::EvrData::PulseConfigV3() const { return Psana::EvrData::PulseConfigV3(pulseId, polarity, prescale, delay, width); }

};
}
class Proxy_PulseConfigV3_v0 : public PSEvt::Proxy<Psana::EvrData::PulseConfigV3> {
public:
  typedef Psana::EvrData::PulseConfigV3 PsanaType;

  Proxy_PulseConfigV3_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_PulseConfigV3_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::PulseConfigV3> > make_PulseConfigV3(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::PulseConfigV3& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::PulseConfigV3& obj, hdf5pp::Group group, int version = -1);


namespace ns_EventCodeV3_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::EvrData::EventCodeV3& psanaobj);
  ~dataset_data();

  uint16_t code;
  uint16_t _u16MaskEventAttr_value;
  uint8_t isReadout;
  uint8_t isTerminator;
  uint32_t maskTrigger;
  uint32_t maskSet;
  uint32_t maskClear;

  operator Psana::EvrData::EventCodeV3() const { return Psana::EvrData::EventCodeV3(code, isReadout, isTerminator, maskTrigger, maskSet, maskClear); }

};
}
class Proxy_EventCodeV3_v0 : public PSEvt::Proxy<Psana::EvrData::EventCodeV3> {
public:
  typedef Psana::EvrData::EventCodeV3 PsanaType;

  Proxy_EventCodeV3_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_EventCodeV3_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::EventCodeV3> > make_EventCodeV3(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::EventCodeV3& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::EventCodeV3& obj, hdf5pp::Group group, int version = -1);


namespace ns_EventCodeV4_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::EvrData::EventCodeV4& psanaobj);
  ~dataset_data();

  uint16_t code;
  uint16_t _u16MaskEventAttr_value;
  uint8_t isReadout;
  uint8_t isTerminator;
  uint32_t reportDelay;
  uint32_t reportWidth;
  uint32_t maskTrigger;
  uint32_t maskSet;
  uint32_t maskClear;

  operator Psana::EvrData::EventCodeV4() const { return Psana::EvrData::EventCodeV4(code, isReadout, isTerminator, reportDelay, reportWidth, maskTrigger, maskSet, maskClear); }

};
}
class Proxy_EventCodeV4_v0 : public PSEvt::Proxy<Psana::EvrData::EventCodeV4> {
public:
  typedef Psana::EvrData::EventCodeV4 PsanaType;

  Proxy_EventCodeV4_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_EventCodeV4_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::EventCodeV4> > make_EventCodeV4(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::EventCodeV4& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::EventCodeV4& obj, hdf5pp::Group group, int version = -1);


namespace ns_EventCodeV5_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::EvrData::EventCodeV5& psanaobj);
  ~dataset_data();

  uint16_t code;
  uint8_t isReadout;
  uint8_t isCommand;
  uint8_t isLatch;
  uint32_t reportDelay;
  uint32_t reportWidth;
  uint32_t maskTrigger;
  uint32_t maskSet;
  uint32_t maskClear;
  char* desc;

  operator Psana::EvrData::EventCodeV5() const { return Psana::EvrData::EventCodeV5(code, isReadout, isCommand, isLatch, reportDelay, reportWidth, maskTrigger, maskSet, maskClear, desc); }

};
}
class Proxy_EventCodeV5_v0 : public PSEvt::Proxy<Psana::EvrData::EventCodeV5> {
public:
  typedef Psana::EvrData::EventCodeV5 PsanaType;

  Proxy_EventCodeV5_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_EventCodeV5_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::EventCodeV5> > make_EventCodeV5(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::EventCodeV5& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::EventCodeV5& obj, hdf5pp::Group group, int version = -1);


namespace ns_EventCodeV6_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::EvrData::EventCodeV6& psanaobj);
  ~dataset_data();

  uint16_t code;
  uint8_t isReadout;
  uint8_t isCommand;
  uint8_t isLatch;
  uint32_t reportDelay;
  uint32_t reportWidth;
  uint32_t maskTrigger;
  uint32_t maskSet;
  uint32_t maskClear;
  char* desc;
  uint16_t readoutGroup;

  operator Psana::EvrData::EventCodeV6() const { return Psana::EvrData::EventCodeV6(code, isReadout, isCommand, isLatch, reportDelay, reportWidth, maskTrigger, maskSet, maskClear, desc, readoutGroup); }

};
}
class Proxy_EventCodeV6_v0 : public PSEvt::Proxy<Psana::EvrData::EventCodeV6> {
public:
  typedef Psana::EvrData::EventCodeV6 PsanaType;

  Proxy_EventCodeV6_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_EventCodeV6_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::EventCodeV6> > make_EventCodeV6(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::EventCodeV6& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::EventCodeV6& obj, hdf5pp::Group group, int version = -1);


namespace ns_OutputMap_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::EvrData::OutputMap& psanaobj);
  ~dataset_data();

  uint32_t value;
  int16_t source;
  uint8_t source_id;
  int16_t conn;
  uint8_t conn_id;

  operator Psana::EvrData::OutputMap() const { return Psana::EvrData::OutputMap(Psana::EvrData::OutputMap::Source(source), source_id, Psana::EvrData::OutputMap::Conn(conn), conn_id); }

};
}
class Proxy_OutputMap_v0 : public PSEvt::Proxy<Psana::EvrData::OutputMap> {
public:
  typedef Psana::EvrData::OutputMap PsanaType;

  Proxy_OutputMap_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_OutputMap_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::OutputMap> > make_OutputMap(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::OutputMap& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::OutputMap& obj, hdf5pp::Group group, int version = -1);


namespace ns_OutputMapV2_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::EvrData::OutputMapV2& psanaobj);
  ~dataset_data();

  uint32_t value;
  int16_t source;
  uint8_t source_id;
  int16_t conn;
  uint8_t conn_id;
  uint8_t module;

  operator Psana::EvrData::OutputMapV2() const { return Psana::EvrData::OutputMapV2(Psana::EvrData::OutputMapV2::Source(source), source_id, Psana::EvrData::OutputMapV2::Conn(conn), conn_id, module); }

};
}
class Proxy_OutputMapV2_v0 : public PSEvt::Proxy<Psana::EvrData::OutputMapV2> {
public:
  typedef Psana::EvrData::OutputMapV2 PsanaType;

  Proxy_OutputMapV2_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_OutputMapV2_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::OutputMapV2> > make_OutputMapV2(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::OutputMapV2& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::OutputMapV2& obj, hdf5pp::Group group, int version = -1);


namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::EvrData::ConfigV1& psanaobj);
  ~dataset_config();

  uint32_t npulses;
  uint32_t noutputs;


};
}


class ConfigV1_v0 : public Psana::EvrData::ConfigV1 {
public:
  typedef Psana::EvrData::ConfigV1 PsanaType;
  ConfigV1_v0() {}
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~ConfigV1_v0() {}
  virtual uint32_t npulses() const;
  virtual uint32_t noutputs() const;
  virtual ndarray<const Psana::EvrData::PulseConfig, 1> pulses() const;
  virtual ndarray<const Psana::EvrData::OutputMap, 1> output_maps() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<EvrData::ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable ndarray<const Psana::EvrData::PulseConfig, 1> m_ds_pulses;
  void read_ds_pulses() const;
  mutable ndarray<const Psana::EvrData::OutputMap, 1> m_ds_output_maps;
  void read_ds_output_maps() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::ConfigV1& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::ConfigV1& obj, hdf5pp::Group group, int version = -1);


namespace ns_ConfigV2_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::EvrData::ConfigV2& psanaobj);
  ~dataset_config();

  uint32_t opcode;
  uint32_t npulses;
  uint32_t noutputs;
  int16_t beam;
  int16_t rate;


};
}


class ConfigV2_v0 : public Psana::EvrData::ConfigV2 {
public:
  typedef Psana::EvrData::ConfigV2 PsanaType;
  ConfigV2_v0() {}
  ConfigV2_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~ConfigV2_v0() {}
  virtual uint32_t opcode() const;
  virtual uint32_t npulses() const;
  virtual uint32_t noutputs() const;
  virtual ndarray<const Psana::EvrData::PulseConfig, 1> pulses() const;
  virtual ndarray<const Psana::EvrData::OutputMap, 1> output_maps() const;
  virtual Psana::EvrData::ConfigV2::BeamCode beam() const;
  virtual Psana::EvrData::ConfigV2::RateCode rate() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<EvrData::ns_ConfigV2_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable ndarray<const Psana::EvrData::PulseConfig, 1> m_ds_pulses;
  void read_ds_pulses() const;
  mutable ndarray<const Psana::EvrData::OutputMap, 1> m_ds_output_maps;
  void read_ds_output_maps() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::ConfigV2> > make_ConfigV2(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::ConfigV2& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::ConfigV2& obj, hdf5pp::Group group, int version = -1);


namespace ns_ConfigV3_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::EvrData::ConfigV3& psanaobj);
  ~dataset_config();

  uint32_t neventcodes;
  uint32_t npulses;
  uint32_t noutputs;


};
}


class ConfigV3_v0 : public Psana::EvrData::ConfigV3 {
public:
  typedef Psana::EvrData::ConfigV3 PsanaType;
  ConfigV3_v0() {}
  ConfigV3_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~ConfigV3_v0() {}
  virtual uint32_t neventcodes() const;
  virtual uint32_t npulses() const;
  virtual uint32_t noutputs() const;
  virtual ndarray<const Psana::EvrData::EventCodeV3, 1> eventcodes() const;
  virtual ndarray<const Psana::EvrData::PulseConfigV3, 1> pulses() const;
  virtual ndarray<const Psana::EvrData::OutputMap, 1> output_maps() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<EvrData::ns_ConfigV3_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable ndarray<const Psana::EvrData::EventCodeV3, 1> m_ds_eventcodes;
  void read_ds_eventcodes() const;
  mutable ndarray<const Psana::EvrData::PulseConfigV3, 1> m_ds_pulses;
  void read_ds_pulses() const;
  mutable ndarray<const Psana::EvrData::OutputMap, 1> m_ds_output_maps;
  void read_ds_output_maps() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::ConfigV3> > make_ConfigV3(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::ConfigV3& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::ConfigV3& obj, hdf5pp::Group group, int version = -1);


namespace ns_ConfigV4_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::EvrData::ConfigV4& psanaobj);
  ~dataset_config();

  uint32_t neventcodes;
  uint32_t npulses;
  uint32_t noutputs;


};
}


class ConfigV4_v0 : public Psana::EvrData::ConfigV4 {
public:
  typedef Psana::EvrData::ConfigV4 PsanaType;
  ConfigV4_v0() {}
  ConfigV4_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~ConfigV4_v0() {}
  virtual uint32_t neventcodes() const;
  virtual uint32_t npulses() const;
  virtual uint32_t noutputs() const;
  virtual ndarray<const Psana::EvrData::EventCodeV4, 1> eventcodes() const;
  virtual ndarray<const Psana::EvrData::PulseConfigV3, 1> pulses() const;
  virtual ndarray<const Psana::EvrData::OutputMap, 1> output_maps() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<EvrData::ns_ConfigV4_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable ndarray<const Psana::EvrData::EventCodeV4, 1> m_ds_eventcodes;
  void read_ds_eventcodes() const;
  mutable ndarray<const Psana::EvrData::PulseConfigV3, 1> m_ds_pulses;
  void read_ds_pulses() const;
  mutable ndarray<const Psana::EvrData::OutputMap, 1> m_ds_output_maps;
  void read_ds_output_maps() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::ConfigV4> > make_ConfigV4(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::ConfigV4& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::ConfigV4& obj, hdf5pp::Group group, int version = -1);


namespace ns_SequencerEntry_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::EvrData::SequencerEntry& psanaobj);
  ~dataset_data();

  uint32_t delay;
  uint32_t eventcode;

  operator Psana::EvrData::SequencerEntry() const { return Psana::EvrData::SequencerEntry(eventcode, delay); }

};
}
class Proxy_SequencerEntry_v0 : public PSEvt::Proxy<Psana::EvrData::SequencerEntry> {
public:
  typedef Psana::EvrData::SequencerEntry PsanaType;

  Proxy_SequencerEntry_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_SequencerEntry_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::SequencerEntry> > make_SequencerEntry(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::SequencerEntry& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::SequencerEntry& obj, hdf5pp::Group group, int version = -1);


namespace ns_SequencerConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::EvrData::SequencerConfigV1& psanaobj);
  ~dataset_config();

  int32_t sync_source;
  int32_t beam_source;
  uint32_t length;
  uint32_t cycles;
  size_t vlen_entries;
  EvrData::ns_SequencerEntry_v0::dataset_data* entries;


private:
  dataset_config(const dataset_config&);
  dataset_config& operator=(const dataset_config&);
};
}


class SequencerConfigV1_v0 : public Psana::EvrData::SequencerConfigV1 {
public:
  typedef Psana::EvrData::SequencerConfigV1 PsanaType;
  SequencerConfigV1_v0() {}
  SequencerConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  SequencerConfigV1_v0(const boost::shared_ptr<EvrData::ns_SequencerConfigV1_v0::dataset_config>& ds) : m_ds_config(ds) {}
  virtual ~SequencerConfigV1_v0() {}
  virtual Psana::EvrData::SequencerConfigV1::Source sync_source() const;
  virtual Psana::EvrData::SequencerConfigV1::Source beam_source() const;
  virtual uint32_t length() const;
  virtual uint32_t cycles() const;
  virtual ndarray<const Psana::EvrData::SequencerEntry, 1> entries() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<EvrData::ns_SequencerConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable ndarray<const Psana::EvrData::SequencerEntry, 1> m_ds_storage_config_entries;
};


namespace ns_ConfigV5_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::EvrData::ConfigV5& psanaobj);
  ~dataset_config();

  uint32_t neventcodes;
  uint32_t npulses;
  uint32_t noutputs;


};
}


class ConfigV5_v0 : public Psana::EvrData::ConfigV5 {
public:
  typedef Psana::EvrData::ConfigV5 PsanaType;
  ConfigV5_v0() {}
  ConfigV5_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~ConfigV5_v0() {}
  virtual uint32_t neventcodes() const;
  virtual uint32_t npulses() const;
  virtual uint32_t noutputs() const;
  virtual ndarray<const Psana::EvrData::EventCodeV5, 1> eventcodes() const;
  virtual ndarray<const Psana::EvrData::PulseConfigV3, 1> pulses() const;
  virtual ndarray<const Psana::EvrData::OutputMap, 1> output_maps() const;
  virtual const Psana::EvrData::SequencerConfigV1& seq_config() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<EvrData::ns_ConfigV5_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable ndarray<const Psana::EvrData::EventCodeV5, 1> m_ds_eventcodes;
  void read_ds_eventcodes() const;
  mutable ndarray<const Psana::EvrData::PulseConfigV3, 1> m_ds_pulses;
  void read_ds_pulses() const;
  mutable ndarray<const Psana::EvrData::OutputMap, 1> m_ds_output_maps;
  void read_ds_output_maps() const;
  mutable boost::shared_ptr<EvrData::ns_SequencerConfigV1_v0::dataset_config> m_ds_seq_config;
  void read_ds_seq_config() const;
  mutable boost::shared_ptr<SequencerConfigV1_v0> m_ds_storage_seq_config;
};

boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::ConfigV5> > make_ConfigV5(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::ConfigV5& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::ConfigV5& obj, hdf5pp::Group group, int version = -1);


namespace ns_ConfigV6_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::EvrData::ConfigV6& psanaobj);
  ~dataset_config();

  uint32_t neventcodes;
  uint32_t npulses;
  uint32_t noutputs;


};
}


class ConfigV6_v0 : public Psana::EvrData::ConfigV6 {
public:
  typedef Psana::EvrData::ConfigV6 PsanaType;
  ConfigV6_v0() {}
  ConfigV6_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~ConfigV6_v0() {}
  virtual uint32_t neventcodes() const;
  virtual uint32_t npulses() const;
  virtual uint32_t noutputs() const;
  virtual ndarray<const Psana::EvrData::EventCodeV5, 1> eventcodes() const;
  virtual ndarray<const Psana::EvrData::PulseConfigV3, 1> pulses() const;
  virtual ndarray<const Psana::EvrData::OutputMapV2, 1> output_maps() const;
  virtual const Psana::EvrData::SequencerConfigV1& seq_config() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<EvrData::ns_ConfigV6_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable ndarray<const Psana::EvrData::EventCodeV5, 1> m_ds_eventcodes;
  void read_ds_eventcodes() const;
  mutable ndarray<const Psana::EvrData::PulseConfigV3, 1> m_ds_pulses;
  void read_ds_pulses() const;
  mutable ndarray<const Psana::EvrData::OutputMapV2, 1> m_ds_output_maps;
  void read_ds_output_maps() const;
  mutable boost::shared_ptr<EvrData::ns_SequencerConfigV1_v0::dataset_config> m_ds_seq_config;
  void read_ds_seq_config() const;
  mutable boost::shared_ptr<SequencerConfigV1_v0> m_ds_storage_seq_config;
};

boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::ConfigV6> > make_ConfigV6(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::ConfigV6& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::ConfigV6& obj, hdf5pp::Group group, int version = -1);


namespace ns_ConfigV7_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::EvrData::ConfigV7& psanaobj);
  ~dataset_config();

  uint32_t neventcodes;
  uint32_t npulses;
  uint32_t noutputs;


};
}


class ConfigV7_v0 : public Psana::EvrData::ConfigV7 {
public:
  typedef Psana::EvrData::ConfigV7 PsanaType;
  ConfigV7_v0() {}
  ConfigV7_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~ConfigV7_v0() {}
  virtual uint32_t neventcodes() const;
  virtual uint32_t npulses() const;
  virtual uint32_t noutputs() const;
  virtual ndarray<const Psana::EvrData::EventCodeV6, 1> eventcodes() const;
  virtual ndarray<const Psana::EvrData::PulseConfigV3, 1> pulses() const;
  virtual ndarray<const Psana::EvrData::OutputMapV2, 1> output_maps() const;
  virtual const Psana::EvrData::SequencerConfigV1& seq_config() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<EvrData::ns_ConfigV7_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable ndarray<const Psana::EvrData::EventCodeV6, 1> m_ds_eventcodes;
  void read_ds_eventcodes() const;
  mutable ndarray<const Psana::EvrData::PulseConfigV3, 1> m_ds_pulses;
  void read_ds_pulses() const;
  mutable ndarray<const Psana::EvrData::OutputMapV2, 1> m_ds_output_maps;
  void read_ds_output_maps() const;
  mutable boost::shared_ptr<EvrData::ns_SequencerConfigV1_v0::dataset_config> m_ds_seq_config;
  void read_ds_seq_config() const;
  mutable boost::shared_ptr<SequencerConfigV1_v0> m_ds_storage_seq_config;
};

boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::ConfigV7> > make_ConfigV7(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::ConfigV7& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::ConfigV7& obj, hdf5pp::Group group, int version = -1);


namespace ns_FIFOEvent_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::EvrData::FIFOEvent& psanaobj);
  ~dataset_data();

  uint32_t timestampHigh;
  uint32_t timestampLow;
  uint32_t eventCode;

  operator Psana::EvrData::FIFOEvent() const { return Psana::EvrData::FIFOEvent(timestampHigh, timestampLow, eventCode); }

};
}
class Proxy_FIFOEvent_v0 : public PSEvt::Proxy<Psana::EvrData::FIFOEvent> {
public:
  typedef Psana::EvrData::FIFOEvent PsanaType;

  Proxy_FIFOEvent_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_FIFOEvent_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::FIFOEvent> > make_FIFOEvent(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::FIFOEvent& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::FIFOEvent& obj, hdf5pp::Group group, int version = -1);

boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::DataV3> > make_DataV3(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::DataV3& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::DataV3& obj, hdf5pp::Group group, int version = -1);

boost::shared_ptr<PSEvt::Proxy<Psana::EvrData::IOConfigV1> > make_IOConfigV1(int version, hdf5pp::Group group, hsize_t idx);

void store(const Psana::EvrData::IOConfigV1& obj, hdf5pp::Group group, int version = -1);
void append(const Psana::EvrData::IOConfigV1& obj, hdf5pp::Group group, int version = -1);

} // namespace EvrData
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_EVR_DDL_H
