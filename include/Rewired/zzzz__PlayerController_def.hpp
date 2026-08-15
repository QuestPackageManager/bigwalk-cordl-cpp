#pragma once
// IWYU pragma private; include "Rewired/PlayerController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__AxisCoordinateMode_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerController)
namespace Rewired::Utils::Classes::Data {
template<typename T>
class AList_1;
}
namespace Rewired {
class Axis2D_PlayerController_Definition;
}
namespace Rewired {
struct AxisCoordinateMode;
}
namespace Rewired {
class Axis_PlayerController_Definition;
}
namespace Rewired {
class Button_PlayerController_Definition;
}
namespace Rewired {
class CompoundElement_PlayerController_Definition;
}
namespace Rewired {
struct ControllerElementType;
}
namespace Rewired {
class ElementWithSource_PlayerController_Definition;
}
namespace Rewired {
struct Element_PlayerController_CompoundTypes;
}
namespace Rewired {
class Element_PlayerController_Definition;
}
namespace Rewired {
struct Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ;
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
class MouseAxis2D_PlayerController_Definition;
}
namespace Rewired {
class MouseAxis_PlayerController_Definition;
}
namespace Rewired {
class MouseWheelAxis_PlayerController_Definition;
}
namespace Rewired {
class MouseWheel_PlayerController_Definition;
}
namespace Rewired {
struct PlayerController_AbsoluteToRelativeScalingMode;
}
namespace Rewired {
class PlayerController_Axis2D;
}
namespace Rewired {
class PlayerController_Axis;
}
namespace Rewired {
class PlayerController_Button;
}
namespace Rewired {
class PlayerController_CompoundElement;
}
namespace Rewired {
class PlayerController_Definition;
}
namespace Rewired {
class PlayerController_ElementWithSource;
}
namespace Rewired {
class PlayerController_Element;
}
namespace Rewired {
class PlayerController_Factory;
}
namespace Rewired {
class PlayerController_MouseAxis2D;
}
namespace Rewired {
class PlayerController_MouseAxis;
}
namespace Rewired {
class PlayerController_MouseWheelAxis;
}
namespace Rewired {
class PlayerController_MouseWheel;
}
namespace Rewired {
class Player;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
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
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired {
struct Element_PlayerController_CompoundTypes;
}
namespace Rewired {
struct Element_PlayerController_Type;
}
namespace Rewired {
struct Element_PlayerController_TypeWithSource;
}
namespace Rewired {
struct PlayerController_AbsoluteToRelativeScalingMode;
}
namespace Rewired {
class Axis2D_PlayerController_Definition;
}
namespace Rewired {
class Axis_PlayerController_Definition;
}
namespace Rewired {
class Button_PlayerController_Definition;
}
namespace Rewired {
class CompoundElement_PlayerController_Definition;
}
namespace Rewired {
class ElementWithSource_PlayerController_Definition;
}
namespace Rewired {
class Element_PlayerController_Definition;
}
namespace Rewired {
class MouseAxis2D_PlayerController_Definition;
}
namespace Rewired {
class MouseAxis_PlayerController_Definition;
}
namespace Rewired {
class MouseWheelAxis_PlayerController_Definition;
}
namespace Rewired {
class MouseWheel_PlayerController_Definition;
}
namespace Rewired {
class PlayerController;
}
namespace Rewired {
class PlayerController_Axis;
}
namespace Rewired {
class PlayerController_Axis2D;
}
namespace Rewired {
class PlayerController_Button;
}
namespace Rewired {
class PlayerController_CompoundElement;
}
namespace Rewired {
class PlayerController_Definition;
}
namespace Rewired {
class PlayerController_Element;
}
namespace Rewired {
class PlayerController_ElementWithSource;
}
namespace Rewired {
class PlayerController_Factory;
}
namespace Rewired {
class PlayerController_MouseAxis;
}
namespace Rewired {
class PlayerController_MouseAxis2D;
}
namespace Rewired {
class PlayerController_MouseWheel;
}
namespace Rewired {
class PlayerController_MouseWheelAxis;
}
namespace Rewired {
struct Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ;
}
// Write type traits
MARK_VAL_T(::Rewired::Element_PlayerController_CompoundTypes);
MARK_VAL_T(::Rewired::Element_PlayerController_Type);
MARK_VAL_T(::Rewired::Element_PlayerController_TypeWithSource);
MARK_VAL_T(::Rewired::PlayerController_AbsoluteToRelativeScalingMode);
MARK_REF_T(::Rewired::Axis2D_PlayerController_Definition*);
MARK_REF_T(::Rewired::Axis_PlayerController_Definition*);
MARK_REF_T(::Rewired::Button_PlayerController_Definition*);
MARK_REF_T(::Rewired::CompoundElement_PlayerController_Definition*);
MARK_REF_T(::Rewired::ElementWithSource_PlayerController_Definition*);
MARK_REF_T(::Rewired::Element_PlayerController_Definition*);
MARK_REF_T(::Rewired::MouseAxis2D_PlayerController_Definition*);
MARK_REF_T(::Rewired::MouseAxis_PlayerController_Definition*);
MARK_REF_T(::Rewired::MouseWheelAxis_PlayerController_Definition*);
MARK_REF_T(::Rewired::MouseWheel_PlayerController_Definition*);
MARK_REF_T(::Rewired::PlayerController*);
MARK_REF_T(::Rewired::PlayerController_Axis*);
MARK_REF_T(::Rewired::PlayerController_Axis2D*);
MARK_REF_T(::Rewired::PlayerController_Button*);
MARK_REF_T(::Rewired::PlayerController_CompoundElement*);
MARK_REF_T(::Rewired::PlayerController_Definition*);
MARK_REF_T(::Rewired::PlayerController_Element*);
MARK_REF_T(::Rewired::PlayerController_ElementWithSource*);
MARK_REF_T(::Rewired::PlayerController_Factory*);
MARK_REF_T(::Rewired::PlayerController_MouseAxis*);
MARK_REF_T(::Rewired::PlayerController_MouseAxis2D*);
MARK_REF_T(::Rewired::PlayerController_MouseWheel*);
MARK_REF_T(::Rewired::PlayerController_MouseWheelAxis*);
MARK_VAL_T(::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ);
DEFINE_IL2CPP_CLASS(::Rewired::Element_PlayerController_CompoundTypes, "Rewired", "PlayerController/Element/CompoundTypes");
DEFINE_IL2CPP_CLASS(::Rewired::Element_PlayerController_Type, "Rewired", "PlayerController/Element/Type");
DEFINE_IL2CPP_CLASS(::Rewired::Element_PlayerController_TypeWithSource, "Rewired", "PlayerController/Element/TypeWithSource");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerController_AbsoluteToRelativeScalingMode, "Rewired", "PlayerController/AbsoluteToRelativeScalingMode");
DEFINE_IL2CPP_CLASS(::Rewired::Axis2D_PlayerController_Definition*, "Rewired", "PlayerController/Axis2D/Definition");
DEFINE_IL2CPP_CLASS(::Rewired::Axis_PlayerController_Definition*, "Rewired", "PlayerController/Axis/Definition");
DEFINE_IL2CPP_CLASS(::Rewired::Button_PlayerController_Definition*, "Rewired", "PlayerController/Button/Definition");
DEFINE_IL2CPP_CLASS(::Rewired::CompoundElement_PlayerController_Definition*, "Rewired", "PlayerController/CompoundElement/Definition");
DEFINE_IL2CPP_CLASS(::Rewired::ElementWithSource_PlayerController_Definition*, "Rewired", "PlayerController/ElementWithSource/Definition");
DEFINE_IL2CPP_CLASS(::Rewired::Element_PlayerController_Definition*, "Rewired", "PlayerController/Element/Definition");
DEFINE_IL2CPP_CLASS(::Rewired::MouseAxis2D_PlayerController_Definition*, "Rewired", "PlayerController/MouseAxis2D/Definition");
DEFINE_IL2CPP_CLASS(::Rewired::MouseAxis_PlayerController_Definition*, "Rewired", "PlayerController/MouseAxis/Definition");
DEFINE_IL2CPP_CLASS(::Rewired::MouseWheelAxis_PlayerController_Definition*, "Rewired", "PlayerController/MouseWheelAxis/Definition");
DEFINE_IL2CPP_CLASS(::Rewired::MouseWheel_PlayerController_Definition*, "Rewired", "PlayerController/MouseWheel/Definition");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerController*, "Rewired", "PlayerController");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerController_Axis*, "Rewired", "PlayerController/Axis");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerController_Axis2D*, "Rewired", "PlayerController/Axis2D");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerController_Button*, "Rewired", "PlayerController/Button");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerController_CompoundElement*, "Rewired", "PlayerController/CompoundElement");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerController_Definition*, "Rewired", "PlayerController/Definition");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerController_Element*, "Rewired", "PlayerController/Element");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerController_ElementWithSource*, "Rewired", "PlayerController/ElementWithSource");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerController_Factory*, "Rewired", "PlayerController/Factory");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerController_MouseAxis*, "Rewired", "PlayerController/MouseAxis");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerController_MouseAxis2D*, "Rewired", "PlayerController/MouseAxis2D");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerController_MouseWheel*, "Rewired", "PlayerController/MouseWheel");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerController_MouseWheelAxis*, "Rewired", "PlayerController/MouseWheelAxis");
DEFINE_IL2CPP_CLASS(::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ, "Rewired", "PlayerController/Element/MmwFJDgWnDjeNVGoQAGSfNlDWxKQ");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/Definition
class CORDL_TYPE PlayerController_Definition : public ::System::Object {
public:
// Declarations
/// @brief Field elements, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_elements, put=__cordl_internal_set_elements)) ::System::Collections::Generic::ICollection_1<::Rewired::Element_PlayerController_Definition*>*  elements;

/// @brief Field enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_enabled, put=__cordl_internal_set_enabled)) bool  enabled;

/// @brief Field playerId, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerId, put=__cordl_internal_set_playerId)) int32_t  playerId;

static inline ::Rewired::PlayerController_Definition* New_ctor() ;

constexpr ::System::Collections::Generic::ICollection_1<::Rewired::Element_PlayerController_Definition*>* const& __cordl_internal_get_elements() const;

constexpr ::System::Collections::Generic::ICollection_1<::Rewired::Element_PlayerController_Definition*>*& __cordl_internal_get_elements() ;

constexpr bool const& __cordl_internal_get_enabled() const;

constexpr bool& __cordl_internal_get_enabled() ;

constexpr int32_t const& __cordl_internal_get_playerId() const;

constexpr int32_t& __cordl_internal_get_playerId() ;

constexpr void __cordl_internal_set_elements(::System::Collections::Generic::ICollection_1<::Rewired::Element_PlayerController_Definition*>*  value) ;

constexpr void __cordl_internal_set_enabled(bool  value) ;

constexpr void __cordl_internal_set_playerId(int32_t  value) ;

/// @brief Method .ctor, addr 0x18191c4b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_Definition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_Definition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController_Definition(PlayerController_Definition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_Definition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController_Definition(PlayerController_Definition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1900};

/// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
 bool  ___enabled;

/// @brief Field playerId, offset: 0x14, size: 0x4, def value: None
 int32_t  ___playerId;

/// @brief Field elements, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::ICollection_1<::Rewired::Element_PlayerController_Definition*>*  ___elements;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PlayerController_Definition, ___enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController_Definition, ___playerId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController_Definition, ___elements) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::PlayerController_Definition) == 0x20, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/Factory
class CORDL_TYPE PlayerController_Factory : public ::System::Object {
public:
// Declarations
/// @brief Method Create, addr 0x18191c840, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::PlayerController* Create(::Rewired::PlayerController_Definition*  definition) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_Factory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_Factory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController_Factory(PlayerController_Factory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_Factory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController_Factory(PlayerController_Factory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1901};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::PlayerController_Factory) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.PlayerController/AbsoluteToRelativeScalingMode
struct CORDL_TYPE PlayerController_AbsoluteToRelativeScalingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerController_AbsoluteToRelativeScalingMode_Unwrapped
enum struct __PlayerController_AbsoluteToRelativeScalingMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ScreenWidth = static_cast<int32_t>(0x1),
__E_ScreenHeight = static_cast<int32_t>(0x2),
__E_MaxScreenDimension = static_cast<int32_t>(0x3),
__E_MinScreenDimension = static_cast<int32_t>(0x4),
__E_ViewportWidth = static_cast<int32_t>(0x5),
__E_ViewportHeight = static_cast<int32_t>(0x6),
__E_MaxViewportDimension = static_cast<int32_t>(0x7),
__E_MinViewportDimension = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerController_AbsoluteToRelativeScalingMode_Unwrapped () const noexcept {
return static_cast<__PlayerController_AbsoluteToRelativeScalingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_AbsoluteToRelativeScalingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerController_AbsoluteToRelativeScalingMode(int32_t  value__) noexcept;

/// @brief Field MaxScreenDimension value: I32(3)
static ::Rewired::PlayerController_AbsoluteToRelativeScalingMode const MaxScreenDimension;

/// @brief Field MaxViewportDimension value: I32(7)
static ::Rewired::PlayerController_AbsoluteToRelativeScalingMode const MaxViewportDimension;

/// @brief Field MinScreenDimension value: I32(4)
static ::Rewired::PlayerController_AbsoluteToRelativeScalingMode const MinScreenDimension;

/// @brief Field MinViewportDimension value: I32(8)
static ::Rewired::PlayerController_AbsoluteToRelativeScalingMode const MinViewportDimension;

/// @brief Field None value: I32(0)
static ::Rewired::PlayerController_AbsoluteToRelativeScalingMode const None;

/// @brief Field ScreenHeight value: I32(2)
static ::Rewired::PlayerController_AbsoluteToRelativeScalingMode const ScreenHeight;

/// @brief Field ScreenWidth value: I32(1)
static ::Rewired::PlayerController_AbsoluteToRelativeScalingMode const ScreenWidth;

/// @brief Field ViewportHeight value: I32(6)
static ::Rewired::PlayerController_AbsoluteToRelativeScalingMode const ViewportHeight;

/// @brief Field ViewportWidth value: I32(5)
static ::Rewired::PlayerController_AbsoluteToRelativeScalingMode const ViewportWidth;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1902};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PlayerController_AbsoluteToRelativeScalingMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::PlayerController_AbsoluteToRelativeScalingMode) == 0x4, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/Element/Definition
class CORDL_TYPE Element_PlayerController_Definition : public ::System::Object {
public:
// Declarations
/// @brief Field enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_enabled, put=__cordl_internal_set_enabled)) bool  enabled;

/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

static inline ::Rewired::Element_PlayerController_Definition* New_ctor() ;

constexpr bool const& __cordl_internal_get_enabled() const;

constexpr bool& __cordl_internal_get_enabled() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_enabled(bool  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0x18195cac0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method hRrfCMfqwsoafJXgnSpFrRrhyTcSA, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::PlayerController_Element* hRrfCMfqwsoafJXgnSpFrRrhyTcSA(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Element_PlayerController_Definition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Element_PlayerController_Definition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Element_PlayerController_Definition(Element_PlayerController_Definition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Element_PlayerController_Definition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Element_PlayerController_Definition(Element_PlayerController_Definition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1918};

/// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
 bool  ___enabled;

/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Element_PlayerController_Definition, ___enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Element_PlayerController_Definition, ___name) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Element_PlayerController_Definition) == 0x20, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.PlayerController::Element::Definition
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/ElementWithSource/Definition
class CORDL_TYPE ElementWithSource_PlayerController_Definition : public ::Rewired::Element_PlayerController_Definition {
public:
// Declarations
 __declspec(property(get=get_actionId, put=set_actionId)) int32_t  actionId;

 __declspec(property(get=get_actionName, put=set_actionName)) ::StringW  actionName;

/// @brief Field eAfZAUAAoSzTNzGdgSOfTdLKgVFM, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_eAfZAUAAoSzTNzGdgSOfTdLKgVFM, put=__cordl_internal_set_eAfZAUAAoSzTNzGdgSOfTdLKgVFM)) int32_t  eAfZAUAAoSzTNzGdgSOfTdLKgVFM;

static inline ::Rewired::ElementWithSource_PlayerController_Definition* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_eAfZAUAAoSzTNzGdgSOfTdLKgVFM() const;

constexpr int32_t& __cordl_internal_get_eAfZAUAAoSzTNzGdgSOfTdLKgVFM() ;

constexpr void __cordl_internal_set_eAfZAUAAoSzTNzGdgSOfTdLKgVFM(int32_t  value) ;

/// @brief Method .ctor, addr 0x18195cb80, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_actionId, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_actionId() ;

/// @brief Method get_actionName, addr 0x18195cc50, size 0x90, virtual false, abstract: false, final false
inline ::StringW get_actionName() ;

/// @brief Method set_actionId, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_actionId(int32_t  value) ;

/// @brief Method set_actionName, addr 0x18195cf60, size 0xc0, virtual false, abstract: false, final false
inline void set_actionName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ElementWithSource_PlayerController_Definition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ElementWithSource_PlayerController_Definition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ElementWithSource_PlayerController_Definition(ElementWithSource_PlayerController_Definition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ElementWithSource_PlayerController_Definition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ElementWithSource_PlayerController_Definition(ElementWithSource_PlayerController_Definition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1921};

/// @brief Field eAfZAUAAoSzTNzGdgSOfTdLKgVFM, offset: 0x20, size: 0x4, def value: None
 int32_t  ___eAfZAUAAoSzTNzGdgSOfTdLKgVFM;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ElementWithSource_PlayerController_Definition, ___eAfZAUAAoSzTNzGdgSOfTdLKgVFM) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::ElementWithSource_PlayerController_Definition) == 0x28, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.AxisCoordinateMode, Rewired.PlayerController::AbsoluteToRelativeScalingMode, Rewired.PlayerController::ElementWithSource::Definition
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/Axis/Definition
class CORDL_TYPE Axis_PlayerController_Definition : public ::Rewired::ElementWithSource_PlayerController_Definition {
public:
// Declarations
/// @brief Field absoluteToRelativeScalingMode, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_absoluteToRelativeScalingMode, put=__cordl_internal_set_absoluteToRelativeScalingMode)) ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  absoluteToRelativeScalingMode;

/// @brief Field absoluteToRelativeSensitivity, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_absoluteToRelativeSensitivity, put=__cordl_internal_set_absoluteToRelativeSensitivity)) float_t  absoluteToRelativeSensitivity;

/// @brief Field coordinateMode, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_coordinateMode, put=__cordl_internal_set_coordinateMode)) ::Rewired::AxisCoordinateMode  coordinateMode;

static inline ::Rewired::Axis_PlayerController_Definition* New_ctor() ;

constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode const& __cordl_internal_get_absoluteToRelativeScalingMode() const;

constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode& __cordl_internal_get_absoluteToRelativeScalingMode() ;

constexpr float_t const& __cordl_internal_get_absoluteToRelativeSensitivity() const;

constexpr float_t& __cordl_internal_get_absoluteToRelativeSensitivity() ;

constexpr ::Rewired::AxisCoordinateMode const& __cordl_internal_get_coordinateMode() const;

constexpr ::Rewired::AxisCoordinateMode& __cordl_internal_get_coordinateMode() ;

constexpr void __cordl_internal_set_absoluteToRelativeScalingMode(::Rewired::PlayerController_AbsoluteToRelativeScalingMode  value) ;

constexpr void __cordl_internal_set_absoluteToRelativeSensitivity(float_t  value) ;

constexpr void __cordl_internal_set_coordinateMode(::Rewired::AxisCoordinateMode  value) ;

/// @brief Method .ctor, addr 0x18195cc10, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method rPOaqSAPvYtnGmkBvVRBWlytbSYI, addr 0x18195cf10, size 0x50, virtual true, abstract: false, final false
inline ::Rewired::PlayerController_Element* rPOaqSAPvYtnGmkBvVRBWlytbSYI(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Axis_PlayerController_Definition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Axis_PlayerController_Definition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Axis_PlayerController_Definition(Axis_PlayerController_Definition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Axis_PlayerController_Definition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Axis_PlayerController_Definition(Axis_PlayerController_Definition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1903};

/// @brief Field coordinateMode, offset: 0x24, size: 0x4, def value: None
 ::Rewired::AxisCoordinateMode  ___coordinateMode;

/// @brief Field absoluteToRelativeSensitivity, offset: 0x28, size: 0x4, def value: None
 float_t  ___absoluteToRelativeSensitivity;

/// @brief Field absoluteToRelativeScalingMode, offset: 0x2c, size: 0x4, def value: None
 ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  ___absoluteToRelativeScalingMode;

/// @brief Size padding 0x38 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Axis_PlayerController_Definition, ___coordinateMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::Axis_PlayerController_Definition, ___absoluteToRelativeSensitivity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Axis_PlayerController_Definition, ___absoluteToRelativeScalingMode) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Rewired::Axis_PlayerController_Definition) == 0x38, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/Element
class CORDL_TYPE PlayerController_Element : public ::System::Object {
public:
// Declarations
using CompoundTypes = ::Rewired::Element_PlayerController_CompoundTypes;

using Definition = ::Rewired::Element_PlayerController_Definition;

using MmwFJDgWnDjeNVGoQAGSfNlDWxKQ = ::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ;

using Type = ::Rewired::Element_PlayerController_Type;

using TypeWithSource = ::Rewired::Element_PlayerController_TypeWithSource;

/// @brief Field GsslIUXEKYpKhVNXEEwBszPFDKKl, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_GsslIUXEKYpKhVNXEEwBszPFDKKl, put=__cordl_internal_set_GsslIUXEKYpKhVNXEEwBszPFDKKl)) ::StringW  GsslIUXEKYpKhVNXEEwBszPFDKKl;

/// @brief Field NlchXtAbsRmnbAqqHnqWGqjcNEjp, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NlchXtAbsRmnbAqqHnqWGqjcNEjp, put=setStaticF_NlchXtAbsRmnbAqqHnqWGqjcNEjp)) ::ArrayW<int32_t>  NlchXtAbsRmnbAqqHnqWGqjcNEjp;

/// @brief Field PYxwbqtzQgHbGfiHMTFMlPpGhJts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PYxwbqtzQgHbGfiHMTFMlPpGhJts, put=setStaticF_PYxwbqtzQgHbGfiHMTFMlPpGhJts)) ::ArrayW<int32_t>  PYxwbqtzQgHbGfiHMTFMlPpGhJts;

/// @brief Field PapiGFTvwdzkZriiFGUMeGxJeKrWA, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_PapiGFTvwdzkZriiFGUMeGxJeKrWA, put=__cordl_internal_set_PapiGFTvwdzkZriiFGUMeGxJeKrWA)) bool  PapiGFTvwdzkZriiFGUMeGxJeKrWA;

/// @brief Field YBRdIfoZRturDajhTSqixpnchyhn, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_YBRdIfoZRturDajhTSqixpnchyhn, put=__cordl_internal_set_YBRdIfoZRturDajhTSqixpnchyhn)) bool  YBRdIfoZRturDajhTSqixpnchyhn;

 __declspec(property(get=WDVOAUfjEMSXtuqZrIMpjifnHNzIA, put=rVjDFNkKsOfxOejsgbXRJTdxLPnoB)) bool  ZDNPdteGWVChVkgjIOFuEYMxrTYCA;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Field pDdfIdegHwIxhcFxNgCNlfNHEDGI, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pDdfIdegHwIxhcFxNgCNlfNHEDGI, put=__cordl_internal_set_pDdfIdegHwIxhcFxNgCNlfNHEDGI)) ::Rewired::PlayerController*  pDdfIdegHwIxhcFxNgCNlfNHEDGI;

 __declspec(property(get=get_player)) ::Rewired::Player*  player;

 __declspec(property(get=get_selfAndParentEnabled)) bool  selfAndParentEnabled;

/// @brief Method CreateDefinition, addr 0x18195d1a0, size 0x180, virtual false, abstract: false, final false
static inline ::Rewired::Element_PlayerController_Definition* CreateDefinition(::Rewired::Element_PlayerController_Type  type) ;

/// @brief Method EnabledStateChanged, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void EnabledStateChanged(bool  state) ;

/// @brief Method GetElementTitle, addr 0x18195d320, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW GetElementTitle(::Rewired::Element_PlayerController_Type  type, int32_t  index) ;

/// @brief Method GetMaxElementCount, addr 0x18195d3f0, size 0x60, virtual false, abstract: false, final false
static inline int32_t GetMaxElementCount(::Rewired::Element_PlayerController_Type  type) ;

/// @brief Method IsCompoundType, addr 0x18195d450, size 0x110, virtual false, abstract: false, final false
static inline bool IsCompoundType(::Rewired::Element_PlayerController_Type  type) ;

/// @brief Method IsTypeWithSource, addr 0x18195d560, size 0x100, virtual false, abstract: false, final false
static inline bool IsTypeWithSource(::Rewired::Element_PlayerController_Type  type) ;

static inline ::Rewired::PlayerController_Element* New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Element_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method VPzWFqfEGXfwkoSPtSSGbuWhBPKU, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void VPzWFqfEGXfwkoSPtSSGbuWhBPKU() ;

/// @brief Method WDVOAUfjEMSXtuqZrIMpjifnHNzIA, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool WDVOAUfjEMSXtuqZrIMpjifnHNzIA() ;

constexpr ::StringW const& __cordl_internal_get_GsslIUXEKYpKhVNXEEwBszPFDKKl() const;

constexpr ::StringW& __cordl_internal_get_GsslIUXEKYpKhVNXEEwBszPFDKKl() ;

constexpr bool const& __cordl_internal_get_PapiGFTvwdzkZriiFGUMeGxJeKrWA() const;

constexpr bool& __cordl_internal_get_PapiGFTvwdzkZriiFGUMeGxJeKrWA() ;

constexpr bool const& __cordl_internal_get_YBRdIfoZRturDajhTSqixpnchyhn() const;

constexpr bool& __cordl_internal_get_YBRdIfoZRturDajhTSqixpnchyhn() ;

constexpr ::Rewired::PlayerController* const& __cordl_internal_get_pDdfIdegHwIxhcFxNgCNlfNHEDGI() const;

constexpr ::Rewired::PlayerController*& __cordl_internal_get_pDdfIdegHwIxhcFxNgCNlfNHEDGI() ;

constexpr void __cordl_internal_set_GsslIUXEKYpKhVNXEEwBszPFDKKl(::StringW  value) ;

constexpr void __cordl_internal_set_PapiGFTvwdzkZriiFGUMeGxJeKrWA(bool  value) ;

constexpr void __cordl_internal_set_YBRdIfoZRturDajhTSqixpnchyhn(bool  value) ;

constexpr void __cordl_internal_set_pDdfIdegHwIxhcFxNgCNlfNHEDGI(::Rewired::PlayerController*  value) ;

/// @brief Method .ctor, addr 0x18195d660, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Element_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::ArrayW<int32_t> getStaticF_NlchXtAbsRmnbAqqHnqWGqjcNEjp() ;

static inline ::ArrayW<int32_t> getStaticF_PYxwbqtzQgHbGfiHMTFMlPpGhJts() ;

/// @brief Method get_enabled, addr 0x1814f8710, size 0x10, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_name, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_player, addr 0x18195d6e0, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::Player* get_player() ;

/// @brief Method get_selfAndParentEnabled, addr 0x18195d770, size 0x30, virtual false, abstract: false, final false
inline bool get_selfAndParentEnabled() ;

/// @brief Method rVjDFNkKsOfxOejsgbXRJTdxLPnoB, addr 0x1812e54a0, size 0x5290, virtual false, abstract: false, final false
inline void rVjDFNkKsOfxOejsgbXRJTdxLPnoB(bool  _cordl_fixed_empty_name_whitespace) ;

static inline void setStaticF_NlchXtAbsRmnbAqqHnqWGqjcNEjp(::ArrayW<int32_t>  value) ;

static inline void setStaticF_PYxwbqtzQgHbGfiHMTFMlPpGhJts(::ArrayW<int32_t>  value) ;

/// @brief Method set_enabled, addr 0x18195d7a0, size 0x20, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_name, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_Element() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_Element", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController_Element(PlayerController_Element && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_Element", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController_Element(PlayerController_Element const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1920};

/// @brief Field defaultEnabled offset 0xffffffff size 0x1
static constexpr bool  defaultEnabled{true};

/// @brief Field pDdfIdegHwIxhcFxNgCNlfNHEDGI, offset: 0x10, size: 0x8, def value: None
 ::Rewired::PlayerController*  ___pDdfIdegHwIxhcFxNgCNlfNHEDGI;

/// @brief Field YBRdIfoZRturDajhTSqixpnchyhn, offset: 0x18, size: 0x1, def value: None
 bool  ___YBRdIfoZRturDajhTSqixpnchyhn;

/// @brief Field PapiGFTvwdzkZriiFGUMeGxJeKrWA, offset: 0x19, size: 0x1, def value: None
 bool  ___PapiGFTvwdzkZriiFGUMeGxJeKrWA;

/// @brief Field GsslIUXEKYpKhVNXEEwBszPFDKKl, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___GsslIUXEKYpKhVNXEEwBszPFDKKl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PlayerController_Element, ___pDdfIdegHwIxhcFxNgCNlfNHEDGI) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController_Element, ___YBRdIfoZRturDajhTSqixpnchyhn) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController_Element, ___PapiGFTvwdzkZriiFGUMeGxJeKrWA) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController_Element, ___GsslIUXEKYpKhVNXEEwBszPFDKKl) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::PlayerController_Element) == 0x28, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.PlayerController::Element
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/ElementWithSource
class CORDL_TYPE PlayerController_ElementWithSource : public ::Rewired::PlayerController_Element {
public:
// Declarations
using Definition = ::Rewired::ElementWithSource_PlayerController_Definition;

/// @brief Field ZXkdwjaVEOeuskJyRjKIWkxJurllA, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ZXkdwjaVEOeuskJyRjKIWkxJurllA, put=__cordl_internal_set_ZXkdwjaVEOeuskJyRjKIWkxJurllA)) int32_t  ZXkdwjaVEOeuskJyRjKIWkxJurllA;

 __declspec(property(get=get_actionId, put=set_actionId)) int32_t  actionId;

 __declspec(property(get=get_actionName, put=set_actionName)) ::StringW  actionName;

static inline ::Rewired::PlayerController_ElementWithSource* New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementWithSource_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr int32_t const& __cordl_internal_get_ZXkdwjaVEOeuskJyRjKIWkxJurllA() const;

constexpr int32_t& __cordl_internal_get_ZXkdwjaVEOeuskJyRjKIWkxJurllA() ;

constexpr void __cordl_internal_set_ZXkdwjaVEOeuskJyRjKIWkxJurllA(int32_t  value) ;

/// @brief Method .ctor, addr 0x18195c2d0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementWithSource_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_actionId, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_actionId() ;

/// @brief Method get_actionName, addr 0x18195d070, size 0x90, virtual false, abstract: false, final false
inline ::StringW get_actionName() ;

/// @brief Method set_actionId, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void set_actionId(int32_t  value) ;

/// @brief Method set_actionName, addr 0x18195d100, size 0xa0, virtual false, abstract: false, final false
inline void set_actionName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_ElementWithSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_ElementWithSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController_ElementWithSource(PlayerController_ElementWithSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_ElementWithSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController_ElementWithSource(PlayerController_ElementWithSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1922};

/// @brief Field defaultActionId offset 0xffffffff size 0x4
static constexpr int32_t  defaultActionId{static_cast<int32_t>(0xffffffff)};

/// @brief Field ZXkdwjaVEOeuskJyRjKIWkxJurllA, offset: 0x28, size: 0x4, def value: None
 int32_t  ___ZXkdwjaVEOeuskJyRjKIWkxJurllA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PlayerController_ElementWithSource, ___ZXkdwjaVEOeuskJyRjKIWkxJurllA) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::PlayerController_ElementWithSource) == 0x30, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.AxisCoordinateMode, Rewired.PlayerController::AbsoluteToRelativeScalingMode, Rewired.PlayerController::ElementWithSource
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/Axis
class CORDL_TYPE PlayerController_Axis : public ::Rewired::PlayerController_ElementWithSource {
public:
// Declarations
using Definition = ::Rewired::Axis_PlayerController_Definition;

/// @brief Field DtlqDPSdDbjcwLLFpsjiXGpYUFaL, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DtlqDPSdDbjcwLLFpsjiXGpYUFaL, put=__cordl_internal_set_DtlqDPSdDbjcwLLFpsjiXGpYUFaL)) float_t  DtlqDPSdDbjcwLLFpsjiXGpYUFaL;

/// @brief Field FQADjODTfYviaaPhQSYfjvFoRiTYA, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_FQADjODTfYviaaPhQSYfjvFoRiTYA, put=__cordl_internal_set_FQADjODTfYviaaPhQSYfjvFoRiTYA)) ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  FQADjODTfYviaaPhQSYfjvFoRiTYA;

 __declspec(property(get=get_absoluteToRelativeScalingMode, put=set_absoluteToRelativeScalingMode)) ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  absoluteToRelativeScalingMode;

 __declspec(property(get=get_absoluteToRelativeSensitivity, put=set_absoluteToRelativeSensitivity)) float_t  absoluteToRelativeSensitivity;

 __declspec(property(get=get_coordinateMode)) ::Rewired::AxisCoordinateMode  coordinateMode;

/// @brief Field uBNEguoNKhAkYhLCNGomkKSUEVgT, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_uBNEguoNKhAkYhLCNGomkKSUEVgT, put=__cordl_internal_set_uBNEguoNKhAkYhLCNGomkKSUEVgT)) ::Rewired::AxisCoordinateMode  uBNEguoNKhAkYhLCNGomkKSUEVgT;

 __declspec(property(get=get_value)) float_t  value;

 __declspec(property(get=get_valueRaw)) float_t  valueRaw;

static inline ::Rewired::PlayerController_Axis* New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Axis_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr float_t const& __cordl_internal_get_DtlqDPSdDbjcwLLFpsjiXGpYUFaL() const;

constexpr float_t& __cordl_internal_get_DtlqDPSdDbjcwLLFpsjiXGpYUFaL() ;

constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode const& __cordl_internal_get_FQADjODTfYviaaPhQSYfjvFoRiTYA() const;

constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode& __cordl_internal_get_FQADjODTfYviaaPhQSYfjvFoRiTYA() ;

constexpr ::Rewired::AxisCoordinateMode const& __cordl_internal_get_uBNEguoNKhAkYhLCNGomkKSUEVgT() const;

constexpr ::Rewired::AxisCoordinateMode& __cordl_internal_get_uBNEguoNKhAkYhLCNGomkKSUEVgT() ;

constexpr void __cordl_internal_set_DtlqDPSdDbjcwLLFpsjiXGpYUFaL(float_t  value) ;

constexpr void __cordl_internal_set_FQADjODTfYviaaPhQSYfjvFoRiTYA(::Rewired::PlayerController_AbsoluteToRelativeScalingMode  value) ;

constexpr void __cordl_internal_set_uBNEguoNKhAkYhLCNGomkKSUEVgT(::Rewired::AxisCoordinateMode  value) ;

/// @brief Method .ctor, addr 0x181915640, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Axis_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_absoluteToRelativeScalingMode, addr 0x180392fe0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::PlayerController_AbsoluteToRelativeScalingMode get_absoluteToRelativeScalingMode() ;

/// @brief Method get_absoluteToRelativeSensitivity, addr 0x1803f68d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_absoluteToRelativeSensitivity() ;

/// @brief Method get_coordinateMode, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::AxisCoordinateMode get_coordinateMode() ;

/// @brief Method get_value, addr 0x1819156f0, size 0x2d0, virtual true, abstract: false, final false
inline float_t get_value() ;

/// @brief Method get_valueRaw, addr 0x181915690, size 0x60, virtual true, abstract: false, final false
inline float_t get_valueRaw() ;

/// @brief Method set_absoluteToRelativeScalingMode, addr 0x180393000, size 0x10, virtual false, abstract: false, final false
inline void set_absoluteToRelativeScalingMode(::Rewired::PlayerController_AbsoluteToRelativeScalingMode  value) ;

/// @brief Method set_absoluteToRelativeSensitivity, addr 0x1819159c0, size 0x10, virtual false, abstract: false, final false
inline void set_absoluteToRelativeSensitivity(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_Axis() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_Axis", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController_Axis(PlayerController_Axis && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_Axis", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController_Axis(PlayerController_Axis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1904};

/// @brief Field ayRqlNWTcazvmMxFJllEJeyxDSYr value: I32(0)
static ::Rewired::PlayerController_AbsoluteToRelativeScalingMode const ayRqlNWTcazvmMxFJllEJeyxDSYr;

/// @brief Field defaultAxisCoordinateMode value: I32(0)
static ::Rewired::AxisCoordinateMode const defaultAxisCoordinateMode;

/// @brief Field dhvRGNfKhJkPniTvbmZaLdKNhLqP offset 0xffffffff size 0x4
static constexpr float_t  dhvRGNfKhJkPniTvbmZaLdKNhLqP{static_cast<float_t>(1.0f)};

/// @brief Field DtlqDPSdDbjcwLLFpsjiXGpYUFaL, offset: 0x2c, size: 0x4, def value: None
 float_t  ___DtlqDPSdDbjcwLLFpsjiXGpYUFaL;

/// @brief Field uBNEguoNKhAkYhLCNGomkKSUEVgT, offset: 0x30, size: 0x4, def value: None
 ::Rewired::AxisCoordinateMode  ___uBNEguoNKhAkYhLCNGomkKSUEVgT;

/// @brief Field FQADjODTfYviaaPhQSYfjvFoRiTYA, offset: 0x34, size: 0x4, def value: None
 ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  ___FQADjODTfYviaaPhQSYfjvFoRiTYA;

/// @brief Size padding 0x40 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PlayerController_Axis, ___DtlqDPSdDbjcwLLFpsjiXGpYUFaL) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController_Axis, ___uBNEguoNKhAkYhLCNGomkKSUEVgT) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController_Axis, ___FQADjODTfYviaaPhQSYfjvFoRiTYA) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Rewired::PlayerController_Axis) == 0x40, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.PlayerController::Axis::Definition
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/MouseAxis/Definition
class CORDL_TYPE MouseAxis_PlayerController_Definition : public ::Rewired::Axis_PlayerController_Definition {
public:
// Declarations
static inline ::Rewired::MouseAxis_PlayerController_Definition* New_ctor() ;

/// @brief Method .ctor, addr 0x18195cb30, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method zLhEiIdEnUKnQuUJbFkjBDteiYlLB, addr 0x18195d020, size 0x50, virtual true, abstract: false, final false
inline ::Rewired::PlayerController_Element* zLhEiIdEnUKnQuUJbFkjBDteiYlLB(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MouseAxis_PlayerController_Definition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MouseAxis_PlayerController_Definition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MouseAxis_PlayerController_Definition(MouseAxis_PlayerController_Definition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouseAxis_PlayerController_Definition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouseAxis_PlayerController_Definition(MouseAxis_PlayerController_Definition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1905};

/// @brief Size padding 0x38 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::MouseAxis_PlayerController_Definition) == 0x38, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.AxisCoordinateMode, Rewired.PlayerController::AbsoluteToRelativeScalingMode, Rewired.PlayerController::Axis
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/MouseAxis
class CORDL_TYPE PlayerController_MouseAxis : public ::Rewired::PlayerController_Axis {
public:
// Declarations
using Definition = ::Rewired::MouseAxis_PlayerController_Definition;

static inline ::Rewired::PlayerController_MouseAxis* New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseAxis_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x181963530, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseAxis_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_MouseAxis() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_MouseAxis", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController_MouseAxis(PlayerController_MouseAxis && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_MouseAxis", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController_MouseAxis(PlayerController_MouseAxis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1906};

/// @brief Field defaultAbsoluteToRelativeScalingMode value: I32(1)
static ::Rewired::PlayerController_AbsoluteToRelativeScalingMode const defaultAbsoluteToRelativeScalingMode;

/// @brief Field defaultAbsoluteToRelativeSensitivity offset 0xffffffff size 0x4
static constexpr float_t  defaultAbsoluteToRelativeSensitivity{static_cast<float_t>(600.0f)};

/// @brief Field defaultAxisCoordinateMode value: I32(1)
static ::Rewired::AxisCoordinateMode const defaultAxisCoordinateMode;

/// @brief Size padding 0x40 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::PlayerController_MouseAxis) == 0x40, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.PlayerController::Element::Definition
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/CompoundElement/Definition
class CORDL_TYPE CompoundElement_PlayerController_Definition : public ::Rewired::Element_PlayerController_Definition {
public:
// Declarations
static inline ::Rewired::CompoundElement_PlayerController_Definition* New_ctor() ;

/// @brief Method .ctor, addr 0x18195cac0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CompoundElement_PlayerController_Definition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CompoundElement_PlayerController_Definition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CompoundElement_PlayerController_Definition(CompoundElement_PlayerController_Definition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompoundElement_PlayerController_Definition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompoundElement_PlayerController_Definition(CompoundElement_PlayerController_Definition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1913};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::CompoundElement_PlayerController_Definition) == 0x20, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.PlayerController::CompoundElement::Definition
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/Axis2D/Definition
class CORDL_TYPE Axis2D_PlayerController_Definition : public ::Rewired::CompoundElement_PlayerController_Definition {
public:
// Declarations
/// @brief Field VvXneWriCKCzNozaFoQzhlVMzTAV, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_VvXneWriCKCzNozaFoQzhlVMzTAV, put=__cordl_internal_set_VvXneWriCKCzNozaFoQzhlVMzTAV)) ::Rewired::Axis_PlayerController_Definition*  VvXneWriCKCzNozaFoQzhlVMzTAV;

/// @brief Field iZQsguRBffAAQSKlOElUnyNWZtfj, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_iZQsguRBffAAQSKlOElUnyNWZtfj, put=__cordl_internal_set_iZQsguRBffAAQSKlOElUnyNWZtfj)) ::Rewired::Axis_PlayerController_Definition*  iZQsguRBffAAQSKlOElUnyNWZtfj;

 __declspec(property(get=get_xAxis, put=set_xAxis)) ::Rewired::Axis_PlayerController_Definition*  xAxis;

 __declspec(property(get=get_yAxis, put=set_yAxis)) ::Rewired::Axis_PlayerController_Definition*  yAxis;

static inline ::Rewired::Axis2D_PlayerController_Definition* New_ctor() ;

constexpr ::Rewired::Axis_PlayerController_Definition* const& __cordl_internal_get_VvXneWriCKCzNozaFoQzhlVMzTAV() const;

constexpr ::Rewired::Axis_PlayerController_Definition*& __cordl_internal_get_VvXneWriCKCzNozaFoQzhlVMzTAV() ;

constexpr ::Rewired::Axis_PlayerController_Definition* const& __cordl_internal_get_iZQsguRBffAAQSKlOElUnyNWZtfj() const;

constexpr ::Rewired::Axis_PlayerController_Definition*& __cordl_internal_get_iZQsguRBffAAQSKlOElUnyNWZtfj() ;

constexpr void __cordl_internal_set_VvXneWriCKCzNozaFoQzhlVMzTAV(::Rewired::Axis_PlayerController_Definition*  value) ;

constexpr void __cordl_internal_set_iZQsguRBffAAQSKlOElUnyNWZtfj(::Rewired::Axis_PlayerController_Definition*  value) ;

/// @brief Method .ctor, addr 0x18195cac0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_xAxis, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Axis_PlayerController_Definition* get_xAxis() ;

/// @brief Method get_yAxis, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Axis_PlayerController_Definition* get_yAxis() ;

/// @brief Method heXrUuBlbVgunFmgCojzyLnipuwh, addr 0x18195ce20, size 0x50, virtual true, abstract: false, final false
inline ::Rewired::PlayerController_Element* heXrUuBlbVgunFmgCojzyLnipuwh(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method set_xAxis, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_xAxis(::Rewired::Axis_PlayerController_Definition*  value) ;

/// @brief Method set_yAxis, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_yAxis(::Rewired::Axis_PlayerController_Definition*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Axis2D_PlayerController_Definition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Axis2D_PlayerController_Definition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Axis2D_PlayerController_Definition(Axis2D_PlayerController_Definition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Axis2D_PlayerController_Definition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Axis2D_PlayerController_Definition(Axis2D_PlayerController_Definition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1907};

/// @brief Field VvXneWriCKCzNozaFoQzhlVMzTAV, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Axis_PlayerController_Definition*  ___VvXneWriCKCzNozaFoQzhlVMzTAV;

/// @brief Field iZQsguRBffAAQSKlOElUnyNWZtfj, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Axis_PlayerController_Definition*  ___iZQsguRBffAAQSKlOElUnyNWZtfj;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Axis2D_PlayerController_Definition, ___VvXneWriCKCzNozaFoQzhlVMzTAV) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Axis2D_PlayerController_Definition, ___iZQsguRBffAAQSKlOElUnyNWZtfj) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::Axis2D_PlayerController_Definition) == 0x30, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.PlayerController::Element
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/CompoundElement
class CORDL_TYPE PlayerController_CompoundElement : public ::Rewired::PlayerController_Element {
public:
// Declarations
using Definition = ::Rewired::CompoundElement_PlayerController_Definition;

/// @brief Field DLDarzmDsWEeaRPuDLAjjCNSpEyx, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DLDarzmDsWEeaRPuDLAjjCNSpEyx, put=__cordl_internal_set_DLDarzmDsWEeaRPuDLAjjCNSpEyx)) ::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*  DLDarzmDsWEeaRPuDLAjjCNSpEyx;

 __declspec(property(get=vklNeQBGRPFuShvPqCCwcqjHsYWpb)) int32_t  XymshtnqsLjzkrMSkfewKjzHELLJA;

/// @brief Method COYNHsrdBOkeByvbliGembtebzks, addr 0x18195c4d0, size 0x160, virtual false, abstract: false, final false
inline void COYNHsrdBOkeByvbliGembtebzks(::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method JmREgKjaiwPLfeAlNRtahwhaZaObA, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename >
inline  JmREgKjaiwPLfeAlNRtahwhaZaObA(int32_t  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::PlayerController_CompoundElement* New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::CompoundElement_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<::Rewired::Element_PlayerController_Definition*>  _cordl_fixed_empty_name_whitespace_param_2) ;

constexpr ::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>* const& __cordl_internal_get_DLDarzmDsWEeaRPuDLAjjCNSpEyx() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*& __cordl_internal_get_DLDarzmDsWEeaRPuDLAjjCNSpEyx() ;

constexpr void __cordl_internal_set_DLDarzmDsWEeaRPuDLAjjCNSpEyx(::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*  value) ;

/// @brief Method .ctor, addr 0x18195bd60, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::CompoundElement_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<::Rewired::Element_PlayerController_Definition*>  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method rquLIRWVgKVtxRXcmCUHAmyRfAKw, addr 0x18195c630, size 0x90, virtual false, abstract: false, final false
inline void rquLIRWVgKVtxRXcmCUHAmyRfAKw(::Rewired::PlayerController_Element*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method vklNeQBGRPFuShvPqCCwcqjHsYWpb, addr 0x18195c6c0, size 0x20, virtual false, abstract: false, final false
inline int32_t vklNeQBGRPFuShvPqCCwcqjHsYWpb() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_CompoundElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_CompoundElement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController_CompoundElement(PlayerController_CompoundElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_CompoundElement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController_CompoundElement(PlayerController_CompoundElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1914};

/// @brief Field DLDarzmDsWEeaRPuDLAjjCNSpEyx, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*  ___DLDarzmDsWEeaRPuDLAjjCNSpEyx;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PlayerController_CompoundElement, ___DLDarzmDsWEeaRPuDLAjjCNSpEyx) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::PlayerController_CompoundElement) == 0x30, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.PlayerController::CompoundElement
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/Axis2D
class CORDL_TYPE PlayerController_Axis2D : public ::Rewired::PlayerController_CompoundElement {
public:
// Declarations
using Definition = ::Rewired::Axis2D_PlayerController_Definition;

 __declspec(property(get=get_value)) ::UnityEngine::Vector2  value;

 __declspec(property(get=get_valueRaw)) ::UnityEngine::Vector2  valueRaw;

 __declspec(property(get=get_xAxis)) ::Rewired::PlayerController_Axis*  xAxis;

 __declspec(property(get=get_yAxis)) ::Rewired::PlayerController_Axis*  yAxis;

static inline ::Rewired::PlayerController_Axis2D* New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Axis2D_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::PlayerController_Axis2D* New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Axis2D_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<::Rewired::Element_PlayerController_Definition*>  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method .ctor, addr 0x18195bb70, size 0x1f0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Axis2D_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18195bd60, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Axis2D_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<::Rewired::Element_PlayerController_Definition*>  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method get_value, addr 0x18195bf10, size 0x90, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 get_value() ;

/// @brief Method get_valueRaw, addr 0x18195be80, size 0x90, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 get_valueRaw() ;

/// @brief Method get_xAxis, addr 0x18195bfa0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::PlayerController_Axis* get_xAxis() ;

/// @brief Method get_yAxis, addr 0x18195bfb0, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::PlayerController_Axis* get_yAxis() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_Axis2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_Axis2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController_Axis2D(PlayerController_Axis2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_Axis2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController_Axis2D(PlayerController_Axis2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1908};

/// @brief Field hvigWHxtdbRjqcSMHgeBgDTahmkR offset 0xffffffff size 0x4
static constexpr int32_t  hvigWHxtdbRjqcSMHgeBgDTahmkR{static_cast<int32_t>(0x1)};

/// @brief Field uTVdsJiUlPEuQWkjJlLGuHviiCFu offset 0xffffffff size 0x4
static constexpr int32_t  uTVdsJiUlPEuQWkjJlLGuHviiCFu{static_cast<int32_t>(0x2)};

/// @brief Field ylkoWauNtTSLEAyXksuOPkFKBUkx offset 0xffffffff size 0x4
static constexpr int32_t  ylkoWauNtTSLEAyXksuOPkFKBUkx{static_cast<int32_t>(0x0)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::PlayerController_Axis2D) == 0x30, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.PlayerController::Axis2D::Definition
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/MouseAxis2D/Definition
class CORDL_TYPE MouseAxis2D_PlayerController_Definition : public ::Rewired::Axis2D_PlayerController_Definition {
public:
// Declarations
 __declspec(property(get=get_xAxis, put=set_xAxis)) ::Rewired::MouseAxis_PlayerController_Definition*  xAxis;

 __declspec(property(get=get_yAxis, put=set_yAxis)) ::Rewired::MouseAxis_PlayerController_Definition*  yAxis;

static inline ::Rewired::MouseAxis2D_PlayerController_Definition* New_ctor() ;

/// @brief Method .ctor, addr 0x18195cac0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_xAxis, addr 0x18195cce0, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::MouseAxis_PlayerController_Definition* get_xAxis() ;

/// @brief Method get_yAxis, addr 0x18195cd80, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::MouseAxis_PlayerController_Definition* get_yAxis() ;

/// @brief Method lIJJxpcZfToWvcfMuFDKidqxYann, addr 0x18195cec0, size 0x50, virtual true, abstract: false, final false
inline ::Rewired::PlayerController_Element* lIJJxpcZfToWvcfMuFDKidqxYann(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method set_xAxis, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_xAxis(::Rewired::MouseAxis_PlayerController_Definition*  value) ;

/// @brief Method set_yAxis, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_yAxis(::Rewired::MouseAxis_PlayerController_Definition*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MouseAxis2D_PlayerController_Definition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MouseAxis2D_PlayerController_Definition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MouseAxis2D_PlayerController_Definition(MouseAxis2D_PlayerController_Definition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouseAxis2D_PlayerController_Definition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouseAxis2D_PlayerController_Definition(MouseAxis2D_PlayerController_Definition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1909};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::MouseAxis2D_PlayerController_Definition) == 0x30, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.PlayerController::Axis2D
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/MouseAxis2D
class CORDL_TYPE PlayerController_MouseAxis2D : public ::Rewired::PlayerController_Axis2D {
public:
// Declarations
using Definition = ::Rewired::MouseAxis2D_PlayerController_Definition;

 __declspec(property(get=get_xAxis)) ::Rewired::PlayerController_MouseAxis*  xAxis;

 __declspec(property(get=get_yAxis)) ::Rewired::PlayerController_MouseAxis*  yAxis;

static inline ::Rewired::PlayerController_MouseAxis2D* New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseAxis2D_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x181963260, size 0x2a0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseAxis2D_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_xAxis, addr 0x181963500, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::PlayerController_MouseAxis* get_xAxis() ;

/// @brief Method get_yAxis, addr 0x181963510, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::PlayerController_MouseAxis* get_yAxis() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_MouseAxis2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_MouseAxis2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController_MouseAxis2D(PlayerController_MouseAxis2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_MouseAxis2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController_MouseAxis2D(PlayerController_MouseAxis2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1910};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::PlayerController_MouseAxis2D) == 0x30, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.PlayerController::ElementWithSource::Definition
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/Button/Definition
class CORDL_TYPE Button_PlayerController_Definition : public ::Rewired::ElementWithSource_PlayerController_Definition {
public:
// Declarations
static inline ::Rewired::Button_PlayerController_Definition* New_ctor() ;

/// @brief Method OUGaAogVvZnPFuFcflMhjNmPCwYaA, addr 0x18195ca20, size 0xa0, virtual true, abstract: false, final false
inline ::Rewired::PlayerController_Element* OUGaAogVvZnPFuFcflMhjNmPCwYaA(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x18195cb80, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Button_PlayerController_Definition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Button_PlayerController_Definition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Button_PlayerController_Definition(Button_PlayerController_Definition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Button_PlayerController_Definition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Button_PlayerController_Definition(Button_PlayerController_Definition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1911};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Button_PlayerController_Definition) == 0x28, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.PlayerController::ElementWithSource
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/Button
class CORDL_TYPE PlayerController_Button : public ::Rewired::PlayerController_ElementWithSource {
public:
// Declarations
using Definition = ::Rewired::Button_PlayerController_Definition;

 __declspec(property(get=get_justPressed)) bool  justPressed;

 __declspec(property(get=get_justReleased)) bool  justReleased;

 __declspec(property(get=get_value)) bool  value;

 __declspec(property(get=get_valuePrev)) bool  valuePrev;

static inline ::Rewired::PlayerController_Button* New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Button_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18195c2d0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Button_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_justPressed, addr 0x18195c350, size 0x60, virtual false, abstract: false, final false
inline bool get_justPressed() ;

/// @brief Method get_justReleased, addr 0x18195c3b0, size 0x60, virtual false, abstract: false, final false
inline bool get_justReleased() ;

/// @brief Method get_value, addr 0x18195c470, size 0x60, virtual false, abstract: false, final false
inline bool get_value() ;

/// @brief Method get_valuePrev, addr 0x18195c410, size 0x60, virtual false, abstract: false, final false
inline bool get_valuePrev() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_Button() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_Button", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController_Button(PlayerController_Button && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_Button", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController_Button(PlayerController_Button const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1912};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::PlayerController_Button) == 0x30, "Size mismatch!");

} // namespace end def Rewired
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.PlayerController/Element/Type
struct CORDL_TYPE Element_PlayerController_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Element_PlayerController_Type_Unwrapped
enum struct __Element_PlayerController_Type_Unwrapped : int32_t {
__E_Button = static_cast<int32_t>(0x0),
__E_Axis = static_cast<int32_t>(0x1),
__E_MouseAxis = static_cast<int32_t>(0x2),
__E_MouseWheelAxis = static_cast<int32_t>(0x3),
__E_Axis2D = static_cast<int32_t>(0x64),
__E_MouseAxis2D = static_cast<int32_t>(0x65),
__E_MouseWheel = static_cast<int32_t>(0x66),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Element_PlayerController_Type_Unwrapped () const noexcept {
return static_cast<__Element_PlayerController_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Element_PlayerController_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Element_PlayerController_Type(int32_t  value__) noexcept;

/// @brief Field Axis value: I32(1)
static ::Rewired::Element_PlayerController_Type const Axis;

/// @brief Field Axis2D value: I32(100)
static ::Rewired::Element_PlayerController_Type const Axis2D;

/// @brief Field Button value: I32(0)
static ::Rewired::Element_PlayerController_Type const Button;

/// @brief Field MouseAxis value: I32(2)
static ::Rewired::Element_PlayerController_Type const MouseAxis;

/// @brief Field MouseAxis2D value: I32(101)
static ::Rewired::Element_PlayerController_Type const MouseAxis2D;

/// @brief Field MouseWheel value: I32(102)
static ::Rewired::Element_PlayerController_Type const MouseWheel;

/// @brief Field MouseWheelAxis value: I32(3)
static ::Rewired::Element_PlayerController_Type const MouseWheelAxis;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1915};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Element_PlayerController_Type, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Element_PlayerController_Type) == 0x4, "Size mismatch!");

} // namespace end def Rewired
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.PlayerController/Element/TypeWithSource
struct CORDL_TYPE Element_PlayerController_TypeWithSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Element_PlayerController_TypeWithSource_Unwrapped
enum struct __Element_PlayerController_TypeWithSource_Unwrapped : int32_t {
__E_Button = static_cast<int32_t>(0x0),
__E_Axis = static_cast<int32_t>(0x1),
__E_MouseAxis = static_cast<int32_t>(0x2),
__E_MouseWheelAxis = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Element_PlayerController_TypeWithSource_Unwrapped () const noexcept {
return static_cast<__Element_PlayerController_TypeWithSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Element_PlayerController_TypeWithSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Element_PlayerController_TypeWithSource(int32_t  value__) noexcept;

/// @brief Field Axis value: I32(1)
static ::Rewired::Element_PlayerController_TypeWithSource const Axis;

/// @brief Field Button value: I32(0)
static ::Rewired::Element_PlayerController_TypeWithSource const Button;

/// @brief Field MouseAxis value: I32(2)
static ::Rewired::Element_PlayerController_TypeWithSource const MouseAxis;

/// @brief Field MouseWheelAxis value: I32(3)
static ::Rewired::Element_PlayerController_TypeWithSource const MouseWheelAxis;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1916};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Element_PlayerController_TypeWithSource, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Element_PlayerController_TypeWithSource) == 0x4, "Size mismatch!");

} // namespace end def Rewired
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.PlayerController/Element/CompoundTypes
struct CORDL_TYPE Element_PlayerController_CompoundTypes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Element_PlayerController_CompoundTypes_Unwrapped
enum struct __Element_PlayerController_CompoundTypes_Unwrapped : int32_t {
__E_Axis2D = static_cast<int32_t>(0x64),
__E_MouseAxis2D = static_cast<int32_t>(0x65),
__E_MouseWheel = static_cast<int32_t>(0x66),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Element_PlayerController_CompoundTypes_Unwrapped () const noexcept {
return static_cast<__Element_PlayerController_CompoundTypes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Element_PlayerController_CompoundTypes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Element_PlayerController_CompoundTypes(int32_t  value__) noexcept;

/// @brief Field Axis2D value: I32(100)
static ::Rewired::Element_PlayerController_CompoundTypes const Axis2D;

/// @brief Field MouseAxis2D value: I32(101)
static ::Rewired::Element_PlayerController_CompoundTypes const MouseAxis2D;

/// @brief Field MouseWheel value: I32(102)
static ::Rewired::Element_PlayerController_CompoundTypes const MouseWheel;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1917};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Element_PlayerController_CompoundTypes, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Element_PlayerController_CompoundTypes) == 0x4, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerElementType
namespace Rewired {
// Is value type: true
// CS Name: Rewired.PlayerController/Element/MmwFJDgWnDjeNVGoQAGSfNlDWxKQ
struct CORDL_TYPE Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ {
public:
// Declarations
/// @brief Method .ctor, addr 0x180fb4c80, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2) ;

// Ctor Parameters []
// @brief default ctor
constexpr Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ() ;

// Ctor Parameters [CppParam { name: "SHXMlLrgnAGKPrpVKJEPunSuXQPb", ty: "::Rewired::ControllerElementType", modifiers: "", def_value: None }, CppParam { name: "bJYGxBXEalzRxtkGUcVSHVMIGmoAA", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pYcPkWAHUdrxvkIpBasTuOYuZgMw", ty: "float_t", modifiers: "", def_value: None }]
constexpr Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ(::Rewired::ControllerElementType  SHXMlLrgnAGKPrpVKJEPunSuXQPb, int32_t  bJYGxBXEalzRxtkGUcVSHVMIGmoAA, float_t  pYcPkWAHUdrxvkIpBasTuOYuZgMw) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1919};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field SHXMlLrgnAGKPrpVKJEPunSuXQPb, offset: 0x0, size: 0x4, def value: None
 ::Rewired::ControllerElementType  SHXMlLrgnAGKPrpVKJEPunSuXQPb;

/// @brief Field bJYGxBXEalzRxtkGUcVSHVMIGmoAA, offset: 0x4, size: 0x4, def value: None
 int32_t  bJYGxBXEalzRxtkGUcVSHVMIGmoAA;

/// @brief Field pYcPkWAHUdrxvkIpBasTuOYuZgMw, offset: 0x8, size: 0x4, def value: None
 float_t  pYcPkWAHUdrxvkIpBasTuOYuZgMw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ, SHXMlLrgnAGKPrpVKJEPunSuXQPb) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ, bJYGxBXEalzRxtkGUcVSHVMIGmoAA) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ, pYcPkWAHUdrxvkIpBasTuOYuZgMw) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ) == 0xc, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.PlayerController::Axis2D::Definition
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/MouseWheel/Definition
class CORDL_TYPE MouseWheel_PlayerController_Definition : public ::Rewired::Axis2D_PlayerController_Definition {
public:
// Declarations
 __declspec(property(get=get_xAxis, put=set_xAxis)) ::Rewired::MouseWheelAxis_PlayerController_Definition*  xAxis;

 __declspec(property(get=get_yAxis, put=set_yAxis)) ::Rewired::MouseWheelAxis_PlayerController_Definition*  yAxis;

static inline ::Rewired::MouseWheel_PlayerController_Definition* New_ctor() ;

/// @brief Method .ctor, addr 0x18195cac0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_xAxis, addr 0x18195cd30, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::MouseWheelAxis_PlayerController_Definition* get_xAxis() ;

/// @brief Method get_yAxis, addr 0x18195cdd0, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::MouseWheelAxis_PlayerController_Definition* get_yAxis() ;

/// @brief Method jjHDNBHLcOlwwEIQVAgQRrFrBOLS, addr 0x18195ce70, size 0x50, virtual true, abstract: false, final false
inline ::Rewired::PlayerController_Element* jjHDNBHLcOlwwEIQVAgQRrFrBOLS(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method set_xAxis, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_xAxis(::Rewired::MouseWheelAxis_PlayerController_Definition*  value) ;

/// @brief Method set_yAxis, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_yAxis(::Rewired::MouseWheelAxis_PlayerController_Definition*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MouseWheel_PlayerController_Definition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MouseWheel_PlayerController_Definition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MouseWheel_PlayerController_Definition(MouseWheel_PlayerController_Definition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouseWheel_PlayerController_Definition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouseWheel_PlayerController_Definition(MouseWheel_PlayerController_Definition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1923};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::MouseWheel_PlayerController_Definition) == 0x30, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.PlayerController::Axis2D
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/MouseWheel
class CORDL_TYPE PlayerController_MouseWheel : public ::Rewired::PlayerController_Axis2D {
public:
// Declarations
using Definition = ::Rewired::MouseWheel_PlayerController_Definition;

 __declspec(property(get=get_xAxis)) ::Rewired::PlayerController_MouseWheelAxis*  xAxis;

 __declspec(property(get=get_yAxis)) ::Rewired::PlayerController_MouseWheelAxis*  yAxis;

static inline ::Rewired::PlayerController_MouseWheel* New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseWheel_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x181963840, size 0x2a0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseWheel_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_xAxis, addr 0x181963ae0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::PlayerController_MouseWheelAxis* get_xAxis() ;

/// @brief Method get_yAxis, addr 0x181963af0, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::PlayerController_MouseWheelAxis* get_yAxis() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_MouseWheel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_MouseWheel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController_MouseWheel(PlayerController_MouseWheel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_MouseWheel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController_MouseWheel(PlayerController_MouseWheel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1924};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::PlayerController_MouseWheel) == 0x30, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.PlayerController::Axis::Definition
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/MouseWheelAxis/Definition
class CORDL_TYPE MouseWheelAxis_PlayerController_Definition : public ::Rewired::Axis_PlayerController_Definition {
public:
// Declarations
/// @brief Field repeatRate, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_repeatRate, put=__cordl_internal_set_repeatRate)) float_t  repeatRate;

/// @brief Method LoVrbrnFqQBpYBXgujMMmqYyUdMGA, addr 0x18195c990, size 0x90, virtual true, abstract: false, final false
inline ::Rewired::PlayerController_Element* LoVrbrnFqQBpYBXgujMMmqYyUdMGA(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::MouseWheelAxis_PlayerController_Definition* New_ctor() ;

constexpr float_t const& __cordl_internal_get_repeatRate() const;

constexpr float_t& __cordl_internal_get_repeatRate() ;

constexpr void __cordl_internal_set_repeatRate(float_t  value) ;

/// @brief Method .ctor, addr 0x18195cae0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MouseWheelAxis_PlayerController_Definition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MouseWheelAxis_PlayerController_Definition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MouseWheelAxis_PlayerController_Definition(MouseWheelAxis_PlayerController_Definition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouseWheelAxis_PlayerController_Definition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouseWheelAxis_PlayerController_Definition(MouseWheelAxis_PlayerController_Definition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1925};

/// @brief Field repeatRate, offset: 0x30, size: 0x4, def value: None
 float_t  ___repeatRate;

/// @brief Size padding 0x40 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::MouseWheelAxis_PlayerController_Definition, ___repeatRate) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::MouseWheelAxis_PlayerController_Definition) == 0x40, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.AxisCoordinateMode, Rewired.PlayerController::Axis
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController/MouseWheelAxis
class CORDL_TYPE PlayerController_MouseWheelAxis : public ::Rewired::PlayerController_Axis {
public:
// Declarations
using Definition = ::Rewired::MouseWheelAxis_PlayerController_Definition;

/// @brief Field NozvdOcNoSDriinduIHvSScmiHiJ, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_NozvdOcNoSDriinduIHvSScmiHiJ, put=__cordl_internal_set_NozvdOcNoSDriinduIHvSScmiHiJ)) float_t  NozvdOcNoSDriinduIHvSScmiHiJ;

/// @brief Field QSXpTEGYFNAiYgzLmfXgKfFJYEft, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_QSXpTEGYFNAiYgzLmfXgKfFJYEft, put=__cordl_internal_set_QSXpTEGYFNAiYgzLmfXgKfFJYEft)) double_t  QSXpTEGYFNAiYgzLmfXgKfFJYEft;

/// @brief Field rdJfdSZPISdOZBkFlKHBCzkNZYVLA, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_rdJfdSZPISdOZBkFlKHBCzkNZYVLA, put=__cordl_internal_set_rdJfdSZPISdOZBkFlKHBCzkNZYVLA)) float_t  rdJfdSZPISdOZBkFlKHBCzkNZYVLA;

 __declspec(property(get=get_repeatRate, put=set_repeatRate)) float_t  repeatRate;

 __declspec(property(get=get_value)) float_t  value;

/// @brief Method EnabledStateChanged, addr 0x181963540, size 0x10, virtual true, abstract: false, final false
inline void EnabledStateChanged(bool  state) ;

static inline ::Rewired::PlayerController_MouseWheelAxis* New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseWheelAxis_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method TYAugMRisLLuQkZpVqSYmcRaPBuT, addr 0x181963550, size 0x1a0, virtual false, abstract: false, final false
inline float_t TYAugMRisLLuQkZpVqSYmcRaPBuT() ;

/// @brief Method VJmUQPHIeLItQBxnrfnoHBQnpfy, addr 0x1819636f0, size 0x40, virtual true, abstract: false, final false
inline void VJmUQPHIeLItQBxnrfnoHBQnpfy() ;

constexpr float_t const& __cordl_internal_get_NozvdOcNoSDriinduIHvSScmiHiJ() const;

constexpr float_t& __cordl_internal_get_NozvdOcNoSDriinduIHvSScmiHiJ() ;

constexpr double_t const& __cordl_internal_get_QSXpTEGYFNAiYgzLmfXgKfFJYEft() const;

constexpr double_t& __cordl_internal_get_QSXpTEGYFNAiYgzLmfXgKfFJYEft() ;

constexpr float_t const& __cordl_internal_get_rdJfdSZPISdOZBkFlKHBCzkNZYVLA() const;

constexpr float_t& __cordl_internal_get_rdJfdSZPISdOZBkFlKHBCzkNZYVLA() ;

constexpr void __cordl_internal_set_NozvdOcNoSDriinduIHvSScmiHiJ(float_t  value) ;

constexpr void __cordl_internal_set_QSXpTEGYFNAiYgzLmfXgKfFJYEft(double_t  value) ;

constexpr void __cordl_internal_set_rdJfdSZPISdOZBkFlKHBCzkNZYVLA(float_t  value) ;

/// @brief Method .ctor, addr 0x181963730, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseWheelAxis_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_repeatRate, addr 0x1819637a0, size 0x20, virtual false, abstract: false, final false
inline float_t get_repeatRate() ;

/// @brief Method get_value, addr 0x1819637c0, size 0x40, virtual true, abstract: false, final false
inline float_t get_value() ;

/// @brief Method kVaceDgtiHpFgalnDMllDidfsvhKe, addr 0x181963800, size 0x10, virtual false, abstract: false, final false
inline void kVaceDgtiHpFgalnDMllDidfsvhKe() ;

/// @brief Method set_repeatRate, addr 0x181963810, size 0x30, virtual false, abstract: false, final false
inline void set_repeatRate(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_MouseWheelAxis() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_MouseWheelAxis", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController_MouseWheelAxis(PlayerController_MouseWheelAxis && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController_MouseWheelAxis", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController_MouseWheelAxis(PlayerController_MouseWheelAxis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1926};

/// @brief Field defaultAxisCoordinateMode value: I32(1)
static ::Rewired::AxisCoordinateMode const defaultAxisCoordinateMode;

/// @brief Field defaultRepeatRate offset 0xffffffff size 0x4
static constexpr float_t  defaultRepeatRate{static_cast<float_t>(4.0f)};

/// @brief Field sjkmLwWAmQnjvoindYcJCseUKxtn offset 0xffffffff size 0x4
static constexpr float_t  sjkmLwWAmQnjvoindYcJCseUKxtn{static_cast<float_t>(0.01f)};

/// @brief Field rdJfdSZPISdOZBkFlKHBCzkNZYVLA, offset: 0x38, size: 0x4, def value: None
 float_t  ___rdJfdSZPISdOZBkFlKHBCzkNZYVLA;

/// @brief Field QSXpTEGYFNAiYgzLmfXgKfFJYEft, offset: 0x40, size: 0x8, def value: None
 double_t  ___QSXpTEGYFNAiYgzLmfXgKfFJYEft;

/// @brief Field NozvdOcNoSDriinduIHvSScmiHiJ, offset: 0x48, size: 0x4, def value: None
 float_t  ___NozvdOcNoSDriinduIHvSScmiHiJ;

/// @brief Size padding 0x58 - 0x50 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PlayerController_MouseWheelAxis, ___rdJfdSZPISdOZBkFlKHBCzkNZYVLA) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController_MouseWheelAxis, ___QSXpTEGYFNAiYgzLmfXgKfFJYEft) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController_MouseWheelAxis, ___NozvdOcNoSDriinduIHvSScmiHiJ) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Rewired::PlayerController_MouseWheelAxis) == 0x58, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object, UnityEngine.Vector2
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerController
class CORDL_TYPE PlayerController : public ::System::Object {
public:
// Declarations
using AbsoluteToRelativeScalingMode = ::Rewired::PlayerController_AbsoluteToRelativeScalingMode;

using Axis = ::Rewired::PlayerController_Axis;

using Axis2D = ::Rewired::PlayerController_Axis2D;

using Button = ::Rewired::PlayerController_Button;

using CompoundElement = ::Rewired::PlayerController_CompoundElement;

using Definition = ::Rewired::PlayerController_Definition;

using Element = ::Rewired::PlayerController_Element;

using ElementWithSource = ::Rewired::PlayerController_ElementWithSource;

using Factory = ::Rewired::PlayerController_Factory;

using MouseAxis = ::Rewired::PlayerController_MouseAxis;

using MouseAxis2D = ::Rewired::PlayerController_MouseAxis2D;

using MouseWheel = ::Rewired::PlayerController_MouseWheel;

using MouseWheelAxis = ::Rewired::PlayerController_MouseWheelAxis;

/// @brief Field BcIHjgAgTzuwRNYnmdOSjVVsKoLgb, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_BcIHjgAgTzuwRNYnmdOSjVVsKoLgb, put=__cordl_internal_set_BcIHjgAgTzuwRNYnmdOSjVVsKoLgb)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Axis*>*  BcIHjgAgTzuwRNYnmdOSjVVsKoLgb;

/// @brief Field GGKvqWOBQcYWIwHCncrFLQeJvZJc, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_GGKvqWOBQcYWIwHCncrFLQeJvZJc, put=__cordl_internal_set_GGKvqWOBQcYWIwHCncrFLQeJvZJc)) int32_t  GGKvqWOBQcYWIwHCncrFLQeJvZJc;

/// @brief Field NZCthpndnOzPXRbBaTnfGrONaVOz, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_NZCthpndnOzPXRbBaTnfGrONaVOz, put=__cordl_internal_set_NZCthpndnOzPXRbBaTnfGrONaVOz)) ::System::Action_2<int32_t,bool>*  NZCthpndnOzPXRbBaTnfGrONaVOz;

/// @brief Field OtBkSRoZDipuadpUQSnjEfWmmhKT, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OtBkSRoZDipuadpUQSnjEfWmmhKT, put=__cordl_internal_set_OtBkSRoZDipuadpUQSnjEfWmmhKT)) ::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Axis*>*  OtBkSRoZDipuadpUQSnjEfWmmhKT;

 __declspec(property(get=IiOCqqBNQJcOEzTMGDRZEKZhAhFNA)) ::Rewired::Player*  VgaTlhNSYouwCKNnvVtajLUuBiQB;

/// @brief Field ZZmoQcrKUzfPmEFcBluBKhyJkHZFA, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ZZmoQcrKUzfPmEFcBluBKhyJkHZFA, put=__cordl_internal_set_ZZmoQcrKUzfPmEFcBluBKhyJkHZFA)) int32_t  ZZmoQcrKUzfPmEFcBluBKhyJkHZFA;

 __declspec(property(get=get_axes)) ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Axis*>*  axes;

 __declspec(property(get=get_axisCount)) int32_t  axisCount;

 __declspec(property(get=get_buttonCount)) int32_t  buttonCount;

 __declspec(property(get=get_buttons)) ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Button*>*  buttons;

/// @brief Field cevXCIvGcUanyqqWGYAoctvNYTlJ, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_cevXCIvGcUanyqqWGYAoctvNYTlJ, put=__cordl_internal_set_cevXCIvGcUanyqqWGYAoctvNYTlJ)) ::System::Action_2<int32_t,float_t>*  cevXCIvGcUanyqqWGYAoctvNYTlJ;

 __declspec(property(get=get_elementCount)) int32_t  elementCount;

 __declspec(property(get=get_elements)) ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Element*>*  elements;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

/// @brief Field oRJzHewxlPoKRLRwCrQghslvKTSq, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_oRJzHewxlPoKRLRwCrQghslvKTSq, put=__cordl_internal_set_oRJzHewxlPoKRLRwCrQghslvKTSq)) ::System::Collections::Generic::List_1<::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ>*  oRJzHewxlPoKRLRwCrQghslvKTSq;

/// @brief Field otmtMQNUagHjtByJxHvEwkirsLtn, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_otmtMQNUagHjtByJxHvEwkirsLtn, put=__cordl_internal_set_otmtMQNUagHjtByJxHvEwkirsLtn)) bool  otmtMQNUagHjtByJxHvEwkirsLtn;

 __declspec(property(get=get_playerId, put=set_playerId)) int32_t  playerId;

/// @brief Field plfGHWcVZbnxndOMikXPxzryKyOab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_plfGHWcVZbnxndOMikXPxzryKyOab, put=__cordl_internal_set_plfGHWcVZbnxndOMikXPxzryKyOab)) ::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Button*>*  plfGHWcVZbnxndOMikXPxzryKyOab;

/// @brief Field rKgzKCQgiRRVfDFWehuLTRuCEbJk, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_rKgzKCQgiRRVfDFWehuLTRuCEbJk, put=__cordl_internal_set_rKgzKCQgiRRVfDFWehuLTRuCEbJk)) ::System::Action_1<bool>*  rKgzKCQgiRRVfDFWehuLTRuCEbJk;

/// @brief Field rPwACZfJLACrwqwEtIKPvjIiNfAl, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rPwACZfJLACrwqwEtIKPvjIiNfAl, put=__cordl_internal_set_rPwACZfJLACrwqwEtIKPvjIiNfAl)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Element*>*  rPwACZfJLACrwqwEtIKPvjIiNfAl;

/// @brief Field reHyWdIdWMPFahYUHXcthXIHrFcd, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_reHyWdIdWMPFahYUHXcthXIHrFcd, put=setStaticF_reHyWdIdWMPFahYUHXcthXIHrFcd)) ::UnityEngine::Vector2  reHyWdIdWMPFahYUHXcthXIHrFcd;

/// @brief Field tXmZbbNUIRimTmmpmrGVeMhKkkWe, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_tXmZbbNUIRimTmmpmrGVeMhKkkWe, put=__cordl_internal_set_tXmZbbNUIRimTmmpmrGVeMhKkkWe)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Button*>*  tXmZbbNUIRimTmmpmrGVeMhKkkWe;

/// @brief Field zllpElocLhlMJeXOLkAxcZIIIAzV, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_zllpElocLhlMJeXOLkAxcZIIIAzV, put=__cordl_internal_set_zllpElocLhlMJeXOLkAxcZIIIAzV)) ::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Element*>*  zllpElocLhlMJeXOLkAxcZIIIAzV;

/// @brief Convert operator to "::Rewired::IPlayerController"
constexpr operator  ::Rewired::IPlayerController*() noexcept;

/// @brief Method ClearVars, addr 0x181925140, size 0x30, virtual true, abstract: false, final false
inline void ClearVars() ;

/// @brief Method Finalize, addr 0x181925170, size 0x60, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetAxis, addr 0x181925270, size 0xa0, virtual true, abstract: false, final true
inline float_t GetAxis(int32_t  index) ;

/// @brief Method GetAxisRaw, addr 0x1819251d0, size 0xa0, virtual true, abstract: false, final true
inline float_t GetAxisRaw(int32_t  index) ;

/// @brief Method GetButton, addr 0x181925450, size 0xa0, virtual true, abstract: false, final true
inline bool GetButton(int32_t  index) ;

/// @brief Method GetButtonDown, addr 0x181925310, size 0xa0, virtual true, abstract: false, final true
inline bool GetButtonDown(int32_t  index) ;

/// @brief Method GetButtonUp, addr 0x1819253b0, size 0xa0, virtual true, abstract: false, final true
inline bool GetButtonUp(int32_t  index) ;

/// @brief Method GetElement, addr 0x1819254f0, size 0x90, virtual true, abstract: false, final true
inline ::Rewired::PlayerController_Element* GetElement(int32_t  index) ;

/// @brief Method GetElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline T GetElement(int32_t  index) ;

/// @brief Method IiOCqqBNQJcOEzTMGDRZEKZhAhFNA, addr 0x181925580, size 0xd0, virtual false, abstract: false, final false
inline ::Rewired::Player* IiOCqqBNQJcOEzTMGDRZEKZhAhFNA() ;

/// @brief Method JYSwMCxRETcDpyIXBejzAatRqot, addr 0x181925650, size 0x4c0, virtual false, abstract: false, final false
inline void JYSwMCxRETcDpyIXBejzAatRqot(::Rewired::PlayerController_Element*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*  _cordl_fixed_empty_name_whitespace_param_2, ::System::Collections::Generic::List_1<::Rewired::PlayerController_Button*>*  _cordl_fixed_empty_name_whitespace_param_3, ::System::Collections::Generic::List_1<::Rewired::PlayerController_Axis*>*  _cordl_fixed_empty_name_whitespace_param_4) ;

static inline ::Rewired::PlayerController* New_ctor(::Rewired::PlayerController_Definition*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Update, addr 0x181925d00, size 0x4e0, virtual true, abstract: false, final false
inline bool Update(::Rewired::UpdateLoopType  updateLoop) ;

/// @brief Method UpdateFinished, addr 0x181925b10, size 0x1f0, virtual true, abstract: false, final false
inline void UpdateFinished() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Axis*>* const& __cordl_internal_get_BcIHjgAgTzuwRNYnmdOSjVVsKoLgb() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Axis*>*& __cordl_internal_get_BcIHjgAgTzuwRNYnmdOSjVVsKoLgb() ;

constexpr int32_t const& __cordl_internal_get_GGKvqWOBQcYWIwHCncrFLQeJvZJc() const;

constexpr int32_t& __cordl_internal_get_GGKvqWOBQcYWIwHCncrFLQeJvZJc() ;

constexpr ::System::Action_2<int32_t,bool>* const& __cordl_internal_get_NZCthpndnOzPXRbBaTnfGrONaVOz() const;

constexpr ::System::Action_2<int32_t,bool>*& __cordl_internal_get_NZCthpndnOzPXRbBaTnfGrONaVOz() ;

constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Axis*>* const& __cordl_internal_get_OtBkSRoZDipuadpUQSnjEfWmmhKT() const;

constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Axis*>*& __cordl_internal_get_OtBkSRoZDipuadpUQSnjEfWmmhKT() ;

constexpr int32_t const& __cordl_internal_get_ZZmoQcrKUzfPmEFcBluBKhyJkHZFA() const;

constexpr int32_t& __cordl_internal_get_ZZmoQcrKUzfPmEFcBluBKhyJkHZFA() ;

constexpr ::System::Action_2<int32_t,float_t>* const& __cordl_internal_get_cevXCIvGcUanyqqWGYAoctvNYTlJ() const;

constexpr ::System::Action_2<int32_t,float_t>*& __cordl_internal_get_cevXCIvGcUanyqqWGYAoctvNYTlJ() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ>* const& __cordl_internal_get_oRJzHewxlPoKRLRwCrQghslvKTSq() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ>*& __cordl_internal_get_oRJzHewxlPoKRLRwCrQghslvKTSq() ;

constexpr bool const& __cordl_internal_get_otmtMQNUagHjtByJxHvEwkirsLtn() const;

constexpr bool& __cordl_internal_get_otmtMQNUagHjtByJxHvEwkirsLtn() ;

constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Button*>* const& __cordl_internal_get_plfGHWcVZbnxndOMikXPxzryKyOab() const;

constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Button*>*& __cordl_internal_get_plfGHWcVZbnxndOMikXPxzryKyOab() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_rKgzKCQgiRRVfDFWehuLTRuCEbJk() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_rKgzKCQgiRRVfDFWehuLTRuCEbJk() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Element*>* const& __cordl_internal_get_rPwACZfJLACrwqwEtIKPvjIiNfAl() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Element*>*& __cordl_internal_get_rPwACZfJLACrwqwEtIKPvjIiNfAl() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Button*>* const& __cordl_internal_get_tXmZbbNUIRimTmmpmrGVeMhKkkWe() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Button*>*& __cordl_internal_get_tXmZbbNUIRimTmmpmrGVeMhKkkWe() ;

constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Element*>* const& __cordl_internal_get_zllpElocLhlMJeXOLkAxcZIIIAzV() const;

constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Element*>*& __cordl_internal_get_zllpElocLhlMJeXOLkAxcZIIIAzV() ;

constexpr void __cordl_internal_set_BcIHjgAgTzuwRNYnmdOSjVVsKoLgb(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Axis*>*  value) ;

constexpr void __cordl_internal_set_GGKvqWOBQcYWIwHCncrFLQeJvZJc(int32_t  value) ;

constexpr void __cordl_internal_set_NZCthpndnOzPXRbBaTnfGrONaVOz(::System::Action_2<int32_t,bool>*  value) ;

constexpr void __cordl_internal_set_OtBkSRoZDipuadpUQSnjEfWmmhKT(::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Axis*>*  value) ;

constexpr void __cordl_internal_set_ZZmoQcrKUzfPmEFcBluBKhyJkHZFA(int32_t  value) ;

constexpr void __cordl_internal_set_cevXCIvGcUanyqqWGYAoctvNYTlJ(::System::Action_2<int32_t,float_t>*  value) ;

constexpr void __cordl_internal_set_oRJzHewxlPoKRLRwCrQghslvKTSq(::System::Collections::Generic::List_1<::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ>*  value) ;

constexpr void __cordl_internal_set_otmtMQNUagHjtByJxHvEwkirsLtn(bool  value) ;

constexpr void __cordl_internal_set_plfGHWcVZbnxndOMikXPxzryKyOab(::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Button*>*  value) ;

constexpr void __cordl_internal_set_rKgzKCQgiRRVfDFWehuLTRuCEbJk(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_rPwACZfJLACrwqwEtIKPvjIiNfAl(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Element*>*  value) ;

constexpr void __cordl_internal_set_tXmZbbNUIRimTmmpmrGVeMhKkkWe(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Button*>*  value) ;

constexpr void __cordl_internal_set_zllpElocLhlMJeXOLkAxcZIIIAzV(::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Element*>*  value) ;

/// @brief Method .ctor, addr 0x181926210, size 0x490, virtual false, abstract: false, final false
inline void _ctor(::Rewired::PlayerController_Definition*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method add_AxisValueChangedEvent, addr 0x1819266a0, size 0xe0, virtual true, abstract: false, final true
inline void add_AxisValueChangedEvent(::System::Action_2<int32_t,float_t>*  value) ;

/// @brief Method add_ButtonStateChangedEvent, addr 0x181926780, size 0xe0, virtual true, abstract: false, final true
inline void add_ButtonStateChangedEvent(::System::Action_2<int32_t,bool>*  value) ;

/// @brief Method add_EnabledStateChangedEvent, addr 0x181926860, size 0xe0, virtual true, abstract: false, final true
inline void add_EnabledStateChangedEvent(::System::Action_1<bool>*  value) ;

static inline ::UnityEngine::Vector2 getStaticF_reHyWdIdWMPFahYUHXcthXIHrFcd() ;

/// @brief Method get_absoluteToRelativeScalingReferenceResolution, addr 0x181915600, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 get_absoluteToRelativeScalingReferenceResolution() ;

/// @brief Method get_axes, addr 0x181926940, size 0x60, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Axis*>* get_axes() ;

/// @brief Method get_axisCount, addr 0x1819269a0, size 0x60, virtual true, abstract: false, final true
inline int32_t get_axisCount() ;

/// @brief Method get_buttonCount, addr 0x181926a00, size 0x60, virtual true, abstract: false, final true
inline int32_t get_buttonCount() ;

/// @brief Method get_buttons, addr 0x181926a60, size 0x60, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Button*>* get_buttons() ;

/// @brief Method get_elementCount, addr 0x181926ac0, size 0x60, virtual true, abstract: false, final true
inline int32_t get_elementCount() ;

/// @brief Method get_elements, addr 0x181926b20, size 0x60, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Element*>* get_elements() ;

/// @brief Method get_enabled, addr 0x181926b80, size 0x60, virtual true, abstract: false, final true
inline bool get_enabled() ;

/// @brief Method get_playerId, addr 0x181926be0, size 0x60, virtual true, abstract: false, final true
inline int32_t get_playerId() ;

/// @brief Method hwqBnSmqJvDZfCiNJJJzqiqWalXP, addr 0x181926c40, size 0xf0, virtual false, abstract: false, final false
inline void hwqBnSmqJvDZfCiNJJJzqiqWalXP(::Rewired::PlayerController_Element*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::Rewired::IPlayerController"
constexpr ::Rewired::IPlayerController* i___Rewired__IPlayerController() noexcept;

/// @brief Method rRqpLdFiYMQSAXUZJKIXjfknzLNf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename >
static inline int32_t rRqpLdFiYMQSAXUZJKIXjfknzLNf(::System::Collections::Generic::IList_1<>*  _cordl_fixed_empty_name_whitespace, ::System::Predicate_1<>*  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method remove_AxisValueChangedEvent, addr 0x181926d30, size 0x90, virtual true, abstract: false, final true
inline void remove_AxisValueChangedEvent(::System::Action_2<int32_t,float_t>*  value) ;

/// @brief Method remove_ButtonStateChangedEvent, addr 0x181926dc0, size 0x90, virtual true, abstract: false, final true
inline void remove_ButtonStateChangedEvent(::System::Action_2<int32_t,bool>*  value) ;

/// @brief Method remove_EnabledStateChangedEvent, addr 0x181926e50, size 0x90, virtual true, abstract: false, final true
inline void remove_EnabledStateChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method rgqliBLWBpJpgOfiyFzWZiEkfuaE, addr 0x181926ee0, size 0x40, virtual false, abstract: false, final false
inline void rgqliBLWBpJpgOfiyFzWZiEkfuaE(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

static inline void setStaticF_reHyWdIdWMPFahYUHXcthXIHrFcd(::UnityEngine::Vector2  value) ;

/// @brief Method set_absoluteToRelativeScalingReferenceResolution, addr 0x181926f20, size 0x70, virtual false, abstract: false, final false
static inline void set_absoluteToRelativeScalingReferenceResolution(::UnityEngine::Vector2  value) ;

/// @brief Method set_enabled, addr 0x181926f90, size 0x1a0, virtual true, abstract: false, final true
inline void set_enabled(bool  value) ;

/// @brief Method set_playerId, addr 0x181927130, size 0x80, virtual true, abstract: false, final true
inline void set_playerId(int32_t  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1927};

/// @brief Field ZZmoQcrKUzfPmEFcBluBKhyJkHZFA, offset: 0x10, size: 0x4, def value: None
 int32_t  ___ZZmoQcrKUzfPmEFcBluBKhyJkHZFA;

/// @brief Field otmtMQNUagHjtByJxHvEwkirsLtn, offset: 0x14, size: 0x1, def value: None
 bool  ___otmtMQNUagHjtByJxHvEwkirsLtn;

/// @brief Field GGKvqWOBQcYWIwHCncrFLQeJvZJc, offset: 0x18, size: 0x4, def value: None
 int32_t  ___GGKvqWOBQcYWIwHCncrFLQeJvZJc;

/// @brief Field zllpElocLhlMJeXOLkAxcZIIIAzV, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Element*>*  ___zllpElocLhlMJeXOLkAxcZIIIAzV;

/// @brief Field plfGHWcVZbnxndOMikXPxzryKyOab, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Button*>*  ___plfGHWcVZbnxndOMikXPxzryKyOab;

/// @brief Field OtBkSRoZDipuadpUQSnjEfWmmhKT, offset: 0x30, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Axis*>*  ___OtBkSRoZDipuadpUQSnjEfWmmhKT;

/// @brief Field rPwACZfJLACrwqwEtIKPvjIiNfAl, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Element*>*  ___rPwACZfJLACrwqwEtIKPvjIiNfAl;

/// @brief Field tXmZbbNUIRimTmmpmrGVeMhKkkWe, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Button*>*  ___tXmZbbNUIRimTmmpmrGVeMhKkkWe;

/// @brief Field BcIHjgAgTzuwRNYnmdOSjVVsKoLgb, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Axis*>*  ___BcIHjgAgTzuwRNYnmdOSjVVsKoLgb;

/// @brief Field oRJzHewxlPoKRLRwCrQghslvKTSq, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ>*  ___oRJzHewxlPoKRLRwCrQghslvKTSq;

/// @brief Field NZCthpndnOzPXRbBaTnfGrONaVOz, offset: 0x58, size: 0x8, def value: None
 ::System::Action_2<int32_t,bool>*  ___NZCthpndnOzPXRbBaTnfGrONaVOz;

/// @brief Field cevXCIvGcUanyqqWGYAoctvNYTlJ, offset: 0x60, size: 0x8, def value: None
 ::System::Action_2<int32_t,float_t>*  ___cevXCIvGcUanyqqWGYAoctvNYTlJ;

/// @brief Field rKgzKCQgiRRVfDFWehuLTRuCEbJk, offset: 0x68, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___rKgzKCQgiRRVfDFWehuLTRuCEbJk;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PlayerController, ___ZZmoQcrKUzfPmEFcBluBKhyJkHZFA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController, ___otmtMQNUagHjtByJxHvEwkirsLtn) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController, ___GGKvqWOBQcYWIwHCncrFLQeJvZJc) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController, ___zllpElocLhlMJeXOLkAxcZIIIAzV) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController, ___plfGHWcVZbnxndOMikXPxzryKyOab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController, ___OtBkSRoZDipuadpUQSnjEfWmmhKT) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController, ___rPwACZfJLACrwqwEtIKPvjIiNfAl) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController, ___tXmZbbNUIRimTmmpmrGVeMhKkkWe) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController, ___BcIHjgAgTzuwRNYnmdOSjVVsKoLgb) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController, ___oRJzHewxlPoKRLRwCrQghslvKTSq) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController, ___NZCthpndnOzPXRbBaTnfGrONaVOz) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController, ___cevXCIvGcUanyqqWGYAoctvNYTlJ) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerController, ___rKgzKCQgiRRVfDFWehuLTRuCEbJk) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Rewired::PlayerController) == 0x70, "Size mismatch!");

} // namespace end def Rewired
