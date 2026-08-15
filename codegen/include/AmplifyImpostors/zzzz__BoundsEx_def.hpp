#pragma once
// IWYU pragma private; include "AmplifyImpostors/BoundsEx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BoundsEx)
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace AmplifyImpostors {
class BoundsEx;
}
// Write type traits
MARK_REF_T(::AmplifyImpostors::BoundsEx*);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::BoundsEx*, "AmplifyImpostors", "BoundsEx");
// Dependencies System.Object
namespace AmplifyImpostors {
// Is value type: false
// CS Name: AmplifyImpostors.BoundsEx
class CORDL_TYPE BoundsEx : public ::System::Object {
public:
// Declarations
/// @brief Method Transform, addr 0x1802d9860, size 0x2d0, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds Transform(::UnityEngine::Bounds  bounds, ::UnityEngine::Matrix4x4  matrix) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoundsEx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoundsEx", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BoundsEx(BoundsEx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoundsEx", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoundsEx(BoundsEx const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20958};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::AmplifyImpostors::BoundsEx) == 0x10, "Size mismatch!");

} // namespace end def AmplifyImpostors
