#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerDespawnOptions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerDespawnOptions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions.get_DespawnedPlayerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions::get_DespawnedPlayerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions>(),
                        {"get_DespawnedPlayerHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions.set_DespawnedPlayerHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions::*)(::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions::set_DespawnedPlayerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions>(),
                        {"set_DespawnedPlayerHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions::get_DespawnedPlayerHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions>(),
                        {"get_DespawnedPlayerHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions::set_DespawnedPlayerHandle(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions>(),
                        {"set_DespawnedPlayerHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_DespawnedPlayerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions::LogPlayerDespawnOptions(::System::IntPtr  _DespawnedPlayerHandle_k__BackingField) noexcept  {
this->_DespawnedPlayerHandle_k__BackingField = _DespawnedPlayerHandle_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions::LogPlayerDespawnOptions()   {
}
