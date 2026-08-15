#pragma once
// IWYU pragma private; include "Rewired/RacingWheelTemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerTemplate_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RacingWheelTemplate)
namespace Rewired {
class IControllerTemplateAxis;
}
namespace Rewired {
class IControllerTemplateButton;
}
namespace Rewired {
class IControllerTemplateDPad;
}
namespace Rewired {
class IControllerTemplate;
}
namespace Rewired {
class IRacingWheelTemplate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired {
class RacingWheelTemplate;
}
// Write type traits
MARK_REF_T(::Rewired::RacingWheelTemplate*);
DEFINE_IL2CPP_CLASS(::Rewired::RacingWheelTemplate*, "Rewired", "RacingWheelTemplate");
// Dependencies Rewired.ControllerTemplate, System.Guid
namespace Rewired {
// Is value type: false
// CS Name: Rewired.RacingWheelTemplate
class CORDL_TYPE RacingWheelTemplate : public ::Rewired::ControllerTemplate {
public:
// Declarations
 __declspec(property(get=Rewired_IRacingWheelTemplate_get_accelerator)) ::Rewired::IControllerTemplateAxis*  Rewired_IRacingWheelTemplate_accelerator;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_brake)) ::Rewired::IControllerTemplateAxis*  Rewired_IRacingWheelTemplate_brake;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_clutch)) ::Rewired::IControllerTemplateAxis*  Rewired_IRacingWheelTemplate_clutch;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_consoleButton1)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_consoleButton1;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_consoleButton10)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_consoleButton10;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_consoleButton2)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_consoleButton2;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_consoleButton3)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_consoleButton3;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_consoleButton4)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_consoleButton4;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_consoleButton5)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_consoleButton5;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_consoleButton6)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_consoleButton6;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_consoleButton7)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_consoleButton7;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_consoleButton8)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_consoleButton8;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_consoleButton9)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_consoleButton9;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_dPad)) ::Rewired::IControllerTemplateDPad*  Rewired_IRacingWheelTemplate_dPad;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_horn)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_horn;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_reverseGear)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_reverseGear;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_select)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_select;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_shiftDown)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_shiftDown;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_shiftUp)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_shiftUp;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_shifter1)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_shifter1;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_shifter10)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_shifter10;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_shifter2)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_shifter2;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_shifter3)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_shifter3;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_shifter4)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_shifter4;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_shifter5)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_shifter5;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_shifter6)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_shifter6;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_shifter7)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_shifter7;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_shifter8)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_shifter8;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_shifter9)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_shifter9;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_start)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_start;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_systemButton)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_systemButton;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_wheel)) ::Rewired::IControllerTemplateAxis*  Rewired_IRacingWheelTemplate_wheel;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_wheelButton1)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_wheelButton1;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_wheelButton10)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_wheelButton10;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_wheelButton2)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_wheelButton2;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_wheelButton3)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_wheelButton3;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_wheelButton4)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_wheelButton4;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_wheelButton5)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_wheelButton5;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_wheelButton6)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_wheelButton6;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_wheelButton7)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_wheelButton7;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_wheelButton8)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_wheelButton8;

 __declspec(property(get=Rewired_IRacingWheelTemplate_get_wheelButton9)) ::Rewired::IControllerTemplateButton*  Rewired_IRacingWheelTemplate_wheelButton9;

/// @brief Field typeGuid, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_typeGuid, put=setStaticF_typeGuid)) ::System::Guid  typeGuid;

/// @brief Convert operator to "::Rewired::IControllerTemplate"
constexpr operator  ::Rewired::IControllerTemplate*() noexcept;

/// @brief Convert operator to "::Rewired::IRacingWheelTemplate"
constexpr operator  ::Rewired::IRacingWheelTemplate*() noexcept;

static inline ::Rewired::RacingWheelTemplate* New_ctor(::System::Object*  payload) ;

