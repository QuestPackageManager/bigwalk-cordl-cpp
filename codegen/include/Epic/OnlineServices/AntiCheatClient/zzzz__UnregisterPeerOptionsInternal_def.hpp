#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/UnregisterPeerOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnregisterPeerOptionsInternal)
namespace Epic::OnlineServices::AntiCheatClient {
struct UnregisterPeerOptions;
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
struct UnregisterPeerOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptionsInternal, "Epic.OnlineServices.AntiCheatClient", "UnregisterPeerOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.UnregisterPeerOptionsInternal
struct CORDL_TYPE UnregisterPeerOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804d7a90, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatClient__UnregisterPeerOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnregisterPeerOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_PeerHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr UnregisterPeerOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_PeerHandle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9451};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_PeerHandle, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_PeerHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptionsInternal, m_PeerHandle) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
