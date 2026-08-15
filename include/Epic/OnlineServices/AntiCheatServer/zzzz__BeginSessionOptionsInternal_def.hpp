#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/BeginSessionOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeginSessionOptionsInternal)
namespace Epic::OnlineServices::AntiCheatServer {
struct BeginSessionOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatServer {
struct BeginSessionOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal, "Epic.OnlineServices.AntiCheatServer", "BeginSessionOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::AntiCheatServer {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatServer.BeginSessionOptionsInternal
struct CORDL_TYPE BeginSessionOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e7630, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180521e60, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatServer__BeginSessionOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr BeginSessionOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RegisterTimeoutSeconds", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ServerName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_EnableGameplayData", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr BeginSessionOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_RegisterTimeoutSeconds, ::System::IntPtr  m_ServerName, int32_t  m_EnableGameplayData, ::System::IntPtr  m_LocalUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9307};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_RegisterTimeoutSeconds, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_RegisterTimeoutSeconds;

/// @brief Field m_ServerName, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ServerName;

/// @brief Field m_EnableGameplayData, offset: 0x10, size: 0x4, def value: None
 int32_t  m_EnableGameplayData;

/// @brief Field m_LocalUserId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal, m_RegisterTimeoutSeconds) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal, m_ServerName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal, m_EnableGameplayData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal, m_LocalUserId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatServer
