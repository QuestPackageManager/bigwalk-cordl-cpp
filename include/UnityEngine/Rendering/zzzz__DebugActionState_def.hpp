#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugActionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugActionState)
namespace UnityEngine::Rendering {
class DebugActionDesc;
}
namespace UnityEngine::Rendering {
struct DebugActionState_DebugActionKeyType;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct DebugActionState_DebugActionKeyType;
}
namespace UnityEngine::Rendering {
class DebugActionState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DebugActionState_DebugActionKeyType);
MARK_REF_T(::UnityEngine::Rendering::DebugActionState*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugActionState_DebugActionKeyType, "UnityEngine.Rendering", "DebugActionState/DebugActionKeyType");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugActionState*, "UnityEngine.Rendering", "DebugActionState");
// Dependencies 
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugActionState/DebugActionKeyType
struct CORDL_TYPE DebugActionState_DebugActionKeyType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DebugActionState_DebugActionKeyType_Unwrapped
enum struct __DebugActionState_DebugActionKeyType_Unwrapped : int32_t {
__E_Button = static_cast<int32_t>(0x0),
__E_Axis = static_cast<int32_t>(0x1),
__E_Key = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DebugActionState_DebugActionKeyType_Unwrapped () const noexcept {
return static_cast<__DebugActionState_DebugActionKeyType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DebugActionState_DebugActionKeyType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DebugActionState_DebugActionKeyType(int32_t  value__) noexcept;

/// @brief Field Axis value: I32(1)
static ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType const Axis;

/// @brief Field Button value: I32(0)
static ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType const Button;

/// @brief Field Key value: I32(2)
static ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType const Key;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6790};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugActionState_DebugActionKeyType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::DebugActionState_DebugActionKeyType) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.KeyCode, UnityEngine.Rendering.DebugActionState::DebugActionKeyType
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugActionState
class CORDL_TYPE DebugActionState : public ::System::Object {
public:
// Declarations
using DebugActionKeyType = ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType;

/// @brief Field <actionState>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__actionState_k__BackingField, put=__cordl_internal_set__actionState_k__BackingField)) float_t  _actionState_k__BackingField;

/// @brief Field <runningAction>k__BackingField, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__runningAction_k__BackingField, put=__cordl_internal_set__runningAction_k__BackingField)) bool  _runningAction_k__BackingField;

 __declspec(property(get=get_actionState, put=set_actionState)) float_t  actionState;

/// @brief Field m_PressedAxis, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PressedAxis, put=__cordl_internal_set_m_PressedAxis)) ::StringW  m_PressedAxis;

/// @brief Field m_PressedButtons, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PressedButtons, put=__cordl_internal_set_m_PressedButtons)) ::ArrayW<::StringW>  m_PressedButtons;

/// @brief Field m_PressedKeys, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PressedKeys, put=__cordl_internal_set_m_PressedKeys)) ::ArrayW<::UnityEngine::KeyCode>  m_PressedKeys;

/// @brief Field m_Timer, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Timer, put=__cordl_internal_set_m_Timer)) float_t  m_Timer;

/// @brief Field m_TriggerPressedUp, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TriggerPressedUp, put=__cordl_internal_set_m_TriggerPressedUp)) ::ArrayW<bool>  m_TriggerPressedUp;

/// @brief Field m_Type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Type, put=__cordl_internal_set_m_Type)) ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType  m_Type;

