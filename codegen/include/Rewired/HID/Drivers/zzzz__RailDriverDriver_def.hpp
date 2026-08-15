#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/RailDriverDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__WLETGeuJfanxUuxlAoBgHTRHTfCG_def.hpp"
#include "Rewired/HID/Drivers/zzzz__HIDDeviceDriver_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RailDriverDriver)
namespace GlobalNamespace {
struct fmjOcSgFrjmQzJlrXgwToxkjNXXo;
}
namespace GlobalNamespace {
class nxSccnjzMkUjLoMzgjhhzPVcPAxF;
}
namespace Rewired::ControllerExtensions {
class IHIDControllerExtension;
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
class IDriver_RailDriver;
}
namespace Rewired::HID::Drivers {
struct RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA;
}
namespace Rewired::Utils::Classes::Data {
class NativeBuffer;
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
// Forward declare root types
namespace Rewired::HID::Drivers {
struct RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA;
}
namespace Rewired::HID::Drivers {
class RailDriverDriver;
}
// Write type traits
MARK_VAL_T(::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA);
MARK_REF_T(::Rewired::HID::Drivers::RailDriverDriver*);
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA, "Rewired.HID.Drivers", "RailDriverDriver/PhinPfZMESbSnHPnOlAMlgizPhiCA");
DEFINE_IL2CPP_CLASS(::Rewired::HID::Drivers::RailDriverDriver*, "Rewired.HID.Drivers", "RailDriverDriver");
// Dependencies 
namespace Rewired::HID::Drivers {
// Is value type: true
// CS Name: Rewired.HID.Drivers.RailDriverDriver/PhinPfZMESbSnHPnOlAMlgizPhiCA
struct CORDL_TYPE RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA_Unwrapped
enum struct __RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA_Unwrapped : int32_t {
__E_Speaker = static_cast<int32_t>(0x0),
__E_LED = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA_Unwrapped () const noexcept {
return static_cast<__RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA(int32_t  value__) noexcept;

/// @brief Field LED value: I32(1)
static ::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA const LED;

/// @brief Field Speaker value: I32(0)
static ::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA const Speaker;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6636};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA) == 0x4, "Size mismatch!");

} // namespace end def Rewired::HID::Drivers
// Dependencies Rewired.HID.Drivers.HIDDeviceDriver, Rewired.HID.Drivers.HIDDeviceDriver::HIDProperties, WLETGeuJfanxUuxlAoBgHTRHTfCG
namespace Rewired::HID::Drivers {
// Is value type: false
// CS Name: Rewired.HID.Drivers.RailDriverDriver
class CORDL_TYPE RailDriverDriver : public ::Rewired::HID::Drivers::HIDDeviceDriver {
public:
// Declarations
using PhinPfZMESbSnHPnOlAMlgizPhiCA = ::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA;

/// @brief Field QXRDlKfZjoWlvJuxRyIYqvogUzTC, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_QXRDlKfZjoWlvJuxRyIYqvogUzTC, put=__cordl_internal_set_QXRDlKfZjoWlvJuxRyIYqvogUzTC)) ::Rewired::Utils::Classes::Data::NativeBuffer*  QXRDlKfZjoWlvJuxRyIYqvogUzTC;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer)) ::StringW  Rewired_ControllerExtensions_IHIDControllerExtension_manufacturer;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_productId)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_productId;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_productName)) ::StringW  Rewired_ControllerExtensions_IHIDControllerExtension_productName;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_usage)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_usage;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_usagePage;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_vendorId;

/// @brief Field SSkeLqafBdJGBpvKLEolBfjfmPaD, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_SSkeLqafBdJGBpvKLEolBfjfmPaD, put=__cordl_internal_set_SSkeLqafBdJGBpvKLEolBfjfmPaD)) ::ArrayW<uint8_t>  SSkeLqafBdJGBpvKLEolBfjfmPaD;

