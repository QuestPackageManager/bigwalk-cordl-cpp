#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/VerifyUserAuthOptions.hpp"
#include "Epic/OnlineServices/Auth/zzzz__Token_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__VerifyUserAuthOptions_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__Token_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::VerifyUserAuthOptions.get_AuthToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Auth::Token> (::Epic::OnlineServices::Auth::VerifyUserAuthOptions::*)()>(&::Epic::OnlineServices::Auth::VerifyUserAuthOptions::get_AuthToken)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18051eb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>(),
                        {"get_AuthToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::VerifyUserAuthOptions.set_AuthToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::VerifyUserAuthOptions::*)(::System::Nullable_1<::Epic::OnlineServices::Auth::Token>)>(&::Epic::OnlineServices::Auth::VerifyUserAuthOptions::set_AuthToken)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18051eb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>(),
                        {"set_AuthToken", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Auth::Token>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::Epic::OnlineServices::Auth::Token> Epic::OnlineServices::Auth::VerifyUserAuthOptions::get_AuthToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>(),
                        {"get_AuthToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Auth::Token>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::VerifyUserAuthOptions::set_AuthToken(::System::Nullable_1<::Epic::OnlineServices::Auth::Token>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>(),
                        {"set_AuthToken", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Auth::Token>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_AuthToken_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Auth::Token>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::VerifyUserAuthOptions::VerifyUserAuthOptions(::System::Nullable_1<::Epic::OnlineServices::Auth::Token>  _AuthToken_k__BackingField) noexcept  {
this->_AuthToken_k__BackingField = _AuthToken_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::VerifyUserAuthOptions::VerifyUserAuthOptions()   {
}
