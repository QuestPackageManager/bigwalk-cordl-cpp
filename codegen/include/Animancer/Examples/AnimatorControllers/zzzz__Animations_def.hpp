#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/Animations.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Animations)
// Forward declare root types
namespace Animancer::Examples::AnimatorControllers {
class Animations;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::AnimatorControllers::Animations*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::Animations*, "Animancer.Examples.AnimatorControllers", "Animations");
// Dependencies System.Object
namespace Animancer::Examples::AnimatorControllers {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.Animations
class CORDL_TYPE Animations : public ::System::Object {
public:
// Declarations
/// @brief Field IsMoving, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_IsMoving, put=setStaticF_IsMoving)) int32_t  IsMoving;

/// @brief Field MoveBlend, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MoveBlend, put=setStaticF_MoveBlend)) int32_t  MoveBlend;

static inline int32_t getStaticF_IsMoving() ;

static inline int32_t getStaticF_MoveBlend() ;

static inline void setStaticF_IsMoving(int32_t  value) ;

static inline void setStaticF_MoveBlend(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Animations() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Animations", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Animations(Animations && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Animations", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Animations(Animations const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19963};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Examples::AnimatorControllers::Animations) == 0x10, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers
