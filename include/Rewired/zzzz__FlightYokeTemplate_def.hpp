#pragma once
// IWYU pragma private; include "Rewired/FlightYokeTemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerTemplate_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FlightYokeTemplate)
namespace Rewired {
class IControllerTemplateButton;
}
namespace Rewired {
class IControllerTemplateHat;
}
namespace Rewired {
class IControllerTemplateThrottle;
}
namespace Rewired {
class IControllerTemplateYoke;
}
namespace Rewired {
class IControllerTemplate;
}
namespace Rewired {
class IFlightYokeTemplate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired {
class FlightYokeTemplate;
}
// Write type traits
MARK_REF_T(::Rewired::FlightYokeTemplate*);
DEFINE_IL2CPP_CLASS(::Rewired::FlightYokeTemplate*, "Rewired", "FlightYokeTemplate");
// Dependencies Rewired.ControllerTemplate, System.Guid
namespace Rewired {
// Is value type: false
// CS Name: Rewired.FlightYokeTemplate
class CORDL_TYPE FlightYokeTemplate : public ::Rewired::ControllerTemplate {
public:
// Declarations
 __declspec(property(get=Rewired_IFlightYokeTemplate_get_centerButton1)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_centerButton1;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_centerButton2)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_centerButton2;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_centerButton3)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_centerButton3;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_centerButton4)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_centerButton4;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_centerButton5)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_centerButton5;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_centerButton6)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_centerButton6;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_centerButton7)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_centerButton7;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_centerButton8)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_centerButton8;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_consoleButton1)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_consoleButton1;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_consoleButton10)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_consoleButton10;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_consoleButton2)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_consoleButton2;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_consoleButton3)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_consoleButton3;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_consoleButton4)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_consoleButton4;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_consoleButton5)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_consoleButton5;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_consoleButton6)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_consoleButton6;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_consoleButton7)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_consoleButton7;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_consoleButton8)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_consoleButton8;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_consoleButton9)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_consoleButton9;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_leftGripButton1)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_leftGripButton1;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_leftGripButton2)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_leftGripButton2;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_leftGripButton3)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_leftGripButton3;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_leftGripButton4)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_leftGripButton4;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_leftGripButton5)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_leftGripButton5;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_leftGripButton6)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_leftGripButton6;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_leftGripHat)) ::Rewired::IControllerTemplateHat*  Rewired_IFlightYokeTemplate_leftGripHat;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_leftPaddle)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_leftPaddle;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_lever1)) ::Rewired::IControllerTemplateThrottle*  Rewired_IFlightYokeTemplate_lever1;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_lever2)) ::Rewired::IControllerTemplateThrottle*  Rewired_IFlightYokeTemplate_lever2;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_lever3)) ::Rewired::IControllerTemplateThrottle*  Rewired_IFlightYokeTemplate_lever3;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_lever4)) ::Rewired::IControllerTemplateThrottle*  Rewired_IFlightYokeTemplate_lever4;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_lever5)) ::Rewired::IControllerTemplateThrottle*  Rewired_IFlightYokeTemplate_lever5;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_mode1)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_mode1;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_mode2)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_mode2;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_mode3)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_mode3;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_rightGripButton1)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_rightGripButton1;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_rightGripButton2)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_rightGripButton2;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_rightGripButton3)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_rightGripButton3;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_rightGripButton4)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_rightGripButton4;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_rightGripButton5)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_rightGripButton5;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_rightGripButton6)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_rightGripButton6;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_rightGripHat)) ::Rewired::IControllerTemplateHat*  Rewired_IFlightYokeTemplate_rightGripHat;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_rightPaddle)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_rightPaddle;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_wheel1Down)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_wheel1Down;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_wheel1Press)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_wheel1Press;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_wheel1Up)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_wheel1Up;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_wheel2Down)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_wheel2Down;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_wheel2Press)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_wheel2Press;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_wheel2Up)) ::Rewired::IControllerTemplateButton*  Rewired_IFlightYokeTemplate_wheel2Up;

 __declspec(property(get=Rewired_IFlightYokeTemplate_get_yoke)) ::Rewired::IControllerTemplateYoke*  Rewired_IFlightYokeTemplate_yoke;

/// @brief Field typeGuid, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_typeGuid, put=setStaticF_typeGuid)) ::System::Guid  typeGuid;

/// @brief Convert operator to "::Rewired::IControllerTemplate"
constexpr operator  ::Rewired::IControllerTemplate*() noexcept;

/// @brief Convert operator to "::Rewired::IFlightYokeTemplate"
constexpr operator  ::Rewired::IFlightYokeTemplate*() noexcept;

static inline ::Rewired::FlightYokeTemplate* New_ctor(::System::Object*  payload) ;

/// @brief Method Rewired.IFlightYokeTemplate.get_centerButton1, addr 0x180393b00, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_centerButton1() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_centerButton2, addr 0x180393b20, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_centerButton2() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_centerButton3, addr 0x180393b40, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_centerButton3() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_centerButton4, addr 0x180393b60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_centerButton4() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_centerButton5, addr 0x180393b80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_centerButton5() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_centerButton6, addr 0x180393ba0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_centerButton6() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_centerButton7, addr 0x180393bc0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_centerButton7() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_centerButton8, addr 0x180393be0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_centerButton8() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_consoleButton1, addr 0x180393c20, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton1() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_consoleButton10, addr 0x180393c00, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton10() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_consoleButton2, addr 0x180393c40, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton2() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_consoleButton3, addr 0x180393c60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton3() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_consoleButton4, addr 0x180393c80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton4() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_consoleButton5, addr 0x180393ca0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton5() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_consoleButton6, addr 0x180393cc0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton6() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_consoleButton7, addr 0x180393ce0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton7() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_consoleButton8, addr 0x180393d00, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton8() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_consoleButton9, addr 0x180393d20, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_consoleButton9() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_leftGripButton1, addr 0x180393d40, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_leftGripButton1() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_leftGripButton2, addr 0x180393d60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_leftGripButton2() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_leftGripButton3, addr 0x180393d80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_leftGripButton3() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_leftGripButton4, addr 0x180393da0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_leftGripButton4() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_leftGripButton5, addr 0x180393dc0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_leftGripButton5() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_leftGripButton6, addr 0x180393de0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_leftGripButton6() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_leftGripHat, addr 0x180393e00, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateHat* Rewired_IFlightYokeTemplate_get_leftGripHat() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_leftPaddle, addr 0x180393e20, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_leftPaddle() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_lever1, addr 0x180393e40, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateThrottle* Rewired_IFlightYokeTemplate_get_lever1() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_lever2, addr 0x180393e60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateThrottle* Rewired_IFlightYokeTemplate_get_lever2() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_lever3, addr 0x180393e80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateThrottle* Rewired_IFlightYokeTemplate_get_lever3() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_lever4, addr 0x180393ea0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateThrottle* Rewired_IFlightYokeTemplate_get_lever4() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_lever5, addr 0x180393ec0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateThrottle* Rewired_IFlightYokeTemplate_get_lever5() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_mode1, addr 0x180393ee0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_mode1() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_mode2, addr 0x180393f00, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_mode2() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_mode3, addr 0x180393f20, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_mode3() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_rightGripButton1, addr 0x180393f40, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_rightGripButton1() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_rightGripButton2, addr 0x180393f60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_rightGripButton2() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_rightGripButton3, addr 0x180393f80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_rightGripButton3() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_rightGripButton4, addr 0x180393fa0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_rightGripButton4() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_rightGripButton5, addr 0x180393fc0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_rightGripButton5() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_rightGripButton6, addr 0x180393fe0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_rightGripButton6() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_rightGripHat, addr 0x180394000, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateHat* Rewired_IFlightYokeTemplate_get_rightGripHat() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_rightPaddle, addr 0x180394020, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_rightPaddle() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_wheel1Down, addr 0x180394040, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_wheel1Down() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_wheel1Press, addr 0x180394060, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_wheel1Press() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_wheel1Up, addr 0x180394080, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_wheel1Up() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_wheel2Down, addr 0x1803940a0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_wheel2Down() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_wheel2Press, addr 0x1803940c0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_wheel2Press() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_wheel2Up, addr 0x1803940e0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IFlightYokeTemplate_get_wheel2Up() ;

/// @brief Method Rewired.IFlightYokeTemplate.get_yoke, addr 0x180394100, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateYoke* Rewired_IFlightYokeTemplate_get_yoke() ;

/// @brief Method .ctor, addr 0x180393af0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  payload) ;

static inline ::System::Guid getStaticF_typeGuid() ;

/// @brief Convert to "::Rewired::IControllerTemplate"
constexpr ::Rewired::IControllerTemplate* i___Rewired__IControllerTemplate() noexcept;

/// @brief Convert to "::Rewired::IFlightYokeTemplate"
constexpr ::Rewired::IFlightYokeTemplate* i___Rewired__IFlightYokeTemplate() noexcept;

