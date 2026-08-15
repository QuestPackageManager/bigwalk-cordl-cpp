#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/CharacterParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(CharacterParameters)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Animancer::Examples::StateMachines {
class CharacterParameters;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::StateMachines::CharacterParameters*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::StateMachines::CharacterParameters*, "Animancer.Examples.StateMachines", "CharacterParameters");
// Dependencies System.Object, UnityEngine.Vector3
namespace Animancer::Examples::StateMachines {
// Is value type: false
// CS Name: Animancer.Examples.StateMachines.CharacterParameters
class CORDL_TYPE CharacterParameters : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_MovementDirection, put=set_MovementDirection)) ::UnityEngine::Vector3  MovementDirection;

 __declspec(property(get=get_WantsToRun)) bool  WantsToRun;

/// @brief Field _MovementDirection, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get__MovementDirection, put=__cordl_internal_set__MovementDirection)) ::UnityEngine::Vector3  _MovementDirection;

/// @brief Field _WantsToRun, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__WantsToRun, put=__cordl_internal_set__WantsToRun)) bool  _WantsToRun;

static inline ::Animancer::Examples::StateMachines::CharacterParameters* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__MovementDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__MovementDirection() ;

constexpr bool const& __cordl_internal_get__WantsToRun() const;

constexpr bool& __cordl_internal_get__WantsToRun() ;

constexpr void __cordl_internal_set__MovementDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__WantsToRun(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MovementDirection, addr 0x1802f80b0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_MovementDirection() ;

/// @brief Method get_WantsToRun, addr 0x1802f80e0, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<bool> get_WantsToRun() ;

/// @brief Method set_MovementDirection, addr 0x1802f8100, size 0xc0, virtual false, abstract: false, final false
inline void set_MovementDirection(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CharacterParameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CharacterParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CharacterParameters(CharacterParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharacterParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharacterParameters(CharacterParameters const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20000};

/// @brief Field _MovementDirection, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____MovementDirection;

/// @brief Field _WantsToRun, offset: 0x1c, size: 0x1, def value: None
 bool  ____WantsToRun;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::StateMachines::CharacterParameters, ____MovementDirection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::StateMachines::CharacterParameters, ____WantsToRun) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::StateMachines::CharacterParameters) == 0x20, "Size mismatch!");

} // namespace end def Animancer::Examples::StateMachines
