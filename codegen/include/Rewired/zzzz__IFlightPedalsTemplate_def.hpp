#pragma once
// IWYU pragma private; include "Rewired/IFlightPedalsTemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFlightPedalsTemplate)
namespace Rewired {
class IControllerTemplateAxis;
}
namespace Rewired {
class IControllerTemplate;
}
// Forward declare root types
namespace Rewired {
class IFlightPedalsTemplate;
}
// Write type traits
MARK_REF_T(::Rewired::IFlightPedalsTemplate*);
DEFINE_IL2CPP_CLASS(::Rewired::IFlightPedalsTemplate*, "Rewired", "IFlightPedalsTemplate");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IFlightPedalsTemplate
class CORDL_TYPE IFlightPedalsTemplate {
public:
// Declarations
 __declspec(property(get=get_leftPedal)) ::Rewired::IControllerTemplateAxis*  leftPedal;

 __declspec(property(get=get_rightPedal)) ::Rewired::IControllerTemplateAxis*  rightPedal;

 __declspec(property(get=get_slide)) ::Rewired::IControllerTemplateAxis*  slide;

/// @brief Convert operator to "::Rewired::IControllerTemplate"
constexpr operator  ::Rewired::IControllerTemplate*() noexcept;

/// @brief Method get_leftPedal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_leftPedal() ;

/// @brief Method get_rightPedal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_rightPedal() ;

/// @brief Method get_slide, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_slide() ;

/// @brief Convert to "::Rewired::IControllerTemplate"
constexpr ::Rewired::IControllerTemplate* i___Rewired__IControllerTemplate() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IFlightPedalsTemplate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFlightPedalsTemplate(IFlightPedalsTemplate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5646};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
