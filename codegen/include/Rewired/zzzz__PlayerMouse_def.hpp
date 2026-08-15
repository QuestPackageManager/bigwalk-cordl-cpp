#pragma once
// IWYU pragma private; include "Rewired/PlayerMouse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Utils/Classes/Data/zzzz__ScreenRect_def.hpp"
#include "Rewired/zzzz__PlayerController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerMouse)
namespace Rewired::UI {
class IMouseInputSource;
}
namespace Rewired::Utils::Classes::Data {
struct ScreenRect;
}
namespace Rewired {
class IPlayerController;
}
namespace Rewired {
class IPlayerMouse;
}
namespace Rewired {
class PlayerController_Axis;
}
namespace Rewired {
class PlayerController_Button;
}
namespace Rewired {
class PlayerController_MouseAxis;
}
namespace Rewired {
class PlayerController_MouseWheel;
}
namespace Rewired {
class PlayerMouse_Definition;
}
namespace Rewired {
class PlayerMouse_Factory;
}
namespace Rewired {
struct PlayerMouse_MovementAreaUnit;
}
namespace Rewired {
class PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace System {
template<typename T>
class Action_1;
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
struct PlayerMouse_MovementAreaUnit;
}
namespace Rewired {
class PlayerMouse;
}
namespace Rewired {
class PlayerMouse_Definition;
}
namespace Rewired {
class PlayerMouse_Factory;
}
namespace Rewired {
class PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE;
}
// Write type traits
MARK_VAL_T(::Rewired::PlayerMouse_MovementAreaUnit);
MARK_REF_T(::Rewired::PlayerMouse*);
MARK_REF_T(::Rewired::PlayerMouse_Definition*);
MARK_REF_T(::Rewired::PlayerMouse_Factory*);
MARK_REF_T(::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*);
DEFINE_IL2CPP_CLASS(::Rewired::PlayerMouse_MovementAreaUnit, "Rewired", "PlayerMouse/MovementAreaUnit");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerMouse*, "Rewired", "PlayerMouse");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerMouse_Definition*, "Rewired", "PlayerMouse/Definition");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerMouse_Factory*, "Rewired", "PlayerMouse/Factory");
DEFINE_IL2CPP_CLASS(::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*, "Rewired", "PlayerMouse/hYaEEjjjbISPnjzYFWkMeEahhmeBE");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.PlayerMouse/MovementAreaUnit
struct CORDL_TYPE PlayerMouse_MovementAreaUnit {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerMouse_MovementAreaUnit_Unwrapped
enum struct __PlayerMouse_MovementAreaUnit_Unwrapped : int32_t {
__E_Screen = static_cast<int32_t>(0x0),
__E_Pixel = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerMouse_MovementAreaUnit_Unwrapped () const noexcept {
return static_cast<__PlayerMouse_MovementAreaUnit_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerMouse_MovementAreaUnit() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerMouse_MovementAreaUnit(int32_t  value__) noexcept;

/// @brief Field Pixel value: I32(1)
static ::Rewired::PlayerMouse_MovementAreaUnit const Pixel;

/// @brief Field Screen value: I32(0)
static ::Rewired::PlayerMouse_MovementAreaUnit const Screen;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1931};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PlayerMouse_MovementAreaUnit, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::PlayerMouse_MovementAreaUnit) == 0x4, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.PlayerController::Definition, Rewired.PlayerMouse::MovementAreaUnit, Rewired.Utils.Classes.Data.ScreenRect
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerMouse/Definition
class CORDL_TYPE PlayerMouse_Definition : public ::Rewired::PlayerController_Definition {
public:
// Declarations
/// @brief Field clampToMovementArea, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_clampToMovementArea, put=__cordl_internal_set_clampToMovementArea)) bool  clampToMovementArea;

/// @brief Field defaultToCenter, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_defaultToCenter, put=__cordl_internal_set_defaultToCenter)) bool  defaultToCenter;

/// @brief Field movementArea, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get_movementArea, put=__cordl_internal_set_movementArea)) ::Rewired::Utils::Classes::Data::ScreenRect  movementArea;

/// @brief Field movementAreaUnit, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_movementAreaUnit, put=__cordl_internal_set_movementAreaUnit)) ::Rewired::PlayerMouse_MovementAreaUnit  movementAreaUnit;

/// @brief Field pointerSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_pointerSpeed, put=__cordl_internal_set_pointerSpeed)) float_t  pointerSpeed;

/// @brief Field useHardwarePointerPosition, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useHardwarePointerPosition, put=__cordl_internal_set_useHardwarePointerPosition)) bool  useHardwarePointerPosition;

static inline ::Rewired::PlayerMouse_Definition* New_ctor() ;

constexpr bool const& __cordl_internal_get_clampToMovementArea() const;

constexpr bool& __cordl_internal_get_clampToMovementArea() ;

constexpr bool const& __cordl_internal_get_defaultToCenter() const;

constexpr bool& __cordl_internal_get_defaultToCenter() ;

constexpr ::Rewired::Utils::Classes::Data::ScreenRect const& __cordl_internal_get_movementArea() const;

constexpr ::Rewired::Utils::Classes::Data::ScreenRect& __cordl_internal_get_movementArea() ;

constexpr ::Rewired::PlayerMouse_MovementAreaUnit const& __cordl_internal_get_movementAreaUnit() const;

constexpr ::Rewired::PlayerMouse_MovementAreaUnit& __cordl_internal_get_movementAreaUnit() ;

constexpr float_t const& __cordl_internal_get_pointerSpeed() const;

constexpr float_t& __cordl_internal_get_pointerSpeed() ;

constexpr bool const& __cordl_internal_get_useHardwarePointerPosition() const;

constexpr bool& __cordl_internal_get_useHardwarePointerPosition() ;

constexpr void __cordl_internal_set_clampToMovementArea(bool  value) ;

constexpr void __cordl_internal_set_defaultToCenter(bool  value) ;

constexpr void __cordl_internal_set_movementArea(::Rewired::Utils::Classes::Data::ScreenRect  value) ;

constexpr void __cordl_internal_set_movementAreaUnit(::Rewired::PlayerMouse_MovementAreaUnit  value) ;

constexpr void __cordl_internal_set_pointerSpeed(float_t  value) ;

constexpr void __cordl_internal_set_useHardwarePointerPosition(bool  value) ;

/// @brief Method .ctor, addr 0x18195cbb0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerMouse_Definition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerMouse_Definition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerMouse_Definition(PlayerMouse_Definition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerMouse_Definition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerMouse_Definition(PlayerMouse_Definition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1929};

/// @brief Field defaultToCenter, offset: 0x20, size: 0x1, def value: None
 bool  ___defaultToCenter;

/// @brief Field clampToMovementArea, offset: 0x21, size: 0x1, def value: None
 bool  ___clampToMovementArea;

/// @brief Field movementArea, offset: 0x24, size: 0x10, def value: None
 ::Rewired::Utils::Classes::Data::ScreenRect  ___movementArea;

/// @brief Field movementAreaUnit, offset: 0x34, size: 0x4, def value: None
 ::Rewired::PlayerMouse_MovementAreaUnit  ___movementAreaUnit;

/// @brief Field pointerSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ___pointerSpeed;

/// @brief Field useHardwarePointerPosition, offset: 0x3c, size: 0x1, def value: None
 bool  ___useHardwarePointerPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PlayerMouse_Definition, ___defaultToCenter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse_Definition, ___clampToMovementArea) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse_Definition, ___movementArea) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse_Definition, ___movementAreaUnit) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse_Definition, ___pointerSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse_Definition, ___useHardwarePointerPosition) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Rewired::PlayerMouse_Definition) == 0x40, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerMouse/Factory
