#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/HardwareJoystickMapCustomPlatformMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickMap_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HardwareJoystickMapCustomPlatformMap)
namespace Rewired::Data::Mapping {
class HardwareJoystickMap_Elements_Base;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickMap_MatchingCriteria_Base;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickMap_Platform;
}
namespace Rewired::Data::Mapping {
class Platform_Custom_HardwareJoystickMap_Axis;
}
namespace Rewired::Data::Mapping {
class Platform_Custom_HardwareJoystickMap_Button;
}
namespace Rewired::Data::Mapping {
class Platform_Custom_HardwareJoystickMap_Element;
}
namespace Rewired::Platforms::Custom {
class HardwareJoystickMapCustomPlatformMap_Axis;
}
namespace Rewired::Platforms::Custom {
class HardwareJoystickMapCustomPlatformMap_Button;
}
namespace Rewired::Platforms::Custom {
class HardwareJoystickMapCustomPlatformMap_Elements;
}
namespace Rewired::Platforms::Custom {
class HardwareJoystickMapCustomPlatformMap_MatchingCriteria;
}
namespace Rewired {
struct AxisRange;
}
namespace Rewired {
class BridgedControllerHWInfo;
}
namespace Rewired {
class ControllerElementIdentifier;
}
namespace Rewired {
struct ControllerElementType;
}
namespace Rewired {
struct InputPlatform;
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
class HardwareJoystickMapCustomPlatformMap;
}
namespace Rewired::Platforms::Custom {
class HardwareJoystickMapCustomPlatformMap_Axis;
}
namespace Rewired::Platforms::Custom {
class HardwareJoystickMapCustomPlatformMap_Button;
}
namespace Rewired::Platforms::Custom {
class HardwareJoystickMapCustomPlatformMap_Elements;
}
namespace Rewired::Platforms::Custom {
class HardwareJoystickMapCustomPlatformMap_MatchingCriteria;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*);
MARK_REF_T(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*);
MARK_REF_T(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*);
MARK_REF_T(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*);
MARK_REF_T(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*, "Rewired.Platforms.Custom", "HardwareJoystickMapCustomPlatformMap");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*, "Rewired.Platforms.Custom", "HardwareJoystickMapCustomPlatformMap/Axis");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*, "Rewired.Platforms.Custom", "HardwareJoystickMapCustomPlatformMap/Button");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*, "Rewired.Platforms.Custom", "HardwareJoystickMapCustomPlatformMap/Elements");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*, "Rewired.Platforms.Custom", "HardwareJoystickMapCustomPlatformMap/MatchingCriteria");
// Dependencies Rewired.Data.Mapping.HardwareJoystickMap::Platform_Custom::Button
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.HardwareJoystickMapCustomPlatformMap/Button
class CORDL_TYPE HardwareJoystickMapCustomPlatformMap_Button : public ::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button {
public:
// Declarations
/// @brief Method CopyVars, addr 0x181876270, size 0x10, virtual true, abstract: false, final false
inline void CopyVars(::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Element*  destination) ;

/// @brief Method DeepClone, addr 0x181876280, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* DeepClone() ;

static inline ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareJoystickMapCustomPlatformMap_Button() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMap_Button", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareJoystickMapCustomPlatformMap_Button(HardwareJoystickMapCustomPlatformMap_Button && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMap_Button", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareJoystickMapCustomPlatformMap_Button(HardwareJoystickMapCustomPlatformMap_Button const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2307};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button) == 0x60, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
// Dependencies Rewired.Data.Mapping.HardwareJoystickMap::Platform_Custom::Axis
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.HardwareJoystickMapCustomPlatformMap/Axis
class CORDL_TYPE HardwareJoystickMapCustomPlatformMap_Axis : public ::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis {
public:
// Declarations
/// @brief Method CopyVars, addr 0x181876210, size 0x10, virtual true, abstract: false, final false
inline void CopyVars(::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Element*  destination) ;

/// @brief Method DeepClone, addr 0x181876220, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* DeepClone() ;

static inline ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareJoystickMapCustomPlatformMap_Axis() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMap_Axis", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareJoystickMapCustomPlatformMap_Axis(HardwareJoystickMapCustomPlatformMap_Axis && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMap_Axis", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareJoystickMapCustomPlatformMap_Axis(HardwareJoystickMapCustomPlatformMap_Axis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2308};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis) == 0x68, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
// Dependencies Rewired.Data.Mapping.HardwareJoystickMap::Platform_Custom::Elements, Rewired.Platforms.Custom.HardwareJoystickMapCustomPlatformMap::Axis, Rewired.Platforms.Custom.HardwareJoystickMapCustomPlatformMap::Button
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.HardwareJoystickMapCustomPlatformMap/Elements
class CORDL_TYPE HardwareJoystickMapCustomPlatformMap_Elements : public ::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Elements {
public:
// Declarations
/// @brief Field axes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_axes, put=__cordl_internal_set_axes)) ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*>  axes;

 __declspec(property(get=get_axisCount)) int32_t  axisCount;

