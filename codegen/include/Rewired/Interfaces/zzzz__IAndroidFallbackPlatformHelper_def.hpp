#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IAndroidFallbackPlatformHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IAndroidFallbackPlatformHelper)
namespace Rewired::Interfaces {
class IAndroidFallbackDS4Helper;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Rewired::Interfaces {
class IAndroidFallbackPlatformHelper;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::IAndroidFallbackPlatformHelper*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::IAndroidFallbackPlatformHelper*, "Rewired.Interfaces", "IAndroidFallbackPlatformHelper");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.IAndroidFallbackPlatformHelper
class CORDL_TYPE IAndroidFallbackPlatformHelper {
public:
// Declarations
 __declspec(property(get=get_ds4Helper)) ::Rewired::Interfaces::IAndroidFallbackDS4Helper*  ds4Helper;

/// @brief Method GetUniqueDeviceIdentifier, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetUniqueDeviceIdentifier(::StringW  unityJoystickName, int32_t  unityArrayIndex) ;

/// @brief Method add_DeviceChangedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_DeviceChangedEvent(::System::Action*  value) ;

/// @brief Method get_ds4Helper, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Interfaces::IAndroidFallbackDS4Helper* get_ds4Helper() ;

/// @brief Method remove_DeviceChangedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_DeviceChangedEvent(::System::Action*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IAndroidFallbackPlatformHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAndroidFallbackPlatformHelper(IAndroidFallbackPlatformHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2248};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
