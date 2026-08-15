#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemJobs/ParticleSystemNativeArray4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystemNativeArray4)
// Forward declare root types
namespace UnityEngine::ParticleSystemJobs {
struct ParticleSystemNativeArray4;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray4);
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray4, "UnityEngine.ParticleSystemJobs", "ParticleSystemNativeArray4");
// Dependencies Unity.Collections.NativeArray`1<T>
namespace UnityEngine::ParticleSystemJobs {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemJobs.ParticleSystemNativeArray4
struct CORDL_TYPE ParticleSystemNativeArray4 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystemNativeArray4() ;

// Ctor Parameters [CppParam { name: "x", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "z", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "w", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }]
constexpr ParticleSystemNativeArray4(::Unity::Collections::NativeArray_1<float_t>  x, ::Unity::Collections::NativeArray_1<float_t>  y, ::Unity::Collections::NativeArray_1<float_t>  z, ::Unity::Collections::NativeArray_1<float_t>  w) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21155};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field x, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<float_t>  x;

/// @brief Field y, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<float_t>  y;

/// @brief Field z, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<float_t>  z;

/// @brief Field w, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<float_t>  w;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray4, y) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray4, z) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray4, w) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray4) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::ParticleSystemJobs
