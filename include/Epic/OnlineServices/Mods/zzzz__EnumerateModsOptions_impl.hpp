#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/EnumerateModsOptions.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModEnumerationType_impl.hpp"
#include "Epic/OnlineServices/Mods/zzzz__EnumerateModsOptions_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModEnumerationType_def.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Mods::EnumerateModsOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::Epic::OnlineServices::Mods::EnumerateModsOptions::*)()>(&::Epic::OnlineServices::Mods::EnumerateModsOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::EnumerateModsOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::EnumerateModsOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::EnumerateModsOptions::*)(::Epic::OnlineServices::EpicAccountId*)>(&::Epic::OnlineServices::Mods::EnumerateModsOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::EnumerateModsOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::EnumerateModsOptions.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Mods::ModEnumerationType (::Epic::OnlineServices::Mods::EnumerateModsOptions::*)()>(&::Epic::OnlineServices::Mods::EnumerateModsOptions::get_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::EnumerateModsOptions>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::EnumerateModsOptions.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::EnumerateModsOptions::*)(::Epic::OnlineServices::Mods::ModEnumerationType)>(&::Epic::OnlineServices::Mods::EnumerateModsOptions::set_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::EnumerateModsOptions>(),
                        {"set_Type", {}, {::i2c::type_of<::Epic::OnlineServices::Mods::ModEnumerationType>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::Mods::EnumerateModsOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::EnumerateModsOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Mods::EnumerateModsOptions::set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::EnumerateModsOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Mods::ModEnumerationType Epic::OnlineServices::Mods::EnumerateModsOptions::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::EnumerateModsOptions>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Mods::ModEnumerationType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Mods::EnumerateModsOptions::set_Type(::Epic::OnlineServices::Mods::ModEnumerationType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::EnumerateModsOptions>(),
                        {"set_Type", {}, {::i2c::type_of<::Epic::OnlineServices::Mods::ModEnumerationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Type_k__BackingField", ty: "::Epic::OnlineServices::Mods::ModEnumerationType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Mods::EnumerateModsOptions::EnumerateModsOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Mods::ModEnumerationType  _Type_k__BackingField) noexcept  {
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_Type_k__BackingField = _Type_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Mods::EnumerateModsOptions::EnumerateModsOptions()   {
}
