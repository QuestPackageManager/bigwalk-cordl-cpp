#pragma once
// IWYU pragma private; include "UnityEngine/Physics2D.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Physics2D_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__ContactFilter2D_def.hpp"
#include "UnityEngine/zzzz__ContactPoint2D_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene2D_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_def.hpp"
#include "UnityEngine/zzzz__Rigidbody2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Physics2D.get_defaultPhysicsScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PhysicsScene2D (*)()>(&::UnityEngine::Physics2D::get_defaultPhysicsScene)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"get_defaultPhysicsScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.get_queriesHitTriggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Physics2D::get_queriesHitTriggers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822f3460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"get_queriesHitTriggers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Simulate_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::PhysicsScene2D, float_t, int32_t)>(&::UnityEngine::Physics2D::Simulate_Internal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822f33e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Simulate_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Physics2D::Raycast)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822f3380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t)>(&::UnityEngine::Physics2D::Raycast)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822f31c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, int32_t)>(&::UnityEngine::Physics2D::Raycast)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1822f2fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, int32_t, float_t)>(&::UnityEngine::Physics2D::Raycast)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1822f3260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, int32_t, float_t, float_t)>(&::UnityEngine::Physics2D::Raycast)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1822f2dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::RaycastHit2D>)>(&::UnityEngine::Physics2D::Raycast)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1822f2ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::RaycastHit2D>, float_t)>(&::UnityEngine::Physics2D::Raycast)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1822f30e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*, float_t)>(&::UnityEngine::Physics2D::Raycast)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822f3200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetRayIntersectionAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (*)(::UnityEngine::Ray)>(&::UnityEngine::Physics2D::GetRayIntersectionAll)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822f2a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetRayIntersectionAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (*)(::UnityEngine::Ray, float_t)>(&::UnityEngine::Physics2D::GetRayIntersectionAll)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822f2a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetRayIntersectionAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (*)(::UnityEngine::Ray, float_t, int32_t)>(&::UnityEngine::Physics2D::GetRayIntersectionAll)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822f29e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetRayIntersectionAll_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t)>(&::UnityEngine::Physics2D::GetRayIntersectionAll_Internal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822f2950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetRayIntersectionNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit2D>, float_t, int32_t)>(&::UnityEngine::Physics2D::GetRayIntersectionNonAlloc)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1822f2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetContacts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::ContactPoint2D>)>(&::UnityEngine::Physics2D::GetContacts)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1822f2850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetContacts", {}, {::i2c::type_of<::UnityEngine::Collider2D*>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::ContactPoint2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetColliderContactsArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::ContactPoint2D>)>(&::UnityEngine::Physics2D::GetColliderContactsArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1822f2770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetColliderContactsArray", {}, {::i2c::type_of<::UnityEngine::Collider2D*>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::ContactPoint2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetRayIntersectionNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit2D>)>(&::UnityEngine::Physics2D::GetRayIntersectionNonAlloc)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1822f2ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetRayIntersectionNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit2D>, float_t)>(&::UnityEngine::Physics2D::GetRayIntersectionNonAlloc)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1822f2af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.Simulate_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::PhysicsScene2D>, float_t, int32_t)>(&::UnityEngine::Physics2D::Simulate_Internal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822f33d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Simulate_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetRayIntersectionAll_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::PhysicsScene2D>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Physics2D::GetRayIntersectionAll_Internal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822f2940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Physics2D.GetColliderContactsArray_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::ContactFilter2D>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Physics2D::GetColliderContactsArray_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822f2760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetColliderContactsArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Physics2D::setStaticF_m_LastDisabledRigidbody2D(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>*, "m_LastDisabledRigidbody2D", ::UnityEngine::Physics2D*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>* UnityEngine::Physics2D::getStaticF_m_LastDisabledRigidbody2D()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>*, "m_LastDisabledRigidbody2D", ::UnityEngine::Physics2D*>();
}
inline ::UnityEngine::PhysicsScene2D UnityEngine::Physics2D::get_defaultPhysicsScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"get_defaultPhysicsScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsScene2D>(nullptr, ___internal_method);
}
inline bool UnityEngine::Physics2D::get_queriesHitTriggers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"get_queriesHitTriggers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Physics2D::Simulate_Internal(::UnityEngine::PhysicsScene2D  physicsScene, float_t  deltaTime, int32_t  simulationLayers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Simulate_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, deltaTime, simulationLayers);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::Physics2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(nullptr, ___internal_method, origin, direction);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::Physics2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(nullptr, ___internal_method, origin, direction, distance);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::Physics2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(nullptr, ___internal_method, origin, direction, distance, layerMask);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::Physics2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, int32_t  layerMask, float_t  minDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(nullptr, ___internal_method, origin, direction, distance, layerMask, minDepth);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::Physics2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, int32_t  layerMask, float_t  minDepth, float_t  maxDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(nullptr, ___internal_method, origin, direction, distance, layerMask, minDepth, maxDepth);
}
inline int32_t UnityEngine::Physics2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, direction, contactFilter, results);
}
inline int32_t UnityEngine::Physics2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D>  results, float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, direction, contactFilter, results, distance);
}
inline int32_t UnityEngine::Physics2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, ::UnityEngine::ContactFilter2D  contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*  results, float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, origin, direction, contactFilter, results, distance);
}
inline ::ArrayW<::UnityEngine::RaycastHit2D> UnityEngine::Physics2D::GetRayIntersectionAll(::UnityEngine::Ray  ray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit2D>>(nullptr, ___internal_method, ray);
}
inline ::ArrayW<::UnityEngine::RaycastHit2D> UnityEngine::Physics2D::GetRayIntersectionAll(::UnityEngine::Ray  ray, float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit2D>>(nullptr, ___internal_method, ray, distance);
}
inline ::ArrayW<::UnityEngine::RaycastHit2D> UnityEngine::Physics2D::GetRayIntersectionAll(::UnityEngine::Ray  ray, float_t  distance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit2D>>(nullptr, ___internal_method, ray, distance, layerMask);
}
inline ::ArrayW<::UnityEngine::RaycastHit2D> UnityEngine::Physics2D::GetRayIntersectionAll_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  distance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit2D>>(nullptr, ___internal_method, physicsScene, origin, direction, distance, layerMask);
}
inline int32_t UnityEngine::Physics2D::GetRayIntersectionNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit2D>  results, float_t  distance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, results, distance, layerMask);
}
inline int32_t UnityEngine::Physics2D::GetContacts(::UnityEngine::Collider2D*  collider, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::ContactPoint2D>  contacts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetContacts", {}, {::i2c::type_of<::UnityEngine::Collider2D*>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::ContactPoint2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, collider, contactFilter, contacts);
}
inline int32_t UnityEngine::Physics2D::GetColliderContactsArray(::UnityEngine::Collider2D*  collider, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::ContactPoint2D>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetColliderContactsArray", {}, {::i2c::type_of<::UnityEngine::Collider2D*>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::ContactPoint2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, collider, contactFilter, results);
}
inline int32_t UnityEngine::Physics2D::GetRayIntersectionNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit2D>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, results);
}
inline int32_t UnityEngine::Physics2D::GetRayIntersectionNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit2D>  results, float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionNonAlloc", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ray, results, distance);
}
inline bool UnityEngine::Physics2D::Simulate_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, float_t  deltaTime, int32_t  simulationLayers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"Simulate_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, deltaTime, simulationLayers);
}
inline void UnityEngine::Physics2D::GetRayIntersectionAll_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  direction, float_t  distance, int32_t  layerMask, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetRayIntersectionAll_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene, origin, direction, distance, layerMask, ret);
}
inline int32_t UnityEngine::Physics2D::GetColliderContactsArray_Injected(::System::IntPtr  collider, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Physics2D*>(),
                        {"GetColliderContactsArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, collider, contactFilter, results);
}
// Ctor Parameters []
constexpr ::UnityEngine::Physics2D::Physics2D()   {
}
