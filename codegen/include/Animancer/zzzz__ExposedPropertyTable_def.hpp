#pragma once
// IWYU pragma private; include "Animancer/ExposedPropertyTable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ExposedPropertyTable)
namespace Animancer {
class AnimancerComponent;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
// Forward declare root types
namespace Animancer {
class ExposedPropertyTable;
}
// Write type traits
MARK_REF_T(::Animancer::ExposedPropertyTable*);
DEFINE_IL2CPP_CLASS(::Animancer::ExposedPropertyTable*, "Animancer", "ExposedPropertyTable");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ExposedPropertyTable
class CORDL_TYPE ExposedPropertyTable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _Director, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Director, put=__cordl_internal_set__Director)) ::UnityW<::UnityEngine::Playables::PlayableDirector>  _Director;

/// @brief Method Awake, addr 0x18030c7d0, size 0x50, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::ExposedPropertyTable* New_ctor() ;

/// @brief Method OnValidate, addr 0x18030c820, size 0x50, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Reset, addr 0x18030c870, size 0x90, virtual true, abstract: false, final false
inline void Reset() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get__Director() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get__Director() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__Director(::UnityW<::UnityEngine::Playables::PlayableDirector>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExposedPropertyTable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExposedPropertyTable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExposedPropertyTable(ExposedPropertyTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExposedPropertyTable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExposedPropertyTable(ExposedPropertyTable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18193};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _Director, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableDirector>  ____Director;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::ExposedPropertyTable, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::ExposedPropertyTable, ____Director) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Animancer::ExposedPropertyTable) == 0x30, "Size mismatch!");

} // namespace end def Animancer
