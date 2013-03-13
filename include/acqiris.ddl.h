#ifndef PSDDL_HDF2PSANA_ACQIRIS_DDL_H
#define PSDDL_HDF2PSANA_ACQIRIS_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/acqiris.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
namespace psddl_hdf2psana {
namespace Acqiris {

namespace ns_VertV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  double fullScale; 
  double offset; 
  uint32_t coupling; 
  uint32_t bandwidth; 

  operator Psana::Acqiris::VertV1() const { return Psana::Acqiris::VertV1(fullScale, offset, coupling, bandwidth); }
};
}
class Proxy_VertV1_v0 : public PSEvt::Proxy<Psana::Acqiris::VertV1> {
public:
  typedef Psana::Acqiris::VertV1 PsanaType;

  Proxy_VertV1_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_VertV1_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::VertV1> > make_VertV1(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_HorizV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  double sampInterval; 
  double delayTime; 
  uint32_t nbrSamples; 
  uint32_t nbrSegments; 

  operator Psana::Acqiris::HorizV1() const { return Psana::Acqiris::HorizV1(sampInterval, delayTime, nbrSamples, nbrSegments); }
};
}
class Proxy_HorizV1_v0 : public PSEvt::Proxy<Psana::Acqiris::HorizV1> {
public:
  typedef Psana::Acqiris::HorizV1 PsanaType;

  Proxy_HorizV1_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_HorizV1_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::HorizV1> > make_HorizV1(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_TrigV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  uint32_t coupling; 
  uint32_t input; 
  uint32_t slope; 
  double level; 

  operator Psana::Acqiris::TrigV1() const { return Psana::Acqiris::TrigV1(coupling, input, slope, level); }
};
}
class Proxy_TrigV1_v0 : public PSEvt::Proxy<Psana::Acqiris::TrigV1> {
public:
  typedef Psana::Acqiris::TrigV1 PsanaType;

  Proxy_TrigV1_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_TrigV1_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::TrigV1> > make_TrigV1(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  ~dataset_config();

  uint32_t nbrConvertersPerChannel; 
  uint32_t channelMask; 
  uint32_t nbrBanks; 
  uint32_t nbrChannels; 

};
}

namespace ns_ConfigV1_v0 {
struct dataset_horiz {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_horiz();
  ~dataset_horiz();

  Acqiris::ns_HorizV1_v0::dataset_data horiz; 

};
}

namespace ns_ConfigV1_v0 {
struct dataset_trig {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_trig();
  ~dataset_trig();

  Acqiris::ns_TrigV1_v0::dataset_data trig; 

};
}

namespace ns_ConfigV1_v0 {
struct dataset_vert {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_vert();
  ~dataset_vert();

  Acqiris::ns_VertV1_v0::dataset_data vert[20]; 

};
}


class ConfigV1_v0 : public Psana::Acqiris::ConfigV1 {
public:
  typedef Psana::Acqiris::ConfigV1 PsanaType;
  ConfigV1_v0() {}
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~ConfigV1_v0() {}
  virtual uint32_t nbrConvertersPerChannel() const;
  virtual uint32_t channelMask() const;
  virtual uint32_t nbrBanks() const;
  virtual const Psana::Acqiris::TrigV1& trig() const;
  virtual const Psana::Acqiris::HorizV1& horiz() const;
  virtual ndarray<const Psana::Acqiris::VertV1, 1> vert() const;
  virtual uint32_t nbrChannels() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Acqiris::ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable boost::shared_ptr<Acqiris::ns_ConfigV1_v0::dataset_horiz> m_ds_horiz;
  void read_ds_horiz() const;
  mutable Psana::Acqiris::HorizV1 m_ds_storage_horiz_horiz;
  mutable boost::shared_ptr<Acqiris::ns_ConfigV1_v0::dataset_trig> m_ds_trig;
  void read_ds_trig() const;
  mutable Psana::Acqiris::TrigV1 m_ds_storage_trig_trig;
  mutable boost::shared_ptr<Acqiris::ns_ConfigV1_v0::dataset_vert> m_ds_vert;
  void read_ds_vert() const;
  mutable ndarray<const Psana::Acqiris::VertV1, 1> m_ds_storage_vert_vert;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_TimestampV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  double pos; 
  uint32_t timeStampLo; 
  uint32_t timeStampHi; 

  operator Psana::Acqiris::TimestampV1() const { return Psana::Acqiris::TimestampV1(pos, timeStampLo, timeStampHi); }
};
}
class Proxy_TimestampV1_v0 : public PSEvt::Proxy<Psana::Acqiris::TimestampV1> {
public:
  typedef Psana::Acqiris::TimestampV1 PsanaType;

  Proxy_TimestampV1_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_TimestampV1_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::DataDescV1> > make_DataDescV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::Acqiris::ConfigV1>& cfg);

namespace ns_TdcChannel_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  uint32_t _channel_int; 
  uint32_t _mode_int; 
  int32_t slope; 
  int32_t mode; 
  double level; 
  int32_t channel; 

  operator Psana::Acqiris::TdcChannel() const { return Psana::Acqiris::TdcChannel(_channel_int, Psana::Acqiris::TdcChannel::Slope(slope), Psana::Acqiris::TdcChannel::Mode(mode), level); }
};
}
class Proxy_TdcChannel_v0 : public PSEvt::Proxy<Psana::Acqiris::TdcChannel> {
public:
  typedef Psana::Acqiris::TdcChannel PsanaType;

