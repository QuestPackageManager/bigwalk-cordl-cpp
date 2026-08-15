#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/VerifyIdTokenOptions.hpp"
#include "Epic/OnlineServices/Auth/zzzz__IdToken_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__VerifyIdTokenOptions_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__IdToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::VerifyIdTokenOptions.get_IdToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Auth::IdToken> (::Epic::OnlineServices::Auth::VerifyIdTokenOptions::*)()>(&::Epic::OnlineServices::Auth::VerifyIdTokenOptions::get_IdToken)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180503ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>(),
                        {"get_IdToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::VerifyIdTokenOptions.set_IdToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::VerifyIdTokenOptions::*)(::System::Nullable_1<::Epic::OnlineServices::Auth::IdToken>)>(&::Epic::OnlineServices::Auth::VerifyIdTokenOptions::set_IdToken)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18051ea80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>(),
                        {"set_IdToken", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Auth::IdToken>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::Epic::OnlineServices::Auth::IdToken> Epic::OnlineServices::Auth::VerifyIdTokenOptions::get_IdToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>(),
                        {"get_IdToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Auth::IdToken>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::VerifyIdTokenOptions::set_IdToken(::System::Nullable_1<::Epic::OnlineServices::Auth::IdToken>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>(),
                        {"set_IdToken", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Auth::IdToken>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_IdToken_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Auth::IdToken>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::VerifyIdTokenOptions::VerifyIdTokenOptions(::System::Nullable_1<::Epic::OnlineServices::Auth::IdToken>  _IdToken_k__BackingField) noexcept  {
this->_IdToken_k__BackingField = _IdToken_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::VerifyIdTokenOptions::VerifyIdTokenOptions()   {
}
