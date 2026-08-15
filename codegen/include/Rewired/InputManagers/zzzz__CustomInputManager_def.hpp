#pragma once
// IWYU pragma private; include "Rewired/InputManagers/CustomInputManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__InputSource_def.hpp"
#include "Rewired/zzzz__PlatformInputManager_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomInputManager)
namespace Rewired::Config {
struct UpdateLoopSetting;
}
namespace Rewired::Data::Mapping {
class Platform_Custom_HardwareJoystickMap_Axis;
}
namespace Rewired::Data::Mapping {
class Platform_Custom_HardwareJoystickMap_Button;
}
namespace Rewired::InputManagers {
class CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz;
}
namespace Rewired::InputManagers {
class CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn;
}
namespace Rewired::InputManagers {
struct NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA;
}
namespace Rewired::InputManagers {
class NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA;
}
namespace Rewired::InputManagers {
class NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt;
}
namespace Rewired::Interfaces {
class IInputManagerJoystickPublic;
}
namespace Rewired::Interfaces {
class IInputManagerJoystick;
}
namespace Rewired::Interfaces {
class IInputSource;
}
namespace Rewired::Interfaces {
class IUnifiedKeyboardSource;
}
namespace Rewired::Interfaces {
class IUnifiedMouseSource;
}
namespace Rewired::Internal::Localization {
class ITryGetLocalizedName;
}
namespace Rewired::Internal::Localization {
class LocalizedString;
}
namespace Rewired::Platforms::Custom {
class CustomInputSource_Joystick;
}
namespace Rewired::Platforms::Custom {
class CustomInputSource;
}
namespace Rewired {
class BridgedControllerHWInfo;
}
namespace Rewired {
class BridgedController;
}
namespace Rewired {
class ControllerDataUpdater;
}
namespace Rewired {
class ControllerDisconnectedEventArgs;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
class HardwareJoystickMap_InputManager;
}
namespace Rewired {
struct InputSource;
}
namespace Rewired {
class PlatformInputManager;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::InputManagers {
struct NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA;
}
namespace Rewired::InputManagers {
class CustomInputManager;
}
namespace Rewired::InputManagers {
class CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz;
}
namespace Rewired::InputManagers {
class CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn;
}
namespace Rewired::InputManagers {
class NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA;
}
namespace Rewired::InputManagers {
class NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt;
}
// Write type traits
MARK_VAL_T(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA);
MARK_REF_T(::Rewired::InputManagers::CustomInputManager*);
MARK_REF_T(::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*);
MARK_REF_T(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*);
MARK_REF_T(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*);
MARK_REF_T(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*);
DEFINE_IL2CPP_CLASS(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA, "Rewired.InputManagers", "CustomInputManager/NRhlevVqfmjUkiBnWZaxThPzheXz/kjIbNNItgpJBiyiqRANUGuTAxYBKA");
DEFINE_IL2CPP_CLASS(::Rewired::InputManagers::CustomInputManager*, "Rewired.InputManagers", "CustomInputManager");
DEFINE_IL2CPP_CLASS(::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*, "Rewired.InputManagers", "CustomInputManager/NRhlevVqfmjUkiBnWZaxThPzheXz");
DEFINE_IL2CPP_CLASS(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*, "Rewired.InputManagers", "CustomInputManager/lcyQLPXSEyShDXoAjkWtDuUSlcFn");
DEFINE_IL2CPP_CLASS(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA*, "Rewired.InputManagers", "CustomInputManager/NRhlevVqfmjUkiBnWZaxThPzheXz/qBkITxiXQwSltUEaxFEIRDcxhNoeA");
DEFINE_IL2CPP_CLASS(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*, "Rewired.InputManagers", "CustomInputManager/NRhlevVqfmjUkiBnWZaxThPzheXz/rrxCkCvrTtUeUjPvvlWDPuZUPmYt");
// Dependencies Rewired.InputSource, System.Guid, System.Nullable`1<T>, System.Object
namespace Rewired::InputManagers {
// Is value type: false
// CS Name: Rewired.InputManagers.CustomInputManager/lcyQLPXSEyShDXoAjkWtDuUSlcFn
class CORDL_TYPE CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn : public ::System::Object {
public:
// Declarations
/// @brief Field GVGxgVgfTnRsGcemUJsyfIAfaZIw, offset 0xa1, size 0x1 
 __declspec(property(get=__cordl_internal_get_GVGxgVgfTnRsGcemUJsyfIAfaZIw, put=__cordl_internal_set_GVGxgVgfTnRsGcemUJsyfIAfaZIw)) bool  GVGxgVgfTnRsGcemUJsyfIAfaZIw;

/// @brief Field MhCCDUcKgxKpqHEdSrbeMCwcPPUV, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_MhCCDUcKgxKpqHEdSrbeMCwcPPUV, put=__cordl_internal_set_MhCCDUcKgxKpqHEdSrbeMCwcPPUV)) ::StringW  MhCCDUcKgxKpqHEdSrbeMCwcPPUV;

/// @brief Field MsoStfUpzrKDRvojZeVeofSKaXIhA, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_MsoStfUpzrKDRvojZeVeofSKaXIhA, put=__cordl_internal_set_MsoStfUpzrKDRvojZeVeofSKaXIhA)) bool  MsoStfUpzrKDRvojZeVeofSKaXIhA;

 __declspec(property(get=FqAoUQLzMXTcoKlVverkDsegEIWkA)) int32_t  QtRdgZfyoEAhcdphaXSxCAFPhJkKc;

 __declspec(property(get=pKNvCEdtReSnfbXhQGqMsBKTjAkW)) int32_t  QulwTtGJhlPsBBEIENAzaAePxtYI;

/// @brief Field RsiFntgSiCgBMwSODqzcaOPcbIjmb, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_RsiFntgSiCgBMwSODqzcaOPcbIjmb, put=__cordl_internal_set_RsiFntgSiCgBMwSODqzcaOPcbIjmb)) ::Rewired::Platforms::Custom::CustomInputSource_Joystick*  RsiFntgSiCgBMwSODqzcaOPcbIjmb;

/// @brief Field SSOSdXiyYYeZjPwwXphyiGqnSJYN, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_SSOSdXiyYYeZjPwwXphyiGqnSJYN, put=__cordl_internal_set_SSOSdXiyYYeZjPwwXphyiGqnSJYN)) int32_t  SSOSdXiyYYeZjPwwXphyiGqnSJYN;

/// @brief Field UmaagpWFFGSPAPkMbJKHJKzMSkiq, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_UmaagpWFFGSPAPkMbJKHJKzMSkiq, put=__cordl_internal_set_UmaagpWFFGSPAPkMbJKHJKzMSkiq)) int32_t  UmaagpWFFGSPAPkMbJKHJKzMSkiq;

/// @brief Field XCxGpjcpiRTHYMteggVvIfXWfWXGb, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_XCxGpjcpiRTHYMteggVvIfXWfWXGb, put=__cordl_internal_set_XCxGpjcpiRTHYMteggVvIfXWfWXGb)) ::Rewired::InputSource  XCxGpjcpiRTHYMteggVvIfXWfWXGb;

/// @brief Field XaGLtEeDlwgBDbdVWrIbTMRLcDRZ, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_XaGLtEeDlwgBDbdVWrIbTMRLcDRZ, put=__cordl_internal_set_XaGLtEeDlwgBDbdVWrIbTMRLcDRZ)) ::Rewired::Platforms::Custom::CustomInputSource*  XaGLtEeDlwgBDbdVWrIbTMRLcDRZ;

/// @brief Field ZWkWWdxyMjBssjMZbCRxTiPhXaWU, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZWkWWdxyMjBssjMZbCRxTiPhXaWU, put=__cordl_internal_set_ZWkWWdxyMjBssjMZbCRxTiPhXaWU)) ::StringW  ZWkWWdxyMjBssjMZbCRxTiPhXaWU;

/// @brief Field ZbgQwCUHPlGIzTARNTzwdQXojElR, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ZbgQwCUHPlGIzTARNTzwdQXojElR, put=__cordl_internal_set_ZbgQwCUHPlGIzTARNTzwdQXojElR)) int32_t  ZbgQwCUHPlGIzTARNTzwdQXojElR;

/// @brief Field brULvREuvWjGYGnPbfHQtidnpWEm, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_brULvREuvWjGYGnPbfHQtidnpWEm, put=__cordl_internal_set_brULvREuvWjGYGnPbfHQtidnpWEm)) ::Rewired::HardwareJoystickMap_InputManager*  brULvREuvWjGYGnPbfHQtidnpWEm;

 __declspec(property(get=get_extension)) ::Rewired::Controller_Extension*  extension;

 __declspec(property(get=get_inputManagerId, put=set_inputManagerId)) int32_t  inputManagerId;

 __declspec(property(get=get_instanceGuid)) ::System::Guid  instanceGuid;

/// @brief Field mqTAFiDWzTtbzABlAyKXExIEsJac, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_mqTAFiDWzTtbzABlAyKXExIEsJac, put=__cordl_internal_set_mqTAFiDWzTtbzABlAyKXExIEsJac)) ::ArrayW<float_t>  mqTAFiDWzTtbzABlAyKXExIEsJac;

 __declspec(property(get=get_name)) ::StringW  name;

/// @brief Field nzelYugYhQwOfSXKkvTuVKsAzuWu, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_nzelYugYhQwOfSXKkvTuVKsAzuWu, put=__cordl_internal_set_nzelYugYhQwOfSXKkvTuVKsAzuWu)) int32_t  nzelYugYhQwOfSXKkvTuVKsAzuWu;

