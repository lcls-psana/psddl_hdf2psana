#ifndef PSDDL_HDF2PSANA_TIMETOOL_DDL_H
#define PSDDL_HDF2PSANA_TIMETOOL_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include "psddl_psana/timetool.ddl.h"
#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"
#include "PSEvt/Proxy.h"
#include "psddl_hdf2psana/ChunkPolicy.h"
#include "psddl_hdf2psana/camera.ddl.h"
#include "pdsdata/xtc/Src.hh"
namespace psddl_hdf2psana {
namespace TimeTool {

namespace ns_EventLogic_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::TimeTool::EventLogic& psanaobj);
  ~dataset_data();

  uint8_t event_code;
  uint8_t logic_op;

  operator Psana::TimeTool::EventLogic() const { return Psana::TimeTool::EventLogic(event_code, Psana::TimeTool::EventLogic::LogicOp(logic_op)); }

};
}

namespace ns_ConfigV1_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::TimeTool::ConfigV1& psanaobj);
  ~dataset_config();

  uint8_t project_axis;
  uint8_t write_image;
  uint8_t write_projections;
  uint8_t subtract_sideband;
  uint16_t number_of_weights;
  uint8_t calib_poly_dim;
  uint16_t number_of_beam_event_codes;
  uint16_t number_of_laser_event_codes;
  uint32_t signal_cut;
  Camera::ns_FrameCoord_v0::dataset_data sig_roi_lo;
  Camera::ns_FrameCoord_v0::dataset_data sig_roi_hi;
  Camera::ns_FrameCoord_v0::dataset_data sb_roi_lo;
  Camera::ns_FrameCoord_v0::dataset_data sb_roi_hi;
  double sb_convergence;
  double ref_convergence;
  uint8_t base_name_length;
  char* base_name;


private:
  dataset_config(const dataset_config&);
  dataset_config& operator=(const dataset_config&);
};
}


class ConfigV1_v0 : public Psana::TimeTool::ConfigV1 {
public:
  typedef Psana::TimeTool::ConfigV1 PsanaType;
  ConfigV1_v0() {}
  ConfigV1_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~ConfigV1_v0() {}
  virtual Psana::TimeTool::ConfigV1::Axis project_axis() const;
  virtual uint8_t write_image() const;
  virtual uint8_t write_projections() const;
  virtual uint8_t subtract_sideband() const;
  virtual uint16_t number_of_weights() const;
  virtual uint8_t calib_poly_dim() const;
  virtual uint8_t base_name_length() const;
  virtual uint16_t number_of_beam_event_codes() const;
  virtual uint16_t number_of_laser_event_codes() const;
  virtual uint32_t signal_cut() const;
  virtual const Psana::Camera::FrameCoord& sig_roi_lo() const;
  virtual const Psana::Camera::FrameCoord& sig_roi_hi() const;
  virtual const Psana::Camera::FrameCoord& sb_roi_lo() const;
  virtual const Psana::Camera::FrameCoord& sb_roi_hi() const;
  virtual double sb_convergence() const;
  virtual double ref_convergence() const;
  virtual ndarray<const Psana::TimeTool::EventLogic, 1> beam_logic() const;
  virtual ndarray<const Psana::TimeTool::EventLogic, 1> laser_logic() const;
  virtual ndarray<const double, 1> weights() const;
  virtual ndarray<const double, 1> calib_poly() const;
  virtual const char* base_name() const;
  /** Size of projections */
  uint32_t signal_projection_size() const;

    uint32_t sideband_projection_size() const;

