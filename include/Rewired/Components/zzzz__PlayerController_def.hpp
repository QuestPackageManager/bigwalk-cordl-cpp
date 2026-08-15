#pragma once
// IWYU pragma private; include "Rewired/Components/PlayerController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Components/zzzz__ComponentWrapper_1_def.hpp"
#include "Rewired/zzzz__AxisCoordinateMode_def.hpp"
#include "Rewired/zzzz__PlayerController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerController)
namespace Rewired::Components {
class PlayerController_AxisValueChangedHandler;
}
namespace Rewired::Components {
class PlayerController_ButtonStateChangedHandler;
}
namespace Rewired::Components {
class PlayerController_ElementInfo;
}
namespace Rewired::Components {
class PlayerController_ElementWithSourceInfoCreator;
}
namespace Rewired::Components {
class PlayerController_ElementWithSourceInfo;
}
namespace Rewired::Components {
class PlayerController_EnabledStateChangedHandler;
}
namespace Rewired {
struct AxisCoordinateMode;
}
namespace Rewired {
class Element_PlayerController_Definition;
}
namespace Rewired {
struct Element_PlayerController_TypeWithSource;
}
namespace Rewired {
struct Element_PlayerController_Type;
}
namespace Rewired {
class IPlayerController;
}
namespace Rewired {
class InputManager_Base;
}
namespace Rewired {
struct PlayerController_AbsoluteToRelativeScalingMode;
}
namespace Rewired {
class PlayerController_Axis;
}
namespace Rewired {
class PlayerController_Button;
}
namespace Rewired {
class PlayerController_Element;
}
namespace Rewired {
class PlayerController;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Components {
class PlayerController;
}
namespace Rewired::Components {
class PlayerController_AxisValueChangedHandler;
}
namespace Rewired::Components {
class PlayerController_ButtonStateChangedHandler;
}
namespace Rewired::Components {
class PlayerController_ElementInfo;
}
namespace Rewired::Components {
class PlayerController_ElementWithSourceInfo;
}
namespace Rewired::Components {
class PlayerController_ElementWithSourceInfoCreator;
}
namespace Rewired::Components {
class PlayerController_EnabledStateChangedHandler;
}
// Write type traits
MARK_REF_T(::Rewired::Components::PlayerController*);
MARK_REF_T(::Rewired::Components::PlayerController_AxisValueChangedHandler*);
MARK_REF_T(::Rewired::Components::PlayerController_ButtonStateChangedHandler*);
MARK_REF_T(::Rewired::Components::PlayerController_ElementInfo*);
MARK_REF_T(::Rewired::Components::PlayerController_ElementWithSourceInfo*);
MARK_REF_T(::Rewired::Components::PlayerController_ElementWithSourceInfoCreator*);
MARK_REF_T(::Rewired::Components::PlayerController_EnabledStateChangedHandler*);
DEFINE_IL2CPP_CLASS(::Rewired::Components::PlayerController*, "Rewired.Components", "PlayerController");
DEFINE_IL2CPP_CLASS(::Rewired::Components::PlayerController_AxisValueChangedHandler*, "Rewired.Components", "PlayerController/AxisValueChangedHandler");
DEFINE_IL2CPP_CLASS(::Rewired::Components::PlayerController_ButtonStateChangedHandler*, "Rewired.Components", "PlayerController/ButtonStateChangedHandler");
DEFINE_IL2CPP_CLASS(::Rewired::Components::PlayerController_ElementInfo*, "Rewired.Components", "PlayerController/ElementInfo");
DEFINE_IL2CPP_CLASS(::Rewired::Components::PlayerController_ElementWithSourceInfo*, "Rewired.Components", "PlayerController/ElementWithSourceInfo");
DEFINE_IL2CPP_CLASS(::Rewired::Components::PlayerController_ElementWithSourceInfoCreator*, "Rewired.Components", "PlayerController/ElementWithSourceInfoCreator");
DEFINE_IL2CPP_CLASS(::Rewired::Components::PlayerController_EnabledStateChangedHandler*, "Rewired.Components", "PlayerController/EnabledStateChangedHandler");
// Dependencies UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Rewired::Components {
// Is value type: false
// CS Name: Rewired.Components.PlayerController/ButtonStateChangedHandler
class CORDL_TYPE PlayerController_ButtonStateChangedHandler : public ::UnityEngine::Events::UnityEvent_2<int32_t,bool> {
public:
// Declarations
static inline ::Rewired::Components::PlayerController_ButtonStateChangedHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x180da3080, size 0x8190, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_ButtonStateChangedHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_ButtonStateChangedHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController_ButtonStateChangedHandler(PlayerController_ButtonStateChangedHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_ButtonStateChangedHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController_ButtonStateChangedHandler(PlayerController_ButtonStateChangedHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2725};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Components::PlayerController_ButtonStateChangedHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::Components
// Dependencies UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Rewired::Components {
// Is value type: false
// CS Name: Rewired.Components.PlayerController/AxisValueChangedHandler
class CORDL_TYPE PlayerController_AxisValueChangedHandler : public ::UnityEngine::Events::UnityEvent_2<int32_t,float_t> {
public:
// Declarations
static inline ::Rewired::Components::PlayerController_AxisValueChangedHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x180da3080, size 0x8190, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_AxisValueChangedHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_AxisValueChangedHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController_AxisValueChangedHandler(PlayerController_AxisValueChangedHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_AxisValueChangedHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController_AxisValueChangedHandler(PlayerController_AxisValueChangedHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2726};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Components::PlayerController_AxisValueChangedHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::Components
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Rewired::Components {
// Is value type: false
// CS Name: Rewired.Components.PlayerController/EnabledStateChangedHandler
class CORDL_TYPE PlayerController_EnabledStateChangedHandler : public ::UnityEngine::Events::UnityEvent_1<bool> {
public:
// Declarations
static inline ::Rewired::Components::PlayerController_EnabledStateChangedHandler* New_ctor() ;

/// @brief Method .ctor, addr 0x180da3080, size 0x8190, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_EnabledStateChangedHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_EnabledStateChangedHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController_EnabledStateChangedHandler(PlayerController_EnabledStateChangedHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_EnabledStateChangedHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController_EnabledStateChangedHandler(PlayerController_EnabledStateChangedHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2727};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Components::PlayerController_EnabledStateChangedHandler) == 0x30, "Size mismatch!");

} // namespace end def Rewired::Components
// Dependencies Rewired.AxisCoordinateMode, Rewired.PlayerController::AbsoluteToRelativeScalingMode, Rewired.PlayerController::Element::TypeWithSource, System.Object
namespace Rewired::Components {
// Is value type: false
// CS Name: Rewired.Components.PlayerController/ElementWithSourceInfo
class CORDL_TYPE PlayerController_ElementWithSourceInfo : public ::System::Object {
public:
// Declarations
/// @brief Field _absoluteToRelativeScalingMode, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__absoluteToRelativeScalingMode, put=__cordl_internal_set__absoluteToRelativeScalingMode)) ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  _absoluteToRelativeScalingMode;

/// @brief Field _absoluteToRelativeSensitivity, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__absoluteToRelativeSensitivity, put=__cordl_internal_set__absoluteToRelativeSensitivity)) float_t  _absoluteToRelativeSensitivity;

/// @brief Field _actionId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__actionId, put=__cordl_internal_set__actionId)) int32_t  _actionId;

/// @brief Field _coordinateMode, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__coordinateMode, put=__cordl_internal_set__coordinateMode)) ::Rewired::AxisCoordinateMode  _coordinateMode;

/// @brief Field _elementType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__elementType, put=__cordl_internal_set__elementType)) ::Rewired::Element_PlayerController_TypeWithSource  _elementType;

/// @brief Field _enabled, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Field _name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _repeatRate, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__repeatRate, put=__cordl_internal_set__repeatRate)) float_t  _repeatRate;

 __declspec(property(get=get_absoluteSourceSensitivity, put=set_absoluteSourceSensitivity)) float_t  absoluteSourceSensitivity;

 __declspec(property(get=get_absoluteToRelativeScalingMode, put=set_absoluteToRelativeScalingMode)) ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  absoluteToRelativeScalingMode;

 __declspec(property(get=get_actionId, put=set_actionId)) int32_t  actionId;

 __declspec(property(get=get_coordinateMode, put=set_coordinateMode)) ::Rewired::AxisCoordinateMode  coordinateMode;

 __declspec(property(get=get_elementType, put=set_elementType)) ::Rewired::Element_PlayerController_TypeWithSource  elementType;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_repeatRate, put=set_repeatRate)) float_t  repeatRate;

/// @brief Method Create, addr 0x1818d9940, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::Components::PlayerController_ElementWithSourceInfo* Create() ;

static inline ::Rewired::Components::PlayerController_ElementWithSourceInfo* New_ctor() ;

/// @brief Method ToDefinition, addr 0x1818d9970, size 0x190, virtual false, abstract: false, final false
inline ::Rewired::Element_PlayerController_Definition* ToDefinition() ;

constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode const& __cordl_internal_get__absoluteToRelativeScalingMode() const;

constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode& __cordl_internal_get__absoluteToRelativeScalingMode() ;

constexpr float_t const& __cordl_internal_get__absoluteToRelativeSensitivity() const;

constexpr float_t& __cordl_internal_get__absoluteToRelativeSensitivity() ;

constexpr int32_t const& __cordl_internal_get__actionId() const;

constexpr int32_t& __cordl_internal_get__actionId() ;

constexpr ::Rewired::AxisCoordinateMode const& __cordl_internal_get__coordinateMode() const;

constexpr ::Rewired::AxisCoordinateMode& __cordl_internal_get__coordinateMode() ;

constexpr ::Rewired::Element_PlayerController_TypeWithSource const& __cordl_internal_get__elementType() const;

constexpr ::Rewired::Element_PlayerController_TypeWithSource& __cordl_internal_get__elementType() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr float_t const& __cordl_internal_get__repeatRate() const;

constexpr float_t& __cordl_internal_get__repeatRate() ;

constexpr void __cordl_internal_set__absoluteToRelativeScalingMode(::Rewired::PlayerController_AbsoluteToRelativeScalingMode  value) ;

constexpr void __cordl_internal_set__absoluteToRelativeSensitivity(float_t  value) ;

constexpr void __cordl_internal_set__actionId(int32_t  value) ;

constexpr void __cordl_internal_set__coordinateMode(::Rewired::AxisCoordinateMode  value) ;

constexpr void __cordl_internal_set__elementType(::Rewired::Element_PlayerController_TypeWithSource  value) ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__repeatRate(float_t  value) ;

/// @brief Method .ctor, addr 0x1818d9b00, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_absoluteSourceSensitivity, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_absoluteSourceSensitivity() ;

/// @brief Method get_absoluteToRelativeScalingMode, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::PlayerController_AbsoluteToRelativeScalingMode get_absoluteToRelativeScalingMode() ;

/// @brief Method get_actionId, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_actionId() ;

/// @brief Method get_coordinateMode, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::AxisCoordinateMode get_coordinateMode() ;

/// @brief Method get_elementType, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Element_PlayerController_TypeWithSource get_elementType() ;

/// @brief Method get_enabled, addr 0x1804bdaf0, size 0x10, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_name, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_repeatRate, addr 0x1803f68d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_repeatRate() ;

/// @brief Method set_absoluteSourceSensitivity, addr 0x1803f2c00, size 0x10, virtual false, abstract: false, final false
inline void set_absoluteSourceSensitivity(float_t  value) ;

/// @brief Method set_absoluteToRelativeScalingMode, addr 0x1803914d0, size 0x10, virtual false, abstract: false, final false
inline void set_absoluteToRelativeScalingMode(::Rewired::PlayerController_AbsoluteToRelativeScalingMode  value) ;

/// @brief Method set_actionId, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_actionId(int32_t  value) ;

/// @brief Method set_coordinateMode, addr 0x180396f00, size 0x10, virtual false, abstract: false, final false
inline void set_coordinateMode(::Rewired::AxisCoordinateMode  value) ;

/// @brief Method set_elementType, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_elementType(::Rewired::Element_PlayerController_TypeWithSource  value) ;

/// @brief Method set_enabled, addr 0x1804bdb20, size 0x10, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_name, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_repeatRate, addr 0x18046fb30, size 0x10, virtual false, abstract: false, final false
inline void set_repeatRate(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_ElementWithSourceInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_ElementWithSourceInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController_ElementWithSourceInfo(PlayerController_ElementWithSourceInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_ElementWithSourceInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController_ElementWithSourceInfo(PlayerController_ElementWithSourceInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2728};

/// @brief Field _name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _elementType, offset: 0x18, size: 0x4, def value: None
 ::Rewired::Element_PlayerController_TypeWithSource  ____elementType;

/// @brief Field _enabled, offset: 0x1c, size: 0x1, def value: None
 bool  ____enabled;

/// @brief Field _actionId, offset: 0x20, size: 0x4, def value: None
 int32_t  ____actionId;

/// @brief Field _coordinateMode, offset: 0x24, size: 0x4, def value: None
 ::Rewired::AxisCoordinateMode  ____coordinateMode;

/// @brief Field _absoluteToRelativeSensitivity, offset: 0x28, size: 0x4, def value: None
 float_t  ____absoluteToRelativeSensitivity;

/// @brief Field _absoluteToRelativeScalingMode, offset: 0x2c, size: 0x4, def value: None
 ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  ____absoluteToRelativeScalingMode;

/// @brief Field _repeatRate, offset: 0x30, size: 0x4, def value: None
 float_t  ____repeatRate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Components::PlayerController_ElementWithSourceInfo, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerController_ElementWithSourceInfo, ____elementType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerController_ElementWithSourceInfo, ____enabled) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerController_ElementWithSourceInfo, ____actionId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerController_ElementWithSourceInfo, ____coordinateMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerController_ElementWithSourceInfo, ____absoluteToRelativeSensitivity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerController_ElementWithSourceInfo, ____absoluteToRelativeScalingMode) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerController_ElementWithSourceInfo, ____repeatRate) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::Components::PlayerController_ElementWithSourceInfo) == 0x38, "Size mismatch!");

} // namespace end def Rewired::Components
// Dependencies Rewired.Components.PlayerController::ElementWithSourceInfo
namespace Rewired::Components {
// Is value type: false
// CS Name: Rewired.Components.PlayerController/ElementWithSourceInfoCreator
class CORDL_TYPE PlayerController_ElementWithSourceInfoCreator : public ::Rewired::Components::PlayerController_ElementWithSourceInfo {
public:
// Declarations
static inline ::Rewired::Components::PlayerController_ElementWithSourceInfoCreator* New_ctor() ;

/// @brief Method .ctor, addr 0x1818d9920, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_ElementWithSourceInfoCreator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_ElementWithSourceInfoCreator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController_ElementWithSourceInfoCreator(PlayerController_ElementWithSourceInfoCreator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_ElementWithSourceInfoCreator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController_ElementWithSourceInfoCreator(PlayerController_ElementWithSourceInfoCreator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2729};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Components::PlayerController_ElementWithSourceInfoCreator) == 0x38, "Size mismatch!");

} // namespace end def Rewired::Components
// Dependencies Rewired.Components.PlayerController::ElementWithSourceInfo, Rewired.PlayerController::Element::Type, System.Object
namespace Rewired::Components {
// Is value type: false
// CS Name: Rewired.Components.PlayerController/ElementInfo
class CORDL_TYPE PlayerController_ElementInfo : public ::System::Object {
public:
// Declarations
/// @brief Field _elementType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__elementType, put=__cordl_internal_set__elementType)) ::Rewired::Element_PlayerController_Type  _elementType;

/// @brief Field _elements, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__elements, put=__cordl_internal_set__elements)) ::ArrayW<::Rewired::Components::PlayerController_ElementWithSourceInfo*>  _elements;

/// @brief Field _enabled, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Field _name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

