#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityFilterDistortion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__UnityFilterBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UnityFilterDistortion)
namespace GlobalNamespace {
class AudioSourceRefs;
}
namespace UnityEngine {
class AudioDistortionFilter;
}
namespace UnityEngine {
class Behaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityFilterDistortion;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnityFilterDistortion*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityFilterDistortion*, "", "UnityFilterDistortion");
// Dependencies UnityFilterBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityFilterDistortion
class CORDL_TYPE UnityFilterDistortion : public ::GlobalNamespace::UnityFilterBase {
public:
// Declarations
/// @brief Field DebugBypass, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DebugBypass, put=setStaticF_DebugBypass)) bool  DebugBypass;

 __declspec(property(get=get_Filter, put=set_Filter)) ::UnityW<::UnityEngine::Behaviour>  Filter;

 __declspec(property(get=get_IsDebugBypassed)) bool  IsDebugBypassed;

/// @brief Field Level, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Level, put=__cordl_internal_set_Level)) float_t  Level;

/// @brief Field _filter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__filter, put=__cordl_internal_set__filter)) ::UnityW<::UnityEngine::AudioDistortionFilter>  _filter;

static inline ::GlobalNamespace::UnityFilterDistortion* New_ctor() ;

/// @brief Method SetFilter, addr 0x1804a6590, size 0x30, virtual true, abstract: false, final false
inline void SetFilter(::GlobalNamespace::AudioSourceRefs*  audioSourceRefs) ;

/// @brief Method UpdateValues, addr 0x1804a65c0, size 0x50, virtual true, abstract: false, final false
inline void UpdateValues() ;

constexpr float_t const& __cordl_internal_get_Level() const;

constexpr float_t& __cordl_internal_get_Level() ;

constexpr ::UnityW<::UnityEngine::AudioDistortionFilter> const& __cordl_internal_get__filter() const;

constexpr ::UnityW<::UnityEngine::AudioDistortionFilter>& __cordl_internal_get__filter() ;

constexpr void __cordl_internal_set_Level(float_t  value) ;

constexpr void __cordl_internal_set__filter(::UnityW<::UnityEngine::AudioDistortionFilter>  value) ;

/// @brief Method .ctor, addr 0x1804a6610, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_DebugBypass() ;

/// @brief Method get_Filter, addr 0x1802d97e0, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Behaviour> get_Filter() ;

/// @brief Method get_IsDebugBypassed, addr 0x1804a6620, size 0x20, virtual true, abstract: false, final false
inline bool get_IsDebugBypassed() ;

static inline void setStaticF_DebugBypass(bool  value) ;

/// @brief Method set_Filter, addr 0x1804a6640, size 0x30, virtual true, abstract: false, final false
inline void set_Filter(::UnityEngine::Behaviour*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityFilterDistortion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityFilterDistortion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityFilterDistortion(UnityFilterDistortion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityFilterDistortion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityFilterDistortion(UnityFilterDistortion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17623};

/// @brief Field _filter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioDistortionFilter>  ____filter;

/// @brief Field Level, offset: 0x28, size: 0x4, def value: None
 float_t  ___Level;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityFilterDistortion, ____filter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityFilterDistortion, ___Level) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityFilterDistortion) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
