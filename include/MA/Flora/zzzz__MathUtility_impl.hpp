#pragma once
// IWYU pragma private; include "MA/Flora/MathUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__MathUtility_def.hpp"
#include "Unity/Mathematics/zzzz__bool2_def.hpp"
#include "Unity/Mathematics/zzzz__bool3_def.hpp"
#include "Unity/Mathematics/zzzz__bool4_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
//  Writing Method size for method: ::MA::Flora::MathUtility.IsNegative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t)>(&::MA::Flora::MathUtility::IsNegative)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18150c050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"IsNegative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.Nearly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool2 (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t)>(&::MA::Flora::MathUtility::Nearly)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18150c0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"Nearly", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.Nearly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::MA::Flora::MathUtility::Nearly)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18150c100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"Nearly", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.Nearly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::bool4 (*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4, float_t)>(&::MA::Flora::MathUtility::Nearly)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18150c060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"Nearly", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.NearlyEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t, float_t)>(&::MA::Flora::MathUtility::NearlyEquals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18150b960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.NearlyEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t)>(&::MA::Flora::MathUtility::NearlyEquals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18150b760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.NearlyEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::MA::Flora::MathUtility::NearlyEquals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18150b5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.NearlyEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4, float_t)>(&::MA::Flora::MathUtility::NearlyEquals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18150b980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.Repeat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::MA::Flora::MathUtility::Repeat)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18150c200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"Repeat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.GridSnap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::MA::Flora::MathUtility::GridSnap)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18150c000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"GridSnap", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.DivideAndRoundUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::MA::Flora::MathUtility::DivideAndRoundUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18150bff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"DivideAndRoundUp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.DivideAndRoundDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::MA::Flora::MathUtility::DivideAndRoundDown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18150bfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"DivideAndRoundDown", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.DivideAndRoundNearest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::MA::Flora::MathUtility::DivideAndRoundNearest)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18150bfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"DivideAndRoundNearest", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.CeilLogTwo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::MA::Flora::MathUtility::CeilLogTwo)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18150bef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"CeilLogTwo", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.NextMultipleOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::MA::Flora::MathUtility::NextMultipleOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181459030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NextMultipleOf", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.NextMultipleOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int64_t, int64_t)>(&::MA::Flora::MathUtility::NextMultipleOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18150c1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NextMultipleOf", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.NextMultipleOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, uint64_t)>(&::MA::Flora::MathUtility::NextMultipleOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18150c1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NextMultipleOf", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.NextMultipleOfNonPow2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::MA::Flora::MathUtility::NextMultipleOfNonPow2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18150c1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NextMultipleOfNonPow2", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.NextMultipleOfNonPow2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int64_t, int64_t)>(&::MA::Flora::MathUtility::NextMultipleOfNonPow2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18150c1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NextMultipleOfNonPow2", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::MathUtility.NextMultipleOfNonPow2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, uint64_t)>(&::MA::Flora::MathUtility::NextMultipleOfNonPow2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18150c190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NextMultipleOfNonPow2", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::MathUtility::IsNegative(float_t  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"IsNegative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a);
}
inline ::Unity::Mathematics::bool2 MA::Flora::MathUtility::Nearly(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"Nearly", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool2>(nullptr, ___internal_method, a, b, tolerance);
}
inline ::Unity::Mathematics::bool3 MA::Flora::MathUtility::Nearly(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"Nearly", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool3>(nullptr, ___internal_method, a, b, tolerance);
}
inline ::Unity::Mathematics::bool4 MA::Flora::MathUtility::Nearly(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"Nearly", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::bool4>(nullptr, ___internal_method, a, b, tolerance);
}
inline bool MA::Flora::MathUtility::NearlyEquals(float_t  a, float_t  b, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, tolerance);
}
inline bool MA::Flora::MathUtility::NearlyEquals(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, tolerance);
}
inline bool MA::Flora::MathUtility::NearlyEquals(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, tolerance);
}
inline bool MA::Flora::MathUtility::NearlyEquals(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, tolerance);
}
inline float_t MA::Flora::MathUtility::Repeat(float_t  t, float_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"Repeat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, t, length);
}
inline float_t MA::Flora::MathUtility::GridSnap(float_t  value, float_t  grid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"GridSnap", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, grid);
}
inline int32_t MA::Flora::MathUtility::DivideAndRoundUp(int32_t  dividend, int32_t  divisor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"DivideAndRoundUp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, dividend, divisor);
}
inline int32_t MA::Flora::MathUtility::DivideAndRoundDown(int32_t  dividend, int32_t  divisor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"DivideAndRoundDown", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, dividend, divisor);
}
inline int32_t MA::Flora::MathUtility::DivideAndRoundNearest(int32_t  dividend, int32_t  divisor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"DivideAndRoundNearest", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, dividend, divisor);
}
inline int32_t MA::Flora::MathUtility::CeilLogTwo(uint64_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"CeilLogTwo", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x);
}
inline int32_t MA::Flora::MathUtility::NextMultipleOf(int32_t  input, int32_t  alignPow2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NextMultipleOf", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, input, alignPow2);
}
inline int64_t MA::Flora::MathUtility::NextMultipleOf(int64_t  input, int64_t  alignPow2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NextMultipleOf", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, input, alignPow2);
}
inline uint64_t MA::Flora::MathUtility::NextMultipleOf(uint64_t  input, uint64_t  alignPow2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NextMultipleOf", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, input, alignPow2);
}
inline int32_t MA::Flora::MathUtility::NextMultipleOfNonPow2(int32_t  input, int32_t  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NextMultipleOfNonPow2", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, input, alignment);
}
inline int64_t MA::Flora::MathUtility::NextMultipleOfNonPow2(int64_t  input, int64_t  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NextMultipleOfNonPow2", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, input, alignment);
}
inline uint64_t MA::Flora::MathUtility::NextMultipleOfNonPow2(uint64_t  input, uint64_t  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::MathUtility*>(),
                        {"NextMultipleOfNonPow2", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, input, alignment);
}
// Ctor Parameters []
constexpr ::MA::Flora::MathUtility::MathUtility()   {
}
