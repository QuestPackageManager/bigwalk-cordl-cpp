#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerVegetation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerVegetation)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace TheVisualEngine {
class TVEElement;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerVegetation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerVegetation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerVegetation*, "", "PlayerVegetation");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerVegetation
class CORDL_TYPE PlayerVegetation : public ::System::Object {
public:
// Declarations
/// @brief Field logVerbose, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field maxCutoff, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxCutoff, put=__cordl_internal_set_maxCutoff)) float_t  maxCutoff;

/// @brief Field maxFadeValue, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxFadeValue, put=__cordl_internal_set_maxFadeValue)) float_t  maxFadeValue;

/// @brief Field minCutoff, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minCutoff, put=__cordl_internal_set_minCutoff)) float_t  minCutoff;

/// @brief Field playerCharacter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field tveElement, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tveElement, put=__cordl_internal_set_tveElement)) ::UnityW<::TheVisualEngine::TVEElement>  tveElement;

/// @brief Method Initialize, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerVegetation* New_ctor() ;

/// @brief Method Update, addr 0x180378b00, size 0x130, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr float_t const& __cordl_internal_get_maxCutoff() const;

constexpr float_t& __cordl_internal_get_maxCutoff() ;

constexpr float_t const& __cordl_internal_get_maxFadeValue() const;

constexpr float_t& __cordl_internal_get_maxFadeValue() ;

constexpr float_t const& __cordl_internal_get_minCutoff() const;

constexpr float_t& __cordl_internal_get_minCutoff() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr ::UnityW<::TheVisualEngine::TVEElement> const& __cordl_internal_get_tveElement() const;

constexpr ::UnityW<::TheVisualEngine::TVEElement>& __cordl_internal_get_tveElement() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_maxCutoff(float_t  value) ;

constexpr void __cordl_internal_set_maxFadeValue(float_t  value) ;

constexpr void __cordl_internal_set_minCutoff(float_t  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_tveElement(::UnityW<::TheVisualEngine::TVEElement>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerVegetation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerVegetation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerVegetation(PlayerVegetation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerVegetation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerVegetation(PlayerVegetation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5491};

/// @brief Field tveElement, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TheVisualEngine::TVEElement>  ___tveElement;

/// @brief Field maxCutoff, offset: 0x18, size: 0x4, def value: None
 float_t  ___maxCutoff;

/// @brief Field minCutoff, offset: 0x1c, size: 0x4, def value: None
 float_t  ___minCutoff;

/// @brief Field maxFadeValue, offset: 0x20, size: 0x4, def value: None
 float_t  ___maxFadeValue;

/// @brief Field logVerbose, offset: 0x24, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field playerCharacter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerVegetation, ___tveElement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVegetation, ___maxCutoff) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVegetation, ___minCutoff) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVegetation, ___maxFadeValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVegetation, ___logVerbose) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVegetation, ___playerCharacter) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerVegetation) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
