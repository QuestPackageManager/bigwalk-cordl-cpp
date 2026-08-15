#pragma once
// IWYU pragma private; include "Rewired/Platforms/Microsoft/WindowsGamingInput/WindowsGamingInputControllerExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__Controller_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsGamingInputControllerExtension)
namespace GlobalNamespace {
class uJHrGgmLkVyxbRKtmSRRLXMJtWwr;
}
namespace Rewired::ControllerExtensions {
class IHIDControllerExtension;
}
namespace Rewired::Interfaces {
class IControllerExtensionSource;
}
namespace Rewired::Platforms::Microsoft::WindowsGamingInput {
struct DeviceType;
}
namespace Rewired::Platforms::Microsoft::WindowsGamingInput {
class WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB;
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
struct IntPtr;
}
// Forward declare root types
namespace Rewired::Platforms::Microsoft::WindowsGamingInput {
class WindowsGamingInputControllerExtension;
}
namespace Rewired::Platforms::Microsoft::WindowsGamingInput {
class WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension*);
MARK_REF_T(::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension*, "Rewired.Platforms.Microsoft.WindowsGamingInput", "WindowsGamingInputControllerExtension");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB*, "Rewired.Platforms.Microsoft.WindowsGamingInput", "WindowsGamingInputControllerExtension/JjNINLIQKMnXoyotmaLHgTBsurqB");
// Dependencies System.Object
namespace Rewired::Platforms::Microsoft::WindowsGamingInput {
// Is value type: false
// CS Name: Rewired.Platforms.Microsoft.WindowsGamingInput.WindowsGamingInputControllerExtension/JjNINLIQKMnXoyotmaLHgTBsurqB
class CORDL_TYPE WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB : public ::System::Object {
public:
// Declarations
 __declspec(property(get=BERNpYXhgkCBVLXsnKVWHcKaJATk)) ::GlobalNamespace::uJHrGgmLkVyxbRKtmSRRLXMJtWwr*  DHxRwlDHPZCAMYhMhhCEIZUVZHKl;

/// @brief Field gezAnVdvOlCTFXcZwxCxmFjAHQHyA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_gezAnVdvOlCTFXcZwxCxmFjAHQHyA, put=__cordl_internal_set_gezAnVdvOlCTFXcZwxCxmFjAHQHyA)) ::GlobalNamespace::uJHrGgmLkVyxbRKtmSRRLXMJtWwr*  gezAnVdvOlCTFXcZwxCxmFjAHQHyA;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr operator  ::Rewired::Interfaces::IControllerExtensionSource*() noexcept;

/// @brief Method BERNpYXhgkCBVLXsnKVWHcKaJATk, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::uJHrGgmLkVyxbRKtmSRRLXMJtWwr* BERNpYXhgkCBVLXsnKVWHcKaJATk() ;

static inline ::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB* New_ctor(::GlobalNamespace::uJHrGgmLkVyxbRKtmSRRLXMJtWwr*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::GlobalNamespace::uJHrGgmLkVyxbRKtmSRRLXMJtWwr* const& __cordl_internal_get_gezAnVdvOlCTFXcZwxCxmFjAHQHyA() const;

constexpr ::GlobalNamespace::uJHrGgmLkVyxbRKtmSRRLXMJtWwr*& __cordl_internal_get_gezAnVdvOlCTFXcZwxCxmFjAHQHyA() ;

constexpr void __cordl_internal_set_gezAnVdvOlCTFXcZwxCxmFjAHQHyA(::GlobalNamespace::uJHrGgmLkVyxbRKtmSRRLXMJtWwr*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::uJHrGgmLkVyxbRKtmSRRLXMJtWwr*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr ::Rewired::Interfaces::IControllerExtensionSource* i___Rewired__Interfaces__IControllerExtensionSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB(WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB(WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6011};

/// @brief Field gezAnVdvOlCTFXcZwxCxmFjAHQHyA, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::uJHrGgmLkVyxbRKtmSRRLXMJtWwr*  ___gezAnVdvOlCTFXcZwxCxmFjAHQHyA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB, ___gezAnVdvOlCTFXcZwxCxmFjAHQHyA) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Platforms::Microsoft::WindowsGamingInput
// Dependencies Rewired.Controller::Extension
namespace Rewired::Platforms::Microsoft::WindowsGamingInput {
// Is value type: false
// CS Name: Rewired.Platforms.Microsoft.WindowsGamingInput.WindowsGamingInputControllerExtension
class CORDL_TYPE WindowsGamingInputControllerExtension : public ::Rewired::Controller_Extension {
public:
// Declarations
using JjNINLIQKMnXoyotmaLHgTBsurqB = ::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB;

/// @brief Field LdFgNLtPpFNFIXgxXyJopPkpeSUb, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_LdFgNLtPpFNFIXgxXyJopPkpeSUb, put=__cordl_internal_set_LdFgNLtPpFNFIXgxXyJopPkpeSUb)) ::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB*  LdFgNLtPpFNFIXgxXyJopPkpeSUb;

/// @brief Field NGsQynNBBpjdicaFYmSdStOUtBGc, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_NGsQynNBBpjdicaFYmSdStOUtBGc, put=__cordl_internal_set_NGsQynNBBpjdicaFYmSdStOUtBGc)) bool  NGsQynNBBpjdicaFYmSdStOUtBGc;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer)) ::StringW  Rewired_ControllerExtensions_IHIDControllerExtension_manufacturer;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_usage)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_usage;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_usagePage;

 __declspec(property(get=get_deviceType)) ::Rewired::Platforms::Microsoft::WindowsGamingInput::DeviceType  deviceType;

 __declspec(property(get=get_isWireless)) bool  isWireless;

 __declspec(property(get=RaDLZKJcnANldyFyUCDTPFJziqViA)) ::Rewired::Joystick*  joystick;

 __declspec(property(get=get_nativePointer)) ::System::IntPtr  nativePointer;

 __declspec(property(get=get_nonRoamableId)) ::StringW  nonRoamableId;

 __declspec(property(get=get_productId)) uint16_t  productId;

 __declspec(property(get=get_productName)) ::StringW  productName;

 __declspec(property(get=get_vendorId)) uint16_t  vendorId;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr operator  ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept;

/// @brief Method Clone, addr 0x181a36820, size 0x40, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* Clone() ;

static inline ::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension* New_ctor(::GlobalNamespace::uJHrGgmLkVyxbRKtmSRRLXMJtWwr*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension* New_ctor(::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method RaDLZKJcnANldyFyUCDTPFJziqViA, addr 0x181884250, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Joystick* RaDLZKJcnANldyFyUCDTPFJziqViA() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_manufacturer, addr 0x180393520, size 0x20, virtual true, abstract: false, final true
inline ::StringW Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_usage, addr 0x181a368f0, size 0x90, virtual true, abstract: false, final true
inline uint16_t Rewired_ControllerExtensions_IHIDControllerExtension_get_usage() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_usagePage, addr 0x181a36860, size 0x90, virtual true, abstract: false, final true
inline uint16_t Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage() ;

/// @brief Method SourceUpdated, addr 0x181a36980, size 0xb0, virtual true, abstract: false, final false
inline void SourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source) ;

/// @brief Method UpdateData, addr 0x181a0f6e0, size 0x10, virtual true, abstract: false, final false
inline void UpdateData(::Rewired::UpdateLoopType  updateLoop) ;

constexpr ::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB* const& __cordl_internal_get_LdFgNLtPpFNFIXgxXyJopPkpeSUb() const;

constexpr ::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB*& __cordl_internal_get_LdFgNLtPpFNFIXgxXyJopPkpeSUb() ;

constexpr bool const& __cordl_internal_get_NGsQynNBBpjdicaFYmSdStOUtBGc() const;

constexpr bool& __cordl_internal_get_NGsQynNBBpjdicaFYmSdStOUtBGc() ;

constexpr void __cordl_internal_set_LdFgNLtPpFNFIXgxXyJopPkpeSUb(::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB*  value) ;

constexpr void __cordl_internal_set_NGsQynNBBpjdicaFYmSdStOUtBGc(bool  value) ;

/// @brief Method .ctor, addr 0x181a36a30, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::uJHrGgmLkVyxbRKtmSRRLXMJtWwr*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1818ca6f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_deviceType, addr 0x181a36a90, size 0x40, virtual false, abstract: false, final false
inline ::Rewired::Platforms::Microsoft::WindowsGamingInput::DeviceType get_deviceType() ;

/// @brief Method get_isWireless, addr 0x181a36ad0, size 0x90, virtual false, abstract: false, final false
inline bool get_isWireless() ;

/// @brief Method get_nativePointer, addr 0x181a36b60, size 0x120, virtual false, abstract: false, final false
inline ::System::IntPtr get_nativePointer() ;

/// @brief Method get_nonRoamableId, addr 0x181a36c80, size 0xa0, virtual false, abstract: false, final false
inline ::StringW get_nonRoamableId() ;

/// @brief Method get_productId, addr 0x181a36d20, size 0x90, virtual true, abstract: false, final true
inline uint16_t get_productId() ;

/// @brief Method get_productName, addr 0x181a36db0, size 0xa0, virtual true, abstract: false, final true
inline ::StringW get_productName() ;

/// @brief Method get_vendorId, addr 0x181a36e50, size 0xa0, virtual true, abstract: false, final true
inline uint16_t get_vendorId() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WindowsGamingInputControllerExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WindowsGamingInputControllerExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WindowsGamingInputControllerExtension(WindowsGamingInputControllerExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindowsGamingInputControllerExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindowsGamingInputControllerExtension(WindowsGamingInputControllerExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6012};

/// @brief Field LdFgNLtPpFNFIXgxXyJopPkpeSUb, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension_JjNINLIQKMnXoyotmaLHgTBsurqB*  ___LdFgNLtPpFNFIXgxXyJopPkpeSUb;

/// @brief Field NGsQynNBBpjdicaFYmSdStOUtBGc, offset: 0x30, size: 0x1, def value: None
 bool  ___NGsQynNBBpjdicaFYmSdStOUtBGc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension, ___LdFgNLtPpFNFIXgxXyJopPkpeSUb) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension, ___NGsQynNBBpjdicaFYmSdStOUtBGc) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Microsoft::WindowsGamingInput::WindowsGamingInputControllerExtension) == 0x38, "Size mismatch!");

} // namespace end def Rewired::Platforms::Microsoft::WindowsGamingInput
