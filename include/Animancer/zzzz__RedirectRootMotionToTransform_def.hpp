#pragma once
// IWYU pragma private; include "Animancer/RedirectRootMotionToTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__RedirectRootMotion_1_def.hpp"
CORDL_MODULE_EXPORT(RedirectRootMotionToTransform)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Animancer {
class RedirectRootMotionToTransform;
}
// Write type traits
MARK_REF_T(::Animancer::RedirectRootMotionToTransform*);
DEFINE_IL2CPP_CLASS(::Animancer::RedirectRootMotionToTransform*, "Animancer", "RedirectRootMotionToTransform");
// Dependencies Animancer.RedirectRootMotion`1<T>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.RedirectRootMotionToTransform
class CORDL_TYPE RedirectRootMotionToTransform : public ::Animancer::RedirectRootMotion_1<::UnityW<::UnityEngine::Transform>> {
public:
// Declarations
static inline ::Animancer::RedirectRootMotionToTransform* New_ctor() ;

/// @brief Method OnAnimatorMove, addr 0x180314300, size 0x2c0, virtual true, abstract: false, final false
inline void OnAnimatorMove() ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RedirectRootMotionToTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RedirectRootMotionToTransform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RedirectRootMotionToTransform(RedirectRootMotionToTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RedirectRootMotionToTransform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RedirectRootMotionToTransform(RedirectRootMotionToTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18197};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::RedirectRootMotionToTransform) == 0x30, "Size mismatch!");

} // namespace end def Animancer
