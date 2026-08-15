#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerUseWeaponOptions.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerUseWeaponData_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerUseWeaponOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerUseWeaponData_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions.get_UseWeaponData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData> (::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions::get_UseWeaponData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180511600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions>(),
                        {"get_UseWeaponData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions.set_UseWeaponData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions::*)(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions::set_UseWeaponData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18051ea00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions>(),
                        {"set_UseWeaponData", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData> Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions::get_UseWeaponData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions>(),
                        {"get_UseWeaponData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions::set_UseWeaponData(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions>(),
                        {"set_UseWeaponData", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_UseWeaponData_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions::LogPlayerUseWeaponOptions(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>  _UseWeaponData_k__BackingField) noexcept  {
this->_UseWeaponData_k__BackingField = _UseWeaponData_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions::LogPlayerUseWeaponOptions()   {
}
