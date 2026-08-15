#pragma once
// IWYU pragma private; include "Rewired/Platforms/Windows/RawInput/RawInputControllerExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__Controller_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RawInputControllerExtension)
namespace GlobalNamespace {
class oWPFgpeSlWocBQyCgGTSipwKOPmnA;
}
namespace Rewired::ControllerExtensions {
class IHIDControllerExtension;
}
namespace Rewired::Interfaces {
class IControllerExtensionSource;
}
namespace Rewired::Platforms::Windows::RawInput {
class RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
class Joystick;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace System {
struct Guid;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Rewired::Platforms::Windows::RawInput {
class RawInputControllerExtension;
}
namespace Rewired::Platforms::Windows::RawInput {
class RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension*);
MARK_REF_T(::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension*, "Rewired.Platforms.Windows.RawInput", "RawInputControllerExtension");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab*, "Rewired.Platforms.Windows.RawInput", "RawInputControllerExtension/ykTesfdtbEvKDDrFCWgWczcFbkxab");
// Dependencies System.Object
namespace Rewired::Platforms::Windows::RawInput {
// Is value type: false
// CS Name: Rewired.Platforms.Windows.RawInput.RawInputControllerExtension/ykTesfdtbEvKDDrFCWgWczcFbkxab
class CORDL_TYPE RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab : public ::System::Object {
public:
// Declarations
/// @brief Field JfsnLHNCknobZqiNPxaTYfLweRQhA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_JfsnLHNCknobZqiNPxaTYfLweRQhA, put=__cordl_internal_set_JfsnLHNCknobZqiNPxaTYfLweRQhA)) ::GlobalNamespace::oWPFgpeSlWocBQyCgGTSipwKOPmnA*  JfsnLHNCknobZqiNPxaTYfLweRQhA;