 __declspec(property(get=get_persistentGuid)) ::System::Guid  persistentGuid;

/// @brief Field qAiIjhcwHuvrbavsGKwoAvtPWgUyA, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_qAiIjhcwHuvrbavsGKwoAvtPWgUyA, put=__cordl_internal_set_qAiIjhcwHuvrbavsGKwoAvtPWgUyA)) ::ArrayW<bool>  qAiIjhcwHuvrbavsGKwoAvtPWgUyA;

/// @brief Field qIdXmasDBREpHdmrdRtgbCKTQYqTA, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_qIdXmasDBREpHdmrdRtgbCKTQYqTA, put=__cordl_internal_set_qIdXmasDBREpHdmrdRtgbCKTQYqTA)) ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*  qIdXmasDBREpHdmrdRtgbCKTQYqTA;

 __declspec(property(get=get_rewiredId, put=set_rewiredId)) int32_t  rewiredId;

/// @brief Field srgJkhfrpKfYhaLyLMUflCKORXsh, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_srgJkhfrpKfYhaLyLMUflCKORXsh, put=__cordl_internal_set_srgJkhfrpKfYhaLyLMUflCKORXsh)) ::System::Nullable_1<int64_t>  srgJkhfrpKfYhaLyLMUflCKORXsh;

 __declspec(property(get=get_systemId)) ::System::Nullable_1<int64_t>  systemId;

/// @brief Field uBoyeitdXCWnsvZhErXutfzFAuZL, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_uBoyeitdXCWnsvZhErXutfzFAuZL, put=__cordl_internal_set_uBoyeitdXCWnsvZhErXutfzFAuZL)) ::Rewired::Internal::Localization::LocalizedString*  uBoyeitdXCWnsvZhErXutfzFAuZL;

