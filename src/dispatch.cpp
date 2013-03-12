// *** Do not edit this file, it is auto-generated ***

#include "MsgLogger/MsgLogger.h"
#include "PSEvt/Exceptions.h"

#include "psddl_hdf2psana/dispatch.h"
#include "psddl_hdf2psana/ipimb.ddl.h"
#include "psddl_hdf2psana/gsc16ai.ddl.h"
#include "psddl_hdf2psana/princeton.ddl.h"
#include "psddl_hdf2psana/cspad2x2.ddl.h"
#include "psddl_hdf2psana/cspad.ddl.h"
#include "psddl_hdf2psana/control.ddl.h"
#include "psddl_hdf2psana/lusi.ddl.h"
#include "psddl_hdf2psana/pulnix.ddl.h"
#include "psddl_hdf2psana/camera.ddl.h"
#include "psddl_hdf2psana/fccd.ddl.h"
#include "psddl_hdf2psana/timepix.ddl.h"
#include "psddl_hdf2psana/orca.ddl.h"
#include "psddl_hdf2psana/opal1k.ddl.h"
#include "psddl_hdf2psana/usdusb.ddl.h"
#include "psddl_hdf2psana/andor.ddl.h"
#include "psddl_hdf2psana/bld.ddl.h"
#include "psddl_hdf2psana/fli.ddl.h"
#include "psddl_hdf2psana/oceanoptics.ddl.h"
#include "psddl_hdf2psana/evr.ddl.h"
#include "psddl_hdf2psana/encoder.ddl.h"
#include "psddl_hdf2psana/quartz.ddl.h"


namespace {
    uint32_t str_hash(const std::string& str)
    {
        uint32_t hash = 5381;
        for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
            hash = ((hash << 5) + hash) ^ uint32_t(*it); /* hash * 33 + c */
        }
        return hash;
    }
}

