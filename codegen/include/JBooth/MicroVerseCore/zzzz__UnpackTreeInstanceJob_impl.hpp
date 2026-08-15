#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/UnpackTreeInstanceJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__half4_impl.hpp"
#include "UnityEngine/zzzz__TreeInstance_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__UnpackTreeInstanceJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::UnpackTreeInstanceJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::UnpackTreeInstanceJob::*)()>(&::JBooth::MicroVerseCore::UnpackTreeInstanceJob::Execute)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x18142a050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::UnpackTreeInstanceJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void JBooth::MicroVerseCore::UnpackTreeInstanceJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::UnpackTreeInstanceJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  JBooth::MicroVerseCore::UnpackTreeInstanceJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* JBooth::MicroVerseCore::UnpackTreeInstanceJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "count", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "trees", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>", modifiers: "", def_value: Some("{}") }, CppParam { name: "placementData", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "randomData", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "treeIndexes", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::UnpackTreeInstanceJob::UnpackTreeInstanceJob(::Unity::Collections::NativeArray_1<int32_t>  count, ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  trees, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  placementData, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  randomData, ::Unity::Collections::NativeArray_1<int32_t>  treeIndexes) noexcept  {
this->count = count;
this->trees = trees;
this->placementData = placementData;
this->randomData = randomData;
this->treeIndexes = treeIndexes;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::UnpackTreeInstanceJob::UnpackTreeInstanceJob()   {
}
