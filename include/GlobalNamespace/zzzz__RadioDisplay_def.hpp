#pragma once
// IWYU pragma private; include "GlobalNamespace/RadioDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RadioDisplay)
namespace GlobalNamespace {
class FlareDriver;
}
namespace GlobalNamespace {
class PropertyBlockHelper;
}
namespace GlobalNamespace {
struct RadioDisplay_PropertyEffect;
}
namespace GlobalNamespace {
struct RadioDisplay_RadioDisplayState;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct RadioDisplay_RadioDisplayState;
}
namespace GlobalNamespace {
class RadioDisplay;
}
namespace GlobalNamespace {
struct RadioDisplay_PropertyEffect;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RadioDisplay_RadioDisplayState);
MARK_REF_T(::GlobalNamespace::RadioDisplay*);
MARK_VAL_T(::GlobalNamespace::RadioDisplay_PropertyEffect);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RadioDisplay_RadioDisplayState, "", "RadioDisplay/RadioDisplayState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RadioDisplay*, "", "RadioDisplay");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RadioDisplay_PropertyEffect, "", "RadioDisplay/PropertyEffect");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RadioDisplay/RadioDisplayState
struct CORDL_TYPE RadioDisplay_RadioDisplayState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RadioDisplay_RadioDisplayState_Unwrapped
enum struct __RadioDisplay_RadioDisplayState_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Receiving = static_cast<int32_t>(0x1),
__E_Broadcasting = static_cast<int32_t>(0x2),
__E_Deadzone = static_cast<int32_t>(0x3),
__E_BroadcastInDeadzone = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RadioDisplay_RadioDisplayState_Unwrapped () const noexcept {
return static_cast<__RadioDisplay_RadioDisplayState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RadioDisplay_RadioDisplayState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RadioDisplay_RadioDisplayState(int32_t  value__) noexcept;

/// @brief Field BroadcastInDeadzone value: I32(4)
static ::GlobalNamespace::RadioDisplay_RadioDisplayState const BroadcastInDeadzone;

/// @brief Field Broadcasting value: I32(2)
static ::GlobalNamespace::RadioDisplay_RadioDisplayState const Broadcasting;

/// @brief Field Deadzone value: I32(3)
static ::GlobalNamespace::RadioDisplay_RadioDisplayState const Deadzone;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::RadioDisplay_RadioDisplayState const Idle;

/// @brief Field Receiving value: I32(1)
static ::GlobalNamespace::RadioDisplay_RadioDisplayState const Receiving;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5113};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RadioDisplay_RadioDisplayState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RadioDisplay_RadioDisplayState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RadioDisplay/PropertyEffect
struct CORDL_TYPE RadioDisplay_PropertyEffect {
public:
// Declarations
/// @brief Method SetOn, addr 0x180412140, size 0xb0, virtual false, abstract: false, final false
inline void SetOn(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RadioDisplay_PropertyEffect() ;

// Ctor Parameters [CppParam { name: "propertyBlockHelper", ty: "::UnityW<::GlobalNamespace::PropertyBlockHelper>", modifiers: "", def_value: None }, CppParam { name: "propertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_on", ty: "bool", modifiers: "", def_value: None }]
constexpr RadioDisplay_PropertyEffect(::UnityW<::GlobalNamespace::PropertyBlockHelper>  propertyBlockHelper, ::StringW  propertyName, float_t  onValue, bool  _on) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5114};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field propertyBlockHelper, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropertyBlockHelper>  propertyBlockHelper;

/// @brief Field propertyName, offset: 0x8, size: 0x8, def value: None
 ::StringW  propertyName;

/// @brief Field onValue, offset: 0x10, size: 0x4, def value: None
 float_t  onValue;

/// @brief Field _on, offset: 0x14, size: 0x1, def value: None
 bool  _on;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RadioDisplay_PropertyEffect, propertyBlockHelper) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay_PropertyEffect, propertyName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay_PropertyEffect, onValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay_PropertyEffect, _on) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RadioDisplay_PropertyEffect) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies RadioDisplay::PropertyEffect, RadioDisplay::RadioDisplayState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RadioDisplay
class CORDL_TYPE RadioDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PropertyEffect = ::GlobalNamespace::RadioDisplay_PropertyEffect;

using RadioDisplayState = ::GlobalNamespace::RadioDisplay_RadioDisplayState;