 __declspec(property(get=get_unityId)) int32_t  unityId;

/// @brief Field wPMpDvQskipJlwEoZCqehRIAjMhpA, offset 0x44, size 0x10 
 __declspec(property(get=__cordl_internal_get_wPMpDvQskipJlwEoZCqehRIAjMhpA, put=__cordl_internal_set_wPMpDvQskipJlwEoZCqehRIAjMhpA)) ::System::Guid  wPMpDvQskipJlwEoZCqehRIAjMhpA;

/// @brief Field wbbFpHKIputiVcBhfachcSZnbIgBA, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_wbbFpHKIputiVcBhfachcSZnbIgBA, put=__cordl_internal_set_wbbFpHKIputiVcBhfachcSZnbIgBA)) int32_t  wbbFpHKIputiVcBhfachcSZnbIgBA;

/// @brief Field wvKByePABaeriIMviCUWBjomHWRGb, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_wvKByePABaeriIMviCUWBjomHWRGb, put=__cordl_internal_set_wvKByePABaeriIMviCUWBjomHWRGb)) ::Rewired::Controller_Extension*  wvKByePABaeriIMviCUWBjomHWRGb;

/// @brief Field xrMEzKhGWrMyVRqmzrcWBfjYkyGfA, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_xrMEzKhGWrMyVRqmzrcWBfjYkyGfA, put=__cordl_internal_set_xrMEzKhGWrMyVRqmzrcWBfjYkyGfA)) ::ArrayW<float_t>  xrMEzKhGWrMyVRqmzrcWBfjYkyGfA;

/// @brief Field ysprvzzSVUvcfNgEhkYwGoHEwddp, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_ysprvzzSVUvcfNgEhkYwGoHEwddp, put=__cordl_internal_set_ysprvzzSVUvcfNgEhkYwGoHEwddp)) ::ArrayW<bool>  ysprvzzSVUvcfNgEhkYwGoHEwddp;

/// @brief Convert operator to "::Rewired::Interfaces::IInputManagerJoystick"
constexpr operator  ::Rewired::Interfaces::IInputManagerJoystick*() noexcept;

/// @brief Convert operator to "::Rewired::Interfaces::IInputManagerJoystickPublic"
constexpr operator  ::Rewired::Interfaces::IInputManagerJoystickPublic*() noexcept;

/// @brief Convert operator to "::Rewired::Internal::Localization::ITryGetLocalizedName"
constexpr operator  ::Rewired::Internal::Localization::ITryGetLocalizedName*() noexcept;

/// @brief Method EmTSVeKFKaAiYGDripAfnzKSqJpNA, addr 0x181887520, size 0x40, virtual false, abstract: false, final false
static inline int32_t EmTSVeKFKaAiYGDripAfnzKSqJpNA(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace, ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method FillData, addr 0x181887560, size 0x110, virtual true, abstract: false, final true
inline void FillData(::Rewired::ControllerDataUpdater*  dataUpdater) ;

/// @brief Method FqAoUQLzMXTcoKlVverkDsegEIWkA, addr 0x181887670, size 0x40, virtual false, abstract: false, final false
inline int32_t FqAoUQLzMXTcoKlVverkDsegEIWkA() ;

/// @brief Method HIbUjBdcsACbEFKNvDWxFrcGEoIJb, addr 0x1818876b0, size 0x20, virtual false, abstract: false, final false
inline bool HIbUjBdcsACbEFKNvDWxFrcGEoIJb(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method KCqFRBlmZacmQblXdJicgtWZmXubb, addr 0x1818876d0, size 0x30, virtual false, abstract: false, final false
inline float_t KCqFRBlmZacmQblXdJicgtWZmXubb(int32_t  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn* New_ctor(::Rewired::Platforms::Custom::CustomInputSource*  _cordl_fixed_empty_name_whitespace, ::System::Nullable_1<int64_t>  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Platforms::Custom::CustomInputSource_Joystick*  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_5, ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method NhyuGHBGkMEAjKGJwgBnQsBLpMgHA, addr 0x181887700, size 0x120, virtual false, abstract: false, final false
inline bool NhyuGHBGkMEAjKGJwgBnQsBLpMgHA(::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button*  _cordl_fixed_empty_name_whitespace, ::by_ref<float_t>  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method QEfXDoAHixndGsLPoJBMGNgypPas, addr 0x181887820, size 0x180, virtual false, abstract: false, final false
inline void QEfXDoAHixndGsLPoJBMGNgypPas(::Rewired::BridgedController*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Rewired.Internal.Localization.ITryGetLocalizedName.TryGetLocalizedName, addr 0x1818879a0, size 0x3b0, virtual true, abstract: false, final true
inline bool Rewired_Internal_Localization_ITryGetLocalizedName_TryGetLocalizedName(::by_ref<::StringW>  value) ;

/// @brief Method SetVibration, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetVibration(float_t  amount, int32_t  motorIndex) ;

/// @brief Method StopVibration, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void StopVibration() ;

/// @brief Method ToBridgedController, addr 0x181887d50, size 0x190, virtual true, abstract: false, final true
inline ::Rewired::BridgedController* ToBridgedController() ;

/// @brief Method ToControllerDisconnectedEventArgs, addr 0x181887ee0, size 0x40, virtual true, abstract: false, final true
inline ::Rewired::ControllerDisconnectedEventArgs* ToControllerDisconnectedEventArgs() ;

/// @brief Method Update, addr 0x181887f20, size 0x2c0, virtual true, abstract: false, final true
inline void Update() ;

/// @brief Method UvxCOZucwQRJGOHdnyhksCXKHwos, addr 0x1818881e0, size 0x40, virtual false, abstract: false, final false
inline ::Rewired::BridgedControllerHWInfo* UvxCOZucwQRJGOHdnyhksCXKHwos() ;

/// @brief Method WdpSzDwucuEZldSubmTHeXSkRprg, addr 0x181888220, size 0x1d0, virtual false, abstract: false, final false
inline void WdpSzDwucuEZldSubmTHeXSkRprg() ;

/// @brief Method ZPiMiyWjErGQGfLKCliklsrecLtz, addr 0x1818883f0, size 0xb0, virtual false, abstract: false, final false
inline void ZPiMiyWjErGQGfLKCliklsrecLtz(::Rewired::BridgedControllerHWInfo*  _cordl_fixed_empty_name_whitespace) ;

constexpr bool const& __cordl_internal_get_GVGxgVgfTnRsGcemUJsyfIAfaZIw() const;

constexpr bool& __cordl_internal_get_GVGxgVgfTnRsGcemUJsyfIAfaZIw() ;

constexpr ::StringW const& __cordl_internal_get_MhCCDUcKgxKpqHEdSrbeMCwcPPUV() const;

constexpr ::StringW& __cordl_internal_get_MhCCDUcKgxKpqHEdSrbeMCwcPPUV() ;

constexpr bool const& __cordl_internal_get_MsoStfUpzrKDRvojZeVeofSKaXIhA() const;

constexpr bool& __cordl_internal_get_MsoStfUpzrKDRvojZeVeofSKaXIhA() ;

constexpr ::Rewired::Platforms::Custom::CustomInputSource_Joystick* const& __cordl_internal_get_RsiFntgSiCgBMwSODqzcaOPcbIjmb() const;

constexpr ::Rewired::Platforms::Custom::CustomInputSource_Joystick*& __cordl_internal_get_RsiFntgSiCgBMwSODqzcaOPcbIjmb() ;

constexpr int32_t const& __cordl_internal_get_SSOSdXiyYYeZjPwwXphyiGqnSJYN() const;

constexpr int32_t& __cordl_internal_get_SSOSdXiyYYeZjPwwXphyiGqnSJYN() ;

constexpr int32_t const& __cordl_internal_get_UmaagpWFFGSPAPkMbJKHJKzMSkiq() const;

constexpr int32_t& __cordl_internal_get_UmaagpWFFGSPAPkMbJKHJKzMSkiq() ;

constexpr ::Rewired::InputSource const& __cordl_internal_get_XCxGpjcpiRTHYMteggVvIfXWfWXGb() const;

constexpr ::Rewired::InputSource& __cordl_internal_get_XCxGpjcpiRTHYMteggVvIfXWfWXGb() ;

constexpr ::Rewired::Platforms::Custom::CustomInputSource* const& __cordl_internal_get_XaGLtEeDlwgBDbdVWrIbTMRLcDRZ() const;

constexpr ::Rewired::Platforms::Custom::CustomInputSource*& __cordl_internal_get_XaGLtEeDlwgBDbdVWrIbTMRLcDRZ() ;

constexpr ::StringW const& __cordl_internal_get_ZWkWWdxyMjBssjMZbCRxTiPhXaWU() const;

constexpr ::StringW& __cordl_internal_get_ZWkWWdxyMjBssjMZbCRxTiPhXaWU() ;

constexpr int32_t const& __cordl_internal_get_ZbgQwCUHPlGIzTARNTzwdQXojElR() const;

constexpr int32_t& __cordl_internal_get_ZbgQwCUHPlGIzTARNTzwdQXojElR() ;

constexpr ::Rewired::HardwareJoystickMap_InputManager* const& __cordl_internal_get_brULvREuvWjGYGnPbfHQtidnpWEm() const;

constexpr ::Rewired::HardwareJoystickMap_InputManager*& __cordl_internal_get_brULvREuvWjGYGnPbfHQtidnpWEm() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_mqTAFiDWzTtbzABlAyKXExIEsJac() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_mqTAFiDWzTtbzABlAyKXExIEsJac() ;

constexpr int32_t const& __cordl_internal_get_nzelYugYhQwOfSXKkvTuVKsAzuWu() const;

constexpr int32_t& __cordl_internal_get_nzelYugYhQwOfSXKkvTuVKsAzuWu() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_qAiIjhcwHuvrbavsGKwoAvtPWgUyA() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_qAiIjhcwHuvrbavsGKwoAvtPWgUyA() ;

constexpr ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>* const& __cordl_internal_get_qIdXmasDBREpHdmrdRtgbCKTQYqTA() const;

constexpr ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*& __cordl_internal_get_qIdXmasDBREpHdmrdRtgbCKTQYqTA() ;

constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get_srgJkhfrpKfYhaLyLMUflCKORXsh() const;

constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get_srgJkhfrpKfYhaLyLMUflCKORXsh() ;

constexpr ::Rewired::Internal::Localization::LocalizedString* const& __cordl_internal_get_uBoyeitdXCWnsvZhErXutfzFAuZL() const;

constexpr ::Rewired::Internal::Localization::LocalizedString*& __cordl_internal_get_uBoyeitdXCWnsvZhErXutfzFAuZL() ;

constexpr ::System::Guid const& __cordl_internal_get_wPMpDvQskipJlwEoZCqehRIAjMhpA() const;

constexpr ::System::Guid& __cordl_internal_get_wPMpDvQskipJlwEoZCqehRIAjMhpA() ;

constexpr int32_t const& __cordl_internal_get_wbbFpHKIputiVcBhfachcSZnbIgBA() const;

constexpr int32_t& __cordl_internal_get_wbbFpHKIputiVcBhfachcSZnbIgBA() ;

constexpr ::Rewired::Controller_Extension* const& __cordl_internal_get_wvKByePABaeriIMviCUWBjomHWRGb() const;

constexpr ::Rewired::Controller_Extension*& __cordl_internal_get_wvKByePABaeriIMviCUWBjomHWRGb() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_xrMEzKhGWrMyVRqmzrcWBfjYkyGfA() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_xrMEzKhGWrMyVRqmzrcWBfjYkyGfA() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_ysprvzzSVUvcfNgEhkYwGoHEwddp() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_ysprvzzSVUvcfNgEhkYwGoHEwddp() ;

constexpr void __cordl_internal_set_GVGxgVgfTnRsGcemUJsyfIAfaZIw(bool  value) ;

constexpr void __cordl_internal_set_MhCCDUcKgxKpqHEdSrbeMCwcPPUV(::StringW  value) ;

constexpr void __cordl_internal_set_MsoStfUpzrKDRvojZeVeofSKaXIhA(bool  value) ;

constexpr void __cordl_internal_set_RsiFntgSiCgBMwSODqzcaOPcbIjmb(::Rewired::Platforms::Custom::CustomInputSource_Joystick*  value) ;

constexpr void __cordl_internal_set_SSOSdXiyYYeZjPwwXphyiGqnSJYN(int32_t  value) ;

constexpr void __cordl_internal_set_UmaagpWFFGSPAPkMbJKHJKzMSkiq(int32_t  value) ;

constexpr void __cordl_internal_set_XCxGpjcpiRTHYMteggVvIfXWfWXGb(::Rewired::InputSource  value) ;

constexpr void __cordl_internal_set_XaGLtEeDlwgBDbdVWrIbTMRLcDRZ(::Rewired::Platforms::Custom::CustomInputSource*  value) ;

constexpr void __cordl_internal_set_ZWkWWdxyMjBssjMZbCRxTiPhXaWU(::StringW  value) ;

constexpr void __cordl_internal_set_ZbgQwCUHPlGIzTARNTzwdQXojElR(int32_t  value) ;

constexpr void __cordl_internal_set_brULvREuvWjGYGnPbfHQtidnpWEm(::Rewired::HardwareJoystickMap_InputManager*  value) ;

constexpr void __cordl_internal_set_mqTAFiDWzTtbzABlAyKXExIEsJac(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_nzelYugYhQwOfSXKkvTuVKsAzuWu(int32_t  value) ;

constexpr void __cordl_internal_set_qAiIjhcwHuvrbavsGKwoAvtPWgUyA(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_qIdXmasDBREpHdmrdRtgbCKTQYqTA(::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*  value) ;

constexpr void __cordl_internal_set_srgJkhfrpKfYhaLyLMUflCKORXsh(::System::Nullable_1<int64_t>  value) ;

constexpr void __cordl_internal_set_uBoyeitdXCWnsvZhErXutfzFAuZL(::Rewired::Internal::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set_wPMpDvQskipJlwEoZCqehRIAjMhpA(::System::Guid  value) ;

constexpr void __cordl_internal_set_wbbFpHKIputiVcBhfachcSZnbIgBA(int32_t  value) ;

constexpr void __cordl_internal_set_wvKByePABaeriIMviCUWBjomHWRGb(::Rewired::Controller_Extension*  value) ;

constexpr void __cordl_internal_set_xrMEzKhGWrMyVRqmzrcWBfjYkyGfA(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_ysprvzzSVUvcfNgEhkYwGoHEwddp(::ArrayW<bool>  value) ;

/// @brief Method .ctor, addr 0x1818884a0, size 0x2d0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Platforms::Custom::CustomInputSource*  _cordl_fixed_empty_name_whitespace, ::System::Nullable_1<int64_t>  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Platforms::Custom::CustomInputSource_Joystick*  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_5, ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method cbdQZIICUiJfCHGQCDdDMRACITUu, addr 0x181888770, size 0x90, virtual false, abstract: false, final false
static inline int32_t cbdQZIICUiJfCHGQCDdDMRACITUu(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace, ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method gAbZRxHjpXPVipiotEWxViYjwLjE, addr 0x181888800, size 0xa0, virtual false, abstract: false, final false
inline int32_t gAbZRxHjpXPVipiotEWxViYjwLjE(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method gajaOqcwRInwSMKrWCjeLqUEdOXqA, addr 0x1818888a0, size 0x70, virtual false, abstract: false, final false
inline void gajaOqcwRInwSMKrWCjeLqUEdOXqA() ;

/// @brief Method get_extension, addr 0x1802d97e0, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::Controller_Extension* get_extension() ;

/// @brief Method get_inputManagerId, addr 0x1803914b0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_inputManagerId() ;

/// @brief Method get_instanceGuid, addr 0x181888910, size 0xa0, virtual true, abstract: false, final true
inline ::System::Guid get_instanceGuid() ;

/// @brief Method get_name, addr 0x1818889b0, size 0x70, virtual true, abstract: false, final true
inline ::StringW get_name() ;

/// @brief Method get_persistentGuid, addr 0x181888a20, size 0x110, virtual true, abstract: false, final true
inline ::System::Guid get_persistentGuid() ;

/// @brief Method get_rewiredId, addr 0x1803914a0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_rewiredId() ;

/// @brief Method get_systemId, addr 0x1802e30e0, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<int64_t> get_systemId() ;

/// @brief Method get_unityId, addr 0x1803eb0e0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_unityId() ;

/// @brief Convert to "::Rewired::Interfaces::IInputManagerJoystick"
constexpr ::Rewired::Interfaces::IInputManagerJoystick* i___Rewired__Interfaces__IInputManagerJoystick() noexcept;

/// @brief Convert to "::Rewired::Interfaces::IInputManagerJoystickPublic"
constexpr ::Rewired::Interfaces::IInputManagerJoystickPublic* i___Rewired__Interfaces__IInputManagerJoystickPublic() noexcept;

/// @brief Convert to "::Rewired::Internal::Localization::ITryGetLocalizedName"
constexpr ::Rewired::Internal::Localization::ITryGetLocalizedName* i___Rewired__Internal__Localization__ITryGetLocalizedName() noexcept;

/// @brief Method inpSfgmpmxCJhwyCkuTibIqCHjye, addr 0x181888b30, size 0x140, virtual false, abstract: false, final false
inline void inpSfgmpmxCJhwyCkuTibIqCHjye() ;

/// @brief Method pKNvCEdtReSnfbXhQGqMsBKTjAkW, addr 0x181888c70, size 0x40, virtual false, abstract: false, final false
inline int32_t pKNvCEdtReSnfbXhQGqMsBKTjAkW() ;

/// @brief Method pePinqIBGwouBbFMvcJpdveJmnYuA, addr 0x181888cb0, size 0x30, virtual false, abstract: false, final false
inline void pePinqIBGwouBbFMvcJpdveJmnYuA() ;

/// @brief Method set_inputManagerId, addr 0x1803914d0, size 0x10, virtual false, abstract: false, final false
inline void set_inputManagerId(int32_t  value) ;

/// @brief Method set_rewiredId, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void set_rewiredId(int32_t  value) ;

/// @brief Method tCPFrzcDInuTgKbyGWDKCIdtcZXAb, addr 0x181888ce0, size 0x2f0, virtual false, abstract: false, final false
inline ::StringW tCPFrzcDInuTgKbyGWDKCIdtcZXAb() ;

/// @brief Method wWprSmvnbruWmOOzYhjegNjJmXuJ, addr 0x181888fd0, size 0xc0, virtual false, abstract: false, final false
inline float_t wWprSmvnbruWmOOzYhjegNjJmXuJ(::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method xtRklQqfMbzwYOKMLjoUqERXhBQA, addr 0x181889090, size 0x1b0, virtual false, abstract: false, final false
inline void xtRklQqfMbzwYOKMLjoUqERXhBQA() ;

/// @brief Method yvseQBjvPLCmFhJLxbuKlyrfVBBdA, addr 0x181889240, size 0x90, virtual false, abstract: false, final false
inline bool yvseQBjvPLCmFhJLxbuKlyrfVBBdA(int32_t  _cordl_fixed_empty_name_whitespace, ::by_ref<float_t>  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn(CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn(CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2216};

/// @brief Field XCxGpjcpiRTHYMteggVvIfXWfWXGb, offset: 0x10, size: 0x4, def value: None
 ::Rewired::InputSource  ___XCxGpjcpiRTHYMteggVvIfXWfWXGb;

/// @brief Field XaGLtEeDlwgBDbdVWrIbTMRLcDRZ, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Platforms::Custom::CustomInputSource*  ___XaGLtEeDlwgBDbdVWrIbTMRLcDRZ;

/// @brief Field wvKByePABaeriIMviCUWBjomHWRGb, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Controller_Extension*  ___wvKByePABaeriIMviCUWBjomHWRGb;

/// @brief Field UmaagpWFFGSPAPkMbJKHJKzMSkiq, offset: 0x28, size: 0x4, def value: None
 int32_t  ___UmaagpWFFGSPAPkMbJKHJKzMSkiq;

/// @brief Field wbbFpHKIputiVcBhfachcSZnbIgBA, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___wbbFpHKIputiVcBhfachcSZnbIgBA;

/// @brief Field srgJkhfrpKfYhaLyLMUflCKORXsh, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  ___srgJkhfrpKfYhaLyLMUflCKORXsh;

/// @brief Field SSOSdXiyYYeZjPwwXphyiGqnSJYN, offset: 0x40, size: 0x4, def value: None
 int32_t  ___SSOSdXiyYYeZjPwwXphyiGqnSJYN;

/// @brief Field wPMpDvQskipJlwEoZCqehRIAjMhpA, offset: 0x44, size: 0x10, def value: None
 ::System::Guid  ___wPMpDvQskipJlwEoZCqehRIAjMhpA;

/// @brief Field ZWkWWdxyMjBssjMZbCRxTiPhXaWU, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___ZWkWWdxyMjBssjMZbCRxTiPhXaWU;

/// @brief Field MhCCDUcKgxKpqHEdSrbeMCwcPPUV, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___MhCCDUcKgxKpqHEdSrbeMCwcPPUV;

/// @brief Field nzelYugYhQwOfSXKkvTuVKsAzuWu, offset: 0x68, size: 0x4, def value: None
 int32_t  ___nzelYugYhQwOfSXKkvTuVKsAzuWu;

/// @brief Field ZbgQwCUHPlGIzTARNTzwdQXojElR, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___ZbgQwCUHPlGIzTARNTzwdQXojElR;

/// @brief Field xrMEzKhGWrMyVRqmzrcWBfjYkyGfA, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<float_t>  ___xrMEzKhGWrMyVRqmzrcWBfjYkyGfA;

/// @brief Field qAiIjhcwHuvrbavsGKwoAvtPWgUyA, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<bool>  ___qAiIjhcwHuvrbavsGKwoAvtPWgUyA;

/// @brief Field mqTAFiDWzTtbzABlAyKXExIEsJac, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<float_t>  ___mqTAFiDWzTtbzABlAyKXExIEsJac;

/// @brief Field ysprvzzSVUvcfNgEhkYwGoHEwddp, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<bool>  ___ysprvzzSVUvcfNgEhkYwGoHEwddp;

/// @brief Field brULvREuvWjGYGnPbfHQtidnpWEm, offset: 0x90, size: 0x8, def value: None
 ::Rewired::HardwareJoystickMap_InputManager*  ___brULvREuvWjGYGnPbfHQtidnpWEm;

/// @brief Field RsiFntgSiCgBMwSODqzcaOPcbIjmb, offset: 0x98, size: 0x8, def value: None
 ::Rewired::Platforms::Custom::CustomInputSource_Joystick*  ___RsiFntgSiCgBMwSODqzcaOPcbIjmb;

/// @brief Field MsoStfUpzrKDRvojZeVeofSKaXIhA, offset: 0xa0, size: 0x1, def value: None
 bool  ___MsoStfUpzrKDRvojZeVeofSKaXIhA;

/// @brief Field GVGxgVgfTnRsGcemUJsyfIAfaZIw, offset: 0xa1, size: 0x1, def value: None
 bool  ___GVGxgVgfTnRsGcemUJsyfIAfaZIw;

/// @brief Field uBoyeitdXCWnsvZhErXutfzFAuZL, offset: 0xa8, size: 0x8, def value: None
 ::Rewired::Internal::Localization::LocalizedString*  ___uBoyeitdXCWnsvZhErXutfzFAuZL;

/// @brief Field qIdXmasDBREpHdmrdRtgbCKTQYqTA, offset: 0xb0, size: 0x8, def value: None
 ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*  ___qIdXmasDBREpHdmrdRtgbCKTQYqTA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___XCxGpjcpiRTHYMteggVvIfXWfWXGb) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___XaGLtEeDlwgBDbdVWrIbTMRLcDRZ) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___wvKByePABaeriIMviCUWBjomHWRGb) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___UmaagpWFFGSPAPkMbJKHJKzMSkiq) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___wbbFpHKIputiVcBhfachcSZnbIgBA) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___srgJkhfrpKfYhaLyLMUflCKORXsh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___SSOSdXiyYYeZjPwwXphyiGqnSJYN) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___wPMpDvQskipJlwEoZCqehRIAjMhpA) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___ZWkWWdxyMjBssjMZbCRxTiPhXaWU) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___MhCCDUcKgxKpqHEdSrbeMCwcPPUV) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___nzelYugYhQwOfSXKkvTuVKsAzuWu) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___ZbgQwCUHPlGIzTARNTzwdQXojElR) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___xrMEzKhGWrMyVRqmzrcWBfjYkyGfA) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___qAiIjhcwHuvrbavsGKwoAvtPWgUyA) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___mqTAFiDWzTtbzABlAyKXExIEsJac) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___ysprvzzSVUvcfNgEhkYwGoHEwddp) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___brULvREuvWjGYGnPbfHQtidnpWEm) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___RsiFntgSiCgBMwSODqzcaOPcbIjmb) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___MsoStfUpzrKDRvojZeVeofSKaXIhA) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___GVGxgVgfTnRsGcemUJsyfIAfaZIw) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___uBoyeitdXCWnsvZhErXutfzFAuZL) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn, ___qIdXmasDBREpHdmrdRtgbCKTQYqTA) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn) == 0xb8, "Size mismatch!");

} // namespace end def Rewired::InputManagers
// Dependencies 
namespace Rewired::InputManagers {
// Is value type: true
// CS Name: Rewired.InputManagers.CustomInputManager/NRhlevVqfmjUkiBnWZaxThPzheXz/kjIbNNItgpJBiyiqRANUGuTAxYBKA
struct CORDL_TYPE NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA_Unwrapped
enum struct __NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA_Unwrapped : int32_t {
__E_Exact = static_cast<int32_t>(0x0),
__E_Approximate = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA_Unwrapped () const noexcept {
return static_cast<__NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA(int32_t  value__) noexcept;

/// @brief Field Approximate value: I32(1)
static ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA const Approximate;

/// @brief Field Exact value: I32(0)
static ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA const Exact;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2217};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA) == 0x4, "Size mismatch!");

} // namespace end def Rewired::InputManagers
// Dependencies System.Nullable`1<T>, System.Object
namespace Rewired::InputManagers {
// Is value type: false
// CS Name: Rewired.InputManagers.CustomInputManager/NRhlevVqfmjUkiBnWZaxThPzheXz/rrxCkCvrTtUeUjPvvlWDPuZUPmYt
class CORDL_TYPE NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt : public ::System::Object {
public:
// Declarations
/// @brief Field FiEmnedUUBdEGnOQQgsYhqEhyZIH, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_FiEmnedUUBdEGnOQQgsYhqEhyZIH, put=__cordl_internal_set_FiEmnedUUBdEGnOQQgsYhqEhyZIH)) ::StringW  FiEmnedUUBdEGnOQQgsYhqEhyZIH;

/// @brief Field LzKtwhhPKgCedAQoBSWttOqJMYkL, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_LzKtwhhPKgCedAQoBSWttOqJMYkL, put=__cordl_internal_set_LzKtwhhPKgCedAQoBSWttOqJMYkL)) ::System::Nullable_1<int64_t>  LzKtwhhPKgCedAQoBSWttOqJMYkL;

/// @brief Field ZJHBmHXyhNrfFylYuRsnpMEVVlpC, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ZJHBmHXyhNrfFylYuRsnpMEVVlpC, put=__cordl_internal_set_ZJHBmHXyhNrfFylYuRsnpMEVVlpC)) int32_t  ZJHBmHXyhNrfFylYuRsnpMEVVlpC;

/// @brief Field aAKzpLmyYbNXAshNXhaSrmuEJALt, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_aAKzpLmyYbNXAshNXhaSrmuEJALt, put=__cordl_internal_set_aAKzpLmyYbNXAshNXhaSrmuEJALt)) int32_t  aAKzpLmyYbNXAshNXhaSrmuEJALt;

/// @brief Field iVfCfsMGsdTmfhraQfwxFfxbrvaK, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_iVfCfsMGsdTmfhraQfwxFfxbrvaK, put=__cordl_internal_set_iVfCfsMGsdTmfhraQfwxFfxbrvaK)) int32_t  iVfCfsMGsdTmfhraQfwxFfxbrvaK;

/// @brief Field pBofHVMdFLGBmRVVKGbyjhPfECciA, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_pBofHVMdFLGBmRVVKGbyjhPfECciA, put=__cordl_internal_set_pBofHVMdFLGBmRVVKGbyjhPfECciA)) int32_t  pBofHVMdFLGBmRVVKGbyjhPfECciA;

static inline ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Nullable_1<int64_t>  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method XNgYcXlDxZFKCyTlhiWuwfETUmWi, addr 0x18188a610, size 0xf0, virtual false, abstract: false, final false
inline bool XNgYcXlDxZFKCyTlhiWuwfETUmWi(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace, ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::StringW const& __cordl_internal_get_FiEmnedUUBdEGnOQQgsYhqEhyZIH() const;

constexpr ::StringW& __cordl_internal_get_FiEmnedUUBdEGnOQQgsYhqEhyZIH() ;

constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get_LzKtwhhPKgCedAQoBSWttOqJMYkL() const;

constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get_LzKtwhhPKgCedAQoBSWttOqJMYkL() ;

constexpr int32_t const& __cordl_internal_get_ZJHBmHXyhNrfFylYuRsnpMEVVlpC() const;

constexpr int32_t& __cordl_internal_get_ZJHBmHXyhNrfFylYuRsnpMEVVlpC() ;

constexpr int32_t const& __cordl_internal_get_aAKzpLmyYbNXAshNXhaSrmuEJALt() const;

constexpr int32_t& __cordl_internal_get_aAKzpLmyYbNXAshNXhaSrmuEJALt() ;

constexpr int32_t const& __cordl_internal_get_iVfCfsMGsdTmfhraQfwxFfxbrvaK() const;

constexpr int32_t& __cordl_internal_get_iVfCfsMGsdTmfhraQfwxFfxbrvaK() ;

constexpr int32_t const& __cordl_internal_get_pBofHVMdFLGBmRVVKGbyjhPfECciA() const;

constexpr int32_t& __cordl_internal_get_pBofHVMdFLGBmRVVKGbyjhPfECciA() ;

constexpr void __cordl_internal_set_FiEmnedUUBdEGnOQQgsYhqEhyZIH(::StringW  value) ;

constexpr void __cordl_internal_set_LzKtwhhPKgCedAQoBSWttOqJMYkL(::System::Nullable_1<int64_t>  value) ;

constexpr void __cordl_internal_set_ZJHBmHXyhNrfFylYuRsnpMEVVlpC(int32_t  value) ;

constexpr void __cordl_internal_set_aAKzpLmyYbNXAshNXhaSrmuEJALt(int32_t  value) ;

constexpr void __cordl_internal_set_iVfCfsMGsdTmfhraQfwxFfxbrvaK(int32_t  value) ;

constexpr void __cordl_internal_set_pBofHVMdFLGBmRVVKGbyjhPfECciA(int32_t  value) ;

/// @brief Method .ctor, addr 0x18188a700, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Nullable_1<int64_t>  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt(NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt(NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2218};

/// @brief Field ZJHBmHXyhNrfFylYuRsnpMEVVlpC, offset: 0x10, size: 0x4, def value: None
 int32_t  ___ZJHBmHXyhNrfFylYuRsnpMEVVlpC;

/// @brief Field LzKtwhhPKgCedAQoBSWttOqJMYkL, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  ___LzKtwhhPKgCedAQoBSWttOqJMYkL;

/// @brief Field FiEmnedUUBdEGnOQQgsYhqEhyZIH, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___FiEmnedUUBdEGnOQQgsYhqEhyZIH;

/// @brief Field aAKzpLmyYbNXAshNXhaSrmuEJALt, offset: 0x30, size: 0x4, def value: None
 int32_t  ___aAKzpLmyYbNXAshNXhaSrmuEJALt;

/// @brief Field pBofHVMdFLGBmRVVKGbyjhPfECciA, offset: 0x34, size: 0x4, def value: None
 int32_t  ___pBofHVMdFLGBmRVVKGbyjhPfECciA;

/// @brief Field iVfCfsMGsdTmfhraQfwxFfxbrvaK, offset: 0x38, size: 0x4, def value: None
 int32_t  ___iVfCfsMGsdTmfhraQfwxFfxbrvaK;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt, ___ZJHBmHXyhNrfFylYuRsnpMEVVlpC) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt, ___LzKtwhhPKgCedAQoBSWttOqJMYkL) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt, ___FiEmnedUUBdEGnOQQgsYhqEhyZIH) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt, ___aAKzpLmyYbNXAshNXhaSrmuEJALt) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt, ___pBofHVMdFLGBmRVVKGbyjhPfECciA) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt, ___iVfCfsMGsdTmfhraQfwxFfxbrvaK) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt) == 0x40, "Size mismatch!");

} // namespace end def Rewired::InputManagers
// Dependencies Rewired.InputManagers.CustomInputManager::NRhlevVqfmjUkiBnWZaxThPzheXz::kjIbNNItgpJBiyiqRANUGuTAxYBKA, System.Object
namespace Rewired::InputManagers {
// Is value type: false
// CS Name: Rewired.InputManagers.CustomInputManager/NRhlevVqfmjUkiBnWZaxThPzheXz/qBkITxiXQwSltUEaxFEIRDcxhNoeA
class CORDL_TYPE NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA : public ::System::Object {
public:
// Declarations
/// @brief Field BNdBNyDukNkrlClxkDLriHKitghu, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_BNdBNyDukNkrlClxkDLriHKitghu, put=__cordl_internal_set_BNdBNyDukNkrlClxkDLriHKitghu)) ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  BNdBNyDukNkrlClxkDLriHKitghu;

/// @brief Field JcIeRAyCGdEwTinLoMjjUujWEQCW, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_JcIeRAyCGdEwTinLoMjjUujWEQCW, put=__cordl_internal_set_JcIeRAyCGdEwTinLoMjjUujWEQCW)) ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  JcIeRAyCGdEwTinLoMjjUujWEQCW;

/// @brief Field JccqhRTGiOubqqeithVHCovKniOyA, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_JccqhRTGiOubqqeithVHCovKniOyA, put=__cordl_internal_set_JccqhRTGiOubqqeithVHCovKniOyA)) ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*  JccqhRTGiOubqqeithVHCovKniOyA;

/// @brief Field MJDqmVGFlrKMEOXdVwuKlMJFIEKp, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MJDqmVGFlrKMEOXdVwuKlMJFIEKp, put=__cordl_internal_set_MJDqmVGFlrKMEOXdVwuKlMJFIEKp)) ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*  MJDqmVGFlrKMEOXdVwuKlMJFIEKp;

/// @brief Field RtreqBEJpCtDXeotMSeSofxXvWhm, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_RtreqBEJpCtDXeotMSeSofxXvWhm, put=__cordl_internal_set_RtreqBEJpCtDXeotMSeSofxXvWhm)) int32_t  RtreqBEJpCtDXeotMSeSofxXvWhm;

/// @brief Field SKEBNGYchTkEKfwozptYhFPwqYyB, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_SKEBNGYchTkEKfwozptYhFPwqYyB, put=__cordl_internal_set_SKEBNGYchTkEKfwozptYhFPwqYyB)) int32_t  SKEBNGYchTkEKfwozptYhFPwqYyB;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_InputManagers_CustomInputManager_JoystickRecords_Record__get_Current)) ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*  System_Collections_Generic_IEnumerator_Rewired_InputManagers_CustomInputManager_JoystickRecords_Record__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field ZOfEfLiicqhXBQflPdXjZFPHGIZBA, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_ZOfEfLiicqhXBQflPdXjZFPHGIZBA, put=__cordl_internal_set_ZOfEfLiicqhXBQflPdXjZFPHGIZBA)) ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  ZOfEfLiicqhXBQflPdXjZFPHGIZBA;

/// @brief Field cZlDlbBVqRRrOaafhUTQjZsCphpTA, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_cZlDlbBVqRRrOaafhUTQjZsCphpTA, put=__cordl_internal_set_cZlDlbBVqRRrOaafhUTQjZsCphpTA)) int32_t  cZlDlbBVqRRrOaafhUTQjZsCphpTA;

/// @brief Field hrQrLkaQGQSHNSShzHzxDGgkQesR, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_hrQrLkaQGQSHNSShzHzxDGgkQesR, put=__cordl_internal_set_hrQrLkaQGQSHNSShzHzxDGgkQesR)) ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  hrQrLkaQGQSHNSShzHzxDGgkQesR;

/// @brief Field zZGUHFFaHqdLhBHdrBANTsgAPMag, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_zZGUHFFaHqdLhBHdrBANTsgAPMag, put=__cordl_internal_set_zZGUHFFaHqdLhBHdrBANTsgAPMag)) int32_t  zZGUHFFaHqdLhBHdrBANTsgAPMag;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181889560, size 0xe0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.InputManagers.CustomInputManager.JoystickRecords.Record>.GetEnumerator, addr 0x181889640, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>* System_Collections_Generic_IEnumerable_Rewired_InputManagers_CustomInputManager_JoystickRecords_Record__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.InputManagers.CustomInputManager.JoystickRecords.Record>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt* System_Collections_Generic_IEnumerator_Rewired_InputManagers_CustomInputManager_JoystickRecords_Record__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181889640, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181049e50, size 0x6fe0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn* const& __cordl_internal_get_BNdBNyDukNkrlClxkDLriHKitghu() const;

constexpr ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*& __cordl_internal_get_BNdBNyDukNkrlClxkDLriHKitghu() ;

constexpr ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA const& __cordl_internal_get_JcIeRAyCGdEwTinLoMjjUujWEQCW() const;

constexpr ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA& __cordl_internal_get_JcIeRAyCGdEwTinLoMjjUujWEQCW() ;

constexpr ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt* const& __cordl_internal_get_JccqhRTGiOubqqeithVHCovKniOyA() const;

constexpr ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*& __cordl_internal_get_JccqhRTGiOubqqeithVHCovKniOyA() ;

constexpr ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz* const& __cordl_internal_get_MJDqmVGFlrKMEOXdVwuKlMJFIEKp() const;

constexpr ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*& __cordl_internal_get_MJDqmVGFlrKMEOXdVwuKlMJFIEKp() ;

constexpr int32_t const& __cordl_internal_get_RtreqBEJpCtDXeotMSeSofxXvWhm() const;

constexpr int32_t& __cordl_internal_get_RtreqBEJpCtDXeotMSeSofxXvWhm() ;

constexpr int32_t const& __cordl_internal_get_SKEBNGYchTkEKfwozptYhFPwqYyB() const;

constexpr int32_t& __cordl_internal_get_SKEBNGYchTkEKfwozptYhFPwqYyB() ;

constexpr ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA const& __cordl_internal_get_ZOfEfLiicqhXBQflPdXjZFPHGIZBA() const;

constexpr ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA& __cordl_internal_get_ZOfEfLiicqhXBQflPdXjZFPHGIZBA() ;

constexpr int32_t const& __cordl_internal_get_cZlDlbBVqRRrOaafhUTQjZsCphpTA() const;

constexpr int32_t& __cordl_internal_get_cZlDlbBVqRRrOaafhUTQjZsCphpTA() ;

constexpr ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn* const& __cordl_internal_get_hrQrLkaQGQSHNSShzHzxDGgkQesR() const;

constexpr ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*& __cordl_internal_get_hrQrLkaQGQSHNSShzHzxDGgkQesR() ;

constexpr int32_t const& __cordl_internal_get_zZGUHFFaHqdLhBHdrBANTsgAPMag() const;

constexpr int32_t& __cordl_internal_get_zZGUHFFaHqdLhBHdrBANTsgAPMag() ;

constexpr void __cordl_internal_set_BNdBNyDukNkrlClxkDLriHKitghu(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  value) ;

constexpr void __cordl_internal_set_JcIeRAyCGdEwTinLoMjjUujWEQCW(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  value) ;

constexpr void __cordl_internal_set_JccqhRTGiOubqqeithVHCovKniOyA(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*  value) ;

constexpr void __cordl_internal_set_MJDqmVGFlrKMEOXdVwuKlMJFIEKp(::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*  value) ;

constexpr void __cordl_internal_set_RtreqBEJpCtDXeotMSeSofxXvWhm(int32_t  value) ;

constexpr void __cordl_internal_set_SKEBNGYchTkEKfwozptYhFPwqYyB(int32_t  value) ;

constexpr void __cordl_internal_set_ZOfEfLiicqhXBQflPdXjZFPHGIZBA(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  value) ;

constexpr void __cordl_internal_set_cZlDlbBVqRRrOaafhUTQjZsCphpTA(int32_t  value) ;

constexpr void __cordl_internal_set_hrQrLkaQGQSHNSShzHzxDGgkQesR(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  value) ;

constexpr void __cordl_internal_set_zZGUHFFaHqdLhBHdrBANTsgAPMag(int32_t  value) ;

/// @brief Method .ctor, addr 0x180d66740, size 0x3cb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>* i___System__Collections__Generic__IEnumerable_1___Rewired__InputManagers__NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>* i___System__Collections__Generic__IEnumerator_1___Rewired__InputManagers__NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA(NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA(NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2219};

/// @brief Field RtreqBEJpCtDXeotMSeSofxXvWhm, offset: 0x10, size: 0x4, def value: None
 int32_t  ___RtreqBEJpCtDXeotMSeSofxXvWhm;

/// @brief Field JccqhRTGiOubqqeithVHCovKniOyA, offset: 0x18, size: 0x8, def value: None
 ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*  ___JccqhRTGiOubqqeithVHCovKniOyA;

/// @brief Field cZlDlbBVqRRrOaafhUTQjZsCphpTA, offset: 0x20, size: 0x4, def value: None
 int32_t  ___cZlDlbBVqRRrOaafhUTQjZsCphpTA;

/// @brief Field MJDqmVGFlrKMEOXdVwuKlMJFIEKp, offset: 0x28, size: 0x8, def value: None
 ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*  ___MJDqmVGFlrKMEOXdVwuKlMJFIEKp;

/// @brief Field BNdBNyDukNkrlClxkDLriHKitghu, offset: 0x30, size: 0x8, def value: None
 ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  ___BNdBNyDukNkrlClxkDLriHKitghu;

/// @brief Field hrQrLkaQGQSHNSShzHzxDGgkQesR, offset: 0x38, size: 0x8, def value: None
 ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  ___hrQrLkaQGQSHNSShzHzxDGgkQesR;

/// @brief Field ZOfEfLiicqhXBQflPdXjZFPHGIZBA, offset: 0x40, size: 0x4, def value: None
 ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  ___ZOfEfLiicqhXBQflPdXjZFPHGIZBA;

/// @brief Field JcIeRAyCGdEwTinLoMjjUujWEQCW, offset: 0x44, size: 0x4, def value: None
 ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  ___JcIeRAyCGdEwTinLoMjjUujWEQCW;

/// @brief Field SKEBNGYchTkEKfwozptYhFPwqYyB, offset: 0x48, size: 0x4, def value: None
 int32_t  ___SKEBNGYchTkEKfwozptYhFPwqYyB;

/// @brief Field zZGUHFFaHqdLhBHdrBANTsgAPMag, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___zZGUHFFaHqdLhBHdrBANTsgAPMag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA, ___RtreqBEJpCtDXeotMSeSofxXvWhm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA, ___JccqhRTGiOubqqeithVHCovKniOyA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA, ___cZlDlbBVqRRrOaafhUTQjZsCphpTA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA, ___MJDqmVGFlrKMEOXdVwuKlMJFIEKp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA, ___BNdBNyDukNkrlClxkDLriHKitghu) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA, ___hrQrLkaQGQSHNSShzHzxDGgkQesR) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA, ___ZOfEfLiicqhXBQflPdXjZFPHGIZBA) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA, ___JcIeRAyCGdEwTinLoMjjUujWEQCW) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA, ___SKEBNGYchTkEKfwozptYhFPwqYyB) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA, ___zZGUHFFaHqdLhBHdrBANTsgAPMag) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA) == 0x50, "Size mismatch!");

} // namespace end def Rewired::InputManagers
// Dependencies System.Object
namespace Rewired::InputManagers {
// Is value type: false
// CS Name: Rewired.InputManagers.CustomInputManager/NRhlevVqfmjUkiBnWZaxThPzheXz
class CORDL_TYPE CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz : public ::System::Object {
public:
// Declarations
using kjIbNNItgpJBiyiqRANUGuTAxYBKA = ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA;

using qBkITxiXQwSltUEaxFEIRDcxhNoeA = ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_qBkITxiXQwSltUEaxFEIRDcxhNoeA;

using rrxCkCvrTtUeUjPvvlWDPuZUPmYt = ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt;

