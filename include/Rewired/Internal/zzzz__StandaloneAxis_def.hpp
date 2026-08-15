#pragma once
// IWYU pragma private; include "Rewired/Internal/StandaloneAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StandaloneAxis)
namespace Rewired::Internal {
class StandaloneAxis_AxisValueChangedEventHandler;
}
namespace Rewired::Internal {
class StandaloneAxis_ButtonDownEventHandler;
}
namespace Rewired::Internal {
class StandaloneAxis_ButtonUpEventHandler;
}
namespace Rewired::Internal {
class StandaloneAxis_ButtonValueChangedEventHandler;
}
namespace Rewired {
class AxisCalibration;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Internal {
class StandaloneAxis;
}
namespace Rewired::Internal {
class StandaloneAxis_AxisValueChangedEventHandler;
}
namespace Rewired::Internal {
class StandaloneAxis_ButtonDownEventHandler;
}
namespace Rewired::Internal {
class StandaloneAxis_ButtonUpEventHandler;
}
namespace Rewired::Internal {
class StandaloneAxis_ButtonValueChangedEventHandler;
}
// Write type traits
MARK_REF_T(::Rewired::Internal::StandaloneAxis*);
MARK_REF_T(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*);
MARK_REF_T(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*);
MARK_REF_T(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*);
MARK_REF_T(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*);
DEFINE_IL2CPP_CLASS(::Rewired::Internal::StandaloneAxis*, "Rewired.Internal", "StandaloneAxis");
DEFINE_IL2CPP_CLASS(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*, "Rewired.Internal", "StandaloneAxis/AxisValueChangedEventHandler");
DEFINE_IL2CPP_CLASS(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*, "Rewired.Internal", "StandaloneAxis/ButtonDownEventHandler");
DEFINE_IL2CPP_CLASS(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*, "Rewired.Internal", "StandaloneAxis/ButtonUpEventHandler");
DEFINE_IL2CPP_CLASS(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*, "Rewired.Internal", "StandaloneAxis/ButtonValueChangedEventHandler");
// Dependencies System.MulticastDelegate
namespace Rewired::Internal {
// Is value type: false
// CS Name: Rewired.Internal.StandaloneAxis/AxisValueChangedEventHandler
class CORDL_TYPE StandaloneAxis_AxisValueChangedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1818ef8b0, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t  value, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(float_t  value) ;

static inline ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x180eb2f30, size 0x1510, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandaloneAxis_AxisValueChangedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandaloneAxis_AxisValueChangedEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandaloneAxis_AxisValueChangedEventHandler(StandaloneAxis_AxisValueChangedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneAxis_AxisValueChangedEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandaloneAxis_AxisValueChangedEventHandler(StandaloneAxis_AxisValueChangedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2819};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler) == 0x80, "Size mismatch!");

} // namespace end def Rewired::Internal
// Dependencies System.MulticastDelegate
namespace Rewired::Internal {
// Is value type: false
// CS Name: Rewired.Internal.StandaloneAxis/ButtonValueChangedEventHandler
class CORDL_TYPE StandaloneAxis_ButtonValueChangedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1818ef910, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(bool  value, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(bool  value) ;

static inline ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x180eb2aa0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandaloneAxis_ButtonValueChangedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandaloneAxis_ButtonValueChangedEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandaloneAxis_ButtonValueChangedEventHandler(StandaloneAxis_ButtonValueChangedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneAxis_ButtonValueChangedEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandaloneAxis_ButtonValueChangedEventHandler(StandaloneAxis_ButtonValueChangedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2820};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler) == 0x80, "Size mismatch!");

} // namespace end def Rewired::Internal
// Dependencies System.MulticastDelegate
namespace Rewired::Internal {
// Is value type: false
// CS Name: Rewired.Internal.StandaloneAxis/ButtonDownEventHandler
class CORDL_TYPE StandaloneAxis_ButtonDownEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18057e6e0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandaloneAxis_ButtonDownEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandaloneAxis_ButtonDownEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandaloneAxis_ButtonDownEventHandler(StandaloneAxis_ButtonDownEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneAxis_ButtonDownEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandaloneAxis_ButtonDownEventHandler(StandaloneAxis_ButtonDownEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2821};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler) == 0x80, "Size mismatch!");

} // namespace end def Rewired::Internal
// Dependencies System.MulticastDelegate
namespace Rewired::Internal {
// Is value type: false
// CS Name: Rewired.Internal.StandaloneAxis/ButtonUpEventHandler
class CORDL_TYPE StandaloneAxis_ButtonUpEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18057e6e0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandaloneAxis_ButtonUpEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandaloneAxis_ButtonUpEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandaloneAxis_ButtonUpEventHandler(StandaloneAxis_ButtonUpEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneAxis_ButtonUpEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandaloneAxis_ButtonUpEventHandler(StandaloneAxis_ButtonUpEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2822};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler) == 0x80, "Size mismatch!");

} // namespace end def Rewired::Internal
// Dependencies System.Object
namespace Rewired::Internal {
// Is value type: false
// CS Name: Rewired.Internal.StandaloneAxis
class CORDL_TYPE StandaloneAxis : public ::System::Object {
public:
// Declarations
using AxisValueChangedEventHandler = ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler;

using ButtonDownEventHandler = ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler;

using ButtonUpEventHandler = ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler;

using ButtonValueChangedEventHandler = ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler;

/// @brief Field KLPIhoPOMHCSyidbOpvBXVbgkIBGA, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_KLPIhoPOMHCSyidbOpvBXVbgkIBGA, put=__cordl_internal_set_KLPIhoPOMHCSyidbOpvBXVbgkIBGA)) ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  KLPIhoPOMHCSyidbOpvBXVbgkIBGA;

/// @brief Field NzUDYPeUUpRowQFCBrpSjynQvGxg, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_NzUDYPeUUpRowQFCBrpSjynQvGxg, put=__cordl_internal_set_NzUDYPeUUpRowQFCBrpSjynQvGxg)) ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  NzUDYPeUUpRowQFCBrpSjynQvGxg;

/// @brief Field ZmeXODRKtAoGjvOzINulVpjdWYSj, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZmeXODRKtAoGjvOzINulVpjdWYSj, put=__cordl_internal_set_ZmeXODRKtAoGjvOzINulVpjdWYSj)) ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  ZmeXODRKtAoGjvOzINulVpjdWYSj;

/// @brief Field _buttonActivationThreshold, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__buttonActivationThreshold, put=__cordl_internal_set__buttonActivationThreshold)) float_t  _buttonActivationThreshold;

/// @brief Field _calibration, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__calibration, put=__cordl_internal_set__calibration)) ::Rewired::AxisCalibration*  _calibration;

/// @brief Field _valueRaw, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__valueRaw, put=__cordl_internal_set__valueRaw)) float_t  _valueRaw;

/// @brief Field _valueRawPrev, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__valueRawPrev, put=__cordl_internal_set__valueRawPrev)) float_t  _valueRawPrev;

/// @brief Field biDTGFCErMDxMRrblitZIsMmKNdp, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_biDTGFCErMDxMRrblitZIsMmKNdp, put=__cordl_internal_set_biDTGFCErMDxMRrblitZIsMmKNdp)) ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  biDTGFCErMDxMRrblitZIsMmKNdp;

