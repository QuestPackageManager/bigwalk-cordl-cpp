#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/CopyLobbyDetailsHandleByInviteIdOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyLobbyDetailsHandleByInviteIdOptionsInternal)
namespace Epic::OnlineServices::Lobby {
struct CopyLobbyDetailsHandleByInviteIdOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct CopyLobbyDetailsHandleByInviteIdOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal, "Epic.OnlineServices.Lobby", "CopyLobbyDetailsHandleByInviteIdOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.CopyLobbyDetailsHandleByInviteIdOptionsInternal
struct CORDL_TYPE CopyLobbyDetailsHandleByInviteIdOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f0f90, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__CopyLobbyDetailsHandleByInviteIdOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyLobbyDetailsHandleByInviteIdOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_InviteId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr CopyLobbyDetailsHandleByInviteIdOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_InviteId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8452};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_InviteId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_InviteId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal, m_InviteId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
