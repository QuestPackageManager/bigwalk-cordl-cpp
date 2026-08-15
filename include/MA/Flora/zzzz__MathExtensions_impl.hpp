#pragma once
// IWYU pragma private; include "MA/Flora/MathExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__MathExtensions_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float2x2_def.hpp"
#include "Unity/Mathematics/zzzz__float2x4_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::MA::Flora::MathExtensions.ComputePerpendicularAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::MA::Flora::MathExtensions::ComputePerpendicularAxes)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x18150b120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"ComputePerpendicularAxes", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathExtensions.ComputePerpendicularAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::MA::Flora::MathExtensions::ComputePerpendicularAxes)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18150aef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"ComputePerpendicularAxes", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathExtensions.IsNormalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float2, float_t)>(&::MA::Flora::MathExtensions::IsNormalized)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18150b4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"IsNormalized", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathExtensions.IsNormalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float3, float_t)>(&::MA::Flora::MathExtensions::IsNormalized)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18150b4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"IsNormalized", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathExtensions.NearlyEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t, float_t)>(&::MA::Flora::MathExtensions::NearlyEquals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18150b960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathExtensions.NearlyEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t)>(&::MA::Flora::MathExtensions::NearlyEquals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18150b760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathExtensions.NearlyEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::MA::Flora::MathExtensions::NearlyEquals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18150b5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathExtensions.NearlyEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4, float_t)>(&::MA::Flora::MathExtensions::NearlyEquals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18150b980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathExtensions.NearlyEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float2x2, ::Unity::Mathematics::float2x2, float_t)>(&::MA::Flora::MathExtensions::NearlyEquals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18150b520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float2x2>(), ::i2c::type_of<::Unity::Mathematics::float2x2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathExtensions.NearlyEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float2x4, ::Unity::Mathematics::float2x4, float_t)>(&::MA::Flora::MathExtensions::NearlyEquals)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18150b7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float2x4>(), ::i2c::type_of<::Unity::Mathematics::float2x4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathExtensions.NearlyEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float3x3, ::Unity::Mathematics::float3x3, float_t)>(&::MA::Flora::MathExtensions::NearlyEquals)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18150b9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathExtensions.NearlyEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float4x4, ::Unity::Mathematics::float4x4, float_t)>(&::MA::Flora::MathExtensions::NearlyEquals)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18150b660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathExtensions.NearlyZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float2, float_t)>(&::MA::Flora::MathExtensions::NearlyZero)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18150bc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyZero", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathExtensions.NearlyZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float3, float_t)>(&::MA::Flora::MathExtensions::NearlyZero)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18150bd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyZero", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathExtensions.NearlyZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float4, float_t)>(&::MA::Flora::MathExtensions::NearlyZero)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18150bce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyZero", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathExtensions.NearlyZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float2x2, float_t)>(&::MA::Flora::MathExtensions::NearlyZero)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18150bd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyZero", {}, {::i2c::type_of<::Unity::Mathematics::float2x2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathExtensions.NearlyZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float3x3, float_t)>(&::MA::Flora::MathExtensions::NearlyZero)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18150bb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyZero", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathExtensions.NearlyZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float4x4, float_t)>(&::MA::Flora::MathExtensions::NearlyZero)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18150be10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyZero", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::MathExtensions::ComputePerpendicularAxes(::UnityEngine::Vector3  v, ::by_ref<::UnityEngine::Vector3>  axis1, ::by_ref<::UnityEngine::Vector3>  axis2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"ComputePerpendicularAxes", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, v, axis1, axis2);
}
inline void MA::Flora::MathExtensions::ComputePerpendicularAxes(::Unity::Mathematics::float3  v, ::by_ref<::Unity::Mathematics::float3>  axis1, ::by_ref<::Unity::Mathematics::float3>  axis2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"ComputePerpendicularAxes", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, v, axis1, axis2);
}
inline bool MA::Flora::MathExtensions::IsNormalized(::Unity::Mathematics::float2  v, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"IsNormalized", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, tolerance);
}
inline bool MA::Flora::MathExtensions::IsNormalized(::Unity::Mathematics::float3  v, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"IsNormalized", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, tolerance);
}
inline bool MA::Flora::MathExtensions::NearlyEquals(float_t  f, float_t  other, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, f, other, tolerance);
}
inline bool MA::Flora::MathExtensions::NearlyEquals(::Unity::Mathematics::float2  v, ::Unity::Mathematics::float2  other, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, other, tolerance);
}
inline bool MA::Flora::MathExtensions::NearlyEquals(::Unity::Mathematics::float3  v, ::Unity::Mathematics::float3  other, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, other, tolerance);
}
inline bool MA::Flora::MathExtensions::NearlyEquals(::Unity::Mathematics::float4  v, ::Unity::Mathematics::float4  other, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, other, tolerance);
}
inline bool MA::Flora::MathExtensions::NearlyEquals(::Unity::Mathematics::float2x2  m, ::Unity::Mathematics::float2x2  other, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float2x2>(), ::i2c::type_of<::Unity::Mathematics::float2x2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m, other, tolerance);
}
inline bool MA::Flora::MathExtensions::NearlyEquals(::Unity::Mathematics::float2x4  m, ::Unity::Mathematics::float2x4  other, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float2x4>(), ::i2c::type_of<::Unity::Mathematics::float2x4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m, other, tolerance);
}
inline bool MA::Flora::MathExtensions::NearlyEquals(::Unity::Mathematics::float3x3  m, ::Unity::Mathematics::float3x3  other, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m, other, tolerance);
}
inline bool MA::Flora::MathExtensions::NearlyEquals(::Unity::Mathematics::float4x4  m, ::Unity::Mathematics::float4x4  other, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m, other, tolerance);
}
inline bool MA::Flora::MathExtensions::NearlyZero(::Unity::Mathematics::float2  v, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyZero", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, tolerance);
}
inline bool MA::Flora::MathExtensions::NearlyZero(::Unity::Mathematics::float3  v, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyZero", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, tolerance);
}
inline bool MA::Flora::MathExtensions::NearlyZero(::Unity::Mathematics::float4  v, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyZero", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, tolerance);
}
inline bool MA::Flora::MathExtensions::NearlyZero(::Unity::Mathematics::float2x2  v, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyZero", {}, {::i2c::type_of<::Unity::Mathematics::float2x2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, tolerance);
}
inline bool MA::Flora::MathExtensions::NearlyZero(::Unity::Mathematics::float3x3  v, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyZero", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, tolerance);
}
inline bool MA::Flora::MathExtensions::NearlyZero(::Unity::Mathematics::float4x4  v, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathExtensions*>(),
                        {"NearlyZero", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, tolerance);
}
// Ctor Parameters []
constexpr ::MA::Flora::MathExtensions::MathExtensions()   {
}
