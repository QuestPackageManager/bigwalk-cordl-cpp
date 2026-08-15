#pragma once
// IWYU pragma private; include "MA/Flora/ParallelSortExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "MA/Flora/zzzz__ParallelSortExtensions_def.hpp"
#include "MA/Flora/zzzz__ParallelSortExtensions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob::*)(int32_t)>(&::MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob::Execute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181461ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr  MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob::operator ::Unity::Jobs::IJobFor*()  {
return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob::i___Unity__Jobs__IJobFor()  {
return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Radix", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "JobsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BatchSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Array", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Buckets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob::ParallelSortExtensions_RadixSortBucketCountJob(int32_t  Radix, int32_t  JobsCount, int32_t  BatchSize, ::Unity::Collections::NativeArray_1<int32_t>  Array, ::Unity::Collections::NativeArray_1<int32_t>  Buckets) noexcept  {
this->Radix = Radix;
this->JobsCount = JobsCount;
this->BatchSize = BatchSize;
this->Array = Array;
this->Buckets = Buckets;
}
// Ctor Parameters []
constexpr ::MA::Flora::ParallelSortExtensions_RadixSortBucketCountJob::ParallelSortExtensions_RadixSortBucketCountJob()   {
}
//  Writing Method size for method: ::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob.AtomicIncrement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Collections::NativeArray_1<int32_t>)>(&::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob::AtomicIncrement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181461b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob>(),
                        {"AtomicIncrement", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob.JobIndexPrefixSum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob::*)(int32_t, int32_t)>(&::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob::JobIndexPrefixSum)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181461c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob>(),
                        {"JobIndexPrefixSum", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob::*)(int32_t)>(&::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob::Execute)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181461e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob::AtomicIncrement(::Unity::Collections::NativeArray_1<int32_t>  counter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob>(),
                        {"AtomicIncrement", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, counter);
}
inline int32_t MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob::JobIndexPrefixSum(int32_t  sum, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob>(),
                        {"JobIndexPrefixSum", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, sum, i);
}
inline void MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr  MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob::operator ::Unity::Jobs::IJobFor*()  {
return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob::i___Unity__Jobs__IJobFor()  {
return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Radix", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "JobsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Array", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Counter", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndicesSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Buckets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob::ParallelSortExtensions_RadixSortBatchPrefixSumJob(int32_t  Radix, int32_t  JobsCount, ::Unity::Collections::NativeArray_1<int32_t>  Array, ::Unity::Collections::NativeArray_1<int32_t>  Counter, ::Unity::Collections::NativeArray_1<int32_t>  IndicesSum, ::Unity::Collections::NativeArray_1<int32_t>  Buckets, ::Unity::Collections::NativeArray_1<int32_t>  Indices) noexcept  {
this->Radix = Radix;
this->JobsCount = JobsCount;
this->Array = Array;
this->Counter = Counter;
this->IndicesSum = IndicesSum;
this->Buckets = Buckets;
this->Indices = Indices;
}
// Ctor Parameters []
constexpr ::MA::Flora::ParallelSortExtensions_RadixSortBatchPrefixSumJob::ParallelSortExtensions_RadixSortBatchPrefixSumJob()   {
}
//  Writing Method size for method: ::MA::Flora::ParallelSortExtensions_RadixSortPrefixSumJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelSortExtensions_RadixSortPrefixSumJob::*)(int32_t)>(&::MA::Flora::ParallelSortExtensions_RadixSortPrefixSumJob::Execute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181461e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelSortExtensions_RadixSortPrefixSumJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::ParallelSortExtensions_RadixSortPrefixSumJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelSortExtensions_RadixSortPrefixSumJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr  MA::Flora::ParallelSortExtensions_RadixSortPrefixSumJob::operator ::Unity::Jobs::IJobFor*()  {
return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* MA::Flora::ParallelSortExtensions_RadixSortPrefixSumJob::i___Unity__Jobs__IJobFor()  {
return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "JobsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndicesSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::ParallelSortExtensions_RadixSortPrefixSumJob::ParallelSortExtensions_RadixSortPrefixSumJob(int32_t  JobsCount, ::Unity::Collections::NativeArray_1<int32_t>  IndicesSum, ::Unity::Collections::NativeArray_1<int32_t>  Indices) noexcept  {
this->JobsCount = JobsCount;
this->IndicesSum = IndicesSum;
this->Indices = Indices;
}
// Ctor Parameters []
constexpr ::MA::Flora::ParallelSortExtensions_RadixSortPrefixSumJob::ParallelSortExtensions_RadixSortPrefixSumJob()   {
}
//  Writing Method size for method: ::MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob::*)(int32_t)>(&::MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob::Execute)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181462080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr  MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob::operator ::Unity::Jobs::IJobFor*()  {
return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob::i___Unity__Jobs__IJobFor()  {
return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Radix", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BatchSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Array", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ArraySorted", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob::ParallelSortExtensions_RadixSortBucketSortJob(int32_t  Radix, int32_t  BatchSize, ::Unity::Collections::NativeArray_1<int32_t>  Array, ::Unity::Collections::NativeArray_1<int32_t>  Indices, ::Unity::Collections::NativeArray_1<int32_t>  ArraySorted) noexcept  {
this->Radix = Radix;
this->BatchSize = BatchSize;
this->Array = Array;
this->Indices = Indices;
this->ArraySorted = ArraySorted;
}
// Ctor Parameters []
constexpr ::MA::Flora::ParallelSortExtensions_RadixSortBucketSortJob::ParallelSortExtensions_RadixSortBucketSortJob()   {
}
//  Writing Method size for method: ::MA::Flora::ParallelSortExtensions.ParallelSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Jobs::JobHandle)>(&::MA::Flora::ParallelSortExtensions::ParallelSort)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x181461120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelSortExtensions*>(),
                        {"ParallelSort", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Jobs::JobHandle MA::Flora::ParallelSortExtensions::ParallelSort(::Unity::Collections::NativeArray_1<int32_t>  array, ::Unity::Jobs::JobHandle  inputDeps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ParallelSortExtensions*>(),
                        {"ParallelSort", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, array, inputDeps);
}
// Ctor Parameters []
constexpr ::MA::Flora::ParallelSortExtensions::ParallelSortExtensions()   {
}
