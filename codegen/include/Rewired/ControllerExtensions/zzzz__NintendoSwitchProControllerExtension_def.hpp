#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/NintendoSwitchProControllerExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchGamepadExtension_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NintendoSwitchProControllerExtension)
namespace Rewired::ControllerExtensions {
class IHIDControllerExtension;
}
namespace Rewired::ControllerExtensions {
class NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE;
}
namespace Rewired::HID::Drivers {
class IDriver_NintendoSwitchProController;
}
namespace Rewired::Interfaces {
class IControllerVibrator;
}
namespace Rewired {
class Controller_Extension;
}
// Forward declare root types
namespace Rewired::ControllerExtensions {
class NintendoSwitchProControllerExtension;
}
namespace Rewired::ControllerExtensions {
class NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*);
MARK_REF_T(::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*, "Rewired.ControllerExtensions", "NintendoSwitchProControllerExtension");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE*, "Rewired.ControllerExtensions", "NintendoSwitchProControllerExtension/OiCTetfbGVJAdoKNfpVjFiBNfLfE");
// Dependencies Rewired.ControllerExtensions.NintendoSwitchGamepadExtension::ExtSource_Base
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.NintendoSwitchProControllerExtension/OiCTetfbGVJAdoKNfpVjFiBNfLfE
class CORDL_TYPE NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE : public ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base {
public:
// Declarations
 __declspec(property(get=NlmNDWiahueqSExmHZSOWnicvDFE)) ::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*  NyogbSbAvBYaQFKgWYINrKYmhtdg;

static inline ::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE* New_ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method NlmNDWiahueqSExmHZSOWnicvDFE, addr 0x1818db180, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::HID::Drivers::IDriver_NintendoSwitchProController* NlmNDWiahueqSExmHZSOWnicvDFE() ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE(NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE(NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2707};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE) == 0x18, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
// Dependencies Rewired.ControllerExtensions.NintendoSwitchGamepadExtension
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.NintendoSwitchProControllerExtension
class CORDL_TYPE NintendoSwitchProControllerExtension : public ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension {
public:
// Declarations
using OiCTetfbGVJAdoKNfpVjFiBNfLfE = ::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE;

/// @brief Field motorIndexLeft, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_motorIndexLeft, put=__cordl_internal_set_motorIndexLeft)) int32_t  motorIndexLeft;

/// @brief Field motorIndexRight, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_motorIndexRight, put=__cordl_internal_set_motorIndexRight)) int32_t  motorIndexRight;

 __declspec(property(get=lAKYLmANHEahADkLdJcFOlPBojVX)) ::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE*  source;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr operator  ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerVibrator"
constexpr operator  ::Rewired::Interfaces::IControllerVibrator*() noexcept;

/// @brief Method Clone, addr 0x1818db080, size 0x40, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* Clone() ;

static inline ::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension* New_ctor(::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension* New_ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*  _cordl_fixed_empty_name_whitespace) ;

constexpr int32_t const& __cordl_internal_get_motorIndexLeft() const;

constexpr int32_t& __cordl_internal_get_motorIndexLeft() ;

constexpr int32_t const& __cordl_internal_get_motorIndexRight() const;

constexpr int32_t& __cordl_internal_get_motorIndexRight() ;

constexpr void __cordl_internal_set_motorIndexLeft(int32_t  value) ;

constexpr void __cordl_internal_set_motorIndexRight(int32_t  value) ;

/// @brief Method .ctor, addr 0x1818db0c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1818db0d0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept;

/// @brief Convert to "::Rewired::Interfaces::IControllerVibrator"
constexpr ::Rewired::Interfaces::IControllerVibrator* i___Rewired__Interfaces__IControllerVibrator() noexcept;

/// @brief Method lAKYLmANHEahADkLdJcFOlPBojVX, addr 0x1818db130, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE* lAKYLmANHEahADkLdJcFOlPBojVX() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NintendoSwitchProControllerExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchProControllerExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NintendoSwitchProControllerExtension(NintendoSwitchProControllerExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitchProControllerExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NintendoSwitchProControllerExtension(NintendoSwitchProControllerExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2708};

/// @brief Field motorIndexLeft, offset: 0x34, size: 0x4, def value: None
 int32_t  ___motorIndexLeft;

/// @brief Field motorIndexRight, offset: 0x38, size: 0x4, def value: None
 int32_t  ___motorIndexRight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension, ___motorIndexLeft) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension, ___motorIndexRight) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension) == 0x40, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
