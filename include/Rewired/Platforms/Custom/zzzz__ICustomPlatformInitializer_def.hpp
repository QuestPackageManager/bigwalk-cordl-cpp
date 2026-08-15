#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/ICustomPlatformInitializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICustomPlatformInitializer)
namespace Rewired::Platforms::Custom {
class CustomPlatformInitOptions;
}
// Forward declare root types
namespace Rewired::Platforms::Custom {
class ICustomPlatformInitializer;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::Custom::ICustomPlatformInitializer*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::ICustomPlatformInitializer*, "Rewired.Platforms.Custom", "ICustomPlatformInitializer");
// Dependencies 
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.ICustomPlatformInitializer
class CORDL_TYPE ICustomPlatformInitializer {
public:
// Declarations
/// @brief Method GetCustomPlatformInitOptions, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Platforms::Custom::CustomPlatformInitOptions* GetCustomPlatformInitOptions() ;

// Ctor Parameters [CppParam { name: "", ty: "ICustomPlatformInitializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICustomPlatformInitializer(ICustomPlatformInitializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2296};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Platforms::Custom
