#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerDreamer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerDreamer)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace HouseHouse::Dream {
class DreamController;
}
namespace HouseHouse::Dream {
class Dream;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerDreamer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerDreamer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerDreamer*, "", "PlayerDreamer");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerDreamer
class CORDL_TYPE PlayerDreamer : public ::System::Object {
public:
// Declarations
/// @brief Field _currentDream, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentDream, put=__cordl_internal_set__currentDream)) ::UnityW<::HouseHouse::Dream::Dream>  _currentDream;

/// @brief Field _playerCharacter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerCharacter, put=__cordl_internal_set__playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  _playerCharacter;

 __declspec(property(get=get_currentDream, put=set_currentDream)) ::UnityW<::HouseHouse::Dream::Dream>  currentDream;

 __declspec(property(get=get_isDreaming)) bool  isDreaming;

/// @brief Field smoothDreamness, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothDreamness, put=__cordl_internal_set_smoothDreamness)) float_t  smoothDreamness;

/// @brief Field velocity, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) float_t  velocity;

/// @brief Method Initialize, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerDreamer* New_ctor() ;

/// @brief Method ServerStartDream, addr 0x180467030, size 0x30, virtual false, abstract: false, final false
inline void ServerStartDream(::HouseHouse::Dream::DreamController*  dreamController) ;

/// @brief Method ServerStopDream, addr 0x180467060, size 0x60, virtual false, abstract: false, final false
inline void ServerStopDream(::HouseHouse::Dream::DreamController*  dreamController) ;

/// @brief Method Update, addr 0x1804670c0, size 0x1c0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::HouseHouse::Dream::Dream> const& __cordl_internal_get__currentDream() const;

constexpr ::UnityW<::HouseHouse::Dream::Dream>& __cordl_internal_get__currentDream() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get__playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get__playerCharacter() ;

constexpr float_t const& __cordl_internal_get_smoothDreamness() const;

constexpr float_t& __cordl_internal_get_smoothDreamness() ;

constexpr float_t const& __cordl_internal_get_velocity() const;

constexpr float_t& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set__currentDream(::UnityW<::HouseHouse::Dream::Dream>  value) ;

constexpr void __cordl_internal_set__playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_smoothDreamness(float_t  value) ;

constexpr void __cordl_internal_set_velocity(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_currentDream, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::HouseHouse::Dream::Dream> get_currentDream() ;

/// @brief Method get_isDreaming, addr 0x18035be30, size 0x10, virtual false, abstract: false, final false
inline bool get_isDreaming() ;

/// @brief Method set_currentDream, addr 0x180467280, size 0x170, virtual false, abstract: false, final false
inline void set_currentDream(::HouseHouse::Dream::Dream*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerDreamer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerDreamer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerDreamer(PlayerDreamer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerDreamer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerDreamer(PlayerDreamer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5449};

/// @brief Field _playerCharacter, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ____playerCharacter;

/// @brief Field _currentDream, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::HouseHouse::Dream::Dream>  ____currentDream;

/// @brief Field smoothDreamness, offset: 0x20, size: 0x4, def value: None
 float_t  ___smoothDreamness;

/// @brief Field velocity, offset: 0x24, size: 0x4, def value: None
 float_t  ___velocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerDreamer, ____playerCharacter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDreamer, ____currentDream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDreamer, ___smoothDreamness) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDreamer, ___velocity) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerDreamer) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