  /** Method which returns the shape (dimensions) of the data returned by base_name() method. */
  std::vector<int> base_name_shape() const;

private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<TimeTool::ns_ConfigV1_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable Psana::Camera::FrameCoord m_ds_storage_config_sig_roi_lo;
  mutable Psana::Camera::FrameCoord m_ds_storage_config_sig_roi_hi;
  mutable Psana::Camera::FrameCoord m_ds_storage_config_sb_roi_lo;
  mutable Psana::Camera::FrameCoord m_ds_storage_config_sb_roi_hi;
  mutable ndarray<const Psana::TimeTool::EventLogic, 1> m_ds_beam_logic;
  void read_ds_beam_logic() const;
  mutable ndarray<const Psana::TimeTool::EventLogic, 1> m_ds_laser_logic;
  void read_ds_laser_logic() const;
  mutable ndarray<const double, 1> m_ds_weights;
  void read_ds_weights() const;
  mutable ndarray<const double, 1> m_ds_calib_poly;
  void read_ds_calib_poly() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::TimeTool::ConfigV1> > make_ConfigV1(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::TimeTool::ConfigV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::TimeTool::ConfigV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::TimeTool::ConfigV1* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_ConfigV2_v0 {
struct dataset_config {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_config();
  dataset_config(const Psana::TimeTool::ConfigV2& psanaobj);
  ~dataset_config();

  uint8_t project_axis;
  uint8_t write_image;
  uint8_t write_projections;
  uint8_t subtract_sideband;
  uint8_t use_reference_roi;
  uint16_t number_of_weights;
  uint8_t calib_poly_dim;
  uint16_t number_of_beam_event_codes;
  uint16_t number_of_laser_event_codes;
  uint32_t signal_cut;
  Camera::ns_FrameCoord_v0::dataset_data sig_roi_lo;
  Camera::ns_FrameCoord_v0::dataset_data sig_roi_hi;
  Camera::ns_FrameCoord_v0::dataset_data sb_roi_lo;
  Camera::ns_FrameCoord_v0::dataset_data sb_roi_hi;
  Camera::ns_FrameCoord_v0::dataset_data ref_roi_lo;
  Camera::ns_FrameCoord_v0::dataset_data ref_roi_hi;
  double sb_convergence;
  double ref_convergence;
  uint8_t base_name_length;
  char* base_name;


private:
  dataset_config(const dataset_config&);
  dataset_config& operator=(const dataset_config&);
};
}


class ConfigV2_v0 : public Psana::TimeTool::ConfigV2 {
public:
  typedef Psana::TimeTool::ConfigV2 PsanaType;
  ConfigV2_v0() {}
  ConfigV2_v0(hdf5pp::Group group, hsize_t idx)
    : m_group(group), m_idx(idx) {}
  virtual ~ConfigV2_v0() {}
  virtual Psana::TimeTool::ConfigV2::Axis project_axis() const;
  virtual uint8_t write_image() const;
  virtual uint8_t write_projections() const;
  virtual uint8_t subtract_sideband() const;
  virtual uint8_t use_reference_roi() const;
  virtual uint16_t number_of_weights() const;
  virtual uint8_t calib_poly_dim() const;
  virtual uint8_t base_name_length() const;
  virtual uint16_t number_of_beam_event_codes() const;
  virtual uint16_t number_of_laser_event_codes() const;
  virtual uint32_t signal_cut() const;
  virtual const Psana::Camera::FrameCoord& sig_roi_lo() const;
  virtual const Psana::Camera::FrameCoord& sig_roi_hi() const;
  virtual const Psana::Camera::FrameCoord& sb_roi_lo() const;
  virtual const Psana::Camera::FrameCoord& sb_roi_hi() const;
  virtual double sb_convergence() const;
  virtual const Psana::Camera::FrameCoord& ref_roi_lo() const;
  virtual const Psana::Camera::FrameCoord& ref_roi_hi() const;
  virtual double ref_convergence() const;
  virtual ndarray<const Psana::TimeTool::EventLogic, 1> beam_logic() const;
  virtual ndarray<const Psana::TimeTool::EventLogic, 1> laser_logic() const;
  virtual ndarray<const double, 1> weights() const;
  virtual ndarray<const double, 1> calib_poly() const;
  virtual const char* base_name() const;
  /** Size of projections */
  uint32_t signal_projection_size() const;

    uint32_t sideband_projection_size() const;

    uint32_t reference_projection_size() const;

  /** Method which returns the shape (dimensions) of the data returned by base_name() method. */
  std::vector<int> base_name_shape() const;

private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  mutable boost::shared_ptr<TimeTool::ns_ConfigV2_v0::dataset_config> m_ds_config;
  void read_ds_config() const;
  mutable Psana::Camera::FrameCoord m_ds_storage_config_sig_roi_lo;
  mutable Psana::Camera::FrameCoord m_ds_storage_config_sig_roi_hi;
  mutable Psana::Camera::FrameCoord m_ds_storage_config_sb_roi_lo;
  mutable Psana::Camera::FrameCoord m_ds_storage_config_sb_roi_hi;
  mutable Psana::Camera::FrameCoord m_ds_storage_config_ref_roi_lo;
  mutable Psana::Camera::FrameCoord m_ds_storage_config_ref_roi_hi;
  mutable ndarray<const Psana::TimeTool::EventLogic, 1> m_ds_beam_logic;
  void read_ds_beam_logic() const;
  mutable ndarray<const Psana::TimeTool::EventLogic, 1> m_ds_laser_logic;
  void read_ds_laser_logic() const;
  mutable ndarray<const double, 1> m_ds_weights;
  void read_ds_weights() const;
  mutable ndarray<const double, 1> m_ds_calib_poly;
  void read_ds_calib_poly() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::TimeTool::ConfigV2> > make_ConfigV2(int version, hdf5pp::Group group, hsize_t idx);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::TimeTool::ConfigV2& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::TimeTool::ConfigV2& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::TimeTool::ConfigV2* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_DataV1_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::TimeTool::DataV1& psanaobj);
  ~dataset_data();

  uint32_t event_type;
  double amplitude;
  double position_pixel;
  double position_time;
  double position_fwhm;
  double ref_amplitude;
  double nxt_amplitude;


};
}


