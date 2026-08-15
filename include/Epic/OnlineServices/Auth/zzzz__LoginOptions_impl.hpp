#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LoginOptions.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AuthScopeFlags_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__Credentials_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginFlags_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginOptions_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AuthScopeFlags_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__Credentials_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginFlags_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginOptions.get_Credentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Auth::Credentials> (::Epic::OnlineServices::Auth::LoginOptions::*)()>(&::Epic::OnlineServices::Auth::LoginOptions::get_Credentials)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18051ea60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginOptions>(),
                        {"get_Credentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginOptions.set_Credentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::LoginOptions::*)(::System::Nullable_1<::Epic::OnlineServices::Auth::Credentials>)>(&::Epic::OnlineServices::Auth::LoginOptions::set_Credentials)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180379000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginOptions>(),
                        {"set_Credentials", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Auth::Credentials>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginOptions.get_ScopeFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Auth::AuthScopeFlags (::Epic::OnlineServices::Auth::LoginOptions::*)()>(&::Epic::OnlineServices::Auth::LoginOptions::get_ScopeFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginOptions>(),
                        {"get_ScopeFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginOptions.set_ScopeFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::LoginOptions::*)(::Epic::OnlineServices::Auth::AuthScopeFlags)>(&::Epic::OnlineServices::Auth::LoginOptions::set_ScopeFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginOptions>(),
                        {"set_ScopeFlags", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::AuthScopeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginOptions.get_LoginFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Auth::LoginFlags (::Epic::OnlineServices::Auth::LoginOptions::*)()>(&::Epic::OnlineServices::Auth::LoginOptions::get_LoginFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginOptions>(),
                        {"get_LoginFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::LoginOptions.set_LoginFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::LoginOptions::*)(::Epic::OnlineServices::Auth::LoginFlags)>(&::Epic::OnlineServices::Auth::LoginOptions::set_LoginFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803c8fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginOptions>(),
                        {"set_LoginFlags", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LoginFlags>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::Epic::OnlineServices::Auth::Credentials> Epic::OnlineServices::Auth::LoginOptions::get_Credentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginOptions>(),
                        {"get_Credentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Auth::Credentials>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::LoginOptions::set_Credentials(::System::Nullable_1<::Epic::OnlineServices::Auth::Credentials>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginOptions>(),
                        {"set_Credentials", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Auth::Credentials>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Auth::AuthScopeFlags Epic::OnlineServices::Auth::LoginOptions::get_ScopeFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginOptions>(),
                        {"get_ScopeFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Auth::AuthScopeFlags>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::LoginOptions::set_ScopeFlags(::Epic::OnlineServices::Auth::AuthScopeFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginOptions>(),
                        {"set_ScopeFlags", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::AuthScopeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Auth::LoginFlags Epic::OnlineServices::Auth::LoginOptions::get_LoginFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginOptions>(),
                        {"get_LoginFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Auth::LoginFlags>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::LoginOptions::set_LoginFlags(::Epic::OnlineServices::Auth::LoginFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::LoginOptions>(),
                        {"set_LoginFlags", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LoginFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Credentials_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Auth::Credentials>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ScopeFlags_k__BackingField", ty: "::Epic::OnlineServices::Auth::AuthScopeFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LoginFlags_k__BackingField", ty: "::Epic::OnlineServices::Auth::LoginFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::LoginOptions::LoginOptions(::System::Nullable_1<::Epic::OnlineServices::Auth::Credentials>  _Credentials_k__BackingField, ::Epic::OnlineServices::Auth::AuthScopeFlags  _ScopeFlags_k__BackingField, ::Epic::OnlineServices::Auth::LoginFlags  _LoginFlags_k__BackingField) noexcept  {
this->_Credentials_k__BackingField = _Credentials_k__BackingField;
this->_ScopeFlags_k__BackingField = _ScopeFlags_k__BackingField;
this->_LoginFlags_k__BackingField = _LoginFlags_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::LoginOptions::LoginOptions()   {
}
