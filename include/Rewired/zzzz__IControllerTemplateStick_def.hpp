#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateStick.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IControllerTemplateStick)
namespace Rewired {
class IControllerTemplateAxis;
}
namespace Rewired {
class IControllerTemplateElement;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Rewired {
class IControllerTemplateStick;
}
// Write type traits
MARK_REF_T(::Rewired::IControllerTemplateStick*);
DEFINE_IL2CPP_CLASS(::Rewired::IControllerTemplateStick*, "Rewired", "IControllerTemplateStick");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IControllerTemplateStick
class CORDL_TYPE IControllerTemplateStick {
public:
// Declarations
 __declspec(property(get=get_horizontal)) ::Rewired::IControllerTemplateAxis*  horizontal;

 __declspec(property(get=get_rotation)) ::Rewired::IControllerTemplateAxis*  rotation;

 __declspec(property(get=get_value)) ::UnityEngine::Vector3  value;

 __declspec(property(get=get_valuePrev)) ::UnityEngine::Vector3  valuePrev;

 __declspec(property(get=get_vertical)) ::Rewired::IControllerTemplateAxis*  vertical;

/// @brief Convert operator to "::Rewired::IControllerTemplateElement"
constexpr operator  ::Rewired::IControllerTemplateElement*() noexcept;

/// @brief Method get_horizontal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_horizontal() ;

/// @brief Method get_rotation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_rotation() ;

/// @brief Method get_value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_value() ;

/// @brief Method get_valuePrev, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_valuePrev() ;

/// @brief Method get_vertical, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_vertical() ;

/// @brief Convert to "::Rewired::IControllerTemplateElement"
constexpr ::Rewired::IControllerTemplateElement* i___Rewired__IControllerTemplateElement() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplateStick", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplateStick(IControllerTemplateStick const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1883};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
