#pragma once
// IWYU pragma private; include "GlobalNamespace/MedalZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HouseHouse/Medal/zzzz__MedalType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MedalZone)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerZone;
}
// Forward declare root types
namespace GlobalNamespace {
class MedalZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MedalZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MedalZone*, "", "MedalZone");
// Dependencies HouseHouse.Medal.MedalType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MedalZone
class CORDL_TYPE MedalZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field medalType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_medalType, put=__cordl_internal_set_medalType)) ::HouseHouse::Medal::MedalType  medalType;

/// @brief Field playerZone, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerZone, put=__cordl_internal_set_playerZone)) ::UnityW<::GlobalNamespace::PlayerZone>  playerZone;

static inline ::GlobalNamespace::MedalZone* New_ctor() ;

/// @brief Method OnDisable, addr 0x180395010, size 0x200, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180395210, size 0x230, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnter, addr 0x180395440, size 0x40, virtual false, abstract: false, final false
inline void OnEnter(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method OnExit, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnExit(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

constexpr ::HouseHouse::Medal::MedalType const& __cordl_internal_get_medalType() const;

constexpr ::HouseHouse::Medal::MedalType& __cordl_internal_get_medalType() ;

constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& __cordl_internal_get_playerZone() const;

constexpr ::UnityW<::GlobalNamespace::PlayerZone>& __cordl_internal_get_playerZone() ;

constexpr void __cordl_internal_set_medalType(::HouseHouse::Medal::MedalType  value) ;

constexpr void __cordl_internal_set_playerZone(::UnityW<::GlobalNamespace::PlayerZone>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MedalZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MedalZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MedalZone(MedalZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MedalZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MedalZone(MedalZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5623};

/// @brief Field playerZone, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerZone>  ___playerZone;

/// @brief Field medalType, offset: 0x28, size: 0x4, def value: None
 ::HouseHouse::Medal::MedalType  ___medalType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MedalZone, ___playerZone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MedalZone, ___medalType) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MedalZone) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
