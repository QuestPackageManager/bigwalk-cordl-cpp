#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerTickOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerMovementState_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogPlayerTickOptionsInternal)
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerTickOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerTickOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptionsInternal, "Epic.OnlineServices.AntiCheatCommon", "LogPlayerTickOptionsInternal");
// Dependencies Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonPlayerMovementState, System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogPlayerTickOptionsInternal
struct CORDL_TYPE LogPlayerTickOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x180525d70, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180525db0, size 0x120, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatCommon__LogPlayerTickOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr LogPlayerTickOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_PlayerHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PlayerPosition", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PlayerViewRotation", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_IsPlayerViewZoomed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_PlayerHealth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_PlayerMovementState", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState", modifiers: "", def_value: None }, CppParam { name: "m_PlayerViewPosition", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr LogPlayerTickOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_PlayerHandle, ::System::IntPtr  m_PlayerPosition, ::System::IntPtr  m_PlayerViewRotation, int32_t  m_IsPlayerViewZoomed, float_t  m_PlayerHealth, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState  m_PlayerMovementState, ::System::IntPtr  m_PlayerViewPosition) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9367};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_PlayerHandle, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_PlayerHandle;

/// @brief Field m_PlayerPosition, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_PlayerPosition;

/// @brief Field m_PlayerViewRotation, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_PlayerViewRotation;

/// @brief Field m_IsPlayerViewZoomed, offset: 0x20, size: 0x4, def value: None
 int32_t  m_IsPlayerViewZoomed;

/// @brief Field m_PlayerHealth, offset: 0x24, size: 0x4, def value: None
 float_t  m_PlayerHealth;

/// @brief Field m_PlayerMovementState, offset: 0x28, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState  m_PlayerMovementState;

/// @brief Field m_PlayerViewPosition, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_PlayerViewPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptionsInternal, m_PlayerHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptionsInternal, m_PlayerPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptionsInternal, m_PlayerViewRotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptionsInternal, m_IsPlayerViewZoomed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptionsInternal, m_PlayerHealth) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptionsInternal, m_PlayerMovementState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptionsInternal, m_PlayerViewPosition) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptionsInternal) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
