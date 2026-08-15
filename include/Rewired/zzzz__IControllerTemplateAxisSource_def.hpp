#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplateAxisSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IControllerTemplateAxisSource)
namespace Rewired {
class IControllerElementTarget;
}
namespace Rewired {
class IControllerTemplateElementSource;
}
// Forward declare root types
namespace Rewired {
class IControllerTemplateAxisSource;
}
// Write type traits
MARK_REF_T(::Rewired::IControllerTemplateAxisSource*);
DEFINE_IL2CPP_CLASS(::Rewired::IControllerTemplateAxisSource*, "Rewired", "IControllerTemplateAxisSource");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IControllerTemplateAxisSource
class CORDL_TYPE IControllerTemplateAxisSource {
public:
// Declarations
 __declspec(property(get=get_fullTarget)) ::Rewired::IControllerElementTarget*  fullTarget;

 __declspec(property(get=get_negativeTarget)) ::Rewired::IControllerElementTarget*  negativeTarget;

 __declspec(property(get=get_positiveTarget)) ::Rewired::IControllerElementTarget*  positiveTarget;

 __declspec(property(get=get_splitAxis)) bool  splitAxis;

/// @brief Convert operator to "::Rewired::IControllerTemplateElementSource"
constexpr operator  ::Rewired::IControllerTemplateElementSource*() noexcept;

/// @brief Method get_fullTarget, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerElementTarget* get_fullTarget() ;

/// @brief Method get_negativeTarget, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerElementTarget* get_negativeTarget() ;

/// @brief Method get_positiveTarget, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerElementTarget* get_positiveTarget() ;

/// @brief Method get_splitAxis, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_splitAxis() ;

/// @brief Convert to "::Rewired::IControllerTemplateElementSource"
constexpr ::Rewired::IControllerTemplateElementSource* i___Rewired__IControllerTemplateElementSource() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplateAxisSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplateAxisSource(IControllerTemplateAxisSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1891};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
