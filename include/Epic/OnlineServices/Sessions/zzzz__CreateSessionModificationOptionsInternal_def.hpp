#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/CreateSessionModificationOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreateSessionModificationOptionsInternal)
namespace Epic::OnlineServices::Sessions {
struct CreateSessionModificationOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct CreateSessionModificationOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal, "Epic.OnlineServices.Sessions", "CreateSessionModificationOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.CreateSessionModificationOptionsInternal
struct CORDL_TYPE CreateSessionModificationOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804d7c80, size 0xb0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804d7d30, size 0x250, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__CreateSessionModificationOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CreateSessionModificationOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SessionName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_BucketId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_MaxPlayers", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PresenceEnabled", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SessionId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_SanctionsEnabled", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllowedPlatformIds", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AllowedPlatformIdsCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CreateSessionModificationOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SessionName, ::System::IntPtr  m_BucketId, uint32_t  m_MaxPlayers, ::System::IntPtr  m_LocalUserId, int32_t  m_PresenceEnabled, ::System::IntPtr  m_SessionId, int32_t  m_SanctionsEnabled, ::System::IntPtr  m_AllowedPlatformIds, uint32_t  m_AllowedPlatformIdsCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7699};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_SessionName, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_SessionName;

/// @brief Field m_BucketId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_BucketId;

/// @brief Field m_MaxPlayers, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_MaxPlayers;

/// @brief Field m_LocalUserId, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_PresenceEnabled, offset: 0x28, size: 0x4, def value: None
 int32_t  m_PresenceEnabled;

/// @brief Field m_SessionId, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_SessionId;

/// @brief Field m_SanctionsEnabled, offset: 0x38, size: 0x4, def value: None
 int32_t  m_SanctionsEnabled;

/// @brief Field m_AllowedPlatformIds, offset: 0x40, size: 0x8, def value: None
 ::System::IntPtr  m_AllowedPlatformIds;

/// @brief Field m_AllowedPlatformIdsCount, offset: 0x48, size: 0x4, def value: None
 uint32_t  m_AllowedPlatformIdsCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal, m_SessionName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal, m_BucketId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal, m_MaxPlayers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal, m_LocalUserId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal, m_PresenceEnabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal, m_SessionId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal, m_SanctionsEnabled) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal, m_AllowedPlatformIds) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal, m_AllowedPlatformIdsCount) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal) == 0x50, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
