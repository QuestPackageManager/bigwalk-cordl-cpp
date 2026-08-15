#pragma once
// IWYU pragma private; include "GlobalNamespace/BiquadFilters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioFilterBase_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BiquadFilters)
namespace GlobalNamespace {
struct BiquadFilters_AppliedCoefficients;
}
namespace GlobalNamespace {
struct BiquadFilters_DelayedSamples;
}
namespace GlobalNamespace {
struct BiquadFilters_FilterType;
}
namespace GlobalNamespace {
class BiquadFilters_Process_0000049E$BurstDirectCall;
}
namespace GlobalNamespace {
class BiquadFilters_Process_0000049E$PostfixBurstDelegate;
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
struct BiquadFilters_FilterType;
}
namespace GlobalNamespace {
class BiquadFilters;
}
namespace GlobalNamespace {
class BiquadFilters_Process_0000049E$BurstDirectCall;
}
namespace GlobalNamespace {
class BiquadFilters_Process_0000049E$PostfixBurstDelegate;
}
namespace GlobalNamespace {
struct BiquadFilters_AppliedCoefficients;
}
namespace GlobalNamespace {
struct BiquadFilters_DelayedSamples;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BiquadFilters_FilterType);
MARK_REF_T(::GlobalNamespace::BiquadFilters*);
MARK_REF_T(::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate*);
MARK_VAL_T(::GlobalNamespace::BiquadFilters_AppliedCoefficients);
MARK_VAL_T(::GlobalNamespace::BiquadFilters_DelayedSamples);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BiquadFilters_FilterType, "", "BiquadFilters/FilterType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BiquadFilters*, "", "BiquadFilters");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall*, "", "BiquadFilters/Process_0000049E$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate*, "", "BiquadFilters/Process_0000049E$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BiquadFilters_AppliedCoefficients, "", "BiquadFilters/AppliedCoefficients");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BiquadFilters_DelayedSamples, "", "BiquadFilters/DelayedSamples");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BiquadFilters/FilterType
struct CORDL_TYPE BiquadFilters_FilterType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BiquadFilters_FilterType_Unwrapped
enum struct __BiquadFilters_FilterType_Unwrapped : int32_t {
__E_Allpass = static_cast<int32_t>(0x0),
__E_LowPass = static_cast<int32_t>(0x1),
__E_HighPass = static_cast<int32_t>(0x2),
__E_Notch = static_cast<int32_t>(0x3),
__E_LowShelf = static_cast<int32_t>(0x4),
__E_HighShelf = static_cast<int32_t>(0x5),
__E_PeakingEQ = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BiquadFilters_FilterType_Unwrapped () const noexcept {
return static_cast<__BiquadFilters_FilterType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BiquadFilters_FilterType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BiquadFilters_FilterType(int32_t  value__) noexcept;

/// @brief Field Allpass value: I32(0)
static ::GlobalNamespace::BiquadFilters_FilterType const Allpass;

/// @brief Field HighPass value: I32(2)
static ::GlobalNamespace::BiquadFilters_FilterType const HighPass;

/// @brief Field HighShelf value: I32(5)
static ::GlobalNamespace::BiquadFilters_FilterType const HighShelf;

/// @brief Field LowPass value: I32(1)
static ::GlobalNamespace::BiquadFilters_FilterType const LowPass;

/// @brief Field LowShelf value: I32(4)
static ::GlobalNamespace::BiquadFilters_FilterType const LowShelf;

/// @brief Field Notch value: I32(3)
static ::GlobalNamespace::BiquadFilters_FilterType const Notch;

/// @brief Field PeakingEQ value: I32(6)
static ::GlobalNamespace::BiquadFilters_FilterType const PeakingEQ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17605};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BiquadFilters_FilterType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BiquadFilters_FilterType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BiquadFilters/DelayedSamples
struct CORDL_TYPE BiquadFilters_DelayedSamples {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BiquadFilters_DelayedSamples() ;

// Ctor Parameters [CppParam { name: "za1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "za2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "zb1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "zb2", ty: "float_t", modifiers: "", def_value: None }]
constexpr BiquadFilters_DelayedSamples(float_t  za1, float_t  za2, float_t  zb1, float_t  zb2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17606};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field za1, offset: 0x0, size: 0x4, def value: None
 float_t  za1;

/// @brief Field za2, offset: 0x4, size: 0x4, def value: None
 float_t  za2;

/// @brief Field zb1, offset: 0x8, size: 0x4, def value: None
 float_t  zb1;

/// @brief Field zb2, offset: 0xc, size: 0x4, def value: None
 float_t  zb2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BiquadFilters_DelayedSamples, za1) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters_DelayedSamples, za2) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters_DelayedSamples, zb1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters_DelayedSamples, zb2) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BiquadFilters_DelayedSamples) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BiquadFilters/AppliedCoefficients