/// @brief Method Rewired.IRacingWheelTemplate.get_accelerator, addr 0x180393a70, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IRacingWheelTemplate_get_accelerator() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_brake, addr 0x180393a90, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IRacingWheelTemplate_get_brake() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_clutch, addr 0x180396690, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IRacingWheelTemplate_get_clutch() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_consoleButton1, addr 0x180393fa0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton1() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_consoleButton10, addr 0x180393bc0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton10() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_consoleButton2, addr 0x180393fc0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton2() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_consoleButton3, addr 0x180393fe0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton3() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_consoleButton4, addr 0x180393b00, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton4() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_consoleButton5, addr 0x180393b20, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton5() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_consoleButton6, addr 0x180393b40, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton6() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_consoleButton7, addr 0x180393b60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton7() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_consoleButton8, addr 0x180393b80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton8() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_consoleButton9, addr 0x180393ba0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_consoleButton9() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_dPad, addr 0x1803966b0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateDPad* Rewired_IRacingWheelTemplate_get_dPad() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_horn, addr 0x180393c20, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_horn() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_reverseGear, addr 0x180393c40, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_reverseGear() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_select, addr 0x1803966d0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_select() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_shiftDown, addr 0x180394160, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shiftDown() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_shiftUp, addr 0x180394180, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shiftUp() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_shifter1, addr 0x180393be0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter1() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_shifter10, addr 0x1803966f0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter10() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_shifter2, addr 0x180394300, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter2() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_shifter3, addr 0x180396710, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter3() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_shifter4, addr 0x180396730, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter4() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_shifter5, addr 0x180396750, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter5() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_shifter6, addr 0x180396770, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter6() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_shifter7, addr 0x180396790, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter7() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_shifter8, addr 0x1803967b0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter8() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_shifter9, addr 0x1803967d0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_shifter9() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_start, addr 0x1803967f0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_start() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_systemButton, addr 0x180396810, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_systemButton() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_wheel, addr 0x180393a60, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IRacingWheelTemplate_get_wheel() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_wheelButton1, addr 0x1803941a0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton1() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_wheelButton10, addr 0x180393f80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton10() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_wheelButton2, addr 0x180393d40, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton2() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_wheelButton3, addr 0x180393d60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton3() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_wheelButton4, addr 0x180393d80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton4() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_wheelButton5, addr 0x180393da0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton5() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_wheelButton6, addr 0x180393dc0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton6() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_wheelButton7, addr 0x180393de0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton7() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_wheelButton8, addr 0x180393f40, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton8() ;

/// @brief Method Rewired.IRacingWheelTemplate.get_wheelButton9, addr 0x180393f60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IRacingWheelTemplate_get_wheelButton9() ;

/// @brief Method .ctor, addr 0x180393af0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  payload) ;

static inline ::System::Guid getStaticF_typeGuid() ;

/// @brief Convert to "::Rewired::IControllerTemplate"
constexpr ::Rewired::IControllerTemplate* i___Rewired__IControllerTemplate() noexcept;

/// @brief Convert to "::Rewired::IRacingWheelTemplate"
constexpr ::Rewired::IRacingWheelTemplate* i___Rewired__IRacingWheelTemplate() noexcept;

