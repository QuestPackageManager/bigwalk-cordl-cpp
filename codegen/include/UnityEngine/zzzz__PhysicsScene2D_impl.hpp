#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsScene2D.hpp"
#include "UnityEngine/zzzz__PhysicsScene2D_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableListWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__ContactFilter2D_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::PhysicsScene2D::*)()>(&::UnityEngine::PhysicsScene2D::ToString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822f7b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                    {::i2c::class_of<::UnityEngine::PhysicsScene2D>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::PhysicsScene2D)>(&::UnityEngine::PhysicsScene2D::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::PhysicsScene2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene2D::*)()>(&::UnityEngine::PhysicsScene2D::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                    {::i2c::class_of<::UnityEngine::PhysicsScene2D>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PhysicsScene2D::*)(::System::Object*)>(&::UnityEngine::PhysicsScene2D::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822f7060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                    {::i2c::class_of<::UnityEngine::PhysicsScene2D>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::PhysicsScene2D)>(&::UnityEngine::PhysicsScene2D::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PhysicsScene2D::*)()>(&::UnityEngine::PhysicsScene2D::IsValid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822f72f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.IsValid_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::PhysicsScene2D)>(&::UnityEngine::PhysicsScene2D::IsValid_Internal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822f72d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"IsValid_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Simulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PhysicsScene2D::*)(float_t)>(&::UnityEngine::PhysicsScene2D::Simulate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822f7a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Simulate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Simulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PhysicsScene2D::*)(float_t, int32_t)>(&::UnityEngine::PhysicsScene2D::Simulate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1822f7ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Simulate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, int32_t)>(&::UnityEngine::PhysicsScene2D::Raycast)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1822f77e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::UnityEngine::ContactFilter2D)>(&::UnityEngine::PhysicsScene2D::Raycast)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1822f7950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::RaycastHit2D>)>(&::UnityEngine::PhysicsScene2D::Raycast)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1822f75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*)>(&::UnityEngine::PhysicsScene2D::Raycast)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1822f7730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Raycast_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::UnityEngine::ContactFilter2D)>(&::UnityEngine::PhysicsScene2D::Raycast_Internal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822f7580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.RaycastArray_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::RaycastHit2D>)>(&::UnityEngine::PhysicsScene2D::RaycastArray_Internal)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1822f7330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"RaycastArray_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.RaycastList_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*)>(&::UnityEngine::PhysicsScene2D::RaycastList_Internal)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1822f7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"RaycastList_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.GetRayIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene2D::*)(::UnityEngine::Ray, float_t, ::ArrayW<::UnityEngine::RaycastHit2D>, int32_t)>(&::UnityEngine::PhysicsScene2D::GetRayIntersection)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1822f71a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"GetRayIntersection", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.GetRayIntersectionArray_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::ArrayW<::UnityEngine::RaycastHit2D>)>(&::UnityEngine::PhysicsScene2D::GetRayIntersectionArray_Internal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1822f70e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"GetRayIntersectionArray_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.IsValid_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::PhysicsScene2D>)>(&::UnityEngine::PhysicsScene2D::IsValid_Internal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822f72c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"IsValid_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.Raycast_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::PhysicsScene2D>, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>, float_t, ::by_ref<::UnityEngine::ContactFilter2D>, ::by_ref<::UnityEngine::RaycastHit2D>)>(&::UnityEngine::PhysicsScene2D::Raycast_Internal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822f7570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.RaycastArray_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::PhysicsScene2D>, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>, float_t, ::by_ref<::UnityEngine::ContactFilter2D>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::PhysicsScene2D::RaycastArray_Internal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822f7320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"RaycastArray_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.RaycastList_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::PhysicsScene2D>, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>, float_t, ::by_ref<::UnityEngine::ContactFilter2D>, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(&::UnityEngine::PhysicsScene2D::RaycastList_Internal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822f7400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"RaycastList_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene2D.GetRayIntersectionArray_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::PhysicsScene2D>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::PhysicsScene2D::GetRayIntersectionArray_Internal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822f70d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"GetRayIntersectionArray_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::PhysicsScene2D::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::PhysicsScene2D>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::PhysicsScene2D::op_Inequality(::UnityEngine::PhysicsScene2D  lhs, ::UnityEngine::PhysicsScene2D  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::PhysicsScene2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline int32_t UnityEngine::PhysicsScene2D::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::PhysicsScene2D>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::PhysicsScene2D::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::PhysicsScene2D>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::PhysicsScene2D::Equals(::UnityEngine::PhysicsScene2D  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::PhysicsScene2D::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::PhysicsScene2D::IsValid_Internal(::UnityEngine::PhysicsScene2D  physicsScene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"IsValid_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene);
}
inline bool UnityEngine::PhysicsScene2D::Simulate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Simulate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, deltaTime);
}
inline bool UnityEngine::PhysicsScene2D::Simulate(float_t  deltaTime, int32_t  simulationLayers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Simulate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, deltaTime, simulationLayers);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::PhysicsScene2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(*this, ___internal_method, origin, direction, distance, layerMask);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::PhysicsScene2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(*this, ___internal_method, origin, direction, distance, contactFilter);
}
inline int32_t UnityEngine::PhysicsScene2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, origin, direction, distance, contactFilter, results);
}
inline int32_t UnityEngine::PhysicsScene2D::Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, origin, direction, distance, contactFilter, results);
}
inline ::UnityEngine::RaycastHit2D UnityEngine::PhysicsScene2D::Raycast_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit2D>(nullptr, ___internal_method, physicsScene, origin, direction, distance, contactFilter);
}
inline int32_t UnityEngine::PhysicsScene2D::RaycastArray_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"RaycastArray_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, origin, direction, distance, contactFilter, results);
}
inline int32_t UnityEngine::PhysicsScene2D::RaycastList_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"RaycastList_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ContactFilter2D>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, origin, direction, distance, contactFilter, results);
}
inline int32_t UnityEngine::PhysicsScene2D::GetRayIntersection(::UnityEngine::Ray  ray, float_t  distance, ::ArrayW<::UnityEngine::RaycastHit2D>  results, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"GetRayIntersection", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, ray, distance, results, layerMask);
}
inline int32_t UnityEngine::PhysicsScene2D::GetRayIntersectionArray_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  distance, int32_t  layerMask, ::ArrayW<::UnityEngine::RaycastHit2D>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"GetRayIntersectionArray_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene2D>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, origin, direction, distance, layerMask, results);
}
inline bool UnityEngine::PhysicsScene2D::IsValid_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"IsValid_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene);
}
inline void UnityEngine::PhysicsScene2D::Raycast_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  origin, ::by_ref<::UnityEngine::Vector2>  direction, float_t  distance, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::by_ref<::UnityEngine::RaycastHit2D>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"Raycast_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, physicsScene, origin, direction, distance, contactFilter, ret);
}
inline int32_t UnityEngine::PhysicsScene2D::RaycastArray_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  origin, ::by_ref<::UnityEngine::Vector2>  direction, float_t  distance, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"RaycastArray_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, origin, direction, distance, contactFilter, results);
}
inline int32_t UnityEngine::PhysicsScene2D::RaycastList_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  origin, ::by_ref<::UnityEngine::Vector2>  direction, float_t  distance, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"RaycastList_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ContactFilter2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, origin, direction, distance, contactFilter, results);
}
inline int32_t UnityEngine::PhysicsScene2D::GetRayIntersectionArray_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  direction, float_t  distance, int32_t  layerMask, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene2D>(),
                        {"GetRayIntersectionArray_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene2D>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, origin, direction, distance, layerMask, results);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::PhysicsScene2D>"
constexpr  UnityEngine::PhysicsScene2D::operator ::System::IEquatable_1<::UnityEngine::PhysicsScene2D>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::PhysicsScene2D>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::PhysicsScene2D>"
constexpr ::System::IEquatable_1<::UnityEngine::PhysicsScene2D>* UnityEngine::PhysicsScene2D::i___System__IEquatable_1___UnityEngine__PhysicsScene2D_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::PhysicsScene2D>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PhysicsScene2D::PhysicsScene2D(int32_t  m_Handle) noexcept  {
this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::PhysicsScene2D::PhysicsScene2D()   {
}
