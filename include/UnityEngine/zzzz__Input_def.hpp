#pragma once
// IWYU pragma private; include "UnityEngine/Input.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Input)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct IMECompositionMode;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
struct PenData;
}
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Input;
}
// Write type traits
MARK_REF_T(::UnityEngine::Input*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Input*, "UnityEngine", "Input");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Input
class CORDL_TYPE Input : public ::System::Object {
public:
// Declarations
/// @brief Field <simulateTouchEnabled>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__simulateTouchEnabled_k__BackingField, put=setStaticF__simulateTouchEnabled_k__BackingField)) bool  _simulateTouchEnabled_k__BackingField;

/// @brief Method CheckDisabled, addr 0x1822ebe00, size 0x10, virtual false, abstract: false, final false
static inline bool CheckDisabled() ;

/// @brief Method ClearLastPenContactEvent, addr 0x1822ebe10, size 0x10, virtual false, abstract: false, final false
static inline void ClearLastPenContactEvent() ;

/// @brief Method GetAxis, addr 0x1822ebe30, size 0x10, virtual false, abstract: false, final false
static inline float_t GetAxis(::StringW  axisName) ;

/// @brief Method GetAxisRaw, addr 0x1822ebe20, size 0x10, virtual false, abstract: false, final false
static inline float_t GetAxisRaw(::StringW  axisName) ;

/// @brief Method GetButton, addr 0x1822ebe60, size 0x10, virtual false, abstract: false, final false
static inline bool GetButton(::StringW  buttonName) ;

/// @brief Method GetButtonDown, addr 0x1822ebe40, size 0x10, virtual false, abstract: false, final false
static inline bool GetButtonDown(::StringW  buttonName) ;

/// @brief Method GetButtonUp, addr 0x1822ebe50, size 0x10, virtual false, abstract: false, final false
static inline bool GetButtonUp(::StringW  buttonName) ;

/// @brief Method GetJoystickNames, addr 0x1822ebe70, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetJoystickNames() ;

/// @brief Method GetKey, addr 0x1822ebe90, size 0x10, virtual false, abstract: false, final false
static inline bool GetKey(::UnityEngine::KeyCode  key) ;

/// @brief Method GetKeyDown, addr 0x1822ebe80, size 0x10, virtual false, abstract: false, final false
static inline bool GetKeyDown(::UnityEngine::KeyCode  key) ;

/// @brief Method GetKeyDownInt, addr 0x1822ebe80, size 0x10, virtual false, abstract: false, final false
static inline bool GetKeyDownInt(::UnityEngine::KeyCode  key) ;

/// @brief Method GetKeyInt, addr 0x1822ebe90, size 0x10, virtual false, abstract: false, final false
static inline bool GetKeyInt(::UnityEngine::KeyCode  key) ;

/// @brief Method GetKeyUp, addr 0x1822ebea0, size 0x10, virtual false, abstract: false, final false
static inline bool GetKeyUp(::UnityEngine::KeyCode  key) ;

/// @brief Method GetKeyUpInt, addr 0x1822ebea0, size 0x10, virtual false, abstract: false, final false
static inline bool GetKeyUpInt(::UnityEngine::KeyCode  key) ;

/// @brief Method GetLastPenContactEvent, addr 0x1822ebec0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::PenData GetLastPenContactEvent() ;

/// @brief Method GetLastPenContactEvent_Injected, addr 0x1822ebeb0, size 0x10, virtual false, abstract: false, final false
static inline void GetLastPenContactEvent_Injected(::by_ref<::UnityEngine::PenData>  ret) ;

/// @brief Method GetMouseButton, addr 0x1822ebf10, size 0x10, virtual false, abstract: false, final false
static inline bool GetMouseButton(int32_t  button) ;

/// @brief Method GetMouseButtonDown, addr 0x1822ebef0, size 0x10, virtual false, abstract: false, final false
static inline bool GetMouseButtonDown(int32_t  button) ;

/// @brief Method GetMouseButtonUp, addr 0x1822ebf00, size 0x10, virtual false, abstract: false, final false
static inline bool GetMouseButtonUp(int32_t  button) ;

/// @brief Method GetMousePresentInternal, addr 0x1822ebf20, size 0x10, virtual false, abstract: false, final false
static inline bool GetMousePresentInternal() ;

/// @brief Method GetTouch, addr 0x1822ebf50, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Touch GetTouch(int32_t  index) ;

/// @brief Method GetTouchSupportedInternal, addr 0x1822ebf30, size 0x10, virtual false, abstract: false, final false
static inline bool GetTouchSupportedInternal() ;

/// @brief Method GetTouch_Injected, addr 0x1822ebf40, size 0x10, virtual false, abstract: false, final false
static inline void GetTouch_Injected(int32_t  index, ::by_ref<::UnityEngine::Touch>  ret) ;

static inline bool getStaticF__simulateTouchEnabled_k__BackingField() ;

/// @brief Method get_acceleration, addr 0x1822ebfa0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_acceleration() ;

/// @brief Method get_acceleration_Injected, addr 0x1822ebf90, size 0x10, virtual false, abstract: false, final false
static inline void get_acceleration_Injected(::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_anyKey, addr 0x1822ebfd0, size 0x10, virtual false, abstract: false, final false
static inline bool get_anyKey() ;

/// @brief Method get_anyKeyDown, addr 0x1822ebfc0, size 0x10, virtual false, abstract: false, final false
static inline bool get_anyKeyDown() ;

/// @brief Method get_compositionCursorPos, addr 0x1822ebff0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 get_compositionCursorPos() ;

/// @brief Method get_compositionCursorPos_Injected, addr 0x1822ebfe0, size 0x10, virtual false, abstract: false, final false
static inline void get_compositionCursorPos_Injected(::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_compositionString, addr 0x1822ec020, size 0x90, virtual false, abstract: false, final false
static inline ::StringW get_compositionString() ;

/// @brief Method get_compositionString_Injected, addr 0x1822ec010, size 0x10, virtual false, abstract: false, final false
static inline void get_compositionString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_imeCompositionMode, addr 0x1822ec0b0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::IMECompositionMode get_imeCompositionMode() ;

/// @brief Method get_mousePosition, addr 0x1822ec0d0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_mousePosition() ;

/// @brief Method get_mousePosition_Injected, addr 0x1822ec0c0, size 0x10, virtual false, abstract: false, final false
static inline void get_mousePosition_Injected(::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_mousePresent, addr 0x1822ec0f0, size 0x40, virtual false, abstract: false, final false
static inline bool get_mousePresent() ;

/// @brief Method get_mouseScrollDelta, addr 0x1822ec140, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 get_mouseScrollDelta() ;

/// @brief Method get_mouseScrollDelta_Injected, addr 0x1822ec130, size 0x10, virtual false, abstract: false, final false
static inline void get_mouseScrollDelta_Injected(::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_multiTouchEnabled, addr 0x1822ec160, size 0x10, virtual false, abstract: false, final false
static inline bool get_multiTouchEnabled() ;

/// @brief Method get_simulateMouseWithTouches, addr 0x1822ec170, size 0x10, virtual false, abstract: false, final false
static inline bool get_simulateMouseWithTouches() ;

/// @brief Method get_simulateTouchEnabled, addr 0x1822ec180, size 0x20, virtual false, abstract: false, final false
static inline bool get_simulateTouchEnabled() ;

/// @brief Method get_touchCount, addr 0x1822ec1a0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_touchCount() ;

/// @brief Method get_touchPressureSupported, addr 0x1822ec1b0, size 0x10, virtual false, abstract: false, final false
static inline bool get_touchPressureSupported() ;

/// @brief Method get_touchSupported, addr 0x1822ec1c0, size 0x40, virtual false, abstract: false, final false
static inline bool get_touchSupported() ;

/// @brief Method get_touches, addr 0x1822ec200, size 0xc0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Touch> get_touches() ;

static inline void setStaticF__simulateTouchEnabled_k__BackingField(bool  value) ;

/// @brief Method set_compositionCursorPos, addr 0x1822ec2d0, size 0x20, virtual false, abstract: false, final false
static inline void set_compositionCursorPos(::UnityEngine::Vector2  value) ;

/// @brief Method set_compositionCursorPos_Injected, addr 0x1822ec2c0, size 0x10, virtual false, abstract: false, final false
static inline void set_compositionCursorPos_Injected(::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_imeCompositionMode, addr 0x1822ec2f0, size 0x10, virtual false, abstract: false, final false
static inline void set_imeCompositionMode(::UnityEngine::IMECompositionMode  value) ;

/// @brief Method set_multiTouchEnabled, addr 0x1822ec300, size 0x10, virtual false, abstract: false, final false
static inline void set_multiTouchEnabled(bool  value) ;

/// @brief Method set_simulateMouseWithTouches, addr 0x1822ec310, size 0x10, virtual false, abstract: false, final false
static inline void set_simulateMouseWithTouches(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Input() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Input", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Input(Input && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Input", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Input(Input const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21166};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Input) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
