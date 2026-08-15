#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/HardwareJoystickMapCustomPlatformMapSimpleBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Platforms/Custom/zzzz__HardwareJoystickMapCustomPlatformMap_1_def.hpp"
#include "Rewired/Platforms/Custom/zzzz__HardwareJoystickMapCustomPlatformMap_def.hpp"
CORDL_MODULE_EXPORT(HardwareJoystickMapCustomPlatformMapSimpleBase)
namespace Rewired::Platforms::Custom {
class HardwareJoystickMapCustomPlatformMapSimpleBase_MatchingCriteria;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Platforms::Custom {
class HardwareJoystickMapCustomPlatformMapSimpleBase;
}
namespace Rewired::Platforms::Custom {
class HardwareJoystickMapCustomPlatformMapSimpleBase_MatchingCriteria;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase*);
MARK_REF_T(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase_MatchingCriteria*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase*, "Rewired.Platforms.Custom", "HardwareJoystickMapCustomPlatformMapSimpleBase");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase_MatchingCriteria*, "Rewired.Platforms.Custom", "HardwareJoystickMapCustomPlatformMapSimpleBase/MatchingCriteria");
// Dependencies Rewired.Platforms.Custom.HardwareJoystickMapCustomPlatformMap::MatchingCriteria
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.HardwareJoystickMapCustomPlatformMapSimpleBase/MatchingCriteria
class CORDL_TYPE HardwareJoystickMapCustomPlatformMapSimpleBase_MatchingCriteria : public ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria {
public:
// Declarations
/// @brief Method CreateInstance, addr 0x1818822c0, size 0x10, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

static inline ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase_MatchingCriteria* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareJoystickMapCustomPlatformMapSimpleBase_MatchingCriteria() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMapSimpleBase_MatchingCriteria", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareJoystickMapCustomPlatformMapSimpleBase_MatchingCriteria(HardwareJoystickMapCustomPlatformMapSimpleBase_MatchingCriteria && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMapSimpleBase_MatchingCriteria", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareJoystickMapCustomPlatformMapSimpleBase_MatchingCriteria(HardwareJoystickMapCustomPlatformMapSimpleBase_MatchingCriteria const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2314};

/// @brief Size padding 0x40 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase_MatchingCriteria) == 0x40, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
// Dependencies Rewired.Platforms.Custom.HardwareJoystickMapCustomPlatformMap`1<TMatchingCriteria>
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.HardwareJoystickMapCustomPlatformMapSimpleBase
class CORDL_TYPE HardwareJoystickMapCustomPlatformMapSimpleBase : public ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_1<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase_MatchingCriteria*> {
public:
// Declarations
using MatchingCriteria = ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase_MatchingCriteria;

/// @brief Method CreateInstance, addr 0x1818803d0, size 0x10, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

static inline ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareJoystickMapCustomPlatformMapSimpleBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMapSimpleBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareJoystickMapCustomPlatformMapSimpleBase(HardwareJoystickMapCustomPlatformMapSimpleBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMapSimpleBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareJoystickMapCustomPlatformMapSimpleBase(HardwareJoystickMapCustomPlatformMapSimpleBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2315};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMapSimpleBase) == 0x38, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
