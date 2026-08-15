#pragma once
// IWYU pragma private; include "MA/Flora/ParallelSortLongExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParallelSortLongExtensions)
namespace MA::Flora {
struct ParallelSortLongExtensions_RadixSort64BatchPrefixSumJob;
}
namespace MA::Flora {
struct ParallelSortLongExtensions_RadixSort64BucketCountJob;
}
namespace MA::Flora {
struct ParallelSortLongExtensions_RadixSort64BucketSortJob;
}
namespace MA::Flora {
struct ParallelSortLongExtensions_RadixSort64PrefixSumJob;
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
class ParallelSortLongExtensions;
}
namespace MA::Flora {
struct ParallelSortLongExtensions_RadixSort64BatchPrefixSumJob;
}
namespace MA::Flora {
struct ParallelSortLongExtensions_RadixSort64BucketCountJob;
}
namespace MA::Flora {
struct ParallelSortLongExtensions_RadixSort64BucketSortJob;
}
namespace MA::Flora {
struct ParallelSortLongExtensions_RadixSort64PrefixSumJob;
}
// Write type traits
MARK_REF_T(::MA::Flora::ParallelSortLongExtensions*);
MARK_VAL_T(::MA::Flora::ParallelSortLongExtensions_RadixSort64BatchPrefixSumJob);
MARK_VAL_T(::MA::Flora::ParallelSortLongExtensions_RadixSort64BucketCountJob);
MARK_VAL_T(::MA::Flora::ParallelSortLongExtensions_RadixSort64BucketSortJob);
MARK_VAL_T(::MA::Flora::ParallelSortLongExtensions_RadixSort64PrefixSumJob);
DEFINE_IL2CPP_CLASS(::MA::Flora::ParallelSortLongExtensions*, "MA.Flora", "ParallelSortLongExtensions");
DEFINE_IL2CPP_CLASS(::MA::Flora::ParallelSortLongExtensions_RadixSort64BatchPrefixSumJob, "MA.Flora", "ParallelSortLongExtensions/RadixSort64BatchPrefixSumJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::ParallelSortLongExtensions_RadixSort64BucketCountJob, "MA.Flora", "ParallelSortLongExtensions/RadixSort64BucketCountJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::ParallelSortLongExtensions_RadixSort64BucketSortJob, "MA.Flora", "ParallelSortLongExtensions/RadixSort64BucketSortJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::ParallelSortLongExtensions_RadixSort64PrefixSumJob, "MA.Flora", "ParallelSortLongExtensions/RadixSort64PrefixSumJob");
// Dependencies Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.ParallelSortLongExtensions/RadixSort64BucketCountJob
struct CORDL_TYPE ParallelSortLongExtensions_RadixSort64BucketCountJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0x181461cd0, size 0x90, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParallelSortLongExtensions_RadixSort64BucketCountJob() ;

// Ctor Parameters [CppParam { name: "Radix", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "JobsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "BatchSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Array", ty: "::Unity::Collections::NativeArray_1<int64_t>", modifiers: "", def_value: None }, CppParam { name: "Buckets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr ParallelSortLongExtensions_RadixSort64BucketCountJob(int32_t  Radix, int32_t  JobsCount, int32_t  BatchSize, ::Unity::Collections::NativeArray_1<int64_t>  Array, ::Unity::Collections::NativeArray_1<int32_t>  Buckets) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12893};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Radix, offset: 0x0, size: 0x4, def value: None
 int32_t  Radix;

/// @brief Field JobsCount, offset: 0x4, size: 0x4, def value: None
 int32_t  JobsCount;

/// @brief Field BatchSize, offset: 0x8, size: 0x4, def value: None
 int32_t  BatchSize;

/// @brief Field Array, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int64_t>  Array;

/// @brief Field Buckets, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Buckets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BucketCountJob, Radix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BucketCountJob, JobsCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BucketCountJob, BatchSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BucketCountJob, Array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BucketCountJob, Buckets) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BucketCountJob) == 0x30, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.ParallelSortLongExtensions/RadixSort64BatchPrefixSumJob
struct CORDL_TYPE ParallelSortLongExtensions_RadixSort64BatchPrefixSumJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method AtomicIncrement, addr 0x181461b00, size 0x10, virtual false, abstract: false, final false
static inline int32_t AtomicIncrement(::Unity::Collections::NativeArray_1<int32_t>  counter) ;

/// @brief Method Execute, addr 0x181461b10, size 0x160, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Method JobIndexPrefixSum, addr 0x181461c70, size 0x60, virtual false, abstract: false, final false
inline int32_t JobIndexPrefixSum(int32_t  sum, int32_t  i) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParallelSortLongExtensions_RadixSort64BatchPrefixSumJob() ;

// Ctor Parameters [CppParam { name: "Radix", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "JobsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Array", ty: "::Unity::Collections::NativeArray_1<int64_t>", modifiers: "", def_value: None }, CppParam { name: "Counter", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "IndicesSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "Buckets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "Indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr ParallelSortLongExtensions_RadixSort64BatchPrefixSumJob(int32_t  Radix, int32_t  JobsCount, ::Unity::Collections::NativeArray_1<int64_t>  Array, ::Unity::Collections::NativeArray_1<int32_t>  Counter, ::Unity::Collections::NativeArray_1<int32_t>  IndicesSum, ::Unity::Collections::NativeArray_1<int32_t>  Buckets, ::Unity::Collections::NativeArray_1<int32_t>  Indices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12894};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field Radix, offset: 0x0, size: 0x4, def value: None
 int32_t  Radix;

/// @brief Field JobsCount, offset: 0x4, size: 0x4, def value: None
 int32_t  JobsCount;

/// @brief Field Array, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int64_t>  Array;

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
static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BatchPrefixSumJob, Radix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BatchPrefixSumJob, JobsCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BatchPrefixSumJob, Array) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BatchPrefixSumJob, Counter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BatchPrefixSumJob, IndicesSum) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BatchPrefixSumJob, Buckets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BatchPrefixSumJob, Indices) == 0x48, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BatchPrefixSumJob) == 0x58, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.ParallelSortLongExtensions/RadixSort64PrefixSumJob
struct CORDL_TYPE ParallelSortLongExtensions_RadixSort64PrefixSumJob {
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
constexpr ParallelSortLongExtensions_RadixSort64PrefixSumJob() ;

// Ctor Parameters [CppParam { name: "JobsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "IndicesSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "Indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr ParallelSortLongExtensions_RadixSort64PrefixSumJob(int32_t  JobsCount, ::Unity::Collections::NativeArray_1<int32_t>  IndicesSum, ::Unity::Collections::NativeArray_1<int32_t>  Indices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12895};

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
static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64PrefixSumJob, JobsCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64PrefixSumJob, IndicesSum) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64PrefixSumJob, Indices) == 0x18, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ParallelSortLongExtensions_RadixSort64PrefixSumJob) == 0x28, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.ParallelSortLongExtensions/RadixSort64BucketSortJob
struct CORDL_TYPE ParallelSortLongExtensions_RadixSort64BucketSortJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr operator  ::Unity::Jobs::IJobFor*() ;

