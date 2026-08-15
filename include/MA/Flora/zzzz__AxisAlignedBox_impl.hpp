#pragma once
// IWYU pragma private; include "MA/Flora/AxisAlignedBox.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "MA/Flora/zzzz__AxisAlignedBox_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::AxisAlignedBox::*)()>(&::MA::Flora::AxisAlignedBox::get_IsEmpty)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18149ad90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.get_Width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::AxisAlignedBox::*)()>(&::MA::Flora::AxisAlignedBox::get_Width)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814db9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_Width", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.get_Height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::AxisAlignedBox::*)()>(&::MA::Flora::AxisAlignedBox::get_Height)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814db6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_Height", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.get_Depth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::AxisAlignedBox::*)()>(&::MA::Flora::AxisAlignedBox::get_Depth)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814db5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_Depth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.get_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::AxisAlignedBox::*)()>(&::MA::Flora::AxisAlignedBox::get_Volume)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814db930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_Volume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.get_MinDim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::AxisAlignedBox::*)()>(&::MA::Flora::AxisAlignedBox::get_MinDim)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814db6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_MinDim", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.get_MaxDim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::AxisAlignedBox::*)()>(&::MA::Flora::AxisAlignedBox::get_MaxDim)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18149add0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_MaxDim", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.get_Center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::AxisAlignedBox::*)()>(&::MA::Flora::AxisAlignedBox::get_Center)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181464b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_Center", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.set_Center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::AxisAlignedBox::*)(::Unity::Mathematics::float3)>(&::MA::Flora::AxisAlignedBox::set_Center)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814dba00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"set_Center", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.get_Extent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::AxisAlignedBox::*)()>(&::MA::Flora::AxisAlignedBox::get_Extent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18149ad30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_Extent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.set_Extent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::AxisAlignedBox::*)(::Unity::Mathematics::float3)>(&::MA::Flora::AxisAlignedBox::set_Extent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18149af20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"set_Extent", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.get_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::AxisAlignedBox::*)()>(&::MA::Flora::AxisAlignedBox::get_Size)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181464b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_Size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.set_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::AxisAlignedBox::*)(::Unity::Mathematics::float3)>(&::MA::Flora::AxisAlignedBox::set_Size)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814dbaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"set_Size", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.get_DiagonalLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::AxisAlignedBox::*)()>(&::MA::Flora::AxisAlignedBox::get_DiagonalLength)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814db660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_DiagonalLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.get_DiagonalLengthSq
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::AxisAlignedBox::*)()>(&::MA::Flora::AxisAlignedBox::get_DiagonalLengthSq)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814db610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_DiagonalLengthSq", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.get_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::AxisAlignedBox::*)()>(&::MA::Flora::AxisAlignedBox::get_Radius)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814db7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_Radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.get_RadiusSq
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::AxisAlignedBox::*)()>(&::MA::Flora::AxisAlignedBox::get_RadiusSq)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814db760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_RadiusSq", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.get_SurfaceArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::AxisAlignedBox::*)()>(&::MA::Flora::AxisAlignedBox::get_SurfaceArea)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814db820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_SurfaceArea", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.FromExtents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AxisAlignedBox (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::MA::Flora::AxisAlignedBox::FromExtents)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1814e2960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"FromExtents", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::AxisAlignedBox::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::MA::Flora::AxisAlignedBox::_ctor)> {
  constexpr static std::size_t size = 0xd210;
  constexpr static std::size_t addrs = 0x180fa7a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::AxisAlignedBox::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::MA::Flora::AxisAlignedBox::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1814db3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::AxisAlignedBox::*)(::UnityEngine::Bounds)>(&::MA::Flora::AxisAlignedBox::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814db300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.GetBoundingSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BoundingSphere (::MA::Flora::AxisAlignedBox::*)()>(&::MA::Flora::AxisAlignedBox::GetBoundingSphere)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814d9da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"GetBoundingSphere", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.Dimension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::AxisAlignedBox::*)(int32_t)>(&::MA::Flora::AxisAlignedBox::Dimension)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814d9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"Dimension", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.Encapsulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::AxisAlignedBox::*)(::Unity::Mathematics::float3)>(&::MA::Flora::AxisAlignedBox::Encapsulate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1814d9c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"Encapsulate", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.Encapsulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::AxisAlignedBox::*)(::MA::Flora::AxisAlignedBox)>(&::MA::Flora::AxisAlignedBox::Encapsulate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18149a910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"Encapsulate", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::AxisAlignedBox::*)(::Unity::Mathematics::float3)>(&::MA::Flora::AxisAlignedBox::Contains)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814d97b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"Contains", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::AxisAlignedBox::*)(::MA::Flora::AxisAlignedBox)>(&::MA::Flora::AxisAlignedBox::Contains)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814d9710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"Contains", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.IsInside
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::AxisAlignedBox::*)(::MA::Flora::AxisAlignedBox)>(&::MA::Flora::AxisAlignedBox::IsInside)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814da8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"IsInside", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.GetClosestPointTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::AxisAlignedBox::*)(::Unity::Mathematics::float3)>(&::MA::Flora::AxisAlignedBox::GetClosestPointTo)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1814d9eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"GetClosestPointTo", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.DistanceSquared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::AxisAlignedBox::*)(::Unity::Mathematics::float3)>(&::MA::Flora::AxisAlignedBox::DistanceSquared)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1814d9aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"DistanceSquared", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.DistanceSquared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::AxisAlignedBox::*)(::MA::Flora::AxisAlignedBox)>(&::MA::Flora::AxisAlignedBox::DistanceSquared)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1814d98d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"DistanceSquared", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.IntersectsSphereSq
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::AxisAlignedBox::*)(::Unity::Mathematics::float3, float_t)>(&::MA::Flora::AxisAlignedBox::IntersectsSphereSq)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1814da320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"IntersectsSphereSq", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.IntersectsSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::AxisAlignedBox::*)(::Unity::Mathematics::float3, float_t)>(&::MA::Flora::AxisAlignedBox::IntersectsSphere)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1814da490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"IntersectsSphere", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.IntersectsSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::AxisAlignedBox::*)(::UnityEngine::BoundingSphere)>(&::MA::Flora::AxisAlignedBox::IntersectsSphere)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1814da630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"IntersectsSphere", {}, {::i2c::type_of<::UnityEngine::BoundingSphere>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.IntersectsAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::AxisAlignedBox::*)(::MA::Flora::AxisAlignedBox)>(&::MA::Flora::AxisAlignedBox::IntersectsAABB)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814da280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"IntersectsAABB", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.Intersect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AxisAlignedBox (::MA::Flora::AxisAlignedBox::*)(::MA::Flora::AxisAlignedBox)>(&::MA::Flora::AxisAlignedBox::Intersect)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1814d9ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"Intersect", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.Translate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AxisAlignedBox (::MA::Flora::AxisAlignedBox::*)(::Unity::Mathematics::float3)>(&::MA::Flora::AxisAlignedBox::Translate)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814db1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"Translate", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.ComputeCorners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::AxisAlignedBox::*)(::System::Span_1<::Unity::Mathematics::float3>)>(&::MA::Flora::AxisAlignedBox::ComputeCorners)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814d9610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"ComputeCorners", {}, {::i2c::type_of<::System::Span_1<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.RotateBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AxisAlignedBox (::MA::Flora::AxisAlignedBox::*)(::Unity::Mathematics::float3x3)>(&::MA::Flora::AxisAlignedBox::RotateBy)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x1814da930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"RotateBy", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.TransformBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AxisAlignedBox (::MA::Flora::AxisAlignedBox::*)(::Unity::Mathematics::float4x4)>(&::MA::Flora::AxisAlignedBox::TransformBy)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x18149aa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"TransformBy", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.InverseTransformBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AxisAlignedBox (::MA::Flora::AxisAlignedBox::*)(::Unity::Mathematics::float4x4)>(&::MA::Flora::AxisAlignedBox::InverseTransformBy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814da800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"InverseTransformBy", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.RotateExtent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::MA::Flora::AxisAlignedBox::RotateExtent)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1814e2c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"RotateExtent", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.TransformProjectBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AxisAlignedBox (::MA::Flora::AxisAlignedBox::*)(::Unity::Mathematics::float4x4)>(&::MA::Flora::AxisAlignedBox::TransformProjectBy)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x1814dae00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"TransformProjectBy", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.Expand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::AxisAlignedBox::*)(float_t)>(&::MA::Flora::AxisAlignedBox::Expand)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814d9d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"Expand", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::AxisAlignedBox::*)()>(&::MA::Flora::AxisAlignedBox::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814dad80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                    {::i2c::class_of<::MA::Flora::AxisAlignedBox>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::AxisAlignedBox::*)(::StringW, ::System::IFormatProvider*)>(&::MA::Flora::AxisAlignedBox::ToString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814daca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AxisAlignedBox (*)(::MA::Flora::AxisAlignedBox, ::Unity::Mathematics::float3)>(&::MA::Flora::AxisAlignedBox::op_Addition)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1814e3290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"op_Addition", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AxisAlignedBox (*)(::MA::Flora::AxisAlignedBox, ::MA::Flora::AxisAlignedBox)>(&::MA::Flora::AxisAlignedBox::op_Addition)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1814e3130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"op_Addition", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>(), ::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::AxisAlignedBox::*)(::MA::Flora::AxisAlignedBox)>(&::MA::Flora::AxisAlignedBox::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180673e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::AxisAlignedBox::*)(::System::Object*)>(&::MA::Flora::AxisAlignedBox::Equals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814e28a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                    {::i2c::class_of<::MA::Flora::AxisAlignedBox>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::AxisAlignedBox::*)()>(&::MA::Flora::AxisAlignedBox::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180c86510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                    {::i2c::class_of<::MA::Flora::AxisAlignedBox>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::AxisAlignedBox, ::MA::Flora::AxisAlignedBox)>(&::MA::Flora::AxisAlignedBox::op_Equality)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814e3400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>(), ::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::AxisAlignedBox, ::MA::Flora::AxisAlignedBox)>(&::MA::Flora::AxisAlignedBox::op_Inequality)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814e34b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>(), ::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.op_Implicit___UnityEngine__Bounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::MA::Flora::AxisAlignedBox)>(&::MA::Flora::AxisAlignedBox::op_Implicit___UnityEngine__Bounds)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181464bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AxisAlignedBox.op_Implicit___MA__Flora__AxisAlignedBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AxisAlignedBox (*)(::UnityEngine::Bounds)>(&::MA::Flora::AxisAlignedBox::op_Implicit___MA__Flora__AxisAlignedBox)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18149ae50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::AxisAlignedBox::setStaticF_Empty(::MA::Flora::AxisAlignedBox  value)  {
::cordl_internals::setStaticField<::MA::Flora::AxisAlignedBox, "Empty", ::MA::Flora::AxisAlignedBox>(std::forward<::MA::Flora::AxisAlignedBox>(value));
}
inline ::MA::Flora::AxisAlignedBox MA::Flora::AxisAlignedBox::getStaticF_Empty()  {
return ::cordl_internals::getStaticField<::MA::Flora::AxisAlignedBox, "Empty", ::MA::Flora::AxisAlignedBox>();
}
inline void MA::Flora::AxisAlignedBox::setStaticF_Infinite(::MA::Flora::AxisAlignedBox  value)  {
::cordl_internals::setStaticField<::MA::Flora::AxisAlignedBox, "Infinite", ::MA::Flora::AxisAlignedBox>(std::forward<::MA::Flora::AxisAlignedBox>(value));
}
inline ::MA::Flora::AxisAlignedBox MA::Flora::AxisAlignedBox::getStaticF_Infinite()  {
return ::cordl_internals::getStaticField<::MA::Flora::AxisAlignedBox, "Infinite", ::MA::Flora::AxisAlignedBox>();
}
inline void MA::Flora::AxisAlignedBox::setStaticF_Zero(::MA::Flora::AxisAlignedBox  value)  {
::cordl_internals::setStaticField<::MA::Flora::AxisAlignedBox, "Zero", ::MA::Flora::AxisAlignedBox>(std::forward<::MA::Flora::AxisAlignedBox>(value));
}
inline ::MA::Flora::AxisAlignedBox MA::Flora::AxisAlignedBox::getStaticF_Zero()  {
return ::cordl_internals::getStaticField<::MA::Flora::AxisAlignedBox, "Zero", ::MA::Flora::AxisAlignedBox>();
}
inline bool MA::Flora::AxisAlignedBox::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline float_t MA::Flora::AxisAlignedBox::get_Width()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_Width", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t MA::Flora::AxisAlignedBox::get_Height()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_Height", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t MA::Flora::AxisAlignedBox::get_Depth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_Depth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t MA::Flora::AxisAlignedBox::get_Volume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_Volume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t MA::Flora::AxisAlignedBox::get_MinDim()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_MinDim", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t MA::Flora::AxisAlignedBox::get_MaxDim()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_MaxDim", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 MA::Flora::AxisAlignedBox::get_Center()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_Center", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void MA::Flora::AxisAlignedBox::set_Center(::Unity::Mathematics::float3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"set_Center", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 MA::Flora::AxisAlignedBox::get_Extent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_Extent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void MA::Flora::AxisAlignedBox::set_Extent(::Unity::Mathematics::float3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"set_Extent", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 MA::Flora::AxisAlignedBox::get_Size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_Size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void MA::Flora::AxisAlignedBox::set_Size(::Unity::Mathematics::float3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"set_Size", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t MA::Flora::AxisAlignedBox::get_DiagonalLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_DiagonalLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t MA::Flora::AxisAlignedBox::get_DiagonalLengthSq()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_DiagonalLengthSq", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t MA::Flora::AxisAlignedBox::get_Radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_Radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t MA::Flora::AxisAlignedBox::get_RadiusSq()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_RadiusSq", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t MA::Flora::AxisAlignedBox::get_SurfaceArea()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"get_SurfaceArea", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::MA::Flora::AxisAlignedBox MA::Flora::AxisAlignedBox::FromExtents(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  extent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"FromExtents", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AxisAlignedBox>(nullptr, ___internal_method, center, extent);
}
inline void MA::Flora::AxisAlignedBox::_ctor(::Unity::Mathematics::float3  min, ::Unity::Mathematics::float3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, min, max);
}
inline void MA::Flora::AxisAlignedBox::_ctor(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, c);
}
inline void MA::Flora::AxisAlignedBox::_ctor(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bounds);
}
inline ::UnityEngine::BoundingSphere MA::Flora::AxisAlignedBox::GetBoundingSphere()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"GetBoundingSphere", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundingSphere>(*this, ___internal_method);
}
inline float_t MA::Flora::AxisAlignedBox::Dimension(int32_t  axisIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"Dimension", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, axisIndex);
}
inline void MA::Flora::AxisAlignedBox::Encapsulate(::Unity::Mathematics::float3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"Encapsulate", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, point);
}
inline void MA::Flora::AxisAlignedBox::Encapsulate(::MA::Flora::AxisAlignedBox  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"Encapsulate", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline bool MA::Flora::AxisAlignedBox::Contains(::Unity::Mathematics::float3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"Contains", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, point);
}
inline bool MA::Flora::AxisAlignedBox::Contains(::MA::Flora::AxisAlignedBox  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"Contains", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool MA::Flora::AxisAlignedBox::IsInside(::MA::Flora::AxisAlignedBox  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"IsInside", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline ::Unity::Mathematics::float3 MA::Flora::AxisAlignedBox::GetClosestPointTo(::Unity::Mathematics::float3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"GetClosestPointTo", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, point);
}
inline float_t MA::Flora::AxisAlignedBox::DistanceSquared(::Unity::Mathematics::float3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"DistanceSquared", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, point);
}
inline float_t MA::Flora::AxisAlignedBox::DistanceSquared(::MA::Flora::AxisAlignedBox  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"DistanceSquared", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, other);
}
inline bool MA::Flora::AxisAlignedBox::IntersectsSphereSq(::Unity::Mathematics::float3  center, float_t  radiusSq)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"IntersectsSphereSq", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, center, radiusSq);
}
inline bool MA::Flora::AxisAlignedBox::IntersectsSphere(::Unity::Mathematics::float3  center, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"IntersectsSphere", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, center, radius);
}
inline bool MA::Flora::AxisAlignedBox::IntersectsSphere(::UnityEngine::BoundingSphere  sphere)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"IntersectsSphere", {}, {::i2c::type_of<::UnityEngine::BoundingSphere>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, sphere);
}
inline bool MA::Flora::AxisAlignedBox::IntersectsAABB(::MA::Flora::AxisAlignedBox  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"IntersectsAABB", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::MA::Flora::AxisAlignedBox MA::Flora::AxisAlignedBox::Intersect(::MA::Flora::AxisAlignedBox  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"Intersect", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AxisAlignedBox>(*this, ___internal_method, other);
}
inline ::MA::Flora::AxisAlignedBox MA::Flora::AxisAlignedBox::Translate(::Unity::Mathematics::float3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"Translate", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AxisAlignedBox>(*this, ___internal_method, offset);
}
inline void MA::Flora::AxisAlignedBox::ComputeCorners(::System::Span_1<::Unity::Mathematics::float3>  cornerVertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"ComputeCorners", {}, {::i2c::type_of<::System::Span_1<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cornerVertices);
}
inline ::MA::Flora::AxisAlignedBox MA::Flora::AxisAlignedBox::RotateBy(::Unity::Mathematics::float3x3  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"RotateBy", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AxisAlignedBox>(*this, ___internal_method, m);
}
inline ::MA::Flora::AxisAlignedBox MA::Flora::AxisAlignedBox::TransformBy(::Unity::Mathematics::float4x4  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"TransformBy", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AxisAlignedBox>(*this, ___internal_method, m);
}
inline ::MA::Flora::AxisAlignedBox MA::Flora::AxisAlignedBox::InverseTransformBy(::Unity::Mathematics::float4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"InverseTransformBy", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AxisAlignedBox>(*this, ___internal_method, matrix);
}
inline ::Unity::Mathematics::float3 MA::Flora::AxisAlignedBox::RotateExtent(::Unity::Mathematics::float3  extents, ::Unity::Mathematics::float3  m0, ::Unity::Mathematics::float3  m1, ::Unity::Mathematics::float3  m2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"RotateExtent", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, extents, m0, m1, m2);
}
inline ::MA::Flora::AxisAlignedBox MA::Flora::AxisAlignedBox::TransformProjectBy(::Unity::Mathematics::float4x4  projectionMatrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"TransformProjectBy", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AxisAlignedBox>(*this, ___internal_method, projectionMatrix);
}
inline void MA::Flora::AxisAlignedBox::Expand(float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"Expand", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, radius);
}
inline ::StringW MA::Flora::AxisAlignedBox::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::AxisAlignedBox>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW MA::Flora::AxisAlignedBox::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline ::MA::Flora::AxisAlignedBox MA::Flora::AxisAlignedBox::op_Addition(::MA::Flora::AxisAlignedBox  lhs, ::Unity::Mathematics::float3  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"op_Addition", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AxisAlignedBox>(nullptr, ___internal_method, lhs, rhs);
}
inline ::MA::Flora::AxisAlignedBox MA::Flora::AxisAlignedBox::op_Addition(::MA::Flora::AxisAlignedBox  lhs, ::MA::Flora::AxisAlignedBox  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"op_Addition", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>(), ::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AxisAlignedBox>(nullptr, ___internal_method, lhs, rhs);
}
inline bool MA::Flora::AxisAlignedBox::Equals(::MA::Flora::AxisAlignedBox  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::AxisAlignedBox::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::AxisAlignedBox>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t MA::Flora::AxisAlignedBox::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::AxisAlignedBox>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool MA::Flora::AxisAlignedBox::op_Equality(::MA::Flora::AxisAlignedBox  lhs, ::MA::Flora::AxisAlignedBox  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>(), ::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool MA::Flora::AxisAlignedBox::op_Inequality(::MA::Flora::AxisAlignedBox  lhs, ::MA::Flora::AxisAlignedBox  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>(), ::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline ::UnityEngine::Bounds MA::Flora::AxisAlignedBox::op_Implicit___UnityEngine__Bounds(::MA::Flora::AxisAlignedBox  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::AxisAlignedBox>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, rhs);
}
inline ::MA::Flora::AxisAlignedBox MA::Flora::AxisAlignedBox::op_Implicit___MA__Flora__AxisAlignedBox(::UnityEngine::Bounds  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AxisAlignedBox>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AxisAlignedBox>(nullptr, ___internal_method, rhs);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::AxisAlignedBox>"
constexpr  MA::Flora::AxisAlignedBox::operator ::System::IEquatable_1<::MA::Flora::AxisAlignedBox>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::AxisAlignedBox>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::AxisAlignedBox>"
constexpr ::System::IEquatable_1<::MA::Flora::AxisAlignedBox>* MA::Flora::AxisAlignedBox::i___System__IEquatable_1___MA__Flora__AxisAlignedBox_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::AxisAlignedBox>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Min", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Max", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::AxisAlignedBox::AxisAlignedBox(::Unity::Mathematics::float3  Min, ::Unity::Mathematics::float3  Max) noexcept  {
this->Min = Min;
this->Max = Max;
}
// Ctor Parameters []
constexpr ::MA::Flora::AxisAlignedBox::AxisAlignedBox()   {
}
