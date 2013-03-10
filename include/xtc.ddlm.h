#ifndef PSDDL_HDF2PSANA_XTC_DDLM_H
#define PSDDL_HDF2PSANA_XTC_DDLM_H 1

#include "pdsdata/xtc/DetInfo.hh"
#include "pdsdata/xtc/ClockTime.hh"

#include "hdf5pp/Group.h"
#include "hdf5pp/Type.h"

namespace Pds {

namespace ns_ClockTime_v0 {
struct dataset_data {

  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  uint32_t seconds;
  uint32_t nanoseconds; 

  operator ::Pds::ClockTime() const { return ::Pds::ClockTime(seconds, nanoseconds); }
};
} // namespace ns_ClockTime_v0

namespace ns_DetInfo_v0 {
struct dataset_data {

  static hdf5pp::Type native_type();
  static hdf5pp::Type stored_type();

  uint32_t processId;
  char* detector;
  uint32_t detId;
  char* device;
  uint32_t devId;

  operator ::Pds::DetInfo() const ;
};
} // namespace ns_DetInfo_v0

} // namespace Pds

#endif // PSDDL_HDF2PSANA_XTC_DDLM_H
