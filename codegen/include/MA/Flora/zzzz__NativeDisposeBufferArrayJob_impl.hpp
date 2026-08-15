#pragma once
// IWYU pragma private; include "MA/Flora/NativeDisposeBufferArrayJob.hpp"
#include "MA/Flora/zzzz__NativeBufferArrayDispose_impl.hpp"
#include "MA/Flora/zzzz__NativeDisposeBufferArrayJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::MA::Flora::NativeDisposeBufferArrayJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeDisposeBufferArrayJob::*)()>(&::MA::Flora::NativeDisposeBufferArrayJob::Execute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814607d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeDisposeBufferArrayJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::NativeDisposeBufferArrayJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeDisposeBufferArrayJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::NativeDisposeBufferArrayJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::NativeDisposeBufferArrayJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "::MA::Flora::NativeBufferArrayDispose", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::NativeDisposeBufferArrayJob::NativeDisposeBufferArrayJob(::MA::Flora::NativeBufferArrayDispose  Data) noexcept  {
this->Data = Data;
}
// Ctor Parameters []
constexpr ::MA::Flora::NativeDisposeBufferArrayJob::NativeDisposeBufferArrayJob()   {
}
