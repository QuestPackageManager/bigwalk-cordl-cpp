#pragma once
// IWYU pragma private; include "Rewired/Joystick.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Utils/Classes/Utility/zzzz__TimerAbs_def.hpp"
#include "Rewired/zzzz__ControllerWithAxes_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__JoystickType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Joystick)
namespace Rewired::Interfaces {
class IInputManagerJoystickPublic;
}
namespace Rewired {
class BridgedController;
}
namespace Rewired {
class ControllerDataUpdater;
}
namespace Rewired {
class Controller_DirectionalPad;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
class Controller_Hat;
}
namespace Rewired {
struct HardwareControllerMapIdentifier;
}
namespace Rewired {
class HardwareControllerMap_Game;
}
namespace Rewired {
struct InputSource;
}
namespace Rewired {
class JoystickCalibrationMapSaveData;
}
namespace Rewired {
struct JoystickType;
}
namespace Rewired {
class UpdateControllerInfoEventArgs;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Rewired {
class Joystick;
}
// Write type traits
MARK_REF_T(::Rewired::Joystick*);
DEFINE_IL2CPP_CLASS(::Rewired::Joystick*, "Rewired", "Joystick");
// Dependencies Rewired.Controller::DirectionalPad, Rewired.Controller::Hat, Rewired.ControllerWithAxes, Rewired.JoystickType, Rewired.Utils.Classes.Utility.TimerAbs
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Joystick
class CORDL_TYPE Joystick : public ::Rewired::ControllerWithAxes {
public:
// Declarations
 __declspec(property(get=get_DirectionalPads)) ::System::Collections::Generic::IList_1<::Rewired::Controller_DirectionalPad*>*  DirectionalPads;

/// @brief Field EQjbQUmEGYtoLIwyrUVkrXJagWbE, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_EQjbQUmEGYtoLIwyrUVkrXJagWbE, put=__cordl_internal_set_EQjbQUmEGYtoLIwyrUVkrXJagWbE)) int32_t  EQjbQUmEGYtoLIwyrUVkrXJagWbE;

/// @brief Field GyaFiSYqfRCPDZJNneDtJLZKnnsb, offset 0x1a1, size 0x1 
 __declspec(property(get=__cordl_internal_get_GyaFiSYqfRCPDZJNneDtJLZKnnsb, put=__cordl_internal_set_GyaFiSYqfRCPDZJNneDtJLZKnnsb)) bool  GyaFiSYqfRCPDZJNneDtJLZKnnsb;

 __declspec(property(get=get_Hats)) ::System::Collections::Generic::IList_1<::Rewired::Controller_Hat*>*  Hats;

 __declspec(property(get=EfneuiyFlDuybCLKNMSjmxdEZwFC)) ::Rewired::HardwareControllerMapIdentifier  IqNcNhDlagdAGcPtcfGfuHvkhCLSc;

/// @brief Field JUiiGqfvDFtKLVjRAXlJvjNbXyft, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_JUiiGqfvDFtKLVjRAXlJvjNbXyft, put=__cordl_internal_set_JUiiGqfvDFtKLVjRAXlJvjNbXyft)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Hat*>*  JUiiGqfvDFtKLVjRAXlJvjNbXyft;

 __declspec(property(get=YsdTFgsoMRBiybdxbizcgpnpisxl)) ::System::Collections::Generic::IList_1<::Rewired::JoystickType>*  LHAaAogdvAjxAhopcZfwEduHGidAc;

/// @brief Field OBdhyEPRiXGJeHORIzicGUrBurUh, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_OBdhyEPRiXGJeHORIzicGUrBurUh, put=__cordl_internal_set_OBdhyEPRiXGJeHORIzicGUrBurUh)) ::Rewired::Interfaces::IInputManagerJoystickPublic*  OBdhyEPRiXGJeHORIzicGUrBurUh;

/// @brief Field OcfdOxjlyxUpYOphqxQDgpSZlHJpA, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_OcfdOxjlyxUpYOphqxQDgpSZlHJpA, put=__cordl_internal_set_OcfdOxjlyxUpYOphqxQDgpSZlHJpA)) ::ArrayW<::Rewired::JoystickType>  OcfdOxjlyxUpYOphqxQDgpSZlHJpA;

