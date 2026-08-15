#pragma once
// IWYU pragma private; include "GlobalNamespace/NonMatchingControllerDisabler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NonMatchingControllerDisabler)
namespace Rewired {
class ControllerStatusChangedEventArgs;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class NonMatchingControllerDisabler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NonMatchingControllerDisabler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NonMatchingControllerDisabler*, "", "NonMatchingControllerDisabler");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NonMatchingControllerDisabler
class CORDL_TYPE NonMatchingControllerDisabler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field joystickGuidValid, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_joystickGuidValid, put=__cordl_internal_set_joystickGuidValid)) ::StringW  joystickGuidValid;

/// @brief Field target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::GameObject>  target;

/// @brief Method EvaluateJoystickType, addr 0x18037f350, size 0x2b0, virtual false, abstract: false, final false
inline void EvaluateJoystickType() ;

static inline ::GlobalNamespace::NonMatchingControllerDisabler* New_ctor() ;

/// @brief Method OnControllerChanged, addr 0x18037f600, size 0x10, virtual false, abstract: false, final false
inline void OnControllerChanged(::Rewired::ControllerStatusChangedEventArgs*  obj) ;

/// @brief Method OnEnable, addr 0x18037f610, size 0x130, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::StringW const& __cordl_internal_get_joystickGuidValid() const;

constexpr ::StringW& __cordl_internal_get_joystickGuidValid() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_joystickGuidValid(::StringW  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NonMatchingControllerDisabler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NonMatchingControllerDisabler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NonMatchingControllerDisabler(NonMatchingControllerDisabler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NonMatchingControllerDisabler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NonMatchingControllerDisabler(NonMatchingControllerDisabler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5552};

/// @brief Field joystickGuidValid, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___joystickGuidValid;

/// @brief Field target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NonMatchingControllerDisabler, ___joystickGuidValid) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NonMatchingControllerDisabler, ___target) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NonMatchingControllerDisabler) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
