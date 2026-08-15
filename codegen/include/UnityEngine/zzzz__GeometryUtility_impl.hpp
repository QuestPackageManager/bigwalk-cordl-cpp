#pragma once
// IWYU pragma private; include "UnityEngine/GeometryUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GeometryUtility_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::GeometryUtility.CalculateFrustumPlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Plane> (*)(::UnityEngine::Camera*)>(&::UnityEngine::GeometryUtility::CalculateFrustumPlanes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182246c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateFrustumPlanes", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.CalculateFrustumPlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::System::Span_1<::UnityEngine::Plane>)>(&::UnityEngine::GeometryUtility::CalculateFrustumPlanes)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x182246d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateFrustumPlanes", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Plane>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.CalculateFrustumPlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::ArrayW<::UnityEngine::Plane>)>(&::UnityEngine::GeometryUtility::CalculateFrustumPlanes)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x182247000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateFrustumPlanes", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.CalculateFrustumPlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::System::Span_1<::UnityEngine::Plane>)>(&::UnityEngine::GeometryUtility::CalculateFrustumPlanes)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182246c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateFrustumPlanes", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Plane>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.CalculateFrustumPlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Matrix4x4, ::ArrayW<::UnityEngine::Plane>)>(&::UnityEngine::GeometryUtility::CalculateFrustumPlanes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822472c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateFrustumPlanes", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.CalculateBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Matrix4x4)>(&::UnityEngine::GeometryUtility::CalculateBounds)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182246b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.Internal_TestPlanesAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<::UnityEngine::Plane>, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::GeometryUtility::Internal_TestPlanesAABB)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182247420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_TestPlanesAABB", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Plane>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.TestPlanesAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Plane>, ::UnityEngine::Bounds)>(&::UnityEngine::GeometryUtility::TestPlanesAABB)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182247480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"TestPlanesAABB", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Plane>>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.Internal_ExtractPlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Span_1<::UnityEngine::Plane>, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::GeometryUtility::Internal_ExtractPlanes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822473c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_ExtractPlanes", {}, {::i2c::type_of<::System::Span_1<::UnityEngine::Plane>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.Internal_CalculateBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::ArrayW<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::GeometryUtility::Internal_CalculateBounds)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182247320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_CalculateBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.Internal_TestPlanesAABB_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::GeometryUtility::Internal_TestPlanesAABB_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182247410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_TestPlanesAABB_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.Internal_ExtractPlanes_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::GeometryUtility::Internal_ExtractPlanes_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822473b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_ExtractPlanes_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GeometryUtility.Internal_CalculateBounds_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::GeometryUtility::Internal_CalculateBounds_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182247310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_CalculateBounds_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityEngine::Plane> UnityEngine::GeometryUtility::CalculateFrustumPlanes(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateFrustumPlanes", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Plane>>(nullptr, ___internal_method, camera);
}
inline void UnityEngine::GeometryUtility::CalculateFrustumPlanes(::UnityEngine::Camera*  camera, ::System::Span_1<::UnityEngine::Plane>  planes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateFrustumPlanes", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Plane>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, planes);
}
inline void UnityEngine::GeometryUtility::CalculateFrustumPlanes(::UnityEngine::Camera*  camera, ::ArrayW<::UnityEngine::Plane>  planes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateFrustumPlanes", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, planes);
}
inline void UnityEngine::GeometryUtility::CalculateFrustumPlanes(::by_ref<::UnityEngine::Matrix4x4>  worldToProjectionMatrix, ::System::Span_1<::UnityEngine::Plane>  planes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateFrustumPlanes", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Plane>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldToProjectionMatrix, planes);
}
inline void UnityEngine::GeometryUtility::CalculateFrustumPlanes(::UnityEngine::Matrix4x4  worldToProjectionMatrix, ::ArrayW<::UnityEngine::Plane>  planes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateFrustumPlanes", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::ArrayW<::UnityEngine::Plane>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldToProjectionMatrix, planes);
}
inline ::UnityEngine::Bounds UnityEngine::GeometryUtility::CalculateBounds(::ArrayW<::UnityEngine::Vector3>  positions, ::UnityEngine::Matrix4x4  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"CalculateBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, positions, transform);
}
inline bool UnityEngine::GeometryUtility::Internal_TestPlanesAABB(::System::ReadOnlySpan_1<::UnityEngine::Plane>  planes, ::by_ref<::UnityEngine::Bounds>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_TestPlanesAABB", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Plane>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, planes, bounds);
}
inline bool UnityEngine::GeometryUtility::TestPlanesAABB(::ArrayW<::UnityEngine::Plane>  planes, ::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"TestPlanesAABB", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Plane>>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, planes, bounds);
}
inline void UnityEngine::GeometryUtility::Internal_ExtractPlanes(::System::Span_1<::UnityEngine::Plane>  planes, ::by_ref<::UnityEngine::Matrix4x4>  worldToProjectionMatrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_ExtractPlanes", {}, {::i2c::type_of<::System::Span_1<::UnityEngine::Plane>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, planes, worldToProjectionMatrix);
}
inline ::UnityEngine::Bounds UnityEngine::GeometryUtility::Internal_CalculateBounds(::ArrayW<::UnityEngine::Vector3>  positions, ::by_ref<::UnityEngine::Matrix4x4>  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_CalculateBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, positions, transform);
}
inline bool UnityEngine::GeometryUtility::Internal_TestPlanesAABB_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  planes, ::by_ref<::UnityEngine::Bounds>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_TestPlanesAABB_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, planes, bounds);
}
inline void UnityEngine::GeometryUtility::Internal_ExtractPlanes_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  planes, ::by_ref<::UnityEngine::Matrix4x4>  worldToProjectionMatrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_ExtractPlanes_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, planes, worldToProjectionMatrix);
}
inline void UnityEngine::GeometryUtility::Internal_CalculateBounds_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  positions, ::by_ref<::UnityEngine::Matrix4x4>  transform, ::by_ref<::UnityEngine::Bounds>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GeometryUtility*>(),
                        {"Internal_CalculateBounds_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, positions, transform, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::GeometryUtility::GeometryUtility()   {
}
