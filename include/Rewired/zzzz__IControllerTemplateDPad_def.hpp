#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateDPad.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IControllerTemplateDPad)
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
class IControllerTemplateDPad;
}
// Write type traits
MARK_REF_T(::Rewired::IControllerTemplateDPad*);
DEFINE_IL2CPP_CLASS(::Rewired::IControllerTemplateDPad*, "Rewired", "IControllerTemplateDPad");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IControllerTemplateDPad
class CORDL_TYPE IControllerTemplateDPad {
public:
// Declarations
 __declspec(property(get=get_down)) ::Rewired::IControllerTemplateButton*  down;

 __declspec(property(get=get_left)) ::Rewired::IControllerTemplateButton*  left;

 __declspec(property(get=get_press)) ::Rewired::IControllerTemplateButton*  press;

 __declspec(property(get=get_right)) ::Rewired::IControllerTemplateButton*  right;

 __declspec(property(get=get_up)) ::Rewired::IControllerTemplateButton*  up;

 __declspec(property(get=get_value)) ::UnityEngine::Vector2  value;

 __declspec(property(get=get_valuePrev)) ::UnityEngine::Vector2  valuePrev;

/// @brief Convert operator to "::Rewired::IControllerTemplateElement"
constexpr operator  ::Rewired::IControllerTemplateElement*() noexcept;

/// @brief Method get_down, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_down() ;

/// @brief Method get_left, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_left() ;

/// @brief Method get_press, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_press() ;

/// @brief Method get_right, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_right() ;

/// @brief Method get_up, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_up() ;

/// @brief Method get_value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 get_value() ;

/// @brief Method get_valuePrev, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 get_valuePrev() ;

/// @brief Convert to "::Rewired::IControllerTemplateElement"
constexpr ::Rewired::IControllerTemplateElement* i___Rewired__IControllerTemplateElement() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplateDPad", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplateDPad(IControllerTemplateDPad const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1885};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