class CORDL_TYPE PlayerMouse_Factory : public ::System::Object {
public:
// Declarations
/// @brief Method Create, addr 0x18195d800, size 0x10, virtual false, abstract: false, final false
static inline ::Rewired::PlayerMouse* Create() ;

/// @brief Method Create, addr 0x18195d7c0, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::PlayerMouse* Create(::Rewired::PlayerMouse_Definition*  definition) ;

/// @brief Method YMlYmmpzeHlJbofXifEJOyjKghg, addr 0x18195d810, size 0x6e0, virtual false, abstract: false, final false
static inline ::Rewired::PlayerMouse* YMlYmmpzeHlJbofXifEJOyjKghg(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerMouse_Factory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerMouse_Factory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerMouse_Factory(PlayerMouse_Factory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerMouse_Factory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerMouse_Factory(PlayerMouse_Factory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1930};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::PlayerMouse_Factory) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerMouse/hYaEEjjjbISPnjzYFWkMeEahhmeBE
class CORDL_TYPE PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*  __9;

/// @brief Field <>9__18_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_0, put=setStaticF___9__18_0)) ::System::Predicate_1<::Rewired::PlayerController_Axis*>*  __9__18_0;

/// @brief Field <>9__18_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_1, put=setStaticF___9__18_1)) ::System::Predicate_1<::Rewired::PlayerController_Axis*>*  __9__18_1;

/// @brief Method MPdqJcGblTNSQWrUNXIQQfstJsog, addr 0x18196d670, size 0x60, virtual false, abstract: false, final false
inline bool MPdqJcGblTNSQWrUNXIQQfstJsog(::Rewired::PlayerController_Axis*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE* getStaticF___9() ;

static inline ::System::Predicate_1<::Rewired::PlayerController_Axis*>* getStaticF___9__18_0() ;

static inline ::System::Predicate_1<::Rewired::PlayerController_Axis*>* getStaticF___9__18_1() ;

/// @brief Method hqKMmoXRSJMOzgCsJuzALWvSJTlA, addr 0x18196d670, size 0x60, virtual false, abstract: false, final false
inline bool hqKMmoXRSJMOzgCsJuzALWvSJTlA(::Rewired::PlayerController_Axis*  _cordl_fixed_empty_name_whitespace) ;

static inline void setStaticF___9(::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*  value) ;

static inline void setStaticF___9__18_0(::System::Predicate_1<::Rewired::PlayerController_Axis*>*  value) ;

static inline void setStaticF___9__18_1(::System::Predicate_1<::Rewired::PlayerController_Axis*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE(PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE(PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1932};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.PlayerController, Rewired.PlayerMouse::MovementAreaUnit, Rewired.Utils.Classes.Data.ScreenRect, UnityEngine.Vector2
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerMouse
class CORDL_TYPE PlayerMouse : public ::Rewired::PlayerController {
public:
// Declarations
using Definition = ::Rewired::PlayerMouse_Definition;

using Factory = ::Rewired::PlayerMouse_Factory;

using MovementAreaUnit = ::Rewired::PlayerMouse_MovementAreaUnit;

using hYaEEjjjbISPnjzYFWkMeEahhmeBE = ::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE;

/// @brief Field GDhvrGIrTxtahsNpOlPaQMJktVXq, offset 0xa4, size 0x8 
 __declspec(property(get=__cordl_internal_get_GDhvrGIrTxtahsNpOlPaQMJktVXq, put=__cordl_internal_set_GDhvrGIrTxtahsNpOlPaQMJktVXq)) ::UnityEngine::Vector2  GDhvrGIrTxtahsNpOlPaQMJktVXq;

/// @brief Field HVvcpEeyGHaRmKsFuLLsazjuhIDC, offset 0xcc, size 0x10 
 __declspec(property(get=__cordl_internal_get_HVvcpEeyGHaRmKsFuLLsazjuhIDC, put=__cordl_internal_set_HVvcpEeyGHaRmKsFuLLsazjuhIDC)) ::Rewired::Utils::Classes::Data::ScreenRect  HVvcpEeyGHaRmKsFuLLsazjuhIDC;

/// @brief Field IwUoWwGWPFaAhWlbgErOIlUOMhpt, offset 0x8c, size 0x8 
 __declspec(property(get=__cordl_internal_get_IwUoWwGWPFaAhWlbgErOIlUOMhpt, put=__cordl_internal_set_IwUoWwGWPFaAhWlbgErOIlUOMhpt)) ::UnityEngine::Vector2  IwUoWwGWPFaAhWlbgErOIlUOMhpt;

/// @brief Field JEjWEIEaJKeinxOrHZhaTdKjmwOe, offset 0x94, size 0x8 
 __declspec(property(get=__cordl_internal_get_JEjWEIEaJKeinxOrHZhaTdKjmwOe, put=__cordl_internal_set_JEjWEIEaJKeinxOrHZhaTdKjmwOe)) ::UnityEngine::Vector2  JEjWEIEaJKeinxOrHZhaTdKjmwOe;

/// @brief Field MwLtRhatJOgryIcpauGnEmbMRSUA, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_MwLtRhatJOgryIcpauGnEmbMRSUA, put=__cordl_internal_set_MwLtRhatJOgryIcpauGnEmbMRSUA)) bool  MwLtRhatJOgryIcpauGnEmbMRSUA;

/// @brief Field RGtDwpbXCJpurOMyIhyTcBSXHZLlA, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_RGtDwpbXCJpurOMyIhyTcBSXHZLlA, put=__cordl_internal_set_RGtDwpbXCJpurOMyIhyTcBSXHZLlA)) int32_t  RGtDwpbXCJpurOMyIhyTcBSXHZLlA;

 __declspec(property(get=Rewired_UI_IMouseInputSource_get_enabled)) bool  Rewired_UI_IMouseInputSource_enabled;

 __declspec(property(get=Rewired_UI_IMouseInputSource_get_locked)) bool  Rewired_UI_IMouseInputSource_locked;

 __declspec(property(get=Rewired_UI_IMouseInputSource_get_screenPosition)) ::UnityEngine::Vector2  Rewired_UI_IMouseInputSource_screenPosition;

 __declspec(property(get=Rewired_UI_IMouseInputSource_get_screenPositionDelta)) ::UnityEngine::Vector2  Rewired_UI_IMouseInputSource_screenPositionDelta;

 __declspec(property(get=Rewired_UI_IMouseInputSource_get_wheelDelta)) ::UnityEngine::Vector2  Rewired_UI_IMouseInputSource_wheelDelta;

/// @brief Field UtADntcSlutEQeJspwSueNlOewcuA, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_UtADntcSlutEQeJspwSueNlOewcuA, put=__cordl_internal_set_UtADntcSlutEQeJspwSueNlOewcuA)) int32_t  UtADntcSlutEQeJspwSueNlOewcuA;

/// @brief Field WCZnSRjScOBFfTcJeTjOJCPWDEUK, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_WCZnSRjScOBFfTcJeTjOJCPWDEUK, put=__cordl_internal_set_WCZnSRjScOBFfTcJeTjOJCPWDEUK)) ::System::Action_1<::UnityEngine::Vector2>*  WCZnSRjScOBFfTcJeTjOJCPWDEUK;

/// @brief Field WNWuCigcveEFhMVbuapWpsEsdhFFA, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_WNWuCigcveEFhMVbuapWpsEsdhFFA, put=__cordl_internal_set_WNWuCigcveEFhMVbuapWpsEsdhFFA)) int32_t  WNWuCigcveEFhMVbuapWpsEsdhFFA;

/// @brief Field WzDLKslXzaSudYoCtGiApJEoqCOS, offset 0xac, size 0x8 
 __declspec(property(get=__cordl_internal_get_WzDLKslXzaSudYoCtGiApJEoqCOS, put=__cordl_internal_set_WzDLKslXzaSudYoCtGiApJEoqCOS)) ::UnityEngine::Vector2  WzDLKslXzaSudYoCtGiApJEoqCOS;

/// @brief Field ZrlsCvFKbthBoBDkhkkOYYxhuMuo, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_ZrlsCvFKbthBoBDkhkkOYYxhuMuo, put=setStaticF_ZrlsCvFKbthBoBDkhkkOYYxhuMuo)) ::Rewired::Utils::Classes::Data::ScreenRect  ZrlsCvFKbthBoBDkhkkOYYxhuMuo;

/// @brief Field aVQBIeUaXFDbXeBIcPZRdKmoiims, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_aVQBIeUaXFDbXeBIcPZRdKmoiims, put=__cordl_internal_set_aVQBIeUaXFDbXeBIcPZRdKmoiims)) float_t  aVQBIeUaXFDbXeBIcPZRdKmoiims;

/// @brief Field bfjBTZiDUhsvlABZFwvuPwteEdoW, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_bfjBTZiDUhsvlABZFwvuPwteEdoW, put=__cordl_internal_set_bfjBTZiDUhsvlABZFwvuPwteEdoW)) bool  bfjBTZiDUhsvlABZFwvuPwteEdoW;

 __declspec(property(get=get_clampToMovementArea, put=set_clampToMovementArea)) bool  clampToMovementArea;

 __declspec(property(get=get_defaultToCenter, put=set_defaultToCenter)) bool  defaultToCenter;

/// @brief Field eIvqTNHEPxNQOvsNMXVCbdcUNcrJ, offset 0xdc, size 0x1 
 __declspec(property(get=__cordl_internal_get_eIvqTNHEPxNQOvsNMXVCbdcUNcrJ, put=__cordl_internal_set_eIvqTNHEPxNQOvsNMXVCbdcUNcrJ)) bool  eIvqTNHEPxNQOvsNMXVCbdcUNcrJ;

/// @brief Field eOGVnDZwdcJbZfwxyqLyLrskaMsb, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_eOGVnDZwdcJbZfwxyqLyLrskaMsb, put=__cordl_internal_set_eOGVnDZwdcJbZfwxyqLyLrskaMsb)) bool  eOGVnDZwdcJbZfwxyqLyLrskaMsb;

/// @brief Field kfwQkxVujEMcSrdLoFfuGkuLiZsI, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_kfwQkxVujEMcSrdLoFfuGkuLiZsI, put=__cordl_internal_set_kfwQkxVujEMcSrdLoFfuGkuLiZsI)) int32_t  kfwQkxVujEMcSrdLoFfuGkuLiZsI;

 __declspec(property(get=get_leftButton)) ::Rewired::PlayerController_Button*  leftButton;

 __declspec(property(get=get_middleButton)) ::Rewired::PlayerController_Button*  middleButton;

 __declspec(property(get=get_movementArea, put=set_movementArea)) ::Rewired::Utils::Classes::Data::ScreenRect  movementArea;

 __declspec(property(get=get_movementAreaUnit, put=set_movementAreaUnit)) ::Rewired::PlayerMouse_MovementAreaUnit  movementAreaUnit;

/// @brief Field oNNHSgQwCsJKJsWwVGydlzjCkUXx, offset 0x9c, size 0x8 
 __declspec(property(get=__cordl_internal_get_oNNHSgQwCsJKJsWwVGydlzjCkUXx, put=__cordl_internal_set_oNNHSgQwCsJKJsWwVGydlzjCkUXx)) ::UnityEngine::Vector2  oNNHSgQwCsJKJsWwVGydlzjCkUXx;

 __declspec(property(get=get_pointerSpeed, put=set_pointerSpeed)) float_t  pointerSpeed;

 __declspec(property(get=get_rightButton)) ::Rewired::PlayerController_Button*  rightButton;

 __declspec(property(get=get_screenPosition, put=set_screenPosition)) ::UnityEngine::Vector2  screenPosition;

 __declspec(property(get=get_screenPositionDelta)) ::UnityEngine::Vector2  screenPositionDelta;

 __declspec(property(get=get_screenPositionPrev)) ::UnityEngine::Vector2  screenPositionPrev;

 __declspec(property(get=get_useHardwarePointerPosition, put=set_useHardwarePointerPosition)) bool  useHardwarePointerPosition;

 __declspec(property(get=get_wheel)) ::Rewired::PlayerController_MouseWheel*  wheel;

 __declspec(property(get=get_xAxis)) ::Rewired::PlayerController_MouseAxis*  xAxis;

 __declspec(property(get=get_yAxis)) ::Rewired::PlayerController_MouseAxis*  yAxis;

/// @brief Field yRDWiHVTdvachRcJFiebiUFQGdSCA, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_yRDWiHVTdvachRcJFiebiUFQGdSCA, put=__cordl_internal_set_yRDWiHVTdvachRcJFiebiUFQGdSCA)) ::Rewired::PlayerMouse_MovementAreaUnit  yRDWiHVTdvachRcJFiebiUFQGdSCA;

/// @brief Field ysLRpgqfCvhlHgMouauUICyvvRoAA, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ysLRpgqfCvhlHgMouauUICyvvRoAA, put=__cordl_internal_set_ysLRpgqfCvhlHgMouauUICyvvRoAA)) int32_t  ysLRpgqfCvhlHgMouauUICyvvRoAA;

/// @brief Field yxjZuSyqSNxSRtBDzQqBHRchvDpW, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_yxjZuSyqSNxSRtBDzQqBHRchvDpW, put=__cordl_internal_set_yxjZuSyqSNxSRtBDzQqBHRchvDpW)) int32_t  yxjZuSyqSNxSRtBDzQqBHRchvDpW;

/// @brief Convert operator to "::Rewired::IPlayerController"
constexpr operator  ::Rewired::IPlayerController*() noexcept;

/// @brief Convert operator to "::Rewired::IPlayerMouse"
constexpr operator  ::Rewired::IPlayerMouse*() noexcept;

/// @brief Convert operator to "::Rewired::UI::IMouseInputSource"
constexpr operator  ::Rewired::UI::IMouseInputSource*() noexcept;

/// @brief Method ClearVars, addr 0x1819649c0, size 0x50, virtual true, abstract: false, final false
inline void ClearVars() ;

static inline ::Rewired::PlayerMouse* New_ctor(::Rewired::PlayerMouse_Definition*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Rewired.UI.IMouseInputSource.GetButton, addr 0x181964a30, size 0x10, virtual true, abstract: false, final true
inline bool Rewired_UI_IMouseInputSource_GetButton(int32_t  button) ;

/// @brief Method Rewired.UI.IMouseInputSource.GetButtonDown, addr 0x181964a10, size 0x10, virtual true, abstract: false, final true
inline bool Rewired_UI_IMouseInputSource_GetButtonDown(int32_t  button) ;

/// @brief Method Rewired.UI.IMouseInputSource.GetButtonUp, addr 0x181964a20, size 0x10, virtual true, abstract: false, final true
inline bool Rewired_UI_IMouseInputSource_GetButtonUp(int32_t  button) ;

/// @brief Method Rewired.UI.IMouseInputSource.get_enabled, addr 0x181964a40, size 0x10, virtual true, abstract: false, final true
inline bool Rewired_UI_IMouseInputSource_get_enabled() ;

/// @brief Method Rewired.UI.IMouseInputSource.get_locked, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool Rewired_UI_IMouseInputSource_get_locked() ;

/// @brief Method Rewired.UI.IMouseInputSource.get_screenPosition, addr 0x1813ec930, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 Rewired_UI_IMouseInputSource_get_screenPosition() ;

/// @brief Method Rewired.UI.IMouseInputSource.get_screenPositionDelta, addr 0x1817d59c0, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 Rewired_UI_IMouseInputSource_get_screenPositionDelta() ;

/// @brief Method Rewired.UI.IMouseInputSource.get_wheelDelta, addr 0x181964a50, size 0x60, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 Rewired_UI_IMouseInputSource_get_wheelDelta() ;

/// @brief Method Update, addr 0x181964ba0, size 0x280, virtual true, abstract: false, final false
inline bool Update(::Rewired::UpdateLoopType  updateLoop) ;

/// @brief Method UpdateFinished, addr 0x181964ab0, size 0xf0, virtual true, abstract: false, final false
inline void UpdateFinished() ;

/// @brief Method XBFUgXdbnZCAnfHZWKaTZYOTkVTQ, addr 0x181964e20, size 0x160, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::ScreenRect XBFUgXdbnZCAnfHZWKaTZYOTkVTQ() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_GDhvrGIrTxtahsNpOlPaQMJktVXq() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_GDhvrGIrTxtahsNpOlPaQMJktVXq() ;

constexpr ::Rewired::Utils::Classes::Data::ScreenRect const& __cordl_internal_get_HVvcpEeyGHaRmKsFuLLsazjuhIDC() const;

constexpr ::Rewired::Utils::Classes::Data::ScreenRect& __cordl_internal_get_HVvcpEeyGHaRmKsFuLLsazjuhIDC() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_IwUoWwGWPFaAhWlbgErOIlUOMhpt() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_IwUoWwGWPFaAhWlbgErOIlUOMhpt() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_JEjWEIEaJKeinxOrHZhaTdKjmwOe() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_JEjWEIEaJKeinxOrHZhaTdKjmwOe() ;

constexpr bool const& __cordl_internal_get_MwLtRhatJOgryIcpauGnEmbMRSUA() const;

constexpr bool& __cordl_internal_get_MwLtRhatJOgryIcpauGnEmbMRSUA() ;

constexpr int32_t const& __cordl_internal_get_RGtDwpbXCJpurOMyIhyTcBSXHZLlA() const;

constexpr int32_t& __cordl_internal_get_RGtDwpbXCJpurOMyIhyTcBSXHZLlA() ;

constexpr int32_t const& __cordl_internal_get_UtADntcSlutEQeJspwSueNlOewcuA() const;

constexpr int32_t& __cordl_internal_get_UtADntcSlutEQeJspwSueNlOewcuA() ;

constexpr ::System::Action_1<::UnityEngine::Vector2>* const& __cordl_internal_get_WCZnSRjScOBFfTcJeTjOJCPWDEUK() const;

constexpr ::System::Action_1<::UnityEngine::Vector2>*& __cordl_internal_get_WCZnSRjScOBFfTcJeTjOJCPWDEUK() ;

constexpr int32_t const& __cordl_internal_get_WNWuCigcveEFhMVbuapWpsEsdhFFA() const;

constexpr int32_t& __cordl_internal_get_WNWuCigcveEFhMVbuapWpsEsdhFFA() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_WzDLKslXzaSudYoCtGiApJEoqCOS() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_WzDLKslXzaSudYoCtGiApJEoqCOS() ;

constexpr float_t const& __cordl_internal_get_aVQBIeUaXFDbXeBIcPZRdKmoiims() const;

constexpr float_t& __cordl_internal_get_aVQBIeUaXFDbXeBIcPZRdKmoiims() ;

constexpr bool const& __cordl_internal_get_bfjBTZiDUhsvlABZFwvuPwteEdoW() const;

constexpr bool& __cordl_internal_get_bfjBTZiDUhsvlABZFwvuPwteEdoW() ;

constexpr bool const& __cordl_internal_get_eIvqTNHEPxNQOvsNMXVCbdcUNcrJ() const;

constexpr bool& __cordl_internal_get_eIvqTNHEPxNQOvsNMXVCbdcUNcrJ() ;

constexpr bool const& __cordl_internal_get_eOGVnDZwdcJbZfwxyqLyLrskaMsb() const;

constexpr bool& __cordl_internal_get_eOGVnDZwdcJbZfwxyqLyLrskaMsb() ;

constexpr int32_t const& __cordl_internal_get_kfwQkxVujEMcSrdLoFfuGkuLiZsI() const;

constexpr int32_t& __cordl_internal_get_kfwQkxVujEMcSrdLoFfuGkuLiZsI() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_oNNHSgQwCsJKJsWwVGydlzjCkUXx() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_oNNHSgQwCsJKJsWwVGydlzjCkUXx() ;

constexpr ::Rewired::PlayerMouse_MovementAreaUnit const& __cordl_internal_get_yRDWiHVTdvachRcJFiebiUFQGdSCA() const;

constexpr ::Rewired::PlayerMouse_MovementAreaUnit& __cordl_internal_get_yRDWiHVTdvachRcJFiebiUFQGdSCA() ;

constexpr int32_t const& __cordl_internal_get_ysLRpgqfCvhlHgMouauUICyvvRoAA() const;

constexpr int32_t& __cordl_internal_get_ysLRpgqfCvhlHgMouauUICyvvRoAA() ;

constexpr int32_t const& __cordl_internal_get_yxjZuSyqSNxSRtBDzQqBHRchvDpW() const;

constexpr int32_t& __cordl_internal_get_yxjZuSyqSNxSRtBDzQqBHRchvDpW() ;

constexpr void __cordl_internal_set_GDhvrGIrTxtahsNpOlPaQMJktVXq(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_HVvcpEeyGHaRmKsFuLLsazjuhIDC(::Rewired::Utils::Classes::Data::ScreenRect  value) ;

constexpr void __cordl_internal_set_IwUoWwGWPFaAhWlbgErOIlUOMhpt(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_JEjWEIEaJKeinxOrHZhaTdKjmwOe(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_MwLtRhatJOgryIcpauGnEmbMRSUA(bool  value) ;

constexpr void __cordl_internal_set_RGtDwpbXCJpurOMyIhyTcBSXHZLlA(int32_t  value) ;

constexpr void __cordl_internal_set_UtADntcSlutEQeJspwSueNlOewcuA(int32_t  value) ;

constexpr void __cordl_internal_set_WCZnSRjScOBFfTcJeTjOJCPWDEUK(::System::Action_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_WNWuCigcveEFhMVbuapWpsEsdhFFA(int32_t  value) ;

constexpr void __cordl_internal_set_WzDLKslXzaSudYoCtGiApJEoqCOS(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_aVQBIeUaXFDbXeBIcPZRdKmoiims(float_t  value) ;

constexpr void __cordl_internal_set_bfjBTZiDUhsvlABZFwvuPwteEdoW(bool  value) ;

constexpr void __cordl_internal_set_eIvqTNHEPxNQOvsNMXVCbdcUNcrJ(bool  value) ;

constexpr void __cordl_internal_set_eOGVnDZwdcJbZfwxyqLyLrskaMsb(bool  value) ;

constexpr void __cordl_internal_set_kfwQkxVujEMcSrdLoFfuGkuLiZsI(int32_t  value) ;

constexpr void __cordl_internal_set_oNNHSgQwCsJKJsWwVGydlzjCkUXx(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_yRDWiHVTdvachRcJFiebiUFQGdSCA(::Rewired::PlayerMouse_MovementAreaUnit  value) ;

constexpr void __cordl_internal_set_ysLRpgqfCvhlHgMouauUICyvvRoAA(int32_t  value) ;

constexpr void __cordl_internal_set_yxjZuSyqSNxSRtBDzQqBHRchvDpW(int32_t  value) ;

/// @brief Method .ctor, addr 0x181964fe0, size 0xaf0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::PlayerMouse_Definition*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method add_ScreenPositionChangedEvent, addr 0x181965ad0, size 0xf0, virtual true, abstract: false, final true
inline void add_ScreenPositionChangedEvent(::System::Action_1<::UnityEngine::Vector2>*  value) ;

static inline ::Rewired::Utils::Classes::Data::ScreenRect getStaticF_ZrlsCvFKbthBoBDkhkkOYYxhuMuo() ;

/// @brief Method get_clampToMovementArea, addr 0x181965bc0, size 0x10, virtual false, abstract: false, final false
inline bool get_clampToMovementArea() ;

/// @brief Method get_defaultToCenter, addr 0x181965bd0, size 0x60, virtual true, abstract: false, final true
inline bool get_defaultToCenter() ;

/// @brief Method get_leftButton, addr 0x181965c30, size 0x80, virtual true, abstract: false, final true
inline ::Rewired::PlayerController_Button* get_leftButton() ;

/// @brief Method get_middleButton, addr 0x181965cb0, size 0x90, virtual true, abstract: false, final true
inline ::Rewired::PlayerController_Button* get_middleButton() ;

/// @brief Method get_movementArea, addr 0x181965da0, size 0x80, virtual true, abstract: false, final true
inline ::Rewired::Utils::Classes::Data::ScreenRect get_movementArea() ;

/// @brief Method get_movementAreaUnit, addr 0x181965d40, size 0x60, virtual true, abstract: false, final true
inline ::Rewired::PlayerMouse_MovementAreaUnit get_movementAreaUnit() ;

/// @brief Method get_pointerSpeed, addr 0x181965e20, size 0x60, virtual true, abstract: false, final true
inline float_t get_pointerSpeed() ;

/// @brief Method get_rightButton, addr 0x181965e80, size 0x90, virtual true, abstract: false, final true
inline ::Rewired::PlayerController_Button* get_rightButton() ;

/// @brief Method get_screenPosition, addr 0x181966010, size 0x80, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_screenPosition() ;

/// @brief Method get_screenPositionDelta, addr 0x181965f10, size 0x80, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_screenPositionDelta() ;

/// @brief Method get_screenPositionPrev, addr 0x181965f90, size 0x80, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_screenPositionPrev() ;

/// @brief Method get_useHardwarePointerPosition, addr 0x181966090, size 0x60, virtual true, abstract: false, final true
inline bool get_useHardwarePointerPosition() ;

/// @brief Method get_wheel, addr 0x1819660f0, size 0xa0, virtual true, abstract: false, final true
inline ::Rewired::PlayerController_MouseWheel* get_wheel() ;

/// @brief Method get_xAxis, addr 0x181966190, size 0xc0, virtual true, abstract: false, final true
inline ::Rewired::PlayerController_MouseAxis* get_xAxis() ;

/// @brief Method get_yAxis, addr 0x181966250, size 0xc0, virtual true, abstract: false, final true
inline ::Rewired::PlayerController_MouseAxis* get_yAxis() ;

/// @brief Convert to "::Rewired::IPlayerController"
constexpr ::Rewired::IPlayerController* i___Rewired__IPlayerController() noexcept;

/// @brief Convert to "::Rewired::IPlayerMouse"
constexpr ::Rewired::IPlayerMouse* i___Rewired__IPlayerMouse() noexcept;

/// @brief Convert to "::Rewired::UI::IMouseInputSource"
constexpr ::Rewired::UI::IMouseInputSource* i___Rewired__UI__IMouseInputSource() noexcept;

/// @brief Method pxwdQCamFsekbqEFVSHiuOWVZMCBA, addr 0x181966310, size 0x90, virtual false, abstract: false, final false
static inline float_t pxwdQCamFsekbqEFVSHiuOWVZMCBA(::Rewired::PlayerController_Axis*  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method remove_ScreenPositionChangedEvent, addr 0x1819663a0, size 0xa0, virtual true, abstract: false, final true
inline void remove_ScreenPositionChangedEvent(::System::Action_1<::UnityEngine::Vector2>*  value) ;

static inline void setStaticF_ZrlsCvFKbthBoBDkhkkOYYxhuMuo(::Rewired::Utils::Classes::Data::ScreenRect  value) ;

/// @brief Method set_clampToMovementArea, addr 0x181966440, size 0x10, virtual false, abstract: false, final false
inline void set_clampToMovementArea(bool  value) ;

/// @brief Method set_defaultToCenter, addr 0x180f18e30, size 0xedb0, virtual false, abstract: false, final false
inline void set_defaultToCenter(bool  value) ;

/// @brief Method set_movementArea, addr 0x18051e910, size 0x10, virtual true, abstract: false, final true
inline void set_movementArea(::Rewired::Utils::Classes::Data::ScreenRect  value) ;

/// @brief Method set_movementAreaUnit, addr 0x1813eff50, size 0x10, virtual true, abstract: false, final true
inline void set_movementAreaUnit(::Rewired::PlayerMouse_MovementAreaUnit  value) ;

/// @brief Method set_pointerSpeed, addr 0x181966450, size 0x70, virtual false, abstract: false, final false
inline void set_pointerSpeed(float_t  value) ;

/// @brief Method set_screenPosition, addr 0x1819664c0, size 0x10, virtual false, abstract: false, final false
inline void set_screenPosition(::UnityEngine::Vector2  value) ;

/// @brief Method set_useHardwarePointerPosition, addr 0x1819664d0, size 0x80, virtual false, abstract: false, final false
inline void set_useHardwarePointerPosition(bool  value) ;

/// @brief Method usSWBgmLsTTcYVeLeavfZVVJePvH, addr 0x181966550, size 0x170, virtual false, abstract: false, final false
inline void usSWBgmLsTTcYVeLeavfZVVJePvH(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method wtmIoKYiuDJKMUcXfyNlRgLGeUht, addr 0x1819666c0, size 0x20, virtual false, abstract: false, final false
inline void wtmIoKYiuDJKMUcXfyNlRgLGeUht() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerMouse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerMouse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerMouse(PlayerMouse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerMouse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerMouse(PlayerMouse const& ) = delete;

/// @brief Field AttlQnjDELhSqypqHvAKCbfZVbHl offset 0xffffffff size 0x8
static constexpr ::ConstString  AttlQnjDELhSqypqHvAKCbfZVbHl{u"Vertical"};

/// @brief Field FhuqTRfUmDAqxvKsceXfwsVSZQqw offset 0xffffffff size 0x8
static constexpr ::ConstString  FhuqTRfUmDAqxvKsceXfwsVSZQqw{u"Wheel Horizontal"};

/// @brief Field HKxZAgoUDFweLNcbHWNtGfbzjeWo offset 0xffffffff size 0x4
static constexpr float_t  HKxZAgoUDFweLNcbHWNtGfbzjeWo{static_cast<float_t>(1.0f)};

/// @brief Field HqvAIbfCGupZVIshIWiptmKJMAaJA offset 0xffffffff size 0x1
static constexpr bool  HqvAIbfCGupZVIshIWiptmKJMAaJA{true};

/// @brief Field JTmzxkSHtWzJhCsMBPDCfyeDHBem offset 0xffffffff size 0x8
static constexpr ::ConstString  JTmzxkSHtWzJhCsMBPDCfyeDHBem{u"Left Button"};

/// @brief Field MSdWtxDamIwOnfuWBEHDuaUgcJeGA offset 0xffffffff size 0x4
static constexpr int32_t  MSdWtxDamIwOnfuWBEHDuaUgcJeGA{static_cast<int32_t>(0x3)};

/// @brief Field TRfyQWdUChGowPbCseGeWMaKtRMT value: I32(0)
static ::Rewired::PlayerMouse_MovementAreaUnit const TRfyQWdUChGowPbCseGeWMaKtRMT;

/// @brief Field TlQddZlGyHgHIIitcqNiEDESjVDBA offset 0xffffffff size 0x8
static constexpr ::ConstString  TlQddZlGyHgHIIitcqNiEDESjVDBA{u"Wheel Vertical"};

/// @brief Field XzxDnDlQnqhKIpVQlYglkaTweVCK offset 0xffffffff size 0x8
static constexpr ::ConstString  XzxDnDlQnqhKIpVQlYglkaTweVCK{u"Movement"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1933};

/// @brief Field aeUFyhveAvehHljVNgojxHPvVmhE offset 0xffffffff size 0x8
static constexpr ::ConstString  aeUFyhveAvehHljVNgojxHPvVmhE{u"Horizontal"};

/// @brief Field bMfVFVtRAiSKxkaVuxHVQbSRclMo offset 0xffffffff size 0x4
static constexpr int32_t  bMfVFVtRAiSKxkaVuxHVQbSRclMo{static_cast<int32_t>(0x3)};

/// @brief Field cVHRPnvhAXSkfvTCxTovlAkcoXmu offset 0xffffffff size 0x8
static constexpr ::ConstString  cVHRPnvhAXSkfvTCxTovlAkcoXmu{u"Right Button"};

/// @brief Field eogqwkPlVidghPZsBqQIaGlJIHsM offset 0xffffffff size 0x1
static constexpr bool  eogqwkPlVidghPZsBqQIaGlJIHsM{true};

/// @brief Field tpgcqvKdLAMqVZadYFdQaVZnFavfb offset 0xffffffff size 0x1
static constexpr bool  tpgcqvKdLAMqVZadYFdQaVZnFavfb{true};

/// @brief Field xDCqrYZaYvxwxZeWEnlbIknaGtvbA offset 0xffffffff size 0x8
static constexpr ::ConstString  xDCqrYZaYvxwxZeWEnlbIknaGtvbA{u"Middle Button"};

/// @brief Field yLkaKkIClvyetqFHgkfcwdGBvHMFA offset 0xffffffff size 0x8
static constexpr ::ConstString  yLkaKkIClvyetqFHgkfcwdGBvHMFA{u"Wheel"};

/// @brief Field kfwQkxVujEMcSrdLoFfuGkuLiZsI, offset: 0x70, size: 0x4, def value: None
 int32_t  ___kfwQkxVujEMcSrdLoFfuGkuLiZsI;

/// @brief Field RGtDwpbXCJpurOMyIhyTcBSXHZLlA, offset: 0x74, size: 0x4, def value: None
 int32_t  ___RGtDwpbXCJpurOMyIhyTcBSXHZLlA;

/// @brief Field UtADntcSlutEQeJspwSueNlOewcuA, offset: 0x78, size: 0x4, def value: None
 int32_t  ___UtADntcSlutEQeJspwSueNlOewcuA;

/// @brief Field ysLRpgqfCvhlHgMouauUICyvvRoAA, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___ysLRpgqfCvhlHgMouauUICyvvRoAA;

/// @brief Field yxjZuSyqSNxSRtBDzQqBHRchvDpW, offset: 0x80, size: 0x4, def value: None
 int32_t  ___yxjZuSyqSNxSRtBDzQqBHRchvDpW;

/// @brief Field WNWuCigcveEFhMVbuapWpsEsdhFFA, offset: 0x84, size: 0x4, def value: None
 int32_t  ___WNWuCigcveEFhMVbuapWpsEsdhFFA;

/// @brief Field bfjBTZiDUhsvlABZFwvuPwteEdoW, offset: 0x88, size: 0x1, def value: None
 bool  ___bfjBTZiDUhsvlABZFwvuPwteEdoW;

/// @brief Field IwUoWwGWPFaAhWlbgErOIlUOMhpt, offset: 0x8c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___IwUoWwGWPFaAhWlbgErOIlUOMhpt;

/// @brief Field JEjWEIEaJKeinxOrHZhaTdKjmwOe, offset: 0x94, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___JEjWEIEaJKeinxOrHZhaTdKjmwOe;

/// @brief Field oNNHSgQwCsJKJsWwVGydlzjCkUXx, offset: 0x9c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___oNNHSgQwCsJKJsWwVGydlzjCkUXx;

/// @brief Field GDhvrGIrTxtahsNpOlPaQMJktVXq, offset: 0xa4, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___GDhvrGIrTxtahsNpOlPaQMJktVXq;

/// @brief Field WzDLKslXzaSudYoCtGiApJEoqCOS, offset: 0xac, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___WzDLKslXzaSudYoCtGiApJEoqCOS;

/// @brief Field aVQBIeUaXFDbXeBIcPZRdKmoiims, offset: 0xb4, size: 0x4, def value: None
 float_t  ___aVQBIeUaXFDbXeBIcPZRdKmoiims;

/// @brief Field MwLtRhatJOgryIcpauGnEmbMRSUA, offset: 0xb8, size: 0x1, def value: None
 bool  ___MwLtRhatJOgryIcpauGnEmbMRSUA;

/// @brief Field WCZnSRjScOBFfTcJeTjOJCPWDEUK, offset: 0xc0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Vector2>*  ___WCZnSRjScOBFfTcJeTjOJCPWDEUK;

/// @brief Field eOGVnDZwdcJbZfwxyqLyLrskaMsb, offset: 0xc8, size: 0x1, def value: None
 bool  ___eOGVnDZwdcJbZfwxyqLyLrskaMsb;

/// @brief Field HVvcpEeyGHaRmKsFuLLsazjuhIDC, offset: 0xcc, size: 0x10, def value: None
 ::Rewired::Utils::Classes::Data::ScreenRect  ___HVvcpEeyGHaRmKsFuLLsazjuhIDC;

/// @brief Field eIvqTNHEPxNQOvsNMXVCbdcUNcrJ, offset: 0xdc, size: 0x1, def value: None
 bool  ___eIvqTNHEPxNQOvsNMXVCbdcUNcrJ;

/// @brief Field yRDWiHVTdvachRcJFiebiUFQGdSCA, offset: 0xe0, size: 0x4, def value: None
 ::Rewired::PlayerMouse_MovementAreaUnit  ___yRDWiHVTdvachRcJFiebiUFQGdSCA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PlayerMouse, ___kfwQkxVujEMcSrdLoFfuGkuLiZsI) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse, ___RGtDwpbXCJpurOMyIhyTcBSXHZLlA) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse, ___UtADntcSlutEQeJspwSueNlOewcuA) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse, ___ysLRpgqfCvhlHgMouauUICyvvRoAA) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse, ___yxjZuSyqSNxSRtBDzQqBHRchvDpW) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse, ___WNWuCigcveEFhMVbuapWpsEsdhFFA) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse, ___bfjBTZiDUhsvlABZFwvuPwteEdoW) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse, ___IwUoWwGWPFaAhWlbgErOIlUOMhpt) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse, ___JEjWEIEaJKeinxOrHZhaTdKjmwOe) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse, ___oNNHSgQwCsJKJsWwVGydlzjCkUXx) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse, ___GDhvrGIrTxtahsNpOlPaQMJktVXq) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse, ___WzDLKslXzaSudYoCtGiApJEoqCOS) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse, ___aVQBIeUaXFDbXeBIcPZRdKmoiims) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse, ___MwLtRhatJOgryIcpauGnEmbMRSUA) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse, ___WCZnSRjScOBFfTcJeTjOJCPWDEUK) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse, ___eOGVnDZwdcJbZfwxyqLyLrskaMsb) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse, ___HVvcpEeyGHaRmKsFuLLsazjuhIDC) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse, ___eIvqTNHEPxNQOvsNMXVCbdcUNcrJ) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::Rewired::PlayerMouse, ___yRDWiHVTdvachRcJFiebiUFQGdSCA) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::Rewired::PlayerMouse) == 0xe8, "Size mismatch!");

} // namespace end def Rewired
