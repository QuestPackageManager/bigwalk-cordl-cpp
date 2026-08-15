#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerPlatformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlayerPlatformer)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class StickyPlatform;
}
namespace GlobalNamespace {
class StickyPlatformer;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerPlatformer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerPlatformer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerPlatformer*, "", "PlayerPlatformer");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerPlatformer
class CORDL_TYPE PlayerPlatformer : public ::System::Object {
public:
// Declarations
/// @brief Field _groundCollider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__groundCollider, put=__cordl_internal_set__groundCollider)) ::UnityW<::UnityEngine::Collider>  _groundCollider;

/// @brief Field logVerbose, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playerCharacter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field stickyPlatform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_stickyPlatform, put=__cordl_internal_set_stickyPlatform)) ::UnityW<::GlobalNamespace::StickyPlatform>  stickyPlatform;

/// @brief Field stickyPlatformer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_stickyPlatformer, put=__cordl_internal_set_stickyPlatformer)) ::GlobalNamespace::StickyPlatformer*  stickyPlatformer;

/// @brief Method CheckColliderForPlatforms, addr 0x180359800, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::StickyPlatform> CheckColliderForPlatforms(::UnityEngine::Collider*  collider) ;

/// @brief Method Initialize, addr 0x1803598f0, size 0x60, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerPlatformer* New_ctor() ;

/// @brief Method SetGroundCollider, addr 0x180359950, size 0x140, virtual false, abstract: false, final false
inline void SetGroundCollider(::UnityEngine::Collider*  newGroundCollider) ;

/// @brief Method SetPlatform, addr 0x180359a90, size 0x170, virtual false, abstract: false, final false
inline void SetPlatform(::GlobalNamespace::StickyPlatform*  newPlatform) ;

/// @brief Method Update, addr 0x180359c00, size 0x70, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__groundCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__groundCollider() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr ::UnityW<::GlobalNamespace::StickyPlatform> const& __cordl_internal_get_stickyPlatform() const;

constexpr ::UnityW<::GlobalNamespace::StickyPlatform>& __cordl_internal_get_stickyPlatform() ;

constexpr ::GlobalNamespace::StickyPlatformer* const& __cordl_internal_get_stickyPlatformer() const;

constexpr ::GlobalNamespace::StickyPlatformer*& __cordl_internal_get_stickyPlatformer() ;

constexpr void __cordl_internal_set__groundCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_stickyPlatform(::UnityW<::GlobalNamespace::StickyPlatform>  value) ;

constexpr void __cordl_internal_set_stickyPlatformer(::GlobalNamespace::StickyPlatformer*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerPlatformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerPlatformer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerPlatformer(PlayerPlatformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerPlatformer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerPlatformer(PlayerPlatformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5475};

/// @brief Field stickyPlatformer, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::StickyPlatformer*  ___stickyPlatformer;

/// @brief Field logVerbose, offset: 0x18, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field playerCharacter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field stickyPlatform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::StickyPlatform>  ___stickyPlatform;

/// @brief Field _groundCollider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____groundCollider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerPlatformer, ___stickyPlatformer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPlatformer, ___logVerbose) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPlatformer, ___playerCharacter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPlatformer, ___stickyPlatform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPlatformer, ____groundCollider) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerPlatformer) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
