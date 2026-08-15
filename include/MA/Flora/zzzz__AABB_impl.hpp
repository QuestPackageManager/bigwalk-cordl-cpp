#pragma once
// IWYU pragma private; include "MA/Flora/AABB.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "MA/Flora/zzzz__AABB_def.hpp"
#include "MA/Flora/zzzz__AxisAlignedBox_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::MA::Flora::AABB.get_Empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AABB (*)()>(&::MA::Flora::AABB::get_Empty)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814e2510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"get_Empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABB.get_Min
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::MA::Flora::AABB::*)()>(&::MA::Flora::AABB::get_Min)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814e25b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"get_Min", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABB.get_Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::MA::Flora::AABB::*)()>(&::MA::Flora::AABB::get_Max)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814e2570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"get_Max", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABB._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::AABB::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::MA::Flora::AABB::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18149a8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABB._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::AABB::*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4)>(&::MA::Flora::AABB::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180673c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABB.IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::AABB::*)()>(&::MA::Flora::AABB::IsEmpty)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d9500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABB.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::AABB::*)(::Unity::Mathematics::float4)>(&::MA::Flora::AABB::Contains)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814d94c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"Contains", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABB.IntersectsSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::AABB, ::Unity::Mathematics::float3, float_t)>(&::MA::Flora::AABB::IntersectsSphere)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814e2270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"IntersectsSphere", {}, {::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABB.IntersectsSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::AABB, ::Unity::Mathematics::float4, float_t)>(&::MA::Flora::AABB::IntersectsSphere)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814e2310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"IntersectsSphere", {}, {::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABB.IntersectsAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::AABB, ::MA::Flora::AABB)>(&::MA::Flora::AABB::IntersectsAABB)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814e2210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"IntersectsAABB", {}, {::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABB.TransformAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AABB (*)(::Unity::Mathematics::float4x4, ::MA::Flora::AABB)>(&::MA::Flora::AABB::TransformAABB)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814e2420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"TransformAABB", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABB.ToBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::MA::Flora::AABB::*)()>(&::MA::Flora::AABB::ToBounds)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814649d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"ToBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABB.ToBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AxisAlignedBox (::MA::Flora::AABB::*)()>(&::MA::Flora::AABB::ToBox)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814d9540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"ToBox", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABB.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::AABB::*)(::MA::Flora::AABB)>(&::MA::Flora::AABB::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180673a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABB.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::AABB::*)(::System::Object*)>(&::MA::Flora::AABB::Equals)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180673c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::AABB>(),
                    {::i2c::class_of<::MA::Flora::AABB>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABB.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::AABB::*)()>(&::MA::Flora::AABB::GetHashCode)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814d92c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::AABB>(),
                    {::i2c::class_of<::MA::Flora::AABB>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABB.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::AABB::*)()>(&::MA::Flora::AABB::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814d95a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::AABB>(),
                    {::i2c::class_of<::MA::Flora::AABB>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABB.op_Implicit___MA__Flora__AABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AABB (*)(::UnityEngine::Bounds)>(&::MA::Flora::AABB::op_Implicit___MA__Flora__AABB)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1814e26a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AABB.op_Implicit___MA__Flora__AABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AABB (*)(::MA::Flora::AxisAlignedBox)>(&::MA::Flora::AABB::op_Implicit___MA__Flora__AABB)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814e25f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::AABB MA::Flora::AABB::get_Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"get_Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AABB>(nullptr, ___internal_method);
}
inline ::Unity::Mathematics::float4 MA::Flora::AABB::get_Min()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"get_Min", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4 MA::Flora::AABB::get_Max()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"get_Max", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method);
}
inline void MA::Flora::AABB::_ctor(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  extent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, extent);
}
inline void MA::Flora::AABB::_ctor(::Unity::Mathematics::float4  center, ::Unity::Mathematics::float4  extent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, extent);
}
inline bool MA::Flora::AABB::IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::AABB::Contains(::Unity::Mathematics::float4  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"Contains", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, point);
}
inline bool MA::Flora::AABB::IntersectsSphere(::MA::Flora::AABB  aabb, ::Unity::Mathematics::float3  sphereCenter, float_t  sphereRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"IntersectsSphere", {}, {::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aabb, sphereCenter, sphereRadius);
}
inline bool MA::Flora::AABB::IntersectsSphere(::MA::Flora::AABB  aabb, ::Unity::Mathematics::float4  sphereCenter, float_t  sphereRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"IntersectsSphere", {}, {::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aabb, sphereCenter, sphereRadius);
}
inline bool MA::Flora::AABB::IntersectsAABB(::MA::Flora::AABB  a, ::MA::Flora::AABB  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"IntersectsAABB", {}, {::i2c::type_of<::MA::Flora::AABB>(), ::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::MA::Flora::AABB MA::Flora::AABB::TransformAABB(::Unity::Mathematics::float4x4  matrix, ::MA::Flora::AABB  aabb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"TransformAABB", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AABB>(nullptr, ___internal_method, matrix, aabb);
}
inline ::UnityEngine::Bounds MA::Flora::AABB::ToBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"ToBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(*this, ___internal_method);
}
inline ::MA::Flora::AxisAlignedBox MA::Flora::AABB::ToBox()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"ToBox", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AxisAlignedBox>(*this, ___internal_method);
}
inline bool MA::Flora::AABB::Equals(::MA::Flora::AABB  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::AABB::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::AABB>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::AABB::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::AABB>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW MA::Flora::AABB::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::AABB>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::MA::Flora::AABB MA::Flora::AABB::op_Implicit___MA__Flora__AABB(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AABB>(nullptr, ___internal_method, bounds);
}
inline ::MA::Flora::AABB MA::Flora::AABB::op_Implicit___MA__Flora__AABB(::MA::Flora::AxisAlignedBox  box)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AABB>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AABB>(nullptr, ___internal_method, box);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::AABB>"
constexpr  MA::Flora::AABB::operator ::System::IEquatable_1<::MA::Flora::AABB>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::AABB>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::AABB>"
constexpr ::System::IEquatable_1<::MA::Flora::AABB>* MA::Flora::AABB::i___System__IEquatable_1___MA__Flora__AABB_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::AABB>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Center", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "Extent", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::AABB::AABB(::Unity::Mathematics::float4  Center, ::Unity::Mathematics::float4  Extent) noexcept  {
this->Center = Center;
this->Extent = Extent;
}
// Ctor Parameters []
constexpr ::MA::Flora::AABB::AABB()   {
}
