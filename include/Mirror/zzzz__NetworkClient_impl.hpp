#pragma once
// IWYU pragma private; include "Mirror/NetworkClient.hpp"
#include "Mirror/zzzz__ConnectState_impl.hpp"
#include "Mirror/zzzz__ExponentialMovingAverage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__NetworkClient_def.hpp"
#include "Mirror/zzzz__ChangeOwnerMessage_def.hpp"
#include "Mirror/zzzz__EntityStateMessage_def.hpp"
#include "Mirror/zzzz__InterestManagementBase_def.hpp"
#include "Mirror/zzzz__NetworkClient_def.hpp"
#include "Mirror/zzzz__NetworkConnection_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "Mirror/zzzz__NetworkMessageDelegate_def.hpp"
#include "Mirror/zzzz__NetworkPongMessage_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__ObjectDestroyMessage_def.hpp"
#include "Mirror/zzzz__ObjectHideMessage_def.hpp"
#include "Mirror/zzzz__ObjectSpawnFinishedMessage_def.hpp"
#include "Mirror/zzzz__ObjectSpawnStartedMessage_def.hpp"
#include "Mirror/zzzz__RpcBufferMessage_def.hpp"
#include "Mirror/zzzz__RpcMessage_def.hpp"
#include "Mirror/zzzz__SnapshotInterpolationSettings_def.hpp"
#include "Mirror/zzzz__SpawnDelegate_def.hpp"
#include "Mirror/zzzz__SpawnHandlerDelegate_def.hpp"
#include "Mirror/zzzz__SpawnMessage_def.hpp"
#include "Mirror/zzzz__TimeSnapshotMessage_def.hpp"
#include "Mirror/zzzz__TimeSnapshot_def.hpp"
#include "Mirror/zzzz__TransportError_def.hpp"
#include "Mirror/zzzz__UnSpawnDelegate_def.hpp"
#include "Mirror/zzzz__Unbatcher_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__SortedList_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkClient___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkClient___c::*)()>(&::Mirror::NetworkClient___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient___c._RegisterMessageHandlers_b__52_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkClient___c::*)(::Mirror::NetworkPongMessage)>(&::Mirror::NetworkClient___c::_RegisterMessageHandlers_b__52_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c*>(),
                        {"<RegisterMessageHandlers>b__52_0", {}, {::i2c::type_of<::Mirror::NetworkPongMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient___c._RegisterMessageHandlers_b__52_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkClient___c::*)(::Mirror::ObjectSpawnStartedMessage)>(&::Mirror::NetworkClient___c::_RegisterMessageHandlers_b__52_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c*>(),
                        {"<RegisterMessageHandlers>b__52_1", {}, {::i2c::type_of<::Mirror::ObjectSpawnStartedMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient___c._RegisterMessageHandlers_b__52_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkClient___c::*)(::Mirror::ObjectSpawnFinishedMessage)>(&::Mirror::NetworkClient___c::_RegisterMessageHandlers_b__52_2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c*>(),
                        {"<RegisterMessageHandlers>b__52_2", {}, {::i2c::type_of<::Mirror::ObjectSpawnFinishedMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient___c._RegisterMessageHandlers_b__52_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkClient___c::*)(::Mirror::EntityStateMessage)>(&::Mirror::NetworkClient___c::_RegisterMessageHandlers_b__52_3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c*>(),
                        {"<RegisterMessageHandlers>b__52_3", {}, {::i2c::type_of<::Mirror::EntityStateMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient___c._OnObjectSpawnFinished_b__82_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Mirror::NetworkClient___c::*)(::Mirror::NetworkIdentity*)>(&::Mirror::NetworkClient___c::_OnObjectSpawnFinished_b__82_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805f9fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c*>(),
                        {"<OnObjectSpawnFinished>b__82_0", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::NetworkClient___c::setStaticF___9(::Mirror::NetworkClient___c*  value)  {
::cordl_internals::setStaticField<::Mirror::NetworkClient___c*, "<>9", ::Mirror::NetworkClient___c*>(std::forward<::Mirror::NetworkClient___c*>(value));
}
inline ::Mirror::NetworkClient___c* Mirror::NetworkClient___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Mirror::NetworkClient___c*, "<>9", ::Mirror::NetworkClient___c*>();
}
inline void Mirror::NetworkClient___c::setStaticF___9__52_0(::System::Action_1<::Mirror::NetworkPongMessage>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Mirror::NetworkPongMessage>*, "<>9__52_0", ::Mirror::NetworkClient___c*>(std::forward<::System::Action_1<::Mirror::NetworkPongMessage>*>(value));
}
inline ::System::Action_1<::Mirror::NetworkPongMessage>* Mirror::NetworkClient___c::getStaticF___9__52_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Mirror::NetworkPongMessage>*, "<>9__52_0", ::Mirror::NetworkClient___c*>();
}
inline void Mirror::NetworkClient___c::setStaticF___9__52_1(::System::Action_1<::Mirror::ObjectSpawnStartedMessage>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Mirror::ObjectSpawnStartedMessage>*, "<>9__52_1", ::Mirror::NetworkClient___c*>(std::forward<::System::Action_1<::Mirror::ObjectSpawnStartedMessage>*>(value));
}
inline ::System::Action_1<::Mirror::ObjectSpawnStartedMessage>* Mirror::NetworkClient___c::getStaticF___9__52_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Mirror::ObjectSpawnStartedMessage>*, "<>9__52_1", ::Mirror::NetworkClient___c*>();
}
inline void Mirror::NetworkClient___c::setStaticF___9__52_2(::System::Action_1<::Mirror::ObjectSpawnFinishedMessage>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Mirror::ObjectSpawnFinishedMessage>*, "<>9__52_2", ::Mirror::NetworkClient___c*>(std::forward<::System::Action_1<::Mirror::ObjectSpawnFinishedMessage>*>(value));
}
inline ::System::Action_1<::Mirror::ObjectSpawnFinishedMessage>* Mirror::NetworkClient___c::getStaticF___9__52_2()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Mirror::ObjectSpawnFinishedMessage>*, "<>9__52_2", ::Mirror::NetworkClient___c*>();
}
inline void Mirror::NetworkClient___c::setStaticF___9__52_3(::System::Action_1<::Mirror::EntityStateMessage>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Mirror::EntityStateMessage>*, "<>9__52_3", ::Mirror::NetworkClient___c*>(std::forward<::System::Action_1<::Mirror::EntityStateMessage>*>(value));
}
inline ::System::Action_1<::Mirror::EntityStateMessage>* Mirror::NetworkClient___c::getStaticF___9__52_3()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Mirror::EntityStateMessage>*, "<>9__52_3", ::Mirror::NetworkClient___c*>();
}
inline void Mirror::NetworkClient___c::setStaticF___9__82_0(::System::Func_2<::UnityW<::Mirror::NetworkIdentity>,uint32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::Mirror::NetworkIdentity>,uint32_t>*, "<>9__82_0", ::Mirror::NetworkClient___c*>(std::forward<::System::Func_2<::UnityW<::Mirror::NetworkIdentity>,uint32_t>*>(value));
}
inline ::System::Func_2<::UnityW<::Mirror::NetworkIdentity>,uint32_t>* Mirror::NetworkClient___c::getStaticF___9__82_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::Mirror::NetworkIdentity>,uint32_t>*, "<>9__82_0", ::Mirror::NetworkClient___c*>();
}
inline void Mirror::NetworkClient___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkClient___c::_RegisterMessageHandlers_b__52_0(::Mirror::NetworkPongMessage  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c*>(),
                        {"<RegisterMessageHandlers>b__52_0", {}, {::i2c::type_of<::Mirror::NetworkPongMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void Mirror::NetworkClient___c::_RegisterMessageHandlers_b__52_1(::Mirror::ObjectSpawnStartedMessage  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c*>(),
                        {"<RegisterMessageHandlers>b__52_1", {}, {::i2c::type_of<::Mirror::ObjectSpawnStartedMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void Mirror::NetworkClient___c::_RegisterMessageHandlers_b__52_2(::Mirror::ObjectSpawnFinishedMessage  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c*>(),
                        {"<RegisterMessageHandlers>b__52_2", {}, {::i2c::type_of<::Mirror::ObjectSpawnFinishedMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void Mirror::NetworkClient___c::_RegisterMessageHandlers_b__52_3(::Mirror::EntityStateMessage  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c*>(),
                        {"<RegisterMessageHandlers>b__52_3", {}, {::i2c::type_of<::Mirror::EntityStateMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline uint32_t Mirror::NetworkClient___c::_OnObjectSpawnFinished_b__82_0(::Mirror::NetworkIdentity*  uv)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c*>(),
                        {"<OnObjectSpawnFinished>b__82_0", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, uv);
}
inline ::Mirror::NetworkClient___c* Mirror::NetworkClient___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkClient___c*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkClient___c::NetworkClient___c()   {
}
template<typename T>
constexpr ::System::Action_1<T>*& Mirror::NetworkClient___c__DisplayClass53_0_1<T>::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
template<typename T>
constexpr ::System::Action_1<T>* const& Mirror::NetworkClient___c__DisplayClass53_0_1<T>::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
template<typename T>
constexpr void Mirror::NetworkClient___c__DisplayClass53_0_1<T>::__cordl_internal_set_handler(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
template<typename T>
inline void Mirror::NetworkClient___c__DisplayClass53_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c__DisplayClass53_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Mirror::NetworkClient___c__DisplayClass53_0_1<T>::_RegisterHandler_g__HandlerWrapped_0(::Mirror::NetworkConnection*  _, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c__DisplayClass53_0_1<T>*>(),
                        {"<RegisterHandler>g__HandlerWrapped|0", {}, {::i2c::type_of<::Mirror::NetworkConnection*>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, value);
}
template<typename T>
inline ::Mirror::NetworkClient___c__DisplayClass53_0_1<T>* Mirror::NetworkClient___c__DisplayClass53_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkClient___c__DisplayClass53_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Mirror::NetworkClient___c__DisplayClass53_0_1<T>::NetworkClient___c__DisplayClass53_0_1()   {
}
template<typename T>
constexpr ::System::Action_1<T>*& Mirror::NetworkClient___c__DisplayClass55_0_1<T>::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
template<typename T>
constexpr ::System::Action_1<T>* const& Mirror::NetworkClient___c__DisplayClass55_0_1<T>::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
template<typename T>
constexpr void Mirror::NetworkClient___c__DisplayClass55_0_1<T>::__cordl_internal_set_handler(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
template<typename T>
inline void Mirror::NetworkClient___c__DisplayClass55_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c__DisplayClass55_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Mirror::NetworkClient___c__DisplayClass55_0_1<T>::_ReplaceHandler_b__0(::Mirror::NetworkConnection*  _, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c__DisplayClass55_0_1<T>*>(),
                        {"<ReplaceHandler>b__0", {}, {::i2c::type_of<::Mirror::NetworkConnection*>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, value);
}
template<typename T>
inline ::Mirror::NetworkClient___c__DisplayClass55_0_1<T>* Mirror::NetworkClient___c__DisplayClass55_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkClient___c__DisplayClass55_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Mirror::NetworkClient___c__DisplayClass55_0_1<T>::NetworkClient___c__DisplayClass55_0_1()   {
}
//  Writing Method size for method: ::Mirror::NetworkClient___c__DisplayClass61_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkClient___c__DisplayClass61_0::*)()>(&::Mirror::NetworkClient___c__DisplayClass61_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c__DisplayClass61_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient___c__DisplayClass61_0._RegisterPrefab_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Mirror::NetworkClient___c__DisplayClass61_0::*)(::Mirror::SpawnMessage)>(&::Mirror::NetworkClient___c__DisplayClass61_0::_RegisterPrefab_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181552830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c__DisplayClass61_0*>(),
                        {"<RegisterPrefab>b__0", {}, {::i2c::type_of<::Mirror::SpawnMessage>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mirror::SpawnDelegate*& Mirror::NetworkClient___c__DisplayClass61_0::__cordl_internal_get_spawnHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnHandler;
}
constexpr ::Mirror::SpawnDelegate* const& Mirror::NetworkClient___c__DisplayClass61_0::__cordl_internal_get_spawnHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnHandler;
}
constexpr void Mirror::NetworkClient___c__DisplayClass61_0::__cordl_internal_set_spawnHandler(::Mirror::SpawnDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnHandler = value;
}
inline void Mirror::NetworkClient___c__DisplayClass61_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c__DisplayClass61_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Mirror::NetworkClient___c__DisplayClass61_0::_RegisterPrefab_b__0(::Mirror::SpawnMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c__DisplayClass61_0*>(),
                        {"<RegisterPrefab>b__0", {}, {::i2c::type_of<::Mirror::SpawnMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, msg);
}
inline ::Mirror::NetworkClient___c__DisplayClass61_0* Mirror::NetworkClient___c__DisplayClass61_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkClient___c__DisplayClass61_0*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkClient___c__DisplayClass61_0::NetworkClient___c__DisplayClass61_0()   {
}
//  Writing Method size for method: ::Mirror::NetworkClient___c__DisplayClass62_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkClient___c__DisplayClass62_0::*)()>(&::Mirror::NetworkClient___c__DisplayClass62_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c__DisplayClass62_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient___c__DisplayClass62_0._RegisterPrefab_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Mirror::NetworkClient___c__DisplayClass62_0::*)(::Mirror::SpawnMessage)>(&::Mirror::NetworkClient___c__DisplayClass62_0::_RegisterPrefab_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181552830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c__DisplayClass62_0*>(),
                        {"<RegisterPrefab>b__0", {}, {::i2c::type_of<::Mirror::SpawnMessage>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mirror::SpawnDelegate*& Mirror::NetworkClient___c__DisplayClass62_0::__cordl_internal_get_spawnHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnHandler;
}
constexpr ::Mirror::SpawnDelegate* const& Mirror::NetworkClient___c__DisplayClass62_0::__cordl_internal_get_spawnHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnHandler;
}
constexpr void Mirror::NetworkClient___c__DisplayClass62_0::__cordl_internal_set_spawnHandler(::Mirror::SpawnDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnHandler = value;
}
inline void Mirror::NetworkClient___c__DisplayClass62_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c__DisplayClass62_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Mirror::NetworkClient___c__DisplayClass62_0::_RegisterPrefab_b__0(::Mirror::SpawnMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c__DisplayClass62_0*>(),
                        {"<RegisterPrefab>b__0", {}, {::i2c::type_of<::Mirror::SpawnMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, msg);
}
inline ::Mirror::NetworkClient___c__DisplayClass62_0* Mirror::NetworkClient___c__DisplayClass62_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkClient___c__DisplayClass62_0*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkClient___c__DisplayClass62_0::NetworkClient___c__DisplayClass62_0()   {
}
//  Writing Method size for method: ::Mirror::NetworkClient___c__DisplayClass66_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkClient___c__DisplayClass66_0::*)()>(&::Mirror::NetworkClient___c__DisplayClass66_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c__DisplayClass66_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient___c__DisplayClass66_0._RegisterSpawnHandler_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Mirror::NetworkClient___c__DisplayClass66_0::*)(::Mirror::SpawnMessage)>(&::Mirror::NetworkClient___c__DisplayClass66_0::_RegisterSpawnHandler_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181552830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c__DisplayClass66_0*>(),
                        {"<RegisterSpawnHandler>b__0", {}, {::i2c::type_of<::Mirror::SpawnMessage>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mirror::SpawnDelegate*& Mirror::NetworkClient___c__DisplayClass66_0::__cordl_internal_get_spawnHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnHandler;
}
constexpr ::Mirror::SpawnDelegate* const& Mirror::NetworkClient___c__DisplayClass66_0::__cordl_internal_get_spawnHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnHandler;
}
constexpr void Mirror::NetworkClient___c__DisplayClass66_0::__cordl_internal_set_spawnHandler(::Mirror::SpawnDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnHandler = value;
}
inline void Mirror::NetworkClient___c__DisplayClass66_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c__DisplayClass66_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Mirror::NetworkClient___c__DisplayClass66_0::_RegisterSpawnHandler_b__0(::Mirror::SpawnMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient___c__DisplayClass66_0*>(),
                        {"<RegisterSpawnHandler>b__0", {}, {::i2c::type_of<::Mirror::SpawnMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, msg);
}
inline ::Mirror::NetworkClient___c__DisplayClass66_0* Mirror::NetworkClient___c__DisplayClass66_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkClient___c__DisplayClass66_0*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkClient___c__DisplayClass66_0::NetworkClient___c__DisplayClass66_0()   {
}
//  Writing Method size for method: ::Mirror::NetworkClient.get_sendRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Mirror::NetworkClient::get_sendRate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815416d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_sendRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.get_sendInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Mirror::NetworkClient::get_sendInterval)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181541660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_sendInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.get_connection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::NetworkConnection* (*)()>(&::Mirror::NetworkClient::get_connection)> {
  constexpr static std::size_t size = 0xbf0;
  constexpr static std::size_t addrs = 0x1803bcdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_connection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.set_connection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkConnection*)>(&::Mirror::NetworkClient::set_connection)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181541760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"set_connection", {}, {::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.get_localPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Mirror::NetworkIdentity> (*)()>(&::Mirror::NetworkClient::get_localPlayer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181534070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_localPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.set_localPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity*)>(&::Mirror::NetworkClient::set_localPlayer)> {
  constexpr static std::size_t size = 0x17d0;
  constexpr static std::size_t addrs = 0x1815340b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"set_localPlayer", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.get_active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Mirror::NetworkClient::get_active)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815413a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.get_activeHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Mirror::NetworkClient::get_activeHost)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181541320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_activeHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.get_isConnecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Mirror::NetworkClient::get_isConnecting)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181541620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_isConnecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.get_isConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Mirror::NetworkClient::get_isConnected)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815415e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_isConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.get_isHostClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Mirror::NetworkClient::get_isHostClient)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181541320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_isHostClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.AddTransportHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkClient::AddTransportHandlers)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x181539d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"AddTransportHandlers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.RemoveTransportHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkClient::RemoveTransportHandlers)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1815401e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RemoveTransportHandlers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Mirror::NetworkClient::Initialize)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18153baf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"Initialize", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Mirror::NetworkClient::Connect)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18153ada0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Uri*)>(&::Mirror::NetworkClient::Connect)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18153acc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"Connect", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.ConnectHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkClient::ConnectHost)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18153ab80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"ConnectHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.ConnectLocalServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkClient::ConnectLocalServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18153acb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"ConnectLocalServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkClient::Disconnect)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18153b330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"Disconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnTransportConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkClient::OnTransportConnected)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18153db00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnTransportConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.UnpackAndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mirror::NetworkReader*, int32_t)>(&::Mirror::NetworkClient::UnpackAndInvoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181540bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"UnpackAndInvoke", {}, {::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnTransportData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::NetworkClient::OnTransportData)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x18153dc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnTransportData", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnTransportDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkClient::OnTransportDisconnected)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18153e0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnTransportDisconnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnTransportError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::TransportError, ::StringW)>(&::Mirror::NetworkClient::OnTransportError)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18153e1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnTransportError", {}, {::i2c::type_of<::Mirror::TransportError>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.RegisterMessageHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Mirror::NetworkClient::RegisterMessageHandlers)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x18153e620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterMessageHandlers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.GetPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::by_ref<::UnityEngine::GameObject*>)>(&::Mirror::NetworkClient::GetPrefab)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18153b7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"GetPrefab", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.RegisterPrefabIdentity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity*)>(&::Mirror::NetworkClient::RegisterPrefabIdentity)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x18153eae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterPrefabIdentity", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.RegisterPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, uint32_t)>(&::Mirror::NetworkClient::RegisterPrefab)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x18153f080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.RegisterPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::Mirror::NetworkClient::RegisterPrefab)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x18153ed70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.RegisterPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, uint32_t, ::Mirror::SpawnDelegate*, ::Mirror::UnSpawnDelegate*)>(&::Mirror::NetworkClient::RegisterPrefab)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18153f620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Mirror::SpawnDelegate*>(), ::i2c::type_of<::Mirror::UnSpawnDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.RegisterPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::Mirror::SpawnDelegate*, ::Mirror::UnSpawnDelegate*)>(&::Mirror::NetworkClient::RegisterPrefab)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18153f470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Mirror::SpawnDelegate*>(), ::i2c::type_of<::Mirror::UnSpawnDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.RegisterPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, uint32_t, ::Mirror::SpawnHandlerDelegate*, ::Mirror::UnSpawnDelegate*)>(&::Mirror::NetworkClient::RegisterPrefab)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x18153f700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Mirror::SpawnHandlerDelegate*>(), ::i2c::type_of<::Mirror::UnSpawnDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.RegisterPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::Mirror::SpawnHandlerDelegate*, ::Mirror::UnSpawnDelegate*)>(&::Mirror::NetworkClient::RegisterPrefab)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x18153fb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Mirror::SpawnHandlerDelegate*>(), ::i2c::type_of<::Mirror::UnSpawnDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.UnregisterPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::Mirror::NetworkClient::UnregisterPrefab)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181540d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"UnregisterPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.RegisterSpawnHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::Mirror::SpawnDelegate*, ::Mirror::UnSpawnDelegate*)>(&::Mirror::NetworkClient::RegisterSpawnHandler)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181540120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterSpawnHandler", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::Mirror::SpawnDelegate*>(), ::i2c::type_of<::Mirror::UnSpawnDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.RegisterSpawnHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::Mirror::SpawnHandlerDelegate*, ::Mirror::UnSpawnDelegate*)>(&::Mirror::NetworkClient::RegisterSpawnHandler)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18153feb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterSpawnHandler", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::Mirror::SpawnHandlerDelegate*>(), ::i2c::type_of<::Mirror::UnSpawnDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.UnregisterSpawnHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t)>(&::Mirror::NetworkClient::UnregisterSpawnHandler)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181540ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"UnregisterSpawnHandler", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.ClearSpawners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkClient::ClearSpawners)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18153ab00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"ClearSpawners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.InvokeUnSpawnHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::UnityEngine::GameObject*)>(&::Mirror::NetworkClient::InvokeUnSpawnHandler)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18153be70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"InvokeUnSpawnHandler", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.Ready
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Mirror::NetworkClient::Ready)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18153e510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"Ready", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.InternalAddPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity*)>(&::Mirror::NetworkClient::InternalAddPlayer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18153bd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"InternalAddPlayer", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.AddPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Mirror::NetworkClient::AddPlayer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181539c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"AddPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.ApplySpawnPayload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity*, ::Mirror::SpawnMessage)>(&::Mirror::NetworkClient::ApplySpawnPayload)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x18153a080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"ApplySpawnPayload", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::Mirror::SpawnMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.FindOrSpawnObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mirror::SpawnMessage, ::by_ref<::Mirror::NetworkIdentity*>)>(&::Mirror::NetworkClient::FindOrSpawnObject)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x18153b3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"FindOrSpawnObject", {}, {::i2c::type_of<::Mirror::SpawnMessage>(), ::i2c::type_of<::by_ref<::Mirror::NetworkIdentity*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.GetExistingObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Mirror::NetworkIdentity> (*)(uint32_t)>(&::Mirror::NetworkClient::GetExistingObject)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18153b770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"GetExistingObject", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.SpawnPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Mirror::NetworkIdentity> (*)(::Mirror::SpawnMessage)>(&::Mirror::NetworkClient::SpawnPrefab)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181540850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"SpawnPrefab", {}, {::i2c::type_of<::Mirror::SpawnMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.SpawnSceneObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Mirror::NetworkIdentity> (*)(uint64_t)>(&::Mirror::NetworkClient::SpawnSceneObject)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181540ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"SpawnSceneObject", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.GetAndRemoveSceneObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Mirror::NetworkIdentity> (*)(uint64_t)>(&::Mirror::NetworkClient::GetAndRemoveSceneObject)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18153b6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"GetAndRemoveSceneObject", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.PrepareToSpawnSceneObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkClient::PrepareToSpawnSceneObjects)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18153e260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"PrepareToSpawnSceneObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnObjectSpawnStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::ObjectSpawnStartedMessage)>(&::Mirror::NetworkClient::OnObjectSpawnStarted)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18153d440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnObjectSpawnStarted", {}, {::i2c::type_of<::Mirror::ObjectSpawnStartedMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnObjectSpawnFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::ObjectSpawnFinishedMessage)>(&::Mirror::NetworkClient::OnObjectSpawnFinished)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x18153d1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnObjectSpawnFinished", {}, {::i2c::type_of<::Mirror::ObjectSpawnFinishedMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnHostClientObjectDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::ObjectDestroyMessage)>(&::Mirror::NetworkClient::OnHostClientObjectDestroy)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18153cd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnHostClientObjectDestroy", {}, {::i2c::type_of<::Mirror::ObjectDestroyMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnHostClientObjectHide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::ObjectHideMessage)>(&::Mirror::NetworkClient::OnHostClientObjectHide)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18153ce30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnHostClientObjectHide", {}, {::i2c::type_of<::Mirror::ObjectHideMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnHostClientSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::SpawnMessage)>(&::Mirror::NetworkClient::OnHostClientSpawn)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x18153cf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnHostClientSpawn", {}, {::i2c::type_of<::Mirror::SpawnMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnEntityStateMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::EntityStateMessage)>(&::Mirror::NetworkClient::OnEntityStateMessage)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18153c5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnEntityStateMessage", {}, {::i2c::type_of<::Mirror::EntityStateMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnRPCMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::RpcMessage)>(&::Mirror::NetworkClient::OnRPCMessage)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18153d660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnRPCMessage", {}, {::i2c::type_of<::Mirror::RpcMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnRPCBufferMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::RpcBufferMessage)>(&::Mirror::NetworkClient::OnRPCBufferMessage)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18153d480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnRPCBufferMessage", {}, {::i2c::type_of<::Mirror::RpcBufferMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnObjectHide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::ObjectHideMessage)>(&::Mirror::NetworkClient::OnObjectHide)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18153d190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnObjectHide", {}, {::i2c::type_of<::Mirror::ObjectHideMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnObjectDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::ObjectDestroyMessage)>(&::Mirror::NetworkClient::OnObjectDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18153d190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnObjectDestroy", {}, {::i2c::type_of<::Mirror::ObjectDestroyMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::SpawnMessage)>(&::Mirror::NetworkClient::OnSpawn)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18153d810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::Mirror::SpawnMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnChangeOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::ChangeOwnerMessage)>(&::Mirror::NetworkClient::OnChangeOwner)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x18153c2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnChangeOwner", {}, {::i2c::type_of<::Mirror::ChangeOwnerMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.ChangeOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity*, ::Mirror::ChangeOwnerMessage)>(&::Mirror::NetworkClient::ChangeOwner)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18153a8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"ChangeOwner", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::Mirror::ChangeOwnerMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.InitializeIdentityFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity*)>(&::Mirror::NetworkClient::InitializeIdentityFlags)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18153ba50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"InitializeIdentityFlags", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.InvokeIdentityCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity*)>(&::Mirror::NetworkClient::InvokeIdentityCallbacks)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18153bdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"InvokeIdentityCallbacks", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.BootstrapIdentity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity*)>(&::Mirror::NetworkClient::BootstrapIdentity)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18153a500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"BootstrapIdentity", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.BroadcastTimeSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkClient::BroadcastTimeSnapshot)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18153a5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"BroadcastTimeSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.Broadcast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkClient::Broadcast)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18153a610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"Broadcast", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.NetworkEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkClient::NetworkEarlyUpdate)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18153bf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"NetworkEarlyUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.NetworkLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkClient::NetworkLateUpdate)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x18153c040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"NetworkLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.DestroyAllClientObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkClient::DestroyAllClientObjects)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x18153ae80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"DestroyAllClientObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.DestroyObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t)>(&::Mirror::NetworkClient::DestroyObject)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18153b140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"DestroyObject", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkClient::Shutdown)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x1815404f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkClient::OnGUI)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x18153c710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.get_bufferTimeMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::Mirror::NetworkClient::get_bufferTimeMultiplier)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815413e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_bufferTimeMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.get_catchupNegativeThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Mirror::NetworkClient::get_catchupNegativeThreshold)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815414a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_catchupNegativeThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.get_catchupPositiveThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Mirror::NetworkClient::get_catchupPositiveThreshold)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815414f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_catchupPositiveThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.get_catchupSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::Mirror::NetworkClient::get_catchupSpeed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181541540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_catchupSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.get_slowdownSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::Mirror::NetworkClient::get_slowdownSpeed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181541710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_slowdownSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.get_driftEmaDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Mirror::NetworkClient::get_driftEmaDuration)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181541590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_driftEmaDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.get_bufferTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::Mirror::NetworkClient::get_bufferTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181541430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_bufferTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.InitTimeInterpolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkClient::InitTimeInterpolation)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18153b880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"InitTimeInterpolation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnTimeSnapshotMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::TimeSnapshotMessage)>(&::Mirror::NetworkClient::OnTimeSnapshotMessage)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18153d8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnTimeSnapshotMessage", {}, {::i2c::type_of<::Mirror::TimeSnapshotMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.OnTimeSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::TimeSnapshot)>(&::Mirror::NetworkClient::OnTimeSnapshot)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18153d940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnTimeSnapshot", {}, {::i2c::type_of<::Mirror::TimeSnapshot>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkClient.UpdateTimeInterpolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkClient::UpdateTimeInterpolation)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181540f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"UpdateTimeInterpolation", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::NetworkClient::setStaticF_lastSendTime(double_t  value)  {
::cordl_internals::setStaticField<double_t, "lastSendTime", ::Mirror::NetworkClient*>(std::forward<double_t>(value));
}
inline double_t Mirror::NetworkClient::getStaticF_lastSendTime()  {
return ::cordl_internals::getStaticField<double_t, "lastSendTime", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_handlers(::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::NetworkMessageDelegate*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::NetworkMessageDelegate*>*, "handlers", ::Mirror::NetworkClient*>(std::forward<::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::NetworkMessageDelegate*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::NetworkMessageDelegate*>* Mirror::NetworkClient::getStaticF_handlers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::NetworkMessageDelegate*>*, "handlers", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_spawned(::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::Mirror::NetworkIdentity>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::Mirror::NetworkIdentity>>*, "spawned", ::Mirror::NetworkClient*>(std::forward<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::Mirror::NetworkIdentity>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::Mirror::NetworkIdentity>>* Mirror::NetworkClient::getStaticF_spawned()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::Mirror::NetworkIdentity>>*, "spawned", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF__connection_k__BackingField(::Mirror::NetworkConnection*  value)  {
::cordl_internals::setStaticField<::Mirror::NetworkConnection*, "<connection>k__BackingField", ::Mirror::NetworkClient*>(std::forward<::Mirror::NetworkConnection*>(value));
}
inline ::Mirror::NetworkConnection* Mirror::NetworkClient::getStaticF__connection_k__BackingField()  {
return ::cordl_internals::getStaticField<::Mirror::NetworkConnection*, "<connection>k__BackingField", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_ready(bool  value)  {
::cordl_internals::setStaticField<bool, "ready", ::Mirror::NetworkClient*>(std::forward<bool>(value));
}
inline bool Mirror::NetworkClient::getStaticF_ready()  {
return ::cordl_internals::getStaticField<bool, "ready", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF__localPlayer_k__BackingField(::UnityW<::Mirror::NetworkIdentity>  value)  {
::cordl_internals::setStaticField<::UnityW<::Mirror::NetworkIdentity>, "<localPlayer>k__BackingField", ::Mirror::NetworkClient*>(std::forward<::UnityW<::Mirror::NetworkIdentity>>(value));
}
inline ::UnityW<::Mirror::NetworkIdentity> Mirror::NetworkClient::getStaticF__localPlayer_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::Mirror::NetworkIdentity>, "<localPlayer>k__BackingField", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_connectState(::Mirror::ConnectState  value)  {
::cordl_internals::setStaticField<::Mirror::ConnectState, "connectState", ::Mirror::NetworkClient*>(std::forward<::Mirror::ConnectState>(value));
}
inline ::Mirror::ConnectState Mirror::NetworkClient::getStaticF_connectState()  {
return ::cordl_internals::getStaticField<::Mirror::ConnectState, "connectState", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_OnConnectedEvent(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnConnectedEvent", ::Mirror::NetworkClient*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Mirror::NetworkClient::getStaticF_OnConnectedEvent()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnConnectedEvent", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_OnDisconnectedEvent(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnDisconnectedEvent", ::Mirror::NetworkClient*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Mirror::NetworkClient::getStaticF_OnDisconnectedEvent()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnDisconnectedEvent", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_OnErrorEvent(::System::Action_2<::Mirror::TransportError,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::Mirror::TransportError,::StringW>*, "OnErrorEvent", ::Mirror::NetworkClient*>(std::forward<::System::Action_2<::Mirror::TransportError,::StringW>*>(value));
}
inline ::System::Action_2<::Mirror::TransportError,::StringW>* Mirror::NetworkClient::getStaticF_OnErrorEvent()  {
return ::cordl_internals::getStaticField<::System::Action_2<::Mirror::TransportError,::StringW>*, "OnErrorEvent", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_prefabs(::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::UnityEngine::GameObject>>*, "prefabs", ::Mirror::NetworkClient*>(std::forward<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::UnityEngine::GameObject>>* Mirror::NetworkClient::getStaticF_prefabs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::UnityEngine::GameObject>>*, "prefabs", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_spawnHandlers(::System::Collections::Generic::Dictionary_2<uint32_t,::Mirror::SpawnHandlerDelegate*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint32_t,::Mirror::SpawnHandlerDelegate*>*, "spawnHandlers", ::Mirror::NetworkClient*>(std::forward<::System::Collections::Generic::Dictionary_2<uint32_t,::Mirror::SpawnHandlerDelegate*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t,::Mirror::SpawnHandlerDelegate*>* Mirror::NetworkClient::getStaticF_spawnHandlers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint32_t,::Mirror::SpawnHandlerDelegate*>*, "spawnHandlers", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_unspawnHandlers(::System::Collections::Generic::Dictionary_2<uint32_t,::Mirror::UnSpawnDelegate*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint32_t,::Mirror::UnSpawnDelegate*>*, "unspawnHandlers", ::Mirror::NetworkClient*>(std::forward<::System::Collections::Generic::Dictionary_2<uint32_t,::Mirror::UnSpawnDelegate*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t,::Mirror::UnSpawnDelegate*>* Mirror::NetworkClient::getStaticF_unspawnHandlers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint32_t,::Mirror::UnSpawnDelegate*>*, "unspawnHandlers", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_isSpawnFinished(bool  value)  {
::cordl_internals::setStaticField<bool, "isSpawnFinished", ::Mirror::NetworkClient*>(std::forward<bool>(value));
}
inline bool Mirror::NetworkClient::getStaticF_isSpawnFinished()  {
return ::cordl_internals::getStaticField<bool, "isSpawnFinished", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_spawnableObjects(::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Mirror::NetworkIdentity>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Mirror::NetworkIdentity>>*, "spawnableObjects", ::Mirror::NetworkClient*>(std::forward<::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Mirror::NetworkIdentity>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Mirror::NetworkIdentity>>* Mirror::NetworkClient::getStaticF_spawnableObjects()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Mirror::NetworkIdentity>>*, "spawnableObjects", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_unbatcher(::Mirror::Unbatcher*  value)  {
::cordl_internals::setStaticField<::Mirror::Unbatcher*, "unbatcher", ::Mirror::NetworkClient*>(std::forward<::Mirror::Unbatcher*>(value));
}
inline ::Mirror::Unbatcher* Mirror::NetworkClient::getStaticF_unbatcher()  {
return ::cordl_internals::getStaticField<::Mirror::Unbatcher*, "unbatcher", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_aoi(::UnityW<::Mirror::InterestManagementBase>  value)  {
::cordl_internals::setStaticField<::UnityW<::Mirror::InterestManagementBase>, "aoi", ::Mirror::NetworkClient*>(std::forward<::UnityW<::Mirror::InterestManagementBase>>(value));
}
inline ::UnityW<::Mirror::InterestManagementBase> Mirror::NetworkClient::getStaticF_aoi()  {
return ::cordl_internals::getStaticField<::UnityW<::Mirror::InterestManagementBase>, "aoi", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_isLoadingScene(bool  value)  {
::cordl_internals::setStaticField<bool, "isLoadingScene", ::Mirror::NetworkClient*>(std::forward<bool>(value));
}
inline bool Mirror::NetworkClient::getStaticF_isLoadingScene()  {
return ::cordl_internals::getStaticField<bool, "isLoadingScene", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_snapshotSettings(::Mirror::SnapshotInterpolationSettings*  value)  {
::cordl_internals::setStaticField<::Mirror::SnapshotInterpolationSettings*, "snapshotSettings", ::Mirror::NetworkClient*>(std::forward<::Mirror::SnapshotInterpolationSettings*>(value));
}
inline ::Mirror::SnapshotInterpolationSettings* Mirror::NetworkClient::getStaticF_snapshotSettings()  {
return ::cordl_internals::getStaticField<::Mirror::SnapshotInterpolationSettings*, "snapshotSettings", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_snapshots(::System::Collections::Generic::SortedList_2<double_t,::Mirror::TimeSnapshot>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::SortedList_2<double_t,::Mirror::TimeSnapshot>*, "snapshots", ::Mirror::NetworkClient*>(std::forward<::System::Collections::Generic::SortedList_2<double_t,::Mirror::TimeSnapshot>*>(value));
}
inline ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TimeSnapshot>* Mirror::NetworkClient::getStaticF_snapshots()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::SortedList_2<double_t,::Mirror::TimeSnapshot>*, "snapshots", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_localTimeline(double_t  value)  {
::cordl_internals::setStaticField<double_t, "localTimeline", ::Mirror::NetworkClient*>(std::forward<double_t>(value));
}
inline double_t Mirror::NetworkClient::getStaticF_localTimeline()  {
return ::cordl_internals::getStaticField<double_t, "localTimeline", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_localTimescale(double_t  value)  {
::cordl_internals::setStaticField<double_t, "localTimescale", ::Mirror::NetworkClient*>(std::forward<double_t>(value));
}
inline double_t Mirror::NetworkClient::getStaticF_localTimescale()  {
return ::cordl_internals::getStaticField<double_t, "localTimescale", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_driftEma(::Mirror::ExponentialMovingAverage  value)  {
::cordl_internals::setStaticField<::Mirror::ExponentialMovingAverage, "driftEma", ::Mirror::NetworkClient*>(std::forward<::Mirror::ExponentialMovingAverage>(value));
}
inline ::Mirror::ExponentialMovingAverage Mirror::NetworkClient::getStaticF_driftEma()  {
return ::cordl_internals::getStaticField<::Mirror::ExponentialMovingAverage, "driftEma", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_dynamicAdjustment(bool  value)  {
::cordl_internals::setStaticField<bool, "dynamicAdjustment", ::Mirror::NetworkClient*>(std::forward<bool>(value));
}
inline bool Mirror::NetworkClient::getStaticF_dynamicAdjustment()  {
return ::cordl_internals::getStaticField<bool, "dynamicAdjustment", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_dynamicAdjustmentTolerance(float_t  value)  {
::cordl_internals::setStaticField<float_t, "dynamicAdjustmentTolerance", ::Mirror::NetworkClient*>(std::forward<float_t>(value));
}
inline float_t Mirror::NetworkClient::getStaticF_dynamicAdjustmentTolerance()  {
return ::cordl_internals::getStaticField<float_t, "dynamicAdjustmentTolerance", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_deliveryTimeEmaDuration(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "deliveryTimeEmaDuration", ::Mirror::NetworkClient*>(std::forward<int32_t>(value));
}
inline int32_t Mirror::NetworkClient::getStaticF_deliveryTimeEmaDuration()  {
return ::cordl_internals::getStaticField<int32_t, "deliveryTimeEmaDuration", ::Mirror::NetworkClient*>();
}
inline void Mirror::NetworkClient::setStaticF_deliveryTimeEma(::Mirror::ExponentialMovingAverage  value)  {
::cordl_internals::setStaticField<::Mirror::ExponentialMovingAverage, "deliveryTimeEma", ::Mirror::NetworkClient*>(std::forward<::Mirror::ExponentialMovingAverage>(value));
}
inline ::Mirror::ExponentialMovingAverage Mirror::NetworkClient::getStaticF_deliveryTimeEma()  {
return ::cordl_internals::getStaticField<::Mirror::ExponentialMovingAverage, "deliveryTimeEma", ::Mirror::NetworkClient*>();
}
inline int32_t Mirror::NetworkClient::get_sendRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_sendRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline float_t Mirror::NetworkClient::get_sendInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_sendInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline ::Mirror::NetworkConnection* Mirror::NetworkClient::get_connection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_connection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::NetworkConnection*>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::set_connection(::Mirror::NetworkConnection*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"set_connection", {}, {::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::Mirror::NetworkIdentity> Mirror::NetworkClient::get_localPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_localPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Mirror::NetworkIdentity>>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::set_localPlayer(::Mirror::NetworkIdentity*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"set_localPlayer", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Mirror::NetworkClient::get_active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Mirror::NetworkClient::get_activeHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_activeHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Mirror::NetworkClient::get_isConnecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_isConnecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Mirror::NetworkClient::get_isConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_isConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Mirror::NetworkClient::get_isHostClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_isHostClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::AddTransportHandlers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"AddTransportHandlers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::RemoveTransportHandlers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RemoveTransportHandlers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::Initialize(bool  hostMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"Initialize", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hostMode);
}
inline void Mirror::NetworkClient::Connect(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, address);
}
inline void Mirror::NetworkClient::Connect(::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"Connect", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, uri);
}
inline void Mirror::NetworkClient::ConnectHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"ConnectHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::ConnectLocalServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"ConnectLocalServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"Disconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::OnTransportConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnTransportConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Mirror::NetworkClient::UnpackAndInvoke(::Mirror::NetworkReader*  reader, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"UnpackAndInvoke", {}, {::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, reader, channelId);
}
inline void Mirror::NetworkClient::OnTransportData(::System::ArraySegment_1<uint8_t>  data, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnTransportData", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, channelId);
}
inline void Mirror::NetworkClient::OnTransportDisconnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnTransportDisconnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::OnTransportError(::Mirror::TransportError  error, ::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnTransportError", {}, {::i2c::type_of<::Mirror::TransportError>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error, reason);
}
template<typename T>
inline void Mirror::NetworkClient::Send(T  message, int32_t  channelId)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkClient*>(),
                    {"Send", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, channelId);
}
inline void Mirror::NetworkClient::RegisterMessageHandlers(bool  hostMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterMessageHandlers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hostMode);
}
template<typename T>
inline void Mirror::NetworkClient::RegisterHandler(::System::Action_1<T>*  handler, bool  requireAuthentication)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkClient*>(),
                    {"RegisterHandler", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, requireAuthentication);
}
template<typename T>
inline void Mirror::NetworkClient::ReplaceHandler(::System::Action_2<::Mirror::NetworkConnection*,T>*  handler, bool  requireAuthentication)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkClient*>(),
                    {"ReplaceHandler", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_2<::Mirror::NetworkConnection*,T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, requireAuthentication);
}
template<typename T>
inline void Mirror::NetworkClient::ReplaceHandler(::System::Action_1<T>*  handler, bool  requireAuthentication)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkClient*>(),
                    {"ReplaceHandler", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, requireAuthentication);
}
template<typename T>
inline bool Mirror::NetworkClient::UnregisterHandler()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkClient*>(),
                    {"UnregisterHandler", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Mirror::NetworkClient::GetPrefab(uint32_t  assetId, ::by_ref<::UnityEngine::GameObject*>  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"GetPrefab", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, assetId, prefab);
}
inline void Mirror::NetworkClient::RegisterPrefabIdentity(::Mirror::NetworkIdentity*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterPrefabIdentity", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefab);
}
inline void Mirror::NetworkClient::RegisterPrefab(::UnityEngine::GameObject*  prefab, uint32_t  newAssetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefab, newAssetId);
}
inline void Mirror::NetworkClient::RegisterPrefab(::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefab);
}
inline void Mirror::NetworkClient::RegisterPrefab(::UnityEngine::GameObject*  prefab, uint32_t  newAssetId, ::Mirror::SpawnDelegate*  spawnHandler, ::Mirror::UnSpawnDelegate*  unspawnHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Mirror::SpawnDelegate*>(), ::i2c::type_of<::Mirror::UnSpawnDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefab, newAssetId, spawnHandler, unspawnHandler);
}
inline void Mirror::NetworkClient::RegisterPrefab(::UnityEngine::GameObject*  prefab, ::Mirror::SpawnDelegate*  spawnHandler, ::Mirror::UnSpawnDelegate*  unspawnHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Mirror::SpawnDelegate*>(), ::i2c::type_of<::Mirror::UnSpawnDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefab, spawnHandler, unspawnHandler);
}
inline void Mirror::NetworkClient::RegisterPrefab(::UnityEngine::GameObject*  prefab, uint32_t  newAssetId, ::Mirror::SpawnHandlerDelegate*  spawnHandler, ::Mirror::UnSpawnDelegate*  unspawnHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Mirror::SpawnHandlerDelegate*>(), ::i2c::type_of<::Mirror::UnSpawnDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefab, newAssetId, spawnHandler, unspawnHandler);
}
inline void Mirror::NetworkClient::RegisterPrefab(::UnityEngine::GameObject*  prefab, ::Mirror::SpawnHandlerDelegate*  spawnHandler, ::Mirror::UnSpawnDelegate*  unspawnHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Mirror::SpawnHandlerDelegate*>(), ::i2c::type_of<::Mirror::UnSpawnDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefab, spawnHandler, unspawnHandler);
}
inline void Mirror::NetworkClient::UnregisterPrefab(::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"UnregisterPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefab);
}
inline void Mirror::NetworkClient::RegisterSpawnHandler(uint32_t  assetId, ::Mirror::SpawnDelegate*  spawnHandler, ::Mirror::UnSpawnDelegate*  unspawnHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterSpawnHandler", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::Mirror::SpawnDelegate*>(), ::i2c::type_of<::Mirror::UnSpawnDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, assetId, spawnHandler, unspawnHandler);
}
inline void Mirror::NetworkClient::RegisterSpawnHandler(uint32_t  assetId, ::Mirror::SpawnHandlerDelegate*  spawnHandler, ::Mirror::UnSpawnDelegate*  unspawnHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"RegisterSpawnHandler", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::Mirror::SpawnHandlerDelegate*>(), ::i2c::type_of<::Mirror::UnSpawnDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, assetId, spawnHandler, unspawnHandler);
}
inline void Mirror::NetworkClient::UnregisterSpawnHandler(uint32_t  assetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"UnregisterSpawnHandler", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, assetId);
}
inline void Mirror::NetworkClient::ClearSpawners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"ClearSpawners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Mirror::NetworkClient::InvokeUnSpawnHandler(uint32_t  assetId, ::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"InvokeUnSpawnHandler", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, assetId, obj);
}
inline bool Mirror::NetworkClient::Ready()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"Ready", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::InternalAddPlayer(::Mirror::NetworkIdentity*  identity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"InternalAddPlayer", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity);
}
inline bool Mirror::NetworkClient::AddPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"AddPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::ApplySpawnPayload(::Mirror::NetworkIdentity*  identity, ::Mirror::SpawnMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"ApplySpawnPayload", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::Mirror::SpawnMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity, message);
}
inline bool Mirror::NetworkClient::FindOrSpawnObject(::Mirror::SpawnMessage  message, ::by_ref<::Mirror::NetworkIdentity*>  identity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"FindOrSpawnObject", {}, {::i2c::type_of<::Mirror::SpawnMessage>(), ::i2c::type_of<::by_ref<::Mirror::NetworkIdentity*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, message, identity);
}
inline ::UnityW<::Mirror::NetworkIdentity> Mirror::NetworkClient::GetExistingObject(uint32_t  netid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"GetExistingObject", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Mirror::NetworkIdentity>>(nullptr, ___internal_method, netid);
}
inline ::UnityW<::Mirror::NetworkIdentity> Mirror::NetworkClient::SpawnPrefab(::Mirror::SpawnMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"SpawnPrefab", {}, {::i2c::type_of<::Mirror::SpawnMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Mirror::NetworkIdentity>>(nullptr, ___internal_method, message);
}
inline ::UnityW<::Mirror::NetworkIdentity> Mirror::NetworkClient::SpawnSceneObject(uint64_t  sceneId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"SpawnSceneObject", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Mirror::NetworkIdentity>>(nullptr, ___internal_method, sceneId);
}
inline ::UnityW<::Mirror::NetworkIdentity> Mirror::NetworkClient::GetAndRemoveSceneObject(uint64_t  sceneId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"GetAndRemoveSceneObject", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Mirror::NetworkIdentity>>(nullptr, ___internal_method, sceneId);
}
inline void Mirror::NetworkClient::PrepareToSpawnSceneObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"PrepareToSpawnSceneObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::OnObjectSpawnStarted(::Mirror::ObjectSpawnStartedMessage  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnObjectSpawnStarted", {}, {::i2c::type_of<::Mirror::ObjectSpawnStartedMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _);
}
inline void Mirror::NetworkClient::OnObjectSpawnFinished(::Mirror::ObjectSpawnFinishedMessage  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnObjectSpawnFinished", {}, {::i2c::type_of<::Mirror::ObjectSpawnFinishedMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _);
}
inline void Mirror::NetworkClient::OnHostClientObjectDestroy(::Mirror::ObjectDestroyMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnHostClientObjectDestroy", {}, {::i2c::type_of<::Mirror::ObjectDestroyMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Mirror::NetworkClient::OnHostClientObjectHide(::Mirror::ObjectHideMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnHostClientObjectHide", {}, {::i2c::type_of<::Mirror::ObjectHideMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Mirror::NetworkClient::OnHostClientSpawn(::Mirror::SpawnMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnHostClientSpawn", {}, {::i2c::type_of<::Mirror::SpawnMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Mirror::NetworkClient::OnEntityStateMessage(::Mirror::EntityStateMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnEntityStateMessage", {}, {::i2c::type_of<::Mirror::EntityStateMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Mirror::NetworkClient::OnRPCMessage(::Mirror::RpcMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnRPCMessage", {}, {::i2c::type_of<::Mirror::RpcMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Mirror::NetworkClient::OnRPCBufferMessage(::Mirror::RpcBufferMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnRPCBufferMessage", {}, {::i2c::type_of<::Mirror::RpcBufferMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Mirror::NetworkClient::OnObjectHide(::Mirror::ObjectHideMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnObjectHide", {}, {::i2c::type_of<::Mirror::ObjectHideMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Mirror::NetworkClient::OnObjectDestroy(::Mirror::ObjectDestroyMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnObjectDestroy", {}, {::i2c::type_of<::Mirror::ObjectDestroyMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Mirror::NetworkClient::OnSpawn(::Mirror::SpawnMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::Mirror::SpawnMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Mirror::NetworkClient::OnChangeOwner(::Mirror::ChangeOwnerMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnChangeOwner", {}, {::i2c::type_of<::Mirror::ChangeOwnerMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Mirror::NetworkClient::ChangeOwner(::Mirror::NetworkIdentity*  identity, ::Mirror::ChangeOwnerMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"ChangeOwner", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::Mirror::ChangeOwnerMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity, message);
}
inline void Mirror::NetworkClient::InitializeIdentityFlags(::Mirror::NetworkIdentity*  identity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"InitializeIdentityFlags", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity);
}
inline void Mirror::NetworkClient::InvokeIdentityCallbacks(::Mirror::NetworkIdentity*  identity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"InvokeIdentityCallbacks", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity);
}
inline void Mirror::NetworkClient::BootstrapIdentity(::Mirror::NetworkIdentity*  identity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"BootstrapIdentity", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity);
}
inline void Mirror::NetworkClient::BroadcastTimeSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"BroadcastTimeSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::Broadcast()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"Broadcast", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::NetworkEarlyUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"NetworkEarlyUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::NetworkLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"NetworkLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::DestroyAllClientObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"DestroyAllClientObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::DestroyObject(uint32_t  netId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"DestroyObject", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, netId);
}
inline void Mirror::NetworkClient::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline double_t Mirror::NetworkClient::get_bufferTimeMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_bufferTimeMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline float_t Mirror::NetworkClient::get_catchupNegativeThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_catchupNegativeThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t Mirror::NetworkClient::get_catchupPositiveThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_catchupPositiveThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline double_t Mirror::NetworkClient::get_catchupSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_catchupSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline double_t Mirror::NetworkClient::get_slowdownSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_slowdownSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline int32_t Mirror::NetworkClient::get_driftEmaDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_driftEmaDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline double_t Mirror::NetworkClient::get_bufferTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"get_bufferTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::InitTimeInterpolation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"InitTimeInterpolation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkClient::OnTimeSnapshotMessage(::Mirror::TimeSnapshotMessage  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnTimeSnapshotMessage", {}, {::i2c::type_of<::Mirror::TimeSnapshotMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _);
}
inline void Mirror::NetworkClient::OnTimeSnapshot(::Mirror::TimeSnapshot  snap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"OnTimeSnapshot", {}, {::i2c::type_of<::Mirror::TimeSnapshot>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, snap);
}
inline void Mirror::NetworkClient::UpdateTimeInterpolation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkClient*>(),
                        {"UpdateTimeInterpolation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mirror::NetworkClient::NetworkClient()   {
}