 __declspec(property(get=pmNOSfmhHagnTEYpZeLeeImjPNsuA)) ::GlobalNamespace::oWPFgpeSlWocBQyCgGTSipwKOPmnA*  qyEmAxddEuhInDryPZbJFMJhnNDLA;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr operator  ::Rewired::Interfaces::IControllerExtensionSource*() noexcept;

static inline ::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab* New_ctor(::GlobalNamespace::oWPFgpeSlWocBQyCgGTSipwKOPmnA*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::GlobalNamespace::oWPFgpeSlWocBQyCgGTSipwKOPmnA* const& __cordl_internal_get_JfsnLHNCknobZqiNPxaTYfLweRQhA() const;

constexpr ::GlobalNamespace::oWPFgpeSlWocBQyCgGTSipwKOPmnA*& __cordl_internal_get_JfsnLHNCknobZqiNPxaTYfLweRQhA() ;

constexpr void __cordl_internal_set_JfsnLHNCknobZqiNPxaTYfLweRQhA(::GlobalNamespace::oWPFgpeSlWocBQyCgGTSipwKOPmnA*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::oWPFgpeSlWocBQyCgGTSipwKOPmnA*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr ::Rewired::Interfaces::IControllerExtensionSource* i___Rewired__Interfaces__IControllerExtensionSource() noexcept;

/// @brief Method pmNOSfmhHagnTEYpZeLeeImjPNsuA, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::oWPFgpeSlWocBQyCgGTSipwKOPmnA* pmNOSfmhHagnTEYpZeLeeImjPNsuA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab(RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab(RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5951};

/// @brief Field JfsnLHNCknobZqiNPxaTYfLweRQhA, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::oWPFgpeSlWocBQyCgGTSipwKOPmnA*  ___JfsnLHNCknobZqiNPxaTYfLweRQhA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab, ___JfsnLHNCknobZqiNPxaTYfLweRQhA) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Platforms::Windows::RawInput
// Dependencies Rewired.Controller::Extension
namespace Rewired::Platforms::Windows::RawInput {
// Is value type: false
// CS Name: Rewired.Platforms.Windows.RawInput.RawInputControllerExtension
class CORDL_TYPE RawInputControllerExtension : public ::Rewired::Controller_Extension {
public:
// Declarations
using ykTesfdtbEvKDDrFCWgWczcFbkxab = ::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab;

/// @brief Field TSWjNAMgoaKpOQynQmmEAffJymSA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TSWjNAMgoaKpOQynQmmEAffJymSA, put=__cordl_internal_set_TSWjNAMgoaKpOQynQmmEAffJymSA)) ::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab*  TSWjNAMgoaKpOQynQmmEAffJymSA;

 __declspec(property(get=get_bluetoothDeviceName)) ::StringW  bluetoothDeviceName;

 __declspec(property(get=get_devicePath)) ::StringW  devicePath;

 __declspec(property(get=get_hidDeviceHandle)) ::System::IntPtr  hidDeviceHandle;

 __declspec(property(get=get_hubId)) int32_t  hubId;

 __declspec(property(get=get_isBluetoothDevice)) bool  isBluetoothDevice;

 __declspec(property(get=UwRedgcMMKrNoAIroPLjAxOalHzP)) ::Rewired::Joystick*  joystick;

/// @brief Field keNozncpPYQyPzyLOiEWVjeUWrBw, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_keNozncpPYQyPzyLOiEWVjeUWrBw, put=__cordl_internal_set_keNozncpPYQyPzyLOiEWVjeUWrBw)) bool  keNozncpPYQyPzyLOiEWVjeUWrBw;

 __declspec(property(get=get_manufacturer)) ::StringW  manufacturer;

 __declspec(property(get=get_portId)) int32_t  portId;

 __declspec(property(get=get_productGuid)) ::System::Guid  productGuid;

 __declspec(property(get=get_productId)) uint16_t  productId;

 __declspec(property(get=get_productName)) ::StringW  productName;

 __declspec(property(get=get_rawInputDeviceHandle)) ::System::IntPtr  rawInputDeviceHandle;

 __declspec(property(get=get_usage)) uint16_t  usage;

 __declspec(property(get=get_usagePage)) uint16_t  usagePage;

 __declspec(property(get=get_vendorId)) uint16_t  vendorId;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr operator  ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept;

/// @brief Method Clone, addr 0x181a22d80, size 0x40, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* Clone() ;

static inline ::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension* New_ctor(::GlobalNamespace::oWPFgpeSlWocBQyCgGTSipwKOPmnA*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension* New_ctor(::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method SourceUpdated, addr 0x181a22dc0, size 0xb0, virtual true, abstract: false, final false
inline void SourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source) ;

/// @brief Method UpdateData, addr 0x181a0f6e0, size 0x10, virtual true, abstract: false, final false
inline void UpdateData(::Rewired::UpdateLoopType  updateLoop) ;

/// @brief Method UwRedgcMMKrNoAIroPLjAxOalHzP, addr 0x181884250, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Joystick* UwRedgcMMKrNoAIroPLjAxOalHzP() ;

constexpr ::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab* const& __cordl_internal_get_TSWjNAMgoaKpOQynQmmEAffJymSA() const;

constexpr ::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab*& __cordl_internal_get_TSWjNAMgoaKpOQynQmmEAffJymSA() ;

constexpr bool const& __cordl_internal_get_keNozncpPYQyPzyLOiEWVjeUWrBw() const;

constexpr bool& __cordl_internal_get_keNozncpPYQyPzyLOiEWVjeUWrBw() ;

constexpr void __cordl_internal_set_TSWjNAMgoaKpOQynQmmEAffJymSA(::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab*  value) ;

constexpr void __cordl_internal_set_keNozncpPYQyPzyLOiEWVjeUWrBw(bool  value) ;

/// @brief Method .ctor, addr 0x181a22e70, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::oWPFgpeSlWocBQyCgGTSipwKOPmnA*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1818ca6f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_bluetoothDeviceName, addr 0x181a22ed0, size 0xa0, virtual false, abstract: false, final false
inline ::StringW get_bluetoothDeviceName() ;

/// @brief Method get_devicePath, addr 0x181a22f70, size 0xc0, virtual false, abstract: false, final false
inline ::StringW get_devicePath() ;

/// @brief Method get_hidDeviceHandle, addr 0x181a23030, size 0xb0, virtual false, abstract: false, final false
inline ::System::IntPtr get_hidDeviceHandle() ;

/// @brief Method get_hubId, addr 0x181a230e0, size 0xa0, virtual false, abstract: false, final false
inline int32_t get_hubId() ;

/// @brief Method get_isBluetoothDevice, addr 0x181a23180, size 0x90, virtual false, abstract: false, final false
inline bool get_isBluetoothDevice() ;

/// @brief Method get_manufacturer, addr 0x181a23210, size 0xa0, virtual true, abstract: false, final true
inline ::StringW get_manufacturer() ;

/// @brief Method get_portId, addr 0x181a232b0, size 0xa0, virtual false, abstract: false, final false
inline int32_t get_portId() ;

/// @brief Method get_productGuid, addr 0x181a23350, size 0xd0, virtual false, abstract: false, final false
inline ::System::Guid get_productGuid() ;

/// @brief Method get_productId, addr 0x181a23420, size 0x90, virtual true, abstract: false, final true
inline uint16_t get_productId() ;

/// @brief Method get_productName, addr 0x181a234b0, size 0xa0, virtual true, abstract: false, final true
inline ::StringW get_productName() ;

/// @brief Method get_rawInputDeviceHandle, addr 0x181a23550, size 0x90, virtual false, abstract: false, final false
inline ::System::IntPtr get_rawInputDeviceHandle() ;

/// @brief Method get_usage, addr 0x181a23690, size 0xb0, virtual true, abstract: false, final true
inline uint16_t get_usage() ;

/// @brief Method get_usagePage, addr 0x181a235e0, size 0xb0, virtual true, abstract: false, final true
inline uint16_t get_usagePage() ;

/// @brief Method get_vendorId, addr 0x181a23740, size 0x90, virtual true, abstract: false, final true
inline uint16_t get_vendorId() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RawInputControllerExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RawInputControllerExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RawInputControllerExtension(RawInputControllerExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RawInputControllerExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RawInputControllerExtension(RawInputControllerExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5952};

/// @brief Field TSWjNAMgoaKpOQynQmmEAffJymSA, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension_ykTesfdtbEvKDDrFCWgWczcFbkxab*  ___TSWjNAMgoaKpOQynQmmEAffJymSA;

/// @brief Field keNozncpPYQyPzyLOiEWVjeUWrBw, offset: 0x30, size: 0x1, def value: None
 bool  ___keNozncpPYQyPzyLOiEWVjeUWrBw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension, ___TSWjNAMgoaKpOQynQmmEAffJymSA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension, ___keNozncpPYQyPzyLOiEWVjeUWrBw) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Windows::RawInput::RawInputControllerExtension) == 0x38, "Size mismatch!");

} // namespace end def Rewired::Platforms::Windows::RawInput
