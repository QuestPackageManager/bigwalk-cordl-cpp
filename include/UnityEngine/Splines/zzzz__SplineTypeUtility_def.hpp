#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineTypeUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SplineTypeUtility)
namespace UnityEngine::Splines {
struct SplineType;
}
namespace UnityEngine::Splines {
struct TangentMode;
}
// Forward declare root types
namespace UnityEngine::Splines {
class SplineTypeUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::SplineTypeUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineTypeUtility*, "UnityEngine.Splines", "SplineTypeUtility");
// Dependencies System.Object
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineTypeUtility
class CORDL_TYPE SplineTypeUtility : public ::System::Object {
public:
// Declarations
/// @brief Method GetTangentMode, addr 0x18217cef0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Splines::TangentMode GetTangentMode(::UnityEngine::Splines::SplineType  splineType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineTypeUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineTypeUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineTypeUtility(SplineTypeUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineTypeUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineTypeUtility(SplineTypeUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18764};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::SplineTypeUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Splines
