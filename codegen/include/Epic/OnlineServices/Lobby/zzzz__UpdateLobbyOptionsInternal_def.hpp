#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/UpdateLobbyOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateLobbyOptionsInternal)
namespace Epic::OnlineServices::Lobby {
struct UpdateLobbyOptions;
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
struct UpdateLobbyOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::UpdateLobbyOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::UpdateLobbyOptionsInternal, "Epic.OnlineServices.Lobby", "UpdateLobbyOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.UpdateLobbyOptionsInternal
struct CORDL_TYPE UpdateLobbyOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::UpdateLobbyOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::UpdateLobbyOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804e7b40, size 0xb0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::UpdateLobbyOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::UpdateLobbyOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__UpdateLobbyOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr UpdateLobbyOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LobbyModificationHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr UpdateLobbyOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LobbyModificationHandle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8695};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LobbyModificationHandle, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LobbyModificationHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::UpdateLobbyOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::UpdateLobbyOptionsInternal, m_LobbyModificationHandle) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::UpdateLobbyOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
