#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/IHardwareJoystickMapCustomPlatformMapProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IHardwareJoystickMapCustomPlatformMapProvider)
namespace Rewired::Data::Mapping {
class HardwareJoystickMap_Platform;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired::Platforms::Custom {
class IHardwareJoystickMapCustomPlatformMapProvider;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::Custom::IHardwareJoystickMapCustomPlatformMapProvider*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::IHardwareJoystickMapCustomPlatformMapProvider*, "Rewired.Platforms.Custom", "IHardwareJoystickMapCustomPlatformMapProvider");
// Dependencies 
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.IHardwareJoystickMapCustomPlatformMapProvider
class CORDL_TYPE IHardwareJoystickMapCustomPlatformMapProvider {
public:
// Declarations
/// @brief Method GetPlatformMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Data::Mapping::HardwareJoystickMap_Platform* GetPlatformMap(int32_t  customPlatformId, ::System::Guid  hardwareTypeGuid) ;

// Ctor Parameters [CppParam { name: "", ty: "IHardwareJoystickMapCustomPlatformMapProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHardwareJoystickMapCustomPlatformMapProvider(IHardwareJoystickMapCustomPlatformMapProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2305};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Platforms::Custom
