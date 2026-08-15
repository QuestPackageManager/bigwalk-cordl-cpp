#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateThumbStick.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IControllerTemplateThumbStick)
namespace Rewired {
class IControllerTemplateAxis;
}
namespace Rewired {
class IControllerTemplateButton;
}
namespace Rewired {
class IControllerTemplateElement;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired {
class IControllerTemplateThumbStick;
}
// Write type traits
MARK_REF_T(::Rewired::IControllerTemplateThumbStick*);
DEFINE_IL2CPP_CLASS(::Rewired::IControllerTemplateThumbStick*, "Rewired", "IControllerTemplateThumbStick");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IControllerTemplateThumbStick
class CORDL_TYPE IControllerTemplateThumbStick {
public:
// Declarations
 __declspec(property(get=get_horizontal)) ::Rewired::IControllerTemplateAxis*  horizontal;

 __declspec(property(get=get_press)) ::Rewired::IControllerTemplateButton*  press;

 __declspec(property(get=get_value)) ::UnityEngine::Vector2  value;

 __declspec(property(get=get_valuePrev)) ::UnityEngine::Vector2  valuePrev;

 __declspec(property(get=get_vertical)) ::Rewired::IControllerTemplateAxis*  vertical;

/// @brief Convert operator to "::Rewired::IControllerTemplateElement"
constexpr operator  ::Rewired::IControllerTemplateElement*() noexcept;

/// @brief Method get_horizontal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_horizontal() ;

/// @brief Method get_press, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_press() ;

/// @brief Method get_value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 get_value() ;

/// @brief Method get_valuePrev, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 get_valuePrev() ;

/// @brief Method get_vertical, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_vertical() ;

/// @brief Convert to "::Rewired::IControllerTemplateElement"
constexpr ::Rewired::IControllerTemplateElement* i___Rewired__IControllerTemplateElement() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplateThumbStick", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplateThumbStick(IControllerTemplateThumbStick const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1884};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
