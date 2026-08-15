#pragma once
// IWYU pragma private; include "System/FixedBufferExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__FixedBufferExtensions_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::FixedBufferExtensions.GetStringFromFixedBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::FixedBufferExtensions::GetStringFromFixedBuffer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181721090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::FixedBufferExtensions*>(),
                        {"GetStringFromFixedBuffer", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::FixedBufferExtensions.GetFixedBufferStringLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::FixedBufferExtensions::GetFixedBufferStringLength)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181721060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::FixedBufferExtensions*>(),
                        {"GetFixedBufferStringLength", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::FixedBufferExtensions.FixedBufferEqualsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::StringW)>(&::System::FixedBufferExtensions::FixedBufferEqualsString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181720fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::FixedBufferExtensions*>(),
                        {"FixedBufferEqualsString", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW System::FixedBufferExtensions::GetStringFromFixedBuffer(::System::ReadOnlySpan_1<char16_t>  span)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::FixedBufferExtensions*>(),
                        {"GetStringFromFixedBuffer", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, span);
}
inline int32_t System::FixedBufferExtensions::GetFixedBufferStringLength(::System::ReadOnlySpan_1<char16_t>  span)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::FixedBufferExtensions*>(),
                        {"GetFixedBufferStringLength", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, span);
}
inline bool System::FixedBufferExtensions::FixedBufferEqualsString(::System::ReadOnlySpan_1<char16_t>  span, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::FixedBufferExtensions*>(),
                        {"FixedBufferEqualsString", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, span, value);
}
// Ctor Parameters []
constexpr ::System::FixedBufferExtensions::FixedBufferExtensions()   {
}
