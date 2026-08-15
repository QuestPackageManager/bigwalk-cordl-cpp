#pragma once
// IWYU pragma private; include "Animancer/RedirectRootMotionToRigidbody.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__RedirectRootMotion_1_def.hpp"
CORDL_MODULE_EXPORT(RedirectRootMotionToRigidbody)
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace Animancer {
class RedirectRootMotionToRigidbody;
}
// Write type traits
MARK_REF_T(::Animancer::RedirectRootMotionToRigidbody*);
DEFINE_IL2CPP_CLASS(::Animancer::RedirectRootMotionToRigidbody*, "Animancer", "RedirectRootMotionToRigidbody");
// Dependencies Animancer.RedirectRootMotion`1<T>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.RedirectRootMotionToRigidbody
class CORDL_TYPE RedirectRootMotionToRigidbody : public ::Animancer::RedirectRootMotion_1<::UnityW<::UnityEngine::Rigidbody>> {
public:
// Declarations
static inline ::Animancer::RedirectRootMotionToRigidbody* New_ctor() ;

/// @brief Method OnAnimatorMove, addr 0x180314040, size 0x2c0, virtual true, abstract: false, final false
inline void OnAnimatorMove() ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RedirectRootMotionToRigidbody() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RedirectRootMotionToRigidbody", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RedirectRootMotionToRigidbody(RedirectRootMotionToRigidbody && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RedirectRootMotionToRigidbody", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RedirectRootMotionToRigidbody(RedirectRootMotionToRigidbody const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18196};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::RedirectRootMotionToRigidbody) == 0x30, "Size mismatch!");

} // namespace end def Animancer
