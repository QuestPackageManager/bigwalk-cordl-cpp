#pragma once
// IWYU pragma private; include "Rewired/Platforms/Platform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Platform)
// Forward declare root types
namespace Rewired::Platforms {
struct Platform;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::Platform);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Platform, "Rewired.Platforms", "Platform");
// Dependencies 
namespace Rewired::Platforms {
// Is value type: true
// CS Name: Rewired.Platforms.Platform
struct CORDL_TYPE Platform {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Platform_Unwrapped
enum struct __Platform_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Windows = static_cast<int32_t>(0x1),
__E_WindowsAppStore = static_cast<int32_t>(0x2),
__E_WindowsPhone8 = static_cast<int32_t>(0x3),
__E_OSX = static_cast<int32_t>(0x4),
__E_iOS = static_cast<int32_t>(0x5),
__E_Linux = static_cast<int32_t>(0x6),
__E_Android = static_cast<int32_t>(0x7),
__E_Blackberry = static_cast<int32_t>(0x8),
__E_Webplayer = static_cast<int32_t>(0x9),
__E_Xbox360 = static_cast<int32_t>(0xa),
__E_XboxOne = static_cast<int32_t>(0xb),
__E_PS3 = static_cast<int32_t>(0xc),
__E_PS4 = static_cast<int32_t>(0xd),
__E_PSVita = static_cast<int32_t>(0xe),
__E_PSMobile = static_cast<int32_t>(0xf),
__E_Wii = static_cast<int32_t>(0x10),
__E_Flash = static_cast<int32_t>(0x11),
__E_WiiU = static_cast<int32_t>(0x12),
__E_WebGL = static_cast<int32_t>(0x13),
__E_Tizen = static_cast<int32_t>(0x14),
__E_Xenon = static_cast<int32_t>(0x15),
__E_STV = static_cast<int32_t>(0x16),
__E_NACL = static_cast<int32_t>(0x17),
__E_NACL_Webplayer = static_cast<int32_t>(0x18),
__E_NACL_Chrome = static_cast<int32_t>(0x19),
__E_SamsungTV = static_cast<int32_t>(0x1a),
__E_Pepper = static_cast<int32_t>(0x1b),
__E_tvOS = static_cast<int32_t>(0x1c),
__E_WindowsUWP = static_cast<int32_t>(0x1d),
__E_Windows81Store = static_cast<int32_t>(0x1e),
__E_N3DS = static_cast<int32_t>(0x1f),
__E_Switch = static_cast<int32_t>(0x20),
__E_Switch2 = static_cast<int32_t>(0x21),
__E_Ouya = static_cast<int32_t>(0x64),
__E_AmazonFireTV = static_cast<int32_t>(0x65),
__E_RazerForgeTV = static_cast<int32_t>(0x66),
__E_GameCoreXboxOne = static_cast<int32_t>(0x68),
__E_GameCoreScarlett = static_cast<int32_t>(0x69),
__E_PS5 = static_cast<int32_t>(0x6a),
__E_Custom = static_cast<int32_t>(0x2710),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Platform_Unwrapped () const noexcept {
return static_cast<__Platform_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Platform() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Platform(int32_t  value__) noexcept;

/// @brief Field AmazonFireTV value: I32(101)
static ::Rewired::Platforms::Platform const AmazonFireTV;

/// @brief Field Android value: I32(7)
static ::Rewired::Platforms::Platform const Android;

/// @brief Field Blackberry value: I32(8)
static ::Rewired::Platforms::Platform const Blackberry;

/// @brief Field Custom value: I32(10000)
static ::Rewired::Platforms::Platform const Custom;

/// @brief Field Flash value: I32(17)
static ::Rewired::Platforms::Platform const Flash;

/// @brief Field GameCoreScarlett value: I32(105)
static ::Rewired::Platforms::Platform const GameCoreScarlett;

/// @brief Field GameCoreXboxOne value: I32(104)
static ::Rewired::Platforms::Platform const GameCoreXboxOne;

/// @brief Field Linux value: I32(6)
static ::Rewired::Platforms::Platform const Linux;

/// @brief Field N3DS value: I32(31)
static ::Rewired::Platforms::Platform const N3DS;

/// @brief Field NACL value: I32(23)
static ::Rewired::Platforms::Platform const NACL;

/// @brief Field NACL_Chrome value: I32(25)
static ::Rewired::Platforms::Platform const NACL_Chrome;

/// @brief Field NACL_Webplayer value: I32(24)
static ::Rewired::Platforms::Platform const NACL_Webplayer;

/// @brief Field OSX value: I32(4)
static ::Rewired::Platforms::Platform const OSX;

/// @brief Field Ouya value: I32(100)
static ::Rewired::Platforms::Platform const Ouya;

/// @brief Field PS3 value: I32(12)
static ::Rewired::Platforms::Platform const PS3;

/// @brief Field PS4 value: I32(13)
static ::Rewired::Platforms::Platform const PS4;

/// @brief Field PS5 value: I32(106)
static ::Rewired::Platforms::Platform const PS5;

/// @brief Field PSMobile value: I32(15)
static ::Rewired::Platforms::Platform const PSMobile;

/// @brief Field PSVita value: I32(14)
static ::Rewired::Platforms::Platform const PSVita;

/// @brief Field Pepper value: I32(27)
static ::Rewired::Platforms::Platform const Pepper;

/// @brief Field RazerForgeTV value: I32(102)
static ::Rewired::Platforms::Platform const RazerForgeTV;

/// @brief Field STV value: I32(22)
static ::Rewired::Platforms::Platform const STV;

/// @brief Field SamsungTV value: I32(26)
static ::Rewired::Platforms::Platform const SamsungTV;

/// @brief Field Switch value: I32(32)
static ::Rewired::Platforms::Platform const Switch;

/// @brief Field Switch2 value: I32(33)
static ::Rewired::Platforms::Platform const Switch2;

/// @brief Field Tizen value: I32(20)
static ::Rewired::Platforms::Platform const Tizen;

/// @brief Field Unknown value: I32(0)
static ::Rewired::Platforms::Platform const Unknown;

/// @brief Field WebGL value: I32(19)
static ::Rewired::Platforms::Platform const WebGL;

/// @brief Field Webplayer value: I32(9)
static ::Rewired::Platforms::Platform const Webplayer;

/// @brief Field Wii value: I32(16)
static ::Rewired::Platforms::Platform const Wii;

/// @brief Field WiiU value: I32(18)
static ::Rewired::Platforms::Platform const WiiU;

/// @brief Field Windows value: I32(1)
static ::Rewired::Platforms::Platform const Windows;

/// @brief Field Windows81Store value: I32(30)
static ::Rewired::Platforms::Platform const Windows81Store;

/// @brief Field WindowsAppStore value: I32(2)
static ::Rewired::Platforms::Platform const WindowsAppStore;

/// @brief Field WindowsPhone8 value: I32(3)
static ::Rewired::Platforms::Platform const WindowsPhone8;

/// @brief Field WindowsUWP value: I32(29)
static ::Rewired::Platforms::Platform const WindowsUWP;

/// @brief Field Xbox360 value: I32(10)
static ::Rewired::Platforms::Platform const Xbox360;

/// @brief Field XboxOne value: I32(11)
static ::Rewired::Platforms::Platform const XboxOne;

/// @brief Field Xenon value: I32(21)
static ::Rewired::Platforms::Platform const Xenon;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2252};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field iOS value: I32(5)
static ::Rewired::Platforms::Platform const iOS;

/// @brief Field tvOS value: I32(28)
static ::Rewired::Platforms::Platform const tvOS;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Platform, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Platform) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms
