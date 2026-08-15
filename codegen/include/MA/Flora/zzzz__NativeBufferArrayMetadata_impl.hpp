#pragma once
// IWYU pragma private; include "MA/Flora/NativeBufferArrayMetadata.hpp"
#include "MA/Flora/zzzz__NativeBufferArrayMetadata_def.hpp"
#include "MA/Flora/zzzz__NativeBufferHeader_def.hpp"
//  Writing Method size for method: ::MA::Flora::NativeBufferArrayMetadata.GetNativeBufferHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeBufferHeader* (::MA::Flora::NativeBufferArrayMetadata::*)(int32_t, int32_t)>(&::MA::Flora::NativeBufferArrayMetadata::GetNativeBufferHeader)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181460520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArrayMetadata>(),
                        {"GetNativeBufferHeader", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::NativeBufferHeader* MA::Flora::NativeBufferArrayMetadata::GetNativeBufferHeader(int32_t  index, int32_t  elementSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferArrayMetadata>(),
                        {"GetNativeBufferHeader", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBufferHeader*>(*this, ___internal_method, index, elementSize);
}
// Ctor Parameters [CppParam { name: "Buffer", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ElementSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "InlineCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::NativeBufferArrayMetadata::NativeBufferArrayMetadata(uint8_t*  Buffer, int32_t  ElementSize, int32_t  InlineCapacity, int32_t  Length, int32_t  Capacity) noexcept  {
this->Buffer = Buffer;
this->ElementSize = ElementSize;
this->InlineCapacity = InlineCapacity;
this->Length = Length;
this->Capacity = Capacity;
}
// Ctor Parameters []
constexpr ::MA::Flora::NativeBufferArrayMetadata::NativeBufferArrayMetadata()   {
}
