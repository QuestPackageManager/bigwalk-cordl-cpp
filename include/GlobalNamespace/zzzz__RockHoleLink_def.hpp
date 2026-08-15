#pragma once
// IWYU pragma private; include "GlobalNamespace/RockHoleLink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(RockHoleLink)
namespace GlobalNamespace {
class RockHole;
}
// Forward declare root types
namespace GlobalNamespace {
class RockHoleLink;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RockHoleLink*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RockHoleLink*, "", "RockHoleLink");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Renderer
namespace GlobalNamespace {
// Is value type: false
// CS Name: RockHoleLink
class CORDL_TYPE RockHoleLink : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field renderers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  renderers;

/// @brief Field rockHole, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rockHole, put=__cordl_internal_set_rockHole)) ::UnityW<::GlobalNamespace::RockHole>  rockHole;

/// @brief Method Awake, addr 0x180414330, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::RockHoleLink* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x180414340, size 0x20, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnValidate, addr 0x180414330, size 0x10, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Refresh, addr 0x180414360, size 0x120, virtual false, abstract: false, final false
inline void Refresh() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_renderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_renderers() ;

constexpr ::UnityW<::GlobalNamespace::RockHole> const& __cordl_internal_get_rockHole() const;

constexpr ::UnityW<::GlobalNamespace::RockHole>& __cordl_internal_get_rockHole() ;

constexpr void __cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_rockHole(::UnityW<::GlobalNamespace::RockHole>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RockHoleLink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RockHoleLink", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RockHoleLink(RockHoleLink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RockHoleLink", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RockHoleLink(RockHoleLink const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5118};

/// @brief Field rockHole, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RockHole>  ___rockHole;

/// @brief Field renderers, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___renderers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RockHoleLink, ___rockHole) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RockHoleLink, ___renderers) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RockHoleLink) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
