#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyUpdateReceivedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LobbyUpdateReceivedCallbackInfoInternal)
namespace Epic::OnlineServices::Lobby {
struct LobbyUpdateReceivedCallbackInfo;
}
namespace Epic::OnlineServices {
class ICallbackInfoInternal;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LobbyUpdateReceivedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfoInternal, "Epic.OnlineServices.Lobby", "LobbyUpdateReceivedCallbackInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbyUpdateReceivedCallbackInfoInternal
struct CORDL_TYPE LobbyUpdateReceivedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo>*() ;

/// @brief Method Get, addr 0x18050bc10, size 0xb0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Lobby__LobbyUpdateReceivedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbyUpdateReceivedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LobbyId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr LobbyUpdateReceivedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LobbyId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8593};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LobbyId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LobbyId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfoInternal, m_LobbyId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfoInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