/// @brief Field broadcastPropertyEffect, offset 0x90, size 0x18 
 __declspec(property(get=__cordl_internal_get_broadcastPropertyEffect, put=__cordl_internal_set_broadcastPropertyEffect)) ::GlobalNamespace::RadioDisplay_PropertyEffect  broadcastPropertyEffect;

/// @brief Field broadcastingFlare, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_broadcastingFlare, put=__cordl_internal_set_broadcastingFlare)) ::UnityW<::GlobalNamespace::FlareDriver>  broadcastingFlare;

/// @brief Field broadcastingThing, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_broadcastingThing, put=__cordl_internal_set_broadcastingThing)) ::UnityW<::UnityEngine::Transform>  broadcastingThing;

/// @brief Field deadZonePropertyEffect, offset 0x78, size 0x18 
 __declspec(property(get=__cordl_internal_get_deadZonePropertyEffect, put=__cordl_internal_set_deadZonePropertyEffect)) ::GlobalNamespace::RadioDisplay_PropertyEffect  deadZonePropertyEffect;

/// @brief Field deadZoneThing, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_deadZoneThing, put=__cordl_internal_set_deadZoneThing)) ::UnityW<::UnityEngine::Transform>  deadZoneThing;

/// @brief Field displayState, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_displayState, put=__cordl_internal_set_displayState)) ::GlobalNamespace::RadioDisplay_RadioDisplayState  displayState;

/// @brief Field downTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_downTime, put=__cordl_internal_set_downTime)) float_t  downTime;

/// @brief Field jitter, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_jitter, put=__cordl_internal_set_jitter)) float_t  jitter;

/// @brief Field jitterLimit, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_jitterLimit, put=__cordl_internal_set_jitterLimit)) float_t  jitterLimit;

/// @brief Field logVerbose, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onChange, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onChange, put=__cordl_internal_set_onChange)) ::System::Action_1<::GlobalNamespace::RadioDisplay_RadioDisplayState>*  onChange;

/// @brief Field parentDisplay, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentDisplay, put=__cordl_internal_set_parentDisplay)) ::UnityW<::GlobalNamespace::RadioDisplay>  parentDisplay;

/// @brief Field pulseIsUp, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_pulseIsUp, put=__cordl_internal_set_pulseIsUp)) bool  pulseIsUp;

/// @brief Field pulsingFlare, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_pulsingFlare, put=__cordl_internal_set_pulsingFlare)) ::UnityW<::GlobalNamespace::FlareDriver>  pulsingFlare;

/// @brief Field pulsingPropertyEffect, offset 0xc0, size 0x18 
 __declspec(property(get=__cordl_internal_get_pulsingPropertyEffect, put=__cordl_internal_set_pulsingPropertyEffect)) ::GlobalNamespace::RadioDisplay_PropertyEffect  pulsingPropertyEffect;

/// @brief Field pulsingThing, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_pulsingThing, put=__cordl_internal_set_pulsingThing)) ::UnityW<::UnityEngine::Transform>  pulsingThing;

/// @brief Field receivingFlare, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_receivingFlare, put=__cordl_internal_set_receivingFlare)) ::UnityW<::GlobalNamespace::FlareDriver>  receivingFlare;

/// @brief Field receivingPropertyEffect, offset 0xa8, size 0x18 
 __declspec(property(get=__cordl_internal_get_receivingPropertyEffect, put=__cordl_internal_set_receivingPropertyEffect)) ::GlobalNamespace::RadioDisplay_PropertyEffect  receivingPropertyEffect;

/// @brief Field receivingThing, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_receivingThing, put=__cordl_internal_set_receivingThing)) ::UnityW<::UnityEngine::Transform>  receivingThing;

/// @brief Field timeNextChange, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeNextChange, put=__cordl_internal_set_timeNextChange)) double_t  timeNextChange;

/// @brief Field upTime, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_upTime, put=__cordl_internal_set_upTime)) float_t  upTime;

/// @brief Method Awake, addr 0x180412470, size 0x120, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::RadioDisplay* New_ctor() ;

/// @brief Method RefreshDisplay, addr 0x180412590, size 0x390, virtual false, abstract: false, final false
inline void RefreshDisplay() ;

/// @brief Method SetDisplayState, addr 0x180412920, size 0x50, virtual false, abstract: false, final false
inline void SetDisplayState(::GlobalNamespace::RadioDisplay_RadioDisplayState  newDisplayState) ;

