#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/zzzz__Extensions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Extensions.IsOperationComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Epic::OnlineServices::Result)>(&::Epic::OnlineServices::Extensions::IsOperationComplete)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804d6c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Extensions*>(),
                        {"IsOperationComplete", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Extensions.ToHexString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (*)(::ArrayW<uint8_t>)>(&::Epic::OnlineServices::Extensions::ToHexString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804d8b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Extensions*>(),
                        {"ToHexString", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Extensions.ToHexString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (*)(::System::ArraySegment_1<uint8_t>)>(&::Epic::OnlineServices::Extensions::ToHexString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804d8b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Extensions*>(),
                        {"ToHexString", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Epic::OnlineServices::Extensions::IsOperationComplete(::Epic::OnlineServices::Result  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Extensions*>(),
                        {"IsOperationComplete", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Extensions::ToHexString(::ArrayW<uint8_t>  byteArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Extensions*>(),
                        {"ToHexString", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(nullptr, ___internal_method, byteArray);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Extensions::ToHexString(::System::ArraySegment_1<uint8_t>  arraySegment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Extensions*>(),
                        {"ToHexString", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(nullptr, ___internal_method, arraySegment);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Extensions::Extensions()   {
}
