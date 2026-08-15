#pragma once
// IWYU pragma private; include "GlobalNamespace/Distortion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioFilterBase_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Distortion)
namespace GlobalNamespace {
class Distortion_Process_000004B0$BurstDirectCall;
}
namespace GlobalNamespace {
class Distortion_Process_000004B0$PostfixBurstDelegate;
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
namespace GlobalNamespace {
class Distortion;
}
namespace GlobalNamespace {
class Distortion_Process_000004B0$BurstDirectCall;
}
namespace GlobalNamespace {
class Distortion_Process_000004B0$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Distortion*);
MARK_REF_T(::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Distortion*, "", "Distortion");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall*, "", "Distortion/Process_000004B0$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate*, "", "Distortion/Process_000004B0$PostfixBurstDelegate");
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: Distortion/Process_000004B0$PostfixBurstDelegate
class CORDL_TYPE Distortion_Process_000004B0$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1804a3f70, size 0x2c0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t*  data, int32_t  dataLength, int32_t  channels, float_t  driveStart, float_t  driveEnd, float_t  dryWet, float_t  wetGain, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_8) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1804a33d0, size 0x1f0, virtual true, abstract: false, final false
inline void Invoke(float_t*  data, int32_t  dataLength, int32_t  channels, float_t  driveStart, float_t  driveEnd, float_t  dryWet, float_t  wetGain) ;

