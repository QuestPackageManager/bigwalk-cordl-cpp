#pragma once
// IWYU pragma private; include "GlobalNamespace/BitCrusher.hpp"
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
CORDL_MODULE_EXPORT(BitCrusher)
namespace GlobalNamespace {
class BitCrusher_Process_000004A8$BurstDirectCall;
}
namespace GlobalNamespace {
class BitCrusher_Process_000004A8$PostfixBurstDelegate;
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
class BitCrusher;
}
namespace GlobalNamespace {
class BitCrusher_Process_000004A8$BurstDirectCall;
}
namespace GlobalNamespace {
class BitCrusher_Process_000004A8$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BitCrusher*);
MARK_REF_T(::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BitCrusher*, "", "BitCrusher");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall*, "", "BitCrusher/Process_000004A8$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate*, "", "BitCrusher/Process_000004A8$PostfixBurstDelegate");
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: BitCrusher/Process_000004A8$PostfixBurstDelegate
class CORDL_TYPE BitCrusher_Process_000004A8$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1804a38d0, size 0x110, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t*  data, int32_t  dataLength, int32_t  channels, int32_t  step, float_t  ampVal, float_t  crushScale, float_t  dryWet, float_t  smooth, int32_t  mono, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_10) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1804a39e0, size 0x280, virtual true, abstract: false, final false
inline void Invoke(float_t*  data, int32_t  dataLength, int32_t  channels, int32_t  step, float_t  ampVal, float_t  crushScale, float_t  dryWet, float_t  smooth, int32_t  mono) ;

