#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/HardwareJoystickMapCustomPlatformMapSimple.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Platforms/Custom/zzzz__HardwareJoystickMapCustomPlatformMapSimpleBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(HardwareJoystickMapCustomPlatformMapSimple)
namespace Rewired::Data::Mapping {
class HardwareJoystickMap_Platform;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Platforms::Custom {
class HardwareJoystickMapCustomPlatformMapSimple;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple*, "Rewired.Platforms.Custom", "HardwareJoystickMapCustomPlatformMapSimple");
// Dependencies Rewired.Platforms.Custom.HardwareJoystickMapCustomPlatformMapSimpleBase
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.HardwareJoystickMapCustomPlatformMapSimple
class CORDL_TYPE HardwareJoystickMapCustomPlatformMapSimple : public ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase {
public:
// Declarations
/// @brief Field variants, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_variants, put=__cordl_internal_set_variants)) ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase*>  variants;

/// @brief Method CreateInstance, addr 0x1818803e0, size 0x10, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

/// @brief Method GetVariants, addr 0x1802d9800, size 0x10, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Data::Mapping::HardwareJoystickMap_Platform*>* GetVariants() ;

static inline ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple* New_ctor() ;

constexpr ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase*> const& __cordl_internal_get_variants() const;

constexpr ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase*>& __cordl_internal_get_variants() ;

constexpr void __cordl_internal_set_variants(::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase*>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareJoystickMapCustomPlatformMapSimple() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMapSimple", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareJoystickMapCustomPlatformMapSimple(HardwareJoystickMapCustomPlatformMapSimple && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMapSimple", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareJoystickMapCustomPlatformMapSimple(HardwareJoystickMapCustomPlatformMapSimple const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2316};

/// @brief Field variants, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase*>  ___variants;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple, ___variants) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimple) == 0x40, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
