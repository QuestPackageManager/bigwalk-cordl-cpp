#pragma once
// IWYU pragma private; include "Epic/OnlineServices/EpicAccountId.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::EpicAccountId._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::EpicAccountId::*)()>(&::Epic::OnlineServices::EpicAccountId::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::EpicAccountId._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::EpicAccountId::*)(::System::IntPtr)>(&::Epic::OnlineServices::EpicAccountId::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::EpicAccountId.FromString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::EpicAccountId::FromString)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1804d87c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(),
                        {"FromString", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::EpicAccountId.op_Explicit___Epic__OnlineServices__EpicAccountId_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::EpicAccountId::op_Explicit___Epic__OnlineServices__EpicAccountId_)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1804d87c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::EpicAccountId.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::EpicAccountId::*)()>(&::Epic::OnlineServices::EpicAccountId::IsValid)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804d88f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::EpicAccountId.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::EpicAccountId::*)(::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::EpicAccountId::ToString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804d89e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(),
                        {"ToString", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::EpicAccountId.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Epic::OnlineServices::EpicAccountId::*)()>(&::Epic::OnlineServices::EpicAccountId::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804d8970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(),
                    {::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::EpicAccountId.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Epic::OnlineServices::EpicAccountId::*)(::StringW, ::System::IFormatProvider*)>(&::Epic::OnlineServices::EpicAccountId::ToString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804d7290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(),
                    {::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::EpicAccountId.op_Explicit___Epic__OnlineServices__Utf8String_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (*)(::Epic::OnlineServices::EpicAccountId*)>(&::Epic::OnlineServices::EpicAccountId::op_Explicit___Epic__OnlineServices__Utf8String_)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804d8ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::EpicAccountId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::EpicAccountId::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::EpicAccountId::FromString(::Epic::OnlineServices::Utf8String*  accountIdString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(),
                        {"FromString", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(nullptr, ___internal_method, accountIdString);
}
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::EpicAccountId::op_Explicit___Epic__OnlineServices__EpicAccountId_(::Epic::OnlineServices::Utf8String*  accountIdString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(nullptr, ___internal_method, accountIdString);
}
inline bool Epic::OnlineServices::EpicAccountId::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::EpicAccountId::ToString(::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(),
                        {"ToString", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, outBuffer);
}
inline ::StringW Epic::OnlineServices::EpicAccountId::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Epic::OnlineServices::EpicAccountId::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, format, formatProvider);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::EpicAccountId::op_Explicit___Epic__OnlineServices__Utf8String_(::Epic::OnlineServices::EpicAccountId*  accountId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::EpicAccountId*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(nullptr, ___internal_method, accountId);
}
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::EpicAccountId::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::EpicAccountId*>());
}
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::EpicAccountId::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::EpicAccountId*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::EpicAccountId::EpicAccountId()   {
}