static inline void setStaticF_typeGuid(::System::Guid  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RacingWheelTemplate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RacingWheelTemplate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RacingWheelTemplate(RacingWheelTemplate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RacingWheelTemplate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RacingWheelTemplate(RacingWheelTemplate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5649};

/// @brief Field elementId_accelerator offset 0xffffffff size 0x4
static constexpr int32_t  elementId_accelerator{static_cast<int32_t>(0x1)};

/// @brief Field elementId_brake offset 0xffffffff size 0x4
static constexpr int32_t  elementId_brake{static_cast<int32_t>(0x2)};

/// @brief Field elementId_clutch offset 0xffffffff size 0x4
static constexpr int32_t  elementId_clutch{static_cast<int32_t>(0x3)};

/// @brief Field elementId_consoleButton1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton1{static_cast<int32_t>(0x10)};

/// @brief Field elementId_consoleButton10 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton10{static_cast<int32_t>(0x19)};

/// @brief Field elementId_consoleButton2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton2{static_cast<int32_t>(0x11)};

/// @brief Field elementId_consoleButton3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton3{static_cast<int32_t>(0x12)};

/// @brief Field elementId_consoleButton4 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton4{static_cast<int32_t>(0x13)};

/// @brief Field elementId_consoleButton5 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton5{static_cast<int32_t>(0x14)};

/// @brief Field elementId_consoleButton6 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton6{static_cast<int32_t>(0x15)};

/// @brief Field elementId_consoleButton7 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton7{static_cast<int32_t>(0x16)};

/// @brief Field elementId_consoleButton8 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton8{static_cast<int32_t>(0x17)};

/// @brief Field elementId_consoleButton9 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_consoleButton9{static_cast<int32_t>(0x18)};

/// @brief Field elementId_dPad offset 0xffffffff size 0x4
static constexpr int32_t  elementId_dPad{static_cast<int32_t>(0x2d)};

/// @brief Field elementId_dPadDown offset 0xffffffff size 0x4
static constexpr int32_t  elementId_dPadDown{static_cast<int32_t>(0x29)};

/// @brief Field elementId_dPadLeft offset 0xffffffff size 0x4
static constexpr int32_t  elementId_dPadLeft{static_cast<int32_t>(0x2a)};

/// @brief Field elementId_dPadRight offset 0xffffffff size 0x4
static constexpr int32_t  elementId_dPadRight{static_cast<int32_t>(0x28)};

/// @brief Field elementId_dPadUp offset 0xffffffff size 0x4
static constexpr int32_t  elementId_dPadUp{static_cast<int32_t>(0x27)};

/// @brief Field elementId_horn offset 0xffffffff size 0x4
static constexpr int32_t  elementId_horn{static_cast<int32_t>(0x2b)};

/// @brief Field elementId_reverseGear offset 0xffffffff size 0x4
static constexpr int32_t  elementId_reverseGear{static_cast<int32_t>(0x2c)};

/// @brief Field elementId_select offset 0xffffffff size 0x4
static constexpr int32_t  elementId_select{static_cast<int32_t>(0x24)};

/// @brief Field elementId_shiftDown offset 0xffffffff size 0x4
static constexpr int32_t  elementId_shiftDown{static_cast<int32_t>(0x4)};

/// @brief Field elementId_shiftUp offset 0xffffffff size 0x4
static constexpr int32_t  elementId_shiftUp{static_cast<int32_t>(0x5)};

/// @brief Field elementId_shifter1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_shifter1{static_cast<int32_t>(0x1a)};

/// @brief Field elementId_shifter10 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_shifter10{static_cast<int32_t>(0x23)};

/// @brief Field elementId_shifter2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_shifter2{static_cast<int32_t>(0x1b)};

/// @brief Field elementId_shifter3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_shifter3{static_cast<int32_t>(0x1c)};

/// @brief Field elementId_shifter4 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_shifter4{static_cast<int32_t>(0x1d)};

/// @brief Field elementId_shifter5 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_shifter5{static_cast<int32_t>(0x1e)};

/// @brief Field elementId_shifter6 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_shifter6{static_cast<int32_t>(0x1f)};

/// @brief Field elementId_shifter7 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_shifter7{static_cast<int32_t>(0x20)};

/// @brief Field elementId_shifter8 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_shifter8{static_cast<int32_t>(0x21)};

/// @brief Field elementId_shifter9 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_shifter9{static_cast<int32_t>(0x22)};

/// @brief Field elementId_start offset 0xffffffff size 0x4
static constexpr int32_t  elementId_start{static_cast<int32_t>(0x25)};

/// @brief Field elementId_systemButton offset 0xffffffff size 0x4
static constexpr int32_t  elementId_systemButton{static_cast<int32_t>(0x26)};

/// @brief Field elementId_wheel offset 0xffffffff size 0x4
static constexpr int32_t  elementId_wheel{static_cast<int32_t>(0x0)};

/// @brief Field elementId_wheelButton1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_wheelButton1{static_cast<int32_t>(0x6)};

/// @brief Field elementId_wheelButton10 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_wheelButton10{static_cast<int32_t>(0xf)};

/// @brief Field elementId_wheelButton2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_wheelButton2{static_cast<int32_t>(0x7)};

/// @brief Field elementId_wheelButton3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_wheelButton3{static_cast<int32_t>(0x8)};

/// @brief Field elementId_wheelButton4 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_wheelButton4{static_cast<int32_t>(0x9)};

/// @brief Field elementId_wheelButton5 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_wheelButton5{static_cast<int32_t>(0xa)};

/// @brief Field elementId_wheelButton6 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_wheelButton6{static_cast<int32_t>(0xb)};

/// @brief Field elementId_wheelButton7 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_wheelButton7{static_cast<int32_t>(0xc)};

/// @brief Field elementId_wheelButton8 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_wheelButton8{static_cast<int32_t>(0xd)};

/// @brief Field elementId_wheelButton9 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_wheelButton9{static_cast<int32_t>(0xe)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::RacingWheelTemplate) == 0x78, "Size mismatch!");

} // namespace end def Rewired
