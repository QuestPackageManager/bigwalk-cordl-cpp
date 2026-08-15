#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/IHIDControllerExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IHIDControllerExtension)
// Forward declare root types
namespace Rewired::ControllerExtensions {
class IHIDControllerExtension;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerExtensions::IHIDControllerExtension*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::IHIDControllerExtension*, "Rewired.ControllerExtensions", "IHIDControllerExtension");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.IHIDControllerExtension
class CORDL_TYPE IHIDControllerExtension {
public:
// Declarations
 __declspec(property(get=get_manufacturer)) ::StringW  manufacturer;

 __declspec(property(get=get_productId)) uint16_t  productId;

 __declspec(property(get=get_productName)) ::StringW  productName;

 __declspec(property(get=get_usage)) uint16_t  usage;

 __declspec(property(get=get_usagePage)) uint16_t  usagePage;

 __declspec(property(get=get_vendorId)) uint16_t  vendorId;

/// @brief Method get_manufacturer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_manufacturer() ;

/// @brief Method get_productId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint16_t get_productId() ;

/// @brief Method get_productName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_productName() ;

/// @brief Method get_usage, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint16_t get_usage() ;

/// @brief Method get_usagePage, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint16_t get_usagePage() ;

/// @brief Method get_vendorId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint16_t get_vendorId() ;

// Ctor Parameters [CppParam { name: "", ty: "IHIDControllerExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHIDControllerExtension(IHIDControllerExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2701};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::ControllerExtensions
