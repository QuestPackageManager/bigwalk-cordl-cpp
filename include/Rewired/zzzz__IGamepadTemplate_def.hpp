#pragma once
// IWYU pragma private; include "Rewired/IGamepadTemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGamepadTemplate)
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
// Forward declare root types
namespace Rewired {
class IGamepadTemplate;
}
// Write type traits
MARK_REF_T(::Rewired::IGamepadTemplate*);
DEFINE_IL2CPP_CLASS(::Rewired::IGamepadTemplate*, "Rewired", "IGamepadTemplate");
// Dependencies 
namespace Rewired {
// Is value type: false
// CS Name: Rewired.IGamepadTemplate
class CORDL_TYPE IGamepadTemplate {
public:
// Declarations
 __declspec(property(get=get_a)) ::Rewired::IControllerTemplateButton*  a;

 __declspec(property(get=get_actionBottomRow1)) ::Rewired::IControllerTemplateButton*  actionBottomRow1;

 __declspec(property(get=get_actionBottomRow2)) ::Rewired::IControllerTemplateButton*  actionBottomRow2;

 __declspec(property(get=get_actionBottomRow3)) ::Rewired::IControllerTemplateButton*  actionBottomRow3;

 __declspec(property(get=get_actionTopRow1)) ::Rewired::IControllerTemplateButton*  actionTopRow1;

 __declspec(property(get=get_actionTopRow2)) ::Rewired::IControllerTemplateButton*  actionTopRow2;

 __declspec(property(get=get_actionTopRow3)) ::Rewired::IControllerTemplateButton*  actionTopRow3;

 __declspec(property(get=get_b)) ::Rewired::IControllerTemplateButton*  b;

 __declspec(property(get=get_back)) ::Rewired::IControllerTemplateButton*  back;

 __declspec(property(get=get_c)) ::Rewired::IControllerTemplateButton*  c;

 __declspec(property(get=get_center1)) ::Rewired::IControllerTemplateButton*  center1;

 __declspec(property(get=get_center2)) ::Rewired::IControllerTemplateButton*  center2;

 __declspec(property(get=get_center3)) ::Rewired::IControllerTemplateButton*  center3;

 __declspec(property(get=get_dPad)) ::Rewired::IControllerTemplateDPad*  dPad;

 __declspec(property(get=get_guide)) ::Rewired::IControllerTemplateButton*  guide;

 __declspec(property(get=get_leftBumper)) ::Rewired::IControllerTemplateButton*  leftBumper;

 __declspec(property(get=get_leftShoulder1)) ::Rewired::IControllerTemplateButton*  leftShoulder1;

 __declspec(property(get=get_leftShoulder2)) ::Rewired::IControllerTemplateAxis*  leftShoulder2;

 __declspec(property(get=get_leftStick)) ::Rewired::IControllerTemplateThumbStick*  leftStick;

 __declspec(property(get=get_leftTrigger)) ::Rewired::IControllerTemplateAxis*  leftTrigger;

 __declspec(property(get=get_rightBumper)) ::Rewired::IControllerTemplateButton*  rightBumper;

 __declspec(property(get=get_rightShoulder1)) ::Rewired::IControllerTemplateButton*  rightShoulder1;

 __declspec(property(get=get_rightShoulder2)) ::Rewired::IControllerTemplateAxis*  rightShoulder2;

 __declspec(property(get=get_rightStick)) ::Rewired::IControllerTemplateThumbStick*  rightStick;

 __declspec(property(get=get_rightTrigger)) ::Rewired::IControllerTemplateAxis*  rightTrigger;

 __declspec(property(get=get_start)) ::Rewired::IControllerTemplateButton*  start;

 __declspec(property(get=get_x)) ::Rewired::IControllerTemplateButton*  x;

 __declspec(property(get=get_y)) ::Rewired::IControllerTemplateButton*  y;

 __declspec(property(get=get_z)) ::Rewired::IControllerTemplateButton*  z;

/// @brief Convert operator to "::Rewired::IControllerTemplate"
constexpr operator  ::Rewired::IControllerTemplate*() noexcept;

/// @brief Method get_a, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_a() ;

/// @brief Method get_actionBottomRow1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_actionBottomRow1() ;

/// @brief Method get_actionBottomRow2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_actionBottomRow2() ;

/// @brief Method get_actionBottomRow3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_actionBottomRow3() ;

/// @brief Method get_actionTopRow1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_actionTopRow1() ;

/// @brief Method get_actionTopRow2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_actionTopRow2() ;

/// @brief Method get_actionTopRow3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_actionTopRow3() ;

/// @brief Method get_b, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_b() ;

/// @brief Method get_back, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_back() ;

/// @brief Method get_c, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_c() ;

/// @brief Method get_center1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_center1() ;

/// @brief Method get_center2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_center2() ;

/// @brief Method get_center3, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_center3() ;

/// @brief Method get_dPad, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateDPad* get_dPad() ;

/// @brief Method get_guide, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_guide() ;

/// @brief Method get_leftBumper, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_leftBumper() ;

/// @brief Method get_leftShoulder1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_leftShoulder1() ;

/// @brief Method get_leftShoulder2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_leftShoulder2() ;

/// @brief Method get_leftStick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateThumbStick* get_leftStick() ;

/// @brief Method get_leftTrigger, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_leftTrigger() ;

/// @brief Method get_rightBumper, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_rightBumper() ;

/// @brief Method get_rightShoulder1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_rightShoulder1() ;

/// @brief Method get_rightShoulder2, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_rightShoulder2() ;

/// @brief Method get_rightStick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateThumbStick* get_rightStick() ;

/// @brief Method get_rightTrigger, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateAxis* get_rightTrigger() ;

/// @brief Method get_start, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_start() ;

/// @brief Method get_x, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_x() ;

/// @brief Method get_y, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_y() ;

/// @brief Method get_z, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplateButton* get_z() ;

/// @brief Convert to "::Rewired::IControllerTemplate"
constexpr ::Rewired::IControllerTemplate* i___Rewired__IControllerTemplate() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IGamepadTemplate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGamepadTemplate(IGamepadTemplate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5642};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired
