#pragma once
// IWYU pragma private; include "GlobalNamespace/RemoteSnapAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RemoteSnapAnchor)
namespace GlobalNamespace {
class RemoteSnapGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class RemoteSnapAnchor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RemoteSnapAnchor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RemoteSnapAnchor*, "", "RemoteSnapAnchor");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RemoteSnapAnchor
class CORDL_TYPE RemoteSnapAnchor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field snapGroup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapGroup, put=__cordl_internal_set_snapGroup)) ::UnityW<::GlobalNamespace::RemoteSnapGroup>  snapGroup;

static inline ::GlobalNamespace::RemoteSnapAnchor* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::RemoteSnapGroup> const& __cordl_internal_get_snapGroup() const;

constexpr ::UnityW<::GlobalNamespace::RemoteSnapGroup>& __cordl_internal_get_snapGroup() ;

constexpr void __cordl_internal_set_snapGroup(::UnityW<::GlobalNamespace::RemoteSnapGroup>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteSnapAnchor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteSnapAnchor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteSnapAnchor(RemoteSnapAnchor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteSnapAnchor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteSnapAnchor(RemoteSnapAnchor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4928};

/// @brief Field snapGroup, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RemoteSnapGroup>  ___snapGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RemoteSnapAnchor, ___snapGroup) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RemoteSnapAnchor) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
