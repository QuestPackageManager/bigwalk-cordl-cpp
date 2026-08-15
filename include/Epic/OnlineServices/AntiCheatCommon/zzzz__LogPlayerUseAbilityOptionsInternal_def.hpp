#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerUseAbilityOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogPlayerUseAbilityOptionsInternal)
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerUseAbilityOptions;
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
struct LogPlayerUseAbilityOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptionsInternal, "Epic.OnlineServices.AntiCheatCommon", "LogPlayerUseAbilityOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogPlayerUseAbilityOptionsInternal
struct CORDL_TYPE LogPlayerUseAbilityOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180525ed0, size 0x30, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatCommon__LogPlayerUseAbilityOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr LogPlayerUseAbilityOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_PlayerHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AbilityId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_AbilityDurationMs", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_AbilityCooldownMs", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr LogPlayerUseAbilityOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_PlayerHandle, uint32_t  m_AbilityId, uint32_t  m_AbilityDurationMs, uint32_t  m_AbilityCooldownMs) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9369};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_PlayerHandle, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_PlayerHandle;

/// @brief Field m_AbilityId, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_AbilityId;

/// @brief Field m_AbilityDurationMs, offset: 0x14, size: 0x4, def value: None
 uint32_t  m_AbilityDurationMs;

/// @brief Field m_AbilityCooldownMs, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_AbilityCooldownMs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptionsInternal, m_PlayerHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptionsInternal, m_AbilityId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptionsInternal, m_AbilityDurationMs) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptionsInternal, m_AbilityCooldownMs) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
