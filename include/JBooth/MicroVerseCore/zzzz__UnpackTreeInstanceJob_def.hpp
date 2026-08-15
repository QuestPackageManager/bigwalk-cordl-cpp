#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/UnpackTreeInstanceJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__half4_def.hpp"
#include "UnityEngine/zzzz__TreeInstance_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnpackTreeInstanceJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct UnpackTreeInstanceJob;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::UnpackTreeInstanceJob);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::UnpackTreeInstanceJob, "JBooth.MicroVerseCore", "UnpackTreeInstanceJob");
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.half4, UnityEngine.TreeInstance
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.UnpackTreeInstanceJob
struct CORDL_TYPE UnpackTreeInstanceJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x18142a050, size 0x4c0, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnpackTreeInstanceJob() ;

// Ctor Parameters [CppParam { name: "count", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "trees", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>", modifiers: "", def_value: None }, CppParam { name: "placementData", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>", modifiers: "", def_value: None }, CppParam { name: "randomData", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>", modifiers: "", def_value: None }, CppParam { name: "treeIndexes", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr UnpackTreeInstanceJob(::Unity::Collections::NativeArray_1<int32_t>  count, ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  trees, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  placementData, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  randomData, ::Unity::Collections::NativeArray_1<int32_t>  treeIndexes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17985};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field count, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  count;

/// @brief Field trees, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  trees;

/// @brief Field placementData, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  placementData;

/// @brief Field randomData, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  randomData;

/// @brief Field treeIndexes, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  treeIndexes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::UnpackTreeInstanceJob, count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::UnpackTreeInstanceJob, trees) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::UnpackTreeInstanceJob, placementData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::UnpackTreeInstanceJob, randomData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::UnpackTreeInstanceJob, treeIndexes) == 0x40, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::UnpackTreeInstanceJob) == 0x50, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
