#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityFilterHP.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__UnityFilterBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UnityFilterHP)
namespace GlobalNamespace {
class AudioSourceRefs;
}
namespace UnityEngine {
class AudioHighPassFilter;
}
namespace UnityEngine {
class Behaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityFilterHP;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnityFilterHP*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityFilterHP*, "", "UnityFilterHP");
// Dependencies UnityFilterBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityFilterHP
class CORDL_TYPE UnityFilterHP : public ::GlobalNamespace::UnityFilterBase {
public:
// Declarations
/// @brief Field DebugBypass, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DebugBypass, put=setStaticF_DebugBypass)) bool  DebugBypass;

 __declspec(property(get=get_Filter, put=set_Filter)) ::UnityW<::UnityEngine::Behaviour>  Filter;

/// @brief Field Frequency, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Frequency, put=__cordl_internal_set_Frequency)) float_t  Frequency;

 __declspec(property(get=get_IsDebugBypassed)) bool  IsDebugBypassed;

/// @brief Field Q, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Q, put=__cordl_internal_set_Q)) float_t  Q;

/// @brief Field _filter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__filter, put=__cordl_internal_set__filter)) ::UnityW<::UnityEngine::AudioHighPassFilter>  _filter;

static inline ::GlobalNamespace::UnityFilterHP* New_ctor() ;

/// @brief Method SetFilter, addr 0x1804a67b0, size 0x30, virtual true, abstract: false, final false
inline void SetFilter(::GlobalNamespace::AudioSourceRefs*  audioSourceRefs) ;

/// @brief Method UpdateValues, addr 0x1804a67e0, size 0x60, virtual true, abstract: false, final false
inline void UpdateValues() ;

constexpr float_t const& __cordl_internal_get_Frequency() const;

constexpr float_t& __cordl_internal_get_Frequency() ;

constexpr float_t const& __cordl_internal_get_Q() const;

constexpr float_t& __cordl_internal_get_Q() ;

constexpr ::UnityW<::UnityEngine::AudioHighPassFilter> const& __cordl_internal_get__filter() const;

constexpr ::UnityW<::UnityEngine::AudioHighPassFilter>& __cordl_internal_get__filter() ;

constexpr void __cordl_internal_set_Frequency(float_t  value) ;

constexpr void __cordl_internal_set_Q(float_t  value) ;

constexpr void __cordl_internal_set__filter(::UnityW<::UnityEngine::AudioHighPassFilter>  value) ;

/// @brief Method .ctor, addr 0x1804a6840, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_DebugBypass() ;

/// @brief Method get_Filter, addr 0x1802d97e0, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Behaviour> get_Filter() ;

/// @brief Method get_IsDebugBypassed, addr 0x1804a6860, size 0x20, virtual true, abstract: false, final false
inline bool get_IsDebugBypassed() ;

static inline void setStaticF_DebugBypass(bool  value) ;

/// @brief Method set_Filter, addr 0x1804a6880, size 0x30, virtual true, abstract: false, final false
inline void set_Filter(::UnityEngine::Behaviour*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityFilterHP() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityFilterHP", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityFilterHP(UnityFilterHP && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityFilterHP", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityFilterHP(UnityFilterHP const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17625};

/// @brief Field _filter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioHighPassFilter>  ____filter;

/// @brief Field Q, offset: 0x28, size: 0x4, def value: None
 float_t  ___Q;

/// @brief Field Frequency, offset: 0x2c, size: 0x4, def value: None
 float_t  ___Frequency;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityFilterHP, ____filter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterHP, ___Q) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterHP, ___Frequency) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityFilterHP) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
