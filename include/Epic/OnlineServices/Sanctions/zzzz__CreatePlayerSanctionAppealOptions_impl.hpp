#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/CreatePlayerSanctionAppealOptions.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__SanctionAppealReason_impl.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__CreatePlayerSanctionAppealOptions_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__SanctionAppealReason_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::*)()>(&::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions.get_Reason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sanctions::SanctionAppealReason (::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::*)()>(&::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::get_Reason)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>(),
                        {"get_Reason", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions.set_Reason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::*)(::Epic::OnlineServices::Sanctions::SanctionAppealReason)>(&::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::set_Reason)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>(),
                        {"set_Reason", {}, {::i2c::type_of<::Epic::OnlineServices::Sanctions::SanctionAppealReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions.get_ReferenceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::*)()>(&::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::get_ReferenceId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>(),
                        {"get_ReferenceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions.set_ReferenceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::set_ReferenceId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>(),
                        {"set_ReferenceId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Sanctions::SanctionAppealReason Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::get_Reason()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>(),
                        {"get_Reason", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sanctions::SanctionAppealReason>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::set_Reason(::Epic::OnlineServices::Sanctions::SanctionAppealReason  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>(),
                        {"set_Reason", {}, {::i2c::type_of<::Epic::OnlineServices::Sanctions::SanctionAppealReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::get_ReferenceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>(),
                        {"get_ReferenceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::set_ReferenceId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>(),
                        {"set_ReferenceId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Reason_k__BackingField", ty: "::Epic::OnlineServices::Sanctions::SanctionAppealReason", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ReferenceId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::CreatePlayerSanctionAppealOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Sanctions::SanctionAppealReason  _Reason_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ReferenceId_k__BackingField) noexcept  {
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_Reason_k__BackingField = _Reason_k__BackingField;
this->_ReferenceId_k__BackingField = _ReferenceId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions::CreatePlayerSanctionAppealOptions()   {
}
