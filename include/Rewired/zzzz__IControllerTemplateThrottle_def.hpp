#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateThrottle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IControllerTemplateThrottle)
namespace Rewired {
class IControllerTemplateAxis;
}
namespace Rewired {
class IControllerTemplateButton;
}
namespace Rewired {
class IControllerTemplateElement;
}
// Forward declare root types
namespace Rewired {
class IControllerTemplateThrottle;
}
// Write type traits
MARK_REF_T(::Rewired::IControllerTemplateThrottle*);
DEFINE_IL2CPP_CLASS(::Rewired::IControllerTemplateThrottle*, "Rewired", "IControllerTemplateThrottle");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IControllerTemplateThrottle
class CORDL_TYPE IControllerTemplateThrottle {
public:
// Declarations
 __declspec(property(get=get_minDetent)) ::Rewired::IControllerTemplateButton*  minDetent;

 __declspec(property(get=get_throttle)) ::Rewired::IControllerTemplateAxis*  throttle;

 __declspec(property(get=get_value)) float_t  value;

 __declspec(property(get=get_valuePrev)) float_t  valuePrev;

/// @brief Convert operator to "::Rewired::IControllerTemplateElement"
constexpr operator  ::Rewired::IControllerTemplateElement*() noexcept;

/// @brief Method get_minDetent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_minDetent() ;

/// @brief Method get_throttle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_throttle() ;

/// @brief Method get_value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_value() ;

/// @brief Method get_valuePrev, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_valuePrev() ;

/// @brief Convert to "::Rewired::IControllerTemplateElement"
constexpr ::Rewired::IControllerTemplateElement* i___Rewired__IControllerTemplateElement() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplateThrottle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplateThrottle(IControllerTemplateThrottle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1886};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
