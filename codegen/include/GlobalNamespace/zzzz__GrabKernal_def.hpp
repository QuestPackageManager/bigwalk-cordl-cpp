#pragma once
// IWYU pragma private; include "GlobalNamespace/GrabKernal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GrabKernal)
namespace GlobalNamespace {
class PlayerCharacter;
}
// Forward declare root types
namespace GlobalNamespace {
class GrabKernal;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GrabKernal*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GrabKernal*, "", "GrabKernal");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GrabKernal
class CORDL_TYPE GrabKernal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field playerCharacter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

static inline ::GlobalNamespace::GrabKernal* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabKernal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabKernal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabKernal(GrabKernal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabKernal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabKernal(GrabKernal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4943};

/// @brief Field playerCharacter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GrabKernal, ___playerCharacter) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GrabKernal) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
