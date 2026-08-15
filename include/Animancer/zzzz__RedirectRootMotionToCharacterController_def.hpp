#pragma once
// IWYU pragma private; include "Animancer/RedirectRootMotionToCharacterController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__RedirectRootMotion_1_def.hpp"
CORDL_MODULE_EXPORT(RedirectRootMotionToCharacterController)
namespace UnityEngine {
class CharacterController;
}
// Forward declare root types
namespace Animancer {
class RedirectRootMotionToCharacterController;
}
// Write type traits
MARK_REF_T(::Animancer::RedirectRootMotionToCharacterController*);
DEFINE_IL2CPP_CLASS(::Animancer::RedirectRootMotionToCharacterController*, "Animancer", "RedirectRootMotionToCharacterController");
// Dependencies Animancer.RedirectRootMotion`1<T>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.RedirectRootMotionToCharacterController
class CORDL_TYPE RedirectRootMotionToCharacterController : public ::Animancer::RedirectRootMotion_1<::UnityW<::UnityEngine::CharacterController>> {
public:
// Declarations
static inline ::Animancer::RedirectRootMotionToCharacterController* New_ctor() ;

/// @brief Method OnAnimatorMove, addr 0x180313dc0, size 0x280, virtual true, abstract: false, final false
inline void OnAnimatorMove() ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RedirectRootMotionToCharacterController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RedirectRootMotionToCharacterController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RedirectRootMotionToCharacterController(RedirectRootMotionToCharacterController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RedirectRootMotionToCharacterController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RedirectRootMotionToCharacterController(RedirectRootMotionToCharacterController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18195};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::RedirectRootMotionToCharacterController) == 0x30, "Size mismatch!");

} // namespace end def Animancer
