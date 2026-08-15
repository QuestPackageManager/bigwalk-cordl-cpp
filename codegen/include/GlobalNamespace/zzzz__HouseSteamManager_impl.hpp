#pragma once
// IWYU pragma private; include "GlobalNamespace/HouseSteamManager.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HouseSteamManager_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "GlobalNamespace/zzzz__HouseSteamManager_def.hpp"
#include "GlobalNamespace/zzzz__JoinFriendCard_def.hpp"
#include "Steamworks/zzzz__Callback_1_def.hpp"
#include "Steamworks/zzzz__GameOverlayActivated_t_def.hpp"
#include "Steamworks/zzzz__GameRichPresenceJoinRequested_t_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HouseSteamManager__Initialize_d__10.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseSteamManager__Initialize_d__10::*)()>(&::GlobalNamespace::HouseSteamManager__Initialize_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18042e5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager__Initialize_d__10>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseSteamManager__Initialize_d__10.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseSteamManager__Initialize_d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::HouseSteamManager__Initialize_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager__Initialize_d__10>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HouseSteamManager__Initialize_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager__Initialize_d__10>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::HouseSteamManager__Initialize_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager__Initialize_d__10>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::HouseSteamManager__Initialize_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::HouseSteamManager__Initialize_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::HouseSteamManager*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HouseSteamManager__Initialize_d__10::HouseSteamManager__Initialize_d__10(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::HouseSteamManager*  __4__this) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HouseSteamManager__Initialize_d__10::HouseSteamManager__Initialize_d__10()   {
}
//  Writing Method size for method: ::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12::*)()>(&::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x18042ede0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12::HouseSteamManager__RestoreRichPresence_d__12(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12::HouseSteamManager__RestoreRichPresence_d__12()   {
}
//  Writing Method size for method: ::GlobalNamespace::HouseSteamManager.get_isValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::HouseSteamManager::get_isValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038e2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"get_isValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseSteamManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseSteamManager::*)()>(&::GlobalNamespace::HouseSteamManager::Initialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180422bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseSteamManager.OnNetworkRestored
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseSteamManager::*)(double_t)>(&::GlobalNamespace::HouseSteamManager::OnNetworkRestored)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180422ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"OnNetworkRestored", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseSteamManager.RestoreRichPresence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::GlobalNamespace::HouseSteamManager::*)()>(&::GlobalNamespace::HouseSteamManager::RestoreRichPresence)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180422ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"RestoreRichPresence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseSteamManager.GetSteamMagicCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::HouseSteamManager::GetSteamMagicCode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180422b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"GetSteamMagicCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseSteamManager.SetSteamStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::GlobalNamespace::HouseSteamManager::SetSteamStatus)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180423040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"SetSteamStatus", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseSteamManager.ClearSteamStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::HouseSteamManager::ClearSteamStatus)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804215e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"ClearSteamStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseSteamManager.OnRichJoinRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseSteamManager::*)(::Steamworks::GameRichPresenceJoinRequested_t)>(&::GlobalNamespace::HouseSteamManager::OnRichJoinRequested)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180422d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"OnRichJoinRequested", {}, {::i2c::type_of<::Steamworks::GameRichPresenceJoinRequested_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseSteamManager.OnGameOverlayActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseSteamManager::*)(::Steamworks::GameOverlayActivated_t)>(&::GlobalNamespace::HouseSteamManager::OnGameOverlayActivated)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180422c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"OnGameOverlayActivated", {}, {::i2c::type_of<::Steamworks::GameOverlayActivated_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseSteamManager.PollForFriendGames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*)>(&::GlobalNamespace::HouseSteamManager::PollForFriendGames)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180422db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"PollForFriendGames", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseSteamManager.TryGetLocalUserIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::StringW>)>(&::GlobalNamespace::HouseSteamManager::TryGetLocalUserIdentifier)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180423180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"TryGetLocalUserIdentifier", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseSteamManager.TryGetLocalModerationName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::StringW>)>(&::GlobalNamespace::HouseSteamManager::TryGetLocalModerationName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180423130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"TryGetLocalModerationName", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseSteamManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseSteamManager::*)()>(&::GlobalNamespace::HouseSteamManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::HouseSteamManager::__cordl_internal_get_gameId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameId;
}
constexpr int32_t const& GlobalNamespace::HouseSteamManager::__cordl_internal_get_gameId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameId;
}
constexpr void GlobalNamespace::HouseSteamManager::__cordl_internal_set_gameId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameId = value;
}
constexpr ::Steamworks::Callback_1<::Steamworks::GameRichPresenceJoinRequested_t>*& GlobalNamespace::HouseSteamManager::__cordl_internal_get_m_GameRichPresenceJoinRequested()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GameRichPresenceJoinRequested;
}
constexpr ::Steamworks::Callback_1<::Steamworks::GameRichPresenceJoinRequested_t>* const& GlobalNamespace::HouseSteamManager::__cordl_internal_get_m_GameRichPresenceJoinRequested() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GameRichPresenceJoinRequested;
}
constexpr void GlobalNamespace::HouseSteamManager::__cordl_internal_set_m_GameRichPresenceJoinRequested(::Steamworks::Callback_1<::Steamworks::GameRichPresenceJoinRequested_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GameRichPresenceJoinRequested = value;
}
constexpr ::Steamworks::Callback_1<::Steamworks::GameOverlayActivated_t>*& GlobalNamespace::HouseSteamManager::__cordl_internal_get_m_GameOverlayActivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GameOverlayActivated;
}
constexpr ::Steamworks::Callback_1<::Steamworks::GameOverlayActivated_t>* const& GlobalNamespace::HouseSteamManager::__cordl_internal_get_m_GameOverlayActivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GameOverlayActivated;
}
constexpr void GlobalNamespace::HouseSteamManager::__cordl_internal_set_m_GameOverlayActivated(::Steamworks::Callback_1<::Steamworks::GameOverlayActivated_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GameOverlayActivated = value;
}
inline void GlobalNamespace::HouseSteamManager::setStaticF_richPressenceKeyStatus(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "richPressenceKeyStatus", ::GlobalNamespace::HouseSteamManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::HouseSteamManager::getStaticF_richPressenceKeyStatus()  {
return ::cordl_internals::getStaticField<::StringW, "richPressenceKeyStatus", ::GlobalNamespace::HouseSteamManager*>();
}
inline void GlobalNamespace::HouseSteamManager::setStaticF_richPressenceKeyWorldName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "richPressenceKeyWorldName", ::GlobalNamespace::HouseSteamManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::HouseSteamManager::getStaticF_richPressenceKeyWorldName()  {
return ::cordl_internals::getStaticField<::StringW, "richPressenceKeyWorldName", ::GlobalNamespace::HouseSteamManager*>();
}
inline void GlobalNamespace::HouseSteamManager::setStaticF_richPressenceKeyConnect(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "richPressenceKeyConnect", ::GlobalNamespace::HouseSteamManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::HouseSteamManager::getStaticF_richPressenceKeyConnect()  {
return ::cordl_internals::getStaticField<::StringW, "richPressenceKeyConnect", ::GlobalNamespace::HouseSteamManager*>();
}
inline void GlobalNamespace::HouseSteamManager::setStaticF_isInOverlay(bool  value)  {
::cordl_internals::setStaticField<bool, "isInOverlay", ::GlobalNamespace::HouseSteamManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::HouseSteamManager::getStaticF_isInOverlay()  {
return ::cordl_internals::getStaticField<bool, "isInOverlay", ::GlobalNamespace::HouseSteamManager*>();
}
inline void GlobalNamespace::HouseSteamManager::setStaticF_richPresenceWorldAndCode(::System::Tuple_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Tuple_2<::StringW,::StringW>*, "richPresenceWorldAndCode", ::GlobalNamespace::HouseSteamManager*>(std::forward<::System::Tuple_2<::StringW,::StringW>*>(value));
}
inline ::System::Tuple_2<::StringW,::StringW>* GlobalNamespace::HouseSteamManager::getStaticF_richPresenceWorldAndCode()  {
return ::cordl_internals::getStaticField<::System::Tuple_2<::StringW,::StringW>*, "richPresenceWorldAndCode", ::GlobalNamespace::HouseSteamManager*>();
}
inline bool GlobalNamespace::HouseSteamManager::get_isValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"get_isValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::HouseSteamManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HouseSteamManager::OnNetworkRestored(double_t  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"OnNetworkRestored", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid GlobalNamespace::HouseSteamManager::RestoreRichPresence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"RestoreRichPresence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::HouseSteamManager::GetSteamMagicCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"GetSteamMagicCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GlobalNamespace::HouseSteamManager::SetSteamStatus(::StringW  worldName, ::StringW  joinCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"SetSteamStatus", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldName, joinCode);
}
inline void GlobalNamespace::HouseSteamManager::ClearSteamStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"ClearSteamStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::HouseSteamManager::OnRichJoinRequested(::Steamworks::GameRichPresenceJoinRequested_t  pCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"OnRichJoinRequested", {}, {::i2c::type_of<::Steamworks::GameRichPresenceJoinRequested_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pCallback);
}
inline void GlobalNamespace::HouseSteamManager::OnGameOverlayActivated(::Steamworks::GameOverlayActivated_t  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"OnGameOverlayActivated", {}, {::i2c::type_of<::Steamworks::GameOverlayActivated_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::HouseSteamManager::PollForFriendGames(::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*  infos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"PollForFriendGames", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, infos);
}
inline bool GlobalNamespace::HouseSteamManager::TryGetLocalUserIdentifier(::by_ref<::StringW>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"TryGetLocalUserIdentifier", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline bool GlobalNamespace::HouseSteamManager::TryGetLocalModerationName(::by_ref<::StringW>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {"TryGetLocalModerationName", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline void GlobalNamespace::HouseSteamManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseSteamManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HouseSteamManager* GlobalNamespace::HouseSteamManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HouseSteamManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HouseSteamManager::HouseSteamManager()   {
}
