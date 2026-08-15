#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/HardwareJoystickMapCustomPlatformMapSimpleSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Platforms/Custom/zzzz__HardwareJoystickMapCustomPlatformMapSO_def.hpp"
CORDL_MODULE_EXPORT(HardwareJoystickMapCustomPlatformMapSimpleSO)
namespace Rewired::Data::Mapping {
class HardwareJoystickMap_Platform;
}
namespace Rewired::Platforms::Custom {
class HardwareJoystickMapCustomPlatformMapSimple;
}
// Forward declare root types
namespace Rewired::Platforms::Custom {
class HardwareJoystickMapCustomPlatformMapSimpleSO;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO*, "Rewired.Platforms.Custom", "HardwareJoystickMapCustomPlatformMapSimpleSO");
// Dependencies Rewired.Platforms.Custom.HardwareJoystickMapCustomPlatformMapSO
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.HardwareJoystickMapCustomPlatformMapSimpleSO
class CORDL_TYPE HardwareJoystickMapCustomPlatformMapSimpleSO : public ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSO {
public:
// Declarations
/// @brief Field platformMap, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformMap, put=__cordl_internal_set_platformMap)) ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple*  platformMap;

/// @brief Method GetPlatformMap, addr 0x1802d97e0, size 0x10, virtual true, abstract: false, final false
inline ::Rewired::Data::Mapping::HardwareJoystickMap_Platform* GetPlatformMap() ;

static inline ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO* New_ctor() ;

constexpr ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple* const& __cordl_internal_get_platformMap() const;

constexpr ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple*& __cordl_internal_get_platformMap() ;

constexpr void __cordl_internal_set_platformMap(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple*  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareJoystickMapCustomPlatformMapSimpleSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMapSimpleSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareJoystickMapCustomPlatformMapSimpleSO(HardwareJoystickMapCustomPlatformMapSimpleSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMapSimpleSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareJoystickMapCustomPlatformMapSimpleSO(HardwareJoystickMapCustomPlatformMapSimpleSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2318};

/// @brief Field platformMap, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple*  ___platformMap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO, ___platformMap) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleSO) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
