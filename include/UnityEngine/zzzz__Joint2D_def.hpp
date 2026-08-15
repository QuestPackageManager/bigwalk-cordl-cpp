#pragma once
// IWYU pragma private; include "UnityEngine/Joint2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(Joint2D)
// Forward declare root types
namespace UnityEngine {
class Joint2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::Joint2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Joint2D*, "UnityEngine", "Joint2D");
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Joint2D
class CORDL_TYPE Joint2D : public ::UnityEngine::Behaviour {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Joint2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Joint2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Joint2D(Joint2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Joint2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Joint2D(Joint2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19799};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Joint2D) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
