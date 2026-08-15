#pragma once
// IWYU pragma private; include "GlobalNamespace/SleeplessZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SleeplessZone)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerZone;
}
// Forward declare root types
namespace GlobalNamespace {
class SleeplessZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SleeplessZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SleeplessZone*, "", "SleeplessZone");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SleeplessZone
class CORDL_TYPE SleeplessZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field playerZone, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerZone, put=__cordl_internal_set_playerZone)) ::UnityW<::GlobalNamespace::PlayerZone>  playerZone;

static inline ::GlobalNamespace::SleeplessZone* New_ctor() ;

/// @brief Method OnDisable, addr 0x18039cde0, size 0x250, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18039d030, size 0x240, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnter, addr 0x18039d270, size 0x40, virtual false, abstract: false, final false
inline void OnEnter(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method OnExit, addr 0x18039d2b0, size 0x60, virtual false, abstract: false, final false
inline void OnExit(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& __cordl_internal_get_playerZone() const;

constexpr ::UnityW<::GlobalNamespace::PlayerZone>& __cordl_internal_get_playerZone() ;

constexpr void __cordl_internal_set_playerZone(::UnityW<::GlobalNamespace::PlayerZone>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SleeplessZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SleeplessZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SleeplessZone(SleeplessZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SleeplessZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SleeplessZone(SleeplessZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5630};

/// @brief Field playerZone, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerZone>  ___playerZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SleeplessZone, ___playerZone) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SleeplessZone) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
