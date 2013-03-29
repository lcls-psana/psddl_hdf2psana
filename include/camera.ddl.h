#ifndef PSDDL_HDF2PSANA_CAMERA_DDL_H
#define PSDDL_HDF2PSANA_CAMERA_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/camera.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
namespace psddl_hdf2psana {
namespace Camera {

namespace ns_FrameCoord_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  uint16_t column; 
  uint16_t row; 

  operator Psana::Camera::FrameCoord() const { return Psana::Camera::FrameCoord(column, row); }
};
}
class Proxy_FrameCoord_v0 : public PSEvt::Proxy<Psana::Camera::FrameCoord> {
public:
  typedef Psana::Camera::FrameCoord PsanaType;

  Proxy_FrameCoord_v0(hdf5pp::Group group, hsize_t idx) : m_group(group), m_idx(idx) {}
  virtual ~Proxy_FrameCoord_v0() {}

protected:

  virtual boost::shared_ptr<PsanaType> getTypedImpl(PSEvt::ProxyDictI* dict, const Pds::Src& source, const std::string& key);

private:

  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<PsanaType> m_data;
};
boost::shared_ptr<PSEvt::Proxy<Psana::Camera::FrameCoord> > make_FrameCoord(int version, hdf5pp::Group group, hsize_t idx);


class FrameFccdConfigV1_v0 : public Psana::Camera::FrameFccdConfigV1 {
public:
  typedef Psana::Camera::FrameFccdConfigV1 PsanaType;
  FrameFccdConfigV1_v0() {}
  FrameFccdConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~FrameFccdConfigV1_v0() {}
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Camera::FrameFccdConfigV1> > make_FrameFccdConfigV1(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_FrameFexConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  ~dataset_config();

  uint32_t forwarding; 
  uint32_t forward_prescale; 
  uint32_t processing; 
  Camera::ns_FrameCoord_v0::dataset_data roiBegin; 
  Camera::ns_FrameCoord_v0::dataset_data roiEnd; 
  uint32_t threshold; 
  uint32_t number_of_masked_pixels; 

};
}


class FrameFexConfigV1_v0 : public Psana::Camera::FrameFexConfigV1 {
public:
  typedef Psana::Camera::FrameFexConfigV1 PsanaType;
  FrameFexConfigV1_v0() {}
  FrameFexConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~FrameFexConfigV1_v0() {}
  virtual Psana::Camera::FrameFexConfigV1::Forwarding forwarding() const;
  virtual uint32_t forward_prescale() const;
  virtual Psana::Camera::FrameFexConfigV1::Processing processing() const;
  virtual const Psana::Camera::FrameCoord& roiBegin() const;
  virtual const Psana::Camera::FrameCoord& roiEnd() const;
  virtual uint32_t threshold() const;
  virtual uint32_t number_of_masked_pixels() const;
  virtual ndarray<const Psana::Camera::FrameCoord, 1> masked_pixel_coordinates() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Camera::ns_FrameFexConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable Psana::Camera::FrameCoord m_ds_storage_config_roiBegin;
  mutable Psana::Camera::FrameCoord m_ds_storage_config_roiEnd;
  mutable ndarray<const Psana::Camera::FrameCoord, 1> m_ds_masked_pixel_coordinates;
  void read_ds_masked_pixel_coordinates() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Camera::FrameFexConfigV1> > make_FrameFexConfigV1(int version, hdf5pp::Group group, hsize_t idx);
boost::shared_ptr<PSEvt::Proxy<Psana::Camera::FrameV1> > make_FrameV1(int version, hdf5pp::Group group, hsize_t idx);

namespace ns_TwoDGaussianV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  ~dataset_data();

  uint64_t integral; 
  double xmean; 
  double ymean; 
  double major_axis_width; 
  double minor_axis_width; 
  double major_axis_tilt; 

};
}


class TwoDGaussianV1_v0 : public Psana::Camera::TwoDGaussianV1 {
public:
  typedef Psana::Camera::TwoDGaussianV1 PsanaType;
  TwoDGaussianV1_v0() {}
  TwoDGaussianV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  TwoDGaussianV1_v0(const boost::shared_ptr<Camera::ns_TwoDGaussianV1_v0::dataset_data>& ds) : m_ds_data(ds) {}
  virtual ~TwoDGaussianV1_v0() {}
  virtual uint64_t integral() const;
  virtual double xmean() const;
  virtual double ymean() const;
  virtual double major_axis_width() const;
  virtual double minor_axis_width() const;
  virtual double major_axis_tilt() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<Camera::ns_TwoDGaussianV1_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::Camera::TwoDGaussianV1> > make_TwoDGaussianV1(int version, hdf5pp::Group group, hsize_t idx);
} // namespace Camera
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_CAMERA_DDL_H
