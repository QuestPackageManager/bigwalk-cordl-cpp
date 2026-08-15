#pragma once
// IWYU pragma private; include "Rewired/ElementAssignmentConflictInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__ModifierKeyFlags_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementAssignmentConflictInfo)
namespace Rewired {
class ActionElementMap;
}
namespace Rewired {
class ControllerElementIdentifier;
}
namespace Rewired {
struct ControllerElementType;
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
namespace Rewired {
class InputAction;
}
namespace Rewired {
struct ModifierKeyFlags;
}
namespace Rewired {
class Player;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace Rewired {
struct ElementAssignmentConflictInfo;
}
// Write type traits
MARK_VAL_T(::Rewired::ElementAssignmentConflictInfo);
DEFINE_IL2CPP_CLASS(::Rewired::ElementAssignmentConflictInfo, "Rewired", "ElementAssignmentConflictInfo");
// Dependencies Rewired.ControllerElementType, Rewired.ControllerType, Rewired.ModifierKeyFlags, UnityEngine.KeyCode
namespace Rewired {
// Is value type: true
// CS Name: Rewired.ElementAssignmentConflictInfo
struct CORDL_TYPE ElementAssignmentConflictInfo {
public:
// Declarations
 __declspec(property(get=get_action)) ::Rewired::InputAction*  action;

 __declspec(property(get=get_actionId, put=lCuFCDDCSYIfJRCtFOZxrDYdlAIDb)) int32_t  actionId;

 __declspec(property(get=get_controller)) ::Rewired::Controller*  controller;

 __declspec(property(get=get_controllerId, put=meadLqbgfINwDABhGxUJGNUSjHWj)) int32_t  controllerId;

 __declspec(property(get=get_controllerMap)) ::Rewired::ControllerMap*  controllerMap;

 __declspec(property(get=get_controllerMapId, put=mwmhmNADqbcdjKIFiBWdXwPKRUznA)) int32_t  controllerMapId;

 __declspec(property(get=get_controllerType, put=hmHAOlmNTWRqAiKYJAyfhhicVgid)) ::Rewired::ControllerType  controllerType;

 __declspec(property(get=get_elementDisplayName)) ::StringW  elementDisplayName;

 __declspec(property(get=get_elementIdentifier)) ::Rewired::ControllerElementIdentifier*  elementIdentifier;

 __declspec(property(get=get_elementIdentifierId, put=TWyqrGUhvgJyNvVhuMTBSGbhjiuB)) int32_t  elementIdentifierId;

 __declspec(property(get=get_elementMap)) ::Rewired::ActionElementMap*  elementMap;

 __declspec(property(get=get_elementMapId, put=GBJAfyvraspGVUtYlTsoywAOGBBk)) int32_t  elementMapId;

 __declspec(property(get=get_elementType, put=iMFXTimEpsFYIHZiLYGwaQLklXdqA)) ::Rewired::ControllerElementType  elementType;

 __declspec(property(get=get_isConflict, put=mMxqRpUUCYAiNRctctJxDAZXbKoc)) bool  isConflict;

 __declspec(property(get=get_isUserAssignable, put=kaoVZRlffuhDuYgyVviBnzlBFJUf)) bool  isUserAssignable;

 __declspec(property(get=get_keyCode, put=ZqTUOZfNvTAJbuokXAdsnpcdJhKs)) ::UnityEngine::KeyCode  keyCode;

 __declspec(property(get=get_modifierKeyFlags, put=DYzZPCijsMBgWtKoYHRCYuuglNDr)) ::Rewired::ModifierKeyFlags  modifierKeyFlags;

 __declspec(property(get=get_player)) ::Rewired::Player*  player;

