#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityFilterChorus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__UnityFilterBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UnityFilterChorus)
namespace GlobalNamespace {
class AudioSourceRefs;
}
namespace UnityEngine {
class AudioChorusFilter;
}
namespace UnityEngine {
class Behaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityFilterChorus;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnityFilterChorus*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityFilterChorus*, "", "UnityFilterChorus");
// Dependencies UnityFilterBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityFilterChorus
class CORDL_TYPE UnityFilterChorus : public ::GlobalNamespace::UnityFilterBase {
public:
// Declarations
/// @brief Field DebugBypass, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DebugBypass, put=setStaticF_DebugBypass)) bool  DebugBypass;

/// @brief Field Delay, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Delay, put=__cordl_internal_set_Delay)) float_t  Delay;

/// @brief Field Depth, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_Depth, put=__cordl_internal_set_Depth)) float_t  Depth;

/// @brief Field DryMix, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_DryMix, put=__cordl_internal_set_DryMix)) float_t  DryMix;

 __declspec(property(get=get_Filter, put=set_Filter)) ::UnityW<::UnityEngine::Behaviour>  Filter;

 __declspec(property(get=get_IsDebugBypassed)) bool  IsDebugBypassed;

/// @brief Field Rate, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Rate, put=__cordl_internal_set_Rate)) float_t  Rate;

/// @brief Field WetMix1, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_WetMix1, put=__cordl_internal_set_WetMix1)) float_t  WetMix1;

/// @brief Field WetMix2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_WetMix2, put=__cordl_internal_set_WetMix2)) float_t  WetMix2;

/// @brief Field WetMix3, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_WetMix3, put=__cordl_internal_set_WetMix3)) float_t  WetMix3;

/// @brief Field _filter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__filter, put=__cordl_internal_set__filter)) ::UnityW<::UnityEngine::AudioChorusFilter>  _filter;

static inline ::GlobalNamespace::UnityFilterChorus* New_ctor() ;

/// @brief Method SetFilter, addr 0x1804a63f0, size 0x30, virtual true, abstract: false, final false
inline void SetFilter(::GlobalNamespace::AudioSourceRefs*  audioSourceRefs) ;

/// @brief Method UpdateValues, addr 0x1804a6420, size 0xe0, virtual true, abstract: false, final false
inline void UpdateValues() ;

constexpr float_t const& __cordl_internal_get_Delay() const;

constexpr float_t& __cordl_internal_get_Delay() ;

constexpr float_t const& __cordl_internal_get_Depth() const;

constexpr float_t& __cordl_internal_get_Depth() ;

constexpr float_t const& __cordl_internal_get_DryMix() const;

constexpr float_t& __cordl_internal_get_DryMix() ;

constexpr float_t const& __cordl_internal_get_Rate() const;

constexpr float_t& __cordl_internal_get_Rate() ;

constexpr float_t const& __cordl_internal_get_WetMix1() const;

constexpr float_t& __cordl_internal_get_WetMix1() ;

constexpr float_t const& __cordl_internal_get_WetMix2() const;

constexpr float_t& __cordl_internal_get_WetMix2() ;

constexpr float_t const& __cordl_internal_get_WetMix3() const;

constexpr float_t& __cordl_internal_get_WetMix3() ;

constexpr ::UnityW<::UnityEngine::AudioChorusFilter> const& __cordl_internal_get__filter() const;

constexpr ::UnityW<::UnityEngine::AudioChorusFilter>& __cordl_internal_get__filter() ;

constexpr void __cordl_internal_set_Delay(float_t  value) ;

constexpr void __cordl_internal_set_Depth(float_t  value) ;

constexpr void __cordl_internal_set_DryMix(float_t  value) ;

constexpr void __cordl_internal_set_Rate(float_t  value) ;

constexpr void __cordl_internal_set_WetMix1(float_t  value) ;

constexpr void __cordl_internal_set_WetMix2(float_t  value) ;

constexpr void __cordl_internal_set_WetMix3(float_t  value) ;

constexpr void __cordl_internal_set__filter(::UnityW<::UnityEngine::AudioChorusFilter>  value) ;

/// @brief Method .ctor, addr 0x1804a6500, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_DebugBypass() ;

/// @brief Method get_Filter, addr 0x1802d97e0, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Behaviour> get_Filter() ;

/// @brief Method get_IsDebugBypassed, addr 0x1804a6540, size 0x20, virtual true, abstract: false, final false
inline bool get_IsDebugBypassed() ;

static inline void setStaticF_DebugBypass(bool  value) ;

/// @brief Method set_Filter, addr 0x1804a6560, size 0x30, virtual true, abstract: false, final false
inline void set_Filter(::UnityEngine::Behaviour*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityFilterChorus() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityFilterChorus", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityFilterChorus(UnityFilterChorus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityFilterChorus", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityFilterChorus(UnityFilterChorus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17622};

/// @brief Field _filter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioChorusFilter>  ____filter;

/// @brief Field DryMix, offset: 0x28, size: 0x4, def value: None
 float_t  ___DryMix;

/// @brief Field WetMix1, offset: 0x2c, size: 0x4, def value: None
 float_t  ___WetMix1;

/// @brief Field WetMix2, offset: 0x30, size: 0x4, def value: None
 float_t  ___WetMix2;

/// @brief Field WetMix3, offset: 0x34, size: 0x4, def value: None
 float_t  ___WetMix3;

/// @brief Field Delay, offset: 0x38, size: 0x4, def value: None
 float_t  ___Delay;

/// @brief Field Rate, offset: 0x3c, size: 0x4, def value: None
 float_t  ___Rate;

/// @brief Field Depth, offset: 0x40, size: 0x4, def value: None
 float_t  ___Depth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityFilterChorus, ____filter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterChorus, ___DryMix) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterChorus, ___WetMix1) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterChorus, ___WetMix2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterChorus, ___WetMix3) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterChorus, ___Delay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterChorus, ___Rate) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterChorus, ___Depth) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityFilterChorus) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