 __declspec(property(get=get_SpeakerEnabled, put=set_SpeakerEnabled)) bool  SpeakerEnabled;

/// @brief Field UlqnEHxkiWvnhoZDCumDdOavClzf, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_UlqnEHxkiWvnhoZDCumDdOavClzf, put=__cordl_internal_set_UlqnEHxkiWvnhoZDCumDdOavClzf)) bool  UlqnEHxkiWvnhoZDCumDdOavClzf;

/// @brief Field ZWjHVcLbwTSyLccpgdQcjiWenxtf, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZWjHVcLbwTSyLccpgdQcjiWenxtf, put=__cordl_internal_set_ZWjHVcLbwTSyLccpgdQcjiWenxtf)) ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*  ZWjHVcLbwTSyLccpgdQcjiWenxtf;

/// @brief Field bvxSfagdoQExZFbvrhEZxmZhFjKb, offset 0x80, size 0x28 
 __declspec(property(get=__cordl_internal_get_bvxSfagdoQExZFbvrhEZxmZhFjKb, put=__cordl_internal_set_bvxSfagdoQExZFbvrhEZxmZhFjKb)) ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties  bvxSfagdoQExZFbvrhEZxmZhFjKb;

/// @brief Field eHoVmjdpWnxUaCsagbvbDGUKzXAU, offset 0xa8, size 0x18 
 __declspec(property(get=__cordl_internal_get_eHoVmjdpWnxUaCsagbvbDGUKzXAU, put=__cordl_internal_set_eHoVmjdpWnxUaCsagbvbDGUKzXAU)) ::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG  eHoVmjdpWnxUaCsagbvbDGUKzXAU;

/// @brief Field mwWtjpZGAYGufSRCtwgcmrOSNLWK, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_mwWtjpZGAYGufSRCtwgcmrOSNLWK, put=__cordl_internal_set_mwWtjpZGAYGufSRCtwgcmrOSNLWK)) ::Rewired::Utils::Classes::Data::NativeBuffer*  mwWtjpZGAYGufSRCtwgcmrOSNLWK;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr operator  ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept;

/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr operator  ::Rewired::HID::Drivers::IControllerDriver*() noexcept;

/// @brief Convert operator to "::Rewired::HID::Drivers::IDriver_RailDriver"
constexpr operator  ::Rewired::HID::Drivers::IDriver_RailDriver*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ACymrcHNQNWdsDZQaMZlCNCEnexm, addr 0x181abba70, size 0x140, virtual false, abstract: false, final false
inline bool ACymrcHNQNWdsDZQaMZlCNCEnexm(::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method CreateControllerExtension, addr 0x181abbbb0, size 0x40, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* CreateControllerExtension() ;

/// @brief Method Dispose, addr 0x181abbbf0, size 0x60, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x181abbc50, size 0x70, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method IlCbGyHsGnzOvpXfpEcOEjvSXSTX, addr 0x181ab0360, size 0x80, virtual false, abstract: false, final false
inline void IlCbGyHsGnzOvpXfpEcOEjvSXSTX(::ArrayW<::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF*>  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Data::NativeBuffer*  _cordl_fixed_empty_name_whitespace_param_1, double_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method Matches, addr 0x181abbcc0, size 0x20, virtual false, abstract: false, final false
static inline bool Matches(int32_t  vid, int32_t  pid) ;

static inline ::Rewired::HID::Drivers::RailDriverDriver* New_ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ParseInputReport, addr 0x181abbce0, size 0xe0, virtual true, abstract: false, final false
inline bool ParseInputReport(::System::IntPtr  inputReportPtr, int32_t  inputReportLength, double_t  timestamp) ;

/// @brief Method RQEMjktmkTlAGWAydQMEHSGqbdyg, addr 0x181abbdc0, size 0x250, virtual false, abstract: false, final false
inline void RQEMjktmkTlAGWAydQMEHSGqbdyg(::Rewired::Utils::Classes::Data::NativeBuffer*  _cordl_fixed_empty_name_whitespace, double_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_manufacturer, addr 0x181abc010, size 0x10, virtual true, abstract: false, final true
inline ::StringW Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_productId, addr 0x181abc020, size 0x20, virtual true, abstract: false, final true
inline uint16_t Rewired_ControllerExtensions_IHIDControllerExtension_get_productId() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_productName, addr 0x181abc040, size 0x10, virtual true, abstract: false, final true
inline ::StringW Rewired_ControllerExtensions_IHIDControllerExtension_get_productName() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_usage, addr 0x181abc070, size 0x20, virtual true, abstract: false, final true
inline uint16_t Rewired_ControllerExtensions_IHIDControllerExtension_get_usage() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_usagePage, addr 0x181abc050, size 0x20, virtual true, abstract: false, final true
inline uint16_t Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_vendorId, addr 0x181abc090, size 0x10, virtual true, abstract: false, final true
inline uint16_t Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId() ;

/// @brief Method SetLEDDisplay, addr 0x181abc0e0, size 0xf0, virtual true, abstract: false, final true
inline void SetLEDDisplay(uint8_t  digit1BitValues, uint8_t  digit2BitValues, uint8_t  digit3BitValues) ;

/// @brief Method SetLEDDisplay, addr 0x181abc0a0, size 0x40, virtual true, abstract: false, final true
inline void SetLEDDisplay(int32_t  digitIndex, uint8_t  digitBitValues) ;

/// @brief Method Update, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Update(::Rewired::UpdateLoopType  updateLoop) ;

constexpr ::Rewired::Utils::Classes::Data::NativeBuffer* const& __cordl_internal_get_QXRDlKfZjoWlvJuxRyIYqvogUzTC() const;

constexpr ::Rewired::Utils::Classes::Data::NativeBuffer*& __cordl_internal_get_QXRDlKfZjoWlvJuxRyIYqvogUzTC() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_SSkeLqafBdJGBpvKLEolBfjfmPaD() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_SSkeLqafBdJGBpvKLEolBfjfmPaD() ;

constexpr bool const& __cordl_internal_get_UlqnEHxkiWvnhoZDCumDdOavClzf() const;

constexpr bool& __cordl_internal_get_UlqnEHxkiWvnhoZDCumDdOavClzf() ;

constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice* const& __cordl_internal_get_ZWjHVcLbwTSyLccpgdQcjiWenxtf() const;

constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*& __cordl_internal_get_ZWjHVcLbwTSyLccpgdQcjiWenxtf() ;

constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties const& __cordl_internal_get_bvxSfagdoQExZFbvrhEZxmZhFjKb() const;

constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties& __cordl_internal_get_bvxSfagdoQExZFbvrhEZxmZhFjKb() ;

constexpr ::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG const& __cordl_internal_get_eHoVmjdpWnxUaCsagbvbDGUKzXAU() const;

constexpr ::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG& __cordl_internal_get_eHoVmjdpWnxUaCsagbvbDGUKzXAU() ;

constexpr ::Rewired::Utils::Classes::Data::NativeBuffer* const& __cordl_internal_get_mwWtjpZGAYGufSRCtwgcmrOSNLWK() const;

constexpr ::Rewired::Utils::Classes::Data::NativeBuffer*& __cordl_internal_get_mwWtjpZGAYGufSRCtwgcmrOSNLWK() ;

constexpr void __cordl_internal_set_QXRDlKfZjoWlvJuxRyIYqvogUzTC(::Rewired::Utils::Classes::Data::NativeBuffer*  value) ;

constexpr void __cordl_internal_set_SSkeLqafBdJGBpvKLEolBfjfmPaD(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_UlqnEHxkiWvnhoZDCumDdOavClzf(bool  value) ;

constexpr void __cordl_internal_set_ZWjHVcLbwTSyLccpgdQcjiWenxtf(::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*  value) ;

constexpr void __cordl_internal_set_bvxSfagdoQExZFbvrhEZxmZhFjKb(::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties  value) ;

constexpr void __cordl_internal_set_eHoVmjdpWnxUaCsagbvbDGUKzXAU(::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG  value) ;

constexpr void __cordl_internal_set_mwWtjpZGAYGufSRCtwgcmrOSNLWK(::Rewired::Utils::Classes::Data::NativeBuffer*  value) ;

/// @brief Method .ctor, addr 0x181abc1d0, size 0x4d0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method gTrwdVrmzNcOVEopdtOQgtkTEAvdA, addr 0x181abc6a0, size 0x130, virtual false, abstract: false, final false
inline void gTrwdVrmzNcOVEopdtOQgtkTEAvdA(::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_SpeakerEnabled, addr 0x180347a60, size 0xe0, virtual true, abstract: false, final true
inline bool get_SpeakerEnabled() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept;

/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* i___Rewired__HID__Drivers__IControllerDriver() noexcept;

/// @brief Convert to "::Rewired::HID::Drivers::IDriver_RailDriver"
constexpr ::Rewired::HID::Drivers::IDriver_RailDriver* i___Rewired__HID__Drivers__IDriver_RailDriver() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_SpeakerEnabled, addr 0x181abc7d0, size 0x70, virtual true, abstract: false, final true
inline void set_SpeakerEnabled(bool  value) ;

/// @brief Method tundpagSUPiFXWzaRzIdzltKoyOj, addr 0x181abc840, size 0x1b0, virtual false, abstract: false, final false
inline bool tundpagSUPiFXWzaRzIdzltKoyOj(::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RailDriverDriver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RailDriverDriver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RailDriverDriver(RailDriverDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RailDriverDriver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RailDriverDriver(RailDriverDriver const& ) = delete;

/// @brief Field AUfbZbyRwJgYebgGMcATlgNVnVhn offset 0xffffffff size 0x4
static constexpr int32_t  AUfbZbyRwJgYebgGMcATlgNVnVhn{static_cast<int32_t>(0x3)};

/// @brief Field FhOUhOYCvUJyXyenKrIClwEjgaPF offset 0xffffffff size 0x4
static constexpr int32_t  FhOUhOYCvUJyXyenKrIClwEjgaPF{static_cast<int32_t>(0x2e)};

/// @brief Field HQrWthrKiSPXOicELtYcGoumqgmO offset 0xffffffff size 0x4
static constexpr int32_t  HQrWthrKiSPXOicELtYcGoumqgmO{static_cast<int32_t>(0x31)};

/// @brief Field IclFgdEFpHMuGIhHUJxedPwfFvSKb offset 0xffffffff size 0x4
static constexpr int32_t  IclFgdEFpHMuGIhHUJxedPwfFvSKb{static_cast<int32_t>(0x5)};

/// @brief Field IjncRyjRbeqacEYPitfthGBSInXbc offset 0xffffffff size 0x4
static constexpr int32_t  IjncRyjRbeqacEYPitfthGBSInXbc{static_cast<int32_t>(0xd2)};

/// @brief Field LrMrdFtTXxOciJjbLyiURNXeCgAk offset 0xffffffff size 0x4
static constexpr int32_t  LrMrdFtTXxOciJjbLyiURNXeCgAk{static_cast<int32_t>(0x2f)};

/// @brief Field MzQSxoWXgfWPfFXSlEYrnbYWwTTh offset 0xffffffff size 0x4
static constexpr int32_t  MzQSxoWXgfWPfFXSlEYrnbYWwTTh{static_cast<int32_t>(0x32)};

/// @brief Field NcUUNtHhmvTEYLavOHEkuqlrvdcP offset 0xffffffff size 0x4
static constexpr int32_t  NcUUNtHhmvTEYLavOHEkuqlrvdcP{static_cast<int32_t>(0x30)};

/// @brief Field OqTGEZOrGQSoUXrQzTHQwExWFdNbA offset 0xffffffff size 0x4
static constexpr int32_t  OqTGEZOrGQSoUXrQzTHQwExWFdNbA{static_cast<int32_t>(0x1)};

/// @brief Field QfnAZANayKgqRMIAagWfytqgSwHu offset 0xffffffff size 0x4
static constexpr int32_t  QfnAZANayKgqRMIAagWfytqgSwHu{static_cast<int32_t>(0x0)};

/// @brief Field WxkdGfchrEEystKVrZmhlglNwGjSA offset 0xffffffff size 0x4
static constexpr int32_t  WxkdGfchrEEystKVrZmhlglNwGjSA{static_cast<int32_t>(0x2c)};

/// @brief Field XuBgSkGTInpUJTntpkFweVaeTUCV offset 0xffffffff size 0x4
static constexpr int32_t  XuBgSkGTInpUJTntpkFweVaeTUCV{static_cast<int32_t>(0xf)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6637};

/// @brief Field csahQczFQcgxogcpOEqHqIFxgFtpA offset 0xffffffff size 0x4
static constexpr int32_t  csahQczFQcgxogcpOEqHqIFxgFtpA{static_cast<int32_t>(0x4)};

/// @brief Field eiQtZGfNVKOOIDAGCuGGZDXDSAfK offset 0xffffffff size 0x4
static constexpr int32_t  eiQtZGfNVKOOIDAGCuGGZDXDSAfK{static_cast<int32_t>(0x9)};

/// @brief Field fKEXphIqrXyhaYdQMBUNCxPOeDAo offset 0xffffffff size 0x4
static constexpr int32_t  fKEXphIqrXyhaYdQMBUNCxPOeDAo{static_cast<int32_t>(0x6)};

/// @brief Field gdKdSwBrbYqjrQjHMSOwBelANPTyA offset 0xffffffff size 0x4
static constexpr int32_t  gdKdSwBrbYqjrQjHMSOwBelANPTyA{static_cast<int32_t>(0x2c)};

/// @brief Field iFheqohSWaOzWcgoMfaUVhkJUOKu offset 0xffffffff size 0x4
static constexpr int32_t  iFheqohSWaOzWcgoMfaUVhkJUOKu{static_cast<int32_t>(0x5f3)};

/// @brief Field kTjLcUKpGBbyFeOppTJbkdbkyLEi offset 0xffffffff size 0x4
static constexpr int32_t  kTjLcUKpGBbyFeOppTJbkdbkyLEi{static_cast<int32_t>(0xe)};

/// @brief Field kyoRVZFtJZMVEOSgyDwDESMLyimh offset 0xffffffff size 0x4
static constexpr int32_t  kyoRVZFtJZMVEOSgyDwDESMLyimh{static_cast<int32_t>(0x3)};

/// @brief Field oEjVUnKBbrmRYKthscnsAfMqNEIs offset 0xffffffff size 0x4
static constexpr int32_t  oEjVUnKBbrmRYKthscnsAfMqNEIs{static_cast<int32_t>(0x8)};

/// @brief Field tclOdDCzuYGFSBCAqAeXCcPZeAAp offset 0xffffffff size 0x4
static constexpr int32_t  tclOdDCzuYGFSBCAqAeXCcPZeAAp{static_cast<int32_t>(0x6)};

/// @brief Field wZDErrCbhkjOBDPTDznYMMsHwlBVA offset 0xffffffff size 0x4
static constexpr int32_t  wZDErrCbhkjOBDPTDznYMMsHwlBVA{static_cast<int32_t>(0x7)};

/// @brief Field waoGhABkbnrLHnZsunMjVJuSziDRA offset 0xffffffff size 0x4
static constexpr int32_t  waoGhABkbnrLHnZsunMjVJuSziDRA{static_cast<int32_t>(0x2)};

/// @brief Field wcDMomSTxdSpDXucNrnGpiBKnOem offset 0xffffffff size 0x4
static constexpr int32_t  wcDMomSTxdSpDXucNrnGpiBKnOem{static_cast<int32_t>(0x7)};

/// @brief Field wkFzJcmQbSLKZgeMcRsNDwcctzyK offset 0xffffffff size 0x4
static constexpr int32_t  wkFzJcmQbSLKZgeMcRsNDwcctzyK{static_cast<int32_t>(0x2d)};

/// @brief Field QXRDlKfZjoWlvJuxRyIYqvogUzTC, offset: 0x58, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::NativeBuffer*  ___QXRDlKfZjoWlvJuxRyIYqvogUzTC;

/// @brief Field mwWtjpZGAYGufSRCtwgcmrOSNLWK, offset: 0x60, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::NativeBuffer*  ___mwWtjpZGAYGufSRCtwgcmrOSNLWK;

/// @brief Field UlqnEHxkiWvnhoZDCumDdOavClzf, offset: 0x68, size: 0x1, def value: None
 bool  ___UlqnEHxkiWvnhoZDCumDdOavClzf;

/// @brief Field SSkeLqafBdJGBpvKLEolBfjfmPaD, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___SSkeLqafBdJGBpvKLEolBfjfmPaD;

/// @brief Field ZWjHVcLbwTSyLccpgdQcjiWenxtf, offset: 0x78, size: 0x8, def value: None
 ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*  ___ZWjHVcLbwTSyLccpgdQcjiWenxtf;

/// @brief Field bvxSfagdoQExZFbvrhEZxmZhFjKb, offset: 0x80, size: 0x28, def value: None
 ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties  ___bvxSfagdoQExZFbvrhEZxmZhFjKb;

/// @brief Field eHoVmjdpWnxUaCsagbvbDGUKzXAU, offset: 0xa8, size: 0x18, def value: None
 ::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG  ___eHoVmjdpWnxUaCsagbvbDGUKzXAU;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::HID::Drivers::RailDriverDriver, ___QXRDlKfZjoWlvJuxRyIYqvogUzTC) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::RailDriverDriver, ___mwWtjpZGAYGufSRCtwgcmrOSNLWK) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::RailDriverDriver, ___UlqnEHxkiWvnhoZDCumDdOavClzf) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::RailDriverDriver, ___SSkeLqafBdJGBpvKLEolBfjfmPaD) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::RailDriverDriver, ___ZWjHVcLbwTSyLccpgdQcjiWenxtf) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::RailDriverDriver, ___bvxSfagdoQExZFbvrhEZxmZhFjKb) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rewired::HID::Drivers::RailDriverDriver, ___eHoVmjdpWnxUaCsagbvbDGUKzXAU) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Rewired::HID::Drivers::RailDriverDriver) == 0xc0, "Size mismatch!");

} // namespace end def Rewired::HID::Drivers
