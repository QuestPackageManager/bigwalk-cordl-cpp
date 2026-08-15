#pragma once
// IWYU pragma private; include "Rewired/InputActionSourceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputActionSourceData)
namespace GlobalNamespace {
class bhChVCsoZfXwOtSMCrjHRmszBFgBA;
}
namespace Rewired {
class ActionElementMap;
}
namespace Rewired {
class ControllerMap;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class Controller;
}
// Forward declare root types
namespace Rewired {
struct InputActionSourceData;
}
// Write type traits
MARK_VAL_T(::Rewired::InputActionSourceData);
DEFINE_IL2CPP_CLASS(::Rewired::InputActionSourceData, "Rewired", "InputActionSourceData");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.InputActionSourceData
struct CORDL_TYPE InputActionSourceData {
public:
// Declarations
 __declspec(property(get=get_actionElementMap)) ::Rewired::ActionElementMap*  actionElementMap;

 __declspec(property(get=get_controller)) ::Rewired::Controller*  controller;

 __declspec(property(get=get_controllerMap)) ::Rewired::ControllerMap*  controllerMap;

 __declspec(property(get=get_controllerType)) ::Rewired::ControllerType  controllerType;

 __declspec(property(get=get_elementIdentifierName)) ::StringW  elementIdentifierName;

/// @brief Method .ctor, addr 0x1818446a0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::bhChVCsoZfXwOtSMCrjHRmszBFgBA*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x18053eeb0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method get_actionElementMap, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* get_actionElementMap() ;

/// @brief Method get_controller, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Controller* get_controller() ;

/// @brief Method get_controllerMap, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerMap* get_controllerMap() ;

/// @brief Method get_controllerType, addr 0x181844700, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::ControllerType get_controllerType() ;

/// @brief Method get_elementIdentifierName, addr 0x181844730, size 0x60, virtual false, abstract: false, final false
inline ::StringW get_elementIdentifierName() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionSourceData() ;

// Ctor Parameters [CppParam { name: "oeyeJYJlBDMxxeazcJeWXXCmLptM", ty: "::Rewired::Controller*", modifiers: "", def_value: None }, CppParam { name: "dQmQsVKAkwjVkvMKDMGZHQxZIMqW", ty: "::Rewired::ControllerMap*", modifiers: "", def_value: None }, CppParam { name: "IWvstEEFRApViCSnMTIUDvlQfqUO", ty: "::Rewired::ActionElementMap*", modifiers: "", def_value: None }]
constexpr InputActionSourceData(::Rewired::Controller*  oeyeJYJlBDMxxeazcJeWXXCmLptM, ::Rewired::ControllerMap*  dQmQsVKAkwjVkvMKDMGZHQxZIMqW, ::Rewired::ActionElementMap*  IWvstEEFRApViCSnMTIUDvlQfqUO) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1757};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field oeyeJYJlBDMxxeazcJeWXXCmLptM, offset: 0x0, size: 0x8, def value: None
 ::Rewired::Controller*  oeyeJYJlBDMxxeazcJeWXXCmLptM;

/// @brief Field dQmQsVKAkwjVkvMKDMGZHQxZIMqW, offset: 0x8, size: 0x8, def value: None
 ::Rewired::ControllerMap*  dQmQsVKAkwjVkvMKDMGZHQxZIMqW;

/// @brief Field IWvstEEFRApViCSnMTIUDvlQfqUO, offset: 0x10, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  IWvstEEFRApViCSnMTIUDvlQfqUO;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputActionSourceData, oeyeJYJlBDMxxeazcJeWXXCmLptM) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputActionSourceData, dQmQsVKAkwjVkvMKDMGZHQxZIMqW) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::InputActionSourceData, IWvstEEFRApViCSnMTIUDvlQfqUO) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputActionSourceData) == 0x18, "Size mismatch!");

} // namespace end def Rewired
