#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/WindowsSteamIntegratedPlatformOptionsContainerAddOptions.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__WindowsSteamOptions_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__WindowsSteamIntegratedPlatformOptionsContainerAddOptions_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__WindowsSteamOptions_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions.get_Options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions> (::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions::*)()>(&::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions::get_Options)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180511600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>(),
                        {"get_Options", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions.set_Options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions::*)(::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>)>(&::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions::set_Options)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180511630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>(),
                        {"set_Options", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions> Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions::get_Options()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>(),
                        {"get_Options", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions::set_Options(::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>(),
                        {"set_Options", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Options_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions::WindowsSteamIntegratedPlatformOptionsContainerAddOptions(::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>  _Options_k__BackingField) noexcept  {
this->_Options_k__BackingField = _Options_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions::WindowsSteamIntegratedPlatformOptionsContainerAddOptions()   {
}
