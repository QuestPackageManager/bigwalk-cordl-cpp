#pragma once
// IWYU pragma private; include "Shipmate/Porting/Mocked/MockedPlatformLobby.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmate/Porting/zzzz__AbstractPlatformLobby_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MockedPlatformLobby)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
// Forward declare root types
namespace Shipmate::Porting::Mocked {
class MockedPlatformLobby;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::Mocked::MockedPlatformLobby*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Mocked::MockedPlatformLobby*, "Shipmate.Porting.Mocked", "MockedPlatformLobby");
// Dependencies Shipmate.Porting.AbstractPlatformLobby
namespace Shipmate::Porting::Mocked {
// Is value type: false
// CS Name: Shipmate.Porting.Mocked.MockedPlatformLobby
class CORDL_TYPE MockedPlatformLobby : public ::Shipmate::Porting::AbstractPlatformLobby {
public:
// Declarations
 __declspec(property(get=get_CreateSoloLobby)) bool  CreateSoloLobby;

/// @brief Method CreateLobby, addr 0x181ac6190, size 0x40, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask CreateLobby(::StringW  aLobbyId, bool  aIsPrivate) ;

/// @brief Method FetchLobbyData, addr 0x181ac6190, size 0x40, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask FetchLobbyData() ;

/// @brief Method GetAllFriends, addr 0x180974130, size 0xeb0, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<uint64_t>> GetAllFriends() ;

/// @brief Method GetOnlineFriends, addr 0x180974130, size 0xeb0, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<uint64_t>> GetOnlineFriends() ;

/// @brief Method JoinPendingLobbyInvite, addr 0x181ac6190, size 0x40, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask JoinPendingLobbyInvite() ;

static inline ::Shipmate::Porting::Mocked::MockedPlatformLobby* New_ctor() ;

/// @brief Method ShowInviteFriendInterface, addr 0x181ac6190, size 0x40, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask ShowInviteFriendInterface() ;

/// @brief Method .ctor, addr 0x181ac9840, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CreateSoloLobby, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_CreateSoloLobby() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockedPlatformLobby() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockedPlatformLobby", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockedPlatformLobby(MockedPlatformLobby && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockedPlatformLobby", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockedPlatformLobby(MockedPlatformLobby const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21520};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Porting::Mocked::MockedPlatformLobby) == 0x58, "Size mismatch!");

} // namespace end def Shipmate::Porting::Mocked
