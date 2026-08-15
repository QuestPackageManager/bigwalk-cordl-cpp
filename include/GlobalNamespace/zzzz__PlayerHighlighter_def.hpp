#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerHighlighter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlayerHighlighter)
namespace GlobalNamespace {
class CastableTarget;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class Prop;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerHighlighter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerHighlighter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerHighlighter*, "", "PlayerHighlighter");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerHighlighter
class CORDL_TYPE PlayerHighlighter : public ::System::Object {
public:
// Declarations
/// @brief Field hideRing, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_hideRing, put=__cordl_internal_set_hideRing)) bool  hideRing;

/// @brief Field inWorldCrosshair, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_inWorldCrosshair, put=__cordl_internal_set_inWorldCrosshair)) ::UnityW<::UnityEngine::Transform>  inWorldCrosshair;

/// @brief Field logVerbose, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Method ClearWorldCrosshair, addr 0x18034fdd0, size 0x50, virtual false, abstract: false, final false
inline void ClearWorldCrosshair() ;

/// @brief Method LateUpdate, addr 0x18034fe20, size 0xb0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::PlayerHighlighter* New_ctor() ;

/// @brief Method SetWorldCrosshair, addr 0x180350040, size 0x40, virtual false, abstract: false, final false
inline void SetWorldCrosshair(::GlobalNamespace::CastableTarget*  newTarget) ;

/// @brief Method SetWorldCrosshair, addr 0x18034ff70, size 0x40, virtual false, abstract: false, final false
inline void SetWorldCrosshair(::GlobalNamespace::PeckSwitch*  newTarget) ;

/// @brief Method SetWorldCrosshair, addr 0x18034ffb0, size 0x40, virtual false, abstract: false, final false
inline void SetWorldCrosshair(::GlobalNamespace::Prop*  newTarget) ;

/// @brief Method SetWorldCrosshair, addr 0x18034fff0, size 0x50, virtual false, abstract: false, final false
inline void SetWorldCrosshair(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method SetWorldCrosshair, addr 0x18034fed0, size 0xa0, virtual false, abstract: false, final false
inline void SetWorldCrosshair(::UnityEngine::Transform*  transform) ;

constexpr bool const& __cordl_internal_get_hideRing() const;

constexpr bool& __cordl_internal_get_hideRing() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_inWorldCrosshair() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_inWorldCrosshair() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_hideRing(bool  value) ;

constexpr void __cordl_internal_set_inWorldCrosshair(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerHighlighter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerHighlighter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerHighlighter(PlayerHighlighter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerHighlighter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerHighlighter(PlayerHighlighter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5463};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field inWorldCrosshair, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___inWorldCrosshair;

/// @brief Field hideRing, offset: 0x20, size: 0x1, def value: None
 bool  ___hideRing;

/// @brief Field logVerbose, offset: 0x21, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerHighlighter, ___target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHighlighter, ___inWorldCrosshair) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHighlighter, ___hideRing) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHighlighter, ___logVerbose) == 0x21, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerHighlighter) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