/// @brief Method Execute, addr 0x181461d60, size 0xb0, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParallelSortLongExtensions_RadixSort64BucketSortJob() ;

// Ctor Parameters [CppParam { name: "Radix", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "BatchSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Array", ty: "::Unity::Collections::NativeArray_1<int64_t>", modifiers: "", def_value: None }, CppParam { name: "Indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "ArraySorted", ty: "::Unity::Collections::NativeArray_1<int64_t>", modifiers: "", def_value: None }]
constexpr ParallelSortLongExtensions_RadixSort64BucketSortJob(int32_t  Radix, int32_t  BatchSize, ::Unity::Collections::NativeArray_1<int64_t>  Array, ::Unity::Collections::NativeArray_1<int32_t>  Indices, ::Unity::Collections::NativeArray_1<int64_t>  ArraySorted) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12896};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field Radix, offset: 0x0, size: 0x4, def value: None
 int32_t  Radix;

/// @brief Field BatchSize, offset: 0x4, size: 0x4, def value: None
 int32_t  BatchSize;

/// @brief Field Array, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int64_t>  Array;

/// @brief Field Indices, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Indices;

/// @brief Field ArraySorted, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int64_t>  ArraySorted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BucketSortJob, Radix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BucketSortJob, BatchSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BucketSortJob, Array) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BucketSortJob, Indices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BucketSortJob, ArraySorted) == 0x28, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ParallelSortLongExtensions_RadixSort64BucketSortJob) == 0x38, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.ParallelSortLongExtensions
class CORDL_TYPE ParallelSortLongExtensions : public ::System::Object {
public:
// Declarations
using RadixSort64BatchPrefixSumJob = ::MA::Flora::ParallelSortLongExtensions_RadixSort64BatchPrefixSumJob;

using RadixSort64BucketCountJob = ::MA::Flora::ParallelSortLongExtensions_RadixSort64BucketCountJob;

using RadixSort64BucketSortJob = ::MA::Flora::ParallelSortLongExtensions_RadixSort64BucketSortJob;

using RadixSort64PrefixSumJob = ::MA::Flora::ParallelSortLongExtensions_RadixSort64PrefixSumJob;

/// @brief Method ParallelSort, addr 0x181461610, size 0x4f0, virtual false, abstract: false, final false
static inline ::Unity::Jobs::JobHandle ParallelSort(::Unity::Collections::NativeArray_1<int64_t>  array, ::Unity::Jobs::JobHandle  inputDeps) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParallelSortLongExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParallelSortLongExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParallelSortLongExtensions(ParallelSortLongExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParallelSortLongExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParallelSortLongExtensions(ParallelSortLongExtensions const& ) = delete;

/// @brief Field MinRadixSortArraySize offset 0xffffffff size 0x4
static constexpr int32_t  MinRadixSortArraySize{static_cast<int32_t>(0x800)};

/// @brief Field MinRadixSortBatchSize offset 0xffffffff size 0x4
static constexpr int32_t  MinRadixSortBatchSize{static_cast<int32_t>(0x100)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12897};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::ParallelSortLongExtensions) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