static inline void setStaticF_typeGuid(::System::Guid  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlightYokeTemplate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlightYokeTemplate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlightYokeTemplate(FlightYokeTemplate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlightYokeTemplate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlightYokeTemplate(FlightYokeTemplate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5651};

/// @brief Field elementId_centerButton1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_centerButton1{static_cast<int32_t>(0x13)};

/// @brief Field elementId_centerButton2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_centerButton2{static_cast<int32_t>(0x14)};

/// @brief Field elementId_centerButton3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_centerButton3{static_cast<int32_t>(0x15)};

/// @brief Field elementId_centerButton4 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_centerButton4{static_cast<int32_t>(0x16)};

/// @brief Field elementId_centerButton5 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_centerButton5{static_cast<int32_t>(0x17)};

/// @brief Field elementId_centerButton6 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_centerButton6{static_cast<int32_t>(0x18)};

/// @brief Field elementId_centerButton7 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_centerButton7{static_cast<int32_t>(0x19)};

/// @brief Field elementId_centerButton8 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_centerButton8{static_cast<int32_t>(0x1a)};

/// @brief Field elementId_consoleButton1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton1{static_cast<int32_t>(0x2b)};

/// @brief Field elementId_consoleButton10 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton10{static_cast<int32_t>(0x34)};

/// @brief Field elementId_consoleButton2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton2{static_cast<int32_t>(0x2c)};

/// @brief Field elementId_consoleButton3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton3{static_cast<int32_t>(0x2d)};

/// @brief Field elementId_consoleButton4 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton4{static_cast<int32_t>(0x2e)};

/// @brief Field elementId_consoleButton5 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton5{static_cast<int32_t>(0x2f)};

/// @brief Field elementId_consoleButton6 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton6{static_cast<int32_t>(0x30)};

/// @brief Field elementId_consoleButton7 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton7{static_cast<int32_t>(0x31)};

/// @brief Field elementId_consoleButton8 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton8{static_cast<int32_t>(0x32)};

/// @brief Field elementId_consoleButton9 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton9{static_cast<int32_t>(0x33)};

/// @brief Field elementId_leftGripButton1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftGripButton1{static_cast<int32_t>(0x7)};

/// @brief Field elementId_leftGripButton2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftGripButton2{static_cast<int32_t>(0x8)};

/// @brief Field elementId_leftGripButton3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftGripButton3{static_cast<int32_t>(0x9)};

/// @brief Field elementId_leftGripButton4 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftGripButton4{static_cast<int32_t>(0xa)};

/// @brief Field elementId_leftGripButton5 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftGripButton5{static_cast<int32_t>(0xb)};

/// @brief Field elementId_leftGripButton6 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftGripButton6{static_cast<int32_t>(0xc)};

/// @brief Field elementId_leftGripHat offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftGripHat{static_cast<int32_t>(0x4b)};

/// @brief Field elementId_leftGripHatDown offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftGripHatDown{static_cast<int32_t>(0x1f)};

/// @brief Field elementId_leftGripHatDownLeft offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftGripHatDownLeft{static_cast<int32_t>(0x20)};

/// @brief Field elementId_leftGripHatDownRight offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftGripHatDownRight{static_cast<int32_t>(0x1e)};

/// @brief Field elementId_leftGripHatLeft offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftGripHatLeft{static_cast<int32_t>(0x21)};

/// @brief Field elementId_leftGripHatRight offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftGripHatRight{static_cast<int32_t>(0x1d)};

/// @brief Field elementId_leftGripHatUp offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftGripHatUp{static_cast<int32_t>(0x1b)};

/// @brief Field elementId_leftGripHatUpLeft offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftGripHatUpLeft{static_cast<int32_t>(0x22)};

/// @brief Field elementId_leftGripHatUpRight offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftGripHatUpRight{static_cast<int32_t>(0x1c)};

/// @brief Field elementId_leftPaddle offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftPaddle{static_cast<int32_t>(0x3b)};

/// @brief Field elementId_lever1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_lever1{static_cast<int32_t>(0x46)};

/// @brief Field elementId_lever1Axis offset 0xffffffff size 0x4
static constexpr int32_t  elementId_lever1Axis{static_cast<int32_t>(0x2)};

/// @brief Field elementId_lever1MinDetent offset 0xffffffff size 0x4
static constexpr int32_t  elementId_lever1MinDetent{static_cast<int32_t>(0x40)};

/// @brief Field elementId_lever2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_lever2{static_cast<int32_t>(0x47)};

/// @brief Field elementId_lever2Axis offset 0xffffffff size 0x4
static constexpr int32_t  elementId_lever2Axis{static_cast<int32_t>(0x3)};

/// @brief Field elementId_lever2MinDetent offset 0xffffffff size 0x4
static constexpr int32_t  elementId_lever2MinDetent{static_cast<int32_t>(0x41)};

/// @brief Field elementId_lever3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_lever3{static_cast<int32_t>(0x48)};

/// @brief Field elementId_lever3Axis offset 0xffffffff size 0x4
static constexpr int32_t  elementId_lever3Axis{static_cast<int32_t>(0x4)};

/// @brief Field elementId_lever3MinDetent offset 0xffffffff size 0x4
static constexpr int32_t  elementId_lever3MinDetent{static_cast<int32_t>(0x42)};

/// @brief Field elementId_lever4 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_lever4{static_cast<int32_t>(0x49)};

/// @brief Field elementId_lever4Axis offset 0xffffffff size 0x4
static constexpr int32_t  elementId_lever4Axis{static_cast<int32_t>(0x5)};

/// @brief Field elementId_lever4MinDetent offset 0xffffffff size 0x4
static constexpr int32_t  elementId_lever4MinDetent{static_cast<int32_t>(0x43)};

/// @brief Field elementId_lever5 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_lever5{static_cast<int32_t>(0x4a)};

/// @brief Field elementId_lever5Axis offset 0xffffffff size 0x4
static constexpr int32_t  elementId_lever5Axis{static_cast<int32_t>(0x6)};

/// @brief Field elementId_lever5MinDetent offset 0xffffffff size 0x4
static constexpr int32_t  elementId_lever5MinDetent{static_cast<int32_t>(0x44)};

/// @brief Field elementId_mode1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_mode1{static_cast<int32_t>(0x3d)};

/// @brief Field elementId_mode2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_mode2{static_cast<int32_t>(0x3e)};

/// @brief Field elementId_mode3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_mode3{static_cast<int32_t>(0x3f)};

/// @brief Field elementId_rightGripButton1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightGripButton1{static_cast<int32_t>(0xd)};

/// @brief Field elementId_rightGripButton2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightGripButton2{static_cast<int32_t>(0xe)};

/// @brief Field elementId_rightGripButton3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightGripButton3{static_cast<int32_t>(0xf)};

/// @brief Field elementId_rightGripButton4 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightGripButton4{static_cast<int32_t>(0x10)};

/// @brief Field elementId_rightGripButton5 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightGripButton5{static_cast<int32_t>(0x11)};

/// @brief Field elementId_rightGripButton6 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightGripButton6{static_cast<int32_t>(0x12)};

/// @brief Field elementId_rightGripHat offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightGripHat{static_cast<int32_t>(0x4c)};

/// @brief Field elementId_rightGripHatDown offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightGripHatDown{static_cast<int32_t>(0x27)};

/// @brief Field elementId_rightGripHatDownLeft offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightGripHatDownLeft{static_cast<int32_t>(0x28)};

/// @brief Field elementId_rightGripHatDownRight offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightGripHatDownRight{static_cast<int32_t>(0x26)};

/// @brief Field elementId_rightGripHatLeft offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightGripHatLeft{static_cast<int32_t>(0x29)};

/// @brief Field elementId_rightGripHatRight offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightGripHatRight{static_cast<int32_t>(0x25)};

/// @brief Field elementId_rightGripHatUp offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightGripHatUp{static_cast<int32_t>(0x23)};

/// @brief Field elementId_rightGripHatUpLeft offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightGripHatUpLeft{static_cast<int32_t>(0x2a)};

/// @brief Field elementId_rightGripHatUpRight offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightGripHatUpRight{static_cast<int32_t>(0x24)};

/// @brief Field elementId_rightPaddle offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightPaddle{static_cast<int32_t>(0x3c)};

/// @brief Field elementId_rotateYoke offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rotateYoke{static_cast<int32_t>(0x0)};

/// @brief Field elementId_wheel1Down offset 0xffffffff size 0x4
static constexpr int32_t  elementId_wheel1Down{static_cast<int32_t>(0x36)};

/// @brief Field elementId_wheel1Press offset 0xffffffff size 0x4
static constexpr int32_t  elementId_wheel1Press{static_cast<int32_t>(0x37)};

/// @brief Field elementId_wheel1Up offset 0xffffffff size 0x4
static constexpr int32_t  elementId_wheel1Up{static_cast<int32_t>(0x35)};

/// @brief Field elementId_wheel2Down offset 0xffffffff size 0x4
static constexpr int32_t  elementId_wheel2Down{static_cast<int32_t>(0x39)};

/// @brief Field elementId_wheel2Press offset 0xffffffff size 0x4
static constexpr int32_t  elementId_wheel2Press{static_cast<int32_t>(0x3a)};

/// @brief Field elementId_wheel2Up offset 0xffffffff size 0x4
static constexpr int32_t  elementId_wheel2Up{static_cast<int32_t>(0x38)};

/// @brief Field elementId_yoke offset 0xffffffff size 0x4
static constexpr int32_t  elementId_yoke{static_cast<int32_t>(0x45)};

/// @brief Field elementId_yokeZ offset 0xffffffff size 0x4
static constexpr int32_t  elementId_yokeZ{static_cast<int32_t>(0x1)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::FlightYokeTemplate) == 0x78, "Size mismatch!");

} // namespace end def Rewired
