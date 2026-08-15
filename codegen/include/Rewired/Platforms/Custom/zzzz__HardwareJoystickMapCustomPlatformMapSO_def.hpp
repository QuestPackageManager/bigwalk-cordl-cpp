#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/HardwareJoystickMapCustomPlatformMapSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(HardwareJoystickMapCustomPlatformMapSO)
namespace Rewired::Data::Mapping {
class HardwareJoystickMap_Platform;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickMap;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired::Platforms::Custom {
class HardwareJoystickMapCustomPlatformMapSO;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO*, "Rewired.Platforms.Custom", "HardwareJoystickMapCustomPlatformMapSO");
// Dependencies UnityEngine.ScriptableObject
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.HardwareJoystickMapCustomPlatformMapSO
class CORDL_TYPE HardwareJoystickMapCustomPlatformMapSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field hardwareJoystickMap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_hardwareJoystickMap, put=__cordl_internal_set_hardwareJoystickMap)) ::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>  hardwareJoystickMap;

/// @brief Method GetPlatformMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Data::Mapping::HardwareJoystickMap_Platform* GetPlatformMap() ;

/// @brief Method Matches, addr 0x181880350, size 0x80, virtual true, abstract: false, final false
inline bool Matches(::System::Guid  hardwareTypeGuid) ;

static inline ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO* New_ctor() ;

constexpr ::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap> const& __cordl_internal_get_hardwareJoystickMap() const;

constexpr ::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>& __cordl_internal_get_hardwareJoystickMap() ;

constexpr void __cordl_internal_set_hardwareJoystickMap(::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareJoystickMapCustomPlatformMapSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMapSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareJoystickMapCustomPlatformMapSO(HardwareJoystickMapCustomPlatformMapSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMapSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareJoystickMapCustomPlatformMapSO(HardwareJoystickMapCustomPlatformMapSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2317};

/// @brief Field hardwareJoystickMap, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap>  ___hardwareJoystickMap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO, ___hardwareJoystickMap) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
