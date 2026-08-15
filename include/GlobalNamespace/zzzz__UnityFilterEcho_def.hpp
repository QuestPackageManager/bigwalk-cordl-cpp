#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityFilterEcho.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__UnityFilterBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UnityFilterEcho)
namespace GlobalNamespace {
class AudioSourceRefs;
}
namespace UnityEngine {
class AudioEchoFilter;
}
namespace UnityEngine {
class Behaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityFilterEcho;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnityFilterEcho*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityFilterEcho*, "", "UnityFilterEcho");
// Dependencies UnityFilterBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityFilterEcho
class CORDL_TYPE UnityFilterEcho : public ::GlobalNamespace::UnityFilterBase {
public:
// Declarations
/// @brief Field DebugBypass, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DebugBypass, put=setStaticF_DebugBypass)) bool  DebugBypass;

/// @brief Field DecayRatio, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DecayRatio, put=__cordl_internal_set_DecayRatio)) float_t  DecayRatio;

/// @brief Field Delay, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Delay, put=__cordl_internal_set_Delay)) float_t  Delay;

/// @brief Field DryMix, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_DryMix, put=__cordl_internal_set_DryMix)) float_t  DryMix;

 __declspec(property(get=get_Filter, put=set_Filter)) ::UnityW<::UnityEngine::Behaviour>  Filter;

 __declspec(property(get=get_IsDebugBypassed)) bool  IsDebugBypassed;

/// @brief Field WetMix, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_WetMix, put=__cordl_internal_set_WetMix)) float_t  WetMix;

/// @brief Field _filter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__filter, put=__cordl_internal_set__filter)) ::UnityW<::UnityEngine::AudioEchoFilter>  _filter;

static inline ::GlobalNamespace::UnityFilterEcho* New_ctor() ;

/// @brief Method SetFilter, addr 0x1804a6670, size 0x30, virtual true, abstract: false, final false
inline void SetFilter(::GlobalNamespace::AudioSourceRefs*  audioSourceRefs) ;

/// @brief Method UpdateValues, addr 0x1804a66a0, size 0x90, virtual true, abstract: false, final false
inline void UpdateValues() ;

constexpr float_t const& __cordl_internal_get_DecayRatio() const;

constexpr float_t& __cordl_internal_get_DecayRatio() ;

constexpr float_t const& __cordl_internal_get_Delay() const;

constexpr float_t& __cordl_internal_get_Delay() ;

constexpr float_t const& __cordl_internal_get_DryMix() const;

constexpr float_t& __cordl_internal_get_DryMix() ;

constexpr float_t const& __cordl_internal_get_WetMix() const;

constexpr float_t& __cordl_internal_get_WetMix() ;

constexpr ::UnityW<::UnityEngine::AudioEchoFilter> const& __cordl_internal_get__filter() const;

constexpr ::UnityW<::UnityEngine::AudioEchoFilter>& __cordl_internal_get__filter() ;

constexpr void __cordl_internal_set_DecayRatio(float_t  value) ;

constexpr void __cordl_internal_set_Delay(float_t  value) ;

constexpr void __cordl_internal_set_DryMix(float_t  value) ;

constexpr void __cordl_internal_set_WetMix(float_t  value) ;

constexpr void __cordl_internal_set__filter(::UnityW<::UnityEngine::AudioEchoFilter>  value) ;

/// @brief Method .ctor, addr 0x1804a6730, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_DebugBypass() ;

/// @brief Method get_Filter, addr 0x1802d97e0, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Behaviour> get_Filter() ;

/// @brief Method get_IsDebugBypassed, addr 0x1804a6760, size 0x20, virtual true, abstract: false, final false
inline bool get_IsDebugBypassed() ;

static inline void setStaticF_DebugBypass(bool  value) ;

/// @brief Method set_Filter, addr 0x1804a6780, size 0x30, virtual true, abstract: false, final false
inline void set_Filter(::UnityEngine::Behaviour*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityFilterEcho() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityFilterEcho", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityFilterEcho(UnityFilterEcho && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityFilterEcho", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityFilterEcho(UnityFilterEcho const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17624};

/// @brief Field _filter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioEchoFilter>  ____filter;

/// @brief Field Delay, offset: 0x28, size: 0x4, def value: None
 float_t  ___Delay;

/// @brief Field DecayRatio, offset: 0x2c, size: 0x4, def value: None
 float_t  ___DecayRatio;

/// @brief Field DryMix, offset: 0x30, size: 0x4, def value: None
 float_t  ___DryMix;

/// @brief Field WetMix, offset: 0x34, size: 0x4, def value: None
 float_t  ___WetMix;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityFilterEcho, ____filter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterEcho, ___Delay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterEcho, ___DecayRatio) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterEcho, ___DryMix) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterEcho, ___WetMix) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityFilterEcho) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
