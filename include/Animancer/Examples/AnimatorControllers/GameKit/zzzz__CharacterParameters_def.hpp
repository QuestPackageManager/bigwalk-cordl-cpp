#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/CharacterParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CharacterParameters)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Animancer::Examples::AnimatorControllers::GameKit {
class CharacterParameters;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::AnimatorControllers::GameKit::CharacterParameters*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::GameKit::CharacterParameters*, "Animancer.Examples.AnimatorControllers.GameKit", "CharacterParameters");
// Dependencies System.Object, UnityEngine.Vector3
namespace Animancer::Examples::AnimatorControllers::GameKit {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.GameKit.CharacterParameters
class CORDL_TYPE CharacterParameters : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_DesiredForwardSpeed, put=set_DesiredForwardSpeed)) float_t  DesiredForwardSpeed;

 __declspec(property(get=get_ForwardSpeed, put=set_ForwardSpeed)) float_t  ForwardSpeed;

 __declspec(property(get=get_MovementDirection, put=set_MovementDirection)) ::UnityEngine::Vector3  MovementDirection;

 __declspec(property(get=get_VerticalSpeed, put=set_VerticalSpeed)) float_t  VerticalSpeed;

/// @brief Field <DesiredForwardSpeed>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__DesiredForwardSpeed_k__BackingField, put=__cordl_internal_set__DesiredForwardSpeed_k__BackingField)) float_t  _DesiredForwardSpeed_k__BackingField;

/// @brief Field <ForwardSpeed>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ForwardSpeed_k__BackingField, put=__cordl_internal_set__ForwardSpeed_k__BackingField)) float_t  _ForwardSpeed_k__BackingField;

/// @brief Field _MovementDirection, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get__MovementDirection, put=__cordl_internal_set__MovementDirection)) ::UnityEngine::Vector3  _MovementDirection;

/// @brief Field <VerticalSpeed>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__VerticalSpeed_k__BackingField, put=__cordl_internal_set__VerticalSpeed_k__BackingField)) float_t  _VerticalSpeed_k__BackingField;

static inline ::Animancer::Examples::AnimatorControllers::GameKit::CharacterParameters* New_ctor() ;

constexpr float_t const& __cordl_internal_get__DesiredForwardSpeed_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DesiredForwardSpeed_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ForwardSpeed_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ForwardSpeed_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__MovementDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__MovementDirection() ;

constexpr float_t const& __cordl_internal_get__VerticalSpeed_k__BackingField() const;

constexpr float_t& __cordl_internal_get__VerticalSpeed_k__BackingField() ;

constexpr void __cordl_internal_set__DesiredForwardSpeed_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__ForwardSpeed_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MovementDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__VerticalSpeed_k__BackingField(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DesiredForwardSpeed, addr 0x1802f42b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_DesiredForwardSpeed() ;

/// @brief Method get_ForwardSpeed, addr 0x1802f80a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ForwardSpeed() ;

/// @brief Method get_MovementDirection, addr 0x1802f80b0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_MovementDirection() ;

/// @brief Method get_VerticalSpeed, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_VerticalSpeed() ;

/// @brief Method set_DesiredForwardSpeed, addr 0x1802f43c0, size 0x10, virtual false, abstract: false, final false
inline void set_DesiredForwardSpeed(float_t  value) ;

/// @brief Method set_ForwardSpeed, addr 0x1802f80f0, size 0x10, virtual false, abstract: false, final false
inline void set_ForwardSpeed(float_t  value) ;

/// @brief Method set_MovementDirection, addr 0x1802f8100, size 0xc0, virtual false, abstract: false, final false
inline void set_MovementDirection(::UnityEngine::Vector3  value) ;

/// @brief Method set_VerticalSpeed, addr 0x1802f81c0, size 0x10, virtual false, abstract: false, final false
inline void set_VerticalSpeed(float_t  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19968};

/// @brief Field _MovementDirection, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____MovementDirection;

/// @brief Field <ForwardSpeed>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 float_t  ____ForwardSpeed_k__BackingField;

/// @brief Field <DesiredForwardSpeed>k__BackingField, offset: 0x20, size: 0x4, def value: None
 float_t  ____DesiredForwardSpeed_k__BackingField;

/// @brief Field <VerticalSpeed>k__BackingField, offset: 0x24, size: 0x4, def value: None
 float_t  ____VerticalSpeed_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterParameters, ____MovementDirection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterParameters, ____ForwardSpeed_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterParameters, ____DesiredForwardSpeed_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterParameters, ____VerticalSpeed_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterParameters) == 0x28, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers::GameKit
