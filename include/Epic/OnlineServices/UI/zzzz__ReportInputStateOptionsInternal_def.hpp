#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/ReportInputStateOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/UI/zzzz__InputStateButtonFlags_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReportInputStateOptionsInternal)
namespace Epic::OnlineServices::UI {
struct ReportInputStateOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct ReportInputStateOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::ReportInputStateOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::ReportInputStateOptionsInternal, "Epic.OnlineServices.UI", "ReportInputStateOptionsInternal");
// Dependencies Epic.OnlineServices.UI.InputStateButtonFlags
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.ReportInputStateOptionsInternal
struct CORDL_TYPE ReportInputStateOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ReportInputStateOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ReportInputStateOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804e0ba0, size 0x2b0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::UI::ReportInputStateOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ReportInputStateOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::UI::ReportInputStateOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__UI__ReportInputStateOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ReportInputStateOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ButtonDownFlags", ty: "::Epic::OnlineServices::UI::InputStateButtonFlags", modifiers: "", def_value: None }, CppParam { name: "m_AcceptIsFaceButtonRight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_MouseButtonDown", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_MousePosX", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_MousePosY", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_GamepadIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_LeftStickX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_LeftStickY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_RightStickX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_RightStickY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_LeftTrigger", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_RightTrigger", ty: "float_t", modifiers: "", def_value: None }]
constexpr ReportInputStateOptionsInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::UI::InputStateButtonFlags  m_ButtonDownFlags, int32_t  m_AcceptIsFaceButtonRight, int32_t  m_MouseButtonDown, uint32_t  m_MousePosX, uint32_t  m_MousePosY, uint32_t  m_GamepadIndex, float_t  m_LeftStickX, float_t  m_LeftStickY, float_t  m_RightStickX, float_t  m_RightStickY, float_t  m_LeftTrigger, float_t  m_RightTrigger) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7571};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x34};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_ButtonDownFlags, offset: 0x4, size: 0x4, def value: None
 ::Epic::OnlineServices::UI::InputStateButtonFlags  m_ButtonDownFlags;

/// @brief Field m_AcceptIsFaceButtonRight, offset: 0x8, size: 0x4, def value: None
 int32_t  m_AcceptIsFaceButtonRight;

/// @brief Field m_MouseButtonDown, offset: 0xc, size: 0x4, def value: None
 int32_t  m_MouseButtonDown;

/// @brief Field m_MousePosX, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_MousePosX;

/// @brief Field m_MousePosY, offset: 0x14, size: 0x4, def value: None
 uint32_t  m_MousePosY;

/// @brief Field m_GamepadIndex, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_GamepadIndex;

/// @brief Field m_LeftStickX, offset: 0x1c, size: 0x4, def value: None
 float_t  m_LeftStickX;

/// @brief Field m_LeftStickY, offset: 0x20, size: 0x4, def value: None
 float_t  m_LeftStickY;

/// @brief Field m_RightStickX, offset: 0x24, size: 0x4, def value: None
 float_t  m_RightStickX;

/// @brief Field m_RightStickY, offset: 0x28, size: 0x4, def value: None
 float_t  m_RightStickY;

/// @brief Field m_LeftTrigger, offset: 0x2c, size: 0x4, def value: None
 float_t  m_LeftTrigger;

/// @brief Field m_RightTrigger, offset: 0x30, size: 0x4, def value: None
 float_t  m_RightTrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptionsInternal, m_ButtonDownFlags) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptionsInternal, m_AcceptIsFaceButtonRight) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptionsInternal, m_MouseButtonDown) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptionsInternal, m_MousePosX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptionsInternal, m_MousePosY) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptionsInternal, m_GamepadIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptionsInternal, m_LeftStickX) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptionsInternal, m_LeftStickY) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptionsInternal, m_RightStickX) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptionsInternal, m_RightStickY) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptionsInternal, m_LeftTrigger) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ReportInputStateOptionsInternal, m_RightTrigger) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::ReportInputStateOptionsInternal) == 0x34, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
