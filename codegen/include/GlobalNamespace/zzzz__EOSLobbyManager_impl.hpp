#pragma once
// IWYU pragma private; include "GlobalNamespace/EOSLobbyManager.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_impl.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EOSLobbyManager_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__CreateLobbyCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__DestroyLobbyCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__JoinLobbyCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LeaveLobbyCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsInfo_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetails_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyInterface_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModification_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchFindCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearch_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnDestroyLobbyCallback_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnUpdateLobbyCallback_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__UpdateLobbyCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "GlobalNamespace/zzzz__EOSLobbyManager_def.hpp"
#include "GlobalNamespace/zzzz__LobbyInfo_def.hpp"
#include "GlobalNamespace/zzzz__RemoteConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c::*)()>(&::GlobalNamespace::EOSLobbyManager___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c._CreateLobby_b__39_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c::*)(::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>)>(&::GlobalNamespace::EOSLobbyManager___c::_CreateLobby_b__39_1)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18157cbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c*>(),
                        {"<CreateLobby>b__39_1", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c._DestroyMemberLobby_b__42_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c::*)(::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>)>(&::GlobalNamespace::EOSLobbyManager___c::_DestroyMemberLobby_b__42_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18157cc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c*>(),
                        {"<DestroyMemberLobby>b__42_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c._FindPublicLobbies_b__51_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c::*)(::Epic::OnlineServices::Lobby::LobbySearch*)>(&::GlobalNamespace::EOSLobbyManager___c::_FindPublicLobbies_b__51_0)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18157cde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c*>(),
                        {"<FindPublicLobbies>b__51_0", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbySearch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c._DoesUserHaveExistingLobby_b__56_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c::*)(::Epic::OnlineServices::Lobby::LobbySearch*)>(&::GlobalNamespace::EOSLobbyManager___c::_DoesUserHaveExistingLobby_b__56_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18157cca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c*>(),
                        {"<DoesUserHaveExistingLobby>b__56_0", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbySearch*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyManager___c::setStaticF___9(::GlobalNamespace::EOSLobbyManager___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::EOSLobbyManager___c*, "<>9", ::GlobalNamespace::EOSLobbyManager___c*>(std::forward<::GlobalNamespace::EOSLobbyManager___c*>(value));
}
inline ::GlobalNamespace::EOSLobbyManager___c* GlobalNamespace::EOSLobbyManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::EOSLobbyManager___c*, "<>9", ::GlobalNamespace::EOSLobbyManager___c*>();
}
inline void GlobalNamespace::EOSLobbyManager___c::setStaticF___9__39_1(::Epic::OnlineServices::Lobby::OnUpdateLobbyCallback*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnUpdateLobbyCallback*, "<>9__39_1", ::GlobalNamespace::EOSLobbyManager___c*>(std::forward<::Epic::OnlineServices::Lobby::OnUpdateLobbyCallback*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallback* GlobalNamespace::EOSLobbyManager___c::getStaticF___9__39_1()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnUpdateLobbyCallback*, "<>9__39_1", ::GlobalNamespace::EOSLobbyManager___c*>();
}
inline void GlobalNamespace::EOSLobbyManager___c::setStaticF___9__42_0(::Epic::OnlineServices::Lobby::OnDestroyLobbyCallback*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnDestroyLobbyCallback*, "<>9__42_0", ::GlobalNamespace::EOSLobbyManager___c*>(std::forward<::Epic::OnlineServices::Lobby::OnDestroyLobbyCallback*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnDestroyLobbyCallback* GlobalNamespace::EOSLobbyManager___c::getStaticF___9__42_0()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnDestroyLobbyCallback*, "<>9__42_0", ::GlobalNamespace::EOSLobbyManager___c*>();
}
inline void GlobalNamespace::EOSLobbyManager___c::setStaticF___9__51_0(::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*, "<>9__51_0", ::GlobalNamespace::EOSLobbyManager___c*>(std::forward<::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*>(value));
}
inline ::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>* GlobalNamespace::EOSLobbyManager___c::getStaticF___9__51_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*, "<>9__51_0", ::GlobalNamespace::EOSLobbyManager___c*>();
}
inline void GlobalNamespace::EOSLobbyManager___c::setStaticF___9__56_0(::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*, "<>9__56_0", ::GlobalNamespace::EOSLobbyManager___c*>(std::forward<::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*>(value));
}
inline ::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>* GlobalNamespace::EOSLobbyManager___c::getStaticF___9__56_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*, "<>9__56_0", ::GlobalNamespace::EOSLobbyManager___c*>();
}
inline void GlobalNamespace::EOSLobbyManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager___c::_CreateLobby_b__39_1(::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c*>(),
                        {"<CreateLobby>b__39_1", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::EOSLobbyManager___c::_DestroyMemberLobby_b__42_0(::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c*>(),
                        {"<DestroyMemberLobby>b__42_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::EOSLobbyManager___c::_FindPublicLobbies_b__51_0(::Epic::OnlineServices::Lobby::LobbySearch*  search)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c*>(),
                        {"<FindPublicLobbies>b__51_0", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbySearch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, search);
}
inline void GlobalNamespace::EOSLobbyManager___c::_DoesUserHaveExistingLobby_b__56_0(::Epic::OnlineServices::Lobby::LobbySearch*  search)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c*>(),
                        {"<DoesUserHaveExistingLobby>b__56_0", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbySearch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, search);
}
inline ::GlobalNamespace::EOSLobbyManager___c* GlobalNamespace::EOSLobbyManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobbyManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager___c::EOSLobbyManager___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0::*)()>(&::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0._JoinLobby_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0::*)(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfo>)>(&::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0::_JoinLobby_b__0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18157da70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0*>(),
                        {"<JoinLobby>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EOSLobbyManager>& GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSLobbyManager> const& GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobbyManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
inline void GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0::_JoinLobby_b__0(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0*>(),
                        {"<JoinLobby>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0* GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0::EOSLobbyManager___c__DisplayClass37_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0::*)()>(&::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0._CreateLobby_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0::*)(::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyCallbackInfo>)>(&::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0::_CreateLobby_b__0)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18157db10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0*>(),
                        {"<CreateLobby>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LobbyInfo*& GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0::__cordl_internal_get_lobbyInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyInfo;
}
constexpr ::GlobalNamespace::LobbyInfo* const& GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0::__cordl_internal_get_lobbyInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyInfo;
}
constexpr void GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0::__cordl_internal_set_lobbyInfo(::GlobalNamespace::LobbyInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyInfo = value;
}
constexpr ::UnityW<::GlobalNamespace::EOSLobbyManager>& GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSLobbyManager> const& GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobbyManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Epic::OnlineServices::Lobby::LobbyInterface*& GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0::__cordl_internal_get_lobbies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbies;
}
constexpr ::Epic::OnlineServices::Lobby::LobbyInterface* const& GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0::__cordl_internal_get_lobbies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbies;
}
constexpr void GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0::__cordl_internal_set_lobbies(::Epic::OnlineServices::Lobby::LobbyInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbies = value;
}
inline void GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0::_CreateLobby_b__0(::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyCallbackInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0*>(),
                        {"<CreateLobby>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0* GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0::EOSLobbyManager___c__DisplayClass39_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0::*)()>(&::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0._DestroyLobby_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0::*)(::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>)>(&::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0::_DestroyLobby_b__0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18157dd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0*>(),
                        {"<DestroyLobby>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LobbyInfo*& GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0::__cordl_internal_get_lobbyInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyInfo;
}
constexpr ::GlobalNamespace::LobbyInfo* const& GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0::__cordl_internal_get_lobbyInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyInfo;
}
constexpr void GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0::__cordl_internal_set_lobbyInfo(::GlobalNamespace::LobbyInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyInfo = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource*& GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource* const& GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0::__cordl_internal_set_tcs(::Cysharp::Threading::Tasks::UniTaskCompletionSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
inline void GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0::_DestroyLobby_b__0(::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0*>(),
                        {"<DestroyLobby>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0* GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0::EOSLobbyManager___c__DisplayClass41_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0::*)()>(&::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0._FindFriendsLobbies_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0::*)(::Epic::OnlineServices::Lobby::LobbySearch*)>(&::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0::_FindFriendsLobbies_b__0)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18157de80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0*>(),
                        {"<FindFriendsLobbies>b__0", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbySearch*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0::__cordl_internal_get_friendCodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendCodes;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0::__cordl_internal_get_friendCodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendCodes;
}
constexpr void GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0::__cordl_internal_set_friendCodes(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendCodes = value;
}
inline void GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0::_FindFriendsLobbies_b__0(::Epic::OnlineServices::Lobby::LobbySearch*  search)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0*>(),
                        {"<FindFriendsLobbies>b__0", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbySearch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, search);
}
inline ::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0* GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0::EOSLobbyManager___c__DisplayClass50_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0::*)()>(&::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0._FindLobbyByCode_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0::*)(::Epic::OnlineServices::Lobby::LobbySearch*)>(&::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0::_FindLobbyByCode_b__0)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x18157e0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0*>(),
                        {"<FindLobbyByCode>b__0", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbySearch*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0::__cordl_internal_get_code()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___code;
}
constexpr ::StringW const& GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0::__cordl_internal_get_code() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___code;
}
constexpr void GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0::__cordl_internal_set_code(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___code = value;
}
inline void GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0::_FindLobbyByCode_b__0(::Epic::OnlineServices::Lobby::LobbySearch*  search)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0*>(),
                        {"<FindLobbyByCode>b__0", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbySearch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, search);
}
inline ::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0* GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0::EOSLobbyManager___c__DisplayClass53_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0::*)()>(&::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0._GetAvailableLobbyCodeFromList_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0::*)(::Epic::OnlineServices::Lobby::LobbySearch*)>(&::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0::_GetAvailableLobbyCodeFromList_b__0)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x18157e470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0*>(),
                        {"<GetAvailableLobbyCodeFromList>b__0", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbySearch*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0::__cordl_internal_get_codes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___codes;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0::__cordl_internal_get_codes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___codes;
}
constexpr void GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0::__cordl_internal_set_codes(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___codes = value;
}
inline void GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0::_GetAvailableLobbyCodeFromList_b__0(::Epic::OnlineServices::Lobby::LobbySearch*  search)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0*>(),
                        {"<GetAvailableLobbyCodeFromList>b__0", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbySearch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, search);
}
inline ::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0* GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0::EOSLobbyManager___c__DisplayClass55_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1::*)()>(&::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1._GetAvailableLobbyCodeFromList_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1::*)(::GlobalNamespace::LobbyInfo*)>(&::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1::_GetAvailableLobbyCodeFromList_b__1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18157e880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1*>(),
                        {"<GetAvailableLobbyCodeFromList>b__1", {}, {::i2c::type_of<::GlobalNamespace::LobbyInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1::__cordl_internal_get_code()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___code;
}
constexpr ::StringW const& GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1::__cordl_internal_get_code() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___code;
}
constexpr void GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1::__cordl_internal_set_code(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___code = value;
}
inline void GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1::_GetAvailableLobbyCodeFromList_b__1(::GlobalNamespace::LobbyInfo*  lobby)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1*>(),
                        {"<GetAvailableLobbyCodeFromList>b__1", {}, {::i2c::type_of<::GlobalNamespace::LobbyInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, lobby);
}
inline ::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1* GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1::EOSLobbyManager___c__DisplayClass55_1()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0::*)()>(&::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0._FindLobbies_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>)>(&::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0::_FindLobbies_b__0)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18157e8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0*>(),
                        {"<FindLobbies>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>*& GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>* const& GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::Epic::OnlineServices::Lobby::LobbySearch*& GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0::__cordl_internal_get_search()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___search;
}
constexpr ::Epic::OnlineServices::Lobby::LobbySearch* const& GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0::__cordl_internal_get_search() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___search;
}
constexpr void GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0::__cordl_internal_set_search(::Epic::OnlineServices::Lobby::LobbySearch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___search = value;
}
constexpr ::UnityW<::GlobalNamespace::EOSLobbyManager>& GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EOSLobbyManager> const& GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobbyManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0::_FindLobbies_b__0(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0*>(),
                        {"<FindLobbies>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline ::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0* GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0::EOSLobbyManager___c__DisplayClass58_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49::*)()>(&::GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49::MoveNext)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181575bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49::EOSLobbyManager__CheckForInternetConnection_d__49(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>  __t__builder) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49::EOSLobbyManager__CheckForInternetConnection_d__49()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45::*)()>(&::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45::MoveNext)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x181575d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45::EOSLobbyManager__CleanupLobbyIfDangling_d__45(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45::EOSLobbyManager__CleanupLobbyIfDangling_d__45()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39::*)()>(&::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x181576ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyManager__CreateLobby_d__39::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager__CreateLobby_d__39::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSLobbyManager__CreateLobby_d__39::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSLobbyManager__CreateLobby_d__39::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "lobbyInfo", ty: "::GlobalNamespace::LobbyInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39::EOSLobbyManager__CreateLobby_d__39(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::GlobalNamespace::LobbyInfo*  lobbyInfo, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->lobbyInfo = lobbyInfo;
this->__4__this = __4__this;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39::EOSLobbyManager__CreateLobby_d__39()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47::*)()>(&::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47::MoveNext)> {
  constexpr static std::size_t size = 0xc50;
  constexpr static std::size_t addrs = 0x181576270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lobby", ty: "::GlobalNamespace::LobbyInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::GlobalNamespace::LobbyInfo*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::LobbyInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47::EOSLobbyManager__CreateLobbyIfNotCreated_d__47(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::GlobalNamespace::LobbyInfo*  lobby, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::GlobalNamespace::LobbyInfo*>  __u__3, ::GlobalNamespace::LobbyInfo*  __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__4) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->lobby = lobby;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
this->__7__wrap1 = __7__wrap1;
this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47::EOSLobbyManager__CreateLobbyIfNotCreated_d__47()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40::*)()>(&::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181577420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40::EOSLobbyManager__DestroyCurrentLobby_d__40(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40::EOSLobbyManager__DestroyCurrentLobby_d__40()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46::*)()>(&::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46::MoveNext)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x181577600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "lobbies", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46::EOSLobbyManager__DestroyLobbyList_d__46(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*  lobbies, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->lobbies = lobbies;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46::EOSLobbyManager__DestroyLobbyList_d__46()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42::*)()>(&::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x181577ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42::EOSLobbyManager__DestroyMemberLobby_d__42(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42::EOSLobbyManager__DestroyMemberLobby_d__42()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56::*)()>(&::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56::MoveNext)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x181577f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56::EOSLobbyManager__DoesUserHaveExistingLobby_d__56(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>>  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56::EOSLobbyManager__DoesUserHaveExistingLobby_d__56()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50::*)()>(&::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50::MoveNext)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1815789c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "friendCodes", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50::EOSLobbyManager__FindFriendsLobbies_d__50(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __t__builder, ::System::Collections::Generic::List_1<::StringW>*  friendCodes, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->friendCodes = friendCodes;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50::EOSLobbyManager__FindFriendsLobbies_d__50()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58::*)()>(&::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58::MoveNext)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x1815791c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyManager__FindLobbies_d__58::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager__FindLobbies_d__58::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSLobbyManager__FindLobbies_d__58::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSLobbyManager__FindLobbies_d__58::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxResults", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "feedSearch", ty: "::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58::EOSLobbyManager__FindLobbies_d__58(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, uint32_t  maxResults, ::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*  feedSearch, ::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->maxResults = maxResults;
this->feedSearch = feedSearch;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58::EOSLobbyManager__FindLobbies_d__58()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52::*)()>(&::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52::MoveNext)> {
  constexpr static std::size_t size = 0xb70;
  constexpr static std::size_t addrs = 0x1815795f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_lobbyInfo_5__2", ty: "::GlobalNamespace::LobbyInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_crossplay_5__3", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::GlobalNamespace::LobbyInfo*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::GlobalNamespace::RemoteConfig*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52::EOSLobbyManager__FindLobbyAndConnectByCode_d__52(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::StringW  code, ::GlobalNamespace::LobbyInfo*  _lobbyInfo_5__2, bool  _crossplay_5__3, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::GlobalNamespace::LobbyInfo*>  __u__1, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::GlobalNamespace::RemoteConfig*>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__3) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->code = code;
this->_lobbyInfo_5__2 = _lobbyInfo_5__2;
this->_crossplay_5__3 = _crossplay_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52::EOSLobbyManager__FindLobbyAndConnectByCode_d__52()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53::*)()>(&::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53::MoveNext)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18157a160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::GlobalNamespace::LobbyInfo*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53::EOSLobbyManager__FindLobbyByCode_d__53(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::GlobalNamespace::LobbyInfo*>  __t__builder, ::StringW  code, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->code = code;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53::EOSLobbyManager__FindLobbyByCode_d__53()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51::*)()>(&::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51::MoveNext)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18157a3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51::EOSLobbyManager__FindPublicLobbies_d__51(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51::EOSLobbyManager__FindPublicLobbies_d__51()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35::*)()>(&::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x18157aa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_attempts_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_codeGenerated_5__3", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35::EOSLobbyManager__GenerateGameCode_d__35(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, int32_t  _attempts_5__2, bool  _codeGenerated_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_attempts_5__2 = _attempts_5__2;
this->_codeGenerated_5__3 = _codeGenerated_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35::EOSLobbyManager__GenerateGameCode_d__35()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55::*)()>(&::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55::MoveNext)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x18157add0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37::*)()>(&::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x18157bd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyManager__JoinLobby_d__37::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager__JoinLobby_d__37::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSLobbyManager__JoinLobby_d__37::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSLobbyManager__JoinLobby_d__37::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "crossPlay", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "lobbyDetails", ty: "::Epic::OnlineServices::Lobby::LobbyDetails*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37::EOSLobbyManager__JoinLobby_d__37(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, bool  crossPlay, ::Epic::OnlineServices::Lobby::LobbyDetails*  lobbyDetails, ::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->crossPlay = crossPlay;
this->lobbyDetails = lobbyDetails;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37::EOSLobbyManager__JoinLobby_d__37()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48::*)()>(&::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48::MoveNext)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x18157c5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48::EOSLobbyManager__RecoverEOSLobby_d__48(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48::EOSLobbyManager__RecoverEOSLobby_d__48()   {
}
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::EOSLobbyManager> (*)()>(&::GlobalNamespace::EOSLobbyManager::get_Instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181570490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.get_CurrentLobbyCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::get_CurrentLobbyCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"get_CurrentLobbyCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.get_CurrentLobbyInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LobbyInfo* (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::get_CurrentLobbyInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"get_CurrentLobbyInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.get_LobbyHostId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::get_LobbyHostId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"get_LobbyHostId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18156e380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::OnDestroy)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18156f9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.ClearCodeAndLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::ClearCodeAndLobby)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18156e690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"ClearCodeAndLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.GenerateGameCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::GenerateGameCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18156f4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"GenerateGameCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.GenerateCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::GenerateCode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18156f450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"GenerateCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.JoinLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::EOSLobbyManager::*)(::Epic::OnlineServices::Lobby::LobbyDetails*, bool)>(&::GlobalNamespace::EOSLobbyManager::JoinLobby)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18156f630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"JoinLobby", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.LeaveLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::LeaveLobby)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18156f700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"LeaveLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.CreateLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::EOSLobbyManager::*)(::GlobalNamespace::LobbyInfo*)>(&::GlobalNamespace::EOSLobbyManager::CreateLobby)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18156e9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"CreateLobby", {}, {::i2c::type_of<::GlobalNamespace::LobbyInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.DestroyCurrentLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::DestroyCurrentLobby)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18156ea60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"DestroyCurrentLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.DestroyLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::EOSLobbyManager::*)(::GlobalNamespace::LobbyInfo*)>(&::GlobalNamespace::EOSLobbyManager::DestroyLobby)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18156eb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"DestroyLobby", {}, {::i2c::type_of<::GlobalNamespace::LobbyInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.DestroyMemberLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::DestroyMemberLobby)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18156ed00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"DestroyMemberLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.FeedUpdateAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager::*)(::Epic::OnlineServices::Lobby::LobbyModification*, ::GlobalNamespace::LobbyInfo*)>(&::GlobalNamespace::EOSLobbyManager::FeedUpdateAttributes)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18156eed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"FeedUpdateAttributes", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyModification*>(), ::i2c::type_of<::GlobalNamespace::LobbyInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.UpdateAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager::*)(::Epic::OnlineServices::Lobby::LobbyModification*, ::StringW, ::StringW)>(&::GlobalNamespace::EOSLobbyManager::UpdateAttribute)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181570260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"UpdateAttribute", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyModification*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.CleanupLobbyIfDangling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::CleanupLobbyIfDangling)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18156e600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"CleanupLobbyIfDangling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.DestroyLobbyList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::EOSLobbyManager::*)(::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*)>(&::GlobalNamespace::EOSLobbyManager::DestroyLobbyList)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18156eae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"DestroyLobbyList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.CreateLobbyIfNotCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::EOSLobbyManager::*)(::GlobalNamespace::LobbyInfo*)>(&::GlobalNamespace::EOSLobbyManager::CreateLobbyIfNotCreated)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18156e900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"CreateLobbyIfNotCreated", {}, {::i2c::type_of<::GlobalNamespace::LobbyInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.RecoverEOSLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::RecoverEOSLobby)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18156fa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"RecoverEOSLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.CheckForInternetConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<bool> (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::CheckForInternetConnection)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18156e490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"CheckForInternetConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.FindFriendsLobbies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>* (::GlobalNamespace::EOSLobbyManager::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::EOSLobbyManager::FindFriendsLobbies)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18156f0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"FindFriendsLobbies", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.FindPublicLobbies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>* (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::FindPublicLobbies)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18156f3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"FindPublicLobbies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.FindLobbyAndConnectByCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::GlobalNamespace::EOSLobbyManager::*)(::StringW)>(&::GlobalNamespace::EOSLobbyManager::FindLobbyAndConnectByCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18156f270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"FindLobbyAndConnectByCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.FindLobbyByCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::GlobalNamespace::LobbyInfo*> (::GlobalNamespace::EOSLobbyManager::*)(::StringW)>(&::GlobalNamespace::EOSLobbyManager::FindLobbyByCode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18156f310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"FindLobbyByCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.HandleCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::HandleCancel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18156f600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"HandleCancel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.GetAvailableLobbyCodeFromList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::GetAvailableLobbyCodeFromList)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18156f560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"GetAvailableLobbyCodeFromList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.DoesUserHaveExistingLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>> (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::DoesUserHaveExistingLobby)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18156ed60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"DoesUserHaveExistingLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.LocalCheckIsInLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::LocalCheckIsInLobby)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18156f820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"LocalCheckIsInLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.FindLobbies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>* (::GlobalNamespace::EOSLobbyManager::*)(uint32_t, ::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*)>(&::GlobalNamespace::EOSLobbyManager::FindLobbies)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18156f1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"FindLobbies", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.ConvertToLobbyInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LobbyInfo* (::GlobalNamespace::EOSLobbyManager::*)(::Epic::OnlineServices::Lobby::LobbyDetails*, ::Epic::OnlineServices::Lobby::LobbyDetailsInfo)>(&::GlobalNamespace::EOSLobbyManager::ConvertToLobbyInfo)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18156e6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"ConvertToLobbyInfo", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(), ::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.TryGetStringAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Epic::OnlineServices::Lobby::LobbyDetails*, ::StringW)>(&::GlobalNamespace::EOSLobbyManager::TryGetStringAttribute)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18156fbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"TryGetStringAttribute", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager.TryGetBoolAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (*)(::Epic::OnlineServices::Lobby::LobbyDetails*, ::StringW)>(&::GlobalNamespace::EOSLobbyManager::TryGetBoolAttribute)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18156faf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"TryGetBoolAttribute", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager::*)()>(&::GlobalNamespace::EOSLobbyManager::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181570450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager._LeaveLobby_b__38_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager::*)(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfo>)>(&::GlobalNamespace::EOSLobbyManager::_LeaveLobby_b__38_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1815701c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"<LeaveLobby>b__38_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager._DestroyCurrentLobby_b__40_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager::*)(::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>)>(&::GlobalNamespace::EOSLobbyManager::_DestroyCurrentLobby_b__40_0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18156fce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"<DestroyCurrentLobby>b__40_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EOSLobbyManager._DestroyMemberLobby_b__42_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EOSLobbyManager::*)(::Epic::OnlineServices::Lobby::LobbySearch*)>(&::GlobalNamespace::EOSLobbyManager::_DestroyMemberLobby_b__42_1)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x18156fdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"<DestroyMemberLobby>b__42_1", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbySearch*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::EOSLobbyManager::__cordl_internal_get_currentLobbyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLobbyID;
}
constexpr ::StringW const& GlobalNamespace::EOSLobbyManager::__cordl_internal_get_currentLobbyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLobbyID;
}
constexpr void GlobalNamespace::EOSLobbyManager::__cordl_internal_set_currentLobbyID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentLobbyID = value;
}
constexpr ::StringW& GlobalNamespace::EOSLobbyManager::__cordl_internal_get_currentLobbyCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLobbyCode;
}
constexpr ::StringW const& GlobalNamespace::EOSLobbyManager::__cordl_internal_get_currentLobbyCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLobbyCode;
}
constexpr void GlobalNamespace::EOSLobbyManager::__cordl_internal_set_currentLobbyCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentLobbyCode = value;
}
constexpr ::System::Action*& GlobalNamespace::EOSLobbyManager::__cordl_internal_get_onLobbyCodeCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLobbyCodeCreated;
}
constexpr ::System::Action* const& GlobalNamespace::EOSLobbyManager::__cordl_internal_get_onLobbyCodeCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLobbyCodeCreated;
}
constexpr void GlobalNamespace::EOSLobbyManager::__cordl_internal_set_onLobbyCodeCreated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onLobbyCodeCreated = value;
}
constexpr ::System::Action_1<::Epic::OnlineServices::Result>*& GlobalNamespace::EOSLobbyManager::__cordl_internal_get_onLobbyFoundRequestResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLobbyFoundRequestResponse;
}
constexpr ::System::Action_1<::Epic::OnlineServices::Result>* const& GlobalNamespace::EOSLobbyManager::__cordl_internal_get_onLobbyFoundRequestResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLobbyFoundRequestResponse;
}
constexpr void GlobalNamespace::EOSLobbyManager::__cordl_internal_set_onLobbyFoundRequestResponse(::System::Action_1<::Epic::OnlineServices::Result>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onLobbyFoundRequestResponse = value;
}
constexpr ::System::Action*& GlobalNamespace::EOSLobbyManager::__cordl_internal_get_OnLobbyDisconnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLobbyDisconnect;
}
constexpr ::System::Action* const& GlobalNamespace::EOSLobbyManager::__cordl_internal_get_OnLobbyDisconnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLobbyDisconnect;
}
constexpr void GlobalNamespace::EOSLobbyManager::__cordl_internal_set_OnLobbyDisconnect(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLobbyDisconnect = value;
}
constexpr ::Epic::OnlineServices::ProductUserId*& GlobalNamespace::EOSLobbyManager::__cordl_internal_get_lobbyHostId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyHostId;
}
constexpr ::Epic::OnlineServices::ProductUserId* const& GlobalNamespace::EOSLobbyManager::__cordl_internal_get_lobbyHostId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyHostId;
}
constexpr void GlobalNamespace::EOSLobbyManager::__cordl_internal_set_lobbyHostId(::Epic::OnlineServices::ProductUserId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyHostId = value;
}
constexpr ::StringW& GlobalNamespace::EOSLobbyManager::__cordl_internal_get_platformId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformId;
}
constexpr ::StringW const& GlobalNamespace::EOSLobbyManager::__cordl_internal_get_platformId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformId;
}
constexpr void GlobalNamespace::EOSLobbyManager::__cordl_internal_set_platformId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformId = value;
}
constexpr ::GlobalNamespace::LobbyInfo*& GlobalNamespace::EOSLobbyManager::__cordl_internal_get_currentLobbyInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLobbyInfo;
}
constexpr ::GlobalNamespace::LobbyInfo* const& GlobalNamespace::EOSLobbyManager::__cordl_internal_get_currentLobbyInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLobbyInfo;
}
constexpr void GlobalNamespace::EOSLobbyManager::__cordl_internal_set_currentLobbyInfo(::GlobalNamespace::LobbyInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentLobbyInfo = value;
}
inline void GlobalNamespace::EOSLobbyManager::setStaticF_instance(::UnityW<::GlobalNamespace::EOSLobbyManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::EOSLobbyManager>, "instance", ::GlobalNamespace::EOSLobbyManager*>(std::forward<::UnityW<::GlobalNamespace::EOSLobbyManager>>(value));
}
inline ::UnityW<::GlobalNamespace::EOSLobbyManager> GlobalNamespace::EOSLobbyManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::EOSLobbyManager>, "instance", ::GlobalNamespace::EOSLobbyManager*>();
}
inline void GlobalNamespace::EOSLobbyManager::setStaticF_CancelHasBeenCalled(bool  value)  {
::cordl_internals::setStaticField<bool, "CancelHasBeenCalled", ::GlobalNamespace::EOSLobbyManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::EOSLobbyManager::getStaticF_CancelHasBeenCalled()  {
return ::cordl_internals::getStaticField<bool, "CancelHasBeenCalled", ::GlobalNamespace::EOSLobbyManager*>();
}
inline void GlobalNamespace::EOSLobbyManager::setStaticF_RunningEOSConnectingCode(bool  value)  {
::cordl_internals::setStaticField<bool, "RunningEOSConnectingCode", ::GlobalNamespace::EOSLobbyManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::EOSLobbyManager::getStaticF_RunningEOSConnectingCode()  {
return ::cordl_internals::getStaticField<bool, "RunningEOSConnectingCode", ::GlobalNamespace::EOSLobbyManager*>();
}
inline void GlobalNamespace::EOSLobbyManager::setStaticF_PlayerHasBeenKicked(bool  value)  {
::cordl_internals::setStaticField<bool, "PlayerHasBeenKicked", ::GlobalNamespace::EOSLobbyManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::EOSLobbyManager::getStaticF_PlayerHasBeenKicked()  {
return ::cordl_internals::getStaticField<bool, "PlayerHasBeenKicked", ::GlobalNamespace::EOSLobbyManager*>();
}
inline ::UnityW<::GlobalNamespace::EOSLobbyManager> GlobalNamespace::EOSLobbyManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EOSLobbyManager>>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::EOSLobbyManager::get_CurrentLobbyCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"get_CurrentLobbyCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::LobbyInfo* GlobalNamespace::EOSLobbyManager::get_CurrentLobbyInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"get_CurrentLobbyInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LobbyInfo*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::ProductUserId* GlobalNamespace::EOSLobbyManager::get_LobbyHostId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"get_LobbyHostId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager::ClearCodeAndLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"ClearCodeAndLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::EOSLobbyManager::GenerateGameCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"GenerateGameCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline ::ArrayW<char16_t> GlobalNamespace::EOSLobbyManager::GenerateCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"GenerateCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::EOSLobbyManager::JoinLobby(::Epic::OnlineServices::Lobby::LobbyDetails*  lobbyDetails, bool  crossPlay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"JoinLobby", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, lobbyDetails, crossPlay);
}
inline void GlobalNamespace::EOSLobbyManager::LeaveLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"LeaveLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::EOSLobbyManager::CreateLobby(::GlobalNamespace::LobbyInfo*  lobbyInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"CreateLobby", {}, {::i2c::type_of<::GlobalNamespace::LobbyInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, lobbyInfo);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::EOSLobbyManager::DestroyCurrentLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"DestroyCurrentLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::EOSLobbyManager::DestroyLobby(::GlobalNamespace::LobbyInfo*  lobbyInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"DestroyLobby", {}, {::i2c::type_of<::GlobalNamespace::LobbyInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, lobbyInfo);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid GlobalNamespace::EOSLobbyManager::DestroyMemberLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"DestroyMemberLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager::FeedUpdateAttributes(::Epic::OnlineServices::Lobby::LobbyModification*  update, ::GlobalNamespace::LobbyInfo*  lobbyInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"FeedUpdateAttributes", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyModification*>(), ::i2c::type_of<::GlobalNamespace::LobbyInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, update, lobbyInfo);
}
inline void GlobalNamespace::EOSLobbyManager::UpdateAttribute(::Epic::OnlineServices::Lobby::LobbyModification*  update, ::StringW  attributeKey, ::StringW  attributeValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"UpdateAttribute", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyModification*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, update, attributeKey, attributeValue);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::EOSLobbyManager::CleanupLobbyIfDangling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"CleanupLobbyIfDangling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::EOSLobbyManager::DestroyLobbyList(::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*  lobbies)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"DestroyLobbyList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, lobbies);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::EOSLobbyManager::CreateLobbyIfNotCreated(::GlobalNamespace::LobbyInfo*  lobby)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"CreateLobbyIfNotCreated", {}, {::i2c::type_of<::GlobalNamespace::LobbyInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, lobby);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::EOSLobbyManager::RecoverEOSLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"RecoverEOSLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> GlobalNamespace::EOSLobbyManager::CheckForInternetConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"CheckForInternetConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>* GlobalNamespace::EOSLobbyManager::FindFriendsLobbies(::System::Collections::Generic::List_1<::StringW>*  friendCodes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"FindFriendsLobbies", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>*>(this, ___internal_method, friendCodes);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>* GlobalNamespace::EOSLobbyManager::FindPublicLobbies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"FindPublicLobbies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid GlobalNamespace::EOSLobbyManager::FindLobbyAndConnectByCode(::StringW  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"FindLobbyAndConnectByCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method, code);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::GlobalNamespace::LobbyInfo*> GlobalNamespace::EOSLobbyManager::FindLobbyByCode(::StringW  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"FindLobbyByCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::GlobalNamespace::LobbyInfo*>>(this, ___internal_method, code);
}
inline bool GlobalNamespace::EOSLobbyManager::HandleCancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"HandleCancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::EOSLobbyManager::GetAvailableLobbyCodeFromList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"GetAvailableLobbyCodeFromList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>> GlobalNamespace::EOSLobbyManager::DoesUserHaveExistingLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"DoesUserHaveExistingLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>>>(this, ___internal_method);
}
inline bool GlobalNamespace::EOSLobbyManager::LocalCheckIsInLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"LocalCheckIsInLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>* GlobalNamespace::EOSLobbyManager::FindLobbies(uint32_t  maxResults, ::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*  feedSearch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"FindLobbies", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>*>(this, ___internal_method, maxResults, feedSearch);
}
inline ::GlobalNamespace::LobbyInfo* GlobalNamespace::EOSLobbyManager::ConvertToLobbyInfo(::Epic::OnlineServices::Lobby::LobbyDetails*  details, ::Epic::OnlineServices::Lobby::LobbyDetailsInfo  detailsInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"ConvertToLobbyInfo", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(), ::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LobbyInfo*>(this, ___internal_method, details, detailsInfo);
}
inline ::StringW GlobalNamespace::EOSLobbyManager::TryGetStringAttribute(::Epic::OnlineServices::Lobby::LobbyDetails*  details, ::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"TryGetStringAttribute", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, details, key);
}
inline ::System::Nullable_1<bool> GlobalNamespace::EOSLobbyManager::TryGetBoolAttribute(::Epic::OnlineServices::Lobby::LobbyDetails*  details, ::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"TryGetBoolAttribute", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(nullptr, ___internal_method, details, key);
}
inline void GlobalNamespace::EOSLobbyManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EOSLobbyManager::_LeaveLobby_b__38_0(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"<LeaveLobby>b__38_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::EOSLobbyManager::_DestroyCurrentLobby_b__40_0(::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"<DestroyCurrentLobby>b__40_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::EOSLobbyManager::_DestroyMemberLobby_b__42_1(::Epic::OnlineServices::Lobby::LobbySearch*  feedSearch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EOSLobbyManager*>(),
                        {"<DestroyMemberLobby>b__42_1", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbySearch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feedSearch);
}
inline ::GlobalNamespace::EOSLobbyManager* GlobalNamespace::EOSLobbyManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EOSLobbyManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EOSLobbyManager::EOSLobbyManager()   {
}
