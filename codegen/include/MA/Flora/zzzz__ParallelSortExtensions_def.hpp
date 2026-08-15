#pragma once
// IWYU pragma private; include "MA/Flora/ParallelSortExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParallelSortExtensions)
namespace MA::Flora {
struct ParallelSortExtensions_RadixSortBatchPrefixSumJob;
}
namespace MA::Flora {
struct ParallelSortExtensions_RadixSortBucketCountJob;
}
namespace MA::Flora {
struct ParallelSortExtensions_RadixSortBucketSortJob;
}
namespace MA::Flora {
struct ParallelSortExtensions_RadixSortPrefixSumJob;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobFor;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace MA::Flora {
class ParallelSortExtensions;
}
namespace MA::Flora {
struct ParallelSortExtensions_RadixSortBatchPrefixSumJob;
}
namespace MA::Flora {
struct ParallelSortExtensions_RadixSortBucketCountJob;
}
namespace MA::Flora {
struct ParallelSortExtensions_RadixSortBucketSortJob;
}
namespace MA::Flora {
struct ParallelSortExtensions_RadixSortPrefixSumJob;
}
// Write type traits
MARK_REF_T(::MA::Flora::ParallelSortExtensions*);
MARK_VAL_T(::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob);
MARK_VAL_T(::MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob);
MARK_VAL_T(::MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob);
MARK_VAL_T(::MA::Flora::ParallelSortExtensions_RadixSortPrefixSumJob);
DEFINE_IL2CPP_CLASS(::MA::Flora::ParallelSortExtensions*, "MA.Flora", "ParallelSortExtensions");
DEFINE_IL2CPP_CLASS(::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob, "MA.Flora", "ParallelSortExtensions/RadixSortBatchPrefixSumJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob, "MA.Flora", "ParallelSortExtensions/RadixSortBucketCountJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob, "MA.Flora", "ParallelSortExtensions/RadixSortBucketSortJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::ParallelSortExtensions_RadixSortPrefixSumJob, "MA.Flora", "ParallelSortExtensions/RadixSortPrefixSumJob");
// Dependencies Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.ParallelSortExtensions/RadixSortBucketCountJob
struct CORDL_TYPE ParallelSortExtensions_RadixSortBucketCountJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0x181461ff0, size 0x90, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParallelSortExtensions_RadixSortBucketCountJob() ;

// Ctor Parameters [CppParam { name: "Radix", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "JobsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "BatchSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Array", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "Buckets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr ParallelSortExtensions_RadixSortBucketCountJob(int32_t  Radix, int32_t  JobsCount, int32_t  BatchSize, ::Unity::Collections::NativeArray_1<int32_t>  Array, ::Unity::Collections::NativeArray_1<int32_t>  Buckets) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12888};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Radix, offset: 0x0, size: 0x4, def value: None
 int32_t  Radix;

/// @brief Field JobsCount, offset: 0x4, size: 0x4, def value: None
 int32_t  JobsCount;

/// @brief Field BatchSize, offset: 0x8, size: 0x4, def value: None
 int32_t  BatchSize;

/// @brief Field Array, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Array;

/// @brief Field Buckets, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Buckets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob, Radix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob, JobsCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob, BatchSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob, Array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob, Buckets) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob) == 0x30, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.ParallelSortExtensions/RadixSortBatchPrefixSumJob
struct CORDL_TYPE ParallelSortExtensions_RadixSortBatchPrefixSumJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method AtomicIncrement, addr 0x181461b00, size 0x10, virtual false, abstract: false, final false
static inline int32_t AtomicIncrement(::Unity::Collections::NativeArray_1<int32_t>  counter) ;

/// @brief Method Execute, addr 0x181461e90, size 0x160, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Method JobIndexPrefixSum, addr 0x181461c70, size 0x60, virtual false, abstract: false, final false
inline int32_t JobIndexPrefixSum(int32_t  sum, int32_t  i) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParallelSortExtensions_RadixSortBatchPrefixSumJob() ;

// Ctor Parameters [CppParam { name: "Radix", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "JobsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Array", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "Counter", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "IndicesSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "Buckets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "Indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr ParallelSortExtensions_RadixSortBatchPrefixSumJob(int32_t  Radix, int32_t  JobsCount, ::Unity::Collections::NativeArray_1<int32_t>  Array, ::Unity::Collections::NativeArray_1<int32_t>  Counter, ::Unity::Collections::NativeArray_1<int32_t>  IndicesSum, ::Unity::Collections::NativeArray_1<int32_t>  Buckets, ::Unity::Collections::NativeArray_1<int32_t>  Indices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12889};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field Radix, offset: 0x0, size: 0x4, def value: None
 int32_t  Radix;

/// @brief Field JobsCount, offset: 0x4, size: 0x4, def value: None
 int32_t  JobsCount;

/// @brief Field Array, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Array;

/// @brief Field Counter, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Counter;

/// @brief Field IndicesSum, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  IndicesSum;

/// @brief Field Buckets, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Buckets;

/// @brief Field Indices, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Indices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob, Radix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob, JobsCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob, Array) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob, Counter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob, IndicesSum) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob, Buckets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob, Indices) == 0x48, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob) == 0x58, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.ParallelSortExtensions/RadixSortPrefixSumJob
struct CORDL_TYPE ParallelSortExtensions_RadixSortPrefixSumJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0x181461e10, size 0x80, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParallelSortExtensions_RadixSortPrefixSumJob() ;

// Ctor Parameters [CppParam { name: "JobsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "IndicesSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "Indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr ParallelSortExtensions_RadixSortPrefixSumJob(int32_t  JobsCount, ::Unity::Collections::NativeArray_1<int32_t>  IndicesSum, ::Unity::Collections::NativeArray_1<int32_t>  Indices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12890};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field JobsCount, offset: 0x0, size: 0x4, def value: None
 int32_t  JobsCount;

/// @brief Field IndicesSum, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  IndicesSum;

/// @brief Field Indices, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Indices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortPrefixSumJob, JobsCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortPrefixSumJob, IndicesSum) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortPrefixSumJob, Indices) == 0x18, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ParallelSortExtensions_RadixSortPrefixSumJob) == 0x28, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.ParallelSortExtensions/RadixSortBucketSortJob
struct CORDL_TYPE ParallelSortExtensions_RadixSortBucketSortJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0x181462080, size 0x100, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParallelSortExtensions_RadixSortBucketSortJob() ;

// Ctor Parameters [CppParam { name: "Radix", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "BatchSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Array", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "Indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "ArraySorted", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr ParallelSortExtensions_RadixSortBucketSortJob(int32_t  Radix, int32_t  BatchSize, ::Unity::Collections::NativeArray_1<int32_t>  Array, ::Unity::Collections::NativeArray_1<int32_t>  Indices, ::Unity::Collections::NativeArray_1<int32_t>  ArraySorted) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12891};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field Radix, offset: 0x0, size: 0x4, def value: None
 int32_t  Radix;

/// @brief Field BatchSize, offset: 0x4, size: 0x4, def value: None
 int32_t  BatchSize;

/// @brief Field Array, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Array;

/// @brief Field Indices, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Indices;

/// @brief Field ArraySorted, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ArraySorted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob, Radix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob, BatchSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob, Array) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob, Indices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob, ArraySorted) == 0x28, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob) == 0x38, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.ParallelSortExtensions
class CORDL_TYPE ParallelSortExtensions : public ::System::Object {
public:
// Declarations
using RadixSortBatchPrefixSumJob = ::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob;

using RadixSortBucketCountJob = ::MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob;

using RadixSortBucketSortJob = ::MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob;

using RadixSortPrefixSumJob = ::MA::Flora::ParallelSortExtensions_RadixSortPrefixSumJob;

/// @brief Method ParallelSort, addr 0x181461120, size 0x4f0, virtual false, abstract: false, final false
static inline ::Unity::Jobs::JobHandle ParallelSort(::Unity::Collections::NativeArray_1<int32_t>  array, ::Unity::Jobs::JobHandle  inputDeps) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParallelSortExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParallelSortExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParallelSortExtensions(ParallelSortExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParallelSortExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParallelSortExtensions(ParallelSortExtensions const& ) = delete;

/// @brief Field MinRadixSortArraySize offset 0xffffffff size 0x4
static constexpr int32_t  MinRadixSortArraySize{static_cast<int32_t>(0x800)};

/// @brief Field MinRadixSortBatchSize offset 0xffffffff size 0x4
static constexpr int32_t  MinRadixSortBatchSize{static_cast<int32_t>(0x100)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12892};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::ParallelSortExtensions) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
