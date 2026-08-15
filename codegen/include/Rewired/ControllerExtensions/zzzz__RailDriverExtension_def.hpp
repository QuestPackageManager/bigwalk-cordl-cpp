#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/RailDriverExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__Controller_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RailDriverExtension)
namespace Rewired::ControllerExtensions {
class IHIDControllerExtension;
}
namespace Rewired::ControllerExtensions {
class RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab;
}
namespace Rewired::HID::Drivers {
class IDriver_RailDriver;
}
namespace Rewired::Interfaces {
class IControllerExtensionSource;
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
// Forward declare root types
namespace Rewired::ControllerExtensions {
class RailDriverExtension;
}
namespace Rewired::ControllerExtensions {
class RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerExtensions::RailDriverExtension*);
MARK_REF_T(::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::RailDriverExtension*, "Rewired.ControllerExtensions", "RailDriverExtension");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab*, "Rewired.ControllerExtensions", "RailDriverExtension/QCcBnJKuMLjNUpUOBjfGNOitHNqab");
// Dependencies System.Object
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.RailDriverExtension/QCcBnJKuMLjNUpUOBjfGNOitHNqab
class CORDL_TYPE RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab : public ::System::Object {
public:
// Declarations
/// @brief Field pkEbPuPSXbYRoUitnWQtxbPbAHWT, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pkEbPuPSXbYRoUitnWQtxbPbAHWT, put=__cordl_internal_set_pkEbPuPSXbYRoUitnWQtxbPbAHWT)) ::Rewired::HID::Drivers::IDriver_RailDriver*  pkEbPuPSXbYRoUitnWQtxbPbAHWT;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr operator  ::Rewired::Interfaces::IControllerExtensionSource*() noexcept;

static inline ::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab* New_ctor(::Rewired::HID::Drivers::IDriver_RailDriver*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Rewired::HID::Drivers::IDriver_RailDriver* const& __cordl_internal_get_pkEbPuPSXbYRoUitnWQtxbPbAHWT() const;

constexpr ::Rewired::HID::Drivers::IDriver_RailDriver*& __cordl_internal_get_pkEbPuPSXbYRoUitnWQtxbPbAHWT() ;

constexpr void __cordl_internal_set_pkEbPuPSXbYRoUitnWQtxbPbAHWT(::Rewired::HID::Drivers::IDriver_RailDriver*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Rewired::HID::Drivers::IDriver_RailDriver*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr ::Rewired::Interfaces::IControllerExtensionSource* i___Rewired__Interfaces__IControllerExtensionSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab(RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab(RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2711};

/// @brief Field pkEbPuPSXbYRoUitnWQtxbPbAHWT, offset: 0x10, size: 0x8, def value: None
 ::Rewired::HID::Drivers::IDriver_RailDriver*  ___pkEbPuPSXbYRoUitnWQtxbPbAHWT;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab, ___pkEbPuPSXbYRoUitnWQtxbPbAHWT) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab) == 0x18, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
// Dependencies Rewired.Controller::Extension
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.RailDriverExtension
class CORDL_TYPE RailDriverExtension : public ::Rewired::Controller_Extension {
public:
// Declarations
using QCcBnJKuMLjNUpUOBjfGNOitHNqab = ::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab;

/// @brief Field JEmCdLvQwNNXzsOBaJbwuoHmazkA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_JEmCdLvQwNNXzsOBaJbwuoHmazkA, put=__cordl_internal_set_JEmCdLvQwNNXzsOBaJbwuoHmazkA)) ::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab*  JEmCdLvQwNNXzsOBaJbwuoHmazkA;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer)) ::StringW  Rewired_ControllerExtensions_IHIDControllerExtension_manufacturer;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_productId)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_productId;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_productName)) ::StringW  Rewired_ControllerExtensions_IHIDControllerExtension_productName;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_usage)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_usage;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_usagePage;

 __declspec(property(get=Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId)) uint16_t  Rewired_ControllerExtensions_IHIDControllerExtension_vendorId;

 __declspec(property(get=oHYKtruZSuRRLtPyAilLTdHMyCil)) ::Rewired::Joystick*  joystick;

 __declspec(property(get=get_speakerEnabled, put=set_speakerEnabled)) bool  speakerEnabled;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr operator  ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept;

/// @brief Method Clone, addr 0x1818de7d0, size 0x40, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* Clone() ;

static inline ::Rewired::ControllerExtensions::RailDriverExtension* New_ctor(::Rewired::ControllerExtensions::RailDriverExtension*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerExtensions::RailDriverExtension* New_ctor(::Rewired::HID::Drivers::IDriver_RailDriver*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_manufacturer, addr 0x1818cb8a0, size 0x90, virtual true, abstract: false, final true
inline ::StringW Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_productId, addr 0x1818cb930, size 0x80, virtual true, abstract: false, final true
inline uint16_t Rewired_ControllerExtensions_IHIDControllerExtension_get_productId() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_productName, addr 0x1818cb9b0, size 0x90, virtual true, abstract: false, final true
inline ::StringW Rewired_ControllerExtensions_IHIDControllerExtension_get_productName() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_usage, addr 0x1818cbac0, size 0x80, virtual true, abstract: false, final true
inline uint16_t Rewired_ControllerExtensions_IHIDControllerExtension_get_usage() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_usagePage, addr 0x1818cba40, size 0x80, virtual true, abstract: false, final true
inline uint16_t Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage() ;

/// @brief Method Rewired.ControllerExtensions.IHIDControllerExtension.get_vendorId, addr 0x1818cbb40, size 0x80, virtual true, abstract: false, final true
inline uint16_t Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId() ;

/// @brief Method SetLEDDisplay, addr 0x1818de950, size 0x150, virtual false, abstract: false, final false
inline void SetLEDDisplay(uint8_t  digit1BitValues, uint8_t  digit2BitValues, uint8_t  digit3BitValues) ;

/// @brief Method SetLEDDisplay, addr 0x1818de810, size 0x140, virtual false, abstract: false, final false
inline void SetLEDDisplay(int32_t  digitIndex, uint8_t  digitBitValues) ;

/// @brief Method SourceUpdated, addr 0x1818deaa0, size 0xc0, virtual true, abstract: false, final false
inline void SourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source) ;

/// @brief Method UpdateData, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void UpdateData(::Rewired::UpdateLoopType  updateLoop) ;

constexpr ::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab* const& __cordl_internal_get_JEmCdLvQwNNXzsOBaJbwuoHmazkA() const;

constexpr ::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab*& __cordl_internal_get_JEmCdLvQwNNXzsOBaJbwuoHmazkA() ;

constexpr void __cordl_internal_set_JEmCdLvQwNNXzsOBaJbwuoHmazkA(::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab*  value) ;

/// @brief Method .ctor, addr 0x1818ca6f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerExtensions::RailDriverExtension*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1818deb60, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Rewired::HID::Drivers::IDriver_RailDriver*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_speakerEnabled, addr 0x1818debc0, size 0x80, virtual false, abstract: false, final false
inline bool get_speakerEnabled() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept;

/// @brief Method oHYKtruZSuRRLtPyAilLTdHMyCil, addr 0x181884250, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Joystick* oHYKtruZSuRRLtPyAilLTdHMyCil() ;

/// @brief Method set_speakerEnabled, addr 0x1818dec40, size 0x100, virtual false, abstract: false, final false
inline void set_speakerEnabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RailDriverExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RailDriverExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RailDriverExtension(RailDriverExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RailDriverExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RailDriverExtension(RailDriverExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2712};

/// @brief Field JEmCdLvQwNNXzsOBaJbwuoHmazkA, offset: 0x28, size: 0x8, def value: None
 ::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab*  ___JEmCdLvQwNNXzsOBaJbwuoHmazkA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::RailDriverExtension, ___JEmCdLvQwNNXzsOBaJbwuoHmazkA) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::RailDriverExtension) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
