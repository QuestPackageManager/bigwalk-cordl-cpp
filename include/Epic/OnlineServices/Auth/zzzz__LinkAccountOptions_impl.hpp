#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LinkAccountOptions.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LinkAccountFlags_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LinkAccountOptions_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LinkAccountFlags_def.hpp"
#include "Epic/OnlineServices/zzzz__ContinuanceToken_def.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LinkAccountOptions.get_LinkAccountFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Auth::LinkAccountFlags (::Epic::OnlineServices::Auth::LinkAccountOptions::*)()>(&::Epic::OnlineServices::Auth::LinkAccountOptions::get_LinkAccountFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LinkAccountOptions>(),
                        {"get_LinkAccountFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LinkAccountOptions.set_LinkAccountFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::LinkAccountOptions::*)(::Epic::OnlineServices::Auth::LinkAccountFlags)>(&::Epic::OnlineServices::Auth::LinkAccountOptions::set_LinkAccountFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LinkAccountOptions>(),
                        {"set_LinkAccountFlags", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LinkAccountFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LinkAccountOptions.get_ContinuanceToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ContinuanceToken* (::Epic::OnlineServices::Auth::LinkAccountOptions::*)()>(&::Epic::OnlineServices::Auth::LinkAccountOptions::get_ContinuanceToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LinkAccountOptions>(),
                        {"get_ContinuanceToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LinkAccountOptions.set_ContinuanceToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::LinkAccountOptions::*)(::Epic::OnlineServices::ContinuanceToken*)>(&::Epic::OnlineServices::Auth::LinkAccountOptions::set_ContinuanceToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LinkAccountOptions>(),
                        {"set_ContinuanceToken", {}, {::i2c::type_of<::Epic::OnlineServices::ContinuanceToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LinkAccountOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::Epic::OnlineServices::Auth::LinkAccountOptions::*)()>(&::Epic::OnlineServices::Auth::LinkAccountOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LinkAccountOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LinkAccountOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::LinkAccountOptions::*)(::Epic::OnlineServices::EpicAccountId*)>(&::Epic::OnlineServices::Auth::LinkAccountOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LinkAccountOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Auth::LinkAccountFlags Epic::OnlineServices::Auth::LinkAccountOptions::get_LinkAccountFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LinkAccountOptions>(),
                        {"get_LinkAccountFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Auth::LinkAccountFlags>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::LinkAccountOptions::set_LinkAccountFlags(::Epic::OnlineServices::Auth::LinkAccountFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LinkAccountOptions>(),
                        {"set_LinkAccountFlags", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LinkAccountFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ContinuanceToken* Epic::OnlineServices::Auth::LinkAccountOptions::get_ContinuanceToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LinkAccountOptions>(),
                        {"get_ContinuanceToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ContinuanceToken*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::LinkAccountOptions::set_ContinuanceToken(::Epic::OnlineServices::ContinuanceToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LinkAccountOptions>(),
                        {"set_ContinuanceToken", {}, {::i2c::type_of<::Epic::OnlineServices::ContinuanceToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::Auth::LinkAccountOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LinkAccountOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::LinkAccountOptions::set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LinkAccountOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LinkAccountFlags_k__BackingField", ty: "::Epic::OnlineServices::Auth::LinkAccountFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ContinuanceToken_k__BackingField", ty: "::Epic::OnlineServices::ContinuanceToken*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::LinkAccountOptions::LinkAccountOptions(::Epic::OnlineServices::Auth::LinkAccountFlags  _LinkAccountFlags_k__BackingField, ::Epic::OnlineServices::ContinuanceToken*  _ContinuanceToken_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField) noexcept  {
this->_LinkAccountFlags_k__BackingField = _LinkAccountFlags_k__BackingField;
this->_ContinuanceToken_k__BackingField = _ContinuanceToken_k__BackingField;
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::LinkAccountOptions::LinkAccountOptions()   {
}
