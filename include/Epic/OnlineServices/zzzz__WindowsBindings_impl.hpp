#pragma once
// IWYU pragma private; include "Epic/OnlineServices/WindowsBindings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/zzzz__WindowsBindings_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__WindowsOptionsInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::WindowsBindings.EOS_IntegratedPlatformOptionsContainer_Add_WindowsSteam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (*)(::System::IntPtr, ::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal>)>(&::Epic::OnlineServices::WindowsBindings::EOS_IntegratedPlatformOptionsContainer_Add_WindowsSteam)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804e6590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::WindowsBindings*>(),
                        {"EOS_IntegratedPlatformOptionsContainer_Add_WindowsSteam", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::WindowsBindings.EOS_Platform_Create_Windows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::Epic::OnlineServices::Platform::WindowsOptionsInternal>)>(&::Epic::OnlineServices::WindowsBindings::EOS_Platform_Create_Windows)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804e6620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::WindowsBindings*>(),
                        {"EOS_Platform_Create_Windows", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::WindowsOptionsInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Result Epic::OnlineServices::WindowsBindings::EOS_IntegratedPlatformOptionsContainer_Add_WindowsSteam(::System::IntPtr  handle, ::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal>  inOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::WindowsBindings*>(),
                        {"EOS_IntegratedPlatformOptionsContainer_Add_WindowsSteam", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(nullptr, ___internal_method, handle, inOptions);
}
inline ::System::IntPtr Epic::OnlineServices::WindowsBindings::EOS_Platform_Create_Windows(::by_ref<::Epic::OnlineServices::Platform::WindowsOptionsInternal>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::WindowsBindings*>(),
                        {"EOS_Platform_Create_Windows", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::WindowsOptionsInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, options);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::WindowsBindings::WindowsBindings()   {
}
