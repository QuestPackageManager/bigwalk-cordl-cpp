#pragma once
// IWYU pragma private; include "UnityEngine/Splines/MathUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MathUtility)
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4x4;
}
// Forward declare root types
namespace UnityEngine::Splines {
class MathUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::MathUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::MathUtility*, "UnityEngine.Splines", "MathUtility");
// Dependencies System.Object
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.MathUtility
class CORDL_TYPE MathUtility : public ::System::Object {
public:
// Declarations
/// @brief Method All, addr 0x182167220, size 0x100, virtual false, abstract: false, final false
static inline bool All(::Unity::Mathematics::float4x4  matrixA, ::Unity::Mathematics::float4x4  matrixB) ;

/// @brief Method MultiplyVector, addr 0x182167320, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 MultiplyVector(::Unity::Mathematics::float4x4  matrix, ::Unity::Mathematics::float3  vector) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MathUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MathUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MathUtility(MathUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MathUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MathUtility(MathUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18697};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::MathUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Splines
