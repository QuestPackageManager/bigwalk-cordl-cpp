#pragma once
// IWYU pragma private; include "GlobalNamespace/ColliderLookup.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ColliderLookup_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColliderLookup.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Collider*)>(&::GlobalNamespace::ColliderLookup::Add)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18045a9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderLookup*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderLookup.GetColliderFromId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (*)(int32_t)>(&::GlobalNamespace::ColliderLookup::GetColliderFromId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18045aaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderLookup*>(),
                        {"GetColliderFromId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderLookup.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderLookup::*)()>(&::GlobalNamespace::ColliderLookup::OnDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18045aac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderLookup*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderLookup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderLookup::*)()>(&::GlobalNamespace::ColliderLookup::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderLookup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ColliderLookup::setStaticF_colliders(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Collider>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Collider>>*, "colliders", ::GlobalNamespace::ColliderLookup*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Collider>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Collider>>* GlobalNamespace::ColliderLookup::getStaticF_colliders()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Collider>>*, "colliders", ::GlobalNamespace::ColliderLookup*>();
}
inline void GlobalNamespace::ColliderLookup::setStaticF__collider(::UnityW<::UnityEngine::Collider>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Collider>, "_collider", ::GlobalNamespace::ColliderLookup*>(std::forward<::UnityW<::UnityEngine::Collider>>(value));
}
inline ::UnityW<::UnityEngine::Collider> GlobalNamespace::ColliderLookup::getStaticF__collider()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Collider>, "_collider", ::GlobalNamespace::ColliderLookup*>();
}
inline void GlobalNamespace::ColliderLookup::Add(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderLookup*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, collider);
}
inline ::UnityW<::UnityEngine::Collider> GlobalNamespace::ColliderLookup::GetColliderFromId(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderLookup*>(),
                        {"GetColliderFromId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(nullptr, ___internal_method, id);
}
inline void GlobalNamespace::ColliderLookup::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderLookup*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderLookup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderLookup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColliderLookup* GlobalNamespace::ColliderLookup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColliderLookup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColliderLookup::ColliderLookup()   {
}
