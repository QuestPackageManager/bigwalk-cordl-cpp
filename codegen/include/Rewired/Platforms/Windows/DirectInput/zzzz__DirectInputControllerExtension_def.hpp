#pragma once
// IWYU pragma private; include "Rewired/Platforms/Windows/DirectInput/DirectInputControllerExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__Controller_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DirectInputControllerExtension)
namespace GlobalNamespace {
class JtJUURvMKvfyiuvbkueVtWorgUko;
}
namespace GlobalNamespace {
class iivCcKQeRvuZMAzQsMJPFltqFJgp;
}
namespace Rewired::ControllerExtensions {
class IHIDControllerExtension;
}
namespace Rewired::Interfaces {
class IControllerExtensionSource;
}
namespace Rewired::Platforms::Windows::DirectInput {
class DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs;
}
namespace Rewired::Platforms::Windows::DirectInput {
struct DirectInputDeviceAxisMode;
}
namespace Rewired::Platforms::Windows::DirectInput {
struct DirectInputDeviceType;
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
// Forward declare root types
namespace Rewired::Platforms::Windows::DirectInput {
class DirectInputControllerExtension;
}
namespace Rewired::Platforms::Windows::DirectInput {
class DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension*);
MARK_REF_T(::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension*, "Rewired.Platforms.Windows.DirectInput", "DirectInputControllerExtension");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs*, "Rewired.Platforms.Windows.DirectInput", "DirectInputControllerExtension/BqwZalECmsIUpRpkJujEjGjRxOJs");
// Dependencies System.Object
namespace Rewired::Platforms::Windows::DirectInput {
// Is value type: false
// CS Name: Rewired.Platforms.Windows.DirectInput.DirectInputControllerExtension/BqwZalECmsIUpRpkJujEjGjRxOJs
class CORDL_TYPE DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs : public ::System::Object {
public:
// Declarations
 __declspec(property(get=qbCOGBUcVdwfqWcyoAqVMVJzsdmU)) ::GlobalNamespace::iivCcKQeRvuZMAzQsMJPFltqFJgp*  DOloJUkgSSFKVSVPaZLCuezzeDuh;

/// @brief Field MFTtZcxdCzjmEvKMYNmdAzUHUzHm, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MFTtZcxdCzjmEvKMYNmdAzUHUzHm, put=__cordl_internal_set_MFTtZcxdCzjmEvKMYNmdAzUHUzHm)) ::GlobalNamespace::JtJUURvMKvfyiuvbkueVtWorgUko*  MFTtZcxdCzjmEvKMYNmdAzUHUzHm;

