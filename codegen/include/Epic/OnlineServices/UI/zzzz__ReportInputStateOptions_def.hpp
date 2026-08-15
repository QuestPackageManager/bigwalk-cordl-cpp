#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/ReportInputStateOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/UI/zzzz__InputStateButtonFlags_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReportInputStateOptions)
namespace Epic::OnlineServices::UI {
struct InputStateButtonFlags;
}
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct ReportInputStateOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::ReportInputStateOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::ReportInputStateOptions, "Epic.OnlineServices.UI", "ReportInputStateOptions");
// Dependencies Epic.OnlineServices.UI.InputStateButtonFlags
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.ReportInputStateOptions
struct CORDL_TYPE ReportInputStateOptions {
public:
// Declarations
 __declspec(property(get=get_AcceptIsFaceButtonRight, put=set_AcceptIsFaceButtonRight)) bool  AcceptIsFaceButtonRight;

 __declspec(property(get=get_ButtonDownFlags, put=set_ButtonDownFlags)) ::Epic::OnlineServices::UI::InputStateButtonFlags  ButtonDownFlags;

 __declspec(property(get=get_GamepadIndex, put=set_GamepadIndex)) uint32_t  GamepadIndex;

 __declspec(property(get=get_LeftStickX, put=set_LeftStickX)) float_t  LeftStickX;

 __declspec(property(get=get_LeftStickY, put=set_LeftStickY)) float_t  LeftStickY;

 __declspec(property(get=get_LeftTrigger, put=set_LeftTrigger)) float_t  LeftTrigger;

 __declspec(property(get=get_MouseButtonDown, put=set_MouseButtonDown)) bool  MouseButtonDown;

 __declspec(property(get=get_MousePosX, put=set_MousePosX)) uint32_t  MousePosX;

 __declspec(property(get=get_MousePosY, put=set_MousePosY)) uint32_t  MousePosY;

 __declspec(property(get=get_RightStickX, put=set_RightStickX)) float_t  RightStickX;

 __declspec(property(get=get_RightStickY, put=set_RightStickY)) float_t  RightStickY;