 __declspec(property(get=get_buttonActivationThreshold, put=set_buttonActivationThreshold)) float_t  buttonActivationThreshold;

 __declspec(property(get=get_buttonValue)) bool  buttonValue;

 __declspec(property(get=get_buttonValuePrev)) bool  buttonValuePrev;

/// @brief Field cHrJAgkPGHENslmylrSLQlDRfaig, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_cHrJAgkPGHENslmylrSLQlDRfaig, put=__cordl_internal_set_cHrJAgkPGHENslmylrSLQlDRfaig)) ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  cHrJAgkPGHENslmylrSLQlDRfaig;

 __declspec(property(get=get_calibration, put=VEgPIbCOHcqrGXQiawbTTZSyuwHv)) ::Rewired::AxisCalibration*  calibration;

/// @brief Field mUcGfZBsrHaRZVhWqxMHlbyZFMvHA, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_mUcGfZBsrHaRZVhWqxMHlbyZFMvHA, put=__cordl_internal_set_mUcGfZBsrHaRZVhWqxMHlbyZFMvHA)) ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  mUcGfZBsrHaRZVhWqxMHlbyZFMvHA;

 __declspec(property(get=get_rawButtonValue)) bool  rawButtonValue;

 __declspec(property(get=get_rawButtonValuePrev)) bool  rawButtonValuePrev;

