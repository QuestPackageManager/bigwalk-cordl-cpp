#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateButtonSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IControllerTemplateButtonSource)
namespace Rewired {
class IControllerElementTarget;
}
namespace Rewired {
class IControllerTemplateElementSource;
}
// Forward declare root types
namespace Rewired {
class IControllerTemplateButtonSource;
}
// Write type traits
MARK_REF_T(::Rewired::IControllerTemplateButtonSource*);
DEFINE_IL2CPP_CLASS(::Rewired::IControllerTemplateButtonSource*, "Rewired", "IControllerTemplateButtonSource");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IControllerTemplateButtonSource
class CORDL_TYPE IControllerTemplateButtonSource {
public:
// Declarations
 __declspec(property(get=get_target)) ::Rewired::IControllerElementTarget*  target;

/// @brief Convert operator to "::Rewired::IControllerTemplateElementSource"
constexpr operator  ::Rewired::IControllerTemplateElementSource*() noexcept;

/// @brief Method get_target, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerElementTarget* get_target() ;

/// @brief Convert to "::Rewired::IControllerTemplateElementSource"
constexpr ::Rewired::IControllerTemplateElementSource* i___Rewired__IControllerTemplateElementSource() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplateButtonSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplateButtonSource(IControllerTemplateButtonSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1892};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