 __declspec(property(get=EprIaWyviAgdsZSowXqnqouPTyaD)) int32_t  OjMGagAbBWGvocJkZTMYjeusdxLo;

/// @brief Field QGPcQgCYmdnoRkMBVSEUjhJpWMYJ, offset 0x1d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_QGPcQgCYmdnoRkMBVSEUjhJpWMYJ, put=__cordl_internal_set_QGPcQgCYmdnoRkMBVSEUjhJpWMYJ)) int32_t  QGPcQgCYmdnoRkMBVSEUjhJpWMYJ;

/// @brief Field QINyBnVnMgFeaqXmgwsdrKoKopdy, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_QINyBnVnMgFeaqXmgwsdrKoKopdy, put=__cordl_internal_set_QINyBnVnMgFeaqXmgwsdrKoKopdy)) ::ArrayW<::Rewired::Controller_Hat*>  QINyBnVnMgFeaqXmgwsdrKoKopdy;

/// @brief Field UOwefxBIyJFqsWdqCaOEfGetmKMb, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_UOwefxBIyJFqsWdqCaOEfGetmKMb, put=__cordl_internal_set_UOwefxBIyJFqsWdqCaOEfGetmKMb)) ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>  UOwefxBIyJFqsWdqCaOEfGetmKMb;

/// @brief Field XxNBtPCTSiCQESHxZKdvrgsscdGB, offset 0x1a0, size 0x1 
 __declspec(property(get=__cordl_internal_get_XxNBtPCTSiCQESHxZKdvrgsscdGB, put=__cordl_internal_set_XxNBtPCTSiCQESHxZKdvrgsscdGB)) bool  XxNBtPCTSiCQESHxZKdvrgsscdGB;

/// @brief Field YnAaYzicpDEzmDyNqAgSXatmaxbS, offset 0x1a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_YnAaYzicpDEzmDyNqAgSXatmaxbS, put=__cordl_internal_set_YnAaYzicpDEzmDyNqAgSXatmaxbS)) int32_t  YnAaYzicpDEzmDyNqAgSXatmaxbS;

 __declspec(property(get=get_deviceInstanceGuid)) ::System::Guid  deviceInstanceGuid;

 __declspec(property(get=get_directionalPadCount)) int32_t  directionalPadCount;

/// @brief Field fwQeWUWNfaElYiiAyhQZViWSbHpi, offset 0x1a2, size 0x1 
 __declspec(property(get=__cordl_internal_get_fwQeWUWNfaElYiiAyhQZViWSbHpi, put=__cordl_internal_set_fwQeWUWNfaElYiiAyhQZViWSbHpi)) bool  fwQeWUWNfaElYiiAyhQZViWSbHpi;

 __declspec(property(get=get_hatCount)) int32_t  hatCount;

/// @brief Field mjZbXNcyjXoRmbHSvLAHTsuCSppjA, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_mjZbXNcyjXoRmbHSvLAHTsuCSppjA, put=__cordl_internal_set_mjZbXNcyjXoRmbHSvLAHTsuCSppjA)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::JoystickType>*  mjZbXNcyjXoRmbHSvLAHTsuCSppjA;

/// @brief Field puKUKhMfRtaPdyHwFFKdGFSUhozs, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_puKUKhMfRtaPdyHwFFKdGFSUhozs, put=__cordl_internal_set_puKUKhMfRtaPdyHwFFKdGFSUhozs)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_DirectionalPad*>*  puKUKhMfRtaPdyHwFFKdGFSUhozs;

/// @brief Field sBCOebTHopxRIIgKofmLJuFncjjE, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_sBCOebTHopxRIIgKofmLJuFncjjE, put=__cordl_internal_set_sBCOebTHopxRIIgKofmLJuFncjjE)) ::ArrayW<::Rewired::Controller_DirectionalPad*>  sBCOebTHopxRIIgKofmLJuFncjjE;

 __declspec(property(get=get_supportsVibration)) bool  supportsVibration;

 __declspec(property(get=get_systemId)) ::System::Nullable_1<int64_t>  systemId;

 __declspec(property(get=get_unityId)) int32_t  unityId;

