#pragma once
// IWYU pragma private; include "GlobalNamespace/TeachingZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TeachingZone)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerZone;
}
// Forward declare root types
namespace GlobalNamespace {
class TeachingZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TeachingZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TeachingZone*, "", "TeachingZone");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TeachingZone
class CORDL_TYPE TeachingZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field playerZone, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerZone, put=__cordl_internal_set_playerZone)) ::UnityW<::GlobalNamespace::PlayerZone>  playerZone;

/// @brief Method Awake, addr 0x18039f230, size 0x1a0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::TeachingZone* New_ctor() ;

/// @brief Method OnEnter, addr 0x18039f3d0, size 0x30, virtual false, abstract: false, final false
inline void OnEnter(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method OnExit, addr 0x18039f400, size 0x30, virtual false, abstract: false, final false
inline void OnExit(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& __cordl_internal_get_playerZone() const;

constexpr ::UnityW<::GlobalNamespace::PlayerZone>& __cordl_internal_get_playerZone() ;

constexpr void __cordl_internal_set_playerZone(::UnityW<::GlobalNamespace::PlayerZone>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeachingZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeachingZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TeachingZone(TeachingZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeachingZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeachingZone(TeachingZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5633};

/// @brief Field playerZone, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerZone>  ___playerZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TeachingZone, ___playerZone) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TeachingZone) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