template <typename Config>
class DataV1_v0 : public Psana::TimeTool::DataV1 {
public:
  typedef Psana::TimeTool::DataV1 PsanaType;
  DataV1_v0() {}
  DataV1_v0(hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Config>& cfg)
    : m_group(group), m_idx(idx), m_cfg(cfg) {}
  virtual ~DataV1_v0() {}
  virtual Psana::TimeTool::DataV1::EventType event_type() const;
  virtual double amplitude() const;
  virtual double position_pixel() const;
  virtual double position_time() const;
  virtual double position_fwhm() const;
  virtual double ref_amplitude() const;
  virtual double nxt_amplitude() const;
  virtual ndarray<const int32_t, 1> projected_signal() const;
  virtual ndarray<const int32_t, 1> projected_sideband() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<Config> m_cfg;
  mutable boost::shared_ptr<TimeTool::ns_DataV1_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
  mutable ndarray<const int32_t, 1> m_ds_projected_signal;
  void read_ds_projected_signal() const;
  mutable ndarray<const int32_t, 1> m_ds_projected_sideband;
  void read_ds_projected_sideband() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::TimeTool::DataV1> > make_DataV1(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::TimeTool::ConfigV1>& cfg);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::TimeTool::DataV1& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::TimeTool::DataV1& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::TimeTool::DataV1* obj, hdf5pp::Group group, long index = -1, int version = -1);


namespace ns_DataV2_v0 {
struct dataset_data {
  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  dataset_data();
  dataset_data(const Psana::TimeTool::DataV2& psanaobj);
  ~dataset_data();

  uint32_t event_type;
  double amplitude;
  double position_pixel;
  double position_time;
  double position_fwhm;
  double ref_amplitude;
  double nxt_amplitude;


};
}


template <typename Config>
class DataV2_v0 : public Psana::TimeTool::DataV2 {
public:
  typedef Psana::TimeTool::DataV2 PsanaType;
  DataV2_v0() {}
  DataV2_v0(hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Config>& cfg)
    : m_group(group), m_idx(idx), m_cfg(cfg) {}
  virtual ~DataV2_v0() {}
  virtual Psana::TimeTool::DataV2::EventType event_type() const;
  virtual double amplitude() const;
  virtual double position_pixel() const;
  virtual double position_time() const;
  virtual double position_fwhm() const;
  virtual double ref_amplitude() const;
  virtual double nxt_amplitude() const;
  virtual ndarray<const int32_t, 1> projected_signal() const;
  virtual ndarray<const int32_t, 1> projected_sideband() const;
  virtual ndarray<const int32_t, 1> projected_reference() const;
private:
  mutable hdf5pp::Group m_group;
  hsize_t m_idx;
  boost::shared_ptr<Config> m_cfg;
  mutable boost::shared_ptr<TimeTool::ns_DataV2_v0::dataset_data> m_ds_data;
  void read_ds_data() const;
  mutable ndarray<const int32_t, 1> m_ds_projected_signal;
  void read_ds_projected_signal() const;
  mutable ndarray<const int32_t, 1> m_ds_projected_sideband;
  void read_ds_projected_sideband() const;
  mutable ndarray<const int32_t, 1> m_ds_projected_reference;
  void read_ds_projected_reference() const;
};

boost::shared_ptr<PSEvt::Proxy<Psana::TimeTool::DataV2> > make_DataV2(int version, hdf5pp::Group group, hsize_t idx, const boost::shared_ptr<Psana::TimeTool::ConfigV2>& cfg);

/// Store object as a single instance (scalar dataset) inside specified group.
void store(const Psana::TimeTool::DataV2& obj, hdf5pp::Group group, int version = -1);
/// Create container (rank=1) datasets for storing objects of specified type.
void make_datasets(const Psana::TimeTool::DataV2& obj, hdf5pp::Group group, const ChunkPolicy& chunkPolicy,
                   int deflate, bool shuffle, int version = -1);
/// Add one more object to the containers created by previous method at the specified index,
/// negative index means append to the end of dataset. If pointer to object is zero then
/// datsets are extended with zero-filled of default-initialized data.
void store_at(const Psana::TimeTool::DataV2* obj, hdf5pp::Group group, long index = -1, int version = -1);

} // namespace TimeTool
} // namespace psddl_hdf2psana
#endif // PSDDL_HDF2PSANA_TIMETOOL_DDL_H