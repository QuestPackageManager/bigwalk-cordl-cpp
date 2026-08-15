#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogEventOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogEventOptionsInternal)
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogEventOptions;
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
struct LogEventOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogEventOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogEventOptionsInternal, "Epic.OnlineServices.AntiCheatCommon", "LogEventOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogEventOptionsInternal
struct CORDL_TYPE LogEventOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x18050bcc0, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180524b20, size 0xa0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogEventOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatCommon__LogEventOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr LogEventOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ClientHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_EventId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ParamsCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Params", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr LogEventOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_ClientHandle, uint32_t  m_EventId, uint32_t  m_ParamsCount, ::System::IntPtr  m_Params) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9349};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_ClientHandle, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientHandle;

/// @brief Field m_EventId, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_EventId;

/// @brief Field m_ParamsCount, offset: 0x14, size: 0x4, def value: None
 uint32_t  m_ParamsCount;

/// @brief Field m_Params, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_Params;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventOptionsInternal, m_ClientHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventOptionsInternal, m_EventId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventOptionsInternal, m_ParamsCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogEventOptionsInternal, m_Params) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogEventOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