 __declspec(property(get=aeUQzXOgATFbKkBVlnpbDNIbhDEHA)) int32_t  MUkRwyGgVeVtaibTUdPuyLnABAlB;

/// @brief Field PoJYMRJDsBiFIIIbwsXzxsiMkNFf, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PoJYMRJDsBiFIIIbwsXzxsiMkNFf, put=__cordl_internal_set_PoJYMRJDsBiFIIIbwsXzxsiMkNFf)) ::System::Collections::Generic::List_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>*  PoJYMRJDsBiFIIIbwsXzxsiMkNFf;

/// @brief Method CIuSgIXqgeVPmVNqCZRavsyBEiCHA, addr 0x181882580, size 0x400, virtual false, abstract: false, final false
inline void CIuSgIXqgeVPmVNqCZRavsyBEiCHA(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method CmiRuwQTjwacOaWypPgZxuzLtUOo, addr 0x181882980, size 0xa0, virtual false, abstract: false, final false
inline void CmiRuwQTjwacOaWypPgZxuzLtUOo(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz* New_ctor() ;

/// @brief Method TrQECzUXPEFcVqfbbHdEHOuBPPqGb, addr 0x181882a20, size 0x60, virtual false, abstract: false, final false
inline int32_t TrQECzUXPEFcVqfbbHdEHOuBPPqGb(::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::System::Collections::Generic::List_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>* const& __cordl_internal_get_PoJYMRJDsBiFIIIbwsXzxsiMkNFf() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>*& __cordl_internal_get_PoJYMRJDsBiFIIIbwsXzxsiMkNFf() ;

constexpr void __cordl_internal_set_PoJYMRJDsBiFIIIbwsXzxsiMkNFf(::System::Collections::Generic::List_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>*  value) ;

/// @brief Method .ctor, addr 0x181882a80, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method aeUQzXOgATFbKkBVlnpbDNIbhDEHA, addr 0x1802f4180, size 0x20, virtual false, abstract: false, final false
inline int32_t aeUQzXOgATFbKkBVlnpbDNIbhDEHA() ;

/// @brief Method ocyUZTtTqxveUcdubZEzGYRygDVs, addr 0x181882ad0, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>* ocyUZTtTqxveUcdubZEzGYRygDVs(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace, ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method vUBdwGhUMkNRVdthnGWZYosfIjQRA, addr 0x181882b50, size 0xa0, virtual false, abstract: false, final false
inline bool vUBdwGhUMkNRVdthnGWZYosfIjQRA(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace, ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz(CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz(CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2220};

/// @brief Field PoJYMRJDsBiFIIIbwsXzxsiMkNFf, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_rrxCkCvrTtUeUjPvvlWDPuZUPmYt*>*  ___PoJYMRJDsBiFIIIbwsXzxsiMkNFf;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz, ___PoJYMRJDsBiFIIIbwsXzxsiMkNFf) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz) == 0x18, "Size mismatch!");

} // namespace end def Rewired::InputManagers
// Dependencies Rewired.PlatformInputManager, Rewired.UpdateLoopType
namespace Rewired::InputManagers {
// Is value type: false
// CS Name: Rewired.InputManagers.CustomInputManager
class CORDL_TYPE CustomInputManager : public ::Rewired::PlatformInputManager {
public:
// Declarations
using NRhlevVqfmjUkiBnWZaxThPzheXz = ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz;

using lcyQLPXSEyShDXoAjkWtDuUSlcFn = ::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn;

/// @brief Field PiXMDXYkwXxvAEWTNqddUAjVTMjQ, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_PiXMDXYkwXxvAEWTNqddUAjVTMjQ, put=__cordl_internal_set_PiXMDXYkwXxvAEWTNqddUAjVTMjQ)) ::System::Action_2<int32_t,::Rewired::ControllerDataUpdater*>*  PiXMDXYkwXxvAEWTNqddUAjVTMjQ;

/// @brief Field TTScZAHQaOyJtwtCnmVUawfJxkmVA, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_TTScZAHQaOyJtwtCnmVUawfJxkmVA, put=__cordl_internal_set_TTScZAHQaOyJtwtCnmVUawfJxkmVA)) ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*  TTScZAHQaOyJtwtCnmVUawfJxkmVA;

/// @brief Field TchLOeRkUbLymTjfvnNFAidFOvrE, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_TchLOeRkUbLymTjfvnNFAidFOvrE, put=__cordl_internal_set_TchLOeRkUbLymTjfvnNFAidFOvrE)) ::System::Func_1<int32_t>*  TchLOeRkUbLymTjfvnNFAidFOvrE;

/// @brief Field TtHCMIBpWcQNLTAsUuFPLBTjqZOG, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_TtHCMIBpWcQNLTAsUuFPLBTjqZOG, put=__cordl_internal_set_TtHCMIBpWcQNLTAsUuFPLBTjqZOG)) ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*  TtHCMIBpWcQNLTAsUuFPLBTjqZOG;

/// @brief Field ctYUkGBgxkURyrJxrBwyIWPZgSEy, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_ctYUkGBgxkURyrJxrBwyIWPZgSEy, put=__cordl_internal_set_ctYUkGBgxkURyrJxrBwyIWPZgSEy)) int32_t  ctYUkGBgxkURyrJxrBwyIWPZgSEy;

 __declspec(property(get=get_deviceCount)) int32_t  deviceCount;

/// @brief Field dmKmymHpLFWgvkoICeFXdlbWnrWu, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_dmKmymHpLFWgvkoICeFXdlbWnrWu, put=__cordl_internal_set_dmKmymHpLFWgvkoICeFXdlbWnrWu)) bool  dmKmymHpLFWgvkoICeFXdlbWnrWu;

 __declspec(property(get=get_inputSource)) ::Rewired::Interfaces::IInputSource*  inputSource;

 __declspec(property(get=get_inputSourceType)) ::Rewired::InputSource  inputSourceType;

/// @brief Field pXjwGijAVPQjBvecsIxxahikakpc, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_pXjwGijAVPQjBvecsIxxahikakpc, put=__cordl_internal_set_pXjwGijAVPQjBvecsIxxahikakpc)) ::Rewired::PlatformInputManager*  pXjwGijAVPQjBvecsIxxahikakpc;

 __declspec(property(get=get_primaryInputManager)) ::Rewired::PlatformInputManager*  primaryInputManager;

/// @brief Field tWqBHhKeTHJlbkEJiBglhlVBjoxcA, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_tWqBHhKeTHJlbkEJiBglhlVBjoxcA, put=__cordl_internal_set_tWqBHhKeTHJlbkEJiBglhlVBjoxcA)) ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  tWqBHhKeTHJlbkEJiBglhlVBjoxcA;

/// @brief Field xsRWpxqXGqvLFCFMxVZdxBteQZSt, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_xsRWpxqXGqvLFCFMxVZdxBteQZSt, put=__cordl_internal_set_xsRWpxqXGqvLFCFMxVZdxBteQZSt)) ::Rewired::Platforms::Custom::CustomInputSource*  xsRWpxqXGqvLFCFMxVZdxBteQZSt;

/// @brief Field zgGFBQxykXMSCVplMijLDuBiOaugA, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_zgGFBQxykXMSCVplMijLDuBiOaugA, put=__cordl_internal_set_zgGFBQxykXMSCVplMijLDuBiOaugA)) ::Rewired::UpdateLoopType  zgGFBQxykXMSCVplMijLDuBiOaugA;

/// @brief Method GetInputDataUpdateDelegate, addr 0x1802e75e0, size 0x10, virtual true, abstract: false, final false
inline ::System::Action_2<int32_t,::Rewired::ControllerDataUpdater*>* GetInputDataUpdateDelegate() ;

/// @brief Method GetUnifiedKeyboardSource, addr 0x18187ca50, size 0x20, virtual true, abstract: false, final false
inline ::Rewired::Interfaces::IUnifiedKeyboardSource* GetUnifiedKeyboardSource() ;

/// @brief Method GetUnifiedMouseSource, addr 0x18187ca70, size 0x20, virtual true, abstract: false, final false
inline ::Rewired::Interfaces::IUnifiedMouseSource* GetUnifiedMouseSource() ;

/// @brief Method IPDLSklCojpZNDzitzMzJBzLefox, addr 0x18187ca90, size 0x190, virtual false, abstract: false, final false
inline void IPDLSklCojpZNDzitzMzJBzLefox(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method Initialize, addr 0x18187cc20, size 0xd0, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method JCgmrJBDckzZdHUuLrGBSHYSmmPc, addr 0x18187ccf0, size 0x340, virtual false, abstract: false, final false
inline void JCgmrJBDckzZdHUuLrGBSHYSmmPc() ;

/// @brief Method MPWeZWfImWQHAziiWibpWEZBEmGaA, addr 0x18187d030, size 0x220, virtual false, abstract: false, final false
inline void MPWeZWfImWQHAziiWibpWEZBEmGaA(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::InputManagers::CustomInputManager* New_ctor(::Rewired::Platforms::Custom::CustomInputSource*  _cordl_fixed_empty_name_whitespace, ::Rewired::Config::UpdateLoopSetting  _cordl_fixed_empty_name_whitespace_param_1, ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*  _cordl_fixed_empty_name_whitespace_param_2, ::System::Func_1<int32_t>*  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method OnDestroy, addr 0x18187d250, size 0x20, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetUnityJoystickId, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void SetUnityJoystickId(int32_t  joystickId, int32_t  unityJoystickIndex) ;

/// @brief Method SystemDeviceConnected, addr 0x18187d270, size 0x20, virtual true, abstract: false, final false
inline void SystemDeviceConnected() ;

/// @brief Method SystemDeviceDisconnected, addr 0x18187d290, size 0x20, virtual true, abstract: false, final false
inline void SystemDeviceDisconnected() ;

/// @brief Method TCmgCFJnKtBsABinBzXJOSzblYxcb, addr 0x18187d2b0, size 0x120, virtual false, abstract: false, final false
inline void TCmgCFJnKtBsABinBzXJOSzblYxcb(::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method Update, addr 0x18187d4b0, size 0x190, virtual true, abstract: false, final false
inline void Update(::Rewired::UpdateLoopType  updateLoop) ;

/// @brief Method UpdateControllerData, addr 0x18187d3d0, size 0xe0, virtual true, abstract: false, final false
inline void UpdateControllerData(int32_t  inputManagerId, ::Rewired::ControllerDataUpdater*  data) ;

/// @brief Method XXwKeJsUVSSWnKexTWrbsYRjbFFd, addr 0x18187d640, size 0x1e0, virtual false, abstract: false, final false
inline bool XXwKeJsUVSSWnKexTWrbsYRjbFFd(::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method YRDfekdWLJcLwjJegLyRhnckoBXAb, addr 0x18187d820, size 0x3a0, virtual false, abstract: false, final false
inline void YRDfekdWLJcLwjJegLyRhnckoBXAb(::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::System::Action_2<int32_t,::Rewired::ControllerDataUpdater*>* const& __cordl_internal_get_PiXMDXYkwXxvAEWTNqddUAjVTMjQ() const;

constexpr ::System::Action_2<int32_t,::Rewired::ControllerDataUpdater*>*& __cordl_internal_get_PiXMDXYkwXxvAEWTNqddUAjVTMjQ() ;

constexpr ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>* const& __cordl_internal_get_TTScZAHQaOyJtwtCnmVUawfJxkmVA() const;

constexpr ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*& __cordl_internal_get_TTScZAHQaOyJtwtCnmVUawfJxkmVA() ;

constexpr ::System::Func_1<int32_t>* const& __cordl_internal_get_TchLOeRkUbLymTjfvnNFAidFOvrE() const;

constexpr ::System::Func_1<int32_t>*& __cordl_internal_get_TchLOeRkUbLymTjfvnNFAidFOvrE() ;

constexpr ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz* const& __cordl_internal_get_TtHCMIBpWcQNLTAsUuFPLBTjqZOG() const;

constexpr ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*& __cordl_internal_get_TtHCMIBpWcQNLTAsUuFPLBTjqZOG() ;

constexpr int32_t const& __cordl_internal_get_ctYUkGBgxkURyrJxrBwyIWPZgSEy() const;

constexpr int32_t& __cordl_internal_get_ctYUkGBgxkURyrJxrBwyIWPZgSEy() ;

constexpr bool const& __cordl_internal_get_dmKmymHpLFWgvkoICeFXdlbWnrWu() const;

constexpr bool& __cordl_internal_get_dmKmymHpLFWgvkoICeFXdlbWnrWu() ;

constexpr ::Rewired::PlatformInputManager* const& __cordl_internal_get_pXjwGijAVPQjBvecsIxxahikakpc() const;

constexpr ::Rewired::PlatformInputManager*& __cordl_internal_get_pXjwGijAVPQjBvecsIxxahikakpc() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>* const& __cordl_internal_get_tWqBHhKeTHJlbkEJiBglhlVBjoxcA() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*& __cordl_internal_get_tWqBHhKeTHJlbkEJiBglhlVBjoxcA() ;

constexpr ::Rewired::Platforms::Custom::CustomInputSource* const& __cordl_internal_get_xsRWpxqXGqvLFCFMxVZdxBteQZSt() const;

constexpr ::Rewired::Platforms::Custom::CustomInputSource*& __cordl_internal_get_xsRWpxqXGqvLFCFMxVZdxBteQZSt() ;

constexpr ::Rewired::UpdateLoopType const& __cordl_internal_get_zgGFBQxykXMSCVplMijLDuBiOaugA() const;

constexpr ::Rewired::UpdateLoopType& __cordl_internal_get_zgGFBQxykXMSCVplMijLDuBiOaugA() ;

constexpr void __cordl_internal_set_PiXMDXYkwXxvAEWTNqddUAjVTMjQ(::System::Action_2<int32_t,::Rewired::ControllerDataUpdater*>*  value) ;

constexpr void __cordl_internal_set_TTScZAHQaOyJtwtCnmVUawfJxkmVA(::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*  value) ;

constexpr void __cordl_internal_set_TchLOeRkUbLymTjfvnNFAidFOvrE(::System::Func_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_TtHCMIBpWcQNLTAsUuFPLBTjqZOG(::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*  value) ;

constexpr void __cordl_internal_set_ctYUkGBgxkURyrJxrBwyIWPZgSEy(int32_t  value) ;

constexpr void __cordl_internal_set_dmKmymHpLFWgvkoICeFXdlbWnrWu(bool  value) ;

constexpr void __cordl_internal_set_pXjwGijAVPQjBvecsIxxahikakpc(::Rewired::PlatformInputManager*  value) ;

constexpr void __cordl_internal_set_tWqBHhKeTHJlbkEJiBglhlVBjoxcA(::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  value) ;

constexpr void __cordl_internal_set_xsRWpxqXGqvLFCFMxVZdxBteQZSt(::Rewired::Platforms::Custom::CustomInputSource*  value) ;

constexpr void __cordl_internal_set_zgGFBQxykXMSCVplMijLDuBiOaugA(::Rewired::UpdateLoopType  value) ;

/// @brief Method .ctor, addr 0x18187dbc0, size 0x1f0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Platforms::Custom::CustomInputSource*  _cordl_fixed_empty_name_whitespace, ::Rewired::Config::UpdateLoopSetting  _cordl_fixed_empty_name_whitespace_param_1, ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*  _cordl_fixed_empty_name_whitespace_param_2, ::System::Func_1<int32_t>*  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method bbVUgTkzOuBpyyYalSzRqqjOFBNH, addr 0x18187ddb0, size 0x60, virtual false, abstract: false, final false
inline bool bbVUgTkzOuBpyyYalSzRqqjOFBNH(::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method cHZMZuoAehSZajYyLAriLaUKAkzCA, addr 0x18187de10, size 0x60, virtual false, abstract: false, final false
inline int32_t cHZMZuoAehSZajYyLAriLaUKAkzCA(::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method doWgTzgDUgFilKWUcXhrnsDeZtve, addr 0x18187de70, size 0x2b0, virtual false, abstract: false, final false
inline void doWgTzgDUgFilKWUcXhrnsDeZtve(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::InputManagers::NRhlevVqfmjUkiBnWZaxThPzheXz_CustomInputManager_kjIbNNItgpJBiyiqRANUGuTAxYBKA  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method fTvDkwCHkyEohYspuntjeUbxQkgD, addr 0x18187e120, size 0x60, virtual false, abstract: false, final false
inline bool fTvDkwCHkyEohYspuntjeUbxQkgD(::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_deviceCount, addr 0x1803eb0e0, size 0x10, virtual true, abstract: false, final false
inline int32_t get_deviceCount() ;

/// @brief Method get_inputSource, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::Rewired::Interfaces::IInputSource* get_inputSource() ;

/// @brief Method get_inputSourceType, addr 0x18187e180, size 0x20, virtual true, abstract: false, final false
inline ::Rewired::InputSource get_inputSourceType() ;

/// @brief Method get_primaryInputManager, addr 0x1803a74d0, size 0x10, virtual true, abstract: false, final false
inline ::Rewired::PlatformInputManager* get_primaryInputManager() ;

/// @brief Method hwZdMciVfxumQLjLeOOTRtvGgAKj, addr 0x18187e1a0, size 0x60, virtual false, abstract: false, final false
inline void hwZdMciVfxumQLjLeOOTRtvGgAKj(::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method iASZzQRDaVvDqcXjqCOcEPWTDDlN, addr 0x18187e200, size 0x70, virtual false, abstract: false, final false
inline void iASZzQRDaVvDqcXjqCOcEPWTDDlN(::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method kmneZGFzygBnxVFFSterDsccynuDA, addr 0x18187e270, size 0x110, virtual false, abstract: false, final false
inline void kmneZGFzygBnxVFFSterDsccynuDA() ;

/// @brief Method qjWftTALBLVAHnRJDJrgVCODYhoE, addr 0x18187e380, size 0x260, virtual false, abstract: false, final false
inline void qjWftTALBLVAHnRJDJrgVCODYhoE(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace_param_2, ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  _cordl_fixed_empty_name_whitespace_param_3) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomInputManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomInputManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomInputManager(CustomInputManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomInputManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomInputManager(CustomInputManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2221};

/// @brief Field tWqBHhKeTHJlbkEJiBglhlVBjoxcA, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::InputManagers::CustomInputManager_lcyQLPXSEyShDXoAjkWtDuUSlcFn*>*  ___tWqBHhKeTHJlbkEJiBglhlVBjoxcA;

/// @brief Field ctYUkGBgxkURyrJxrBwyIWPZgSEy, offset: 0x40, size: 0x4, def value: None
 int32_t  ___ctYUkGBgxkURyrJxrBwyIWPZgSEy;

/// @brief Field TtHCMIBpWcQNLTAsUuFPLBTjqZOG, offset: 0x48, size: 0x8, def value: None
 ::Rewired::InputManagers::CustomInputManager_NRhlevVqfmjUkiBnWZaxThPzheXz*  ___TtHCMIBpWcQNLTAsUuFPLBTjqZOG;

/// @brief Field zgGFBQxykXMSCVplMijLDuBiOaugA, offset: 0x50, size: 0x4, def value: None
 ::Rewired::UpdateLoopType  ___zgGFBQxykXMSCVplMijLDuBiOaugA;

/// @brief Field PiXMDXYkwXxvAEWTNqddUAjVTMjQ, offset: 0x58, size: 0x8, def value: None
 ::System::Action_2<int32_t,::Rewired::ControllerDataUpdater*>*  ___PiXMDXYkwXxvAEWTNqddUAjVTMjQ;

/// @brief Field pXjwGijAVPQjBvecsIxxahikakpc, offset: 0x60, size: 0x8, def value: None
 ::Rewired::PlatformInputManager*  ___pXjwGijAVPQjBvecsIxxahikakpc;

/// @brief Field xsRWpxqXGqvLFCFMxVZdxBteQZSt, offset: 0x68, size: 0x8, def value: None
 ::Rewired::Platforms::Custom::CustomInputSource*  ___xsRWpxqXGqvLFCFMxVZdxBteQZSt;

/// @brief Field dmKmymHpLFWgvkoICeFXdlbWnrWu, offset: 0x70, size: 0x1, def value: None
 bool  ___dmKmymHpLFWgvkoICeFXdlbWnrWu;

/// @brief Field TTScZAHQaOyJtwtCnmVUawfJxkmVA, offset: 0x78, size: 0x8, def value: None
 ::System::Func_2<::Rewired::BridgedControllerHWInfo*,::Rewired::HardwareJoystickMap_InputManager*>*  ___TTScZAHQaOyJtwtCnmVUawfJxkmVA;

/// @brief Field TchLOeRkUbLymTjfvnNFAidFOvrE, offset: 0x80, size: 0x8, def value: None
 ::System::Func_1<int32_t>*  ___TchLOeRkUbLymTjfvnNFAidFOvrE;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputManagers::CustomInputManager, ___tWqBHhKeTHJlbkEJiBglhlVBjoxcA) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager, ___ctYUkGBgxkURyrJxrBwyIWPZgSEy) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager, ___TtHCMIBpWcQNLTAsUuFPLBTjqZOG) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager, ___zgGFBQxykXMSCVplMijLDuBiOaugA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager, ___PiXMDXYkwXxvAEWTNqddUAjVTMjQ) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager, ___pXjwGijAVPQjBvecsIxxahikakpc) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager, ___xsRWpxqXGqvLFCFMxVZdxBteQZSt) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager, ___dmKmymHpLFWgvkoICeFXdlbWnrWu) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager, ___TTScZAHQaOyJtwtCnmVUawfJxkmVA) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputManagers::CustomInputManager, ___TchLOeRkUbLymTjfvnNFAidFOvrE) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputManagers::CustomInputManager) == 0x88, "Size mismatch!");

} // namespace end def Rewired::InputManagers