 __declspec(property(get=get_vibrationLeftMotor, put=set_vibrationLeftMotor)) float_t  vibrationLeftMotor;

 __declspec(property(get=get_vibrationMotorCount)) int32_t  vibrationMotorCount;

 __declspec(property(get=get_vibrationRightMotor, put=set_vibrationRightMotor)) float_t  vibrationRightMotor;

/// @brief Field zvHRuDMuoqhJkLBGIVFYDdApbaoH, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_zvHRuDMuoqhJkLBGIVFYDdApbaoH, put=__cordl_internal_set_zvHRuDMuoqhJkLBGIVFYDdApbaoH)) ::ArrayW<float_t>  zvHRuDMuoqhJkLBGIVFYDdApbaoH;

/// @brief Method BkXZBVwiTBBWQlKhLSoSzavMQbju, addr 0x181859dc0, size 0x20, virtual false, abstract: false, final false
inline void BkXZBVwiTBBWQlKhLSoSzavMQbju(::Rewired::UpdateControllerInfoEventArgs*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method DYNLQmvajoibEMQwaBAQvrBNAMfAA, addr 0x181859de0, size 0x90, virtual true, abstract: false, final false
inline void DYNLQmvajoibEMQwaBAQvrBNAMfAA(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Disconnected, addr 0x181859e70, size 0x140, virtual true, abstract: false, final false
inline void Disconnected() ;

/// @brief Method EfneuiyFlDuybCLKNMSjmxdEZwFC, addr 0x181859fb0, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::HardwareControllerMapIdentifier EfneuiyFlDuybCLKNMSjmxdEZwFC() ;

/// @brief Method EprIaWyviAgdsZSowXqnqouPTyaD, addr 0x18185a010, size 0x30, virtual false, abstract: false, final false
inline int32_t EprIaWyviAgdsZSowXqnqouPTyaD() ;

/// @brief Method GetCalibrationMapSaveData, addr 0x18185a040, size 0x160, virtual false, abstract: false, final false
inline ::Rewired::JoystickCalibrationMapSaveData* GetCalibrationMapSaveData() ;

/// @brief Method GetVibration, addr 0x18185a1a0, size 0x150, virtual false, abstract: false, final false
inline float_t GetVibration(int32_t  motorIndex) ;

/// @brief Method HQHaaeQfupUFFFNyAyppUkuzVlZM, addr 0x18185a2f0, size 0x160, virtual true, abstract: false, final false
inline void HQHaaeQfupUFFFNyAyppUkuzVlZM(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Joystick* New_ctor(::Rewired::BridgedController*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Joystick* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<bool>  _cordl_fixed_empty_name_whitespace_param_8, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_11) ;

/// @brief Method PZQYbMqGeVDkemQyZKdcDJmwwLmp, addr 0x18185a450, size 0x120, virtual true, abstract: false, final false
inline void PZQYbMqGeVDkemQyZKdcDJmwwLmp() ;

/// @brief Method QLedQRFGQNUTbrAAtnwFEwpNZnPmA, addr 0x18185a570, size 0x20, virtual false, abstract: false, final false
inline void QLedQRFGQNUTbrAAtnwFEwpNZnPmA(::Rewired::BridgedController*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method RSTGaLAKGheBhgfXzDLabnteQglyb, addr 0x18185a590, size 0x170, virtual false, abstract: false, final false
inline void RSTGaLAKGheBhgfXzDLabnteQglyb(int32_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method SetVibration, addr 0x18185abc0, size 0xa0, virtual false, abstract: false, final false
inline void SetVibration(float_t  leftMotorLevel, float_t  rightMotorLevel) ;

/// @brief Method SetVibration, addr 0x18185a700, size 0x2b0, virtual false, abstract: false, final false
inline void SetVibration(float_t  leftMotorLevel, float_t  rightMotorLevel, float_t  leftMotorDuration, float_t  rightMotorDuration) ;

/// @brief Method SetVibration, addr 0x18185aba0, size 0x20, virtual false, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel) ;

/// @brief Method SetVibration, addr 0x18185a9b0, size 0x20, virtual false, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration) ;

/// @brief Method SetVibration, addr 0x18185a9d0, size 0x1d0, virtual false, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration, bool  stopOtherMotors) ;

/// @brief Method SetVibration, addr 0x18185ac60, size 0x20, virtual false, abstract: false, final false
inline void SetVibration(int32_t  motorIndex, float_t  motorLevel, bool  stopOtherMotors) ;

/// @brief Method StopVibration, addr 0x18185ac80, size 0x170, virtual false, abstract: false, final false
inline void StopVibration() ;

/// @brief Method UZSyUmEICIFSXEFvUfFNCdClXHaeA, addr 0x18185adf0, size 0xb0, virtual false, abstract: false, final false
inline bool UZSyUmEICIFSXEFvUfFNCdClXHaeA(::Rewired::JoystickType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method YsdTFgsoMRBiybdxbizcgpnpisxl, addr 0x18185aea0, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::JoystickType>* YsdTFgsoMRBiybdxbizcgpnpisxl() ;

/// @brief Method ZqMTGBRrcHjxTmXjobSyfvQAplmeA, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void ZqMTGBRrcHjxTmXjobSyfvQAplmeA() ;

constexpr int32_t const& __cordl_internal_get_EQjbQUmEGYtoLIwyrUVkrXJagWbE() const;

constexpr int32_t& __cordl_internal_get_EQjbQUmEGYtoLIwyrUVkrXJagWbE() ;

constexpr bool const& __cordl_internal_get_GyaFiSYqfRCPDZJNneDtJLZKnnsb() const;

constexpr bool& __cordl_internal_get_GyaFiSYqfRCPDZJNneDtJLZKnnsb() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Hat*>* const& __cordl_internal_get_JUiiGqfvDFtKLVjRAXlJvjNbXyft() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Hat*>*& __cordl_internal_get_JUiiGqfvDFtKLVjRAXlJvjNbXyft() ;

constexpr ::Rewired::Interfaces::IInputManagerJoystickPublic* const& __cordl_internal_get_OBdhyEPRiXGJeHORIzicGUrBurUh() const;

constexpr ::Rewired::Interfaces::IInputManagerJoystickPublic*& __cordl_internal_get_OBdhyEPRiXGJeHORIzicGUrBurUh() ;

constexpr ::ArrayW<::Rewired::JoystickType> const& __cordl_internal_get_OcfdOxjlyxUpYOphqxQDgpSZlHJpA() const;

constexpr ::ArrayW<::Rewired::JoystickType>& __cordl_internal_get_OcfdOxjlyxUpYOphqxQDgpSZlHJpA() ;

constexpr int32_t const& __cordl_internal_get_QGPcQgCYmdnoRkMBVSEUjhJpWMYJ() const;

constexpr int32_t& __cordl_internal_get_QGPcQgCYmdnoRkMBVSEUjhJpWMYJ() ;

constexpr ::ArrayW<::Rewired::Controller_Hat*> const& __cordl_internal_get_QINyBnVnMgFeaqXmgwsdrKoKopdy() const;

constexpr ::ArrayW<::Rewired::Controller_Hat*>& __cordl_internal_get_QINyBnVnMgFeaqXmgwsdrKoKopdy() ;

constexpr ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*> const& __cordl_internal_get_UOwefxBIyJFqsWdqCaOEfGetmKMb() const;

constexpr ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>& __cordl_internal_get_UOwefxBIyJFqsWdqCaOEfGetmKMb() ;

constexpr bool const& __cordl_internal_get_XxNBtPCTSiCQESHxZKdvrgsscdGB() const;

constexpr bool& __cordl_internal_get_XxNBtPCTSiCQESHxZKdvrgsscdGB() ;

constexpr int32_t const& __cordl_internal_get_YnAaYzicpDEzmDyNqAgSXatmaxbS() const;

constexpr int32_t& __cordl_internal_get_YnAaYzicpDEzmDyNqAgSXatmaxbS() ;

constexpr bool const& __cordl_internal_get_fwQeWUWNfaElYiiAyhQZViWSbHpi() const;

constexpr bool& __cordl_internal_get_fwQeWUWNfaElYiiAyhQZViWSbHpi() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::JoystickType>* const& __cordl_internal_get_mjZbXNcyjXoRmbHSvLAHTsuCSppjA() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::JoystickType>*& __cordl_internal_get_mjZbXNcyjXoRmbHSvLAHTsuCSppjA() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_DirectionalPad*>* const& __cordl_internal_get_puKUKhMfRtaPdyHwFFKdGFSUhozs() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_DirectionalPad*>*& __cordl_internal_get_puKUKhMfRtaPdyHwFFKdGFSUhozs() ;

constexpr ::ArrayW<::Rewired::Controller_DirectionalPad*> const& __cordl_internal_get_sBCOebTHopxRIIgKofmLJuFncjjE() const;

constexpr ::ArrayW<::Rewired::Controller_DirectionalPad*>& __cordl_internal_get_sBCOebTHopxRIIgKofmLJuFncjjE() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_zvHRuDMuoqhJkLBGIVFYDdApbaoH() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_zvHRuDMuoqhJkLBGIVFYDdApbaoH() ;

constexpr void __cordl_internal_set_EQjbQUmEGYtoLIwyrUVkrXJagWbE(int32_t  value) ;

constexpr void __cordl_internal_set_GyaFiSYqfRCPDZJNneDtJLZKnnsb(bool  value) ;

constexpr void __cordl_internal_set_JUiiGqfvDFtKLVjRAXlJvjNbXyft(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Hat*>*  value) ;

constexpr void __cordl_internal_set_OBdhyEPRiXGJeHORIzicGUrBurUh(::Rewired::Interfaces::IInputManagerJoystickPublic*  value) ;

constexpr void __cordl_internal_set_OcfdOxjlyxUpYOphqxQDgpSZlHJpA(::ArrayW<::Rewired::JoystickType>  value) ;

constexpr void __cordl_internal_set_QGPcQgCYmdnoRkMBVSEUjhJpWMYJ(int32_t  value) ;

constexpr void __cordl_internal_set_QINyBnVnMgFeaqXmgwsdrKoKopdy(::ArrayW<::Rewired::Controller_Hat*>  value) ;

constexpr void __cordl_internal_set_UOwefxBIyJFqsWdqCaOEfGetmKMb(::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>  value) ;

constexpr void __cordl_internal_set_XxNBtPCTSiCQESHxZKdvrgsscdGB(bool  value) ;

constexpr void __cordl_internal_set_YnAaYzicpDEzmDyNqAgSXatmaxbS(int32_t  value) ;

constexpr void __cordl_internal_set_fwQeWUWNfaElYiiAyhQZViWSbHpi(bool  value) ;

constexpr void __cordl_internal_set_mjZbXNcyjXoRmbHSvLAHTsuCSppjA(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::JoystickType>*  value) ;

constexpr void __cordl_internal_set_puKUKhMfRtaPdyHwFFKdGFSUhozs(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_DirectionalPad*>*  value) ;

constexpr void __cordl_internal_set_sBCOebTHopxRIIgKofmLJuFncjjE(::ArrayW<::Rewired::Controller_DirectionalPad*>  value) ;

constexpr void __cordl_internal_set_zvHRuDMuoqhJkLBGIVFYDdApbaoH(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x18185af10, size 0x650, virtual false, abstract: false, final false
inline void _ctor(::Rewired::BridgedController*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x18185b560, size 0xc00, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<bool>  _cordl_fixed_empty_name_whitespace_param_8, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_11) ;

/// @brief Method get_DirectionalPads, addr 0x18185c160, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Controller_DirectionalPad*>* get_DirectionalPads() ;

/// @brief Method get_Hats, addr 0x18185c1d0, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Controller_Hat*>* get_Hats() ;

/// @brief Method get_deviceInstanceGuid, addr 0x18185c240, size 0x120, virtual true, abstract: false, final false
inline ::System::Guid get_deviceInstanceGuid() ;

/// @brief Method get_directionalPadCount, addr 0x18185c360, size 0x60, virtual false, abstract: false, final false
inline int32_t get_directionalPadCount() ;

/// @brief Method get_hatCount, addr 0x18185c3c0, size 0x60, virtual false, abstract: false, final false
inline int32_t get_hatCount() ;

/// @brief Method get_supportsVibration, addr 0x18185c420, size 0x60, virtual false, abstract: false, final false
inline bool get_supportsVibration() ;

/// @brief Method get_systemId, addr 0x18185c480, size 0x120, virtual false, abstract: false, final false
inline ::System::Nullable_1<int64_t> get_systemId() ;

/// @brief Method get_unityId, addr 0x18185c5a0, size 0x80, virtual false, abstract: false, final false
inline int32_t get_unityId() ;

/// @brief Method get_vibrationLeftMotor, addr 0x18185c620, size 0x130, virtual false, abstract: false, final false
inline float_t get_vibrationLeftMotor() ;

/// @brief Method get_vibrationMotorCount, addr 0x18185c750, size 0x140, virtual false, abstract: false, final false
inline int32_t get_vibrationMotorCount() ;

/// @brief Method get_vibrationRightMotor, addr 0x18185c890, size 0x130, virtual false, abstract: false, final false
inline float_t get_vibrationRightMotor() ;

/// @brief Method qjjBPWebzUjOkRgxJzAtCxXIMfTL, addr 0x18185c9c0, size 0xb0, virtual false, abstract: false, final false
inline void qjjBPWebzUjOkRgxJzAtCxXIMfTL() ;

/// @brief Method rmwbNtAkFAOFOCLdTMpACCbDiKwQb, addr 0x18185ca70, size 0x160, virtual false, abstract: false, final false
inline void rmwbNtAkFAOFOCLdTMpACCbDiKwQb() ;

/// @brief Method set_vibrationLeftMotor, addr 0x18185cbd0, size 0x140, virtual false, abstract: false, final false
inline void set_vibrationLeftMotor(float_t  value) ;

/// @brief Method set_vibrationRightMotor, addr 0x18185cd10, size 0x140, virtual false, abstract: false, final false
inline void set_vibrationRightMotor(float_t  value) ;

/// @brief Method tmAabPooCpbgwAUjiRvrqQJAvfGbA, addr 0x18185ce50, size 0xe0, virtual false, abstract: false, final false
static inline int32_t tmAabPooCpbgwAUjiRvrqQJAvfGbA(::Rewired::Joystick*  _cordl_fixed_empty_name_whitespace, ::Rewired::Joystick*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method xnlDJhpBFqGkQLiGSohhXOfKWnwB, addr 0x18185cf30, size 0x1e0, virtual false, abstract: false, final false
inline void xnlDJhpBFqGkQLiGSohhXOfKWnwB(::Rewired::Interfaces::IInputManagerJoystickPublic*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Joystick() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Joystick", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Joystick(Joystick && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Joystick", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Joystick(Joystick const& ) = delete;

/// @brief Field UwSNMBBXtYJrloYbrjlMYjMeIbUv offset 0xffffffff size 0x4
static constexpr int32_t  UwSNMBBXtYJrloYbrjlMYjMeIbUv{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1839};

/// @brief Field tvxhCXSUoaCkjUwaVFyPBvLPjTdq offset 0xffffffff size 0x4
static constexpr int32_t  tvxhCXSUoaCkjUwaVFyPBvLPjTdq{static_cast<int32_t>(0x0)};

/// @brief Field OBdhyEPRiXGJeHORIzicGUrBurUh, offset: 0x188, size: 0x8, def value: None
 ::Rewired::Interfaces::IInputManagerJoystickPublic*  ___OBdhyEPRiXGJeHORIzicGUrBurUh;

/// @brief Field OcfdOxjlyxUpYOphqxQDgpSZlHJpA, offset: 0x190, size: 0x8, def value: None
 ::ArrayW<::Rewired::JoystickType>  ___OcfdOxjlyxUpYOphqxQDgpSZlHJpA;

/// @brief Field mjZbXNcyjXoRmbHSvLAHTsuCSppjA, offset: 0x198, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::JoystickType>*  ___mjZbXNcyjXoRmbHSvLAHTsuCSppjA;

/// @brief Field XxNBtPCTSiCQESHxZKdvrgsscdGB, offset: 0x1a0, size: 0x1, def value: None
 bool  ___XxNBtPCTSiCQESHxZKdvrgsscdGB;

/// @brief Field GyaFiSYqfRCPDZJNneDtJLZKnnsb, offset: 0x1a1, size: 0x1, def value: None
 bool  ___GyaFiSYqfRCPDZJNneDtJLZKnnsb;

/// @brief Field fwQeWUWNfaElYiiAyhQZViWSbHpi, offset: 0x1a2, size: 0x1, def value: None
 bool  ___fwQeWUWNfaElYiiAyhQZViWSbHpi;

/// @brief Field YnAaYzicpDEzmDyNqAgSXatmaxbS, offset: 0x1a4, size: 0x4, def value: None
 int32_t  ___YnAaYzicpDEzmDyNqAgSXatmaxbS;

/// @brief Field zvHRuDMuoqhJkLBGIVFYDdApbaoH, offset: 0x1a8, size: 0x8, def value: None
 ::ArrayW<float_t>  ___zvHRuDMuoqhJkLBGIVFYDdApbaoH;

/// @brief Field UOwefxBIyJFqsWdqCaOEfGetmKMb, offset: 0x1b0, size: 0x8, def value: None
 ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>  ___UOwefxBIyJFqsWdqCaOEfGetmKMb;

/// @brief Field EQjbQUmEGYtoLIwyrUVkrXJagWbE, offset: 0x1b8, size: 0x4, def value: None
 int32_t  ___EQjbQUmEGYtoLIwyrUVkrXJagWbE;

/// @brief Field QINyBnVnMgFeaqXmgwsdrKoKopdy, offset: 0x1c0, size: 0x8, def value: None
 ::ArrayW<::Rewired::Controller_Hat*>  ___QINyBnVnMgFeaqXmgwsdrKoKopdy;

/// @brief Field JUiiGqfvDFtKLVjRAXlJvjNbXyft, offset: 0x1c8, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Hat*>*  ___JUiiGqfvDFtKLVjRAXlJvjNbXyft;

/// @brief Field QGPcQgCYmdnoRkMBVSEUjhJpWMYJ, offset: 0x1d0, size: 0x4, def value: None
 int32_t  ___QGPcQgCYmdnoRkMBVSEUjhJpWMYJ;

/// @brief Field sBCOebTHopxRIIgKofmLJuFncjjE, offset: 0x1d8, size: 0x8, def value: None
 ::ArrayW<::Rewired::Controller_DirectionalPad*>  ___sBCOebTHopxRIIgKofmLJuFncjjE;

/// @brief Field puKUKhMfRtaPdyHwFFKdGFSUhozs, offset: 0x1e0, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_DirectionalPad*>*  ___puKUKhMfRtaPdyHwFFKdGFSUhozs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Joystick, ___OBdhyEPRiXGJeHORIzicGUrBurUh) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Rewired::Joystick, ___OcfdOxjlyxUpYOphqxQDgpSZlHJpA) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Rewired::Joystick, ___mjZbXNcyjXoRmbHSvLAHTsuCSppjA) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Rewired::Joystick, ___XxNBtPCTSiCQESHxZKdvrgsscdGB) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Joystick, ___GyaFiSYqfRCPDZJNneDtJLZKnnsb) == 0x1a1, "Offset mismatch!");

static_assert(offsetof(::Rewired::Joystick, ___fwQeWUWNfaElYiiAyhQZViWSbHpi) == 0x1a2, "Offset mismatch!");

static_assert(offsetof(::Rewired::Joystick, ___YnAaYzicpDEzmDyNqAgSXatmaxbS) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::Rewired::Joystick, ___zvHRuDMuoqhJkLBGIVFYDdApbaoH) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Joystick, ___UOwefxBIyJFqsWdqCaOEfGetmKMb) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Joystick, ___EQjbQUmEGYtoLIwyrUVkrXJagWbE) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Joystick, ___QINyBnVnMgFeaqXmgwsdrKoKopdy) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Joystick, ___JUiiGqfvDFtKLVjRAXlJvjNbXyft) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Joystick, ___QGPcQgCYmdnoRkMBVSEUjhJpWMYJ) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Joystick, ___sBCOebTHopxRIIgKofmLJuFncjjE) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Joystick, ___puKUKhMfRtaPdyHwFFKdGFSUhozs) == 0x1e0, "Offset mismatch!");

static_assert(sizeof(::Rewired::Joystick) == 0x1e8, "Size mismatch!");

} // namespace end def Rewired
