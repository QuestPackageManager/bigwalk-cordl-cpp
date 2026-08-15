#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendsPlatform.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FriendsPlatform_def.hpp"
#include "GlobalNamespace/zzzz__FriendsPlatform_def.hpp"
#include "GlobalNamespace/zzzz__JoinFriendCard_def.hpp"
#include "GlobalNamespace/zzzz__LobbyInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4::*)()>(&::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x18042df00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "friendsCodes", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4::FriendsPlatform__FetchFriendsGames_d__4(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>  __t__builder, ::System::Collections::Generic::List_1<::StringW>*  friendsCodes, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->friendsCodes = friendsCodes;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendsPlatform__FetchFriendsGames_d__4::FriendsPlatform__FetchFriendsGames_d__4()   {
}
//  Writing Method size for method: ::GlobalNamespace::FriendsPlatform.GetFriendJoinCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::FriendsPlatform::GetFriendJoinCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180421860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"GetFriendJoinCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsPlatform.SetFriendStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::GlobalNamespace::FriendsPlatform::SetFriendStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804218c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"SetFriendStatus", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsPlatform.ClearFriendStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::FriendsPlatform::ClearFriendStatus)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804215e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"ClearFriendStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsPlatform.PollForFriendGames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*)>(&::GlobalNamespace::FriendsPlatform::PollForFriendGames)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804218b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"PollForFriendGames", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsPlatform.FetchFriendsGames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>* (*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::FriendsPlatform::FetchFriendsGames)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804217d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"FetchFriendsGames", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsPlatform.ConvertToFriendGameInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>* (*)(::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*)>(&::GlobalNamespace::FriendsPlatform::ConvertToFriendGameInfo)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180421640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"ConvertToFriendGameInfo", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsPlatform.TryGetLocalUserIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::StringW>)>(&::GlobalNamespace::FriendsPlatform::TryGetLocalUserIdentifier)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180421b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"TryGetLocalUserIdentifier", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsPlatform.TryGetLocalModerationName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::StringW>)>(&::GlobalNamespace::FriendsPlatform::TryGetLocalModerationName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180421a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"TryGetLocalModerationName", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsPlatform.ToShaNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::StringW)>(&::GlobalNamespace::FriendsPlatform::ToShaNumber)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804218d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"ToShaNumber", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsPlatform.TryGetLocalPlatformId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<uint64_t>)>(&::GlobalNamespace::FriendsPlatform::TryGetLocalPlatformId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180421ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"TryGetLocalPlatformId", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsPlatform.TryGetEOSProductUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::StringW>)>(&::GlobalNamespace::FriendsPlatform::TryGetEOSProductUserId)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804219c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"TryGetEOSProductUserId", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendsPlatform.LocalPlatformHasFriendsSupport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::FriendsPlatform::LocalPlatformHasFriendsSupport)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180421890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"LocalPlatformHasFriendsSupport", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::FriendsPlatform::GetFriendJoinCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"GetFriendJoinCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FriendsPlatform::SetFriendStatus(::StringW  worldName, ::StringW  joinCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"SetFriendStatus", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldName, joinCode);
}
inline void GlobalNamespace::FriendsPlatform::ClearFriendStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"ClearFriendStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FriendsPlatform::PollForFriendGames(::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*  infos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"PollForFriendGames", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, infos);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>* GlobalNamespace::FriendsPlatform::FetchFriendsGames(::System::Collections::Generic::List_1<::StringW>*  friendsCodes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"FetchFriendsGames", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>*>(nullptr, ___internal_method, friendsCodes);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>* GlobalNamespace::FriendsPlatform::ConvertToFriendGameInfo(::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*  sessions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"ConvertToFriendGameInfo", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>(nullptr, ___internal_method, sessions);
}
inline bool GlobalNamespace::FriendsPlatform::TryGetLocalUserIdentifier(::by_ref<::StringW>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"TryGetLocalUserIdentifier", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline bool GlobalNamespace::FriendsPlatform::TryGetLocalModerationName(::by_ref<::StringW>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"TryGetLocalModerationName", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline uint64_t GlobalNamespace::FriendsPlatform::ToShaNumber(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"ToShaNumber", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, text);
}
inline bool GlobalNamespace::FriendsPlatform::TryGetLocalPlatformId(::by_ref<uint64_t>  platformId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"TryGetLocalPlatformId", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, platformId);
}
inline bool GlobalNamespace::FriendsPlatform::TryGetEOSProductUserId(::by_ref<::StringW>  userId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"TryGetEOSProductUserId", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, userId);
}
inline bool GlobalNamespace::FriendsPlatform::LocalPlatformHasFriendsSupport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendsPlatform*>(),
                        {"LocalPlatformHasFriendsSupport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendsPlatform::FriendsPlatform()   {
}
