#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationSetAllowedPlatformIdsOptions.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationSetAllowedPlatformIdsOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions.get_AllowedPlatformIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions::*)()>(&::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions::get_AllowedPlatformIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>(),
                        {"get_AllowedPlatformIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions.set_AllowedPlatformIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions::*)(::ArrayW<uint32_t>)>(&::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions::set_AllowedPlatformIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>(),
                        {"set_AllowedPlatformIds", {}, {::i2c::type_of<::ArrayW<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<uint32_t> Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions::get_AllowedPlatformIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>(),
                        {"get_AllowedPlatformIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions::set_AllowedPlatformIds(::ArrayW<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>(),
                        {"set_AllowedPlatformIds", {}, {::i2c::type_of<::ArrayW<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_AllowedPlatformIds_k__BackingField", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions::SessionModificationSetAllowedPlatformIdsOptions(::ArrayW<uint32_t>  _AllowedPlatformIds_k__BackingField) noexcept  {
this->_AllowedPlatformIds_k__BackingField = _AllowedPlatformIds_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions::SessionModificationSetAllowedPlatformIdsOptions()   {
}
