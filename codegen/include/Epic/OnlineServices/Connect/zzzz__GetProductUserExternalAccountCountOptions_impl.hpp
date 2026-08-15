#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/GetProductUserExternalAccountCountOptions.hpp"
#include "Epic/OnlineServices/Connect/zzzz__GetProductUserExternalAccountCountOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions.get_TargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions::*)()>(&::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions::get_TargetUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions>(),
                        {"get_TargetUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions.set_TargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions::set_TargetUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions>(),
                        {"set_TargetUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions::get_TargetUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions>(),
                        {"get_TargetUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions::set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions>(),
                        {"set_TargetUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions::GetProductUserExternalAccountCountOptions(::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField) noexcept  {
this->_TargetUserId_k__BackingField = _TargetUserId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions::GetProductUserExternalAccountCountOptions()   {
}