struct CORDL_TYPE BiquadFilters_AppliedCoefficients {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BiquadFilters_AppliedCoefficients() ;

// Ctor Parameters [CppParam { name: "b0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "b1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "b2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "a1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "a2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "volWet", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "dryInv", ty: "float_t", modifiers: "", def_value: None }]
constexpr BiquadFilters_AppliedCoefficients(float_t  b0, float_t  b1, float_t  b2, float_t  a1, float_t  a2, float_t  volWet, float_t  dryInv) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17607};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field b0, offset: 0x0, size: 0x4, def value: None
 float_t  b0;

/// @brief Field b1, offset: 0x4, size: 0x4, def value: None
 float_t  b1;

/// @brief Field b2, offset: 0x8, size: 0x4, def value: None
 float_t  b2;

/// @brief Field a1, offset: 0xc, size: 0x4, def value: None
 float_t  a1;

/// @brief Field a2, offset: 0x10, size: 0x4, def value: None
 float_t  a2;

/// @brief Field volWet, offset: 0x14, size: 0x4, def value: None
 float_t  volWet;

/// @brief Field dryInv, offset: 0x18, size: 0x4, def value: None
 float_t  dryInv;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BiquadFilters_AppliedCoefficients, b0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters_AppliedCoefficients, b1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters_AppliedCoefficients, b2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters_AppliedCoefficients, a1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters_AppliedCoefficients, a2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters_AppliedCoefficients, volWet) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters_AppliedCoefficients, dryInv) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BiquadFilters_AppliedCoefficients) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: BiquadFilters/Process_0000049E$PostfixBurstDelegate
class CORDL_TYPE BiquadFilters_Process_0000049E$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1804a32f0, size 0xe0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t*  data, int32_t  length, int32_t  channels, ::GlobalNamespace::BiquadFilters_DelayedSamples*  state, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  current, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  target, float_t  clampLimit, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_8) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1804a33d0, size 0x1f0, virtual true, abstract: false, final false
inline void Invoke(float_t*  data, int32_t  length, int32_t  channels, ::GlobalNamespace::BiquadFilters_DelayedSamples*  state, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  current, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  target, float_t  clampLimit) ;

