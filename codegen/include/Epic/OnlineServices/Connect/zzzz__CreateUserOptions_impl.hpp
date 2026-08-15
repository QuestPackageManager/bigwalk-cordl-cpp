#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/CreateUserOptions.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CreateUserOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ContinuanceToken_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::CreateUserOptions.get_ContinuanceToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ContinuanceToken* (::Epic::OnlineServices::Connect::CreateUserOptions::*)()>(&::Epic::OnlineServices::Connect::CreateUserOptions::get_ContinuanceToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CreateUserOptions>(),
                        {"get_ContinuanceToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::CreateUserOptions.set_ContinuanceToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::CreateUserOptions::*)(::Epic::OnlineServices::ContinuanceToken*)>(&::Epic::OnlineServices::Connect::CreateUserOptions::set_ContinuanceToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CreateUserOptions>(),
                        {"set_ContinuanceToken", {}, {::i2c::type_of<::Epic::OnlineServices::ContinuanceToken*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ContinuanceToken* Epic::OnlineServices::Connect::CreateUserOptions::get_ContinuanceToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CreateUserOptions>(),
                        {"get_ContinuanceToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ContinuanceToken*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::CreateUserOptions::set_ContinuanceToken(::Epic::OnlineServices::ContinuanceToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CreateUserOptions>(),
                        {"set_ContinuanceToken", {}, {::i2c::type_of<::Epic::OnlineServices::ContinuanceToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_ContinuanceToken_k__BackingField", ty: "::Epic::OnlineServices::ContinuanceToken*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Connect::CreateUserOptions::CreateUserOptions(::Epic::OnlineServices::ContinuanceToken*  _ContinuanceToken_k__BackingField) noexcept  {
this->_ContinuanceToken_k__BackingField = _ContinuanceToken_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::CreateUserOptions::CreateUserOptions()   {
}