/// @brief Method Update, addr 0x180412970, size 0xd0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::RadioDisplay_PropertyEffect const& __cordl_internal_get_broadcastPropertyEffect() const;

constexpr ::GlobalNamespace::RadioDisplay_PropertyEffect& __cordl_internal_get_broadcastPropertyEffect() ;

constexpr ::UnityW<::GlobalNamespace::FlareDriver> const& __cordl_internal_get_broadcastingFlare() const;

constexpr ::UnityW<::GlobalNamespace::FlareDriver>& __cordl_internal_get_broadcastingFlare() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_broadcastingThing() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_broadcastingThing() ;

constexpr ::GlobalNamespace::RadioDisplay_PropertyEffect const& __cordl_internal_get_deadZonePropertyEffect() const;

constexpr ::GlobalNamespace::RadioDisplay_PropertyEffect& __cordl_internal_get_deadZonePropertyEffect() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_deadZoneThing() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_deadZoneThing() ;

constexpr ::GlobalNamespace::RadioDisplay_RadioDisplayState const& __cordl_internal_get_displayState() const;

constexpr ::GlobalNamespace::RadioDisplay_RadioDisplayState& __cordl_internal_get_displayState() ;

constexpr float_t const& __cordl_internal_get_downTime() const;

constexpr float_t& __cordl_internal_get_downTime() ;

constexpr float_t const& __cordl_internal_get_jitter() const;

constexpr float_t& __cordl_internal_get_jitter() ;

constexpr float_t const& __cordl_internal_get_jitterLimit() const;

constexpr float_t& __cordl_internal_get_jitterLimit() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::System::Action_1<::GlobalNamespace::RadioDisplay_RadioDisplayState>* const& __cordl_internal_get_onChange() const;

constexpr ::System::Action_1<::GlobalNamespace::RadioDisplay_RadioDisplayState>*& __cordl_internal_get_onChange() ;

constexpr ::UnityW<::GlobalNamespace::RadioDisplay> const& __cordl_internal_get_parentDisplay() const;

constexpr ::UnityW<::GlobalNamespace::RadioDisplay>& __cordl_internal_get_parentDisplay() ;

constexpr bool const& __cordl_internal_get_pulseIsUp() const;

constexpr bool& __cordl_internal_get_pulseIsUp() ;

constexpr ::UnityW<::GlobalNamespace::FlareDriver> const& __cordl_internal_get_pulsingFlare() const;

constexpr ::UnityW<::GlobalNamespace::FlareDriver>& __cordl_internal_get_pulsingFlare() ;

constexpr ::GlobalNamespace::RadioDisplay_PropertyEffect const& __cordl_internal_get_pulsingPropertyEffect() const;

constexpr ::GlobalNamespace::RadioDisplay_PropertyEffect& __cordl_internal_get_pulsingPropertyEffect() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pulsingThing() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pulsingThing() ;

constexpr ::UnityW<::GlobalNamespace::FlareDriver> const& __cordl_internal_get_receivingFlare() const;

constexpr ::UnityW<::GlobalNamespace::FlareDriver>& __cordl_internal_get_receivingFlare() ;

constexpr ::GlobalNamespace::RadioDisplay_PropertyEffect const& __cordl_internal_get_receivingPropertyEffect() const;

constexpr ::GlobalNamespace::RadioDisplay_PropertyEffect& __cordl_internal_get_receivingPropertyEffect() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_receivingThing() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_receivingThing() ;

constexpr double_t const& __cordl_internal_get_timeNextChange() const;

constexpr double_t& __cordl_internal_get_timeNextChange() ;

constexpr float_t const& __cordl_internal_get_upTime() const;

constexpr float_t& __cordl_internal_get_upTime() ;

constexpr void __cordl_internal_set_broadcastPropertyEffect(::GlobalNamespace::RadioDisplay_PropertyEffect  value) ;

constexpr void __cordl_internal_set_broadcastingFlare(::UnityW<::GlobalNamespace::FlareDriver>  value) ;

