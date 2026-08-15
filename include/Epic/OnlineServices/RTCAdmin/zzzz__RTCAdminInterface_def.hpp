#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/RTCAdminInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RTCAdminInterface)
namespace Epic::OnlineServices::RTCAdmin {
struct CopyUserTokenByIndexOptions;
}
namespace Epic::OnlineServices::RTCAdmin {
struct CopyUserTokenByUserIdOptions;
}
namespace Epic::OnlineServices::RTCAdmin {
struct KickOptions;
}
namespace Epic::OnlineServices::RTCAdmin {
class OnKickCompleteCallback;
}
namespace Epic::OnlineServices::RTCAdmin {
class OnQueryJoinRoomTokenCompleteCallback;
}
namespace Epic::OnlineServices::RTCAdmin {
class OnSetParticipantHardMuteCompleteCallback;
}
namespace Epic::OnlineServices::RTCAdmin {
struct QueryJoinRoomTokenOptions;
}
namespace Epic::OnlineServices::RTCAdmin {
struct SetParticipantHardMuteOptions;
}
namespace Epic::OnlineServices::RTCAdmin {
struct UserToken;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAdmin {
class RTCAdminInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*, "Epic.OnlineServices.RTCAdmin", "RTCAdminInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::RTCAdmin {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCAdmin.RTCAdminInterface
class CORDL_TYPE RTCAdminInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method CopyUserTokenByIndex, addr 0x180500340, size 0x90, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyUserTokenByIndex(::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAdmin::UserToken>>  outUserToken) ;

/// @brief Method CopyUserTokenByUserId, addr 0x1805003d0, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyUserTokenByUserId(::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAdmin::UserToken>>  outUserToken) ;

/// @brief Method Kick, addr 0x180500490, size 0x230, virtual false, abstract: false, final false
inline void Kick(::by_ref<::Epic::OnlineServices::RTCAdmin::KickOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallback*  completionDelegate) ;

static inline ::Epic::OnlineServices::RTCAdmin::RTCAdminInterface* New_ctor() ;

static inline ::Epic::OnlineServices::RTCAdmin::RTCAdminInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method QueryJoinRoomToken, addr 0x1805006c0, size 0x280, virtual false, abstract: false, final false
inline void QueryJoinRoomToken(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*  completionDelegate) ;

/// @brief Method SetParticipantHardMute, addr 0x180500940, size 0x240, virtual false, abstract: false, final false
inline void SetParticipantHardMute(::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*  completionDelegate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RTCAdminInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RTCAdminInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RTCAdminInterface(RTCAdminInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RTCAdminInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RTCAdminInterface(RTCAdminInterface const& ) = delete;

/// @brief Field COPYUSERTOKENBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYUSERTOKENBYINDEX_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field COPYUSERTOKENBYUSERID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYUSERTOKENBYUSERID_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field KICK_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  KICK_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYJOINROOMTOKEN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYJOINROOMTOKEN_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field SETPARTICIPANTHARDMUTE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETPARTICIPANTHARDMUTE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field USERTOKEN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  USERTOKEN_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8115};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCAdmin::RTCAdminInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAdmin
