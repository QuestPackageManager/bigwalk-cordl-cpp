#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/UnityAPISucksJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityAPISucksJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct UnityAPISucksJob;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::UnityAPISucksJob);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::UnityAPISucksJob, "JBooth.MicroVerseCore", "UnityAPISucksJob");
// Dependencies Unity.Collections.NativeArray`1<T>
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.UnityAPISucksJob
struct CORDL_TYPE UnityAPISucksJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x18142a020, size 0x30, virtual true, abstract: false, final true
inline void Execute(int32_t  i) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityAPISucksJob() ;

// Ctor Parameters [CppParam { name: "source", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "target", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr UnityAPISucksJob(::Unity::Collections::NativeArray_1<uint8_t>  source, ::Unity::Collections::NativeArray_1<int32_t>  target) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17977};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field source, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  source;

/// @brief Field target, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::UnityAPISucksJob, source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::UnityAPISucksJob, target) == 0x10, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::UnityAPISucksJob) == 0x20, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
