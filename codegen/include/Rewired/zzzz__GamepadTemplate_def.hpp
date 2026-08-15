#pragma once
// IWYU pragma private; include "Rewired/GamepadTemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerTemplate_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GamepadTemplate)
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
class IControllerTemplateThumbStick;
}
namespace Rewired {
class IControllerTemplate;
}
namespace Rewired {
class IGamepadTemplate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired {
class GamepadTemplate;
}
// Write type traits
MARK_REF_T(::Rewired::GamepadTemplate*);
DEFINE_IL2CPP_CLASS(::Rewired::GamepadTemplate*, "Rewired", "GamepadTemplate");
// Dependencies Rewired.ControllerTemplate, System.Guid
namespace Rewired {
// Is value type: false
// CS Name: Rewired.GamepadTemplate
class CORDL_TYPE GamepadTemplate : public ::Rewired::ControllerTemplate {
public:
// Declarations
 __declspec(property(get=Rewired_IGamepadTemplate_get_a)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_a;

 __declspec(property(get=Rewired_IGamepadTemplate_get_actionBottomRow1)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_actionBottomRow1;

 __declspec(property(get=Rewired_IGamepadTemplate_get_actionBottomRow2)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_actionBottomRow2;

 __declspec(property(get=Rewired_IGamepadTemplate_get_actionBottomRow3)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_actionBottomRow3;

 __declspec(property(get=Rewired_IGamepadTemplate_get_actionTopRow1)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_actionTopRow1;

 __declspec(property(get=Rewired_IGamepadTemplate_get_actionTopRow2)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_actionTopRow2;

 __declspec(property(get=Rewired_IGamepadTemplate_get_actionTopRow3)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_actionTopRow3;

 __declspec(property(get=Rewired_IGamepadTemplate_get_b)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_b;

 __declspec(property(get=Rewired_IGamepadTemplate_get_back)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_back;

 __declspec(property(get=Rewired_IGamepadTemplate_get_c)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_c;

 __declspec(property(get=Rewired_IGamepadTemplate_get_center1)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_center1;

 __declspec(property(get=Rewired_IGamepadTemplate_get_center2)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_center2;

 __declspec(property(get=Rewired_IGamepadTemplate_get_center3)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_center3;

 __declspec(property(get=Rewired_IGamepadTemplate_get_dPad)) ::Rewired::IControllerTemplateDPad*  Rewired_IGamepadTemplate_dPad;

 __declspec(property(get=Rewired_IGamepadTemplate_get_guide)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_guide;

 __declspec(property(get=Rewired_IGamepadTemplate_get_leftBumper)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_leftBumper;

 __declspec(property(get=Rewired_IGamepadTemplate_get_leftShoulder1)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_leftShoulder1;

 __declspec(property(get=Rewired_IGamepadTemplate_get_leftShoulder2)) ::Rewired::IControllerTemplateAxis*  Rewired_IGamepadTemplate_leftShoulder2;

 __declspec(property(get=Rewired_IGamepadTemplate_get_leftStick)) ::Rewired::IControllerTemplateThumbStick*  Rewired_IGamepadTemplate_leftStick;

 __declspec(property(get=Rewired_IGamepadTemplate_get_leftTrigger)) ::Rewired::IControllerTemplateAxis*  Rewired_IGamepadTemplate_leftTrigger;

 __declspec(property(get=Rewired_IGamepadTemplate_get_rightBumper)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_rightBumper;

 __declspec(property(get=Rewired_IGamepadTemplate_get_rightShoulder1)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_rightShoulder1;

 __declspec(property(get=Rewired_IGamepadTemplate_get_rightShoulder2)) ::Rewired::IControllerTemplateAxis*  Rewired_IGamepadTemplate_rightShoulder2;

 __declspec(property(get=Rewired_IGamepadTemplate_get_rightStick)) ::Rewired::IControllerTemplateThumbStick*  Rewired_IGamepadTemplate_rightStick;

 __declspec(property(get=Rewired_IGamepadTemplate_get_rightTrigger)) ::Rewired::IControllerTemplateAxis*  Rewired_IGamepadTemplate_rightTrigger;

 __declspec(property(get=Rewired_IGamepadTemplate_get_start)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_start;

 __declspec(property(get=Rewired_IGamepadTemplate_get_x)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_x;

 __declspec(property(get=Rewired_IGamepadTemplate_get_y)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_y;

 __declspec(property(get=Rewired_IGamepadTemplate_get_z)) ::Rewired::IControllerTemplateButton*  Rewired_IGamepadTemplate_z;

/// @brief Field typeGuid, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_typeGuid, put=setStaticF_typeGuid)) ::System::Guid  typeGuid;

/// @brief Convert operator to "::Rewired::IControllerTemplate"
constexpr operator  ::Rewired::IControllerTemplate*() noexcept;

/// @brief Convert operator to "::Rewired::IGamepadTemplate"
constexpr operator  ::Rewired::IGamepadTemplate*() noexcept;

static inline ::Rewired::GamepadTemplate* New_ctor(::System::Object*  payload) ;

/// @brief Method Rewired.IGamepadTemplate.get_a, addr 0x180394160, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_a() ;

/// @brief Method Rewired.IGamepadTemplate.get_actionBottomRow1, addr 0x180394160, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_actionBottomRow1() ;

/// @brief Method Rewired.IGamepadTemplate.get_actionBottomRow2, addr 0x180394180, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_actionBottomRow2() ;

/// @brief Method Rewired.IGamepadTemplate.get_actionBottomRow3, addr 0x1803941a0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_actionBottomRow3() ;

/// @brief Method Rewired.IGamepadTemplate.get_actionTopRow1, addr 0x180393d40, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_actionTopRow1() ;

/// @brief Method Rewired.IGamepadTemplate.get_actionTopRow2, addr 0x180393d60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_actionTopRow2() ;

/// @brief Method Rewired.IGamepadTemplate.get_actionTopRow3, addr 0x180393d80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_actionTopRow3() ;

/// @brief Method Rewired.IGamepadTemplate.get_b, addr 0x180394180, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_b() ;

/// @brief Method Rewired.IGamepadTemplate.get_back, addr 0x180393f60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_back() ;

/// @brief Method Rewired.IGamepadTemplate.get_c, addr 0x1803941a0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_c() ;

/// @brief Method Rewired.IGamepadTemplate.get_center1, addr 0x180393f60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_center1() ;

/// @brief Method Rewired.IGamepadTemplate.get_center2, addr 0x180393f80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_center2() ;

/// @brief Method Rewired.IGamepadTemplate.get_center3, addr 0x180393fa0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_center3() ;

/// @brief Method Rewired.IGamepadTemplate.get_dPad, addr 0x1803941c0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateDPad* Rewired_IGamepadTemplate_get_dPad() ;

/// @brief Method Rewired.IGamepadTemplate.get_guide, addr 0x180393fa0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_guide() ;

/// @brief Method Rewired.IGamepadTemplate.get_leftBumper, addr 0x180393da0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_leftBumper() ;

/// @brief Method Rewired.IGamepadTemplate.get_leftShoulder1, addr 0x180393da0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_leftShoulder1() ;

/// @brief Method Rewired.IGamepadTemplate.get_leftShoulder2, addr 0x1803941e0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IGamepadTemplate_get_leftShoulder2() ;

/// @brief Method Rewired.IGamepadTemplate.get_leftStick, addr 0x180394200, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateThumbStick* Rewired_IGamepadTemplate_get_leftStick() ;

/// @brief Method Rewired.IGamepadTemplate.get_leftTrigger, addr 0x1803941e0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IGamepadTemplate_get_leftTrigger() ;

/// @brief Method Rewired.IGamepadTemplate.get_rightBumper, addr 0x180393de0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_rightBumper() ;

/// @brief Method Rewired.IGamepadTemplate.get_rightShoulder1, addr 0x180393de0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_rightShoulder1() ;

/// @brief Method Rewired.IGamepadTemplate.get_rightShoulder2, addr 0x180394220, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IGamepadTemplate_get_rightShoulder2() ;

/// @brief Method Rewired.IGamepadTemplate.get_rightStick, addr 0x180394240, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateThumbStick* Rewired_IGamepadTemplate_get_rightStick() ;

/// @brief Method Rewired.IGamepadTemplate.get_rightTrigger, addr 0x180394220, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IGamepadTemplate_get_rightTrigger() ;

/// @brief Method Rewired.IGamepadTemplate.get_start, addr 0x180393f80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_start() ;

/// @brief Method Rewired.IGamepadTemplate.get_x, addr 0x180393d40, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_x() ;

/// @brief Method Rewired.IGamepadTemplate.get_y, addr 0x180393d60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_y() ;

/// @brief Method Rewired.IGamepadTemplate.get_z, addr 0x180393d80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_IGamepadTemplate_get_z() ;

/// @brief Method .ctor, addr 0x180393af0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  payload) ;

static inline ::System::Guid getStaticF_typeGuid() ;

/// @brief Convert to "::Rewired::IControllerTemplate"
constexpr ::Rewired::IControllerTemplate* i___Rewired__IControllerTemplate() noexcept;

/// @brief Convert to "::Rewired::IGamepadTemplate"
constexpr ::Rewired::IGamepadTemplate* i___Rewired__IGamepadTemplate() noexcept;

static inline void setStaticF_typeGuid(::System::Guid  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GamepadTemplate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GamepadTemplate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GamepadTemplate(GamepadTemplate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GamepadTemplate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GamepadTemplate(GamepadTemplate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5648};

/// @brief Field elementId_a offset 0xffffffff size 0x4
static constexpr int32_t  elementId_a{static_cast<int32_t>(0x4)};

/// @brief Field elementId_actionBottomRow1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_actionBottomRow1{static_cast<int32_t>(0x4)};

/// @brief Field elementId_actionBottomRow2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_actionBottomRow2{static_cast<int32_t>(0x5)};

/// @brief Field elementId_actionBottomRow3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_actionBottomRow3{static_cast<int32_t>(0x6)};

/// @brief Field elementId_actionTopRow1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_actionTopRow1{static_cast<int32_t>(0x7)};

/// @brief Field elementId_actionTopRow2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_actionTopRow2{static_cast<int32_t>(0x8)};

/// @brief Field elementId_actionTopRow3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_actionTopRow3{static_cast<int32_t>(0x9)};

/// @brief Field elementId_b offset 0xffffffff size 0x4
static constexpr int32_t  elementId_b{static_cast<int32_t>(0x5)};

/// @brief Field elementId_back offset 0xffffffff size 0x4
static constexpr int32_t  elementId_back{static_cast<int32_t>(0xe)};

/// @brief Field elementId_c offset 0xffffffff size 0x4
static constexpr int32_t  elementId_c{static_cast<int32_t>(0x6)};

/// @brief Field elementId_center1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_center1{static_cast<int32_t>(0xe)};

/// @brief Field elementId_center2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_center2{static_cast<int32_t>(0xf)};

/// @brief Field elementId_center3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_center3{static_cast<int32_t>(0x10)};

/// @brief Field elementId_dPad offset 0xffffffff size 0x4
static constexpr int32_t  elementId_dPad{static_cast<int32_t>(0x19)};

/// @brief Field elementId_dPadDown offset 0xffffffff size 0x4
static constexpr int32_t  elementId_dPadDown{static_cast<int32_t>(0x15)};

/// @brief Field elementId_dPadLeft offset 0xffffffff size 0x4
static constexpr int32_t  elementId_dPadLeft{static_cast<int32_t>(0x16)};

/// @brief Field elementId_dPadRight offset 0xffffffff size 0x4
static constexpr int32_t  elementId_dPadRight{static_cast<int32_t>(0x14)};

/// @brief Field elementId_dPadUp offset 0xffffffff size 0x4
static constexpr int32_t  elementId_dPadUp{static_cast<int32_t>(0x13)};

/// @brief Field elementId_guide offset 0xffffffff size 0x4
static constexpr int32_t  elementId_guide{static_cast<int32_t>(0x10)};

/// @brief Field elementId_leftBumper offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftBumper{static_cast<int32_t>(0xa)};

/// @brief Field elementId_leftShoulder1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftShoulder1{static_cast<int32_t>(0xa)};

/// @brief Field elementId_leftShoulder2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftShoulder2{static_cast<int32_t>(0xb)};

/// @brief Field elementId_leftStick offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftStick{static_cast<int32_t>(0x17)};

/// @brief Field elementId_leftStickButton offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftStickButton{static_cast<int32_t>(0x11)};

/// @brief Field elementId_leftStickX offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftStickX{static_cast<int32_t>(0x0)};

/// @brief Field elementId_leftStickY offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftStickY{static_cast<int32_t>(0x1)};

/// @brief Field elementId_leftTrigger offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftTrigger{static_cast<int32_t>(0xb)};

/// @brief Field elementId_rightBumper offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightBumper{static_cast<int32_t>(0xc)};

/// @brief Field elementId_rightShoulder1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightShoulder1{static_cast<int32_t>(0xc)};

/// @brief Field elementId_rightShoulder2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightShoulder2{static_cast<int32_t>(0xd)};

/// @brief Field elementId_rightStick offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightStick{static_cast<int32_t>(0x18)};

/// @brief Field elementId_rightStickButton offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightStickButton{static_cast<int32_t>(0x12)};

/// @brief Field elementId_rightStickX offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightStickX{static_cast<int32_t>(0x2)};

/// @brief Field elementId_rightStickY offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightStickY{static_cast<int32_t>(0x3)};

/// @brief Field elementId_rightTrigger offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightTrigger{static_cast<int32_t>(0xd)};

/// @brief Field elementId_start offset 0xffffffff size 0x4
static constexpr int32_t  elementId_start{static_cast<int32_t>(0xf)};

/// @brief Field elementId_x offset 0xffffffff size 0x4
static constexpr int32_t  elementId_x{static_cast<int32_t>(0x7)};

/// @brief Field elementId_y offset 0xffffffff size 0x4
static constexpr int32_t  elementId_y{static_cast<int32_t>(0x8)};

/// @brief Field elementId_z offset 0xffffffff size 0x4
static constexpr int32_t  elementId_z{static_cast<int32_t>(0x9)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::GamepadTemplate) == 0x78, "Size mismatch!");

} // namespace end def Rewired
