#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplate_Internal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IControllerTemplate_Internal)
namespace Rewired::Internal::Localization {
class DeviceLocalizationInfo;
}
namespace Rewired {
class IControllerTemplate;
}
// Forward declare root types
namespace Rewired {
class IControllerTemplate_Internal;
}
// Write type traits
MARK_REF_T(::Rewired::IControllerTemplate_Internal*);
DEFINE_IL2CPP_CLASS(::Rewired::IControllerTemplate_Internal*, "Rewired", "IControllerTemplate_Internal");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IControllerTemplate_Internal
class CORDL_TYPE IControllerTemplate_Internal {
public:
// Declarations
 __declspec(property(get=get_deviceLocalizationInfo)) ::Rewired::Internal::Localization::DeviceLocalizationInfo*  deviceLocalizationInfo;

/// @brief Convert operator to "::Rewired::IControllerTemplate"
constexpr operator  ::Rewired::IControllerTemplate*() noexcept;

/// @brief Method get_deviceLocalizationInfo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Internal::Localization::DeviceLocalizationInfo* get_deviceLocalizationInfo() ;

/// @brief Convert to "::Rewired::IControllerTemplate"
constexpr ::Rewired::IControllerTemplate* i___Rewired__IControllerTemplate() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IControllerTemplate_Internal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerTemplate_Internal(IControllerTemplate_Internal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1897};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