 __declspec(property(get=get_playerId, put=CPYnGICJSzAmnfvptZfRsRGaeLlE)) int32_t  playerId;

/// @brief Method CPYnGICJSzAmnfvptZfRsRGaeLlE, addr 0x1803bda60, size 0x10, virtual false, abstract: false, final false
inline void CPYnGICJSzAmnfvptZfRsRGaeLlE(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method DYzZPCijsMBgWtKoYHRCYuuglNDr, addr 0x180396f00, size 0x10, virtual false, abstract: false, final false
inline void DYzZPCijsMBgWtKoYHRCYuuglNDr(::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method GBJAfyvraspGVUtYlTsoywAOGBBk, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void GBJAfyvraspGVUtYlTsoywAOGBBk(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method TWyqrGUhvgJyNvVhuMTBSGbhjiuB, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void TWyqrGUhvgJyNvVhuMTBSGbhjiuB(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ZqTUOZfNvTAJbuokXAdsnpcdJhKs, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void ZqTUOZfNvTAJbuokXAdsnpcdJhKs(::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181841d30, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ElementAssignmentConflictInfo  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181841cd0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(bool  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_8, int32_t  _cordl_fixed_empty_name_whitespace_param_9, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_11) ;

/// @brief Method get_action, addr 0x181841dc0, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::InputAction* get_action() ;

/// @brief Method get_actionId, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_actionId() ;

/// @brief Method get_controller, addr 0x181841ec0, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::Controller* get_controller() ;

/// @brief Method get_controllerId, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline int32_t get_controllerId() ;

/// @brief Method get_controllerMap, addr 0x181841e50, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::ControllerMap* get_controllerMap() ;

/// @brief Method get_controllerMapId, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_controllerMapId() ;

/// @brief Method get_controllerType, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerType get_controllerType() ;

/// @brief Method get_elementDisplayName, addr 0x181841f50, size 0x90, virtual false, abstract: false, final false
inline ::StringW get_elementDisplayName() ;

/// @brief Method get_elementIdentifier, addr 0x181841fe0, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementIdentifier* get_elementIdentifier() ;

/// @brief Method get_elementIdentifierId, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_elementIdentifierId() ;

/// @brief Method get_elementMap, addr 0x181842030, size 0x100, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* get_elementMap() ;

/// @brief Method get_elementMapId, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_elementMapId() ;

/// @brief Method get_elementType, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementType get_elementType() ;

/// @brief Method get_isConflict, addr 0x180311f90, size 0x20, virtual false, abstract: false, final false
inline bool get_isConflict() ;

/// @brief Method get_isUserAssignable, addr 0x180438d00, size 0x20, virtual false, abstract: false, final false
inline bool get_isUserAssignable() ;

/// @brief Method get_keyCode, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::KeyCode get_keyCode() ;

/// @brief Method get_modifierKeyFlags, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ModifierKeyFlags get_modifierKeyFlags() ;

/// @brief Method get_player, addr 0x181842130, size 0x130, virtual false, abstract: false, final false
inline ::Rewired::Player* get_player() ;

/// @brief Method get_playerId, addr 0x18038fe90, size 0x10, virtual false, abstract: false, final false
inline int32_t get_playerId() ;

/// @brief Method hmHAOlmNTWRqAiKYJAyfhhicVgid, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void hmHAOlmNTWRqAiKYJAyfhhicVgid(::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method iMFXTimEpsFYIHZiLYGwaQLklXdqA, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void iMFXTimEpsFYIHZiLYGwaQLklXdqA(::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method kaoVZRlffuhDuYgyVviBnzlBFJUf, addr 0x1805ed730, size 0x10, virtual false, abstract: false, final false
inline void kaoVZRlffuhDuYgyVviBnzlBFJUf(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method lCuFCDDCSYIfJRCtFOZxrDYdlAIDb, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void lCuFCDDCSYIfJRCtFOZxrDYdlAIDb(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method mMxqRpUUCYAiNRctctJxDAZXbKoc, addr 0x1804bda60, size 0x10, virtual false, abstract: false, final false
inline void mMxqRpUUCYAiNRctctJxDAZXbKoc(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method meadLqbgfINwDABhGxUJGNUSjHWj, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void meadLqbgfINwDABhGxUJGNUSjHWj(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method mwmhmNADqbcdjKIFiBWdXwPKRUznA, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void mwmhmNADqbcdjKIFiBWdXwPKRUznA(int32_t  _cordl_fixed_empty_name_whitespace) ;

// Ctor Parameters []
// @brief default ctor
constexpr ElementAssignmentConflictInfo() ;

// Ctor Parameters [CppParam { name: "JqywQtQlcCBMgniCTWKZsNeXbOXB", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "RKcXHLuMqKVZmCMTRbOYLXDGsBTS", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "lhJEXbHaChsFxJRdIAHLJjCRzwOS", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "KGdqZbLoueLJrBHBcAKPqDgzMPMI", ty: "::Rewired::ControllerType", modifiers: "", def_value: None }, CppParam { name: "BomsZEpldEbtRRDfELgTLgswgLUK", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "aiYYzOGqTkkwSJTFxSBYKDLXHfujA", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nvSduEouzSEHqyfdHtcJrrvGrjLW", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ihYuzHnEAoUKVuYaDaGcpwtYovaE", ty: "::Rewired::ControllerElementType", modifiers: "", def_value: None }, CppParam { name: "vmOubzOYCsNfjzovCczTERlWIjXjb", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "iVLlowuLYOxqjVoYAJTNKJWojhrP", ty: "::UnityEngine::KeyCode", modifiers: "", def_value: None }, CppParam { name: "oLjeeNoQiboLBCSSqLPeMiJWJHdV", ty: "::Rewired::ModifierKeyFlags", modifiers: "", def_value: None }, CppParam { name: "mnSbliJoOSWhWNvgUJYDUYAsUzGHA", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ElementAssignmentConflictInfo(bool  JqywQtQlcCBMgniCTWKZsNeXbOXB, bool  RKcXHLuMqKVZmCMTRbOYLXDGsBTS, int32_t  lhJEXbHaChsFxJRdIAHLJjCRzwOS, ::Rewired::ControllerType  KGdqZbLoueLJrBHBcAKPqDgzMPMI, int32_t  BomsZEpldEbtRRDfELgTLgswgLUK, int32_t  aiYYzOGqTkkwSJTFxSBYKDLXHfujA, int32_t  nvSduEouzSEHqyfdHtcJrrvGrjLW, ::Rewired::ControllerElementType  ihYuzHnEAoUKVuYaDaGcpwtYovaE, int32_t  vmOubzOYCsNfjzovCczTERlWIjXjb, ::UnityEngine::KeyCode  iVLlowuLYOxqjVoYAJTNKJWojhrP, ::Rewired::ModifierKeyFlags  oLjeeNoQiboLBCSSqLPeMiJWJHdV, int32_t  mnSbliJoOSWhWNvgUJYDUYAsUzGHA) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1753};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field JqywQtQlcCBMgniCTWKZsNeXbOXB, offset: 0x0, size: 0x1, def value: None
 bool  JqywQtQlcCBMgniCTWKZsNeXbOXB;

/// @brief Field RKcXHLuMqKVZmCMTRbOYLXDGsBTS, offset: 0x1, size: 0x1, def value: None
 bool  RKcXHLuMqKVZmCMTRbOYLXDGsBTS;

/// @brief Field lhJEXbHaChsFxJRdIAHLJjCRzwOS, offset: 0x4, size: 0x4, def value: None
 int32_t  lhJEXbHaChsFxJRdIAHLJjCRzwOS;

/// @brief Field KGdqZbLoueLJrBHBcAKPqDgzMPMI, offset: 0x8, size: 0x4, def value: None
 ::Rewired::ControllerType  KGdqZbLoueLJrBHBcAKPqDgzMPMI;

/// @brief Field BomsZEpldEbtRRDfELgTLgswgLUK, offset: 0xc, size: 0x4, def value: None
 int32_t  BomsZEpldEbtRRDfELgTLgswgLUK;

/// @brief Field aiYYzOGqTkkwSJTFxSBYKDLXHfujA, offset: 0x10, size: 0x4, def value: None
 int32_t  aiYYzOGqTkkwSJTFxSBYKDLXHfujA;

/// @brief Field nvSduEouzSEHqyfdHtcJrrvGrjLW, offset: 0x14, size: 0x4, def value: None
 int32_t  nvSduEouzSEHqyfdHtcJrrvGrjLW;

/// @brief Field ihYuzHnEAoUKVuYaDaGcpwtYovaE, offset: 0x18, size: 0x4, def value: None
 ::Rewired::ControllerElementType  ihYuzHnEAoUKVuYaDaGcpwtYovaE;

/// @brief Field vmOubzOYCsNfjzovCczTERlWIjXjb, offset: 0x1c, size: 0x4, def value: None
 int32_t  vmOubzOYCsNfjzovCczTERlWIjXjb;

/// @brief Field iVLlowuLYOxqjVoYAJTNKJWojhrP, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::KeyCode  iVLlowuLYOxqjVoYAJTNKJWojhrP;

/// @brief Field oLjeeNoQiboLBCSSqLPeMiJWJHdV, offset: 0x24, size: 0x4, def value: None
 ::Rewired::ModifierKeyFlags  oLjeeNoQiboLBCSSqLPeMiJWJHdV;

/// @brief Field mnSbliJoOSWhWNvgUJYDUYAsUzGHA, offset: 0x28, size: 0x4, def value: None
 int32_t  mnSbliJoOSWhWNvgUJYDUYAsUzGHA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ElementAssignmentConflictInfo, JqywQtQlcCBMgniCTWKZsNeXbOXB) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictInfo, RKcXHLuMqKVZmCMTRbOYLXDGsBTS) == 0x1, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictInfo, lhJEXbHaChsFxJRdIAHLJjCRzwOS) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictInfo, KGdqZbLoueLJrBHBcAKPqDgzMPMI) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictInfo, BomsZEpldEbtRRDfELgTLgswgLUK) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictInfo, aiYYzOGqTkkwSJTFxSBYKDLXHfujA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictInfo, nvSduEouzSEHqyfdHtcJrrvGrjLW) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictInfo, ihYuzHnEAoUKVuYaDaGcpwtYovaE) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictInfo, vmOubzOYCsNfjzovCczTERlWIjXjb) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictInfo, iVLlowuLYOxqjVoYAJTNKJWojhrP) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictInfo, oLjeeNoQiboLBCSSqLPeMiJWJHdV) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictInfo, mnSbliJoOSWhWNvgUJYDUYAsUzGHA) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::ElementAssignmentConflictInfo) == 0x2c, "Size mismatch!");

} // namespace end def Rewired
