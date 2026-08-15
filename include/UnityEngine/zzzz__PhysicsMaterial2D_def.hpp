#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsMaterial2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PhysicsMaterial2D)
// Forward declare root types
namespace UnityEngine {
class PhysicsMaterial2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::PhysicsMaterial2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::PhysicsMaterial2D*, "UnityEngine", "PhysicsMaterial2D");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PhysicsMaterial2D
class CORDL_TYPE PhysicsMaterial2D : public ::UnityEngine::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhysicsMaterial2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhysicsMaterial2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhysicsMaterial2D(PhysicsMaterial2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsMaterial2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhysicsMaterial2D(PhysicsMaterial2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19800};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::PhysicsMaterial2D) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
