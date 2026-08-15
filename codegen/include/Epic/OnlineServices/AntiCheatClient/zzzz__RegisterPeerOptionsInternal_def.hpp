#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/RegisterPeerOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientPlatform_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegisterPeerOptionsInternal)
namespace Epic::OnlineServices::AntiCheatClient {
struct RegisterPeerOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatClient {
struct RegisterPeerOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal, "Epic.OnlineServices.AntiCheatClient", "RegisterPeerOptionsInternal");
// Dependencies Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientPlatform, Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientType, System.IntPtr
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.RegisterPeerOptionsInternal
struct CORDL_TYPE RegisterPeerOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x180533580, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1805335c0, size 0xd0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatClient__RegisterPeerOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr RegisterPeerOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_PeerHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ClientType", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType", modifiers: "", def_value: None }, CppParam { name: "m_ClientPlatform", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform", modifiers: "", def_value: None }, CppParam { name: "m_AuthenticationTimeout", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_AccountId_DEPRECATED", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_IpAddress", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PeerProductUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr RegisterPeerOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_PeerHandle, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  m_ClientType, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform  m_ClientPlatform, uint32_t  m_AuthenticationTimeout, ::System::IntPtr  m_AccountId_DEPRECATED, ::System::IntPtr  m_IpAddress, ::System::IntPtr  m_PeerProductUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9443};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_PeerHandle, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_PeerHandle;

/// @brief Field m_ClientType, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  m_ClientType;

/// @brief Field m_ClientPlatform, offset: 0x14, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform  m_ClientPlatform;

/// @brief Field m_AuthenticationTimeout, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_AuthenticationTimeout;

/// @brief Field m_AccountId_DEPRECATED, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_AccountId_DEPRECATED;

/// @brief Field m_IpAddress, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_IpAddress;

/// @brief Field m_PeerProductUserId, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_PeerProductUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal, m_PeerHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal, m_ClientType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal, m_ClientPlatform) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal, m_AuthenticationTimeout) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal, m_AccountId_DEPRECATED) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal, m_IpAddress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal, m_PeerProductUserId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
