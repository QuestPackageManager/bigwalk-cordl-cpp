#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnJoinRTCRoomCallbackInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnJoinRTCRoomCallbackInternal)
namespace Epic::OnlineServices::Lobby {
struct JoinRTCRoomCallbackInfoInternal;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class OnJoinRTCRoomCallbackInternal;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternal*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternal*, "Epic.OnlineServices.Lobby", "OnJoinRTCRoomCallbackInternal");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.OnJoinRTCRoomCallbackInternal
class CORDL_TYPE OnJoinRTCRoomCallbackInternal : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18050e3d0, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::Lobby::JoinRTCRoomCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804dc830, size 0x20, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::Epic::OnlineServices::Lobby::JoinRTCRoomCallbackInfoInternal>  data, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Epic::OnlineServices::Lobby::JoinRTCRoomCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternal* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnJoinRTCRoomCallbackInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnJoinRTCRoomCallbackInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnJoinRTCRoomCallbackInternal(OnJoinRTCRoomCallbackInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnJoinRTCRoomCallbackInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnJoinRTCRoomCallbackInternal(OnJoinRTCRoomCallbackInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8615};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternal) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
