#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Common.hpp"
#include "System/Runtime/InteropServices/zzzz__CallingConvention_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/zzzz__Common_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Common.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (*)(::System::ArraySegment_1<uint8_t>, ::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Common::ToString)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1804d6d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Common*>(),
                        {"ToString", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Common.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (*)(::System::ArraySegment_1<uint8_t>)>(&::Epic::OnlineServices::Common::ToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1804d6f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Common*>(),
                        {"ToString", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Common.IsOperationComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Epic::OnlineServices::Result)>(&::Epic::OnlineServices::Common::IsOperationComplete)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804d6c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Common*>(),
                        {"IsOperationComplete", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Common.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (*)(::Epic::OnlineServices::Result)>(&::Epic::OnlineServices::Common::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804d6eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Common*>(),
                        {"ToString", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Common._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Common::*)()>(&::Epic::OnlineServices::Common::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Common*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Common::setStaticF_IPT_UNKNOWN(::Epic::OnlineServices::Utf8String*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Utf8String*, "IPT_UNKNOWN", ::Epic::OnlineServices::Common*>(std::forward<::Epic::OnlineServices::Utf8String*>(value));
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Common::getStaticF_IPT_UNKNOWN()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Utf8String*, "IPT_UNKNOWN", ::Epic::OnlineServices::Common*>();
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Common::ToString(::System::ArraySegment_1<uint8_t>  byteArray, ::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Common*>(),
                        {"ToString", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(nullptr, ___internal_method, byteArray, outBuffer);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Common::ToString(::System::ArraySegment_1<uint8_t>  byteArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Common*>(),
                        {"ToString", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(nullptr, ___internal_method, byteArray);
}
inline bool Epic::OnlineServices::Common::IsOperationComplete(::Epic::OnlineServices::Result  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Common*>(),
                        {"IsOperationComplete", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Common::ToString(::Epic::OnlineServices::Result  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Common*>(),
                        {"ToString", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(nullptr, ___internal_method, result);
}
inline void Epic::OnlineServices::Common::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Common*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Common* Epic::OnlineServices::Common::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Common*>());
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Common::Common()   {
}
constexpr ::System::Runtime::InteropServices::CallingConvention  Epic::OnlineServices::Common::LIBRARY_CALLING_CONVENTION{static_cast<int32_t>(0x2)};
