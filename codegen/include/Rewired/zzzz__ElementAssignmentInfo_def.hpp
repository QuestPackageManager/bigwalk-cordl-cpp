#pragma once
// IWYU pragma private; include "Rewired/ElementAssignmentInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__ModifierKeyFlags_def.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElementAssignmentInfo)
namespace Rewired {
class ActionElementMap;
}
namespace Rewired {
struct AxisRange;
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
struct ElementAssignment;
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
namespace Rewired {
struct Pole;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace Rewired {
class ElementAssignmentInfo;
}
// Write type traits
MARK_REF_T(::Rewired::ElementAssignmentInfo*);
DEFINE_IL2CPP_CLASS(::Rewired::ElementAssignmentInfo*, "Rewired", "ElementAssignmentInfo");
// Dependencies Rewired.AxisRange, Rewired.ControllerElementType, Rewired.ModifierKeyFlags, Rewired.Pole, System.Object, UnityEngine.KeyCode
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ElementAssignmentInfo
class CORDL_TYPE ElementAssignmentInfo : public ::System::Object {
public:
// Declarations
/// @brief Field IldZaPsIyZrNjgoYgsXtztiZNthk, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_IldZaPsIyZrNjgoYgsXtztiZNthk, put=__cordl_internal_set_IldZaPsIyZrNjgoYgsXtztiZNthk)) int32_t  IldZaPsIyZrNjgoYgsXtztiZNthk;

/// @brief Field MqaMzBrrsLqAtufTzdnThxFYuxiuA, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_MqaMzBrrsLqAtufTzdnThxFYuxiuA, put=__cordl_internal_set_MqaMzBrrsLqAtufTzdnThxFYuxiuA)) ::Rewired::Pole  MqaMzBrrsLqAtufTzdnThxFYuxiuA;

/// @brief Field OrFlTnvJFfaYkAaGdQhDmKdGrnrG, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OrFlTnvJFfaYkAaGdQhDmKdGrnrG, put=__cordl_internal_set_OrFlTnvJFfaYkAaGdQhDmKdGrnrG)) ::Rewired::ControllerMap*  OrFlTnvJFfaYkAaGdQhDmKdGrnrG;

/// @brief Field RMKBitBdTNxjtIRlyVPmaLOxwNtk, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_RMKBitBdTNxjtIRlyVPmaLOxwNtk, put=__cordl_internal_set_RMKBitBdTNxjtIRlyVPmaLOxwNtk)) ::Rewired::ModifierKeyFlags  RMKBitBdTNxjtIRlyVPmaLOxwNtk;

 __declspec(property(get=get_action)) ::Rewired::InputAction*  action;

 __declspec(property(get=get_axisContribution)) ::Rewired::Pole  axisContribution;

 __declspec(property(get=get_axisRange)) ::Rewired::AxisRange  axisRange;

 __declspec(property(get=get_controller)) ::Rewired::Controller*  controller;

 __declspec(property(get=get_controllerId)) int32_t  controllerId;

 __declspec(property(get=get_controllerMap)) ::Rewired::ControllerMap*  controllerMap;

 __declspec(property(get=get_controllerType)) ::Rewired::ControllerType  controllerType;

/// @brief Field dNOnBRNqNKipldTWfreELVeWUTmd, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_dNOnBRNqNKipldTWfreELVeWUTmd, put=__cordl_internal_set_dNOnBRNqNKipldTWfreELVeWUTmd)) ::Rewired::ControllerElementType  dNOnBRNqNKipldTWfreELVeWUTmd;

/// @brief Field eKjZQowhhRclUMYLomKYorkpVGGE, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_eKjZQowhhRclUMYLomKYorkpVGGE, put=__cordl_internal_set_eKjZQowhhRclUMYLomKYorkpVGGE)) int32_t  eKjZQowhhRclUMYLomKYorkpVGGE;

 __declspec(property(get=get_elementDisplayName)) ::StringW  elementDisplayName;

 __declspec(property(get=get_elementIdentifier)) ::Rewired::ControllerElementIdentifier*  elementIdentifier;

 __declspec(property(get=get_elementMap)) ::Rewired::ActionElementMap*  elementMap;

 __declspec(property(get=get_elementType)) ::Rewired::ControllerElementType  elementType;

/// @brief Field frcLehcUNhIctycqZcKDbTJylZcKA, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_frcLehcUNhIctycqZcKDbTJylZcKA, put=__cordl_internal_set_frcLehcUNhIctycqZcKDbTJylZcKA)) ::UnityEngine::KeyCode  frcLehcUNhIctycqZcKDbTJylZcKA;

 __declspec(property(get=get_invert)) bool  invert;

/// @brief Field jtFhDITsAJqSZYpLnQYlmFdwAKgS, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_jtFhDITsAJqSZYpLnQYlmFdwAKgS, put=__cordl_internal_set_jtFhDITsAJqSZYpLnQYlmFdwAKgS)) ::Rewired::AxisRange  jtFhDITsAJqSZYpLnQYlmFdwAKgS;

 __declspec(property(get=get_keyCode)) ::UnityEngine::KeyCode  keyCode;

