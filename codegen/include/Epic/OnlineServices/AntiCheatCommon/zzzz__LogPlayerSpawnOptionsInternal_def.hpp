#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerSpawnOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogPlayerSpawnOptionsInternal)
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerSpawnOptions;
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
struct LogPlayerSpawnOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptionsInternal, "Epic.OnlineServices.AntiCheatCommon", "LogPlayerSpawnOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogPlayerSpawnOptionsInternal
struct CORDL_TYPE LogPlayerSpawnOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180525760, size 0x30, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatCommon__LogPlayerSpawnOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr LogPlayerSpawnOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SpawnedPlayerHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TeamId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_CharacterId", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr LogPlayerSpawnOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SpawnedPlayerHandle, uint32_t  m_TeamId, uint32_t  m_CharacterId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9363};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_SpawnedPlayerHandle, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_SpawnedPlayerHandle;

/// @brief Field m_TeamId, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_TeamId;

/// @brief Field m_CharacterId, offset: 0x14, size: 0x4, def value: None
 uint32_t  m_CharacterId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptionsInternal, m_SpawnedPlayerHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptionsInternal, m_TeamId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptionsInternal, m_CharacterId) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
