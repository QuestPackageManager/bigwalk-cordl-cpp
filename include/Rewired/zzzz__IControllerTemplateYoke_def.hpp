#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateYoke.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IControllerTemplateYoke)
namespace Rewired {
class IControllerTemplateAxis;
}
namespace Rewired {
class IControllerTemplateElement;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired {
class IControllerTemplateYoke;
}
// Write type traits
MARK_REF_T(::Rewired::IControllerTemplateYoke*);
DEFINE_IL2CPP_CLASS(::Rewired::IControllerTemplateYoke*, "Rewired", "IControllerTemplateYoke");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IControllerTemplateYoke
class CORDL_TYPE IControllerTemplateYoke {
public:
// Declarations
 __declspec(property(get=get_pushPull)) ::Rewired::IControllerTemplateAxis*  pushPull;

 __declspec(property(get=get_rotation)) ::Rewired::IControllerTemplateAxis*  rotation;

 __declspec(property(get=get_value)) ::UnityEngine::Vector2  value;

 __declspec(property(get=get_valuePrev)) ::UnityEngine::Vector2  valuePrev;

/// @brief Convert operator to "::Rewired::IControllerTemplateElement"
constexpr operator  ::Rewired::IControllerTemplateElement*() noexcept;

/// @brief Method get_pushPull, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_pushPull() ;

/// @brief Method get_rotation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_rotation() ;

/// @brief Method get_value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 get_value() ;

/// @brief Method get_valuePrev, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 get_valuePrev() ;

/// @brief Convert to "::Rewired::IControllerTemplateElement"
constexpr ::Rewired::IControllerTemplateElement* i___Rewired__IControllerTemplateElement() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplateYoke", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplateYoke(IControllerTemplateYoke const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1888};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
