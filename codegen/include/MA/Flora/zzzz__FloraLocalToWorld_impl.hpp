#pragma once
// IWYU pragma private; include "MA/Flora/FloraLocalToWorld.hpp"
#include "Unity/Mathematics/zzzz__float4x4_impl.hpp"
#include "MA/Flora/zzzz__FloraLocalToWorld_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceTransform_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814e08b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::float3x3, ::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814e0810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.FromTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (*)(::MA::Flora::FloraInstanceTransform)>(&::MA::Flora::FloraLocalToWorld::FromTransform)> {
  constexpr static std::size_t size = 0x9f0;
  constexpr static std::size_t addrs = 0x1814e6430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"FromTransform", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.FromPositionRotationScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::FromPositionRotationScale)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814e5f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"FromPositionRotationScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.FromPositionRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion)>(&::MA::Flora::FloraLocalToWorld::FromPositionRotation)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814e6030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"FromPositionRotation", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.FromPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::FromPosition)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814e6100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"FromPosition", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.FromRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (*)(::Unity::Mathematics::quaternion)>(&::MA::Flora::FloraLocalToWorld::FromRotation)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814e61e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"FromRotation", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.FromScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::FromScale)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1814e62d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"FromScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_XAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_XAxis)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181465680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_XAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.set_XAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::set_XAxis)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181478750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"set_XAxis", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_YAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_YAxis)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814656a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_YAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.set_YAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::set_YAxis)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181478780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"set_YAxis", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_ZAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_ZAxis)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814656d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_ZAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.set_ZAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::set_ZAxis)> {
  constexpr static std::size_t size = 0x1bb0;
  constexpr static std::size_t addrs = 0x1814787b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"set_ZAxis", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_Position)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814e0ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::set_Position)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181478720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"set_Position", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_Forward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_Forward)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814e0be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_Forward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_Back
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_Back)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814e0950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_Back", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_Up
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_Up)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814e1350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_Up", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_Down
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_Down)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814e0b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_Down", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_Right
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_Right)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814e0f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_Right", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_Left
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_Left)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814e0e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_Left", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_IsIdentity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_IsIdentity)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814e0ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_IsIdentity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_ContainsNaN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_ContainsNaN)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1814e09a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_ContainsNaN", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_IsFlipped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_IsFlipped)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1814e7030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_IsFlipped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_IsUniformScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_IsUniformScale)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814e0d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_IsUniformScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_ContainsZeroScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_ContainsZeroScale)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814e0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_ContainsZeroScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_BasisMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3x3 (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_BasisMatrix)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181465520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_BasisMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_BasisDeterminant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_BasisDeterminant)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181465460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_BasisDeterminant", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_RotationMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3x3 (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_RotationMatrix)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814e1010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_RotationMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_Rotation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814e10e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_Rotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.set_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::quaternion)>(&::MA::Flora::FloraLocalToWorld::set_Rotation)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814e1450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"set_Rotation", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_Scale)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1814e1130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_Scale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.set_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::set_Scale)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814e1530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"set_Scale", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.get_MaxAxisScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::get_MaxAxisScale)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814e0e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_MaxAxisScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.Inverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::Inverse)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814dedd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"Inverse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.InverseFast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::InverseFast)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814de980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"InverseFast", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraLocalToWorld::*)(::MA::Flora::FloraLocalToWorld)>(&::MA::Flora::FloraLocalToWorld::Transform)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181465190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"Transform", {}, {::i2c::type_of<::MA::Flora::FloraLocalToWorld>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraLocalToWorld::*)(::MA::Flora::FloraInstanceTransform)>(&::MA::Flora::FloraLocalToWorld::Transform)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1814652e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"Transform", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.TransformBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraLocalToWorld::*)(::MA::Flora::FloraLocalToWorld)>(&::MA::Flora::FloraLocalToWorld::TransformBy)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814c2440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"TransformBy", {}, {::i2c::type_of<::MA::Flora::FloraLocalToWorld>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.TransformBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraLocalToWorld::*)(::MA::Flora::FloraInstanceTransform)>(&::MA::Flora::FloraLocalToWorld::TransformBy)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1814dffc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"TransformBy", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.TransformPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::TransformPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814e0240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"TransformPoint", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.InverseTransformPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::InverseTransformPoint)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1814dec20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"InverseTransformPoint", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.TransformDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::TransformDirection)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814e0140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"TransformDirection", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.InverseTransformDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::InverseTransformDirection)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1814deaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"InverseTransformDirection", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.TransformBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::MA::Flora::FloraLocalToWorld::*)(::UnityEngine::Bounds)>(&::MA::Flora::FloraLocalToWorld::TransformBounds)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x1814dfb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"TransformBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.InverseTransformBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::MA::Flora::FloraLocalToWorld::*)(::UnityEngine::Bounds)>(&::MA::Flora::FloraLocalToWorld::InverseTransformBounds)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814de9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"InverseTransformBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.WithPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::WithPosition)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814e03a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"WithPosition", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.WithRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::quaternion)>(&::MA::Flora::FloraLocalToWorld::WithRotation)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814e0480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"WithRotation", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.WithScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::WithScale)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814e05d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"WithScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.WithUniformScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraLocalToWorld::*)(float_t)>(&::MA::Flora::FloraLocalToWorld::WithUniformScale)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814e0700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"WithUniformScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.WithoutScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::WithoutScale)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814e0740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"WithoutScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.Translate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::Translate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814e02b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"Translate", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.RotateBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::quaternion)>(&::MA::Flora::FloraLocalToWorld::RotateBy)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1814df110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"RotateBy", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.RotateTowards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::RotateTowards)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1814df2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"RotateTowards", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.LookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::LookAt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814dee40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"LookAt", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.RotateAround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion)>(&::MA::Flora::FloraLocalToWorld::RotateAround)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1814deed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"RotateAround", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.ScaleBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraLocalToWorld::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraLocalToWorld::ScaleBy)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1814df470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"ScaleBy", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.ToMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::ToMatrix)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180511600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"ToMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.ToInverseMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::ToInverseMatrix)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814df5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"ToInverseMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.ToMatrixNoScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::ToMatrixNoScale)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814df640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"ToMatrixNoScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraLocalToWorld::*)(::MA::Flora::FloraLocalToWorld)>(&::MA::Flora::FloraLocalToWorld::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814e5e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::FloraLocalToWorld>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.NearlyEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraLocalToWorld::*)(::MA::Flora::FloraLocalToWorld, float_t)>(&::MA::Flora::FloraLocalToWorld::NearlyEquals)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181465050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::MA::Flora::FloraLocalToWorld>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraLocalToWorld::*)(::System::Object*)>(&::MA::Flora::FloraLocalToWorld::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814e5e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                    {::i2c::class_of<::MA::Flora::FloraLocalToWorld>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180901d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                    {::i2c::class_of<::MA::Flora::FloraLocalToWorld>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::FloraLocalToWorld::*)()>(&::MA::Flora::FloraLocalToWorld::ToString)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1814dfa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                    {::i2c::class_of<::MA::Flora::FloraLocalToWorld>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::FloraLocalToWorld::*)(::StringW, ::System::IFormatProvider*)>(&::MA::Flora::FloraLocalToWorld::ToString)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1814df700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::FloraLocalToWorld, ::MA::Flora::FloraLocalToWorld)>(&::MA::Flora::FloraLocalToWorld::op_Equality)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814e5e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::FloraLocalToWorld>(), ::i2c::type_of<::MA::Flora::FloraLocalToWorld>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::FloraLocalToWorld, ::MA::Flora::FloraLocalToWorld)>(&::MA::Flora::FloraLocalToWorld::op_Inequality)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1814e7340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::FloraLocalToWorld>(), ::i2c::type_of<::MA::Flora::FloraLocalToWorld>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.op_Implicit___MA__Flora__FloraLocalToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (*)(::Unity::Mathematics::float4x4)>(&::MA::Flora::FloraLocalToWorld::op_Implicit___MA__Flora__FloraLocalToWorld)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180511600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.op_Implicit___Unity__Mathematics__float4x4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::MA::Flora::FloraLocalToWorld)>(&::MA::Flora::FloraLocalToWorld::op_Implicit___Unity__Mathematics__float4x4)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180511600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::FloraLocalToWorld>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.op_Implicit___MA__Flora__FloraLocalToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (*)(::UnityEngine::Matrix4x4)>(&::MA::Flora::FloraLocalToWorld::op_Implicit___MA__Flora__FloraLocalToWorld)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814e72d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraLocalToWorld.op_Implicit___UnityEngine__Matrix4x4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::MA::Flora::FloraLocalToWorld)>(&::MA::Flora::FloraLocalToWorld::op_Implicit___UnityEngine__Matrix4x4)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814e7280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::FloraLocalToWorld>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraLocalToWorld::setStaticF_Identity(::MA::Flora::FloraLocalToWorld  value)  {
::cordl_internals::setStaticField<::MA::Flora::FloraLocalToWorld, "Identity", ::MA::Flora::FloraLocalToWorld>(std::forward<::MA::Flora::FloraLocalToWorld>(value));
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::getStaticF_Identity()  {
return ::cordl_internals::getStaticField<::MA::Flora::FloraLocalToWorld, "Identity", ::MA::Flora::FloraLocalToWorld>();
}
inline void MA::Flora::FloraLocalToWorld::_ctor(::Unity::Mathematics::float3  xAxis, ::Unity::Mathematics::float3  yAxis, ::Unity::Mathematics::float3  zAxis, ::Unity::Mathematics::float3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, xAxis, yAxis, zAxis, position);
}
inline void MA::Flora::FloraLocalToWorld::_ctor(::Unity::Mathematics::float3x3  rotation, ::Unity::Mathematics::float3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rotation, position);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::FromTransform(::MA::Flora::FloraInstanceTransform  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"FromTransform", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(nullptr, ___internal_method, transform);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::FromPositionRotationScale(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"FromPositionRotationScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(nullptr, ___internal_method, position, rotation, scale);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::FromPositionRotation(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"FromPositionRotation", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(nullptr, ___internal_method, position, rotation);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::FromPosition(::Unity::Mathematics::float3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"FromPosition", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(nullptr, ___internal_method, position);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::FromRotation(::Unity::Mathematics::quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"FromRotation", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(nullptr, ___internal_method, rotation);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::FromScale(::Unity::Mathematics::float3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"FromScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(nullptr, ___internal_method, scale);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraLocalToWorld::get_XAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_XAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void MA::Flora::FloraLocalToWorld::set_XAxis(::Unity::Mathematics::float3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"set_XAxis", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraLocalToWorld::get_YAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_YAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void MA::Flora::FloraLocalToWorld::set_YAxis(::Unity::Mathematics::float3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"set_YAxis", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraLocalToWorld::get_ZAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_ZAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void MA::Flora::FloraLocalToWorld::set_ZAxis(::Unity::Mathematics::float3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"set_ZAxis", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraLocalToWorld::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void MA::Flora::FloraLocalToWorld::set_Position(::Unity::Mathematics::float3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"set_Position", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraLocalToWorld::get_Forward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_Forward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraLocalToWorld::get_Back()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_Back", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraLocalToWorld::get_Up()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_Up", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraLocalToWorld::get_Down()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_Down", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraLocalToWorld::get_Right()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_Right", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraLocalToWorld::get_Left()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_Left", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline bool MA::Flora::FloraLocalToWorld::get_IsIdentity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_IsIdentity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::FloraLocalToWorld::get_ContainsNaN()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_ContainsNaN", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::FloraLocalToWorld::get_IsFlipped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_IsFlipped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::FloraLocalToWorld::get_IsUniformScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_IsUniformScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::FloraLocalToWorld::get_ContainsZeroScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_ContainsZeroScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3x3 MA::Flora::FloraLocalToWorld::get_BasisMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_BasisMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3x3>(*this, ___internal_method);
}
inline float_t MA::Flora::FloraLocalToWorld::get_BasisDeterminant()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_BasisDeterminant", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3x3 MA::Flora::FloraLocalToWorld::get_RotationMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_RotationMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3x3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::quaternion MA::Flora::FloraLocalToWorld::get_Rotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_Rotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(*this, ___internal_method);
}
inline void MA::Flora::FloraLocalToWorld::set_Rotation(::Unity::Mathematics::quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"set_Rotation", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraLocalToWorld::get_Scale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_Scale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void MA::Flora::FloraLocalToWorld::set_Scale(::Unity::Mathematics::float3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"set_Scale", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t MA::Flora::FloraLocalToWorld::get_MaxAxisScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"get_MaxAxisScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::Inverse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"Inverse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::InverseFast()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"InverseFast", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::Transform(::MA::Flora::FloraLocalToWorld  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"Transform", {}, {::i2c::type_of<::MA::Flora::FloraLocalToWorld>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method, rhs);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::Transform(::MA::Flora::FloraInstanceTransform  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"Transform", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method, rhs);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::TransformBy(::MA::Flora::FloraLocalToWorld  lhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"TransformBy", {}, {::i2c::type_of<::MA::Flora::FloraLocalToWorld>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method, lhs);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::TransformBy(::MA::Flora::FloraInstanceTransform  lhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"TransformBy", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method, lhs);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraLocalToWorld::TransformPoint(::Unity::Mathematics::float3  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"TransformPoint", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, rhs);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraLocalToWorld::InverseTransformPoint(::Unity::Mathematics::float3  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"InverseTransformPoint", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, rhs);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraLocalToWorld::TransformDirection(::Unity::Mathematics::float3  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"TransformDirection", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, rhs);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraLocalToWorld::InverseTransformDirection(::Unity::Mathematics::float3  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"InverseTransformDirection", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, rhs);
}
inline ::UnityEngine::Bounds MA::Flora::FloraLocalToWorld::TransformBounds(::UnityEngine::Bounds  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"TransformBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(*this, ___internal_method, rhs);
}
inline ::UnityEngine::Bounds MA::Flora::FloraLocalToWorld::InverseTransformBounds(::UnityEngine::Bounds  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"InverseTransformBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(*this, ___internal_method, rhs);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::WithPosition(::Unity::Mathematics::float3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"WithPosition", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method, position);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::WithRotation(::Unity::Mathematics::quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"WithRotation", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method, rotation);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::WithScale(::Unity::Mathematics::float3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"WithScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method, scale);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::WithUniformScale(float_t  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"WithUniformScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method, s);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::WithoutScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"WithoutScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::Translate(::Unity::Mathematics::float3  translation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"Translate", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method, translation);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::RotateBy(::Unity::Mathematics::quaternion  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"RotateBy", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method, delta);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::RotateTowards(::Unity::Mathematics::float3  forward, ::Unity::Mathematics::float3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"RotateTowards", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method, forward, up);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::LookAt(::Unity::Mathematics::float3  target, ::Unity::Mathematics::float3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"LookAt", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method, target, up);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::RotateAround(::Unity::Mathematics::float3  point, ::Unity::Mathematics::quaternion  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"RotateAround", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method, point, delta);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::ScaleBy(::Unity::Mathematics::float3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"ScaleBy", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method, scale);
}
inline ::Unity::Mathematics::float4x4 MA::Flora::FloraLocalToWorld::ToMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"ToMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4x4 MA::Flora::FloraLocalToWorld::ToInverseMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"ToInverseMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4x4 MA::Flora::FloraLocalToWorld::ToMatrixNoScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"ToMatrixNoScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(*this, ___internal_method);
}
inline bool MA::Flora::FloraLocalToWorld::Equals(::MA::Flora::FloraLocalToWorld  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::FloraLocalToWorld>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool MA::Flora::FloraLocalToWorld::NearlyEquals(::MA::Flora::FloraLocalToWorld  rhs, float_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"NearlyEquals", {}, {::i2c::type_of<::MA::Flora::FloraLocalToWorld>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs, epsilon);
}
inline bool MA::Flora::FloraLocalToWorld::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraLocalToWorld>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::FloraLocalToWorld::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraLocalToWorld>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW MA::Flora::FloraLocalToWorld::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraLocalToWorld>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW MA::Flora::FloraLocalToWorld::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline bool MA::Flora::FloraLocalToWorld::op_Equality(::MA::Flora::FloraLocalToWorld  lhs, ::MA::Flora::FloraLocalToWorld  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::FloraLocalToWorld>(), ::i2c::type_of<::MA::Flora::FloraLocalToWorld>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool MA::Flora::FloraLocalToWorld::op_Inequality(::MA::Flora::FloraLocalToWorld  lhs, ::MA::Flora::FloraLocalToWorld  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::FloraLocalToWorld>(), ::i2c::type_of<::MA::Flora::FloraLocalToWorld>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::op_Implicit___MA__Flora__FloraLocalToWorld(::Unity::Mathematics::float4x4  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(nullptr, ___internal_method, m);
}
inline ::Unity::Mathematics::float4x4 MA::Flora::FloraLocalToWorld::op_Implicit___Unity__Mathematics__float4x4(::MA::Flora::FloraLocalToWorld  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::FloraLocalToWorld>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, m);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraLocalToWorld::op_Implicit___MA__Flora__FloraLocalToWorld(::UnityEngine::Matrix4x4  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(nullptr, ___internal_method, m);
}
inline ::UnityEngine::Matrix4x4 MA::Flora::FloraLocalToWorld::op_Implicit___UnityEngine__Matrix4x4(::MA::Flora::FloraLocalToWorld  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraLocalToWorld>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::FloraLocalToWorld>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, m);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::FloraLocalToWorld>"
constexpr  MA::Flora::FloraLocalToWorld::operator ::System::IEquatable_1<::MA::Flora::FloraLocalToWorld>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::FloraLocalToWorld>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::FloraLocalToWorld>"
constexpr ::System::IEquatable_1<::MA::Flora::FloraLocalToWorld>* MA::Flora::FloraLocalToWorld::i___System__IEquatable_1___MA__Flora__FloraLocalToWorld_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::FloraLocalToWorld>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  MA::Flora::FloraLocalToWorld::operator ::System::IFormattable*()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* MA::Flora::FloraLocalToWorld::i___System__IFormattable()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Value", ty: "::Unity::Mathematics::float4x4", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraLocalToWorld::FloraLocalToWorld(::Unity::Mathematics::float4x4  Value) noexcept  {
this->Value = Value;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraLocalToWorld::FloraLocalToWorld()   {
}
