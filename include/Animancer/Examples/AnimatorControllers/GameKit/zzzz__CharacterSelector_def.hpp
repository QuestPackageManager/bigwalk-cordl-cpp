#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/CharacterSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CharacterSelector)
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Animancer::Examples::AnimatorControllers::GameKit {
class CharacterSelector;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector*, "Animancer.Examples.AnimatorControllers.GameKit", "CharacterSelector");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace Animancer::Examples::AnimatorControllers::GameKit {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.GameKit.CharacterSelector
class CORDL_TYPE CharacterSelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Characters, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Characters, put=__cordl_internal_set__Characters)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _Characters;

/// @brief Field _Text, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Text, put=__cordl_internal_set__Text)) ::UnityW<::UnityEngine::UI::Text>  _Text;

/// @brief Method Awake, addr 0x1802f81d0, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector* New_ctor() ;

/// @brief Method SelectCharacter, addr 0x1802f81e0, size 0x180, virtual false, abstract: false, final false
inline void SelectCharacter(int32_t  index) ;

/// @brief Method Update, addr 0x1802f8360, size 0x60, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__Characters() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__Characters() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__Text() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__Text() ;

constexpr void __cordl_internal_set__Characters(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set__Text(::UnityW<::UnityEngine::UI::Text>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CharacterSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CharacterSelector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CharacterSelector(CharacterSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharacterSelector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharacterSelector(CharacterSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19969};

/// @brief Field _Text, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____Text;

/// @brief Field _Characters, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____Characters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector, ____Text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector, ____Characters) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterSelector) == 0x30, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers::GameKit
