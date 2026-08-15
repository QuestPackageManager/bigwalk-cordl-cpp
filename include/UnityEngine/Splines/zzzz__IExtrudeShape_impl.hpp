#pragma once
// IWYU pragma private; include "UnityEngine/Splines/IExtrudeShape.hpp"
#include "UnityEngine/Splines/zzzz__IExtrudeShape_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Splines/zzzz__ISpline_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::IExtrudeShape.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::IExtrudeShape::*)(::UnityEngine::Splines::ISpline*, int32_t)>(&::UnityEngine::Splines::IExtrudeShape::Setup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::IExtrudeShape*>(),
                    {::i2c::class_of<::UnityEngine::Splines::IExtrudeShape*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::IExtrudeShape.SetSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::IExtrudeShape::*)(int32_t, float_t, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::UnityEngine::Splines::IExtrudeShape::SetSegment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::IExtrudeShape*>(),
                    {::i2c::class_of<::UnityEngine::Splines::IExtrudeShape*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::IExtrudeShape.get_SideCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::IExtrudeShape::*)()>(&::UnityEngine::Splines::IExtrudeShape::get_SideCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::IExtrudeShape*>(),
                    {::i2c::class_of<::UnityEngine::Splines::IExtrudeShape*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::IExtrudeShape.GetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::UnityEngine::Splines::IExtrudeShape::*)(float_t, int32_t)>(&::UnityEngine::Splines::IExtrudeShape::GetPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::IExtrudeShape*>(),
                    {::i2c::class_of<::UnityEngine::Splines::IExtrudeShape*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Splines::IExtrudeShape::Setup(::UnityEngine::Splines::ISpline*  path, int32_t  segmentCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::IExtrudeShape*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, segmentCount);
}
inline void UnityEngine::Splines::IExtrudeShape::SetSegment(int32_t  index, float_t  t, ::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  tangent, ::Unity::Mathematics::float3  up)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::IExtrudeShape*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, t, position, tangent, up);
}
inline int32_t UnityEngine::Splines::IExtrudeShape::get_SideCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::IExtrudeShape*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Unity::Mathematics::float2 UnityEngine::Splines::IExtrudeShape::GetPosition(float_t  t, int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::IExtrudeShape*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(this, ___internal_method, t, index);
}
