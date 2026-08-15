#pragma once
// IWYU pragma private; include "MA/Flora/Line.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "MA/Flora/zzzz__Line_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
//  Writing Method size for method: ::MA::Flora::Line.LineOfPlaneIntersectingPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::Line (*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4)>(&::MA::Flora::Line::LineOfPlaneIntersectingPlane)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181500600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::Line>(),
                        {"LineOfPlaneIntersectingPlane", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::Line.PlaneContainingLineAndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::MA::Flora::Line, ::Unity::Mathematics::float3)>(&::MA::Flora::Line::PlaneContainingLineAndPoint)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1815006c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::Line>(),
                        {"PlaneContainingLineAndPoint", {}, {::i2c::type_of<::MA::Flora::Line>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::Line.PlaneContainingLineWithNormalPerpendicularToVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::MA::Flora::Line, ::Unity::Mathematics::float3)>(&::MA::Flora::Line::PlaneContainingLineWithNormalPerpendicularToVector)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1815007d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::Line>(),
                        {"PlaneContainingLineWithNormalPerpendicularToVector", {}, {::i2c::type_of<::MA::Flora::Line>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::Line MA::Flora::Line::LineOfPlaneIntersectingPlane(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::Line>(),
                        {"LineOfPlaneIntersectingPlane", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::Line>(nullptr, ___internal_method, a, b);
}
inline ::Unity::Mathematics::float4 MA::Flora::Line::PlaneContainingLineAndPoint(::MA::Flora::Line  a, ::Unity::Mathematics::float3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::Line>(),
                        {"PlaneContainingLineAndPoint", {}, {::i2c::type_of<::MA::Flora::Line>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, a, b);
}
inline ::Unity::Mathematics::float4 MA::Flora::Line::PlaneContainingLineWithNormalPerpendicularToVector(::MA::Flora::Line  a, ::Unity::Mathematics::float3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::Line>(),
                        {"PlaneContainingLineWithNormalPerpendicularToVector", {}, {::i2c::type_of<::MA::Flora::Line>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "M", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "T", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::Line::Line(::Unity::Mathematics::float3  M, ::Unity::Mathematics::float3  T) noexcept  {
this->M = M;
this->T = T;
}
// Ctor Parameters []
constexpr ::MA::Flora::Line::Line()   {
}