static inline ::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1804a4230, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Distortion_Process_000004B0$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Distortion_Process_000004B0$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Distortion_Process_000004B0$PostfixBurstDelegate(Distortion_Process_000004B0$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Distortion_Process_000004B0$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Distortion_Process_000004B0$PostfixBurstDelegate(Distortion_Process_000004B0$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17614};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Distortion/Process_000004B0$BurstDirectCall
class CORDL_TYPE Distortion_Process_000004B0$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1804a3e50, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1804a3d20, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18049e9d0, size 0x1e0, virtual false, abstract: false, final false
static inline void Invoke(float_t*  data, int32_t  dataLength, int32_t  channels, float_t  driveStart, float_t  driveEnd, float_t  dryWet, float_t  wetGain) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Distortion_Process_000004B0$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Distortion_Process_000004B0$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Distortion_Process_000004B0$BurstDirectCall(Distortion_Process_000004B0$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Distortion_Process_000004B0$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Distortion_Process_000004B0$BurstDirectCall(Distortion_Process_000004B0$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17615};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AudioFilterBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: Distortion
class CORDL_TYPE Distortion : public ::GlobalNamespace::AudioFilterBase {
public:
// Declarations
using Process_000004B0$BurstDirectCall = ::GlobalNamespace::Distortion_Process_000004B0$BurstDirectCall;

using Process_000004B0$PostfixBurstDelegate = ::GlobalNamespace::Distortion_Process_000004B0$PostfixBurstDelegate;

 __declspec(property(get=get_Bypass, put=set_Bypass)) bool  Bypass;

/// @brief Field DebugBypass, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DebugBypass, put=setStaticF_DebugBypass)) bool  DebugBypass;

/// @brief Field DryWet, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_DryWet, put=__cordl_internal_set_DryWet)) float_t  DryWet;

 __declspec(property(get=get_InternalBypass, put=set_InternalBypass)) bool  InternalBypass;

/// @brief Field Level, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Level, put=__cordl_internal_set_Level)) float_t  Level;

/// @brief Field WetGain, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_WetGain, put=__cordl_internal_set_WetGain)) float_t  WetGain;

/// @brief Field _bypass, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get__bypass, put=__cordl_internal_set__bypass)) bool  _bypass;

/// @brief Field _drive, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__drive, put=__cordl_internal_set__drive)) float_t  _drive;

/// @brief Field _internalBypass, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__internalBypass, put=__cordl_internal_set__internalBypass)) bool  _internalBypass;

static inline ::GlobalNamespace::Distortion* New_ctor() ;

/// @brief Method Process, addr 0x18049e9d0, size 0x1e0, virtual false, abstract: false, final false
static inline void Process(float_t*  data, int32_t  dataLength, int32_t  channels, float_t  driveStart, float_t  driveEnd, float_t  dryWet, float_t  wetGain) ;

/// @brief Method Process$BurstManaged, addr 0x180499400, size 0x640, virtual false, abstract: false, final false
static inline void Process$BurstManaged(float_t*  data, int32_t  dataLength, int32_t  channels, float_t  driveStart, float_t  driveEnd, float_t  dryWet, float_t  wetGain) ;

/// @brief Method ProcessSamples, addr 0x18049e850, size 0x180, virtual true, abstract: false, final false
inline void ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels) ;

/// @brief Method SoftClip, addr 0x18049ebb0, size 0x60, virtual false, abstract: false, final false
static inline float_t SoftClip(float_t  x) ;

/// @brief Method UpdateVariables, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void UpdateVariables(float_t  deltaTime) ;

constexpr float_t const& __cordl_internal_get_DryWet() const;

constexpr float_t& __cordl_internal_get_DryWet() ;

constexpr float_t const& __cordl_internal_get_Level() const;

constexpr float_t& __cordl_internal_get_Level() ;

constexpr float_t const& __cordl_internal_get_WetGain() const;

constexpr float_t& __cordl_internal_get_WetGain() ;

constexpr bool const& __cordl_internal_get__bypass() const;

constexpr bool& __cordl_internal_get__bypass() ;

constexpr float_t const& __cordl_internal_get__drive() const;

constexpr float_t& __cordl_internal_get__drive() ;

constexpr bool const& __cordl_internal_get__internalBypass() const;

constexpr bool& __cordl_internal_get__internalBypass() ;

constexpr void __cordl_internal_set_DryWet(float_t  value) ;

constexpr void __cordl_internal_set_Level(float_t  value) ;

constexpr void __cordl_internal_set_WetGain(float_t  value) ;

constexpr void __cordl_internal_set__bypass(bool  value) ;

constexpr void __cordl_internal_set__drive(float_t  value) ;

constexpr void __cordl_internal_set__internalBypass(bool  value) ;

/// @brief Method .ctor, addr 0x18049ec10, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_DebugBypass() ;

/// @brief Method get_Bypass, addr 0x18049ec40, size 0x10, virtual true, abstract: false, final false
inline bool get_Bypass() ;

/// @brief Method get_InternalBypass, addr 0x18049ec50, size 0x10, virtual true, abstract: false, final false
inline bool get_InternalBypass() ;

static inline void setStaticF_DebugBypass(bool  value) ;

/// @brief Method set_Bypass, addr 0x18049ec60, size 0x10, virtual true, abstract: false, final false
inline void set_Bypass(bool  value) ;

/// @brief Method set_InternalBypass, addr 0x18049ec70, size 0x10, virtual true, abstract: false, final false
inline void set_InternalBypass(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Distortion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Distortion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Distortion(Distortion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Distortion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Distortion(Distortion const& ) = delete;

/// @brief Field MAX_DRIVE offset 0xffffffff size 0x4
static constexpr float_t  MAX_DRIVE{static_cast<float_t>(40.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17616};

/// @brief Field Level, offset: 0x20, size: 0x4, def value: None
 float_t  ___Level;

/// @brief Field DryWet, offset: 0x24, size: 0x4, def value: None
 float_t  ___DryWet;

/// @brief Field WetGain, offset: 0x28, size: 0x4, def value: None
 float_t  ___WetGain;

/// @brief Field _internalBypass, offset: 0x2c, size: 0x1, def value: None
 bool  ____internalBypass;

/// @brief Field _bypass, offset: 0x2d, size: 0x1, def value: None
 bool  ____bypass;

/// @brief Field _drive, offset: 0x30, size: 0x4, def value: None
 float_t  ____drive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Distortion, ___Level) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Distortion, ___DryWet) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Distortion, ___WetGain) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Distortion, ____internalBypass) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Distortion, ____bypass) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Distortion, ____drive) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Distortion) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
