#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendsPlatform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendsPlatform)
namespace GlobalNamespace {
struct FriendsPlatform__FetchFriendsGames_d__4;
}
namespace GlobalNamespace {
struct JoinFriendCard_FriendGameInfo;
}
namespace GlobalNamespace {
class LobbyInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FriendsPlatform;
}
namespace GlobalNamespace {
struct FriendsPlatform__FetchFriendsGames_d__4;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FriendsPlatform*);
MARK_VAL_T(::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendsPlatform*, "", "FriendsPlatform");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4, "", "FriendsPlatform/<FetchFriendsGames>d__4");
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: FriendsPlatform/<FetchFriendsGames>d__4
struct CORDL_TYPE FriendsPlatform__FetchFriendsGames_d__4 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18042df00, size 0x310, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038b190, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FriendsPlatform__FetchFriendsGames_d__4() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>", modifiers: "", def_value: None }, CppParam { name: "friendsCodes", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: None }]
constexpr FriendsPlatform__FetchFriendsGames_d__4(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>  __t__builder, ::System::Collections::Generic::List_1<::StringW>*  friendsCodes, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5162};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>  __t__builder;

/// @brief Field friendsCodes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  friendsCodes;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4, friendsCodes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendsPlatform
class CORDL_TYPE FriendsPlatform : public ::System::Object {
public:
// Declarations
using _FetchFriendsGames_d__4 = ::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4;

/// @brief Method ClearFriendStatus, addr 0x1804215e0, size 0x60, virtual false, abstract: false, final false
static inline void ClearFriendStatus() ;

/// @brief Method ConvertToFriendGameInfo, addr 0x180421640, size 0x190, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>* ConvertToFriendGameInfo(::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*  sessions) ;

/// @brief Method FetchFriendsGames, addr 0x1804217d0, size 0x90, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>* FetchFriendsGames(::System::Collections::Generic::List_1<::StringW>*  friendsCodes) ;

/// @brief Method GetFriendJoinCode, addr 0x180421860, size 0x30, virtual false, abstract: false, final false
static inline ::StringW GetFriendJoinCode() ;

/// @brief Method LocalPlatformHasFriendsSupport, addr 0x180421890, size 0x20, virtual false, abstract: false, final false
static inline bool LocalPlatformHasFriendsSupport() ;

/// @brief Method PollForFriendGames, addr 0x1804218b0, size 0x10, virtual false, abstract: false, final false
static inline void PollForFriendGames(::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*  infos) ;

/// @brief Method SetFriendStatus, addr 0x1804218c0, size 0x10, virtual false, abstract: false, final false
static inline void SetFriendStatus(::StringW  worldName, ::StringW  joinCode) ;

/// @brief Method ToShaNumber, addr 0x1804218d0, size 0xf0, virtual false, abstract: false, final false
static inline uint64_t ToShaNumber(::StringW  text) ;

/// @brief Method TryGetEOSProductUserId, addr 0x1804219c0, size 0xc0, virtual false, abstract: false, final false
static inline bool TryGetEOSProductUserId(::by_ref<::StringW>  userId) ;

/// @brief Method TryGetLocalModerationName, addr 0x180421a80, size 0x50, virtual false, abstract: false, final false
static inline bool TryGetLocalModerationName(::by_ref<::StringW>  name) ;

/// @brief Method TryGetLocalPlatformId, addr 0x180421ad0, size 0x40, virtual false, abstract: false, final false
static inline bool TryGetLocalPlatformId(::by_ref<uint64_t>  platformId) ;

/// @brief Method TryGetLocalUserIdentifier, addr 0x180421b10, size 0x80, virtual false, abstract: false, final false
static inline bool TryGetLocalUserIdentifier(::by_ref<::StringW>  name) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendsPlatform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendsPlatform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendsPlatform(FriendsPlatform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendsPlatform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendsPlatform(FriendsPlatform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5163};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FriendsPlatform) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