 __declspec(property(get=get_runningAction, put=set_runningAction)) bool  runningAction;

static inline ::UnityEngine::Rendering::DebugActionState* New_ctor() ;

/// @brief Method Reset, addr 0x181fe6780, size 0x20, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Trigger, addr 0x181fe69a0, size 0x80, virtual false, abstract: false, final false
inline void Trigger(int32_t  triggerCount, float_t  state) ;

/// @brief Method TriggerWithAxis, addr 0x181fe67a0, size 0xa0, virtual false, abstract: false, final false
inline void TriggerWithAxis(::StringW  axis, float_t  state) ;

/// @brief Method TriggerWithButton, addr 0x181fe6840, size 0xb0, virtual false, abstract: false, final false
inline void TriggerWithButton(::ArrayW<::StringW>  buttons, float_t  state) ;

/// @brief Method TriggerWithKey, addr 0x181fe68f0, size 0xb0, virtual false, abstract: false, final false
inline void TriggerWithKey(::ArrayW<::UnityEngine::KeyCode>  keys, float_t  state) ;

/// @brief Method Update, addr 0x181fe6a20, size 0x1e0, virtual false, abstract: false, final false
inline void Update(::UnityEngine::Rendering::DebugActionDesc*  desc) ;

constexpr float_t const& __cordl_internal_get__actionState_k__BackingField() const;

constexpr float_t& __cordl_internal_get__actionState_k__BackingField() ;

constexpr bool const& __cordl_internal_get__runningAction_k__BackingField() const;

constexpr bool& __cordl_internal_get__runningAction_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_m_PressedAxis() const;

constexpr ::StringW& __cordl_internal_get_m_PressedAxis() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_m_PressedButtons() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_m_PressedButtons() ;

constexpr ::ArrayW<::UnityEngine::KeyCode> const& __cordl_internal_get_m_PressedKeys() const;

constexpr ::ArrayW<::UnityEngine::KeyCode>& __cordl_internal_get_m_PressedKeys() ;

constexpr float_t const& __cordl_internal_get_m_Timer() const;

constexpr float_t& __cordl_internal_get_m_Timer() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_m_TriggerPressedUp() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_m_TriggerPressedUp() ;

constexpr ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType const& __cordl_internal_get_m_Type() const;

constexpr ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType& __cordl_internal_get_m_Type() ;

constexpr void __cordl_internal_set__actionState_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__runningAction_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_PressedAxis(::StringW  value) ;

constexpr void __cordl_internal_set_m_PressedButtons(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_m_PressedKeys(::ArrayW<::UnityEngine::KeyCode>  value) ;

constexpr void __cordl_internal_set_m_Timer(float_t  value) ;

constexpr void __cordl_internal_set_m_TriggerPressedUp(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_m_Type(::UnityEngine::Rendering::DebugActionState_DebugActionKeyType  value) ;

/// @brief Method .ctor, addr 0x181fe6c00, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_actionState, addr 0x1802e2b90, size 0x10, virtual false, abstract: false, final false
inline float_t get_actionState() ;

/// @brief Method get_runningAction, addr 0x1803cbf40, size 0x10, virtual false, abstract: false, final false
inline bool get_runningAction() ;

/// @brief Method set_actionState, addr 0x1802e2f60, size 0x10, virtual false, abstract: false, final false
inline void set_actionState(float_t  value) ;

/// @brief Method set_runningAction, addr 0x1803cbfc0, size 0x10, virtual false, abstract: false, final false
inline void set_runningAction(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugActionState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugActionState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugActionState(DebugActionState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugActionState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugActionState(DebugActionState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6791};

/// @brief Field m_Type, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::Rendering::DebugActionState_DebugActionKeyType  ___m_Type;

/// @brief Field m_PressedButtons, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___m_PressedButtons;

/// @brief Field m_PressedAxis, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___m_PressedAxis;

/// @brief Field m_PressedKeys, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::KeyCode>  ___m_PressedKeys;

/// @brief Field m_TriggerPressedUp, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<bool>  ___m_TriggerPressedUp;

/// @brief Field m_Timer, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_Timer;

/// @brief Field <runningAction>k__BackingField, offset: 0x3c, size: 0x1, def value: None
 bool  ____runningAction_k__BackingField;

/// @brief Field <actionState>k__BackingField, offset: 0x40, size: 0x4, def value: None
 float_t  ____actionState_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ___m_Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ___m_PressedButtons) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ___m_PressedAxis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ___m_PressedKeys) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ___m_TriggerPressedUp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ___m_Timer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ____runningAction_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ____actionState_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::DebugActionState) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
