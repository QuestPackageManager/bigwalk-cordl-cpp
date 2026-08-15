#pragma once
// IWYU pragma private; include "MA/Flora/NativeBufferArrayDispose.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "MA/Flora/zzzz__NativeBufferArrayDispose_def.hpp"
#include "MA/Flora/zzzz__NativeBufferArrayMetadata_def.hpp"
//  Writing Method size for method: ::MA::Flora::NativeBufferArrayDispose.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBufferArrayDispose::*)()>(&::MA::Flora::NativeBufferArrayDispose::Dispose)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181460440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArrayDispose>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::NativeBufferArrayDispose::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArrayDispose>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_BufferArrayData", ty: "::MA::Flora::NativeBufferArrayMetadata*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::NativeBufferArrayDispose::NativeBufferArrayDispose(::MA::Flora::NativeBufferArrayMetadata*  m_BufferArrayData, ::Unity::Collections::AllocatorManager_AllocatorHandle  m_AllocatorLabel) noexcept  {
this->m_BufferArrayData = m_BufferArrayData;
this->m_AllocatorLabel = m_AllocatorLabel;
}
// Ctor Parameters []
constexpr ::MA::Flora::NativeBufferArrayDispose::NativeBufferArrayDispose()   {
}