 __declspec(property(get=get_buttonCount)) int32_t  buttonCount;

/// @brief Field buttons, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttons, put=__cordl_internal_set_buttons)) ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*>  buttons;

/// @brief Method CopyVars, addr 0x181880010, size 0x80, virtual true, abstract: false, final false
inline void CopyVars(::Rewired::Data::Mapping::HardwareJoystickMap_Elements_Base*  destination) ;

/// @brief Method DeepClone, addr 0x181880090, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* DeepClone() ;

/// @brief Method GetEffectiveAxisRange, addr 0x1818800e0, size 0x140, virtual true, abstract: false, final false
inline bool GetEffectiveAxisRange(::Rewired::ControllerElementIdentifier*  elementIdentifier, ::by_ref<::Rewired::AxisRange>  axisRange) ;

/// @brief Method GetEffectiveElementIdentifierType, addr 0x181880220, size 0x130, virtual true, abstract: false, final false
inline ::Rewired::ControllerElementType GetEffectiveElementIdentifierType(::Rewired::ControllerElementIdentifier*  elementIdentifier) ;

static inline ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements* New_ctor() ;

constexpr ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*> const& __cordl_internal_get_axes() const;

constexpr ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*>& __cordl_internal_get_axes() ;

constexpr ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*> const& __cordl_internal_get_buttons() const;

constexpr ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*>& __cordl_internal_get_buttons() ;

constexpr void __cordl_internal_set_axes(::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*>  value) ;

constexpr void __cordl_internal_set_buttons(::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_axisCount, addr 0x1803a9050, size 0x20, virtual true, abstract: false, final false
inline int32_t get_axisCount() ;

/// @brief Method get_buttonCount, addr 0x1803aba50, size 0x20, virtual true, abstract: false, final false
inline int32_t get_buttonCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareJoystickMapCustomPlatformMap_Elements() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMap_Elements", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareJoystickMapCustomPlatformMap_Elements(HardwareJoystickMapCustomPlatformMap_Elements && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMap_Elements", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareJoystickMapCustomPlatformMap_Elements(HardwareJoystickMapCustomPlatformMap_Elements const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2306};

/// @brief Field axes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*>  ___axes;

/// @brief Field buttons, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*>  ___buttons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements, ___axes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements, ___buttons) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
// Dependencies Rewired.Data.Mapping.HardwareJoystickMap::Platform_Custom::MatchingCriteria
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.HardwareJoystickMapCustomPlatformMap/MatchingCriteria
class CORDL_TYPE HardwareJoystickMapCustomPlatformMap_MatchingCriteria : public ::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_MatchingCriteria {
public:
// Declarations
 __declspec(property(get=get_hasData)) bool  hasData;

 __declspec(property(get=get_isAllowed)) bool  isAllowed;

/// @brief Field name, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::ArrayW<::StringW>  name;

/// @brief Field nameUseRegex, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_nameUseRegex, put=__cordl_internal_set_nameUseRegex)) bool  nameUseRegex;

/// @brief Method CopyVars, addr 0x181882240, size 0x80, virtual true, abstract: false, final false
inline void CopyVars(::Rewired::Data::Mapping::HardwareJoystickMap_MatchingCriteria_Base*  destination) ;

/// @brief Method CreateInstance, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

/// @brief Method DeepClone, addr 0x1818822d0, size 0x130, virtual true, abstract: false, final false
inline ::System::Object* DeepClone() ;

/// @brief Method DeepClone, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void DeepClone(::System::Object*  destination) ;

/// @brief Method Matches, addr 0x181882400, size 0x150, virtual true, abstract: false, final false
inline bool Matches(::Rewired::BridgedControllerHWInfo*  bridgedControllerHWInfo, bool  strictMatch) ;

/// @brief Method Matches, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool Matches(::System::Object*  customIdentifier) ;

static inline ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria* New_ctor() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_name() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_name() ;

constexpr bool const& __cordl_internal_get_nameUseRegex() const;

constexpr bool& __cordl_internal_get_nameUseRegex() ;

constexpr void __cordl_internal_set_name(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_nameUseRegex(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_hasData, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_hasData() ;

/// @brief Method get_isAllowed, addr 0x181882550, size 0x30, virtual true, abstract: false, final false
inline bool get_isAllowed() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareJoystickMapCustomPlatformMap_MatchingCriteria() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMap_MatchingCriteria", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareJoystickMapCustomPlatformMap_MatchingCriteria(HardwareJoystickMapCustomPlatformMap_MatchingCriteria && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMap_MatchingCriteria", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareJoystickMapCustomPlatformMap_MatchingCriteria(HardwareJoystickMapCustomPlatformMap_MatchingCriteria const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2309};

/// @brief Field nameUseRegex, offset: 0x29, size: 0x1, def value: None
 bool  ___nameUseRegex;

/// @brief Field name, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___name;

/// @brief Size padding 0x40 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria, ___nameUseRegex) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria, ___name) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria) == 0x40, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
// Dependencies Rewired.Data.Mapping.HardwareJoystickMap::Platform_Custom, Rewired.Data.Mapping.HardwareJoystickMap::Platform_Custom::Axis, Rewired.Data.Mapping.HardwareJoystickMap::Platform_Custom::Button
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.HardwareJoystickMapCustomPlatformMap
class CORDL_TYPE HardwareJoystickMapCustomPlatformMap : public ::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom {
public:
// Declarations
using Axis = ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis;

using Button = ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button;

using Elements = ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements;

using MatchingCriteria = ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria;

 __declspec(property(get=get_Axes)) ::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis*>  Axes;

 __declspec(property(get=get_Axes_orig)) ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*>  Axes_orig;

 __declspec(property(get=get_Buttons)) ::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button*>  Buttons;

 __declspec(property(get=get_Buttons_orig)) ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*>  Buttons_orig;

/// @brief Field _axesOrigGame, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__axesOrigGame, put=__cordl_internal_set__axesOrigGame)) ::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis*>  _axesOrigGame;

/// @brief Field _buttonsOrigGame, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonsOrigGame, put=__cordl_internal_set__buttonsOrigGame)) ::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button*>  _buttonsOrigGame;

 __declspec(property(get=get_assignedAxisCount)) int32_t  assignedAxisCount;

 __declspec(property(get=get_assignedButtonCount)) int32_t  assignedButtonCount;

/// @brief Field elements, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_elements, put=__cordl_internal_set_elements)) ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*  elements;

 __declspec(property(get=get_elements_base)) ::Rewired::Data::Mapping::HardwareJoystickMap_Elements_Base*  elements_base;

 __declspec(property(get=get_hasData)) bool  hasData;

 __declspec(property(get=get_isAllowed)) bool  isAllowed;

 __declspec(property(get=get_platform)) ::Rewired::InputPlatform  platform;

/// @brief Method CopyVars, addr 0x1818803f0, size 0x60, virtual true, abstract: false, final false
inline void CopyVars(::Rewired::Data::Mapping::HardwareJoystickMap_Platform*  destination) ;

/// @brief Method CreateInstance, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

/// @brief Method DeepClone, addr 0x181880450, size 0x130, virtual true, abstract: false, final false
inline ::System::Object* DeepClone() ;

/// @brief Method DeepClone, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void DeepClone(::System::Object*  destination) ;

/// @brief Method GetVariants, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Data::Mapping::HardwareJoystickMap_Platform*>* GetVariants() ;

static inline ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap* New_ctor() ;

constexpr ::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis*> const& __cordl_internal_get__axesOrigGame() const;

constexpr ::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis*>& __cordl_internal_get__axesOrigGame() ;

constexpr ::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button*> const& __cordl_internal_get__buttonsOrigGame() const;

constexpr ::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button*>& __cordl_internal_get__buttonsOrigGame() ;

constexpr ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements* const& __cordl_internal_get_elements() const;

constexpr ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*& __cordl_internal_get_elements() ;

constexpr void __cordl_internal_set__axesOrigGame(::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis*>  value) ;

constexpr void __cordl_internal_set__buttonsOrigGame(::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button*>  value) ;

constexpr void __cordl_internal_set_elements(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Axes, addr 0x181880580, size 0xb0, virtual true, abstract: false, final false
inline ::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis*> get_Axes() ;

/// @brief Method get_Axes_orig, addr 0x181880630, size 0x20, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*> get_Axes_orig() ;

/// @brief Method get_Buttons, addr 0x181880650, size 0xb0, virtual true, abstract: false, final false
inline ::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button*> get_Buttons() ;

/// @brief Method get_Buttons_orig, addr 0x181880700, size 0x20, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*> get_Buttons_orig() ;

/// @brief Method get_assignedAxisCount, addr 0x181880720, size 0x30, virtual true, abstract: false, final false
inline int32_t get_assignedAxisCount() ;

/// @brief Method get_assignedButtonCount, addr 0x181880750, size 0x30, virtual true, abstract: false, final false
inline int32_t get_assignedButtonCount() ;

/// @brief Method get_elements_base, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final false
inline ::Rewired::Data::Mapping::HardwareJoystickMap_Elements_Base* get_elements_base() ;

/// @brief Method get_hasData, addr 0x181880780, size 0x50, virtual true, abstract: false, final false
inline bool get_hasData() ;

/// @brief Method get_isAllowed, addr 0x1818807d0, size 0x20, virtual true, abstract: false, final false
inline bool get_isAllowed() ;

/// @brief Method get_platform, addr 0x1809019c0, size 0x20, virtual true, abstract: false, final false
inline ::Rewired::InputPlatform get_platform() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareJoystickMapCustomPlatformMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareJoystickMapCustomPlatformMap(HardwareJoystickMapCustomPlatformMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMapCustomPlatformMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareJoystickMapCustomPlatformMap(HardwareJoystickMapCustomPlatformMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2310};

/// @brief Field elements, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*  ___elements;

/// @brief Field _axesOrigGame, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis*>  ____axesOrigGame;

/// @brief Field _buttonsOrigGame, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button*>  ____buttonsOrigGame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap, ___elements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap, ____axesOrigGame) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap, ____buttonsOrigGame) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap) == 0x30, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