 __declspec(property(get=get_elementType, put=set_elementType)) ::Rewired::Element_PlayerController_Type  elementType;

 __declspec(property(get=get_elements, put=set_elements)) ::ArrayW<::Rewired::Components::PlayerController_ElementWithSourceInfo*>  elements;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

static inline ::Rewired::Components::PlayerController_ElementInfo* New_ctor() ;

/// @brief Method ToDefinition, addr 0x1818d9260, size 0x690, virtual false, abstract: false, final false
inline ::Rewired::Element_PlayerController_Definition* ToDefinition() ;

constexpr ::Rewired::Element_PlayerController_Type const& __cordl_internal_get__elementType() const;

constexpr ::Rewired::Element_PlayerController_Type& __cordl_internal_get__elementType() ;

constexpr ::ArrayW<::Rewired::Components::PlayerController_ElementWithSourceInfo*> const& __cordl_internal_get__elements() const;

constexpr ::ArrayW<::Rewired::Components::PlayerController_ElementWithSourceInfo*>& __cordl_internal_get__elements() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr void __cordl_internal_set__elementType(::Rewired::Element_PlayerController_Type  value) ;

constexpr void __cordl_internal_set__elements(::ArrayW<::Rewired::Components::PlayerController_ElementWithSourceInfo*>  value) ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

/// @brief Method .ctor, addr 0x1818d98f0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_elementType, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Element_PlayerController_Type get_elementType() ;

/// @brief Method get_elements, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::Components::PlayerController_ElementWithSourceInfo*> get_elements() ;

/// @brief Method get_enabled, addr 0x1804bdaf0, size 0x10, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_name, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method set_elementType, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_elementType(::Rewired::Element_PlayerController_Type  value) ;

/// @brief Method set_elements, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_elements(::ArrayW<::Rewired::Components::PlayerController_ElementWithSourceInfo*>  value) ;

/// @brief Method set_enabled, addr 0x1804bdb20, size 0x10, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_name, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_ElementInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_ElementInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController_ElementInfo(PlayerController_ElementInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_ElementInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController_ElementInfo(PlayerController_ElementInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2730};

/// @brief Field _name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _elementType, offset: 0x18, size: 0x4, def value: None
 ::Rewired::Element_PlayerController_Type  ____elementType;

/// @brief Field _enabled, offset: 0x1c, size: 0x1, def value: None
 bool  ____enabled;

/// @brief Field _elements, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Rewired::Components::PlayerController_ElementWithSourceInfo*>  ____elements;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Components::PlayerController_ElementInfo, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerController_ElementInfo, ____elementType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerController_ElementInfo, ____enabled) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerController_ElementInfo, ____elements) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Components::PlayerController_ElementInfo) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Components
// Dependencies Rewired.Components.ComponentWrapper`1<T>
namespace Rewired::Components {
// Is value type: false
// CS Name: Rewired.Components.PlayerController
class CORDL_TYPE PlayerController : public ::Rewired::Components::ComponentWrapper_1<::Rewired::PlayerController*> {
public:
// Declarations
using AxisValueChangedHandler = ::Rewired::Components::PlayerController_AxisValueChangedHandler;

using ButtonStateChangedHandler = ::Rewired::Components::PlayerController_ButtonStateChangedHandler;

using ElementInfo = ::Rewired::Components::PlayerController_ElementInfo;

using ElementWithSourceInfo = ::Rewired::Components::PlayerController_ElementWithSourceInfo;

using ElementWithSourceInfoCreator = ::Rewired::Components::PlayerController_ElementWithSourceInfoCreator;

using EnabledStateChangedHandler = ::Rewired::Components::PlayerController_EnabledStateChangedHandler;

/// @brief Field _elements, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__elements, put=__cordl_internal_set__elements)) ::System::Collections::Generic::List_1<::Rewired::Components::PlayerController_ElementInfo*>*  _elements;

/// @brief Field _onAxisValueChanged, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__onAxisValueChanged, put=__cordl_internal_set__onAxisValueChanged)) ::Rewired::Components::PlayerController_AxisValueChangedHandler*  _onAxisValueChanged;

/// @brief Field _onButtonStateChanged, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__onButtonStateChanged, put=__cordl_internal_set__onButtonStateChanged)) ::Rewired::Components::PlayerController_ButtonStateChangedHandler*  _onButtonStateChanged;

/// @brief Field _onEnabledStateChanged, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__onEnabledStateChanged, put=__cordl_internal_set__onEnabledStateChanged)) ::Rewired::Components::PlayerController_EnabledStateChangedHandler*  _onEnabledStateChanged;

/// @brief Field _playerId, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__playerId, put=__cordl_internal_set__playerId)) int32_t  _playerId;

/// @brief Field _rewiredInputManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rewiredInputManager, put=__cordl_internal_set__rewiredInputManager)) ::UnityW<::Rewired::InputManager_Base>  _rewiredInputManager;