 __declspec(property(get=get_modifierKeyFlags)) ::Rewired::ModifierKeyFlags  modifierKeyFlags;

/// @brief Field oVpSDXkiIBRTfnJMidDHqTkTmWHn, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_oVpSDXkiIBRTfnJMidDHqTkTmWHn, put=__cordl_internal_set_oVpSDXkiIBRTfnJMidDHqTkTmWHn)) bool  oVpSDXkiIBRTfnJMidDHqTkTmWHn;

 __declspec(property(get=get_player)) ::Rewired::Player*  player;

/// @brief Field tootIMkgNKfyKksRwqRcNgWLFmxg, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_tootIMkgNKfyKksRwqRcNgWLFmxg, put=__cordl_internal_set_tootIMkgNKfyKksRwqRcNgWLFmxg)) int32_t  tootIMkgNKfyKksRwqRcNgWLFmxg;

static inline ::Rewired::ElementAssignmentInfo* New_ctor(::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr int32_t const& __cordl_internal_get_IldZaPsIyZrNjgoYgsXtztiZNthk() const;

constexpr int32_t& __cordl_internal_get_IldZaPsIyZrNjgoYgsXtztiZNthk() ;

constexpr ::Rewired::Pole const& __cordl_internal_get_MqaMzBrrsLqAtufTzdnThxFYuxiuA() const;

constexpr ::Rewired::Pole& __cordl_internal_get_MqaMzBrrsLqAtufTzdnThxFYuxiuA() ;

constexpr ::Rewired::ControllerMap* const& __cordl_internal_get_OrFlTnvJFfaYkAaGdQhDmKdGrnrG() const;

constexpr ::Rewired::ControllerMap*& __cordl_internal_get_OrFlTnvJFfaYkAaGdQhDmKdGrnrG() ;

constexpr ::Rewired::ModifierKeyFlags const& __cordl_internal_get_RMKBitBdTNxjtIRlyVPmaLOxwNtk() const;

constexpr ::Rewired::ModifierKeyFlags& __cordl_internal_get_RMKBitBdTNxjtIRlyVPmaLOxwNtk() ;

constexpr ::Rewired::ControllerElementType const& __cordl_internal_get_dNOnBRNqNKipldTWfreELVeWUTmd() const;

constexpr ::Rewired::ControllerElementType& __cordl_internal_get_dNOnBRNqNKipldTWfreELVeWUTmd() ;

constexpr int32_t const& __cordl_internal_get_eKjZQowhhRclUMYLomKYorkpVGGE() const;

constexpr int32_t& __cordl_internal_get_eKjZQowhhRclUMYLomKYorkpVGGE() ;

constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_frcLehcUNhIctycqZcKDbTJylZcKA() const;

constexpr ::UnityEngine::KeyCode& __cordl_internal_get_frcLehcUNhIctycqZcKDbTJylZcKA() ;

constexpr ::Rewired::AxisRange const& __cordl_internal_get_jtFhDITsAJqSZYpLnQYlmFdwAKgS() const;

constexpr ::Rewired::AxisRange& __cordl_internal_get_jtFhDITsAJqSZYpLnQYlmFdwAKgS() ;

constexpr bool const& __cordl_internal_get_oVpSDXkiIBRTfnJMidDHqTkTmWHn() const;

constexpr bool& __cordl_internal_get_oVpSDXkiIBRTfnJMidDHqTkTmWHn() ;

constexpr int32_t const& __cordl_internal_get_tootIMkgNKfyKksRwqRcNgWLFmxg() const;

constexpr int32_t& __cordl_internal_get_tootIMkgNKfyKksRwqRcNgWLFmxg() ;

constexpr void __cordl_internal_set_IldZaPsIyZrNjgoYgsXtztiZNthk(int32_t  value) ;

constexpr void __cordl_internal_set_MqaMzBrrsLqAtufTzdnThxFYuxiuA(::Rewired::Pole  value) ;

constexpr void __cordl_internal_set_OrFlTnvJFfaYkAaGdQhDmKdGrnrG(::Rewired::ControllerMap*  value) ;

constexpr void __cordl_internal_set_RMKBitBdTNxjtIRlyVPmaLOxwNtk(::Rewired::ModifierKeyFlags  value) ;

constexpr void __cordl_internal_set_dNOnBRNqNKipldTWfreELVeWUTmd(::Rewired::ControllerElementType  value) ;

constexpr void __cordl_internal_set_eKjZQowhhRclUMYLomKYorkpVGGE(int32_t  value) ;

constexpr void __cordl_internal_set_frcLehcUNhIctycqZcKDbTJylZcKA(::UnityEngine::KeyCode  value) ;

constexpr void __cordl_internal_set_jtFhDITsAJqSZYpLnQYlmFdwAKgS(::Rewired::AxisRange  value) ;

constexpr void __cordl_internal_set_oVpSDXkiIBRTfnJMidDHqTkTmWHn(bool  value) ;

constexpr void __cordl_internal_set_tootIMkgNKfyKksRwqRcNgWLFmxg(int32_t  value) ;

/// @brief Method .ctor, addr 0x181842260, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementAssignment  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_action, addr 0x181842310, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::InputAction* get_action() ;

/// @brief Method get_axisContribution, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Pole get_axisContribution() ;

/// @brief Method get_axisRange, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::AxisRange get_axisRange() ;

/// @brief Method get_controller, addr 0x181842470, size 0xc0, virtual false, abstract: false, final false
inline ::Rewired::Controller* get_controller() ;

/// @brief Method get_controllerId, addr 0x181842390, size 0x70, virtual false, abstract: false, final false
inline int32_t get_controllerId() ;

/// @brief Method get_controllerMap, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerMap* get_controllerMap() ;

/// @brief Method get_controllerType, addr 0x181842400, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::ControllerType get_controllerType() ;

/// @brief Method get_elementDisplayName, addr 0x181842530, size 0x100, virtual false, abstract: false, final false
inline ::StringW get_elementDisplayName() ;

/// @brief Method get_elementIdentifier, addr 0x181842630, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementIdentifier* get_elementIdentifier() ;

/// @brief Method get_elementMap, addr 0x181842680, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* get_elementMap() ;

/// @brief Method get_elementType, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementType get_elementType() ;

/// @brief Method get_invert, addr 0x1803023c0, size 0x10, virtual false, abstract: false, final false
inline bool get_invert() ;

/// @brief Method get_keyCode, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::KeyCode get_keyCode() ;

/// @brief Method get_modifierKeyFlags, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ModifierKeyFlags get_modifierKeyFlags() ;

/// @brief Method get_player, addr 0x1818426b0, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Player* get_player() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ElementAssignmentInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ElementAssignmentInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ElementAssignmentInfo(ElementAssignmentInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ElementAssignmentInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ElementAssignmentInfo(ElementAssignmentInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1756};

/// @brief Field OrFlTnvJFfaYkAaGdQhDmKdGrnrG, offset: 0x10, size: 0x8, def value: None
 ::Rewired::ControllerMap*  ___OrFlTnvJFfaYkAaGdQhDmKdGrnrG;

/// @brief Field dNOnBRNqNKipldTWfreELVeWUTmd, offset: 0x18, size: 0x4, def value: None
 ::Rewired::ControllerElementType  ___dNOnBRNqNKipldTWfreELVeWUTmd;

/// @brief Field IldZaPsIyZrNjgoYgsXtztiZNthk, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___IldZaPsIyZrNjgoYgsXtztiZNthk;

/// @brief Field eKjZQowhhRclUMYLomKYorkpVGGE, offset: 0x20, size: 0x4, def value: None
 int32_t  ___eKjZQowhhRclUMYLomKYorkpVGGE;

/// @brief Field jtFhDITsAJqSZYpLnQYlmFdwAKgS, offset: 0x24, size: 0x4, def value: None
 ::Rewired::AxisRange  ___jtFhDITsAJqSZYpLnQYlmFdwAKgS;

/// @brief Field frcLehcUNhIctycqZcKDbTJylZcKA, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::KeyCode  ___frcLehcUNhIctycqZcKDbTJylZcKA;

/// @brief Field RMKBitBdTNxjtIRlyVPmaLOxwNtk, offset: 0x2c, size: 0x4, def value: None
 ::Rewired::ModifierKeyFlags  ___RMKBitBdTNxjtIRlyVPmaLOxwNtk;

/// @brief Field tootIMkgNKfyKksRwqRcNgWLFmxg, offset: 0x30, size: 0x4, def value: None
 int32_t  ___tootIMkgNKfyKksRwqRcNgWLFmxg;

/// @brief Field MqaMzBrrsLqAtufTzdnThxFYuxiuA, offset: 0x34, size: 0x4, def value: None
 ::Rewired::Pole  ___MqaMzBrrsLqAtufTzdnThxFYuxiuA;

/// @brief Field oVpSDXkiIBRTfnJMidDHqTkTmWHn, offset: 0x38, size: 0x1, def value: None
 bool  ___oVpSDXkiIBRTfnJMidDHqTkTmWHn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ElementAssignmentInfo, ___OrFlTnvJFfaYkAaGdQhDmKdGrnrG) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentInfo, ___dNOnBRNqNKipldTWfreELVeWUTmd) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentInfo, ___IldZaPsIyZrNjgoYgsXtztiZNthk) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentInfo, ___eKjZQowhhRclUMYLomKYorkpVGGE) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentInfo, ___jtFhDITsAJqSZYpLnQYlmFdwAKgS) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentInfo, ___frcLehcUNhIctycqZcKDbTJylZcKA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentInfo, ___RMKBitBdTNxjtIRlyVPmaLOxwNtk) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentInfo, ___tootIMkgNKfyKksRwqRcNgWLFmxg) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentInfo, ___MqaMzBrrsLqAtufTzdnThxFYuxiuA) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentInfo, ___oVpSDXkiIBRTfnJMidDHqTkTmWHn) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Rewired::ElementAssignmentInfo) == 0x40, "Size mismatch!");

} // namespace end def Rewired
