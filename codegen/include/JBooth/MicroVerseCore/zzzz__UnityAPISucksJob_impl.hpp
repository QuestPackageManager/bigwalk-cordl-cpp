#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/UnityAPISucksJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__UnityAPISucksJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::UnityAPISucksJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::UnityAPISucksJob::*)(int32_t)>(&::JBooth::MicroVerseCore::UnityAPISucksJob::Execute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18142a020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::UnityAPISucksJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void JBooth::MicroVerseCore::UnityAPISucksJob::Execute(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::UnityAPISucksJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  JBooth::MicroVerseCore::UnityAPISucksJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* JBooth::MicroVerseCore::UnityAPISucksJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "source", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "target", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::UnityAPISucksJob::UnityAPISucksJob(::Unity::Collections::NativeArray_1<uint8_t>  source, ::Unity::Collections::NativeArray_1<int32_t>  target) noexcept  {
this->source = source;
this->target = target;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::UnityAPISucksJob::UnityAPISucksJob()   {
}