 __declspec(property(get=get_axes)) ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Axis*>*  axes;

 __declspec(property(get=get_axisCount)) int32_t  axisCount;

 __declspec(property(get=get_buttonCount)) int32_t  buttonCount;

 __declspec(property(get=get_buttons)) ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Button*>*  buttons;

 __declspec(property(get=get_elementCount)) int32_t  elementCount;

 __declspec(property(get=get_elements)) ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Element*>*  elements;

 __declspec(property(get=get_playerId, put=set_playerId)) int32_t  playerId;

/// @brief Convert operator to "::Rewired::IPlayerController"
constexpr operator  ::Rewired::IPlayerController*() noexcept;

/// @brief Method CreateSource, addr 0x1818db190, size 0x2c0, virtual true, abstract: false, final false
inline ::Rewired::PlayerController* CreateSource(::System::Object*  args) ;

/// @brief Method GMiFVZCbDhOlFvWxBQUjQcbBfySy, addr 0x1818db450, size 0xb0, virtual false, abstract: false, final false
inline void GMiFVZCbDhOlFvWxBQUjQcbBfySy(int32_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method GetAxis, addr 0x1818db530, size 0x30, virtual true, abstract: false, final true
inline float_t GetAxis(int32_t  index) ;

/// @brief Method GetAxisRaw, addr 0x1818db500, size 0x30, virtual true, abstract: false, final true
inline float_t GetAxisRaw(int32_t  index) ;

/// @brief Method GetButton, addr 0x1818db5c0, size 0x30, virtual true, abstract: false, final true
inline bool GetButton(int32_t  index) ;

/// @brief Method GetButtonDown, addr 0x1818db560, size 0x30, virtual true, abstract: false, final true
inline bool GetButtonDown(int32_t  index) ;

/// @brief Method GetButtonUp, addr 0x1818db590, size 0x30, virtual true, abstract: false, final true
inline bool GetButtonUp(int32_t  index) ;

/// @brief Method GetCreateSourceArgs, addr 0x1802e5850, size 0x10, virtual true, abstract: false, final false
inline ::System::Object* GetCreateSourceArgs() ;

/// @brief Method GetElement, addr 0x1818db5f0, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::PlayerController_Element* GetElement(int32_t  index) ;

/// @brief Method GetElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline T GetElement(int32_t  index) ;

static inline ::Rewired::Components::PlayerController* New_ctor() ;

/// @brief Method OnAwake, addr 0x1818db640, size 0x60, virtual true, abstract: false, final false
inline void OnAwake() ;

/// @brief Method OnAwakeFinished, addr 0x1818db620, size 0x20, virtual true, abstract: false, final false
inline void OnAwakeFinished() ;

/// @brief Method OnDisabled, addr 0x1818db6a0, size 0x80, virtual true, abstract: false, final false
inline void OnDisabled() ;

/// @brief Method OnEnabled, addr 0x1818db720, size 0x80, virtual true, abstract: false, final false
inline void OnEnabled() ;

/// @brief Method OnReset, addr 0x1818db7a0, size 0x120, virtual true, abstract: false, final false
inline void OnReset() ;

/// @brief Method OnValidated, addr 0x1818db8c0, size 0x100, virtual true, abstract: false, final false
inline void OnValidated() ;

/// @brief Method Rewired.IPlayerController.get_enabled, addr 0x1802dc4d0, size 0x10, virtual true, abstract: false, final true
inline bool Rewired_IPlayerController_get_enabled() ;

/// @brief Method Rewired.IPlayerController.set_enabled, addr 0x1818db9c0, size 0x10, virtual true, abstract: false, final true
inline void Rewired_IPlayerController_set_enabled(bool  value) ;

/// @brief Method Subscribe, addr 0x1818db9d0, size 0xf0, virtual true, abstract: false, final false
inline void Subscribe() ;

/// @brief Method Unsubscribe, addr 0x1818dbac0, size 0xf0, virtual true, abstract: false, final false
inline void Unsubscribe() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Components::PlayerController_ElementInfo*>* const& __cordl_internal_get__elements() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Components::PlayerController_ElementInfo*>*& __cordl_internal_get__elements() ;

constexpr ::Rewired::Components::PlayerController_AxisValueChangedHandler* const& __cordl_internal_get__onAxisValueChanged() const;

constexpr ::Rewired::Components::PlayerController_AxisValueChangedHandler*& __cordl_internal_get__onAxisValueChanged() ;

constexpr ::Rewired::Components::PlayerController_ButtonStateChangedHandler* const& __cordl_internal_get__onButtonStateChanged() const;

constexpr ::Rewired::Components::PlayerController_ButtonStateChangedHandler*& __cordl_internal_get__onButtonStateChanged() ;

constexpr ::Rewired::Components::PlayerController_EnabledStateChangedHandler* const& __cordl_internal_get__onEnabledStateChanged() const;

constexpr ::Rewired::Components::PlayerController_EnabledStateChangedHandler*& __cordl_internal_get__onEnabledStateChanged() ;

constexpr int32_t const& __cordl_internal_get__playerId() const;

constexpr int32_t& __cordl_internal_get__playerId() ;

constexpr ::UnityW<::Rewired::InputManager_Base> const& __cordl_internal_get__rewiredInputManager() const;

constexpr ::UnityW<::Rewired::InputManager_Base>& __cordl_internal_get__rewiredInputManager() ;

constexpr void __cordl_internal_set__elements(::System::Collections::Generic::List_1<::Rewired::Components::PlayerController_ElementInfo*>*  value) ;

constexpr void __cordl_internal_set__onAxisValueChanged(::Rewired::Components::PlayerController_AxisValueChangedHandler*  value) ;

constexpr void __cordl_internal_set__onButtonStateChanged(::Rewired::Components::PlayerController_ButtonStateChangedHandler*  value) ;

constexpr void __cordl_internal_set__onEnabledStateChanged(::Rewired::Components::PlayerController_EnabledStateChangedHandler*  value) ;

constexpr void __cordl_internal_set__playerId(int32_t  value) ;

constexpr void __cordl_internal_set__rewiredInputManager(::UnityW<::Rewired::InputManager_Base>  value) ;

/// @brief Method .ctor, addr 0x1818dbbb0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_AxisValueChangedEvent, addr 0x1818dbc90, size 0x30, virtual true, abstract: false, final true
inline void add_AxisValueChangedEvent(::System::Action_2<int32_t,float_t>*  value) ;

/// @brief Method add_ButtonStateChangedEvent, addr 0x1818dbcc0, size 0x30, virtual true, abstract: false, final true
inline void add_ButtonStateChangedEvent(::System::Action_2<int32_t,bool>*  value) ;

/// @brief Method add_EnabledStateChangedEvent, addr 0x1818dbcf0, size 0x30, virtual true, abstract: false, final true
inline void add_EnabledStateChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method bTuqsKwNFRGcvAdZnfOEXYPuOjWH, addr 0x1818dbd20, size 0x5d0, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Rewired::Components::PlayerController_ElementInfo*>* bTuqsKwNFRGcvAdZnfOEXYPuOjWH() ;

/// @brief Method get_axes, addr 0x1818dc2f0, size 0x40, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Axis*>* get_axes() ;

/// @brief Method get_axisCount, addr 0x1818dc330, size 0x30, virtual true, abstract: false, final true
inline int32_t get_axisCount() ;

/// @brief Method get_buttonCount, addr 0x1818dc360, size 0x30, virtual true, abstract: false, final true
inline int32_t get_buttonCount() ;

/// @brief Method get_buttons, addr 0x1818dc390, size 0x40, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Button*>* get_buttons() ;

/// @brief Method get_elementCount, addr 0x1818dc3d0, size 0x30, virtual true, abstract: false, final true
inline int32_t get_elementCount() ;

/// @brief Method get_elements, addr 0x1818dc400, size 0x40, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Element*>* get_elements() ;

/// @brief Method get_playerId, addr 0x1818dc440, size 0x30, virtual true, abstract: false, final true
inline int32_t get_playerId() ;

/// @brief Convert to "::Rewired::IPlayerController"
constexpr ::Rewired::IPlayerController* i___Rewired__IPlayerController() noexcept;

/// @brief Method rFgmKAeOkndtMwiklkwnkANISuej, addr 0x1818dc470, size 0x50, virtual false, abstract: false, final false
inline void rFgmKAeOkndtMwiklkwnkANISuej() ;

/// @brief Method remove_AxisValueChangedEvent, addr 0x1818dc4c0, size 0x30, virtual true, abstract: false, final true
inline void remove_AxisValueChangedEvent(::System::Action_2<int32_t,float_t>*  value) ;

/// @brief Method remove_ButtonStateChangedEvent, addr 0x1818dc4f0, size 0x30, virtual true, abstract: false, final true
inline void remove_ButtonStateChangedEvent(::System::Action_2<int32_t,bool>*  value) ;

/// @brief Method remove_EnabledStateChangedEvent, addr 0x1818dc520, size 0x30, virtual true, abstract: false, final true
inline void remove_EnabledStateChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method roeCSdRXyqENwhBJKfHjdtgRCsPR, addr 0x1818dc550, size 0x90, virtual false, abstract: false, final false
inline void roeCSdRXyqENwhBJKfHjdtgRCsPR(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method set_playerId, addr 0x1818dc5e0, size 0xe0, virtual true, abstract: false, final true
inline void set_playerId(int32_t  value) ;

/// @brief Method zGFzFKSeqDvqStvPvHYWsolcAFte, addr 0x1818dc6c0, size 0xb0, virtual false, abstract: false, final false
inline void zGFzFKSeqDvqStvPvHYWsolcAFte(int32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController(PlayerController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController(PlayerController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2731};

/// @brief Field _rewiredInputManager, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Rewired::InputManager_Base>  ____rewiredInputManager;

/// @brief Field _playerId, offset: 0x38, size: 0x4, def value: None
 int32_t  ____playerId;

/// @brief Field _elements, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Components::PlayerController_ElementInfo*>*  ____elements;

/// @brief Field _onButtonStateChanged, offset: 0x48, size: 0x8, def value: None
 ::Rewired::Components::PlayerController_ButtonStateChangedHandler*  ____onButtonStateChanged;

/// @brief Field _onAxisValueChanged, offset: 0x50, size: 0x8, def value: None
 ::Rewired::Components::PlayerController_AxisValueChangedHandler*  ____onAxisValueChanged;

/// @brief Field _onEnabledStateChanged, offset: 0x58, size: 0x8, def value: None
 ::Rewired::Components::PlayerController_EnabledStateChangedHandler*  ____onEnabledStateChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Components::PlayerController, ____rewiredInputManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerController, ____playerId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerController, ____elements) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerController, ____onButtonStateChanged) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerController, ____onAxisValueChanged) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::Components::PlayerController, ____onEnabledStateChanged) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Rewired::Components::PlayerController) == 0x60, "Size mismatch!");

} // namespace end def Rewired::Components