constexpr void __cordl_internal_set_broadcastingThing(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_deadZonePropertyEffect(::GlobalNamespace::RadioDisplay_PropertyEffect  value) ;

constexpr void __cordl_internal_set_deadZoneThing(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_displayState(::GlobalNamespace::RadioDisplay_RadioDisplayState  value) ;

constexpr void __cordl_internal_set_downTime(float_t  value) ;

constexpr void __cordl_internal_set_jitter(float_t  value) ;

constexpr void __cordl_internal_set_jitterLimit(float_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onChange(::System::Action_1<::GlobalNamespace::RadioDisplay_RadioDisplayState>*  value) ;

constexpr void __cordl_internal_set_parentDisplay(::UnityW<::GlobalNamespace::RadioDisplay>  value) ;

constexpr void __cordl_internal_set_pulseIsUp(bool  value) ;

constexpr void __cordl_internal_set_pulsingFlare(::UnityW<::GlobalNamespace::FlareDriver>  value) ;

constexpr void __cordl_internal_set_pulsingPropertyEffect(::GlobalNamespace::RadioDisplay_PropertyEffect  value) ;

constexpr void __cordl_internal_set_pulsingThing(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_receivingFlare(::UnityW<::GlobalNamespace::FlareDriver>  value) ;

constexpr void __cordl_internal_set_receivingPropertyEffect(::GlobalNamespace::RadioDisplay_PropertyEffect  value) ;

constexpr void __cordl_internal_set_receivingThing(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_timeNextChange(double_t  value) ;

constexpr void __cordl_internal_set_upTime(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RadioDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RadioDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RadioDisplay(RadioDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RadioDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RadioDisplay(RadioDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5115};

/// @brief Field downTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___downTime;

/// @brief Field upTime, offset: 0x24, size: 0x4, def value: None
 float_t  ___upTime;

/// @brief Field jitterLimit, offset: 0x28, size: 0x4, def value: None
 float_t  ___jitterLimit;

/// @brief Field parentDisplay, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RadioDisplay>  ___parentDisplay;

/// @brief Field displayState, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::RadioDisplay_RadioDisplayState  ___displayState;

/// @brief Field pulseIsUp, offset: 0x3c, size: 0x1, def value: None
 bool  ___pulseIsUp;

/// @brief Field deadZoneThing, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___deadZoneThing;

/// @brief Field broadcastingThing, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___broadcastingThing;

/// @brief Field receivingThing, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___receivingThing;

/// @brief Field pulsingThing, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pulsingThing;

/// @brief Field broadcastingFlare, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FlareDriver>  ___broadcastingFlare;

/// @brief Field receivingFlare, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FlareDriver>  ___receivingFlare;

/// @brief Field pulsingFlare, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FlareDriver>  ___pulsingFlare;

/// @brief Field deadZonePropertyEffect, offset: 0x78, size: 0x18, def value: None
 ::GlobalNamespace::RadioDisplay_PropertyEffect  ___deadZonePropertyEffect;

/// @brief Field broadcastPropertyEffect, offset: 0x90, size: 0x18, def value: None
 ::GlobalNamespace::RadioDisplay_PropertyEffect  ___broadcastPropertyEffect;

/// @brief Field receivingPropertyEffect, offset: 0xa8, size: 0x18, def value: None
 ::GlobalNamespace::RadioDisplay_PropertyEffect  ___receivingPropertyEffect;

/// @brief Field pulsingPropertyEffect, offset: 0xc0, size: 0x18, def value: None
 ::GlobalNamespace::RadioDisplay_PropertyEffect  ___pulsingPropertyEffect;

/// @brief Field logVerbose, offset: 0xd8, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field timeNextChange, offset: 0xe0, size: 0x8, def value: None
 double_t  ___timeNextChange;

/// @brief Field jitter, offset: 0xe8, size: 0x4, def value: None
 float_t  ___jitter;

/// @brief Field onChange, offset: 0xf0, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::RadioDisplay_RadioDisplayState>*  ___onChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___downTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___upTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___jitterLimit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___parentDisplay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___displayState) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___pulseIsUp) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___deadZoneThing) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___broadcastingThing) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___receivingThing) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___pulsingThing) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___broadcastingFlare) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___receivingFlare) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___pulsingFlare) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___deadZonePropertyEffect) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___broadcastPropertyEffect) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___receivingPropertyEffect) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___pulsingPropertyEffect) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___logVerbose) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___timeNextChange) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___jitter) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioDisplay, ___onChange) == 0xf0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RadioDisplay) == 0xf8, "Size mismatch!");

} // namespace end def GlobalNamespace