static inline ::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1804a3c60, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitCrusher_Process_000004A8$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitCrusher_Process_000004A8$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BitCrusher_Process_000004A8$PostfixBurstDelegate(BitCrusher_Process_000004A8$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitCrusher_Process_000004A8$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitCrusher_Process_000004A8$PostfixBurstDelegate(BitCrusher_Process_000004A8$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17611};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BitCrusher/Process_000004A8$BurstDirectCall
class CORDL_TYPE BitCrusher_Process_000004A8$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1804a37b0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1804a3680, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18049d5f0, size 0x210, virtual false, abstract: false, final false
static inline void Invoke(float_t*  data, int32_t  dataLength, int32_t  channels, int32_t  step, float_t  ampVal, float_t  crushScale, float_t  dryWet, float_t  smooth, int32_t  mono) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitCrusher_Process_000004A8$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitCrusher_Process_000004A8$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BitCrusher_Process_000004A8$BurstDirectCall(BitCrusher_Process_000004A8$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitCrusher_Process_000004A8$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitCrusher_Process_000004A8$BurstDirectCall(BitCrusher_Process_000004A8$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17612};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AudioFilterBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: BitCrusher
class CORDL_TYPE BitCrusher : public ::GlobalNamespace::AudioFilterBase {
public:
// Declarations
using Process_000004A8$BurstDirectCall = ::GlobalNamespace::BitCrusher_Process_000004A8$BurstDirectCall;

using Process_000004A8$PostfixBurstDelegate = ::GlobalNamespace::BitCrusher_Process_000004A8$PostfixBurstDelegate;

/// @brief Field BitDepth, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_BitDepth, put=__cordl_internal_set_BitDepth)) int32_t  BitDepth;

 __declspec(property(get=get_Bypass, put=set_Bypass)) bool  Bypass;

/// @brief Field CrushRate, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_CrushRate, put=__cordl_internal_set_CrushRate)) int32_t  CrushRate;

/// @brief Field DebugBypass, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DebugBypass, put=setStaticF_DebugBypass)) bool  DebugBypass;

/// @brief Field DryWet, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_DryWet, put=__cordl_internal_set_DryWet)) float_t  DryWet;

 __declspec(property(get=get_InternalBypass, put=set_InternalBypass)) bool  InternalBypass;

/// @brief Field Mono, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_Mono, put=__cordl_internal_set_Mono)) bool  Mono;

/// @brief Field Smooth, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Smooth, put=__cordl_internal_set_Smooth)) float_t  Smooth;

/// @brief Field _bypass, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get__bypass, put=__cordl_internal_set__bypass)) bool  _bypass;

/// @brief Field _cachedAmpVal, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedAmpVal, put=__cordl_internal_set__cachedAmpVal)) int32_t  _cachedAmpVal;

/// @brief Field _cachedBitDepth, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedBitDepth, put=__cordl_internal_set__cachedBitDepth)) int32_t  _cachedBitDepth;

/// @brief Field _cachedCrushScale, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedCrushScale, put=__cordl_internal_set__cachedCrushScale)) float_t  _cachedCrushScale;

/// @brief Field _internalBypass, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__internalBypass, put=__cordl_internal_set__internalBypass)) bool  _internalBypass;

/// @brief Method Awake, addr 0x18049d470, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::BitCrusher* New_ctor() ;

/// @brief Method Process, addr 0x18049d5f0, size 0x210, virtual false, abstract: false, final false
static inline void Process(float_t*  data, int32_t  dataLength, int32_t  channels, int32_t  step, float_t  ampVal, float_t  crushScale, float_t  dryWet, float_t  smooth, int32_t  mono) ;

/// @brief Method Process$BurstManaged, addr 0x180498d30, size 0x6d0, virtual false, abstract: false, final false
static inline void Process$BurstManaged(float_t*  data, int32_t  dataLength, int32_t  channels, int32_t  step, float_t  ampVal, float_t  crushScale, float_t  dryWet, float_t  smooth, int32_t  mono) ;

/// @brief Method ProcessSamples, addr 0x18049d4f0, size 0x100, virtual true, abstract: false, final false
inline void ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels) ;

/// @brief Method RebuildBitDepthCache, addr 0x18049d470, size 0x80, virtual false, abstract: false, final false
inline void RebuildBitDepthCache() ;

/// @brief Method UpdateVariables, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void UpdateVariables(float_t  deltaTime) ;

constexpr int32_t const& __cordl_internal_get_BitDepth() const;

constexpr int32_t& __cordl_internal_get_BitDepth() ;

constexpr int32_t const& __cordl_internal_get_CrushRate() const;

constexpr int32_t& __cordl_internal_get_CrushRate() ;

constexpr float_t const& __cordl_internal_get_DryWet() const;

constexpr float_t& __cordl_internal_get_DryWet() ;

constexpr bool const& __cordl_internal_get_Mono() const;

constexpr bool& __cordl_internal_get_Mono() ;

constexpr float_t const& __cordl_internal_get_Smooth() const;

constexpr float_t& __cordl_internal_get_Smooth() ;

constexpr bool const& __cordl_internal_get__bypass() const;

constexpr bool& __cordl_internal_get__bypass() ;

constexpr int32_t const& __cordl_internal_get__cachedAmpVal() const;

constexpr int32_t& __cordl_internal_get__cachedAmpVal() ;

constexpr int32_t const& __cordl_internal_get__cachedBitDepth() const;

constexpr int32_t& __cordl_internal_get__cachedBitDepth() ;

constexpr float_t const& __cordl_internal_get__cachedCrushScale() const;

constexpr float_t& __cordl_internal_get__cachedCrushScale() ;

constexpr bool const& __cordl_internal_get__internalBypass() const;

constexpr bool& __cordl_internal_get__internalBypass() ;

constexpr void __cordl_internal_set_BitDepth(int32_t  value) ;

constexpr void __cordl_internal_set_CrushRate(int32_t  value) ;

constexpr void __cordl_internal_set_DryWet(float_t  value) ;

constexpr void __cordl_internal_set_Mono(bool  value) ;

constexpr void __cordl_internal_set_Smooth(float_t  value) ;

constexpr void __cordl_internal_set__bypass(bool  value) ;

constexpr void __cordl_internal_set__cachedAmpVal(int32_t  value) ;

constexpr void __cordl_internal_set__cachedBitDepth(int32_t  value) ;

constexpr void __cordl_internal_set__cachedCrushScale(float_t  value) ;

constexpr void __cordl_internal_set__internalBypass(bool  value) ;

/// @brief Method .ctor, addr 0x18049d800, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_DebugBypass() ;

/// @brief Method get_Bypass, addr 0x18049d830, size 0x10, virtual true, abstract: false, final false
inline bool get_Bypass() ;

/// @brief Method get_InternalBypass, addr 0x18049c410, size 0x10, virtual true, abstract: false, final false
inline bool get_InternalBypass() ;

static inline void setStaticF_DebugBypass(bool  value) ;

/// @brief Method set_Bypass, addr 0x18049d840, size 0x10, virtual true, abstract: false, final false
inline void set_Bypass(bool  value) ;

/// @brief Method set_InternalBypass, addr 0x18049c420, size 0x10, virtual true, abstract: false, final false
inline void set_InternalBypass(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitCrusher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitCrusher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BitCrusher(BitCrusher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitCrusher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitCrusher(BitCrusher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17613};

/// @brief Field BitDepth, offset: 0x20, size: 0x4, def value: None
 int32_t  ___BitDepth;

/// @brief Field CrushRate, offset: 0x24, size: 0x4, def value: None
 int32_t  ___CrushRate;

/// @brief Field DryWet, offset: 0x28, size: 0x4, def value: None
 float_t  ___DryWet;

/// @brief Field Smooth, offset: 0x2c, size: 0x4, def value: None
 float_t  ___Smooth;

/// @brief Field Mono, offset: 0x30, size: 0x1, def value: None
 bool  ___Mono;

/// @brief Field _internalBypass, offset: 0x31, size: 0x1, def value: None
 bool  ____internalBypass;

/// @brief Field _bypass, offset: 0x32, size: 0x1, def value: None
 bool  ____bypass;

/// @brief Field _cachedAmpVal, offset: 0x34, size: 0x4, def value: None
 int32_t  ____cachedAmpVal;

/// @brief Field _cachedCrushScale, offset: 0x38, size: 0x4, def value: None
 float_t  ____cachedCrushScale;

/// @brief Field _cachedBitDepth, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____cachedBitDepth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BitCrusher, ___BitDepth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitCrusher, ___CrushRate) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitCrusher, ___DryWet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitCrusher, ___Smooth) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitCrusher, ___Mono) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitCrusher, ____internalBypass) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitCrusher, ____bypass) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitCrusher, ____cachedAmpVal) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitCrusher, ____cachedCrushScale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitCrusher, ____cachedBitDepth) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BitCrusher) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