namespace psddl_hdf2psana {
void hdfConvert(const hdf5pp::Group& group, uint64_t idx, const std::string& typeName, int schema_version, 
                const Pds::Src& src, PSEvt::Event* evt, PSEnv::EnvObjectStore& cfgStore)
try {

  uint32_t hash = str_hash(typeName);
  switch(hash) {
  case 2899606017:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::CsPad::make_CsPadReadOnlyCfg(schema_version, group, idx), src);
    }
    break;
  case 843751943:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::CsPad2x2::make_ConfigV2QuadReg(schema_version, group, idx), src);
    }
    break;
  case 77859337:
    if (evt) {
      if (boost::shared_ptr<Psana::Princeton::ConfigV1> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::Princeton::make_FrameV1(schema_version, group, idx, cfgPtr), src);
      } else if (boost::shared_ptr<Psana::Princeton::ConfigV2> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::Princeton::make_FrameV1(schema_version, group, idx, cfgPtr), src);
      } else if (boost::shared_ptr<Psana::Princeton::ConfigV3> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::Princeton::make_FrameV1(schema_version, group, idx, cfgPtr), src);
      } else if (boost::shared_ptr<Psana::Princeton::ConfigV4> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::Princeton::make_FrameV1(schema_version, group, idx, cfgPtr), src);
      } else if (boost::shared_ptr<Psana::Princeton::ConfigV5> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::Princeton::make_FrameV1(schema_version, group, idx, cfgPtr), src);
      }
    }
    break;
  case 77859338:
    if (evt) {
      if (boost::shared_ptr<Psana::Princeton::ConfigV1> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::Princeton::make_FrameV2(schema_version, group, idx, cfgPtr), src);
      } else if (boost::shared_ptr<Psana::Princeton::ConfigV2> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::Princeton::make_FrameV2(schema_version, group, idx, cfgPtr), src);
      } else if (boost::shared_ptr<Psana::Princeton::ConfigV3> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::Princeton::make_FrameV2(schema_version, group, idx, cfgPtr), src);
      } else if (boost::shared_ptr<Psana::Princeton::ConfigV4> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::Princeton::make_FrameV2(schema_version, group, idx, cfgPtr), src);
      } else if (boost::shared_ptr<Psana::Princeton::ConfigV5> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::Princeton::make_FrameV2(schema_version, group, idx, cfgPtr), src);
      }
    }
    break;
  case 1103255571:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::EvrData::make_OutputMapV2(schema_version, group, idx), src);
    }
    break;
  case 3124602907:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Bld::make_BldDataEBeamV1(schema_version, group, idx), src);
    }
    break;
  case 4059955740:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::CsPad::make_ConfigV1QuadReg(schema_version, group, idx), src);
    }
    break;
  case 1133035550:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::EvrData::make_FIFOEvent(schema_version, group, idx), src);
    }
    break;
  case 1624433407:
    cfgStore.putProxy(psddl_hdf2psana::Encoder::make_ConfigV2(schema_version, group, -1), src);
    break;
  case 3801204302:
    cfgStore.putProxy(psddl_hdf2psana::UsdUsb::make_ConfigV1(schema_version, group, -1), src);
    break;
  case 1422110804:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Camera::make_FrameCoord(schema_version, group, idx), src);
    }
    break;
  case 2393145943:
    cfgStore.putProxy(psddl_hdf2psana::Camera::make_FrameFexConfigV1(schema_version, group, -1), src);
    break;
  case 3781484641:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::CsPad2x2::make_ElementV1(schema_version, group, idx), src);
    }
    break;
  case 115545194:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Bld::make_BldDataPhaseCavity(schema_version, group, idx), src);
    }
    break;
  case 1551708791:
    cfgStore.putProxy(psddl_hdf2psana::Orca::make_ConfigV1(schema_version, group, -1), src);
    break;
  case 1151720060:
    if (evt) {
      if (boost::shared_ptr<Psana::Fli::ConfigV1> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::Fli::make_FrameV1(schema_version, group, idx, cfgPtr), src);
      }
    }
    break;
  case 2103238272:
    cfgStore.putProxy(psddl_hdf2psana::Opal1k::make_ConfigV1(schema_version, group, -1), src);
    break;
  case 690012314:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::CsPad2x2::make_CsPad2x2GainMapCfg(schema_version, group, idx), src);
    }
    break;
  case 1170742428:
    cfgStore.putProxy(psddl_hdf2psana::Timepix::make_ConfigV1(schema_version, group, -1), src);
    break;
  case 1170742430:
    cfgStore.putProxy(psddl_hdf2psana::Timepix::make_ConfigV3(schema_version, group, -1), src);
    break;
  case 1170742431:
    cfgStore.putProxy(psddl_hdf2psana::Timepix::make_ConfigV2(schema_version, group, -1), src);
    break;
  case 3139117226:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Bld::make_BldDataIpimbV0(schema_version, group, idx), src);
    }
    break;
  case 2931478704:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::EvrData::make_EventCodeV3(schema_version, group, idx), src);
    }
    break;
  case 2931478709:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::EvrData::make_EventCodeV6(schema_version, group, idx), src);
    }
    break;
  case 2931478710:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::EvrData::make_EventCodeV5(schema_version, group, idx), src);
    }
    break;
  case 2931478711:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::EvrData::make_EventCodeV4(schema_version, group, idx), src);
    }
    break;
  case 3110430406:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Bld::make_BldDataPimV1(schema_version, group, idx), src);
    }
    break;
  case 2478618317:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::EvrData::make_SequencerEntry(schema_version, group, idx), src);
    }
    break;
  case 756401870:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Lusi::make_IpmFexV1(schema_version, group, idx), src);
    }
    break;
  case 414569170:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::ControlData::make_PVLabel(schema_version, group, idx), src);
    }
    break;
  case 3122588892:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Bld::make_BldDataGMDV1(schema_version, group, idx), src);
    }
    break;
  case 3122588893:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Bld::make_BldDataGMDV0(schema_version, group, idx), src);
    }
    break;
  case 1022640350:
    cfgStore.putProxy(psddl_hdf2psana::Andor::make_ConfigV1(schema_version, group, -1), src);
    break;
  case 3580200696:
    cfgStore.putProxy(psddl_hdf2psana::Lusi::make_PimImageConfigV1(schema_version, group, -1), src);
    break;
  case 874521850:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::CsPad::make_CsPadGainMapCfg(schema_version, group, idx), src);
    }
    break;
  case 1624433404:
    cfgStore.putProxy(psddl_hdf2psana::Encoder::make_ConfigV1(schema_version, group, -1), src);
    break;
  case 1078464765:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Bld::make_BldDataEBeamV0(schema_version, group, idx), src);
    }
    break;
  case 1078464766:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Bld::make_BldDataEBeamV3(schema_version, group, idx), src);
    }
    break;
  case 1078464767:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Bld::make_BldDataEBeamV2(schema_version, group, idx), src);
    }
    break;
  case 1543725316:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::EvrData::make_PulseConfigV3(schema_version, group, idx), src);
    }
    break;
  case 3999657228:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Bld::make_BldDataIpimbV0(schema_version, group, idx), src);
    }
    break;
  case 3999657229:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Bld::make_BldDataIpimbV1(schema_version, group, idx), src);
    }
    break;
  case 4219576590:
    cfgStore.putProxy(psddl_hdf2psana::Camera::make_FrameFccdConfigV1(schema_version, group, -1), src);
    break;
  case 2115881232:
    cfgStore.putProxy(psddl_hdf2psana::Gsc16ai::make_ConfigV1(schema_version, group, -1), src);
    break;
  case 477483284:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::UsdUsb::make_DataV1(schema_version, group, idx), src);
    }
    break;
  case 2708910361:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Lusi::make_DiodeFexV1(schema_version, group, idx), src);
    }
    break;
  case 912501018:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Princeton::make_InfoV1(schema_version, group, idx), src);
    }
    break;
  case 3034215716:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::CsPad2x2::make_ConfigV1QuadReg(schema_version, group, idx), src);
    }
    break;
  case 2160030172:
    cfgStore.putProxy(psddl_hdf2psana::ControlData::make_ConfigV2(schema_version, group, -1), src);
    break;
  case 670963505:
    cfgStore.putProxy(psddl_hdf2psana::Quartz::make_ConfigV1(schema_version, group, -1), src);
    break;
  case 1869558591:
    cfgStore.putProxy(psddl_hdf2psana::EvrData::make_IOConfigV1(schema_version, group, -1), src);
    break;
  case 4207593793:
    cfgStore.putProxy(psddl_hdf2psana::Pulnix::make_TM6740ConfigV2(schema_version, group, -1), src);
    break;
  case 4207593794:
    cfgStore.putProxy(psddl_hdf2psana::Pulnix::make_TM6740ConfigV1(schema_version, group, -1), src);
    break;
  case 2301568325:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Timepix::make_DataV2(schema_version, group, idx), src);
    }
    break;
  case 2301568326:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Timepix::make_DataV1(schema_version, group, idx), src);
    }
    break;
  case 2940448584:
    cfgStore.putProxy(psddl_hdf2psana::CsPad::make_ConfigV4(schema_version, group, -1), src);
    break;
  case 705383241:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::CsPad2x2::make_ProtectionSystemThreshold(schema_version, group, idx), src);
    }
    break;
  case 2940448589:
    cfgStore.putProxy(psddl_hdf2psana::CsPad::make_ConfigV1(schema_version, group, -1), src);
    break;
  case 2940448590:
    cfgStore.putProxy(psddl_hdf2psana::CsPad::make_ConfigV2(schema_version, group, -1), src);
    break;
  case 2940448591:
    cfgStore.putProxy(psddl_hdf2psana::CsPad::make_ConfigV3(schema_version, group, -1), src);
    break;
  case 150950753:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::CsPad2x2::make_CsPad2x2ReadOnlyCfg(schema_version, group, idx), src);
    }
    break;
  case 1777917796:
    cfgStore.putProxy(psddl_hdf2psana::Lusi::make_IpmFexConfigV1(schema_version, group, -1), src);
    break;
  case 2344520549:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::CsPad::make_CsPadDigitalPotsCfg(schema_version, group, idx), src);
    }
    break;
  case 1575949158:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Camera::make_FrameV1(schema_version, group, idx), src);
    }
    break;
  case 1777917799:
    cfgStore.putProxy(psddl_hdf2psana::Lusi::make_IpmFexConfigV2(schema_version, group, -1), src);
    break;
  case 3985960297:
    if (evt) {
      if (boost::shared_ptr<Psana::Andor::ConfigV1> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::Andor::make_FrameV1(schema_version, group, idx, cfgPtr), src);
      }
    }
    break;
  case 3566348663:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::EvrData::make_OutputMap(schema_version, group, idx), src);
    }
    break;
  case 1705456020:
    cfgStore.putProxy(psddl_hdf2psana::Ipimb::make_ConfigV2(schema_version, group, -1), src);
    break;
  case 2275609067:
    cfgStore.putProxy(psddl_hdf2psana::Fli::make_ConfigV1(schema_version, group, -1), src);
    break;
  case 2119303557:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::CsPad2x2::make_CsPad2x2DigitalPotsCfg(schema_version, group, idx), src);
    }
    break;
  case 2929134982:
    if (evt) {
      if (boost::shared_ptr<Psana::OceanOptics::ConfigV1> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::OceanOptics::make_DataV1(schema_version, group, idx, cfgPtr), src);
      }
    }
    break;
  case 3467424663:
    if (evt) {
      if (boost::shared_ptr<Psana::CsPad::ConfigV1> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::CsPad::make_DataV1(schema_version, group, idx, cfgPtr), src);
      } else if (boost::shared_ptr<Psana::CsPad::ConfigV2> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::CsPad::make_DataV1(schema_version, group, idx, cfgPtr), src);
      } else if (boost::shared_ptr<Psana::CsPad::ConfigV3> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::CsPad::make_DataV1(schema_version, group, idx, cfgPtr), src);
      } else if (boost::shared_ptr<Psana::CsPad::ConfigV4> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::CsPad::make_DataV1(schema_version, group, idx, cfgPtr), src);
      }
    }
    break;
  case 860824977:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::EvrData::make_IOChannel(schema_version, group, idx), src);
    }
    break;
  case 3467424660:
    if (evt) {
      if (boost::shared_ptr<Psana::CsPad::ConfigV2> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::CsPad::make_DataV2(schema_version, group, idx, cfgPtr), src);
      } else if (boost::shared_ptr<Psana::CsPad::ConfigV3> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::CsPad::make_DataV2(schema_version, group, idx, cfgPtr), src);
      } else if (boost::shared_ptr<Psana::CsPad::ConfigV4> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::CsPad::make_DataV2(schema_version, group, idx, cfgPtr), src);
      }
    }
    break;
  case 1705456023:
    cfgStore.putProxy(psddl_hdf2psana::Ipimb::make_ConfigV1(schema_version, group, -1), src);
    break;
  case 1361748889:
    cfgStore.putProxy(psddl_hdf2psana::EvrData::make_ConfigV1(schema_version, group, -1), src);
    break;
  case 1361748890:
    cfgStore.putProxy(psddl_hdf2psana::EvrData::make_ConfigV2(schema_version, group, -1), src);
    break;
  case 1361748891:
    cfgStore.putProxy(psddl_hdf2psana::EvrData::make_ConfigV3(schema_version, group, -1), src);
    break;
  case 1361748892:
    cfgStore.putProxy(psddl_hdf2psana::EvrData::make_ConfigV4(schema_version, group, -1), src);
    break;
  case 1361748893:
    cfgStore.putProxy(psddl_hdf2psana::EvrData::make_ConfigV5(schema_version, group, -1), src);
    break;
  case 1361748894:
    cfgStore.putProxy(psddl_hdf2psana::EvrData::make_ConfigV6(schema_version, group, -1), src);
    break;
  case 1361748895:
    cfgStore.putProxy(psddl_hdf2psana::EvrData::make_ConfigV7(schema_version, group, -1), src);
    break;
  case 1083296677:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Encoder::make_DataV2(schema_version, group, idx), src);
    }
    break;
  case 1083296678:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Encoder::make_DataV1(schema_version, group, idx), src);
    }
    break;
  case 1020644788:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::EvrData::make_SequencerConfigV1(schema_version, group, idx), src);
    }
    break;
  case 3486939573:
    cfgStore.putProxy(psddl_hdf2psana::CsPad2x2::make_ConfigV1(schema_version, group, -1), src);
    break;
  case 3486939574:
    cfgStore.putProxy(psddl_hdf2psana::CsPad2x2::make_ConfigV2(schema_version, group, -1), src);
    break;
  case 913738682:
    cfgStore.putProxy(psddl_hdf2psana::Princeton::make_ConfigV5(schema_version, group, -1), src);
    break;
  case 913738683:
    cfgStore.putProxy(psddl_hdf2psana::Princeton::make_ConfigV4(schema_version, group, -1), src);
    break;
  case 913738684:
    cfgStore.putProxy(psddl_hdf2psana::Princeton::make_ConfigV3(schema_version, group, -1), src);
    break;
  case 913738685:
    cfgStore.putProxy(psddl_hdf2psana::Princeton::make_ConfigV2(schema_version, group, -1), src);
    break;
  case 913738686:
    cfgStore.putProxy(psddl_hdf2psana::Princeton::make_ConfigV1(schema_version, group, -1), src);
    break;
  case 3654144449:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::EvrData::make_DataV3(schema_version, group, idx), src);
    }
    break;
  case 1614614470:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Camera::make_TwoDGaussianV1(schema_version, group, idx), src);
    }
    break;
  case 2869143498:
    if (evt) {
      if (boost::shared_ptr<Psana::Gsc16ai::ConfigV1> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::Gsc16ai::make_DataV1(schema_version, group, idx, cfgPtr), src);
      }
    }
    break;
  case 2901814733:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Ipimb::make_DataV1(schema_version, group, idx), src);
    }
    break;
  case 2901814734:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Ipimb::make_DataV2(schema_version, group, idx), src);
    }
    break;
  case 1048460753:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Bld::make_BldDataFEEGasDetEnergy(schema_version, group, idx), src);
    }
    break;
  case 1694947283:
    cfgStore.putProxy(psddl_hdf2psana::ControlData::make_PVControl(schema_version, group, -1), src);
    break;
  case 1461968857:
    if (evt) {
      if (boost::shared_ptr<Psana::CsPad::ConfigV1> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::CsPad::make_ElementV1(schema_version, group, idx, cfgPtr), src);
      } else if (boost::shared_ptr<Psana::CsPad::ConfigV2> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::CsPad::make_ElementV1(schema_version, group, idx, cfgPtr), src);
      } else if (boost::shared_ptr<Psana::CsPad::ConfigV3> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::CsPad::make_ElementV1(schema_version, group, idx, cfgPtr), src);
      } else if (boost::shared_ptr<Psana::CsPad::ConfigV4> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::CsPad::make_ElementV1(schema_version, group, idx, cfgPtr), src);
      }
    }
    break;
  case 1461968858:
    if (evt) {
      if (boost::shared_ptr<Psana::CsPad::ConfigV2> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::CsPad::make_ElementV2(schema_version, group, idx, cfgPtr), src);
      } else if (boost::shared_ptr<Psana::CsPad::ConfigV3> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::CsPad::make_ElementV2(schema_version, group, idx, cfgPtr), src);
      } else if (boost::shared_ptr<Psana::CsPad::ConfigV4> cfgPtr = cfgStore.get(src)) {
        evt->putProxy(psddl_hdf2psana::CsPad::make_ElementV2(schema_version, group, idx, cfgPtr), src);
      }
    }
    break;
  case 1387299804:
    cfgStore.putProxy(psddl_hdf2psana::OceanOptics::make_ConfigV1(schema_version, group, -1), src);
    break;
  case 2160030175:
    cfgStore.putProxy(psddl_hdf2psana::ControlData::make_ConfigV1(schema_version, group, -1), src);
    break;
  case 4114962913:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::EvrData::make_PulseConfig(schema_version, group, idx), src);
    }
    break;
  case 874627555:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::OceanOptics::make_timespec64(schema_version, group, idx), src);
    }
    break;
  case 4103916008:
    cfgStore.putProxy(psddl_hdf2psana::FCCD::make_FccdConfigV1(schema_version, group, -1), src);
    break;
  case 1078464764:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::Bld::make_BldDataEBeamV1(schema_version, group, idx), src);
    }
    break;
  case 4103916011:
    cfgStore.putProxy(psddl_hdf2psana::FCCD::make_FccdConfigV2(schema_version, group, -1), src);
    break;
  case 512147952:
    cfgStore.putProxy(psddl_hdf2psana::Lusi::make_DiodeFexConfigV2(schema_version, group, -1), src);
    break;
  case 2780844529:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::CsPad::make_ProtectionSystemThreshold(schema_version, group, idx), src);
    }
    break;
  case 512147955:
    cfgStore.putProxy(psddl_hdf2psana::Lusi::make_DiodeFexConfigV1(schema_version, group, -1), src);
    break;
  case 3416691192:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::ControlData::make_PVMonitor(schema_version, group, idx), src);
    }
    break;
  case 4263170303:
    if (evt) {
      evt->putProxy(psddl_hdf2psana::CsPad::make_ConfigV2QuadReg(schema_version, group, idx), src);
    }
    break;
  } // end switch

} catch (const PSEvt::ExceptionDuplicateKey& ex) {
  // catch exception for duplicated objects, issue warning
  MsgLog("hdfConvert", warning, ex.what());
} // end hdfConvert(...)

} // namespace psddl_hdf2psana