static inline ::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1804a35c0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BiquadFilters_Process_0000049E$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BiquadFilters_Process_0000049E$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BiquadFilters_Process_0000049E$PostfixBurstDelegate(BiquadFilters_Process_0000049E$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BiquadFilters_Process_0000049E$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BiquadFilters_Process_0000049E$PostfixBurstDelegate(BiquadFilters_Process_0000049E$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17608};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BiquadFilters/Process_0000049E$BurstDirectCall
class CORDL_TYPE BiquadFilters_Process_0000049E$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1804a31d0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1804a30a0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18049cf40, size 0x1e0, virtual false, abstract: false, final false
static inline void Invoke(float_t*  data, int32_t  length, int32_t  channels, ::GlobalNamespace::BiquadFilters_DelayedSamples*  state, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  current, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  target, float_t  clampLimit) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BiquadFilters_Process_0000049E$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BiquadFilters_Process_0000049E$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BiquadFilters_Process_0000049E$BurstDirectCall(BiquadFilters_Process_0000049E$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BiquadFilters_Process_0000049E$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BiquadFilters_Process_0000049E$BurstDirectCall(BiquadFilters_Process_0000049E$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17609};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AudioFilterBase, BiquadFilters::AppliedCoefficients, BiquadFilters::DelayedSamples, BiquadFilters::FilterType
namespace GlobalNamespace {
// Is value type: false
// CS Name: BiquadFilters
class CORDL_TYPE BiquadFilters : public ::GlobalNamespace::AudioFilterBase {
public:
// Declarations
using AppliedCoefficients = ::GlobalNamespace::BiquadFilters_AppliedCoefficients;

using DelayedSamples = ::GlobalNamespace::BiquadFilters_DelayedSamples;

using FilterType = ::GlobalNamespace::BiquadFilters_FilterType;

using Process_0000049E$BurstDirectCall = ::GlobalNamespace::BiquadFilters_Process_0000049E$BurstDirectCall;

using Process_0000049E$PostfixBurstDelegate = ::GlobalNamespace::BiquadFilters_Process_0000049E$PostfixBurstDelegate;

 __declspec(property(get=get_Bypass, put=set_Bypass)) bool  Bypass;

 __declspec(property(get=get_ClampLimit, put=set_ClampLimit)) float_t  ClampLimit;

/// @brief Field DebugBypass, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DebugBypass, put=setStaticF_DebugBypass)) bool  DebugBypass;

 __declspec(property(get=get_DryWet, put=set_DryWet)) float_t  DryWet;

 __declspec(property(get=get_Frequency, put=set_Frequency)) float_t  Frequency;

 __declspec(property(get=get_Gain, put=set_Gain)) float_t  Gain;

 __declspec(property(get=get_InternalBypass, put=set_InternalBypass)) bool  InternalBypass;

 __declspec(property(get=get_Q, put=set_Q)) float_t  Q;

/// @brief Field Type, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::GlobalNamespace::BiquadFilters_FilterType  Type;

 __declspec(property(get=get_Vol, put=set_Vol)) float_t  Vol;

/// @brief Field _A, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__A, put=__cordl_internal_set__A)) float_t  _A;

/// @brief Field _a0, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__a0, put=__cordl_internal_set__a0)) float_t  _a0;

/// @brief Field _a1, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__a1, put=__cordl_internal_set__a1)) float_t  _a1;

/// @brief Field _a2, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__a2, put=__cordl_internal_set__a2)) float_t  _a2;

/// @brief Field _alpha, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__alpha, put=__cordl_internal_set__alpha)) float_t  _alpha;

/// @brief Field _applied, offset 0x88, size 0x1c 
 __declspec(property(get=__cordl_internal_get__applied, put=__cordl_internal_set__applied)) ::GlobalNamespace::BiquadFilters_AppliedCoefficients  _applied;

/// @brief Field _appliedInitialized, offset 0xa4, size 0x1 
 __declspec(property(get=__cordl_internal_get__appliedInitialized, put=__cordl_internal_set__appliedInitialized)) bool  _appliedInitialized;

/// @brief Field _b0, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__b0, put=__cordl_internal_set__b0)) float_t  _b0;

/// @brief Field _b1, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__b1, put=__cordl_internal_set__b1)) float_t  _b1;

/// @brief Field _b2, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__b2, put=__cordl_internal_set__b2)) float_t  _b2;

/// @brief Field _bypass, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get__bypass, put=__cordl_internal_set__bypass)) bool  _bypass;

/// @brief Field _clampLimit, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__clampLimit, put=__cordl_internal_set__clampLimit)) float_t  _clampLimit;

/// @brief Field _cosW0, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__cosW0, put=__cordl_internal_set__cosW0)) float_t  _cosW0;

/// @brief Field _delayedSamples, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__delayedSamples, put=__cordl_internal_set__delayedSamples)) ::ArrayW<::GlobalNamespace::BiquadFilters_DelayedSamples>  _delayedSamples;

/// @brief Field _dirty, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get__dirty, put=__cordl_internal_set__dirty)) bool  _dirty;

/// @brief Field _dryWet, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__dryWet, put=__cordl_internal_set__dryWet)) float_t  _dryWet;

/// @brief Field _frequency, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__frequency, put=__cordl_internal_set__frequency)) float_t  _frequency;

/// @brief Field _gain, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__gain, put=__cordl_internal_set__gain)) float_t  _gain;

/// @brief Field _internalBypass, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__internalBypass, put=__cordl_internal_set__internalBypass)) bool  _internalBypass;

/// @brief Field _invA0, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__invA0, put=__cordl_internal_set__invA0)) float_t  _invA0;

/// @brief Field _lastType, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastType, put=__cordl_internal_set__lastType)) ::GlobalNamespace::BiquadFilters_FilterType  _lastType;

/// @brief Field _q, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__q, put=__cordl_internal_set__q)) float_t  _q;

/// @brief Field _sampleRate, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__sampleRate, put=__cordl_internal_set__sampleRate)) float_t  _sampleRate;

/// @brief Field _sqrtAAlpha, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__sqrtAAlpha, put=__cordl_internal_set__sqrtAAlpha)) float_t  _sqrtAAlpha;

/// @brief Field _vol, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__vol, put=__cordl_internal_set__vol)) float_t  _vol;

/// @brief Field _w0, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__w0, put=__cordl_internal_set__w0)) float_t  _w0;

/// @brief Method Awake, addr 0x18049c800, size 0xd0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CoefficientCalculation, addr 0x18049c8d0, size 0x420, virtual false, abstract: false, final false
inline void CoefficientCalculation(::GlobalNamespace::BiquadFilters_FilterType  type) ;

/// @brief Method GainCalculation, addr 0x18049ccf0, size 0x80, virtual false, abstract: false, final false
inline void GainCalculation(::GlobalNamespace::BiquadFilters_FilterType  type) ;

static inline ::GlobalNamespace::BiquadFilters* New_ctor() ;

/// @brief Method Process, addr 0x18049cf40, size 0x1e0, virtual false, abstract: false, final false
static inline void Process(float_t*  data, int32_t  length, int32_t  channels, ::GlobalNamespace::BiquadFilters_DelayedSamples*  state, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  current, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  target, float_t  clampLimit) ;

/// @brief Method Process$BurstManaged, addr 0x180498a60, size 0x2d0, virtual false, abstract: false, final false
static inline void Process$BurstManaged(float_t*  data, int32_t  length, int32_t  channels, ::GlobalNamespace::BiquadFilters_DelayedSamples*  state, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  current, ::by_ref<::GlobalNamespace::BiquadFilters_AppliedCoefficients>  target, float_t  clampLimit) ;

/// @brief Method ProcessSamples, addr 0x18049cd70, size 0x1d0, virtual true, abstract: false, final false
inline void ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels) ;

/// @brief Method QandFrequencyCalculation, addr 0x18049d120, size 0x70, virtual false, abstract: false, final false
inline void QandFrequencyCalculation() ;

/// @brief Method UpdateVariables, addr 0x18049d190, size 0x150, virtual true, abstract: false, final false
inline void UpdateVariables(float_t  deltaTime) ;

constexpr ::GlobalNamespace::BiquadFilters_FilterType const& __cordl_internal_get_Type() const;

constexpr ::GlobalNamespace::BiquadFilters_FilterType& __cordl_internal_get_Type() ;

constexpr float_t const& __cordl_internal_get__A() const;

constexpr float_t& __cordl_internal_get__A() ;

constexpr float_t const& __cordl_internal_get__a0() const;

constexpr float_t& __cordl_internal_get__a0() ;

constexpr float_t const& __cordl_internal_get__a1() const;

constexpr float_t& __cordl_internal_get__a1() ;

constexpr float_t const& __cordl_internal_get__a2() const;

constexpr float_t& __cordl_internal_get__a2() ;

constexpr float_t const& __cordl_internal_get__alpha() const;

constexpr float_t& __cordl_internal_get__alpha() ;

constexpr ::GlobalNamespace::BiquadFilters_AppliedCoefficients const& __cordl_internal_get__applied() const;

constexpr ::GlobalNamespace::BiquadFilters_AppliedCoefficients& __cordl_internal_get__applied() ;

constexpr bool const& __cordl_internal_get__appliedInitialized() const;

constexpr bool& __cordl_internal_get__appliedInitialized() ;

constexpr float_t const& __cordl_internal_get__b0() const;

constexpr float_t& __cordl_internal_get__b0() ;

constexpr float_t const& __cordl_internal_get__b1() const;

constexpr float_t& __cordl_internal_get__b1() ;

constexpr float_t const& __cordl_internal_get__b2() const;

constexpr float_t& __cordl_internal_get__b2() ;

constexpr bool const& __cordl_internal_get__bypass() const;

constexpr bool& __cordl_internal_get__bypass() ;

constexpr float_t const& __cordl_internal_get__clampLimit() const;

constexpr float_t& __cordl_internal_get__clampLimit() ;

constexpr float_t const& __cordl_internal_get__cosW0() const;

constexpr float_t& __cordl_internal_get__cosW0() ;

constexpr ::ArrayW<::GlobalNamespace::BiquadFilters_DelayedSamples> const& __cordl_internal_get__delayedSamples() const;

constexpr ::ArrayW<::GlobalNamespace::BiquadFilters_DelayedSamples>& __cordl_internal_get__delayedSamples() ;

constexpr bool const& __cordl_internal_get__dirty() const;

constexpr bool& __cordl_internal_get__dirty() ;

constexpr float_t const& __cordl_internal_get__dryWet() const;

constexpr float_t& __cordl_internal_get__dryWet() ;

constexpr float_t const& __cordl_internal_get__frequency() const;

constexpr float_t& __cordl_internal_get__frequency() ;

constexpr float_t const& __cordl_internal_get__gain() const;

constexpr float_t& __cordl_internal_get__gain() ;

constexpr bool const& __cordl_internal_get__internalBypass() const;

constexpr bool& __cordl_internal_get__internalBypass() ;

constexpr float_t const& __cordl_internal_get__invA0() const;

constexpr float_t& __cordl_internal_get__invA0() ;

constexpr ::GlobalNamespace::BiquadFilters_FilterType const& __cordl_internal_get__lastType() const;

constexpr ::GlobalNamespace::BiquadFilters_FilterType& __cordl_internal_get__lastType() ;

constexpr float_t const& __cordl_internal_get__q() const;

constexpr float_t& __cordl_internal_get__q() ;

constexpr float_t const& __cordl_internal_get__sampleRate() const;

constexpr float_t& __cordl_internal_get__sampleRate() ;

constexpr float_t const& __cordl_internal_get__sqrtAAlpha() const;

constexpr float_t& __cordl_internal_get__sqrtAAlpha() ;

constexpr float_t const& __cordl_internal_get__vol() const;

constexpr float_t& __cordl_internal_get__vol() ;

constexpr float_t const& __cordl_internal_get__w0() const;

constexpr float_t& __cordl_internal_get__w0() ;

constexpr void __cordl_internal_set_Type(::GlobalNamespace::BiquadFilters_FilterType  value) ;

constexpr void __cordl_internal_set__A(float_t  value) ;

constexpr void __cordl_internal_set__a0(float_t  value) ;

constexpr void __cordl_internal_set__a1(float_t  value) ;

constexpr void __cordl_internal_set__a2(float_t  value) ;

constexpr void __cordl_internal_set__alpha(float_t  value) ;

constexpr void __cordl_internal_set__applied(::GlobalNamespace::BiquadFilters_AppliedCoefficients  value) ;

constexpr void __cordl_internal_set__appliedInitialized(bool  value) ;

constexpr void __cordl_internal_set__b0(float_t  value) ;

constexpr void __cordl_internal_set__b1(float_t  value) ;

constexpr void __cordl_internal_set__b2(float_t  value) ;

constexpr void __cordl_internal_set__bypass(bool  value) ;

constexpr void __cordl_internal_set__clampLimit(float_t  value) ;

constexpr void __cordl_internal_set__cosW0(float_t  value) ;

constexpr void __cordl_internal_set__delayedSamples(::ArrayW<::GlobalNamespace::BiquadFilters_DelayedSamples>  value) ;

constexpr void __cordl_internal_set__dirty(bool  value) ;

constexpr void __cordl_internal_set__dryWet(float_t  value) ;

constexpr void __cordl_internal_set__frequency(float_t  value) ;

constexpr void __cordl_internal_set__gain(float_t  value) ;

constexpr void __cordl_internal_set__internalBypass(bool  value) ;

constexpr void __cordl_internal_set__invA0(float_t  value) ;

constexpr void __cordl_internal_set__lastType(::GlobalNamespace::BiquadFilters_FilterType  value) ;

constexpr void __cordl_internal_set__q(float_t  value) ;

constexpr void __cordl_internal_set__sampleRate(float_t  value) ;

constexpr void __cordl_internal_set__sqrtAAlpha(float_t  value) ;

constexpr void __cordl_internal_set__vol(float_t  value) ;

constexpr void __cordl_internal_set__w0(float_t  value) ;

/// @brief Method .ctor, addr 0x18049d2e0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_DebugBypass() ;

/// @brief Method get_Bypass, addr 0x18049d330, size 0x10, virtual true, abstract: false, final false
inline bool get_Bypass() ;

/// @brief Method get_ClampLimit, addr 0x1802f7fd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ClampLimit() ;

/// @brief Method get_DryWet, addr 0x1802e2da0, size 0x10, virtual false, abstract: false, final false
inline float_t get_DryWet() ;

/// @brief Method get_Frequency, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Frequency() ;

/// @brief Method get_Gain, addr 0x18049a530, size 0x10, virtual false, abstract: false, final false
inline float_t get_Gain() ;

/// @brief Method get_InternalBypass, addr 0x1803cbf40, size 0x10, virtual true, abstract: false, final false
inline bool get_InternalBypass() ;

/// @brief Method get_Q, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Q() ;

/// @brief Method get_Vol, addr 0x1803f68d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Vol() ;

static inline void setStaticF_DebugBypass(bool  value) ;

/// @brief Method set_Bypass, addr 0x18049d340, size 0x10, virtual true, abstract: false, final false
inline void set_Bypass(bool  value) ;

/// @brief Method set_ClampLimit, addr 0x18049d350, size 0x30, virtual false, abstract: false, final false
inline void set_ClampLimit(float_t  value) ;

/// @brief Method set_DryWet, addr 0x18049d380, size 0x30, virtual false, abstract: false, final false
inline void set_DryWet(float_t  value) ;

/// @brief Method set_Frequency, addr 0x18049d3b0, size 0x30, virtual false, abstract: false, final false
inline void set_Frequency(float_t  value) ;

/// @brief Method set_Gain, addr 0x18049d3e0, size 0x30, virtual false, abstract: false, final false
inline void set_Gain(float_t  value) ;

/// @brief Method set_InternalBypass, addr 0x1803cbfc0, size 0x10, virtual true, abstract: false, final false
inline void set_InternalBypass(bool  value) ;

/// @brief Method set_Q, addr 0x18049d410, size 0x30, virtual false, abstract: false, final false
inline void set_Q(float_t  value) ;

/// @brief Method set_Vol, addr 0x18049d440, size 0x30, virtual false, abstract: false, final false
inline void set_Vol(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BiquadFilters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BiquadFilters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BiquadFilters(BiquadFilters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BiquadFilters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BiquadFilters(BiquadFilters const& ) = delete;

/// @brief Field DENORMAL_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  DENORMAL_THRESHOLD{static_cast<float_t>(1e-15f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17610};

/// @brief Field Type, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::BiquadFilters_FilterType  ___Type;

/// @brief Field _q, offset: 0x24, size: 0x4, def value: None
 float_t  ____q;

/// @brief Field _frequency, offset: 0x28, size: 0x4, def value: None
 float_t  ____frequency;

/// @brief Field _gain, offset: 0x2c, size: 0x4, def value: None
 float_t  ____gain;

/// @brief Field _vol, offset: 0x30, size: 0x4, def value: None
 float_t  ____vol;

/// @brief Field _dryWet, offset: 0x34, size: 0x4, def value: None
 float_t  ____dryWet;

/// @brief Field _clampLimit, offset: 0x38, size: 0x4, def value: None
 float_t  ____clampLimit;

/// @brief Field _internalBypass, offset: 0x3c, size: 0x1, def value: None
 bool  ____internalBypass;

/// @brief Field _bypass, offset: 0x3d, size: 0x1, def value: None
 bool  ____bypass;

/// @brief Field _a0, offset: 0x40, size: 0x4, def value: None
 float_t  ____a0;

/// @brief Field _b0, offset: 0x44, size: 0x4, def value: None
 float_t  ____b0;

/// @brief Field _b1, offset: 0x48, size: 0x4, def value: None
 float_t  ____b1;

/// @brief Field _b2, offset: 0x4c, size: 0x4, def value: None
 float_t  ____b2;

/// @brief Field _a1, offset: 0x50, size: 0x4, def value: None
 float_t  ____a1;

/// @brief Field _a2, offset: 0x54, size: 0x4, def value: None
 float_t  ____a2;

/// @brief Field _invA0, offset: 0x58, size: 0x4, def value: None
 float_t  ____invA0;

/// @brief Field _w0, offset: 0x5c, size: 0x4, def value: None
 float_t  ____w0;

/// @brief Field _alpha, offset: 0x60, size: 0x4, def value: None
 float_t  ____alpha;

/// @brief Field _A, offset: 0x64, size: 0x4, def value: None
 float_t  ____A;

/// @brief Field _sampleRate, offset: 0x68, size: 0x4, def value: None
 float_t  ____sampleRate;

/// @brief Field _cosW0, offset: 0x6c, size: 0x4, def value: None
 float_t  ____cosW0;

/// @brief Field _sqrtAAlpha, offset: 0x70, size: 0x4, def value: None
 float_t  ____sqrtAAlpha;

/// @brief Field _dirty, offset: 0x74, size: 0x1, def value: None
 bool  ____dirty;

/// @brief Field _lastType, offset: 0x78, size: 0x4, def value: None
 ::GlobalNamespace::BiquadFilters_FilterType  ____lastType;

/// @brief Field _delayedSamples, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::BiquadFilters_DelayedSamples>  ____delayedSamples;

/// @brief Field _applied, offset: 0x88, size: 0x1c, def value: None
 ::GlobalNamespace::BiquadFilters_AppliedCoefficients  ____applied;

/// @brief Field _appliedInitialized, offset: 0xa4, size: 0x1, def value: None
 bool  ____appliedInitialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BiquadFilters, ___Type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____q) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____frequency) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____gain) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____vol) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____dryWet) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____clampLimit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____internalBypass) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____bypass) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____a0) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____b0) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____b1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____b2) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____a1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____a2) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____invA0) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____w0) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____alpha) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____A) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____sampleRate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____cosW0) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____sqrtAAlpha) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____dirty) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____lastType) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____delayedSamples) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____applied) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BiquadFilters, ____appliedInitialized) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BiquadFilters) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
