#pragma once
// IWYU pragma private; include "GlobalNamespace/SpeechlessZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpeechlessZone)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerZone;
}
// Forward declare root types
namespace GlobalNamespace {
class SpeechlessZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpeechlessZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpeechlessZone*, "", "SpeechlessZone");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpeechlessZone
class CORDL_TYPE SpeechlessZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field innerRadius, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_innerRadius, put=__cordl_internal_set_innerRadius)) float_t  innerRadius;

/// @brief Field noVisualZone, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_noVisualZone, put=__cordl_internal_set_noVisualZone)) ::UnityW<::GlobalNamespace::PlayerZone>  noVisualZone;

/// @brief Field outerRadius, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_outerRadius, put=__cordl_internal_set_outerRadius)) float_t  outerRadius;

/// @brief Field playerZone, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerZone, put=__cordl_internal_set_playerZone)) ::UnityW<::GlobalNamespace::PlayerZone>  playerZone;

/// @brief Method GetModulation01, addr 0x18039d860, size 0xb0, virtual false, abstract: false, final false
inline float_t GetModulation01() ;

static inline ::GlobalNamespace::SpeechlessZone* New_ctor() ;

/// @brief Method OnDisable, addr 0x18039d910, size 0x460, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x18039dd70, size 0xa0, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x18039de10, size 0x430, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnter, addr 0x18039e270, size 0x30, virtual false, abstract: false, final false
inline void OnEnter(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method OnEnterNoVisualZone, addr 0x18039e240, size 0x30, virtual false, abstract: false, final false
inline void OnEnterNoVisualZone(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method OnExit, addr 0x18039e2d0, size 0x60, virtual false, abstract: false, final false
inline void OnExit(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method OnExitNoVisualZone, addr 0x18039e2a0, size 0x30, virtual false, abstract: false, final false
inline void OnExitNoVisualZone(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

constexpr float_t const& __cordl_internal_get_innerRadius() const;

constexpr float_t& __cordl_internal_get_innerRadius() ;

constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& __cordl_internal_get_noVisualZone() const;

constexpr ::UnityW<::GlobalNamespace::PlayerZone>& __cordl_internal_get_noVisualZone() ;

constexpr float_t const& __cordl_internal_get_outerRadius() const;

constexpr float_t& __cordl_internal_get_outerRadius() ;

constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& __cordl_internal_get_playerZone() const;

constexpr ::UnityW<::GlobalNamespace::PlayerZone>& __cordl_internal_get_playerZone() ;

constexpr void __cordl_internal_set_innerRadius(float_t  value) ;

constexpr void __cordl_internal_set_noVisualZone(::UnityW<::GlobalNamespace::PlayerZone>  value) ;

constexpr void __cordl_internal_set_outerRadius(float_t  value) ;

constexpr void __cordl_internal_set_playerZone(::UnityW<::GlobalNamespace::PlayerZone>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpeechlessZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpeechlessZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpeechlessZone(SpeechlessZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpeechlessZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpeechlessZone(SpeechlessZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5632};

/// @brief Field outerRadius, offset: 0x20, size: 0x4, def value: None
 float_t  ___outerRadius;

/// @brief Field innerRadius, offset: 0x24, size: 0x4, def value: None
 float_t  ___innerRadius;

/// @brief Field playerZone, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerZone>  ___playerZone;

/// @brief Field noVisualZone, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerZone>  ___noVisualZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpeechlessZone, ___outerRadius) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessZone, ___innerRadius) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessZone, ___playerZone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessZone, ___noVisualZone) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpeechlessZone) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