 __declspec(property(get=get_rawMax)) float_t  rawMax;

 __declspec(property(get=get_rawMin)) float_t  rawMin;

 __declspec(property(get=get_rawZero)) float_t  rawZero;

 __declspec(property(get=get_value)) float_t  value;

 __declspec(property(get=get_valueDelta)) float_t  valueDelta;

 __declspec(property(get=get_valuePrev)) float_t  valuePrev;

 __declspec(property(get=get_valueRaw, put=istCMQRyTPKBXQmFOgidGOQtoItD)) float_t  valueRaw;

 __declspec(property(get=get_valueRawDelta)) float_t  valueRawDelta;

 __declspec(property(get=get_valueRawPrev, put=GxBeBHOLNJcBsDAkoCPgOJVOpLNV)) float_t  valueRawPrev;

/// @brief Field wSocTChPNsVHaWiPGKFTGUXqRKORA, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_wSocTChPNsVHaWiPGKFTGUXqRKORA, put=__cordl_internal_set_wSocTChPNsVHaWiPGKFTGUXqRKORA)) ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  wSocTChPNsVHaWiPGKFTGUXqRKORA;

/// @brief Field zuWYzBCgYbTZISNuoDsQZKbGbyTf, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_zuWYzBCgYbTZISNuoDsQZKbGbyTf, put=__cordl_internal_set_zuWYzBCgYbTZISNuoDsQZKbGbyTf)) ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  zuWYzBCgYbTZISNuoDsQZKbGbyTf;

/// @brief Method AiBMFlplLGAaoWqAuDybWFHFXgEx, addr 0x1818f5000, size 0x80, virtual false, abstract: false, final false
inline void AiBMFlplLGAaoWqAuDybWFHFXgEx(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Clear, addr 0x1818f5080, size 0x30, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CreateRelative, addr 0x1818f50b0, size 0x70, virtual false, abstract: false, final false
static inline ::Rewired::Internal::StandaloneAxis* CreateRelative() ;

/// @brief Method DXpABLizEnQUMEwGAfvOacsrCnQd, addr 0x1818f5120, size 0x80, virtual false, abstract: false, final false
inline void DXpABLizEnQUMEwGAfvOacsrCnQd(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method GeqOltbPHLopeKMjQjhzeEGxBdQEb, addr 0x1818f51a0, size 0x80, virtual false, abstract: false, final false
inline void GeqOltbPHLopeKMjQjhzeEGxBdQEb(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method GxBeBHOLNJcBsDAkoCPgOJVOpLNV, addr 0x1818f5220, size 0x10, virtual false, abstract: false, final false
inline void GxBeBHOLNJcBsDAkoCPgOJVOpLNV(float_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method JCycbvzKPOMabBoRlHLHfxquPgjX, addr 0x1818f5230, size 0x80, virtual false, abstract: false, final false
inline void JCycbvzKPOMabBoRlHLHfxquPgjX(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Internal::StandaloneAxis* New_ctor() ;

/// @brief Method NhFSJoLakhIQRmiADgLJZcoSTKVE, addr 0x1818f52b0, size 0x80, virtual false, abstract: false, final false
inline void NhFSJoLakhIQRmiADgLJZcoSTKVE(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method OrybYAzuUTmXdgfYyXWqzQitnlYd, addr 0x1818f5330, size 0x80, virtual false, abstract: false, final false
inline void OrybYAzuUTmXdgfYyXWqzQitnlYd(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method QTcIDOWFTPfZKvDkADHWrRnjumib, addr 0x1818f53b0, size 0x80, virtual false, abstract: false, final false
inline void QTcIDOWFTPfZKvDkADHWrRnjumib(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method SetRawValue, addr 0x1818f5430, size 0x300, virtual false, abstract: false, final false
inline void SetRawValue(float_t  value) ;

/// @brief Method VEgPIbCOHcqrGXQiawbTTZSyuwHv, addr 0x1818f5730, size 0x20, virtual false, abstract: false, final false
inline void VEgPIbCOHcqrGXQiawbTTZSyuwHv(::Rewired::AxisCalibration*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method XpYQRGuwnSACzzUVMGWuhcHgadxd, addr 0x1818f5750, size 0x80, virtual false, abstract: false, final false
inline void XpYQRGuwnSACzzUVMGWuhcHgadxd(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler* const& __cordl_internal_get_KLPIhoPOMHCSyidbOpvBXVbgkIBGA() const;

constexpr ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*& __cordl_internal_get_KLPIhoPOMHCSyidbOpvBXVbgkIBGA() ;

constexpr ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler* const& __cordl_internal_get_NzUDYPeUUpRowQFCBrpSjynQvGxg() const;

constexpr ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*& __cordl_internal_get_NzUDYPeUUpRowQFCBrpSjynQvGxg() ;

constexpr ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler* const& __cordl_internal_get_ZmeXODRKtAoGjvOzINulVpjdWYSj() const;

constexpr ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*& __cordl_internal_get_ZmeXODRKtAoGjvOzINulVpjdWYSj() ;

constexpr float_t const& __cordl_internal_get__buttonActivationThreshold() const;

constexpr float_t& __cordl_internal_get__buttonActivationThreshold() ;

constexpr ::Rewired::AxisCalibration* const& __cordl_internal_get__calibration() const;

constexpr ::Rewired::AxisCalibration*& __cordl_internal_get__calibration() ;

constexpr float_t const& __cordl_internal_get__valueRaw() const;

constexpr float_t& __cordl_internal_get__valueRaw() ;

constexpr float_t const& __cordl_internal_get__valueRawPrev() const;

constexpr float_t& __cordl_internal_get__valueRawPrev() ;

constexpr ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler* const& __cordl_internal_get_biDTGFCErMDxMRrblitZIsMmKNdp() const;

constexpr ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*& __cordl_internal_get_biDTGFCErMDxMRrblitZIsMmKNdp() ;

constexpr ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler* const& __cordl_internal_get_cHrJAgkPGHENslmylrSLQlDRfaig() const;

constexpr ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*& __cordl_internal_get_cHrJAgkPGHENslmylrSLQlDRfaig() ;

constexpr ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler* const& __cordl_internal_get_mUcGfZBsrHaRZVhWqxMHlbyZFMvHA() const;

constexpr ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*& __cordl_internal_get_mUcGfZBsrHaRZVhWqxMHlbyZFMvHA() ;

constexpr ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler* const& __cordl_internal_get_wSocTChPNsVHaWiPGKFTGUXqRKORA() const;

constexpr ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*& __cordl_internal_get_wSocTChPNsVHaWiPGKFTGUXqRKORA() ;

constexpr ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler* const& __cordl_internal_get_zuWYzBCgYbTZISNuoDsQZKbGbyTf() const;

constexpr ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*& __cordl_internal_get_zuWYzBCgYbTZISNuoDsQZKbGbyTf() ;

constexpr void __cordl_internal_set_KLPIhoPOMHCSyidbOpvBXVbgkIBGA(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  value) ;

constexpr void __cordl_internal_set_NzUDYPeUUpRowQFCBrpSjynQvGxg(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  value) ;

constexpr void __cordl_internal_set_ZmeXODRKtAoGjvOzINulVpjdWYSj(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__buttonActivationThreshold(float_t  value) ;

constexpr void __cordl_internal_set__calibration(::Rewired::AxisCalibration*  value) ;

constexpr void __cordl_internal_set__valueRaw(float_t  value) ;

constexpr void __cordl_internal_set__valueRawPrev(float_t  value) ;

constexpr void __cordl_internal_set_biDTGFCErMDxMRrblitZIsMmKNdp(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  value) ;

constexpr void __cordl_internal_set_cHrJAgkPGHENslmylrSLQlDRfaig(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  value) ;

constexpr void __cordl_internal_set_mUcGfZBsrHaRZVhWqxMHlbyZFMvHA(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  value) ;

constexpr void __cordl_internal_set_wSocTChPNsVHaWiPGKFTGUXqRKORA(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  value) ;

constexpr void __cordl_internal_set_zuWYzBCgYbTZISNuoDsQZKbGbyTf(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  value) ;

/// @brief Method .ctor, addr 0x1818f57d0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_AxisValueChangedEvent, addr 0x1818f5000, size 0x80, virtual false, abstract: false, final false
inline void add_AxisValueChangedEvent(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  value) ;

/// @brief Method add_ButtonDownEvent, addr 0x1818f5820, size 0x80, virtual false, abstract: false, final false
inline void add_ButtonDownEvent(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  value) ;

/// @brief Method add_ButtonUpEvent, addr 0x1818f5120, size 0x80, virtual false, abstract: false, final false
inline void add_ButtonUpEvent(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  value) ;

/// @brief Method add_ButtonValueChangedEvent, addr 0x1818f5750, size 0x80, virtual false, abstract: false, final false
inline void add_ButtonValueChangedEvent(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  value) ;

/// @brief Method add_RawAxisValueChangedEvent, addr 0x1818f58a0, size 0x80, virtual false, abstract: false, final false
inline void add_RawAxisValueChangedEvent(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  value) ;

/// @brief Method add_RawButtonDownEvent, addr 0x1818f5920, size 0x80, virtual false, abstract: false, final false
inline void add_RawButtonDownEvent(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  value) ;

/// @brief Method add_RawButtonUpEvent, addr 0x1818f5230, size 0x80, virtual false, abstract: false, final false
inline void add_RawButtonUpEvent(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  value) ;

/// @brief Method add_RawButtonValueChangedEvent, addr 0x1818f59a0, size 0x80, virtual false, abstract: false, final false
inline void add_RawButtonValueChangedEvent(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  value) ;

/// @brief Method cKVzZaqbUUXKMcFJPHjiYqbqSExc, addr 0x1818f5a20, size 0x80, virtual false, abstract: false, final false
inline void cKVzZaqbUUXKMcFJPHjiYqbqSExc(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method dpqhgGyoxZGYSVQhkabyxHePFHJx, addr 0x1818f5820, size 0x80, virtual false, abstract: false, final false
inline void dpqhgGyoxZGYSVQhkabyxHePFHJx(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_buttonActivationThreshold, addr 0x180346a80, size 0x10, virtual false, abstract: false, final false
inline float_t get_buttonActivationThreshold() ;

/// @brief Method get_buttonValue, addr 0x1818f5b00, size 0x60, virtual false, abstract: false, final false
inline bool get_buttonValue() ;

/// @brief Method get_buttonValuePrev, addr 0x1818f5aa0, size 0x60, virtual false, abstract: false, final false
inline bool get_buttonValuePrev() ;

/// @brief Method get_calibration, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::AxisCalibration* get_calibration() ;

/// @brief Method get_rawButtonValue, addr 0x1818f5b70, size 0x10, virtual false, abstract: false, final false
inline bool get_rawButtonValue() ;

/// @brief Method get_rawButtonValuePrev, addr 0x1818f5b60, size 0x10, virtual false, abstract: false, final false
inline bool get_rawButtonValuePrev() ;

/// @brief Method get_rawMax, addr 0x1818f5b80, size 0x30, virtual false, abstract: false, final false
inline float_t get_rawMax() ;

/// @brief Method get_rawMin, addr 0x1818f5bb0, size 0x30, virtual false, abstract: false, final false
inline float_t get_rawMin() ;

/// @brief Method get_rawZero, addr 0x1818f5be0, size 0x20, virtual false, abstract: false, final false
inline float_t get_rawZero() ;

/// @brief Method get_value, addr 0x1818f5ca0, size 0x20, virtual false, abstract: false, final false
inline float_t get_value() ;

/// @brief Method get_valueDelta, addr 0x1818f5c00, size 0x70, virtual false, abstract: false, final false
inline float_t get_valueDelta() ;

/// @brief Method get_valuePrev, addr 0x1818f5c70, size 0x20, virtual false, abstract: false, final false
inline float_t get_valuePrev() ;

/// @brief Method get_valueRaw, addr 0x1802f42b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_valueRaw() ;

/// @brief Method get_valueRawDelta, addr 0x1818f5c90, size 0x10, virtual false, abstract: false, final false
inline float_t get_valueRawDelta() ;

/// @brief Method get_valueRawPrev, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_valueRawPrev() ;

/// @brief Method istCMQRyTPKBXQmFOgidGOQtoItD, addr 0x1818f5cc0, size 0x10, virtual false, abstract: false, final false
inline void istCMQRyTPKBXQmFOgidGOQtoItD(float_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method jSgETejxVSNVimdEZLoaDoUAJSinc, addr 0x1818f5cd0, size 0x80, virtual false, abstract: false, final false
inline void jSgETejxVSNVimdEZLoaDoUAJSinc(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method qyhRmiFQQYUgBpPYTcYQncfbWndu, addr 0x1818f58a0, size 0x80, virtual false, abstract: false, final false
inline void qyhRmiFQQYUgBpPYTcYQncfbWndu(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method rarZpNLLeVpiQGSULhqMOzsdABWk, addr 0x1818f59a0, size 0x80, virtual false, abstract: false, final false
inline void rarZpNLLeVpiQGSULhqMOzsdABWk(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method remove_AxisValueChangedEvent, addr 0x1818f5330, size 0x80, virtual false, abstract: false, final false
inline void remove_AxisValueChangedEvent(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  value) ;

/// @brief Method remove_ButtonDownEvent, addr 0x1818f52b0, size 0x80, virtual false, abstract: false, final false
inline void remove_ButtonDownEvent(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  value) ;

/// @brief Method remove_ButtonUpEvent, addr 0x1818f5d50, size 0x80, virtual false, abstract: false, final false
inline void remove_ButtonUpEvent(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  value) ;

/// @brief Method remove_ButtonValueChangedEvent, addr 0x1818f53b0, size 0x80, virtual false, abstract: false, final false
inline void remove_ButtonValueChangedEvent(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  value) ;

/// @brief Method remove_RawAxisValueChangedEvent, addr 0x1818f5dd0, size 0x80, virtual false, abstract: false, final false
inline void remove_RawAxisValueChangedEvent(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  value) ;

/// @brief Method remove_RawButtonDownEvent, addr 0x1818f51a0, size 0x80, virtual false, abstract: false, final false
inline void remove_RawButtonDownEvent(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  value) ;

/// @brief Method remove_RawButtonUpEvent, addr 0x1818f5a20, size 0x80, virtual false, abstract: false, final false
inline void remove_RawButtonUpEvent(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  value) ;

/// @brief Method remove_RawButtonValueChangedEvent, addr 0x1818f5cd0, size 0x80, virtual false, abstract: false, final false
inline void remove_RawButtonValueChangedEvent(::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  value) ;

/// @brief Method set_buttonActivationThreshold, addr 0x1818f5e50, size 0x30, virtual false, abstract: false, final false
inline void set_buttonActivationThreshold(float_t  value) ;

/// @brief Method szHfOwTGNsYhBmTBcBhVRFGNkdhm, addr 0x1818f5d50, size 0x80, virtual false, abstract: false, final false
inline void szHfOwTGNsYhBmTBcBhVRFGNkdhm(::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method uLAEItJcqANOHALXExrFbRswQhYrB, addr 0x1818f5dd0, size 0x80, virtual false, abstract: false, final false
inline void uLAEItJcqANOHALXExrFbRswQhYrB(::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ytUTTilQkoqvUFgOmXDvrDrIFFEx, addr 0x1818f5920, size 0x80, virtual false, abstract: false, final false
inline void ytUTTilQkoqvUFgOmXDvrDrIFFEx(::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandaloneAxis() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandaloneAxis", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandaloneAxis(StandaloneAxis && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneAxis", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandaloneAxis(StandaloneAxis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2823};

/// @brief Field _buttonActivationThreshold, offset: 0x10, size: 0x4, def value: None
 float_t  ____buttonActivationThreshold;

/// @brief Field _calibration, offset: 0x18, size: 0x8, def value: None
 ::Rewired::AxisCalibration*  ____calibration;

/// @brief Field _valueRaw, offset: 0x20, size: 0x4, def value: None
 float_t  ____valueRaw;

/// @brief Field _valueRawPrev, offset: 0x24, size: 0x4, def value: None
 float_t  ____valueRawPrev;

/// @brief Field ZmeXODRKtAoGjvOzINulVpjdWYSj, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  ___ZmeXODRKtAoGjvOzINulVpjdWYSj;

/// @brief Field KLPIhoPOMHCSyidbOpvBXVbgkIBGA, offset: 0x30, size: 0x8, def value: None
 ::Rewired::Internal::StandaloneAxis_AxisValueChangedEventHandler*  ___KLPIhoPOMHCSyidbOpvBXVbgkIBGA;

/// @brief Field zuWYzBCgYbTZISNuoDsQZKbGbyTf, offset: 0x38, size: 0x8, def value: None
 ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  ___zuWYzBCgYbTZISNuoDsQZKbGbyTf;

/// @brief Field NzUDYPeUUpRowQFCBrpSjynQvGxg, offset: 0x40, size: 0x8, def value: None
 ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  ___NzUDYPeUUpRowQFCBrpSjynQvGxg;

/// @brief Field wSocTChPNsVHaWiPGKFTGUXqRKORA, offset: 0x48, size: 0x8, def value: None
 ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  ___wSocTChPNsVHaWiPGKFTGUXqRKORA;

/// @brief Field mUcGfZBsrHaRZVhWqxMHlbyZFMvHA, offset: 0x50, size: 0x8, def value: None
 ::Rewired::Internal::StandaloneAxis_ButtonDownEventHandler*  ___mUcGfZBsrHaRZVhWqxMHlbyZFMvHA;

/// @brief Field cHrJAgkPGHENslmylrSLQlDRfaig, offset: 0x58, size: 0x8, def value: None
 ::Rewired::Internal::StandaloneAxis_ButtonUpEventHandler*  ___cHrJAgkPGHENslmylrSLQlDRfaig;

/// @brief Field biDTGFCErMDxMRrblitZIsMmKNdp, offset: 0x60, size: 0x8, def value: None
 ::Rewired::Internal::StandaloneAxis_ButtonValueChangedEventHandler*  ___biDTGFCErMDxMRrblitZIsMmKNdp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Internal::StandaloneAxis, ____buttonActivationThreshold) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::StandaloneAxis, ____calibration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::StandaloneAxis, ____valueRaw) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::StandaloneAxis, ____valueRawPrev) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::StandaloneAxis, ___ZmeXODRKtAoGjvOzINulVpjdWYSj) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::StandaloneAxis, ___KLPIhoPOMHCSyidbOpvBXVbgkIBGA) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::StandaloneAxis, ___zuWYzBCgYbTZISNuoDsQZKbGbyTf) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::StandaloneAxis, ___NzUDYPeUUpRowQFCBrpSjynQvGxg) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::StandaloneAxis, ___wSocTChPNsVHaWiPGKFTGUXqRKORA) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::StandaloneAxis, ___mUcGfZBsrHaRZVhWqxMHlbyZFMvHA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::StandaloneAxis, ___cHrJAgkPGHENslmylrSLQlDRfaig) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::StandaloneAxis, ___biDTGFCErMDxMRrblitZIsMmKNdp) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::Internal::StandaloneAxis) == 0x68, "Size mismatch!");

} // namespace end def Rewired::Internal
