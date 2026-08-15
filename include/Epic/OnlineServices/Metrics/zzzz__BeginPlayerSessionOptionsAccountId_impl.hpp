#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Metrics/BeginPlayerSessionOptionsAccountId.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__MetricsAccountIdType_impl.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__BeginPlayerSessionOptionsAccountId_def.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__MetricsAccountIdType_def.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId.get_Epic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::*)()>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::get_Epic)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180504350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(),
                        {"get_Epic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId.set_Epic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::*)(::Epic::OnlineServices::EpicAccountId*)>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::set_Epic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180504450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(),
                        {"set_Epic", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId.get_External
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::*)()>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::get_External)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180504370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(),
                        {"get_External", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId.set_External
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::set_External)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180504480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(),
                        {"set_External", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId.get_AccountIdType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Metrics::MetricsAccountIdType (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::*)()>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::get_AccountIdType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(),
                        {"get_AccountIdType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId.op_Implicit___Epic__OnlineServices__Metrics__BeginPlayerSessionOptionsAccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId (*)(::Epic::OnlineServices::EpicAccountId*)>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::op_Implicit___Epic__OnlineServices__Metrics__BeginPlayerSessionOptionsAccountId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805043e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId.op_Implicit___Epic__OnlineServices__Metrics__BeginPlayerSessionOptionsAccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId (*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::op_Implicit___Epic__OnlineServices__Metrics__BeginPlayerSessionOptionsAccountId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180504420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId.op_Implicit___Epic__OnlineServices__Metrics__BeginPlayerSessionOptionsAccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId (*)(::StringW)>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::op_Implicit___Epic__OnlineServices__Metrics__BeginPlayerSessionOptionsAccountId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180504390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::get_Epic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(),
                        {"get_Epic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::set_Epic(::Epic::OnlineServices::EpicAccountId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(),
                        {"set_Epic", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::get_External()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(),
                        {"get_External", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::set_External(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(),
                        {"set_External", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Metrics::MetricsAccountIdType Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::get_AccountIdType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(),
                        {"get_AccountIdType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Metrics::MetricsAccountIdType>(*this, ___internal_method);
}
inline ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::op_Implicit___Epic__OnlineServices__Metrics__BeginPlayerSessionOptionsAccountId(::Epic::OnlineServices::EpicAccountId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(nullptr, ___internal_method, value);
}
inline ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::op_Implicit___Epic__OnlineServices__Metrics__BeginPlayerSessionOptionsAccountId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(nullptr, ___internal_method, value);
}
inline ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::op_Implicit___Epic__OnlineServices__Metrics__BeginPlayerSessionOptionsAccountId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>(nullptr, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Epic", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_External", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountIdType", ty: "::Epic::OnlineServices::Metrics::MetricsAccountIdType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::BeginPlayerSessionOptionsAccountId(::Epic::OnlineServices::EpicAccountId*  m_Epic, ::Epic::OnlineServices::Utf8String*  m_External, ::Epic::OnlineServices::Metrics::MetricsAccountIdType  m_AccountIdType) noexcept  {
this->m_Epic = m_Epic;
this->m_External = m_External;
this->m_AccountIdType = m_AccountIdType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId::BeginPlayerSessionOptionsAccountId()   {
}
