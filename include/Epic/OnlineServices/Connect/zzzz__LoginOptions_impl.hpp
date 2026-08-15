#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/LoginOptions.hpp"
#include "Epic/OnlineServices/Connect/zzzz__Credentials_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__UserLoginInfo_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LoginOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__Credentials_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__UserLoginInfo_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::LoginOptions.get_Credentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Connect::Credentials> (::Epic::OnlineServices::Connect::LoginOptions::*)()>(&::Epic::OnlineServices::Connect::LoginOptions::get_Credentials)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180503ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::LoginOptions>(),
                        {"get_Credentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::LoginOptions.set_Credentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::LoginOptions::*)(::System::Nullable_1<::Epic::OnlineServices::Connect::Credentials>)>(&::Epic::OnlineServices::Connect::LoginOptions::set_Credentials)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18051ea80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::LoginOptions>(),
                        {"set_Credentials", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Connect::Credentials>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::LoginOptions.get_UserLoginInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Connect::UserLoginInfo> (::Epic::OnlineServices::Connect::LoginOptions::*)()>(&::Epic::OnlineServices::Connect::LoginOptions::get_UserLoginInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e66a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::LoginOptions>(),
                        {"get_UserLoginInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::LoginOptions.set_UserLoginInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::LoginOptions::*)(::System::Nullable_1<::Epic::OnlineServices::Connect::UserLoginInfo>)>(&::Epic::OnlineServices::Connect::LoginOptions::set_UserLoginInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e66c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::LoginOptions>(),
                        {"set_UserLoginInfo", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Connect::UserLoginInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::Epic::OnlineServices::Connect::Credentials> Epic::OnlineServices::Connect::LoginOptions::get_Credentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::LoginOptions>(),
                        {"get_Credentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Connect::Credentials>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::LoginOptions::set_Credentials(::System::Nullable_1<::Epic::OnlineServices::Connect::Credentials>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::LoginOptions>(),
                        {"set_Credentials", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Connect::Credentials>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Connect::UserLoginInfo> Epic::OnlineServices::Connect::LoginOptions::get_UserLoginInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::LoginOptions>(),
                        {"get_UserLoginInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Connect::UserLoginInfo>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::LoginOptions::set_UserLoginInfo(::System::Nullable_1<::Epic::OnlineServices::Connect::UserLoginInfo>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::LoginOptions>(),
                        {"set_UserLoginInfo", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Connect::UserLoginInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Credentials_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Connect::Credentials>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_UserLoginInfo_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Connect::UserLoginInfo>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Connect::LoginOptions::LoginOptions(::System::Nullable_1<::Epic::OnlineServices::Connect::Credentials>  _Credentials_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Connect::UserLoginInfo>  _UserLoginInfo_k__BackingField) noexcept  {
this->_Credentials_k__BackingField = _Credentials_k__BackingField;
this->_UserLoginInfo_k__BackingField = _UserLoginInfo_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::LoginOptions::LoginOptions()   {
}
