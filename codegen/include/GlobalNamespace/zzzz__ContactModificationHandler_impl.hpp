#pragma once
// IWYU pragma private; include "GlobalNamespace/ContactModificationHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ContactModificationHandler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__ModifiableContactPair_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ContactModificationHandler.AddCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ContactModificationHandler::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::ContactModificationHandler::AddCollider)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18041e0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ContactModificationHandler*>(),
                        {"AddCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ContactModificationHandler.RemoveCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ContactModificationHandler::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::ContactModificationHandler::RemoveCollider)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18041e5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ContactModificationHandler*>(),
                        {"RemoveCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ContactModificationHandler.OnContactModifyEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>)>(&::GlobalNamespace::ContactModificationHandler::OnContactModifyEvent)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18041e260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ContactModificationHandler*>(),
                        {"OnContactModifyEvent", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ContactModificationHandler.PreDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ContactModificationHandler::*)()>(&::GlobalNamespace::ContactModificationHandler::PreDestroy)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18041e510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ContactModificationHandler*>(),
                        {"PreDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ContactModificationHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ContactModificationHandler::*)()>(&::GlobalNamespace::ContactModificationHandler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ContactModificationHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::ContactModificationHandler::__cordl_internal_get_collidersIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersIds;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::ContactModificationHandler::__cordl_internal_get_collidersIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersIds;
}
constexpr void GlobalNamespace::ContactModificationHandler::__cordl_internal_set_collidersIds(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collidersIds = value;
}
constexpr ::System::Action_2<::UnityEngine::ModifiableContactPair,bool>*& GlobalNamespace::ContactModificationHandler::__cordl_internal_get_pairHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pairHandler;
}
constexpr ::System::Action_2<::UnityEngine::ModifiableContactPair,bool>* const& GlobalNamespace::ContactModificationHandler::__cordl_internal_get_pairHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pairHandler;
}
constexpr void GlobalNamespace::ContactModificationHandler::__cordl_internal_set_pairHandler(::System::Action_2<::UnityEngine::ModifiableContactPair,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pairHandler = value;
}
inline void GlobalNamespace::ContactModificationHandler::setStaticF_delegateDictionary(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::ContactModificationHandler*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::ContactModificationHandler*>*, "delegateDictionary", ::GlobalNamespace::ContactModificationHandler*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::ContactModificationHandler*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::ContactModificationHandler*>* GlobalNamespace::ContactModificationHandler::getStaticF_delegateDictionary()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::ContactModificationHandler*>*, "delegateDictionary", ::GlobalNamespace::ContactModificationHandler*>();
}
inline void GlobalNamespace::ContactModificationHandler::AddCollider(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ContactModificationHandler*>(),
                        {"AddCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::ContactModificationHandler::RemoveCollider(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ContactModificationHandler*>(),
                        {"RemoveCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::ContactModificationHandler::OnContactModifyEvent(::UnityEngine::PhysicsScene  scene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  pairs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ContactModificationHandler*>(),
                        {"OnContactModifyEvent", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, pairs);
}
inline void GlobalNamespace::ContactModificationHandler::PreDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ContactModificationHandler*>(),
                        {"PreDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ContactModificationHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ContactModificationHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ContactModificationHandler* GlobalNamespace::ContactModificationHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ContactModificationHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ContactModificationHandler::ContactModificationHandler()   {
}
