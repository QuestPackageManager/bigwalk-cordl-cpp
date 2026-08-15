#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlayerModule)
namespace GlobalNamespace {
class PlayerCharacter;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerModule;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerModule*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerModule*, "", "PlayerModule");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerModule
class CORDL_TYPE PlayerModule : public ::System::Object {
public:
// Declarations
/// @brief Field logVerbose, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playerCharacter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Method Initialize, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerModule* New_ctor() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerModule(PlayerModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerModule(PlayerModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5505};

/// @brief Field logVerbose, offset: 0x10, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field playerCharacter, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerModule, ___logVerbose) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerModule, ___playerCharacter) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerModule) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