 __declspec(property(get=ATmyjegEWwYVgffBiBfrcUGZQvlT)) ::GlobalNamespace::JtJUURvMKvfyiuvbkueVtWorgUko*  UJwhnCAKgSUfTZbGJCGeCTwmdFUNA;

/// @brief Field fNdSyyxzsFqbFbnkUjKQvpPCeihGA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_fNdSyyxzsFqbFbnkUjKQvpPCeihGA, put=__cordl_internal_set_fNdSyyxzsFqbFbnkUjKQvpPCeihGA)) ::GlobalNamespace::iivCcKQeRvuZMAzQsMJPFltqFJgp*  fNdSyyxzsFqbFbnkUjKQvpPCeihGA;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr operator  ::Rewired::Interfaces::IControllerExtensionSource*() noexcept;

/// @brief Method ATmyjegEWwYVgffBiBfrcUGZQvlT, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::JtJUURvMKvfyiuvbkueVtWorgUko* ATmyjegEWwYVgffBiBfrcUGZQvlT() ;

static inline ::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs* New_ctor(::GlobalNamespace::iivCcKQeRvuZMAzQsMJPFltqFJgp*  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::JtJUURvMKvfyiuvbkueVtWorgUko*  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::GlobalNamespace::JtJUURvMKvfyiuvbkueVtWorgUko* const& __cordl_internal_get_MFTtZcxdCzjmEvKMYNmdAzUHUzHm() const;

constexpr ::GlobalNamespace::JtJUURvMKvfyiuvbkueVtWorgUko*& __cordl_internal_get_MFTtZcxdCzjmEvKMYNmdAzUHUzHm() ;

constexpr ::GlobalNamespace::iivCcKQeRvuZMAzQsMJPFltqFJgp* const& __cordl_internal_get_fNdSyyxzsFqbFbnkUjKQvpPCeihGA() const;

constexpr ::GlobalNamespace::iivCcKQeRvuZMAzQsMJPFltqFJgp*& __cordl_internal_get_fNdSyyxzsFqbFbnkUjKQvpPCeihGA() ;

constexpr void __cordl_internal_set_MFTtZcxdCzjmEvKMYNmdAzUHUzHm(::GlobalNamespace::JtJUURvMKvfyiuvbkueVtWorgUko*  value) ;

constexpr void __cordl_internal_set_fNdSyyxzsFqbFbnkUjKQvpPCeihGA(::GlobalNamespace::iivCcKQeRvuZMAzQsMJPFltqFJgp*  value) ;

/// @brief Method .ctor, addr 0x1803224a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::iivCcKQeRvuZMAzQsMJPFltqFJgp*  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::JtJUURvMKvfyiuvbkueVtWorgUko*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Convert to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr ::Rewired::Interfaces::IControllerExtensionSource* i___Rewired__Interfaces__IControllerExtensionSource() noexcept;

/// @brief Method qbCOGBUcVdwfqWcyoAqVMVJzsdmU, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::iivCcKQeRvuZMAzQsMJPFltqFJgp* qbCOGBUcVdwfqWcyoAqVMVJzsdmU() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs(DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs(DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5979};

/// @brief Field fNdSyyxzsFqbFbnkUjKQvpPCeihGA, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::iivCcKQeRvuZMAzQsMJPFltqFJgp*  ___fNdSyyxzsFqbFbnkUjKQvpPCeihGA;

/// @brief Field MFTtZcxdCzjmEvKMYNmdAzUHUzHm, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::JtJUURvMKvfyiuvbkueVtWorgUko*  ___MFTtZcxdCzjmEvKMYNmdAzUHUzHm;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs, ___fNdSyyxzsFqbFbnkUjKQvpPCeihGA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs, ___MFTtZcxdCzjmEvKMYNmdAzUHUzHm) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Platforms::Windows::DirectInput
// Dependencies Rewired.Controller::Extension
namespace Rewired::Platforms::Windows::DirectInput {
// Is value type: false
// CS Name: Rewired.Platforms.Windows.DirectInput.DirectInputControllerExtension
class CORDL_TYPE DirectInputControllerExtension : public ::Rewired::Controller_Extension {
public:
// Declarations
using BqwZalECmsIUpRpkJujEjGjRxOJs = ::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer)) ::StringW  Rewired_ControllerExtensions_IHIDControllerExtension_manufacturer;

/// @brief Field ZbqwNkQTfNLCnfhbxtUgVTmHPeRd, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_ZbqwNkQTfNLCnfhbxtUgVTmHPeRd, put=__cordl_internal_set_ZbqwNkQTfNLCnfhbxtUgVTmHPeRd)) bool  ZbqwNkQTfNLCnfhbxtUgVTmHPeRd;

 __declspec(property(get=get_axisMode)) ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceAxisMode  axisMode;

 __declspec(property(get=get_bufferSize)) int32_t  bufferSize;

 __declspec(property(get=get_classGuid)) ::System::Guid  classGuid;

 __declspec(property(get=get_deviceSubtype)) int32_t  deviceSubtype;

 __declspec(property(get=get_deviceType)) ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceType  deviceType;

 __declspec(property(get=get_forceFeedbackDriverGuid)) ::System::Guid  forceFeedbackDriverGuid;

 __declspec(property(get=get_forceFeedbackGain, put=set_forceFeedbackGain)) int32_t  forceFeedbackGain;

 __declspec(property(get=get_instanceGuid)) ::System::Guid  instanceGuid;

 __declspec(property(get=get_instanceName)) ::StringW  instanceName;

 __declspec(property(get=get_interfacePath)) ::StringW  interfacePath;

 __declspec(property(get=get_isHumanInterfaceDevice)) bool  isHumanInterfaceDevice;

 __declspec(property(get=XltdnSBcgKutAIkMVCQDaVATCDCVA)) ::Rewired::Joystick*  joystick;

 __declspec(property(get=get_joystickId)) int32_t  joystickId;

 __declspec(property(get=get_productGuid)) ::System::Guid  productGuid;

 __declspec(property(get=get_productId)) uint16_t  productId;

 __declspec(property(get=get_productName)) ::StringW  productName;

 __declspec(property(get=get_rawType)) int32_t  rawType;

/// @brief Field txCWRFrwQZWmhkiwnCdASBCvrYF, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_txCWRFrwQZWmhkiwnCdASBCvrYF, put=__cordl_internal_set_txCWRFrwQZWmhkiwnCdASBCvrYF)) ::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs*  txCWRFrwQZWmhkiwnCdASBCvrYF;

 __declspec(property(get=get_usage)) uint16_t  usage;

 __declspec(property(get=get_usagePage)) uint16_t  usagePage;

 __declspec(property(get=get_vendorId)) uint16_t  vendorId;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr operator  ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept;

/// @brief Method Clone, addr 0x181a2d800, size 0x40, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* Clone() ;

static inline ::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension* New_ctor(::GlobalNamespace::iivCcKQeRvuZMAzQsMJPFltqFJgp*  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::JtJUURvMKvfyiuvbkueVtWorgUko*  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension* New_ctor(::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_manufacturer, addr 0x180393520, size 0x20, virtual true, abstract: false, final true
inline ::StringW Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer() ;

/// @brief Method SourceUpdated, addr 0x181a2d840, size 0xb0, virtual true, abstract: false, final false
inline void SourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source) ;

/// @brief Method UpdateData, addr 0x181a0f6e0, size 0x10, virtual true, abstract: false, final false
inline void UpdateData(::Rewired::UpdateLoopType  updateLoop) ;

/// @brief Method XltdnSBcgKutAIkMVCQDaVATCDCVA, addr 0x181884250, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Joystick* XltdnSBcgKutAIkMVCQDaVATCDCVA() ;

constexpr bool const& __cordl_internal_get_ZbqwNkQTfNLCnfhbxtUgVTmHPeRd() const;

constexpr bool& __cordl_internal_get_ZbqwNkQTfNLCnfhbxtUgVTmHPeRd() ;

constexpr ::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs* const& __cordl_internal_get_txCWRFrwQZWmhkiwnCdASBCvrYF() const;

constexpr ::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs*& __cordl_internal_get_txCWRFrwQZWmhkiwnCdASBCvrYF() ;

constexpr void __cordl_internal_set_ZbqwNkQTfNLCnfhbxtUgVTmHPeRd(bool  value) ;

constexpr void __cordl_internal_set_txCWRFrwQZWmhkiwnCdASBCvrYF(::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs*  value) ;

/// @brief Method .ctor, addr 0x181a2d8f0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::iivCcKQeRvuZMAzQsMJPFltqFJgp*  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::JtJUURvMKvfyiuvbkueVtWorgUko*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1818ca6f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_axisMode, addr 0x181a2d960, size 0xa0, virtual false, abstract: false, final false
inline ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceAxisMode get_axisMode() ;

/// @brief Method get_bufferSize, addr 0x181a2da00, size 0xa0, virtual false, abstract: false, final false
inline int32_t get_bufferSize() ;

/// @brief Method get_classGuid, addr 0x181a2daa0, size 0xd0, virtual false, abstract: false, final false
inline ::System::Guid get_classGuid() ;

/// @brief Method get_deviceSubtype, addr 0x181a2db70, size 0x90, virtual false, abstract: false, final false
inline int32_t get_deviceSubtype() ;

/// @brief Method get_deviceType, addr 0x181a2dc00, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceType get_deviceType() ;

/// @brief Method get_forceFeedbackDriverGuid, addr 0x181a2dc90, size 0xc0, virtual false, abstract: false, final false
inline ::System::Guid get_forceFeedbackDriverGuid() ;

/// @brief Method get_forceFeedbackGain, addr 0x181a2dd50, size 0xa0, virtual false, abstract: false, final false
inline int32_t get_forceFeedbackGain() ;

/// @brief Method get_instanceGuid, addr 0x181a2ddf0, size 0xc0, virtual false, abstract: false, final false
inline ::System::Guid get_instanceGuid() ;

/// @brief Method get_instanceName, addr 0x181a2deb0, size 0xb0, virtual false, abstract: false, final false
inline ::StringW get_instanceName() ;

/// @brief Method get_interfacePath, addr 0x181a2df60, size 0xb0, virtual false, abstract: false, final false
inline ::StringW get_interfacePath() ;

/// @brief Method get_isHumanInterfaceDevice, addr 0x181a2e010, size 0x90, virtual false, abstract: false, final false
inline bool get_isHumanInterfaceDevice() ;

/// @brief Method get_joystickId, addr 0x181a2e0a0, size 0xa0, virtual false, abstract: false, final false
inline int32_t get_joystickId() ;

/// @brief Method get_productGuid, addr 0x181a2e140, size 0xc0, virtual false, abstract: false, final false
inline ::System::Guid get_productGuid() ;

/// @brief Method get_productId, addr 0x181a2e200, size 0xa0, virtual true, abstract: false, final true
inline uint16_t get_productId() ;

/// @brief Method get_productName, addr 0x181a2e2a0, size 0xb0, virtual true, abstract: false, final true
inline ::StringW get_productName() ;

/// @brief Method get_rawType, addr 0x181a2e350, size 0x90, virtual false, abstract: false, final false
inline int32_t get_rawType() ;

/// @brief Method get_usage, addr 0x181a2e470, size 0x90, virtual true, abstract: false, final true
inline uint16_t get_usage() ;

/// @brief Method get_usagePage, addr 0x181a2e3e0, size 0x90, virtual true, abstract: false, final true
inline uint16_t get_usagePage() ;

/// @brief Method get_vendorId, addr 0x181a2e500, size 0xa0, virtual true, abstract: false, final true
inline uint16_t get_vendorId() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept;

/// @brief Method set_forceFeedbackGain, addr 0x181a2e5a0, size 0xb0, virtual false, abstract: false, final false
inline void set_forceFeedbackGain(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DirectInputControllerExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DirectInputControllerExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectInputControllerExtension(DirectInputControllerExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectInputControllerExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectInputControllerExtension(DirectInputControllerExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5980};

/// @brief Field txCWRFrwQZWmhkiwnCdASBCvrYF, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension_BqwZalECmsIUpRpkJujEjGjRxOJs*  ___txCWRFrwQZWmhkiwnCdASBCvrYF;

/// @brief Field ZbqwNkQTfNLCnfhbxtUgVTmHPeRd, offset: 0x30, size: 0x1, def value: None
 bool  ___ZbqwNkQTfNLCnfhbxtUgVTmHPeRd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension, ___txCWRFrwQZWmhkiwnCdASBCvrYF) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension, ___ZbqwNkQTfNLCnfhbxtUgVTmHPeRd) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Windows::DirectInput::DirectInputControllerExtension) == 0x38, "Size mismatch!");

} // namespace end def Rewired::Platforms::Windows::DirectInput
