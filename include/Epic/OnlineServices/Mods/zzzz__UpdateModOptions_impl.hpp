#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/UpdateModOptions.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModIdentifier_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Mods/zzzz__UpdateModOptions_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModIdentifier_def.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Mods::UpdateModOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::Epic::OnlineServices::Mods::UpdateModOptions::*)()>(&::Epic::OnlineServices::Mods::UpdateModOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::UpdateModOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::UpdateModOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::UpdateModOptions::*)(::Epic::OnlineServices::EpicAccountId*)>(&::Epic::OnlineServices::Mods::UpdateModOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::UpdateModOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::UpdateModOptions.get_Mod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier> (::Epic::OnlineServices::Mods::UpdateModOptions::*)()>(&::Epic::OnlineServices::Mods::UpdateModOptions::get_Mod)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180503c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::UpdateModOptions>(),
                        {"get_Mod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Mods::UpdateModOptions.set_Mod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Mods::UpdateModOptions::*)(::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>)>(&::Epic::OnlineServices::Mods::UpdateModOptions::set_Mod)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180503c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::UpdateModOptions>(),
                        {"set_Mod", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::Mods::UpdateModOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::UpdateModOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Mods::UpdateModOptions::set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::UpdateModOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier> Epic::OnlineServices::Mods::UpdateModOptions::get_Mod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::UpdateModOptions>(),
                        {"get_Mod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Mods::UpdateModOptions::set_Mod(::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Mods::UpdateModOptions>(),
                        {"set_Mod", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Mod_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Mods::UpdateModOptions::UpdateModOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>  _Mod_k__BackingField) noexcept  {
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_Mod_k__BackingField = _Mod_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Mods::UpdateModOptions::UpdateModOptions()   {
}
