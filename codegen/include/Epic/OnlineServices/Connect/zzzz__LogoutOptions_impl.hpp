#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/LogoutOptions.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LogoutOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::LogoutOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Connect::LogoutOptions::*)()>(&::Epic::OnlineServices::Connect::LogoutOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::LogoutOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::LogoutOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::LogoutOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Connect::LogoutOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::LogoutOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Connect::LogoutOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::LogoutOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::LogoutOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::LogoutOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Connect::LogoutOptions::LogoutOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField) noexcept  {
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::LogoutOptions::LogoutOptions()   {
}