  Proxy_TdcChannel_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_TdcChannel_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::TdcChannel> > make_TdcChannel(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_TdcAuxIO_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  uint32_t channel_int; 
  uint32_t signal_int; 
  uint32_t qualifier_int; 
  int32_t channel; 
  int32_t mode; 
  int32_t term; 

  operator Psana::Acqiris::TdcAuxIO() const { return Psana::Acqiris::TdcAuxIO(channel_int, signal_int, qualifier_int); }
};
}
class Proxy_TdcAuxIO_v0 : public PSEvt::Proxy<Psana::Acqiris::TdcAuxIO> {
public:
  typedef Psana::Acqiris::TdcAuxIO PsanaType;

  Proxy_TdcAuxIO_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_TdcAuxIO_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::TdcAuxIO> > make_TdcAuxIO(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_TdcVetoIO_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  uint32_t signal_int; 
  uint32_t qualifier_int; 
  int32_t channel; 
  int32_t mode; 
  int32_t term; 

  operator Psana::Acqiris::TdcVetoIO() const { return Psana::Acqiris::TdcVetoIO(signal_int, qualifier_int); }
};
}
class Proxy_TdcVetoIO_v0 : public PSEvt::Proxy<Psana::Acqiris::TdcVetoIO> {
public:
  typedef Psana::Acqiris::TdcVetoIO PsanaType;

  Proxy_TdcVetoIO_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_TdcVetoIO_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::TdcVetoIO> > make_TdcVetoIO(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_TdcConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  ~dataset_config();

  Acqiris::ns_TdcVetoIO_v0::dataset_data veto; 

};
}

namespace ns_TdcConfigV1_v0 {
struct dataset_channels {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_channels();
  ~dataset_channels();

  Acqiris::ns_TdcChannel_v0::dataset_data channels[8]; 

};
}

namespace ns_TdcConfigV1_v0 {
struct dataset_auxio {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_auxio();
  ~dataset_auxio();

  Acqiris::ns_TdcAuxIO_v0::dataset_data auxio[2]; 

};
}


class TdcConfigV1_v0 : public Psana::Acqiris::TdcConfigV1 {
public:
  typedef Psana::Acqiris::TdcConfigV1 PsanaType;
  TdcConfigV1_v0() {}
  TdcConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~TdcConfigV1_v0() {}
  virtual ndarray<const Psana::Acqiris::TdcChannel, 1> channels() const;
  virtual ndarray<const Psana::Acqiris::TdcAuxIO, 1> auxio() const;
  virtual const Psana::Acqiris::TdcVetoIO& veto() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Acqiris::ns_TdcConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable Psana::Acqiris::TdcVetoIO m_ds_storage_config_veto;
  mutable boost::shared_ptr<Acqiris::ns_TdcConfigV1_v0::dataset_channels> m_ds_channels;
  void read_ds_channels() const;
  mutable ndarray<const Psana::Acqiris::TdcChannel, 1> m_ds_storage_channels_channels;
  mutable boost::shared_ptr<Acqiris::ns_TdcConfigV1_v0::dataset_auxio> m_ds_auxio;
  void read_ds_auxio() const;
  mutable ndarray<const Psana::Acqiris::TdcAuxIO, 1> m_ds_storage_auxio_auxio;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::TdcConfigV1> > make_TdcConfigV1(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_TdcDataV1_Item_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  int32_t source; 
  uint8_t overflow; 
  uint32_t value; 

  operator Psana::Acqiris::TdcDataV1_Item() const { return Psana::Acqiris::TdcDataV1_Item(value, Psana::Acqiris::TdcDataV1_Item::Source(source), overflow); }
};
}
class Proxy_TdcDataV1_Item_v0 : public PSEvt::Proxy<Psana::Acqiris::TdcDataV1_Item> {
public:
  typedef Psana::Acqiris::TdcDataV1_Item PsanaType;

  Proxy_TdcDataV1_Item_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_TdcDataV1_Item_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::TdcDataV1_Item> > make_TdcDataV1_Item(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_TdcDataV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  size_t vlen_data;
  Acqiris::ns_TdcDataV1_Item_v0::dataset_data* data; 

};
}


class TdcDataV1_v0 : public Psana::Acqiris::TdcDataV1 {
public:
  typedef Psana::Acqiris::TdcDataV1 PsanaType;
  TdcDataV1_v0() {}
  TdcDataV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  TdcDataV1_v0(const boost::shared_ptr<Acqiris::ns_TdcDataV1_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~TdcDataV1_v0() {}
  virtual ndarray<const Psana::Acqiris::TdcDataV1_Item, 1> data() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Acqiris::ns_TdcDataV1_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
  mutable ndarray<const Psana::Acqiris::TdcDataV1_Item, 1> m_ds_storage_data_data;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Acqiris::TdcDataV1> > make_TdcDataV1(int version, hdf5pp::Group group, hsize_t idx);
} // namespace Acqiris
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_ACQIRIS_DDL_H
