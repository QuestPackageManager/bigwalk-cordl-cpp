#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/DualShock4Driver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__WLETGeuJfanxUuxlAoBgHTRHTfCG_def.hpp"
#include "GlobalNamespace/zzzz__wSkslqxSrZMOTLFbNIgclblyAsJM_def.hpp"
#include "Rewired/HID/Drivers/zzzz__HIDDeviceDriver_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DualShock4Driver)
namespace GlobalNamespace {
class LdaHIPkymkZGKHeprsIpIeEZUAne_RRCOzFgkDVcNqTPPzYdXoorxtWag;
}
namespace GlobalNamespace {
struct fmjOcSgFrjmQzJlrXgwToxkjNXXo;
}
namespace GlobalNamespace {
struct hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData;
}
namespace GlobalNamespace {
class nxSccnjzMkUjLoMzgjhhzPVcPAxF;
}
namespace Rewired::ControllerExtensions {
class IHIDControllerExtension;
}
namespace Rewired::HID::Drivers {
struct DualShock4Driver_DdacNBewgGjxAFoAjvmIxhYiLRhL;
}
namespace Rewired::HID::Drivers {
struct DualShock4Driver_DnZEKtOLUNDSTCtWVkueDihAOlkUA;
}
namespace Rewired::HID::Drivers {
class DualShock4Driver_PAdGOMbgoZilgPTvdBGaWVAxENhhA;
}
namespace Rewired::HID::Drivers {
struct DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ;
}
namespace Rewired::HID::Drivers {
class HIDDeviceDriver_IHIDDevice;
}
namespace Rewired::HID::Drivers {
class HIDDeviceDriver_InitArgs;
}
namespace Rewired::HID::Drivers {
class IControllerDriver;
}
namespace Rewired::HID::Drivers {
class IDriver_DualShock4;
}
namespace Rewired::Utils::Classes::Data {
class NativeBuffer;
}
namespace Rewired::Utils::Classes::Data {
template<typename T>
class RingBuffer_1;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Rewired::HID::Drivers {
struct DualShock4Driver_DdacNBewgGjxAFoAjvmIxhYiLRhL;
}
namespace Rewired::HID::Drivers {
struct DualShock4Driver_DnZEKtOLUNDSTCtWVkueDihAOlkUA;
}
namespace Rewired::HID::Drivers {
struct DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ;
}
namespace Rewired::HID::Drivers {
class DualShock4Driver;
}
namespace Rewired::HID::Drivers {
class DualShock4Driver_PAdGOMbgoZilgPTvdBGaWVAxENhhA;
}
// Write type traits
MARK_VAL_T(::Rewired::HID::Drivers::DualShock4Driver_DdacNBewgGjxAFoAjvmIxhYiLRhL);
MARK_VAL_T(::Rewired::HID::Drivers::DualShock4Driver_DnZEKtOLUNDSTCtWVkueDihAOlkUA);
MARK_VAL_T(::Rewired::HID::Drivers::DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ);
MARK_REF_T(::Rewired::HID::Drivers::DualShock4Driver*);
MARK_REF_T(::Rewired::HID::Drivers::DualShock4Driver_PAdGOMbgoZilgPTvdBGaWVAxENhhA*);
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::DualShock4Driver_DdacNBewgGjxAFoAjvmIxhYiLRhL, "Rewired.HID.Drivers", "DualShock4Driver/DdacNBewgGjxAFoAjvmIxhYiLRhL");
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::DualShock4Driver_DnZEKtOLUNDSTCtWVkueDihAOlkUA, "Rewired.HID.Drivers", "DualShock4Driver/DnZEKtOLUNDSTCtWVkueDihAOlkUA");
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ, "Rewired.HID.Drivers", "DualShock4Driver/nmKxCglDPAyUaUDHaiNQJeQrZWrZ");
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::DualShock4Driver*, "Rewired.HID.Drivers", "DualShock4Driver");
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::DualShock4Driver_PAdGOMbgoZilgPTvdBGaWVAxENhhA*, "Rewired.HID.Drivers", "DualShock4Driver/PAdGOMbgoZilgPTvdBGaWVAxENhhA");
// Dependencies 
namespace Rewired::HID::Drivers {
// Is value type: true
// CS Name: Rewired.HID.Drivers.DualShock4Driver/DdacNBewgGjxAFoAjvmIxhYiLRhL
struct CORDL_TYPE DualShock4Driver_DdacNBewgGjxAFoAjvmIxhYiLRhL {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DualShock4Driver_DdacNBewgGjxAFoAjvmIxhYiLRhL_Unwrapped
enum struct __DualShock4Driver_DdacNBewgGjxAFoAjvmIxhYiLRhL_Unwrapped : int32_t {
__E_X = static_cast<int32_t>(0x0),
__E_Y = static_cast<int32_t>(0x1),
__E_Z = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DualShock4Driver_DdacNBewgGjxAFoAjvmIxhYiLRhL_Unwrapped () const noexcept {
return static_cast<__DualShock4Driver_DdacNBewgGjxAFoAjvmIxhYiLRhL_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DualShock4Driver_DdacNBewgGjxAFoAjvmIxhYiLRhL() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DualShock4Driver_DdacNBewgGjxAFoAjvmIxhYiLRhL(int32_t  value__) noexcept;

/// @brief Field X value: I32(0)
static ::Rewired::HID::Drivers::DualShock4Driver_DdacNBewgGjxAFoAjvmIxhYiLRhL const X;

/// @brief Field Y value: I32(1)
static ::Rewired::HID::Drivers::DualShock4Driver_DdacNBewgGjxAFoAjvmIxhYiLRhL const Y;

/// @brief Field Z value: I32(2)
static ::Rewired::HID::Drivers::DualShock4Driver_DdacNBewgGjxAFoAjvmIxhYiLRhL const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6614};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver_DdacNBewgGjxAFoAjvmIxhYiLRhL, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::HID::Drivers::DualShock4Driver_DdacNBewgGjxAFoAjvmIxhYiLRhL) == 0x4, "Size mismatch!");

} // namespace end def Rewired::HID::Drivers
// Dependencies 
namespace Rewired::HID::Drivers {
// Is value type: true
// CS Name: Rewired.HID.Drivers.DualShock4Driver/DnZEKtOLUNDSTCtWVkueDihAOlkUA
struct CORDL_TYPE DualShock4Driver_DnZEKtOLUNDSTCtWVkueDihAOlkUA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DualShock4Driver_DnZEKtOLUNDSTCtWVkueDihAOlkUA_Unwrapped
enum struct __DualShock4Driver_DnZEKtOLUNDSTCtWVkueDihAOlkUA_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_XZ = static_cast<int32_t>(0x1),
__E_Y = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DualShock4Driver_DnZEKtOLUNDSTCtWVkueDihAOlkUA_Unwrapped () const noexcept {
return static_cast<__DualShock4Driver_DnZEKtOLUNDSTCtWVkueDihAOlkUA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DualShock4Driver_DnZEKtOLUNDSTCtWVkueDihAOlkUA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DualShock4Driver_DnZEKtOLUNDSTCtWVkueDihAOlkUA(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::Rewired::HID::Drivers::DualShock4Driver_DnZEKtOLUNDSTCtWVkueDihAOlkUA const None;

/// @brief Field XZ value: I32(1)
static ::Rewired::HID::Drivers::DualShock4Driver_DnZEKtOLUNDSTCtWVkueDihAOlkUA const XZ;

/// @brief Field Y value: I32(2)
static ::Rewired::HID::Drivers::DualShock4Driver_DnZEKtOLUNDSTCtWVkueDihAOlkUA const Y;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6615};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver_DnZEKtOLUNDSTCtWVkueDihAOlkUA, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::HID::Drivers::DualShock4Driver_DnZEKtOLUNDSTCtWVkueDihAOlkUA) == 0x4, "Size mismatch!");

} // namespace end def Rewired::HID::Drivers
// Dependencies System.Object
namespace Rewired::HID::Drivers {
// Is value type: false
// CS Name: Rewired.HID.Drivers.DualShock4Driver/PAdGOMbgoZilgPTvdBGaWVAxENhhA
class CORDL_TYPE DualShock4Driver_PAdGOMbgoZilgPTvdBGaWVAxENhhA : public ::System::Object {
public:
// Declarations
/// @brief Method PwkXaaJvZwKlETWFVpxIgnUqlDOU, addr 0x181ab8fb0, size 0x170, virtual false, abstract: false, final false
static inline uint32_t PwkXaaJvZwKlETWFVpxIgnUqlDOU(uint8_t*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, uint32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method RVKrwytxsCavzfhERyqgCJGauVjW, addr 0x181ab9120, size 0x20, virtual false, abstract: false, final false
static inline uint32_t RVKrwytxsCavzfhERyqgCJGauVjW(uint32_t  _cordl_fixed_empty_name_whitespace, uint8_t*  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method ptEdonRToxDsjkKfmZsMPkBvXrQSA, addr 0x181ab9140, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t ptEdonRToxDsjkKfmZsMPkBvXrQSA(uint32_t  _cordl_fixed_empty_name_whitespace, uint8_t*  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, uint32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DualShock4Driver_PAdGOMbgoZilgPTvdBGaWVAxENhhA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DualShock4Driver_PAdGOMbgoZilgPTvdBGaWVAxENhhA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DualShock4Driver_PAdGOMbgoZilgPTvdBGaWVAxENhhA(DualShock4Driver_PAdGOMbgoZilgPTvdBGaWVAxENhhA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DualShock4Driver_PAdGOMbgoZilgPTvdBGaWVAxENhhA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DualShock4Driver_PAdGOMbgoZilgPTvdBGaWVAxENhhA(DualShock4Driver_PAdGOMbgoZilgPTvdBGaWVAxENhhA const& ) = delete;

/// @brief Field ZCfeVaxgjErzZWhsbATLMfspEFAz offset 0xffffffff size 0x4
static constexpr uint32_t  ZCfeVaxgjErzZWhsbATLMfspEFAz{static_cast<uint32_t>(0xedb88320u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6616};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::HID::Drivers::DualShock4Driver_PAdGOMbgoZilgPTvdBGaWVAxENhhA) == 0x10, "Size mismatch!");

} // namespace end def Rewired::HID::Drivers
// Dependencies 
namespace Rewired::HID::Drivers {
// Is value type: true
// CS Name: Rewired.HID.Drivers.DualShock4Driver/nmKxCglDPAyUaUDHaiNQJeQrZWrZ
struct CORDL_TYPE DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ_Unwrapped
enum struct __DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ_Unwrapped : int32_t {
__E_Discharging = static_cast<int32_t>(0x0),
__E_Charging = static_cast<int32_t>(0x1),
__E_Full = static_cast<int32_t>(0x2),
__E_Unknown = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ_Unwrapped () const noexcept {
return static_cast<__DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ(int32_t  value__) noexcept;

/// @brief Field Charging value: I32(1)
static ::Rewired::HID::Drivers::DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ const Charging;

/// @brief Field Discharging value: I32(0)
static ::Rewired::HID::Drivers::DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ const Discharging;

/// @brief Field Full value: I32(2)
static ::Rewired::HID::Drivers::DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ const Full;

/// @brief Field Unknown value: I32(3)
static ::Rewired::HID::Drivers::DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6617};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::HID::Drivers::DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ) == 0x4, "Size mismatch!");

} // namespace end def Rewired::HID::Drivers
// Dependencies Rewired.HID.Drivers.DualShock4Driver::nmKxCglDPAyUaUDHaiNQJeQrZWrZ, Rewired.HID.Drivers.HIDDeviceDriver, Rewired.HID.Drivers.HIDDeviceDriver::HIDProperties, UnityEngine.Quaternion, WLETGeuJfanxUuxlAoBgHTRHTfCG, wSkslqxSrZMOTLFbNIgclblyAsJM
namespace Rewired::HID::Drivers {
// Is value type: false
// CS Name: Rewired.HID.Drivers.DualShock4Driver
class CORDL_TYPE DualShock4Driver : public ::Rewired::HID::Drivers::HIDDeviceDriver {
public:
// Declarations
using DdacNBewgGjxAFoAjvmIxhYiLRhL = ::Rewired::HID::Drivers::DualShock4Driver_DdacNBewgGjxAFoAjvmIxhYiLRhL;

using DnZEKtOLUNDSTCtWVkueDihAOlkUA = ::Rewired::HID::Drivers::DualShock4Driver_DnZEKtOLUNDSTCtWVkueDihAOlkUA;

using PAdGOMbgoZilgPTvdBGaWVAxENhhA = ::Rewired::HID::Drivers::DualShock4Driver_PAdGOMbgoZilgPTvdBGaWVAxENhhA;

using nmKxCglDPAyUaUDHaiNQJeQrZWrZ = ::Rewired::HID::Drivers::DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ;

 __declspec(property(get=get_AccelerometerValue)) ::UnityEngine::Vector3  AccelerometerValue;

 __declspec(property(get=get_AccelerometerValueRaw)) ::UnityEngine::Vector3  AccelerometerValueRaw;

/// @brief Field AgAGrzIgdXuMiCbdxPIcIMEEwWtdc, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get_AgAGrzIgdXuMiCbdxPIcIMEEwWtdc, put=__cordl_internal_set_AgAGrzIgdXuMiCbdxPIcIMEEwWtdc)) uint8_t  AgAGrzIgdXuMiCbdxPIcIMEEwWtdc;

/// @brief Field BEtSwJwVgWRWxLYiEqVWfbKhWdYm, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_BEtSwJwVgWRWxLYiEqVWfbKhWdYm, put=__cordl_internal_set_BEtSwJwVgWRWxLYiEqVWfbKhWdYm)) float_t  BEtSwJwVgWRWxLYiEqVWfbKhWdYm;

 __declspec(property(get=get_BatteryCharging)) bool  BatteryCharging;

 __declspec(property(get=get_BatteryLevel)) float_t  BatteryLevel;

/// @brief Field CQrJSkQpQVIJBUNAREKSjflEdbiAA, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_CQrJSkQpQVIJBUNAREKSjflEdbiAA, put=__cordl_internal_set_CQrJSkQpQVIJBUNAREKSjflEdbiAA)) double_t  CQrJSkQpQVIJBUNAREKSjflEdbiAA;

/// @brief Field DEEgMBQxNgzHaGYdBcFUlpZnOLOE, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DEEgMBQxNgzHaGYdBcFUlpZnOLOE, put=__cordl_internal_set_DEEgMBQxNgzHaGYdBcFUlpZnOLOE)) float_t  DEEgMBQxNgzHaGYdBcFUlpZnOLOE;

/// @brief Field EotaYjAVqBgUOzpOKxUkStmwgYkO, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_EotaYjAVqBgUOzpOKxUkStmwgYkO, put=__cordl_internal_set_EotaYjAVqBgUOzpOKxUkStmwgYkO)) ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*  EotaYjAVqBgUOzpOKxUkStmwgYkO;

/// @brief Field EpWgPGsHfmolrYtFAasEgQGbejRt, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_EpWgPGsHfmolrYtFAasEgQGbejRt, put=__cordl_internal_set_EpWgPGsHfmolrYtFAasEgQGbejRt)) double_t  EpWgPGsHfmolrYtFAasEgQGbejRt;

/// @brief Field FVLmGNDRfVXfGBGYndMzoolmRAhP, offset 0x11e, size 0x1 
 __declspec(property(get=__cordl_internal_get_FVLmGNDRfVXfGBGYndMzoolmRAhP, put=__cordl_internal_set_FVLmGNDRfVXfGBGYndMzoolmRAhP)) bool  FVLmGNDRfVXfGBGYndMzoolmRAhP;

 __declspec(property(get=get_GyroscopeValue)) ::UnityEngine::Vector3  GyroscopeValue;

 __declspec(property(get=get_GyroscopeValueRaw)) ::UnityEngine::Vector3  GyroscopeValueRaw;

/// @brief Field IDWvrPpoyOValIVIHUGgJwzJzOnb, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_IDWvrPpoyOValIVIHUGgJwzJzOnb, put=__cordl_internal_set_IDWvrPpoyOValIVIHUGgJwzJzOnb)) int32_t  IDWvrPpoyOValIVIHUGgJwzJzOnb;

/// @brief Field IQdSgPvGVeGdPQNKzXnzKukZQfom, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_IQdSgPvGVeGdPQNKzXnzKukZQfom, put=__cordl_internal_set_IQdSgPvGVeGdPQNKzXnzKukZQfom)) int32_t  IQdSgPvGVeGdPQNKzXnzKukZQfom;

/// @brief Field ImQwYKuIhdUtciEdRXqXalPRxKGk, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ImQwYKuIhdUtciEdRXqXalPRxKGk, put=__cordl_internal_set_ImQwYKuIhdUtciEdRXqXalPRxKGk)) ::ArrayW<uint8_t>  ImQwYKuIhdUtciEdRXqXalPRxKGk;

/// @brief Field IpjFnhrkxIaAWjnVDtVlfqDkmtMF, offset 0x134, size 0x10 
 __declspec(property(get=__cordl_internal_get_IpjFnhrkxIaAWjnVDtVlfqDkmtMF, put=__cordl_internal_set_IpjFnhrkxIaAWjnVDtVlfqDkmtMF)) ::UnityEngine::Quaternion  IpjFnhrkxIaAWjnVDtVlfqDkmtMF;

/// @brief Field KOtwpCqjpFZevCkckdEkgjkxDBXgA, offset 0x124, size 0x10 
 __declspec(property(get=__cordl_internal_get_KOtwpCqjpFZevCkckdEkgjkxDBXgA, put=__cordl_internal_set_KOtwpCqjpFZevCkckdEkgjkxDBXgA)) ::UnityEngine::Quaternion  KOtwpCqjpFZevCkckdEkgjkxDBXgA;

 __declspec(property(get=get_LastGyroscopeValue)) ::UnityEngine::Vector3  LastGyroscopeValue;

 __declspec(property(get=get_LastGyroscopeValueRaw)) ::UnityEngine::Vector3  LastGyroscopeValueRaw;

 __declspec(property(get=get_LeftMotor, put=set_LeftMotor)) float_t  LeftMotor;

 __declspec(property(get=get_LightColorB, put=set_LightColorB)) float_t  LightColorB;

 __declspec(property(get=get_LightColorG, put=set_LightColorG)) float_t  LightColorG;

 __declspec(property(get=get_LightColorR, put=set_LightColorR)) float_t  LightColorR;

 __declspec(property(get=get_LightFlashOffDuration, put=set_LightFlashOffDuration)) float_t  LightFlashOffDuration;

 __declspec(property(get=get_LightFlashOnDuration, put=set_LightFlashOnDuration)) float_t  LightFlashOnDuration;

 __declspec(property(get=get_MaxTouches)) int32_t  MaxTouches;

/// @brief Field OQtEiQAFeWmpbhTIuIFVihCCRVRnc, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_OQtEiQAFeWmpbhTIuIFVihCCRVRnc, put=__cordl_internal_set_OQtEiQAFeWmpbhTIuIFVihCCRVRnc)) int32_t  OQtEiQAFeWmpbhTIuIFVihCCRVRnc;

 __declspec(property(get=get_Orientation)) ::UnityEngine::Quaternion  Orientation;

/// @brief Field OzuHdKXoMPmqzNbFiIPQkEOiwHNhA, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_OzuHdKXoMPmqzNbFiIPQkEOiwHNhA, put=__cordl_internal_set_OzuHdKXoMPmqzNbFiIPQkEOiwHNhA)) uint8_t  OzuHdKXoMPmqzNbFiIPQkEOiwHNhA;

/// @brief Field PKPlHLdomCFmUXsfRymbekCMbtMiA, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_PKPlHLdomCFmUXsfRymbekCMbtMiA, put=__cordl_internal_set_PKPlHLdomCFmUXsfRymbekCMbtMiA)) bool  PKPlHLdomCFmUXsfRymbekCMbtMiA;

/// @brief Field PMdbQLLpYtNWgjDLDfFwkNTNXOcY, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_PMdbQLLpYtNWgjDLDfFwkNTNXOcY, put=__cordl_internal_set_PMdbQLLpYtNWgjDLDfFwkNTNXOcY)) int32_t  PMdbQLLpYtNWgjDLDfFwkNTNXOcY;

/// @brief Field PbvSSRrjXUIYLQMtTHBbkitIzmCR, offset 0x11d, size 0x1 
 __declspec(property(get=__cordl_internal_get_PbvSSRrjXUIYLQMtTHBbkitIzmCR, put=__cordl_internal_set_PbvSSRrjXUIYLQMtTHBbkitIzmCR)) bool  PbvSSRrjXUIYLQMtTHBbkitIzmCR;

/// @brief Field RNDzGCLsvNuUmJJPwdlmCGFeSyic, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_RNDzGCLsvNuUmJJPwdlmCGFeSyic, put=__cordl_internal_set_RNDzGCLsvNuUmJJPwdlmCGFeSyic)) ::Rewired::Utils::Classes::Data::NativeBuffer*  RNDzGCLsvNuUmJJPwdlmCGFeSyic;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer)) ::StringW  Rewired_ControllerExtensions_IHIDControllerExtension_manufacturer;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_productId)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_productId;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_productName)) ::StringW  Rewired_ControllerExtensions_IHIDControllerExtension_productName;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_usage)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_usage;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_usagePage;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_vendorId;

 __declspec(property(get=get_RightMotor, put=set_RightMotor)) float_t  RightMotor;

/// @brief Field TDfzHDoRedLrYqkmSbLmFgiyGbVAb, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_TDfzHDoRedLrYqkmSbLmFgiyGbVAb, put=__cordl_internal_set_TDfzHDoRedLrYqkmSbLmFgiyGbVAb)) int32_t  TDfzHDoRedLrYqkmSbLmFgiyGbVAb;

/// @brief Field UyfGIPygFRahjvjCtebKKLKaIBzxA, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_UyfGIPygFRahjvjCtebKKLKaIBzxA, put=__cordl_internal_set_UyfGIPygFRahjvjCtebKKLKaIBzxA)) int32_t  UyfGIPygFRahjvjCtebKKLKaIBzxA;

/// @brief Field WcxglMjgVUHIWzNpabLwTaGfbuuv, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_WcxglMjgVUHIWzNpabLwTaGfbuuv, put=__cordl_internal_set_WcxglMjgVUHIWzNpabLwTaGfbuuv)) int32_t  WcxglMjgVUHIWzNpabLwTaGfbuuv;

/// @brief Field YDvDtkSMUCenUfWweXByYBXkaIXw, offset 0x11f, size 0x1 
 __declspec(property(get=__cordl_internal_get_YDvDtkSMUCenUfWweXByYBXkaIXw, put=__cordl_internal_set_YDvDtkSMUCenUfWweXByYBXkaIXw)) bool  YDvDtkSMUCenUfWweXByYBXkaIXw;

/// @brief Field YViMCrbNxgYMTLqNFWLslvtPiwNu, offset 0x108, size 0x2 
 __declspec(property(get=__cordl_internal_get_YViMCrbNxgYMTLqNFWLslvtPiwNu, put=__cordl_internal_set_YViMCrbNxgYMTLqNFWLslvtPiwNu)) uint16_t  YViMCrbNxgYMTLqNFWLslvtPiwNu;

/// @brief Field aZoVjSxeXslpOHyTbkeXMDFIFYYb, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get_aZoVjSxeXslpOHyTbkeXMDFIFYYb, put=__cordl_internal_set_aZoVjSxeXslpOHyTbkeXMDFIFYYb)) bool  aZoVjSxeXslpOHyTbkeXMDFIFYYb;

/// @brief Field bCPcntrGTFvwfYYjuLlyuWfuiveQ, offset 0xc0, size 0x18 
 __declspec(property(get=__cordl_internal_get_bCPcntrGTFvwfYYjuLlyuWfuiveQ, put=__cordl_internal_set_bCPcntrGTFvwfYYjuLlyuWfuiveQ)) ::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG  bCPcntrGTFvwfYYjuLlyuWfuiveQ;

/// @brief Field bMQFdHQLzjgaFlxxjmMEVHncSAQX, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_bMQFdHQLzjgaFlxxjmMEVHncSAQX, put=__cordl_internal_set_bMQFdHQLzjgaFlxxjmMEVHncSAQX)) ::Rewired::HID::Drivers::DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ  bMQFdHQLzjgaFlxxjmMEVHncSAQX;

/// @brief Field eNQnkUWZUGmgRrOpFXwSwuqBusRQ, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_eNQnkUWZUGmgRrOpFXwSwuqBusRQ, put=__cordl_internal_set_eNQnkUWZUGmgRrOpFXwSwuqBusRQ)) ::ArrayW<int32_t>  eNQnkUWZUGmgRrOpFXwSwuqBusRQ;

/// @brief Field hiiUVHzeLdAuvGZzORyhjSrcunez, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hiiUVHzeLdAuvGZzORyhjSrcunez, put=__cordl_internal_set_hiiUVHzeLdAuvGZzORyhjSrcunez)) ::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM  hiiUVHzeLdAuvGZzORyhjSrcunez;

 __declspec(property(get=vbFplTgRQBpVjNyxQagnFnQdjFHI)) bool  isVibrating;

/// @brief Field jNVBFuHqnBZFhrALAQOenUeKWAUHA, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_jNVBFuHqnBZFhrALAQOenUeKWAUHA, put=__cordl_internal_set_jNVBFuHqnBZFhrALAQOenUeKWAUHA)) int32_t  jNVBFuHqnBZFhrALAQOenUeKWAUHA;

/// @brief Field meNcBmSPTgvJUNGboVLuKtnOcKn, offset 0x60, size 0x28 
 __declspec(property(get=__cordl_internal_get_meNcBmSPTgvJUNGboVLuKtnOcKn, put=__cordl_internal_set_meNcBmSPTgvJUNGboVLuKtnOcKn)) ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties  meNcBmSPTgvJUNGboVLuKtnOcKn;

/// @brief Field mqBhSMYmCRDrejzGFOuRmyfRXvTc, offset 0xe1, size 0x1 
 __declspec(property(get=__cordl_internal_get_mqBhSMYmCRDrejzGFOuRmyfRXvTc, put=__cordl_internal_set_mqBhSMYmCRDrejzGFOuRmyfRXvTc)) bool  mqBhSMYmCRDrejzGFOuRmyfRXvTc;

/// @brief Field nKetEAfsOsGUaqlriinYFqmkGTVD, offset 0xf8, size 0x10 
 __declspec(property(get=__cordl_internal_get_nKetEAfsOsGUaqlriinYFqmkGTVD, put=__cordl_internal_set_nKetEAfsOsGUaqlriinYFqmkGTVD)) ::UnityEngine::Quaternion  nKetEAfsOsGUaqlriinYFqmkGTVD;

/// @brief Field ofKsxquFnEsnehIObKJTjQWGDVJV, offset 0x11c, size 0x1 
 __declspec(property(get=__cordl_internal_get_ofKsxquFnEsnehIObKJTjQWGDVJV, put=__cordl_internal_set_ofKsxquFnEsnehIObKJTjQWGDVJV)) bool  ofKsxquFnEsnehIObKJTjQWGDVJV;

/// @brief Field rskSnrSEaaCHcTmlUjoqhkLRndqSA, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rskSnrSEaaCHcTmlUjoqhkLRndqSA, put=__cordl_internal_set_rskSnrSEaaCHcTmlUjoqhkLRndqSA)) ::Rewired::Utils::Classes::Data::NativeBuffer*  rskSnrSEaaCHcTmlUjoqhkLRndqSA;

/// @brief Field xeyZlJHkRntAunSivqMeAcPISoRd, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_xeyZlJHkRntAunSivqMeAcPISoRd, put=__cordl_internal_set_xeyZlJHkRntAunSivqMeAcPISoRd)) ::ArrayW<int32_t>  xeyZlJHkRntAunSivqMeAcPISoRd;

/// @brief Field ydyMhyMWoiAiiVkYaEPJYKiKnaFT, offset 0x121, size 0x1 
 __declspec(property(get=__cordl_internal_get_ydyMhyMWoiAiiVkYaEPJYKiKnaFT, put=__cordl_internal_set_ydyMhyMWoiAiiVkYaEPJYKiKnaFT)) uint8_t  ydyMhyMWoiAiiVkYaEPJYKiKnaFT;

/// @brief Field yjIIvxhkJwJTJwAALQnDOUwSnUmD, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_yjIIvxhkJwJTJwAALQnDOUwSnUmD, put=__cordl_internal_set_yjIIvxhkJwJTJwAALQnDOUwSnUmD)) bool  yjIIvxhkJwJTJwAALQnDOUwSnUmD;

/// @brief Field zTAgsMGuMYZtAMauAmOUHPPGcrZn, offset 0x144, size 0x1 
 __declspec(property(get=__cordl_internal_get_zTAgsMGuMYZtAMauAmOUHPPGcrZn, put=__cordl_internal_set_zTAgsMGuMYZtAMauAmOUHPPGcrZn)) bool  zTAgsMGuMYZtAMauAmOUHPPGcrZn;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr operator  ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept;

/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr operator  ::Rewired::HID::Drivers::IControllerDriver*() noexcept;

/// @brief Convert operator to "::Rewired::HID::Drivers::IDriver_DualShock4"
constexpr operator  ::Rewired::HID::Drivers::IDriver_DualShock4*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method BBKrrtRxrXRlOZawrSaWVvkqNPmT, addr 0x181aaf960, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion BBKrrtRxrXRlOZawrSaWVvkqNPmT(::UnityEngine::Quaternion  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector3  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method CreateControllerExtension, addr 0x181ab1380, size 0x40, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* CreateControllerExtension() ;

/// @brief Method DJVeSPgnXWiABlUqAgRVFFtqoojoA, addr 0x181aae280, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 DJVeSPgnXWiABlUqAgRVFFtqoojoA(::UnityEngine::Vector3  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method Dispose, addr 0x181ab13c0, size 0x140, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FDJSKZAAcqKmPWQdHzmRbSLUbrNA, addr 0x181ab1500, size 0x90, virtual false, abstract: false, final false
inline void FDJSKZAAcqKmPWQdHzmRbSLUbrNA() ;

/// @brief Method Finalize, addr 0x181aaccb0, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GAWCcZmDbnEsxDCcWKMZcnMHCoEQB, addr 0x181ab1590, size 0x190, virtual false, abstract: false, final false
inline void GAWCcZmDbnEsxDCcWKMZcnMHCoEQB() ;

/// @brief Method GLmgUfqdgcMymIGKFNVZqCwbbomV, addr 0x181aad9c0, size 0x110, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GLmgUfqdgcMymIGKFNVZqCwbbomV(::UnityEngine::Vector3  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method GetTouchCount, addr 0x181aacd80, size 0x60, virtual true, abstract: false, final true
inline int32_t GetTouchCount() ;

/// @brief Method GetTouchIdAtIndex, addr 0x181aacde0, size 0x50, virtual true, abstract: false, final true
inline int32_t GetTouchIdAtIndex(int32_t  index) ;

/// @brief Method GetTouchPositionAbsoluteByIndex, addr 0x181aace30, size 0x70, virtual true, abstract: false, final true
inline bool GetTouchPositionAbsoluteByIndex(int32_t  index, ::by_ref<int32_t>  positionX, ::by_ref<int32_t>  positionY) ;

/// @brief Method GetTouchPositionAbsoluteByTouchId, addr 0x181aacea0, size 0xb0, virtual true, abstract: false, final true
inline bool GetTouchPositionAbsoluteByTouchId(int32_t  touchId, ::by_ref<int32_t>  positionX, ::by_ref<int32_t>  positionY) ;

/// @brief Method GetTouchPositionByIndex, addr 0x181aacf50, size 0x70, virtual true, abstract: false, final true
inline bool GetTouchPositionByIndex(int32_t  index, ::by_ref<::UnityEngine::Vector2>  position) ;

/// @brief Method GetTouchPositionByTouchId, addr 0x181aacfc0, size 0xa0, virtual true, abstract: false, final true
inline bool GetTouchPositionByTouchId(int32_t  touchId, ::by_ref<::UnityEngine::Vector2>  position) ;

/// @brief Method Inverse, addr 0x181aad3b0, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Inverse(::UnityEngine::Quaternion  quaternion) ;

/// @brief Method IsTouchingAtIndex, addr 0x181aad440, size 0x50, virtual true, abstract: false, final true
inline bool IsTouchingAtIndex(int32_t  index) ;

/// @brief Method IsTouchingAtTouchId, addr 0x181aad490, size 0x30, virtual true, abstract: false, final true
inline bool IsTouchingAtTouchId(int32_t  touchId) ;

/// @brief Method KPieXYEcPvBsvTRoMkOiyLAKtTbEA, addr 0x181aae700, size 0x380, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion KPieXYEcPvBsvTRoMkOiyLAKtTbEA(::UnityEngine::Vector3  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method KUBtszZBnOGkplBLmlzKLwqeYMK, addr 0x180330be0, size 0x10, virtual false, abstract: false, final false
inline float_t KUBtszZBnOGkplBLmlzKLwqeYMK() ;

/// @brief Method Matches, addr 0x181ab1720, size 0x100, virtual false, abstract: false, final false
static inline bool Matches(int32_t  vid, int32_t  pid) ;

/// @brief Method MiHMgELyApUzUGBHniteiTdrhEHbb, addr 0x181ab0360, size 0x80, virtual false, abstract: false, final false
inline void MiHMgELyApUzUGBHniteiTdrhEHbb(::ArrayW<::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF*>  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Data::NativeBuffer*  _cordl_fixed_empty_name_whitespace_param_1, double_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method MkpBjqBfvRxlNgbulLEKdrOAWyfwb, addr 0x181ab1820, size 0x10, virtual false, abstract: false, final false
static inline void MkpBjqBfvRxlNgbulLEKdrOAWyfwb(::System::Object*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::HID::Drivers::DualShock4Driver* New_ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method NtoISkfOdjLORAJlYIGTScHSaIuV, addr 0x181ab1830, size 0x4c0, virtual false, abstract: false, final false
inline void NtoISkfOdjLORAJlYIGTScHSaIuV() ;

/// @brief Method OQJgJnbsDHmJxyKpmZXbIMGpOcUzA, addr 0x181aafb40, size 0x80, virtual false, abstract: false, final false
inline float_t OQJgJnbsDHmJxyKpmZXbIMGpOcUzA(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method ParseInputReport, addr 0x181ab1cf0, size 0x530, virtual true, abstract: false, final false
inline bool ParseInputReport(::System::IntPtr  inputReportPtr, int32_t  inputReportLength, double_t  timestamp) ;

/// @brief Method ResetOrientation, addr 0x181ab2220, size 0x20, virtual true, abstract: false, final true
inline void ResetOrientation() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_manufacturer, addr 0x181aae330, size 0x10, virtual true, abstract: false, final true
inline ::StringW Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_productId, addr 0x181aae340, size 0x20, virtual true, abstract: false, final true
inline uint16_t Rewired_ControllerExtensions_IHIDControllerExtension_get_productId() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_productName, addr 0x181aae360, size 0x10, virtual true, abstract: false, final true
inline ::StringW Rewired_ControllerExtensions_IHIDControllerExtension_get_productName() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_usage, addr 0x181aae390, size 0x20, virtual true, abstract: false, final true
inline uint16_t Rewired_ControllerExtensions_IHIDControllerExtension_get_usage() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_usagePage, addr 0x181aae370, size 0x20, virtual true, abstract: false, final true
inline uint16_t Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_vendorId, addr 0x181aae3b0, size 0x10, virtual true, abstract: false, final true
inline uint16_t Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId() ;

/// @brief Method RpGJMLZjXvDaAVSTjXeuHDfYZuiQ, addr 0x181ab2240, size 0x10, virtual false, abstract: false, final false
inline void RpGJMLZjXvDaAVSTjXeuHDfYZuiQ() ;

/// @brief Method SnVtccYEWKbPbQzBBODkZAjjXxik, addr 0x181ab2250, size 0x10, virtual false, abstract: false, final false
inline void SnVtccYEWKbPbQzBBODkZAjjXxik() ;

/// @brief Method StopLightFlash, addr 0x181ab2260, size 0x20, virtual true, abstract: false, final true
inline void StopLightFlash() ;

/// @brief Method StopVibration, addr 0x181aae580, size 0xa0, virtual true, abstract: false, final true
inline void StopVibration() ;

/// @brief Method TaFXXoogitpItUxvbgrMtFRyswgd, addr 0x181ab2280, size 0xb70, virtual false, abstract: false, final false
inline void TaFXXoogitpItUxvbgrMtFRyswgd(::UnityEngine::Vector3  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector3  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method Update, addr 0x181ab2df0, size 0xe0, virtual true, abstract: false, final false
inline void Update(::Rewired::UpdateLoopType  updateLoop) ;

/// @brief Method VEhrVkPYlAqAPpxyHtRWZmuVUHxA, addr 0x181aaf8e0, size 0x40, virtual false, abstract: false, final false
static inline bool VEhrVkPYlAqAPpxyHtRWZmuVUHxA(::by_ref<::UnityEngine::Vector3>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ZMkFagccCfKGJFDgbbfuPWcSZtbvb, addr 0x181ab2ed0, size 0x10, virtual false, abstract: false, final false
inline void ZMkFagccCfKGJFDgbbfuPWcSZtbvb() ;

constexpr uint8_t const& __cordl_internal_get_AgAGrzIgdXuMiCbdxPIcIMEEwWtdc() const;

constexpr uint8_t& __cordl_internal_get_AgAGrzIgdXuMiCbdxPIcIMEEwWtdc() ;

constexpr float_t const& __cordl_internal_get_BEtSwJwVgWRWxLYiEqVWfbKhWdYm() const;

constexpr float_t& __cordl_internal_get_BEtSwJwVgWRWxLYiEqVWfbKhWdYm() ;

constexpr double_t const& __cordl_internal_get_CQrJSkQpQVIJBUNAREKSjflEdbiAA() const;

constexpr double_t& __cordl_internal_get_CQrJSkQpQVIJBUNAREKSjflEdbiAA() ;

constexpr float_t const& __cordl_internal_get_DEEgMBQxNgzHaGYdBcFUlpZnOLOE() const;

constexpr float_t& __cordl_internal_get_DEEgMBQxNgzHaGYdBcFUlpZnOLOE() ;

constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice* const& __cordl_internal_get_EotaYjAVqBgUOzpOKxUkStmwgYkO() const;

constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*& __cordl_internal_get_EotaYjAVqBgUOzpOKxUkStmwgYkO() ;

constexpr double_t const& __cordl_internal_get_EpWgPGsHfmolrYtFAasEgQGbejRt() const;

constexpr double_t& __cordl_internal_get_EpWgPGsHfmolrYtFAasEgQGbejRt() ;

constexpr bool const& __cordl_internal_get_FVLmGNDRfVXfGBGYndMzoolmRAhP() const;

constexpr bool& __cordl_internal_get_FVLmGNDRfVXfGBGYndMzoolmRAhP() ;

constexpr int32_t const& __cordl_internal_get_IDWvrPpoyOValIVIHUGgJwzJzOnb() const;

constexpr int32_t& __cordl_internal_get_IDWvrPpoyOValIVIHUGgJwzJzOnb() ;

constexpr int32_t const& __cordl_internal_get_IQdSgPvGVeGdPQNKzXnzKukZQfom() const;

constexpr int32_t& __cordl_internal_get_IQdSgPvGVeGdPQNKzXnzKukZQfom() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_ImQwYKuIhdUtciEdRXqXalPRxKGk() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_ImQwYKuIhdUtciEdRXqXalPRxKGk() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_IpjFnhrkxIaAWjnVDtVlfqDkmtMF() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_IpjFnhrkxIaAWjnVDtVlfqDkmtMF() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_KOtwpCqjpFZevCkckdEkgjkxDBXgA() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_KOtwpCqjpFZevCkckdEkgjkxDBXgA() ;

constexpr int32_t const& __cordl_internal_get_OQtEiQAFeWmpbhTIuIFVihCCRVRnc() const;

constexpr int32_t& __cordl_internal_get_OQtEiQAFeWmpbhTIuIFVihCCRVRnc() ;

constexpr uint8_t const& __cordl_internal_get_OzuHdKXoMPmqzNbFiIPQkEOiwHNhA() const;

constexpr uint8_t& __cordl_internal_get_OzuHdKXoMPmqzNbFiIPQkEOiwHNhA() ;

constexpr bool const& __cordl_internal_get_PKPlHLdomCFmUXsfRymbekCMbtMiA() const;

constexpr bool& __cordl_internal_get_PKPlHLdomCFmUXsfRymbekCMbtMiA() ;

constexpr int32_t const& __cordl_internal_get_PMdbQLLpYtNWgjDLDfFwkNTNXOcY() const;

constexpr int32_t& __cordl_internal_get_PMdbQLLpYtNWgjDLDfFwkNTNXOcY() ;

constexpr bool const& __cordl_internal_get_PbvSSRrjXUIYLQMtTHBbkitIzmCR() const;

constexpr bool& __cordl_internal_get_PbvSSRrjXUIYLQMtTHBbkitIzmCR() ;

constexpr ::Rewired::Utils::Classes::Data::NativeBuffer* const& __cordl_internal_get_RNDzGCLsvNuUmJJPwdlmCGFeSyic() const;

constexpr ::Rewired::Utils::Classes::Data::NativeBuffer*& __cordl_internal_get_RNDzGCLsvNuUmJJPwdlmCGFeSyic() ;

constexpr int32_t const& __cordl_internal_get_TDfzHDoRedLrYqkmSbLmFgiyGbVAb() const;

constexpr int32_t& __cordl_internal_get_TDfzHDoRedLrYqkmSbLmFgiyGbVAb() ;

constexpr int32_t const& __cordl_internal_get_UyfGIPygFRahjvjCtebKKLKaIBzxA() const;

constexpr int32_t& __cordl_internal_get_UyfGIPygFRahjvjCtebKKLKaIBzxA() ;

constexpr int32_t const& __cordl_internal_get_WcxglMjgVUHIWzNpabLwTaGfbuuv() const;

constexpr int32_t& __cordl_internal_get_WcxglMjgVUHIWzNpabLwTaGfbuuv() ;

constexpr bool const& __cordl_internal_get_YDvDtkSMUCenUfWweXByYBXkaIXw() const;

constexpr bool& __cordl_internal_get_YDvDtkSMUCenUfWweXByYBXkaIXw() ;

constexpr uint16_t const& __cordl_internal_get_YViMCrbNxgYMTLqNFWLslvtPiwNu() const;

constexpr uint16_t& __cordl_internal_get_YViMCrbNxgYMTLqNFWLslvtPiwNu() ;

constexpr bool const& __cordl_internal_get_aZoVjSxeXslpOHyTbkeXMDFIFYYb() const;

constexpr bool& __cordl_internal_get_aZoVjSxeXslpOHyTbkeXMDFIFYYb() ;

constexpr ::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG const& __cordl_internal_get_bCPcntrGTFvwfYYjuLlyuWfuiveQ() const;

constexpr ::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG& __cordl_internal_get_bCPcntrGTFvwfYYjuLlyuWfuiveQ() ;

constexpr ::Rewired::HID::Drivers::DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ const& __cordl_internal_get_bMQFdHQLzjgaFlxxjmMEVHncSAQX() const;

constexpr ::Rewired::HID::Drivers::DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ& __cordl_internal_get_bMQFdHQLzjgaFlxxjmMEVHncSAQX() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_eNQnkUWZUGmgRrOpFXwSwuqBusRQ() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_eNQnkUWZUGmgRrOpFXwSwuqBusRQ() ;

constexpr ::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM const& __cordl_internal_get_hiiUVHzeLdAuvGZzORyhjSrcunez() const;

constexpr ::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM& __cordl_internal_get_hiiUVHzeLdAuvGZzORyhjSrcunez() ;

constexpr int32_t const& __cordl_internal_get_jNVBFuHqnBZFhrALAQOenUeKWAUHA() const;

constexpr int32_t& __cordl_internal_get_jNVBFuHqnBZFhrALAQOenUeKWAUHA() ;

constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties const& __cordl_internal_get_meNcBmSPTgvJUNGboVLuKtnOcKn() const;

constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties& __cordl_internal_get_meNcBmSPTgvJUNGboVLuKtnOcKn() ;

constexpr bool const& __cordl_internal_get_mqBhSMYmCRDrejzGFOuRmyfRXvTc() const;

constexpr bool& __cordl_internal_get_mqBhSMYmCRDrejzGFOuRmyfRXvTc() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_nKetEAfsOsGUaqlriinYFqmkGTVD() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_nKetEAfsOsGUaqlriinYFqmkGTVD() ;

constexpr bool const& __cordl_internal_get_ofKsxquFnEsnehIObKJTjQWGDVJV() const;

constexpr bool& __cordl_internal_get_ofKsxquFnEsnehIObKJTjQWGDVJV() ;

constexpr ::Rewired::Utils::Classes::Data::NativeBuffer* const& __cordl_internal_get_rskSnrSEaaCHcTmlUjoqhkLRndqSA() const;

constexpr ::Rewired::Utils::Classes::Data::NativeBuffer*& __cordl_internal_get_rskSnrSEaaCHcTmlUjoqhkLRndqSA() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_xeyZlJHkRntAunSivqMeAcPISoRd() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_xeyZlJHkRntAunSivqMeAcPISoRd() ;

constexpr uint8_t const& __cordl_internal_get_ydyMhyMWoiAiiVkYaEPJYKiKnaFT() const;

constexpr uint8_t& __cordl_internal_get_ydyMhyMWoiAiiVkYaEPJYKiKnaFT() ;

constexpr bool const& __cordl_internal_get_yjIIvxhkJwJTJwAALQnDOUwSnUmD() const;

constexpr bool& __cordl_internal_get_yjIIvxhkJwJTJwAALQnDOUwSnUmD() ;

constexpr bool const& __cordl_internal_get_zTAgsMGuMYZtAMauAmOUHPPGcrZn() const;

constexpr bool& __cordl_internal_get_zTAgsMGuMYZtAMauAmOUHPPGcrZn() ;

constexpr void __cordl_internal_set_AgAGrzIgdXuMiCbdxPIcIMEEwWtdc(uint8_t  value) ;

constexpr void __cordl_internal_set_BEtSwJwVgWRWxLYiEqVWfbKhWdYm(float_t  value) ;

constexpr void __cordl_internal_set_CQrJSkQpQVIJBUNAREKSjflEdbiAA(double_t  value) ;

constexpr void __cordl_internal_set_DEEgMBQxNgzHaGYdBcFUlpZnOLOE(float_t  value) ;

constexpr void __cordl_internal_set_EotaYjAVqBgUOzpOKxUkStmwgYkO(::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*  value) ;

constexpr void __cordl_internal_set_EpWgPGsHfmolrYtFAasEgQGbejRt(double_t  value) ;

constexpr void __cordl_internal_set_FVLmGNDRfVXfGBGYndMzoolmRAhP(bool  value) ;

constexpr void __cordl_internal_set_IDWvrPpoyOValIVIHUGgJwzJzOnb(int32_t  value) ;

constexpr void __cordl_internal_set_IQdSgPvGVeGdPQNKzXnzKukZQfom(int32_t  value) ;

constexpr void __cordl_internal_set_ImQwYKuIhdUtciEdRXqXalPRxKGk(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_IpjFnhrkxIaAWjnVDtVlfqDkmtMF(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_KOtwpCqjpFZevCkckdEkgjkxDBXgA(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_OQtEiQAFeWmpbhTIuIFVihCCRVRnc(int32_t  value) ;

constexpr void __cordl_internal_set_OzuHdKXoMPmqzNbFiIPQkEOiwHNhA(uint8_t  value) ;

constexpr void __cordl_internal_set_PKPlHLdomCFmUXsfRymbekCMbtMiA(bool  value) ;

constexpr void __cordl_internal_set_PMdbQLLpYtNWgjDLDfFwkNTNXOcY(int32_t  value) ;

constexpr void __cordl_internal_set_PbvSSRrjXUIYLQMtTHBbkitIzmCR(bool  value) ;

constexpr void __cordl_internal_set_RNDzGCLsvNuUmJJPwdlmCGFeSyic(::Rewired::Utils::Classes::Data::NativeBuffer*  value) ;

constexpr void __cordl_internal_set_TDfzHDoRedLrYqkmSbLmFgiyGbVAb(int32_t  value) ;

constexpr void __cordl_internal_set_UyfGIPygFRahjvjCtebKKLKaIBzxA(int32_t  value) ;

constexpr void __cordl_internal_set_WcxglMjgVUHIWzNpabLwTaGfbuuv(int32_t  value) ;

constexpr void __cordl_internal_set_YDvDtkSMUCenUfWweXByYBXkaIXw(bool  value) ;

constexpr void __cordl_internal_set_YViMCrbNxgYMTLqNFWLslvtPiwNu(uint16_t  value) ;

constexpr void __cordl_internal_set_aZoVjSxeXslpOHyTbkeXMDFIFYYb(bool  value) ;

constexpr void __cordl_internal_set_bCPcntrGTFvwfYYjuLlyuWfuiveQ(::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG  value) ;

constexpr void __cordl_internal_set_bMQFdHQLzjgaFlxxjmMEVHncSAQX(::Rewired::HID::Drivers::DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ  value) ;

constexpr void __cordl_internal_set_eNQnkUWZUGmgRrOpFXwSwuqBusRQ(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_hiiUVHzeLdAuvGZzORyhjSrcunez(::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM  value) ;

constexpr void __cordl_internal_set_jNVBFuHqnBZFhrALAQOenUeKWAUHA(int32_t  value) ;

constexpr void __cordl_internal_set_meNcBmSPTgvJUNGboVLuKtnOcKn(::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties  value) ;

constexpr void __cordl_internal_set_mqBhSMYmCRDrejzGFOuRmyfRXvTc(bool  value) ;

constexpr void __cordl_internal_set_nKetEAfsOsGUaqlriinYFqmkGTVD(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_ofKsxquFnEsnehIObKJTjQWGDVJV(bool  value) ;

constexpr void __cordl_internal_set_rskSnrSEaaCHcTmlUjoqhkLRndqSA(::Rewired::Utils::Classes::Data::NativeBuffer*  value) ;

constexpr void __cordl_internal_set_xeyZlJHkRntAunSivqMeAcPISoRd(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_ydyMhyMWoiAiiVkYaEPJYKiKnaFT(uint8_t  value) ;

constexpr void __cordl_internal_set_yjIIvxhkJwJTJwAALQnDOUwSnUmD(bool  value) ;

constexpr void __cordl_internal_set_zTAgsMGuMYZtAMauAmOUHPPGcrZn(bool  value) ;

/// @brief Method .ctor, addr 0x181ab2ee0, size 0xdb0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method aSdBlpwhWacKxndRiaMxvrImLqNj, addr 0x181ab3c90, size 0x1a0, virtual false, abstract: false, final false
inline void aSdBlpwhWacKxndRiaMxvrImLqNj(::Rewired::Utils::Classes::Data::NativeBuffer*  _cordl_fixed_empty_name_whitespace, ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method cMBRTQSWiRhiaXMhHieLyJsLBPQd, addr 0x181aae450, size 0x110, virtual false, abstract: false, final false
inline bool cMBRTQSWiRhiaXMhHieLyJsLBPQd(::UnityEngine::Vector3  _cordl_fixed_empty_name_whitespace, ::by_ref<::Rewired::HID::Drivers::DualShock4Driver_DnZEKtOLUNDSTCtWVkueDihAOlkUA>  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method cOjbfnzpDpWOjEnWqXplMhKvZaob, addr 0x181ab3e30, size 0x10, virtual false, abstract: false, final false
inline void cOjbfnzpDpWOjEnWqXplMhKvZaob() ;

/// @brief Method cSZVwSYSXbusTnUlUEdDhsASgGnkA, addr 0x181aac930, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 cSZVwSYSXbusTnUlUEdDhsASgGnkA(::UnityEngine::Vector3  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector3  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method cqfKLBGjkdZkQmrEkvIeGQVaePvKA, addr 0x181ab3e40, size 0x2e0, virtual false, abstract: false, final false
inline void cqfKLBGjkdZkQmrEkvIeGQVaePvKA(::Rewired::Utils::Classes::Data::NativeBuffer*  _cordl_fixed_empty_name_whitespace, double_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method dMHXdXztGTNTNDZSVOsxibrEifye, addr 0x181ab4120, size 0x60, virtual false, abstract: false, final false
inline void dMHXdXztGTNTNDZSVOsxibrEifye(::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ejjMlMoLInINlPqaWWynCORrwcAv, addr 0x181ab4180, size 0x50, virtual false, abstract: false, final false
inline bool ejjMlMoLInINlPqaWWynCORrwcAv(::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ersCkScixCzdohInBYCvkRcrfnNv, addr 0x181aacc40, size 0x70, virtual false, abstract: false, final false
inline bool ersCkScixCzdohInBYCvkRcrfnNv(::UnityEngine::Vector3  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method fLOGVIYTimfauwEvgiZZtoZfRtMN, addr 0x181ab0c30, size 0x20, virtual false, abstract: false, final false
inline bool fLOGVIYTimfauwEvgiZZtoZfRtMN(float_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_AccelerometerValue, addr 0x181aafc30, size 0x70, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_AccelerometerValue() ;

/// @brief Method get_AccelerometerValueRaw, addr 0x181aafbc0, size 0x70, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_AccelerometerValueRaw() ;

/// @brief Method get_BatteryCharging, addr 0x181ab41d0, size 0x10, virtual true, abstract: false, final true
inline bool get_BatteryCharging() ;

/// @brief Method get_BatteryLevel, addr 0x181ab41e0, size 0x10, virtual true, abstract: false, final true
inline float_t get_BatteryLevel() ;

/// @brief Method get_GyroscopeValue, addr 0x181aafd70, size 0x120, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_GyroscopeValue() ;

/// @brief Method get_GyroscopeValueRaw, addr 0x181aafcc0, size 0xb0, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_GyroscopeValueRaw() ;

/// @brief Method get_LastGyroscopeValue, addr 0x181ab41f0, size 0xd0, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_LastGyroscopeValue() ;

/// @brief Method get_LastGyroscopeValueRaw, addr 0x181aafe90, size 0x70, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_LastGyroscopeValueRaw() ;

/// @brief Method get_LeftMotor, addr 0x181aaffd0, size 0x50, virtual true, abstract: false, final true
inline float_t get_LeftMotor() ;

/// @brief Method get_LightColorB, addr 0x181ab0020, size 0x30, virtual true, abstract: false, final true
inline float_t get_LightColorB() ;

/// @brief Method get_LightColorG, addr 0x181ab0050, size 0x30, virtual true, abstract: false, final true
inline float_t get_LightColorG() ;

/// @brief Method get_LightColorR, addr 0x181ab0080, size 0x30, virtual true, abstract: false, final true
inline float_t get_LightColorR() ;

/// @brief Method get_LightFlashOffDuration, addr 0x181ab42c0, size 0x10, virtual true, abstract: false, final true
inline float_t get_LightFlashOffDuration() ;

/// @brief Method get_LightFlashOnDuration, addr 0x181ab42d0, size 0x10, virtual true, abstract: false, final true
inline float_t get_LightFlashOnDuration() ;

/// @brief Method get_MaxTouches, addr 0x1802edfe0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_MaxTouches() ;

/// @brief Method get_Orientation, addr 0x181ab42e0, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Quaternion get_Orientation() ;

/// @brief Method get_RightMotor, addr 0x181ab00e0, size 0x50, virtual true, abstract: false, final true
inline float_t get_RightMotor() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept;

/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* i___Rewired__HID__Drivers__IControllerDriver() noexcept;

/// @brief Convert to "::Rewired::HID::Drivers::IDriver_DualShock4"
constexpr ::Rewired::HID::Drivers::IDriver_DualShock4* i___Rewired__HID__Drivers__IDriver_DualShock4() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method jMFQDTotpTCnuDUfCAsSqEwzUlAT, addr 0x181aad340, size 0x70, virtual false, abstract: false, final false
inline bool jMFQDTotpTCnuDUfCAsSqEwzUlAT(::UnityEngine::Vector3  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method kufsSJyVrIUixybFAkpJHmgTdBeV, addr 0x181aad5a0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 kufsSJyVrIUixybFAkpJHmgTdBeV(::ArrayW<float_t>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method lVcAVWOdxBGJPdLqRLuHzUaMSRfn, addr 0x181aaf930, size 0x30, virtual false, abstract: false, final false
inline float_t lVcAVWOdxBGJPdLqRLuHzUaMSRfn(::UnityEngine::Vector3  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method nYPIQFPeOkQCRJFJBVOpvDSAWnIU, addr 0x181aac8b0, size 0x80, virtual false, abstract: false, final false
inline void nYPIQFPeOkQCRJFJBVOpvDSAWnIU(::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace, ::ArrayW<float_t>  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method pLFqPWiRpFmvTHOiUjNXnJamibbd, addr 0x181ab42f0, size 0xe0, virtual false, abstract: false, final false
inline int32_t pLFqPWiRpFmvTHOiUjNXnJamibbd(int32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method poLWFpUudMCmRrvfYzNkSJaxIkhF, addr 0x181aaf920, size 0x10, virtual false, abstract: false, final false
inline int32_t poLWFpUudMCmRrvfYzNkSJaxIkhF(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method qFdHJzKlwwraCezJnmUiOuiCQNHO, addr 0x181ab0d50, size 0xe0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 qFdHJzKlwwraCezJnmUiOuiCQNHO(::UnityEngine::Vector3  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method set_LeftMotor, addr 0x181ab0920, size 0x70, virtual true, abstract: false, final true
inline void set_LeftMotor(float_t  value) ;

/// @brief Method set_LightColorB, addr 0x181ab0990, size 0x30, virtual true, abstract: false, final true
inline void set_LightColorB(float_t  value) ;

/// @brief Method set_LightColorG, addr 0x181ab09c0, size 0x30, virtual true, abstract: false, final true
inline void set_LightColorG(float_t  value) ;

/// @brief Method set_LightColorR, addr 0x181ab09f0, size 0x30, virtual true, abstract: false, final true
inline void set_LightColorR(float_t  value) ;

/// @brief Method set_LightFlashOffDuration, addr 0x181ab43d0, size 0x80, virtual true, abstract: false, final true
inline void set_LightFlashOffDuration(float_t  value) ;

/// @brief Method set_LightFlashOnDuration, addr 0x181ab4450, size 0x80, virtual true, abstract: false, final true
inline void set_LightFlashOnDuration(float_t  value) ;

/// @brief Method set_RightMotor, addr 0x181ab0b20, size 0x70, virtual true, abstract: false, final true
inline void set_RightMotor(float_t  value) ;

/// @brief Method uqvQhjDEjCrFQQJSRKNmDhvCvvMl, addr 0x181aac8b0, size 0x80, virtual false, abstract: false, final false
inline void uqvQhjDEjCrFQQJSRKNmDhvCvvMl(::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace, ::ArrayW<float_t>  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method utswsQeQAHMXNhEThHHlakJSMwhs, addr 0x181ab44d0, size 0x1d0, virtual false, abstract: false, final false
inline bool utswsQeQAHMXNhEThHHlakJSMwhs(::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method vQrfNxIsgwoSMBzCQSvPrzQzZFay, addr 0x181ab1020, size 0x190, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion vQrfNxIsgwoSMBzCQSvPrzQzZFay(::UnityEngine::Quaternion  _cordl_fixed_empty_name_whitespace, ::Rewired::HID::Drivers::DualShock4Driver_DdacNBewgGjxAFoAjvmIxhYiLRhL  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method vbFplTgRQBpVjNyxQagnFnQdjFHI, addr 0x181aacbe0, size 0x60, virtual false, abstract: false, final false
inline bool vbFplTgRQBpVjNyxQagnFnQdjFHI() ;

/// @brief Method wjVkaIVmdzaIsxwAykQBEwPldkou, addr 0x181ab0c50, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 wjVkaIVmdzaIsxwAykQBEwPldkou(::Rewired::Utils::Classes::Data::RingBuffer_1<::GlobalNamespace::LdaHIPkymkZGKHeprsIpIeEZUAne_RRCOzFgkDVcNqTPPzYdXoorxtWag*>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method yjZObfdYKGoLCtwQoeyKPtFGjnhx, addr 0x181ab46a0, size 0x90, virtual false, abstract: false, final false
inline void yjZObfdYKGoLCtwQoeyKPtFGjnhx(::Rewired::Utils::Classes::Data::NativeBuffer*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DualShock4Driver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DualShock4Driver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DualShock4Driver(DualShock4Driver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DualShock4Driver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DualShock4Driver(DualShock4Driver const& ) = delete;

/// @brief Field AKzBVWcQKctJjoMfzbLtfeNNeabz offset 0xffffffff size 0x1
static constexpr uint8_t  AKzBVWcQKctJjoMfzbLtfeNNeabz{static_cast<uint8_t>(0x12u)};

/// @brief Field ASoIpJFQbaAuYDlVNQBsQCReCAIfA offset 0xffffffff size 0x4
static constexpr int32_t  ASoIpJFQbaAuYDlVNQBsQCReCAIfA{static_cast<int32_t>(0x2)};

/// @brief Field BHealJbOWZtWXRXFOQuQoIWUCDSY offset 0xffffffff size 0x4
static constexpr float_t  BHealJbOWZtWXRXFOQuQoIWUCDSY{static_cast<float_t>(16777216.0f)};

/// @brief Field CQSwOagizkQPLIPBgVBICQcLehBY offset 0xffffffff size 0x4
static constexpr int32_t  CQSwOagizkQPLIPBgVBICQcLehBY{static_cast<int32_t>(0x7)};

/// @brief Field DANjFwJYDJWIvGyTKyTXOWiEEQkZ offset 0xffffffff size 0x4
static constexpr float_t  DANjFwJYDJWIvGyTKyTXOWiEEQkZ{static_cast<float_t>(4096.0f)};

/// @brief Field FApaFPgudhsNoZDCsWokIdjmoEuEA offset 0xffffffff size 0x1
static constexpr bool  FApaFPgudhsNoZDCsWokIdjmoEuEA{true};

/// @brief Field FBOgvsHuBzeIiUKAciIqoEQdBifQA offset 0xffffffff size 0x1
static constexpr uint8_t  FBOgvsHuBzeIiUKAciIqoEQdBifQA{static_cast<uint8_t>(0x0u)};

/// @brief Field FGUAjZEiqTbZvMmqoiqRKNjZbOYy offset 0xffffffff size 0x1
static constexpr uint8_t  FGUAjZEiqTbZvMmqoiqRKNjZbOYy{static_cast<uint8_t>(0xc8u)};

/// @brief Field FelHyFULscajVcVQvwcPEFLBBhEQ offset 0xffffffff size 0x1
static constexpr uint8_t  FelHyFULscajVcVQvwcPEFLBBhEQ{static_cast<uint8_t>(0xffu)};

/// @brief Field GmKbVWEjXeWSzhhfbdqkCNqOErf offset 0xffffffff size 0x4
static constexpr int32_t  GmKbVWEjXeWSzhhfbdqkCNqOErf{static_cast<int32_t>(0x2)};

/// @brief Field HRsupIcDONURFUxwmdwGOWIbrDu offset 0xffffffff size 0x1
static constexpr uint8_t  HRsupIcDONURFUxwmdwGOWIbrDu{static_cast<uint8_t>(0xa3u)};

/// @brief Field HjJtxQyNKhILoEmcQZSLZQugeoQv offset 0xffffffff size 0x4
static constexpr int32_t  HjJtxQyNKhILoEmcQZSLZQugeoQv{static_cast<int32_t>(0x3c)};

/// @brief Field JDxroJPaHAKuOETbXtdomjmcSaSs offset 0xffffffff size 0x4
static constexpr float_t  JDxroJPaHAKuOETbXtdomjmcSaSs{static_cast<float_t>(268435460.0f)};

/// @brief Field JaBfGTgDWzstKDRbslLYbwxUrUWP offset 0xffffffff size 0x4
static constexpr int32_t  JaBfGTgDWzstKDRbslLYbwxUrUWP{static_cast<int32_t>(0x0)};

/// @brief Field KEXKNeIOpNiJPOarKLUMLBtRLRPD offset 0xffffffff size 0x1
static constexpr uint8_t  KEXKNeIOpNiJPOarKLUMLBtRLRPD{static_cast<uint8_t>(0xa1u)};

/// @brief Field KHSvgWzkRYAxpvHmkfojEfbfnAvaA offset 0xffffffff size 0x4
static constexpr int32_t  KHSvgWzkRYAxpvHmkfojEfbfnAvaA{static_cast<int32_t>(0x1e)};

/// @brief Field LidAHeDQjqsvbqSveLmRnTocfBOU offset 0xffffffff size 0x4
static constexpr float_t  LidAHeDQjqsvbqSveLmRnTocfBOU{static_cast<float_t>(4.0f)};

/// @brief Field NybAGUkKtzgSXnfPgTstbfMXEiIoA offset 0xffffffff size 0x4
static constexpr int32_t  NybAGUkKtzgSXnfPgTstbfMXEiIoA{static_cast<int32_t>(0x0)};

/// @brief Field OLkLFYNzrIulGILgUaxAfaMrsMCGA offset 0xffffffff size 0x4
static constexpr int32_t  OLkLFYNzrIulGILgUaxAfaMrsMCGA{static_cast<int32_t>(0x4e)};

/// @brief Field OzwQNIAwBwWbExGYbiFlYbXedQbP offset 0xffffffff size 0x4
static constexpr int32_t  OzwQNIAwBwWbExGYbiFlYbXedQbP{static_cast<int32_t>(0x0)};

/// @brief Field PLjsuatBPTlTlRhOsGcnCjkiVbRK offset 0xffffffff size 0x4
static constexpr int32_t  PLjsuatBPTlTlRhOsGcnCjkiVbRK{static_cast<int32_t>(0x6)};

/// @brief Field PVWJdaVuXLFRmkRPOQrSfiQoXebf offset 0xffffffff size 0x1
static constexpr bool  PVWJdaVuXLFRmkRPOQrSfiQoXebf{true};

/// @brief Field QscrUFPJWKKKKNbNrsxemNtnyTcI offset 0xffffffff size 0x1
static constexpr uint8_t  QscrUFPJWKKKKNbNrsxemNtnyTcI{static_cast<uint8_t>(0x29u)};

/// @brief Field RETQdxVPySDSzyIwdzqRCRUHSvFb offset 0xffffffff size 0x4
static constexpr int32_t  RETQdxVPySDSzyIwdzqRCRUHSvFb{static_cast<int32_t>(0x2)};

/// @brief Field RuRYLgeeexmbupWyTIMBjhSzQRox offset 0xffffffff size 0x4
static constexpr int32_t  RuRYLgeeexmbupWyTIMBjhSzQRox{static_cast<int32_t>(0x8)};

/// @brief Field SVnDqLCstcEdLaHcbDHGCIJQAABTB offset 0xffffffff size 0x1
static constexpr uint8_t  SVnDqLCstcEdLaHcbDHGCIJQAABTB{static_cast<uint8_t>(0x5u)};

/// @brief Field SrClqtlEfszBPXGGxIakErvUjHOxA offset 0xffffffff size 0x4
static constexpr int32_t  SrClqtlEfszBPXGGxIakErvUjHOxA{static_cast<int32_t>(0x1)};

/// @brief Field TGVjYyhzjeZVWLcQBVMUaOJxRtNE offset 0xffffffff size 0x4
static constexpr int32_t  TGVjYyhzjeZVWLcQBVMUaOJxRtNE{static_cast<int32_t>(0x1b)};

/// @brief Field ULcbTkrYDqrPqwhPrwibGmsTedVC offset 0xffffffff size 0x4
static constexpr float_t  ULcbTkrYDqrPqwhPrwibGmsTedVC{static_cast<float_t>(8192.0f)};

/// @brief Field UgBcnaJpgZqhoqkLnMjzeIzxWWKx offset 0xffffffff size 0x1
static constexpr uint8_t  UgBcnaJpgZqhoqkLnMjzeIzxWWKx{static_cast<uint8_t>(0x35u)};

/// @brief Field UrrEPtHykRHUhXatveksZhAvxqzM offset 0xffffffff size 0x4
static constexpr int32_t  UrrEPtHykRHUhXatveksZhAvxqzM{static_cast<int32_t>(0xa)};

/// @brief Field VUyXcpqLmolmBovPFzDReuXZfDL offset 0xffffffff size 0x4
static constexpr int32_t  VUyXcpqLmolmBovPFzDReuXZfDL{static_cast<int32_t>(0xe)};

/// @brief Field WwoySxJqibyVkehcamrcMDhgQbAY offset 0xffffffff size 0x4
static constexpr int32_t  WwoySxJqibyVkehcamrcMDhgQbAY{static_cast<int32_t>(0x3)};

/// @brief Field XJPxuoGCUtMMbhWeATlMwkUWDgGb offset 0xffffffff size 0x4
static constexpr int32_t  XJPxuoGCUtMMbhWeATlMwkUWDgGb{static_cast<int32_t>(0x0)};

/// @brief Field XlJbVodVhYxDpUuDpwkacrWpgjbT offset 0xffffffff size 0x1
static constexpr uint8_t  XlJbVodVhYxDpUuDpwkacrWpgjbT{static_cast<uint8_t>(0x5u)};

/// @brief Field YODMqWdcLbioXeIurLVrzCDNWUCp offset 0xffffffff size 0x4
static constexpr int32_t  YODMqWdcLbioXeIurLVrzCDNWUCp{static_cast<int32_t>(0xd)};

/// @brief Field YSZDYaNbZoYVvSkCXDuSIPouXFhF offset 0xffffffff size 0x4
static constexpr int32_t  YSZDYaNbZoYVvSkCXDuSIPouXFhF{static_cast<int32_t>(0x3ad)};

/// @brief Field YWoEwzNCgViKDjBUZfstpyxaZcFk offset 0xffffffff size 0x4
static constexpr int32_t  YWoEwzNCgViKDjBUZfstpyxaZcFk{static_cast<int32_t>(0x23)};

/// @brief Field ZMEGNtAZxJhEgDxfzwcIuTBCqamD offset 0xffffffff size 0x4
static constexpr int32_t  ZMEGNtAZxJhEgDxfzwcIuTBCqamD{static_cast<int32_t>(0x3c)};

/// @brief Field ZZRVUpNpYEYxLJSqUyFjHAAfjfoO offset 0xffffffff size 0x4
static constexpr float_t  ZZRVUpNpYEYxLJSqUyFjHAAfjfoO{static_cast<float_t>(0.0010652969f)};

/// @brief Field ZkteENqLyAbOnzJGzpYiQCgLbJio offset 0xffffffff size 0x1
static constexpr bool  ZkteENqLyAbOnzJGzpYiQCgLbJio{true};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6618};

/// @brief Field aaFwrwlQdIxVvsxULeVmMtNqpGnE offset 0xffffffff size 0x4
static constexpr float_t  aaFwrwlQdIxVvsxULeVmMtNqpGnE{static_cast<float_t>(0.01999998f)};

/// @brief Field dCXpNoCMhyObPwfJVmyrKMxjHlkG offset 0xffffffff size 0x4
static constexpr float_t  dCXpNoCMhyObPwfJVmyrKMxjHlkG{static_cast<float_t>(20.0f)};

/// @brief Field ejLEYusWHfRFKsRkdBxDBlCTakZG offset 0xffffffff size 0x1
static constexpr bool  ejLEYusWHfRFKsRkdBxDBlCTakZG{true};

/// @brief Field fOtNLTXMOKcXucGRwsGyvTwiwqtT offset 0xffffffff size 0x4
static constexpr int32_t  fOtNLTXMOKcXucGRwsGyvTwiwqtT{static_cast<int32_t>(0x13)};

/// @brief Field fUnyTekDJdnrKCOJnrBuvBLTikKT offset 0xffffffff size 0x4
static constexpr int32_t  fUnyTekDJdnrKCOJnrBuvBLTikKT{static_cast<int32_t>(0x5)};

/// @brief Field gDnSKpVTkjXgmmnvFrwWdQUUtSxF offset 0xffffffff size 0x4
static constexpr int32_t  gDnSKpVTkjXgmmnvFrwWdQUUtSxF{static_cast<int32_t>(0x0)};

/// @brief Field gSeHqbXRLGqTalGqQdxHHJFIMynaA offset 0xffffffff size 0x4
static constexpr int32_t  gSeHqbXRLGqTalGqQdxHHJFIMynaA{static_cast<int32_t>(0x1)};

/// @brief Field gdzKxZydJfWhGIyRVVVsUnaZfpnKA offset 0xffffffff size 0x1
static constexpr uint8_t  gdzKxZydJfWhGIyRVVVsUnaZfpnKA{static_cast<uint8_t>(0x11u)};

/// @brief Field iBcmAvHZSsvifehUaXYaqkeAgGac offset 0xffffffff size 0x1
static constexpr uint8_t  iBcmAvHZSsvifehUaXYaqkeAgGac{static_cast<uint8_t>(0x2u)};

/// @brief Field jUgrytYEEgHxjZnXViiPAMNlAjmX offset 0xffffffff size 0x1
static constexpr bool  jUgrytYEEgHxjZnXViiPAMNlAjmX{false};

/// @brief Field jisHvgfzqfVklJylykCqEIdjYMDw offset 0xffffffff size 0x4
static constexpr int32_t  jisHvgfzqfVklJylykCqEIdjYMDw{static_cast<int32_t>(0x0)};

/// @brief Field ktBPiTezewPtlVFVMiUWPnxrlhZk offset 0xffffffff size 0x4
static constexpr float_t  ktBPiTezewPtlVFVMiUWPnxrlhZk{static_cast<float_t>(0.98f)};

/// @brief Field lUACmnOHNwFEDzuNuDthyIcjlKFq offset 0xffffffff size 0x4
static constexpr int32_t  lUACmnOHNwFEDzuNuDthyIcjlKFq{static_cast<int32_t>(0x1)};

/// @brief Field lUjGcQvOmQhAirfRPVxpOqzJOLsK offset 0xffffffff size 0x4
static constexpr int32_t  lUjGcQvOmQhAirfRPVxpOqzJOLsK{static_cast<int32_t>(0x11)};

/// @brief Field lXXamxhgTUwXbElUFvSyPllyKjtyA offset 0xffffffff size 0x4
static constexpr int32_t  lXXamxhgTUwXbElUFvSyPllyKjtyA{static_cast<int32_t>(0x5)};

/// @brief Field llznjOnALnZiGTTbKhMLvOxByIMD offset 0xffffffff size 0x1
static constexpr uint8_t  llznjOnALnZiGTTbKhMLvOxByIMD{static_cast<uint8_t>(0x25u)};

/// @brief Field loagqEyQwmjZGYCNpaVuosmlfUrGA offset 0xffffffff size 0x4
static constexpr int32_t  loagqEyQwmjZGYCNpaVuosmlfUrGA{static_cast<int32_t>(0x0)};

/// @brief Field mHOUCyTHCvUCAKDwclVcsREntbDD offset 0xffffffff size 0x4
static constexpr float_t  mHOUCyTHCvUCAKDwclVcsREntbDD{static_cast<float_t>(0.06103702f)};

/// @brief Field ompONPqgEdaetYeAZggbuijgfcnJ offset 0xffffffff size 0x1
static constexpr uint8_t  ompONPqgEdaetYeAZggbuijgfcnJ{static_cast<uint8_t>(0xa3u)};

/// @brief Field qAuBdiLuKCaWVdPddxEkiPoLnTEkA offset 0xffffffff size 0x1
static constexpr bool  qAuBdiLuKCaWVdPddxEkiPoLnTEkA{true};

/// @brief Field qGyqNZvRiKBtuFYMSnIHqSeLCaec offset 0xffffffff size 0x4
static constexpr float_t  qGyqNZvRiKBtuFYMSnIHqSeLCaec{static_cast<float_t>(8192.0f)};

/// @brief Field qNInDxpbiHbZOTQoGeCqPqzImYUk offset 0xffffffff size 0x4
static constexpr float_t  qNInDxpbiHbZOTQoGeCqPqzImYUk{static_cast<float_t>(45.0f)};

/// @brief Field rNCBGBqSoELHUgFTtDkLBTOUgycp offset 0xffffffff size 0x1
static constexpr uint8_t  rNCBGBqSoELHUgFTtDkLBTOUgycp{static_cast<uint8_t>(0x10u)};

/// @brief Field rhuscAOkhPjYSfPteWPQKReNDKjWA offset 0xffffffff size 0x4
static constexpr float_t  rhuscAOkhPjYSfPteWPQKReNDKjWA{static_cast<float_t>(2.5f)};

/// @brief Field uGOWaLwRZlOnNwErdCTlzJXlKtWH offset 0xffffffff size 0x1
static constexpr uint8_t  uGOWaLwRZlOnNwErdCTlzJXlKtWH{static_cast<uint8_t>(0xa2u)};

/// @brief Field uNBzHGBfLaenZpzfVgxSZvGiVZeP offset 0xffffffff size 0x4
static constexpr int32_t  uNBzHGBfLaenZpzfVgxSZvGiVZeP{static_cast<int32_t>(0x778)};

/// @brief Field umCOzHYBXIEuNOBgtzHISyzXIDly offset 0xffffffff size 0x4
static constexpr float_t  umCOzHYBXIEuNOBgtzHISyzXIDly{static_cast<float_t>(16384.0f)};

/// @brief Field vAMwvQlDoYEeMwMFyazTRuRwfyvs offset 0xffffffff size 0x4
static constexpr int32_t  vAMwvQlDoYEeMwMFyazTRuRwfyvs{static_cast<int32_t>(0x4)};

/// @brief Field vEhXELRTLoRCEjJlLEdkDtIEZrkv offset 0xffffffff size 0x1
static constexpr bool  vEhXELRTLoRCEjJlLEdkDtIEZrkv{true};

/// @brief Field vklJNixEvNGKzmBqPEQzopwiMPaL offset 0xffffffff size 0x4
static constexpr int32_t  vklJNixEvNGKzmBqPEQzopwiMPaL{static_cast<int32_t>(0x40)};

/// @brief Field xCoDwrgzWyjiAdwSOpWXIBFWlPawA offset 0xffffffff size 0x4
static constexpr int32_t  xCoDwrgzWyjiAdwSOpWXIBFWlPawA{static_cast<int32_t>(0x2dc6c)};

/// @brief Field xZZWMVSxOqEqCOgIEEhejjVLpPzjb offset 0xffffffff size 0x1
static constexpr uint8_t  xZZWMVSxOqEqCOgIEEhejjVLpPzjb{static_cast<uint8_t>(0x31u)};

/// @brief Field zIwTRVHDSQvRjbkEhOQzBxSttNrm offset 0xffffffff size 0x4
static constexpr int32_t  zIwTRVHDSQvRjbkEhOQzBxSttNrm{static_cast<int32_t>(0x9)};

/// @brief Field zWWuFXCudJhUVAkGXExBDAoUISsab offset 0xffffffff size 0x4
static constexpr int32_t  zWWuFXCudJhUVAkGXExBDAoUISsab{static_cast<int32_t>(0x0)};

/// @brief Field EotaYjAVqBgUOzpOKxUkStmwgYkO, offset: 0x58, size: 0x8, def value: None
 ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*  ___EotaYjAVqBgUOzpOKxUkStmwgYkO;

/// @brief Field meNcBmSPTgvJUNGboVLuKtnOcKn, offset: 0x60, size: 0x28, def value: None
 ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties  ___meNcBmSPTgvJUNGboVLuKtnOcKn;

/// @brief Field PKPlHLdomCFmUXsfRymbekCMbtMiA, offset: 0x88, size: 0x1, def value: None
 bool  ___PKPlHLdomCFmUXsfRymbekCMbtMiA;

/// @brief Field hiiUVHzeLdAuvGZzORyhjSrcunez, offset: 0x8c, size: 0x4, def value: None
 ::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM  ___hiiUVHzeLdAuvGZzORyhjSrcunez;

/// @brief Field IDWvrPpoyOValIVIHUGgJwzJzOnb, offset: 0x90, size: 0x4, def value: None
 int32_t  ___IDWvrPpoyOValIVIHUGgJwzJzOnb;

/// @brief Field jNVBFuHqnBZFhrALAQOenUeKWAUHA, offset: 0x94, size: 0x4, def value: None
 int32_t  ___jNVBFuHqnBZFhrALAQOenUeKWAUHA;

/// @brief Field yjIIvxhkJwJTJwAALQnDOUwSnUmD, offset: 0x98, size: 0x1, def value: None
 bool  ___yjIIvxhkJwJTJwAALQnDOUwSnUmD;

/// @brief Field OzuHdKXoMPmqzNbFiIPQkEOiwHNhA, offset: 0x99, size: 0x1, def value: None
 uint8_t  ___OzuHdKXoMPmqzNbFiIPQkEOiwHNhA;

/// @brief Field OQtEiQAFeWmpbhTIuIFVihCCRVRnc, offset: 0x9c, size: 0x4, def value: None
 int32_t  ___OQtEiQAFeWmpbhTIuIFVihCCRVRnc;

/// @brief Field WcxglMjgVUHIWzNpabLwTaGfbuuv, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___WcxglMjgVUHIWzNpabLwTaGfbuuv;

/// @brief Field IQdSgPvGVeGdPQNKzXnzKukZQfom, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___IQdSgPvGVeGdPQNKzXnzKukZQfom;

/// @brief Field UyfGIPygFRahjvjCtebKKLKaIBzxA, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___UyfGIPygFRahjvjCtebKKLKaIBzxA;

/// @brief Field RNDzGCLsvNuUmJJPwdlmCGFeSyic, offset: 0xb0, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::NativeBuffer*  ___RNDzGCLsvNuUmJJPwdlmCGFeSyic;

/// @brief Field rskSnrSEaaCHcTmlUjoqhkLRndqSA, offset: 0xb8, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::NativeBuffer*  ___rskSnrSEaaCHcTmlUjoqhkLRndqSA;

/// @brief Field bCPcntrGTFvwfYYjuLlyuWfuiveQ, offset: 0xc0, size: 0x18, def value: None
 ::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG  ___bCPcntrGTFvwfYYjuLlyuWfuiveQ;

/// @brief Field ImQwYKuIhdUtciEdRXqXalPRxKGk, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___ImQwYKuIhdUtciEdRXqXalPRxKGk;

/// @brief Field aZoVjSxeXslpOHyTbkeXMDFIFYYb, offset: 0xe0, size: 0x1, def value: None
 bool  ___aZoVjSxeXslpOHyTbkeXMDFIFYYb;

/// @brief Field mqBhSMYmCRDrejzGFOuRmyfRXvTc, offset: 0xe1, size: 0x1, def value: None
 bool  ___mqBhSMYmCRDrejzGFOuRmyfRXvTc;

/// @brief Field EpWgPGsHfmolrYtFAasEgQGbejRt, offset: 0xe8, size: 0x8, def value: None
 double_t  ___EpWgPGsHfmolrYtFAasEgQGbejRt;

/// @brief Field TDfzHDoRedLrYqkmSbLmFgiyGbVAb, offset: 0xf0, size: 0x4, def value: None
 int32_t  ___TDfzHDoRedLrYqkmSbLmFgiyGbVAb;

/// @brief Field bMQFdHQLzjgaFlxxjmMEVHncSAQX, offset: 0xf4, size: 0x4, def value: None
 ::Rewired::HID::Drivers::DualShock4Driver_nmKxCglDPAyUaUDHaiNQJeQrZWrZ  ___bMQFdHQLzjgaFlxxjmMEVHncSAQX;

/// @brief Field nKetEAfsOsGUaqlriinYFqmkGTVD, offset: 0xf8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___nKetEAfsOsGUaqlriinYFqmkGTVD;

/// @brief Field YViMCrbNxgYMTLqNFWLslvtPiwNu, offset: 0x108, size: 0x2, def value: None
 uint16_t  ___YViMCrbNxgYMTLqNFWLslvtPiwNu;

/// @brief Field DEEgMBQxNgzHaGYdBcFUlpZnOLOE, offset: 0x10c, size: 0x4, def value: None
 float_t  ___DEEgMBQxNgzHaGYdBcFUlpZnOLOE;

/// @brief Field CQrJSkQpQVIJBUNAREKSjflEdbiAA, offset: 0x110, size: 0x8, def value: None
 double_t  ___CQrJSkQpQVIJBUNAREKSjflEdbiAA;

/// @brief Field BEtSwJwVgWRWxLYiEqVWfbKhWdYm, offset: 0x118, size: 0x4, def value: None
 float_t  ___BEtSwJwVgWRWxLYiEqVWfbKhWdYm;

/// @brief Field ofKsxquFnEsnehIObKJTjQWGDVJV, offset: 0x11c, size: 0x1, def value: None
 bool  ___ofKsxquFnEsnehIObKJTjQWGDVJV;

/// @brief Field PbvSSRrjXUIYLQMtTHBbkitIzmCR, offset: 0x11d, size: 0x1, def value: None
 bool  ___PbvSSRrjXUIYLQMtTHBbkitIzmCR;

/// @brief Field FVLmGNDRfVXfGBGYndMzoolmRAhP, offset: 0x11e, size: 0x1, def value: None
 bool  ___FVLmGNDRfVXfGBGYndMzoolmRAhP;

/// @brief Field YDvDtkSMUCenUfWweXByYBXkaIXw, offset: 0x11f, size: 0x1, def value: None
 bool  ___YDvDtkSMUCenUfWweXByYBXkaIXw;

/// @brief Field AgAGrzIgdXuMiCbdxPIcIMEEwWtdc, offset: 0x120, size: 0x1, def value: None
 uint8_t  ___AgAGrzIgdXuMiCbdxPIcIMEEwWtdc;

/// @brief Field ydyMhyMWoiAiiVkYaEPJYKiKnaFT, offset: 0x121, size: 0x1, def value: None
 uint8_t  ___ydyMhyMWoiAiiVkYaEPJYKiKnaFT;

/// @brief Field KOtwpCqjpFZevCkckdEkgjkxDBXgA, offset: 0x124, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___KOtwpCqjpFZevCkckdEkgjkxDBXgA;

/// @brief Field IpjFnhrkxIaAWjnVDtVlfqDkmtMF, offset: 0x134, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___IpjFnhrkxIaAWjnVDtVlfqDkmtMF;

/// @brief Field zTAgsMGuMYZtAMauAmOUHPPGcrZn, offset: 0x144, size: 0x1, def value: None
 bool  ___zTAgsMGuMYZtAMauAmOUHPPGcrZn;

/// @brief Field PMdbQLLpYtNWgjDLDfFwkNTNXOcY, offset: 0x148, size: 0x4, def value: None
 int32_t  ___PMdbQLLpYtNWgjDLDfFwkNTNXOcY;

/// @brief Field eNQnkUWZUGmgRrOpFXwSwuqBusRQ, offset: 0x150, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___eNQnkUWZUGmgRrOpFXwSwuqBusRQ;

/// @brief Field xeyZlJHkRntAunSivqMeAcPISoRd, offset: 0x158, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___xeyZlJHkRntAunSivqMeAcPISoRd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___EotaYjAVqBgUOzpOKxUkStmwgYkO) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___meNcBmSPTgvJUNGboVLuKtnOcKn) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___PKPlHLdomCFmUXsfRymbekCMbtMiA) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___hiiUVHzeLdAuvGZzORyhjSrcunez) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___IDWvrPpoyOValIVIHUGgJwzJzOnb) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___jNVBFuHqnBZFhrALAQOenUeKWAUHA) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___yjIIvxhkJwJTJwAALQnDOUwSnUmD) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___OzuHdKXoMPmqzNbFiIPQkEOiwHNhA) == 0x99, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___OQtEiQAFeWmpbhTIuIFVihCCRVRnc) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___WcxglMjgVUHIWzNpabLwTaGfbuuv) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___IQdSgPvGVeGdPQNKzXnzKukZQfom) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___UyfGIPygFRahjvjCtebKKLKaIBzxA) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___RNDzGCLsvNuUmJJPwdlmCGFeSyic) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___rskSnrSEaaCHcTmlUjoqhkLRndqSA) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___bCPcntrGTFvwfYYjuLlyuWfuiveQ) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___ImQwYKuIhdUtciEdRXqXalPRxKGk) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___aZoVjSxeXslpOHyTbkeXMDFIFYYb) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___mqBhSMYmCRDrejzGFOuRmyfRXvTc) == 0xe1, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___EpWgPGsHfmolrYtFAasEgQGbejRt) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___TDfzHDoRedLrYqkmSbLmFgiyGbVAb) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___bMQFdHQLzjgaFlxxjmMEVHncSAQX) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___nKetEAfsOsGUaqlriinYFqmkGTVD) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___YViMCrbNxgYMTLqNFWLslvtPiwNu) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___DEEgMBQxNgzHaGYdBcFUlpZnOLOE) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___CQrJSkQpQVIJBUNAREKSjflEdbiAA) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___BEtSwJwVgWRWxLYiEqVWfbKhWdYm) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___ofKsxquFnEsnehIObKJTjQWGDVJV) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___PbvSSRrjXUIYLQMtTHBbkitIzmCR) == 0x11d, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___FVLmGNDRfVXfGBGYndMzoolmRAhP) == 0x11e, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___YDvDtkSMUCenUfWweXByYBXkaIXw) == 0x11f, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___AgAGrzIgdXuMiCbdxPIcIMEEwWtdc) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___ydyMhyMWoiAiiVkYaEPJYKiKnaFT) == 0x121, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___KOtwpCqjpFZevCkckdEkgjkxDBXgA) == 0x124, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___IpjFnhrkxIaAWjnVDtVlfqDkmtMF) == 0x134, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___zTAgsMGuMYZtAMauAmOUHPPGcrZn) == 0x144, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___PMdbQLLpYtNWgjDLDfFwkNTNXOcY) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___eNQnkUWZUGmgRrOpFXwSwuqBusRQ) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::DualShock4Driver, ___xeyZlJHkRntAunSivqMeAcPISoRd) == 0x158, "Offset mismatch!");

static_assert(sizeof(::Rewired::HID::Drivers::DualShock4Driver) == 0x160, "Size mismatch!");

} // namespace end def Rewired::HID::Drivers
