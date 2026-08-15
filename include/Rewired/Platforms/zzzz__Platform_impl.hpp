#pragma once
// IWYU pragma private; include "Rewired/Platforms/Platform.hpp"
#include "Rewired/Platforms/zzzz__Platform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::Platform::Platform(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Platform::Platform()   {
}
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::Windows{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::WindowsAppStore{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::WindowsPhone8{static_cast<int32_t>(0x3)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::OSX{static_cast<int32_t>(0x4)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::iOS{static_cast<int32_t>(0x5)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::Linux{static_cast<int32_t>(0x6)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::Android{static_cast<int32_t>(0x7)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::Blackberry{static_cast<int32_t>(0x8)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::Webplayer{static_cast<int32_t>(0x9)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::Xbox360{static_cast<int32_t>(0xa)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::XboxOne{static_cast<int32_t>(0xb)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::PS3{static_cast<int32_t>(0xc)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::PS4{static_cast<int32_t>(0xd)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::PSVita{static_cast<int32_t>(0xe)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::PSMobile{static_cast<int32_t>(0xf)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::Wii{static_cast<int32_t>(0x10)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::Flash{static_cast<int32_t>(0x11)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::WiiU{static_cast<int32_t>(0x12)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::WebGL{static_cast<int32_t>(0x13)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::Tizen{static_cast<int32_t>(0x14)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::Xenon{static_cast<int32_t>(0x15)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::STV{static_cast<int32_t>(0x16)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::NACL{static_cast<int32_t>(0x17)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::NACL_Webplayer{static_cast<int32_t>(0x18)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::NACL_Chrome{static_cast<int32_t>(0x19)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::SamsungTV{static_cast<int32_t>(0x1a)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::Pepper{static_cast<int32_t>(0x1b)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::tvOS{static_cast<int32_t>(0x1c)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::WindowsUWP{static_cast<int32_t>(0x1d)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::Windows81Store{static_cast<int32_t>(0x1e)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::N3DS{static_cast<int32_t>(0x1f)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::Switch{static_cast<int32_t>(0x20)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::Switch2{static_cast<int32_t>(0x21)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::Ouya{static_cast<int32_t>(0x64)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::AmazonFireTV{static_cast<int32_t>(0x65)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::RazerForgeTV{static_cast<int32_t>(0x66)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::GameCoreXboxOne{static_cast<int32_t>(0x68)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::GameCoreScarlett{static_cast<int32_t>(0x69)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::PS5{static_cast<int32_t>(0x6a)};
constexpr ::Rewired::Platforms::Platform  Rewired::Platforms::Platform::Custom{static_cast<int32_t>(0x2710)};