 __declspec(property(get=get_RightTrigger, put=set_RightTrigger)) float_t  RightTrigger;

/// @brief Method get_AcceptIsFaceButtonRight, addr 0x1804bda20, size 0x10, virtual false, abstract: false, final false
inline bool get_AcceptIsFaceButtonRight() ;

/// @brief Method get_ButtonDownFlags, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::UI::InputStateButtonFlags get_ButtonDownFlags() ;

/// @brief Method get_GamepadIndex, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_GamepadIndex() ;

/// @brief Method get_LeftStickX, addr 0x1803bda00, size 0x10, virtual false, abstract: false, final false
inline float_t get_LeftStickX() ;

/// @brief Method get_LeftStickY, addr 0x18048d8a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_LeftStickY() ;

/// @brief Method get_LeftTrigger, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_LeftTrigger() ;

/// @brief Method get_MouseButtonDown, addr 0x1804bdb40, size 0x10, virtual false, abstract: false, final false
inline bool get_MouseButtonDown() ;

/// @brief Method get_MousePosX, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_MousePosX() ;

/// @brief Method get_MousePosY, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_MousePosY() ;

/// @brief Method get_RightStickX, addr 0x1802f80a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_RightStickX() ;

/// @brief Method get_RightStickY, addr 0x1802f42b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_RightStickY() ;

/// @brief Method get_RightTrigger, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_RightTrigger() ;

/// @brief Method set_AcceptIsFaceButtonRight, addr 0x1804bda30, size 0x10, virtual false, abstract: false, final false
inline void set_AcceptIsFaceButtonRight(bool  value) ;

/// @brief Method set_ButtonDownFlags, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_ButtonDownFlags(::Epic::OnlineServices::UI::InputStateButtonFlags  value) ;

/// @brief Method set_GamepadIndex, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_GamepadIndex(uint32_t  value) ;

/// @brief Method set_LeftStickX, addr 0x1803bda40, size 0x10, virtual false, abstract: false, final false
inline void set_LeftStickX(float_t  value) ;

/// @brief Method set_LeftStickY, addr 0x1804bdb50, size 0x10, virtual false, abstract: false, final false
inline void set_LeftStickY(float_t  value) ;

/// @brief Method set_LeftTrigger, addr 0x1802f81c0, size 0x10, virtual false, abstract: false, final false
inline void set_LeftTrigger(float_t  value) ;

/// @brief Method set_MouseButtonDown, addr 0x1804bdb60, size 0x10, virtual false, abstract: false, final false
inline void set_MouseButtonDown(bool  value) ;

/// @brief Method set_MousePosX, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_MousePosX(uint32_t  value) ;

/// @brief Method set_MousePosY, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void set_MousePosY(uint32_t  value) ;

/// @brief Method set_RightStickX, addr 0x1802f80f0, size 0x10, virtual false, abstract: false, final false
inline void set_RightStickX(float_t  value) ;

/// @brief Method set_RightStickY, addr 0x1802f43c0, size 0x10, virtual false, abstract: false, final false
inline void set_RightStickY(float_t  value) ;

/// @brief Method set_RightTrigger, addr 0x1803f2c00, size 0x10, virtual false, abstract: false, final false
inline void set_RightTrigger(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReportInputStateOptions() ;

// Ctor Parameters [CppParam { name: "_ButtonDownFlags_k__BackingField", ty: "::Epic::OnlineServices::UI::InputStateButtonFlags", modifiers: "", def_value: None }, CppParam { name: "_AcceptIsFaceButtonRight_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_MouseButtonDown_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_MousePosX_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_MousePosY_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_GamepadIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_LeftStickX_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_LeftStickY_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_RightStickX_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_RightStickY_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_LeftTrigger_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_RightTrigger_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr ReportInputStateOptions(::Epic::OnlineServices::UI::InputStateButtonFlags  _ButtonDownFlags_k__BackingField, bool  _AcceptIsFaceButtonRight_k__BackingField, bool  _MouseButtonDown_k__BackingField, uint32_t  _MousePosX_k__BackingField, uint32_t  _MousePosY_k__BackingField, uint32_t  _GamepadIndex_k__BackingField, float_t  _LeftStickX_k__BackingField, float_t  _LeftStickY_k__BackingField, float_t  _RightStickX_k__BackingField, float_t  _RightStickY_k__BackingField, float_t  _LeftTrigger_k__BackingField, float_t  _RightTrigger_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7570};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field <ButtonDownFlags>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::UI::InputStateButtonFlags  _ButtonDownFlags_k__BackingField;

/// @brief Field <AcceptIsFaceButtonRight>k__BackingField, offset: 0x4, size: 0x1, def value: None
 bool  _AcceptIsFaceButtonRight_k__BackingField;

/// @brief Field <MouseButtonDown>k__BackingField, offset: 0x5, size: 0x1, def value: None
 bool  _MouseButtonDown_k__BackingField;

/// @brief Field <MousePosX>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _MousePosX_k__BackingField;

/// @brief Field <MousePosY>k__BackingField, offset: 0xc, size: 0x4, def value: None
 uint32_t  _MousePosY_k__BackingField;

/// @brief Field <GamepadIndex>k__BackingField, offset: 0x10, size: 0x4, def value: None
 uint32_t  _GamepadIndex_k__BackingField;

/// @brief Field <LeftStickX>k__BackingField, offset: 0x14, size: 0x4, def value: None
 float_t  _LeftStickX_k__BackingField;

/// @brief Field <LeftStickY>k__BackingField, offset: 0x18, size: 0x4, def value: None
 float_t  _LeftStickY_k__BackingField;

/// @brief Field <RightStickX>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 float_t  _RightStickX_k__BackingField;

/// @brief Field <RightStickY>k__BackingField, offset: 0x20, size: 0x4, def value: None
 float_t  _RightStickY_k__BackingField;

/// @brief Field <LeftTrigger>k__BackingField, offset: 0x24, size: 0x4, def value: None
 float_t  _LeftTrigger_k__BackingField;

/// @brief Field <RightTrigger>k__BackingField, offset: 0x28, size: 0x4, def value: None
 float_t  _RightTrigger_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptions, _ButtonDownFlags_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptions, _AcceptIsFaceButtonRight_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptions, _MouseButtonDown_k__BackingField) == 0x5, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptions, _MousePosX_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptions, _MousePosY_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptions, _GamepadIndex_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptions, _LeftStickX_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptions, _LeftStickY_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptions, _RightStickX_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptions, _RightStickY_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptions, _LeftTrigger_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptions, _RightTrigger_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::ReportInputStateOptions) == 0x2c, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
