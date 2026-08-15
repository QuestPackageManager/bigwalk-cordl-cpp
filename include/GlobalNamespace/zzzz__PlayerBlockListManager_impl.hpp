#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerBlockListManager.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Shipmate/Utils/zzzz__SingletonBehaviour_1_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerBlockListManager_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "GlobalNamespace/zzzz__PlayerBlockListManager_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13::*)()>(&::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13::MoveNext)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181ace1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlayerBlockListManager>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13::PlayerBlockListManager__RefreshBlockedList_d__13(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::PlayerBlockListManager>  __4__this) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerBlockListManager__RefreshBlockedList_d__13::PlayerBlockListManager__RefreshBlockedList_d__13()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager.add_LocalBlockedUserListChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::PlayerBlockListManager::add_LocalBlockedUserListChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181acd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"add_LocalBlockedUserListChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager.remove_LocalBlockedUserListChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::PlayerBlockListManager::remove_LocalBlockedUserListChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181acd8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"remove_LocalBlockedUserListChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager.add_BlockedUserListChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::PlayerBlockListManager::add_BlockedUserListChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181acd730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"add_BlockedUserListChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager.remove_BlockedUserListChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::PlayerBlockListManager::remove_BlockedUserListChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181acd850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"remove_BlockedUserListChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerBlockListManager::*)()>(&::GlobalNamespace::PlayerBlockListManager::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181acd4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerBlockListManager::*)()>(&::GlobalNamespace::PlayerBlockListManager::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181acd450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager.OnSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerBlockListManager::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::GlobalNamespace::PlayerBlockListManager::OnSceneLoaded)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181acd4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"OnSceneLoaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerBlockListManager::*)(bool)>(&::GlobalNamespace::PlayerBlockListManager::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181acd3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager.RefreshBlockedList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::GlobalNamespace::PlayerBlockListManager::*)()>(&::GlobalNamespace::PlayerBlockListManager::RefreshBlockedList)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181acd550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"RefreshBlockedList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager.AddCounterBlockedUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerBlockListManager::*)(uint64_t)>(&::GlobalNamespace::PlayerBlockListManager::AddCounterBlockedUser)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181acd220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"AddCounterBlockedUser", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager.RemoveCounterBlockedUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerBlockListManager::*)(uint64_t)>(&::GlobalNamespace::PlayerBlockListManager::RemoveCounterBlockedUser)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181acd640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"RemoveCounterBlockedUser", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager.LogBlockList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerBlockListManager::*)()>(&::GlobalNamespace::PlayerBlockListManager::LogBlockList)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181acd2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"LogBlockList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager.RefreshFullBlockList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerBlockListManager::*)()>(&::GlobalNamespace::PlayerBlockListManager::RefreshFullBlockList)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181acd5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"RefreshFullBlockList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager.IsUserLocallyBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerBlockListManager::*)(uint64_t)>(&::GlobalNamespace::PlayerBlockListManager::IsUserLocallyBlocked)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181acd290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"IsUserLocallyBlocked", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager.IsUserBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerBlockListManager::*)(uint64_t)>(&::GlobalNamespace::PlayerBlockListManager::IsUserBlocked)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181acd260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"IsUserBlocked", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager.get_BlockedUsersList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<uint64_t>* (::GlobalNamespace::PlayerBlockListManager::*)()>(&::GlobalNamespace::PlayerBlockListManager::get_BlockedUsersList)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"get_BlockedUsersList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBlockListManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerBlockListManager::*)()>(&::GlobalNamespace::PlayerBlockListManager::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181acd680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<uint64_t>*& GlobalNamespace::PlayerBlockListManager::__cordl_internal_get_blockedUsersList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockedUsersList;
}
constexpr ::System::Collections::Generic::HashSet_1<uint64_t>* const& GlobalNamespace::PlayerBlockListManager::__cordl_internal_get_blockedUsersList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockedUsersList;
}
constexpr void GlobalNamespace::PlayerBlockListManager::__cordl_internal_set_blockedUsersList(::System::Collections::Generic::HashSet_1<uint64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockedUsersList = value;
}
constexpr ::System::Collections::Generic::HashSet_1<uint64_t>*& GlobalNamespace::PlayerBlockListManager::__cordl_internal_get_counterBlockedUsersList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___counterBlockedUsersList;
}
constexpr ::System::Collections::Generic::HashSet_1<uint64_t>* const& GlobalNamespace::PlayerBlockListManager::__cordl_internal_get_counterBlockedUsersList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___counterBlockedUsersList;
}
constexpr void GlobalNamespace::PlayerBlockListManager::__cordl_internal_set_counterBlockedUsersList(::System::Collections::Generic::HashSet_1<uint64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___counterBlockedUsersList = value;
}
constexpr ::System::Collections::Generic::HashSet_1<uint64_t>*& GlobalNamespace::PlayerBlockListManager::__cordl_internal_get_fullBlockedUsersList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullBlockedUsersList;
}
constexpr ::System::Collections::Generic::HashSet_1<uint64_t>* const& GlobalNamespace::PlayerBlockListManager::__cordl_internal_get_fullBlockedUsersList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullBlockedUsersList;
}
constexpr void GlobalNamespace::PlayerBlockListManager::__cordl_internal_set_fullBlockedUsersList(::System::Collections::Generic::HashSet_1<uint64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullBlockedUsersList = value;
}
inline void GlobalNamespace::PlayerBlockListManager::setStaticF_LocalBlockedUserListChanged(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "LocalBlockedUserListChanged", ::GlobalNamespace::PlayerBlockListManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::PlayerBlockListManager::getStaticF_LocalBlockedUserListChanged()  {
return ::cordl_internals::getStaticField<::System::Action*, "LocalBlockedUserListChanged", ::GlobalNamespace::PlayerBlockListManager*>();
}
inline void GlobalNamespace::PlayerBlockListManager::setStaticF_BlockedUserListChanged(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "BlockedUserListChanged", ::GlobalNamespace::PlayerBlockListManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::PlayerBlockListManager::getStaticF_BlockedUserListChanged()  {
return ::cordl_internals::getStaticField<::System::Action*, "BlockedUserListChanged", ::GlobalNamespace::PlayerBlockListManager*>();
}
inline void GlobalNamespace::PlayerBlockListManager::add_LocalBlockedUserListChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"add_LocalBlockedUserListChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::PlayerBlockListManager::remove_LocalBlockedUserListChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"remove_LocalBlockedUserListChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::PlayerBlockListManager::add_BlockedUserListChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"add_BlockedUserListChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::PlayerBlockListManager::remove_BlockedUserListChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"remove_BlockedUserListChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::PlayerBlockListManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerBlockListManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerBlockListManager::OnSceneLoaded(::UnityEngine::SceneManagement::Scene  arg0, ::UnityEngine::SceneManagement::LoadSceneMode  arg1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"OnSceneLoaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg0, arg1);
}
inline void GlobalNamespace::PlayerBlockListManager::OnApplicationFocus(bool  hasFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasFocus);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid GlobalNamespace::PlayerBlockListManager::RefreshBlockedList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"RefreshBlockedList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerBlockListManager::AddCounterBlockedUser(uint64_t  userId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"AddCounterBlockedUser", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::PlayerBlockListManager::RemoveCounterBlockedUser(uint64_t  userId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"RemoveCounterBlockedUser", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::PlayerBlockListManager::LogBlockList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"LogBlockList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerBlockListManager::RefreshFullBlockList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"RefreshFullBlockList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerBlockListManager::IsUserLocallyBlocked(uint64_t  userId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"IsUserLocallyBlocked", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userId);
}
inline bool GlobalNamespace::PlayerBlockListManager::IsUserBlocked(uint64_t  userId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"IsUserBlocked", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userId);
}
inline ::System::Collections::Generic::HashSet_1<uint64_t>* GlobalNamespace::PlayerBlockListManager::get_BlockedUsersList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {"get_BlockedUsersList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<uint64_t>*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerBlockListManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBlockListManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerBlockListManager* GlobalNamespace::PlayerBlockListManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerBlockListManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerBlockListManager::PlayerBlockListManager()   {
}
