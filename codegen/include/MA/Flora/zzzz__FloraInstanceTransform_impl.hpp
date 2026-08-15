#pragma once
// IWYU pragma private; include "MA/Flora/FloraInstanceTransform.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__quaternion_impl.hpp"
#include "MA/Flora/zzzz__FloraInstanceTransform_def.hpp"
#include "MA/Flora/zzzz__FloraLocalToWorld_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Space_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.get_ScaleDeterminant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::FloraInstanceTransform::*)()>(&::MA::Flora::FloraInstanceTransform::get_ScaleDeterminant)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814de970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"get_ScaleDeterminant", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814c2410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.FromMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (*)(::Unity::Mathematics::float4x4)>(&::MA::Flora::FloraInstanceTransform::FromMatrix)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181464d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"FromMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.FromPositionRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion)>(&::MA::Flora::FloraInstanceTransform::FromPositionRotation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814e4d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"FromPositionRotation", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.FromPositionScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::FromPositionScale)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814e4da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"FromPositionScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.FromPositionRotationScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::FromPositionRotationScale)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814e4d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"FromPositionRotationScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.FromPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::FromPosition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814e4de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"FromPosition", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.FromPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (*)(float_t, float_t, float_t)>(&::MA::Flora::FloraInstanceTransform::FromPosition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814e4e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"FromPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.FromRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (*)(::Unity::Mathematics::quaternion)>(&::MA::Flora::FloraInstanceTransform::FromRotation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814e4e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"FromRotation", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.FromScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::FromScale)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814e4ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"FromScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.FromUnityTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (*)(::UnityEngine::Transform*, ::UnityEngine::Space)>(&::MA::Flora::FloraInstanceTransform::FromUnityTransform)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1814dbce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"FromUnityTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.Right
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraInstanceTransform::*)()>(&::MA::Flora::FloraInstanceTransform::Right)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814dd090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Right", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.Up
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraInstanceTransform::*)()>(&::MA::Flora::FloraInstanceTransform::Up)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814de8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Up", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.Forward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraInstanceTransform::*)()>(&::MA::Flora::FloraInstanceTransform::Forward)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814dbca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Forward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceTransform::*)(::MA::Flora::FloraInstanceTransform)>(&::MA::Flora::FloraInstanceTransform::Transform)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814de740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Transform", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.InverseTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceTransform::*)(::MA::Flora::FloraInstanceTransform)>(&::MA::Flora::FloraInstanceTransform::InverseTransform)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814dcbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"InverseTransform", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.Inverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceTransform::*)()>(&::MA::Flora::FloraInstanceTransform::Inverse)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1814dccd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Inverse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.WithPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::WithPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814de8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"WithPosition", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.WithRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::quaternion)>(&::MA::Flora::FloraInstanceTransform::WithRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814de910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"WithRotation", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.WithScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::WithScale)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814de940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"WithScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.TransformPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::TransformPoint)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1814de0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"TransformPoint", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.InverseTransformPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::InverseTransformPoint)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1814dc2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"InverseTransformPoint", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.TransformDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::TransformDirection)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814dde20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"TransformDirection", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.InverseTransformDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::InverseTransformDirection)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1814dc030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"InverseTransformDirection", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.TransformVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::TransformVector)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1814de5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"TransformVector", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.InverseTransformVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::InverseTransformVector)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1814dc950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"InverseTransformVector", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.TransformNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::TransformNormal)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1814ddf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"TransformNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.InverseTransformNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::InverseTransformNormal)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1814dc1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"InverseTransformNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.TransformRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (::MA::Flora::FloraInstanceTransform::*)(::UnityEngine::Ray)>(&::MA::Flora::FloraInstanceTransform::TransformRay)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1814de290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"TransformRay", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.InverseTransformRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (::MA::Flora::FloraInstanceTransform::*)(::UnityEngine::Ray)>(&::MA::Flora::FloraInstanceTransform::InverseTransformRay)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1814dc520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"InverseTransformRay", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.TransformRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::quaternion)>(&::MA::Flora::FloraInstanceTransform::TransformRotation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814de520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"TransformRotation", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.InverseTransformRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::quaternion)>(&::MA::Flora::FloraInstanceTransform::InverseTransformRotation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814dc7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"InverseTransformRotation", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.TransformScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::TransformScale)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814de580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"TransformScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.InverseTransformScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::InverseTransformScale)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814dc900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"InverseTransformScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.InverseTransformScaleSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::InverseTransformScaleSafe)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814dc820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"InverseTransformScaleSafe", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.Translate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::Translate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814de840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Translate", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.ApplyScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::ApplyScale)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814dbb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"ApplyScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.Rotate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::quaternion)>(&::MA::Flora::FloraInstanceTransform::Rotate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814dd9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Rotate", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.Rotate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::Rotate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814dd930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Rotate", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.Rotate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3, float_t)>(&::MA::Flora::FloraInstanceTransform::Rotate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814dda70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Rotate", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.RotateAround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::MA::Flora::FloraInstanceTransform::RotateAround)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x1814dd260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"RotateAround", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.RotateAround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceTransform::*)(::UnityEngine::Transform*, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::MA::Flora::FloraInstanceTransform::RotateAround)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1814dd0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"RotateAround", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.RotateX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceTransform::*)(float_t)>(&::MA::Flora::FloraInstanceTransform::RotateX)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814dd640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"RotateX", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.RotateY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceTransform::*)(float_t)>(&::MA::Flora::FloraInstanceTransform::RotateY)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814dd730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"RotateY", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.RotateZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceTransform::*)(float_t)>(&::MA::Flora::FloraInstanceTransform::RotateZ)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814dd830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"RotateZ", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.LookAtPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::LookAtPoint)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814dcfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"LookAtPoint", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.LookAtDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraInstanceTransform::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::LookAtDirection)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814dcf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"LookAtDirection", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.HasNonUniformScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraInstanceTransform::*)(float_t)>(&::MA::Flora::FloraInstanceTransform::HasNonUniformScale)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814dbfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"HasNonUniformScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.GetMaximumAxisScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::FloraInstanceTransform::*)()>(&::MA::Flora::FloraInstanceTransform::GetMaximumAxisScale)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814dbf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"GetMaximumAxisScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.ClampMinimumScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceTransform::*)(float_t)>(&::MA::Flora::FloraInstanceTransform::ClampMinimumScale)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814dbbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"ClampMinimumScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.GetScaleReciprocalSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, float_t)>(&::MA::Flora::FloraInstanceTransform::GetScaleReciprocalSafe)> {
  constexpr static std::size_t size = 0xd30;
  constexpr static std::size_t addrs = 0x1814e4f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"GetScaleReciprocalSafe", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.ToMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (::MA::Flora::FloraInstanceTransform::*)()>(&::MA::Flora::FloraInstanceTransform::ToMatrix)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181464f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"ToMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.ToMatrixNoScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (::MA::Flora::FloraInstanceTransform::*)()>(&::MA::Flora::FloraInstanceTransform::ToMatrixNoScale)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814ddd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"ToMatrixNoScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.ToInverseMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (::MA::Flora::FloraInstanceTransform::*)()>(&::MA::Flora::FloraInstanceTransform::ToInverseMatrix)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814ddb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"ToInverseMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.ToLocalToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraInstanceTransform::*)()>(&::MA::Flora::FloraInstanceTransform::ToLocalToWorld)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1814785e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"ToLocalToWorld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.ToLocalToWorldNoScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraInstanceTransform::*)()>(&::MA::Flora::FloraInstanceTransform::ToLocalToWorldNoScale)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814ddc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"ToLocalToWorldNoScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.ToLocalToWorldMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraInstanceTransform::*)()>(&::MA::Flora::FloraInstanceTransform::ToLocalToWorldMatrix)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814ddbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"ToLocalToWorldMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraInstanceTransform::*)(::MA::Flora::FloraInstanceTransform)>(&::MA::Flora::FloraInstanceTransform::Equals)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x180645f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraInstanceTransform::*)(::System::Object*)>(&::MA::Flora::FloraInstanceTransform::Equals)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814e4c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceTransform>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::FloraInstanceTransform::*)()>(&::MA::Flora::FloraInstanceTransform::GetHashCode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814dbe60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceTransform>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::FloraInstanceTransform::*)()>(&::MA::Flora::FloraInstanceTransform::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814ddd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceTransform>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (*)(::MA::Flora::FloraInstanceTransform, ::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::op_Addition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814de840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"op_Addition", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.op_Subtraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (*)(::MA::Flora::FloraInstanceTransform, ::Unity::Mathematics::float3)>(&::MA::Flora::FloraInstanceTransform::op_Subtraction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814e5d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::FloraInstanceTransform, ::MA::Flora::FloraInstanceTransform)>(&::MA::Flora::FloraInstanceTransform::op_Equality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814e5d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceTransform.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::FloraInstanceTransform, ::MA::Flora::FloraInstanceTransform)>(&::MA::Flora::FloraInstanceTransform::op_Inequality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814e5d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraInstanceTransform::setStaticF_Identity(::MA::Flora::FloraInstanceTransform  value)  {
::cordl_internals::setStaticField<::MA::Flora::FloraInstanceTransform, "Identity", ::MA::Flora::FloraInstanceTransform>(std::forward<::MA::Flora::FloraInstanceTransform>(value));
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::getStaticF_Identity()  {
return ::cordl_internals::getStaticField<::MA::Flora::FloraInstanceTransform, "Identity", ::MA::Flora::FloraInstanceTransform>();
}
inline float_t MA::Flora::FloraInstanceTransform::get_ScaleDeterminant()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"get_ScaleDeterminant", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void MA::Flora::FloraInstanceTransform::_ctor(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, scale);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::FromMatrix(::Unity::Mathematics::float4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"FromMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(nullptr, ___internal_method, matrix);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::FromPositionRotation(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"FromPositionRotation", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(nullptr, ___internal_method, position, rotation);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::FromPositionScale(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"FromPositionScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(nullptr, ___internal_method, position, scale);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::FromPositionRotationScale(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"FromPositionRotationScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(nullptr, ___internal_method, position, rotation, scale);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::FromPosition(::Unity::Mathematics::float3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"FromPosition", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(nullptr, ___internal_method, position);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::FromPosition(float_t  x, float_t  y, float_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"FromPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(nullptr, ___internal_method, x, y, z);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::FromRotation(::Unity::Mathematics::quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"FromRotation", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(nullptr, ___internal_method, rotation);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::FromScale(::Unity::Mathematics::float3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"FromScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(nullptr, ___internal_method, scale);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::FromUnityTransform(::UnityEngine::Transform*  unityTransform, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"FromUnityTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(nullptr, ___internal_method, unityTransform, space);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraInstanceTransform::Right()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Right", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraInstanceTransform::Up()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Up", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraInstanceTransform::Forward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Forward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::Transform(::MA::Flora::FloraInstanceTransform  instanceTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Transform", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(*this, ___internal_method, instanceTransform);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::InverseTransform(::MA::Flora::FloraInstanceTransform  instanceTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"InverseTransform", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(*this, ___internal_method, instanceTransform);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::Inverse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Inverse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(*this, ___internal_method);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::WithPosition(::Unity::Mathematics::float3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"WithPosition", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(*this, ___internal_method, position);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::WithRotation(::Unity::Mathematics::quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"WithRotation", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(*this, ___internal_method, rotation);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::WithScale(::Unity::Mathematics::float3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"WithScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(*this, ___internal_method, scale);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraInstanceTransform::TransformPoint(::Unity::Mathematics::float3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"TransformPoint", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, point);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraInstanceTransform::InverseTransformPoint(::Unity::Mathematics::float3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"InverseTransformPoint", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, point);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraInstanceTransform::TransformDirection(::Unity::Mathematics::float3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"TransformDirection", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, direction);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraInstanceTransform::InverseTransformDirection(::Unity::Mathematics::float3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"InverseTransformDirection", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, direction);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraInstanceTransform::TransformVector(::Unity::Mathematics::float3  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"TransformVector", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, vector);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraInstanceTransform::InverseTransformVector(::Unity::Mathematics::float3  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"InverseTransformVector", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, vector);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraInstanceTransform::TransformNormal(::Unity::Mathematics::float3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"TransformNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, normal);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraInstanceTransform::InverseTransformNormal(::Unity::Mathematics::float3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"InverseTransformNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, normal);
}
inline ::UnityEngine::Ray MA::Flora::FloraInstanceTransform::TransformRay(::UnityEngine::Ray  ray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"TransformRay", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(*this, ___internal_method, ray);
}
inline ::UnityEngine::Ray MA::Flora::FloraInstanceTransform::InverseTransformRay(::UnityEngine::Ray  ray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"InverseTransformRay", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(*this, ___internal_method, ray);
}
inline ::Unity::Mathematics::quaternion MA::Flora::FloraInstanceTransform::TransformRotation(::Unity::Mathematics::quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"TransformRotation", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(*this, ___internal_method, rotation);
}
inline ::Unity::Mathematics::quaternion MA::Flora::FloraInstanceTransform::InverseTransformRotation(::Unity::Mathematics::quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"InverseTransformRotation", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(*this, ___internal_method, rotation);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraInstanceTransform::TransformScale(::Unity::Mathematics::float3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"TransformScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, scale);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraInstanceTransform::InverseTransformScale(::Unity::Mathematics::float3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"InverseTransformScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, scale);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraInstanceTransform::InverseTransformScaleSafe(::Unity::Mathematics::float3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"InverseTransformScaleSafe", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, scale);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::Translate(::Unity::Mathematics::float3  translation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Translate", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(*this, ___internal_method, translation);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::ApplyScale(::Unity::Mathematics::float3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"ApplyScale", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(*this, ___internal_method, scale);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::Rotate(::Unity::Mathematics::quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Rotate", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(*this, ___internal_method, rotation);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::Rotate(::Unity::Mathematics::float3  eulers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Rotate", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(*this, ___internal_method, eulers);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::Rotate(::Unity::Mathematics::float3  axis, float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Rotate", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(*this, ___internal_method, axis, angle);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::RotateAround(::Unity::Mathematics::float3  point, ::Unity::Mathematics::float3  axis, float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"RotateAround", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(*this, ___internal_method, point, axis, angle);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::RotateAround(::UnityEngine::Transform*  parent, ::Unity::Mathematics::float3  point, ::Unity::Mathematics::float3  axis, float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"RotateAround", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(*this, ___internal_method, parent, point, axis, angle);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::RotateX(float_t  angleRadians)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"RotateX", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(*this, ___internal_method, angleRadians);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::RotateY(float_t  angleRadians)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"RotateY", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(*this, ___internal_method, angleRadians);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::RotateZ(float_t  angleRadians)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"RotateZ", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(*this, ___internal_method, angleRadians);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::LookAtPoint(::Unity::Mathematics::float3  target, ::Unity::Mathematics::float3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"LookAtPoint", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(*this, ___internal_method, target, up);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::LookAtDirection(::Unity::Mathematics::float3  forward, ::Unity::Mathematics::float3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"LookAtDirection", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(*this, ___internal_method, forward, up);
}
inline bool MA::Flora::FloraInstanceTransform::HasNonUniformScale(float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"HasNonUniformScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, tolerance);
}
inline float_t MA::Flora::FloraInstanceTransform::GetMaximumAxisScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"GetMaximumAxisScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void MA::Flora::FloraInstanceTransform::ClampMinimumScale(float_t  minimumScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"ClampMinimumScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, minimumScale);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraInstanceTransform::GetScaleReciprocalSafe(::Unity::Mathematics::float3  scale, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"GetScaleReciprocalSafe", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, scale, tolerance);
}
inline ::Unity::Mathematics::float4x4 MA::Flora::FloraInstanceTransform::ToMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"ToMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4x4 MA::Flora::FloraInstanceTransform::ToMatrixNoScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"ToMatrixNoScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float4x4 MA::Flora::FloraInstanceTransform::ToInverseMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"ToInverseMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(*this, ___internal_method);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraInstanceTransform::ToLocalToWorld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"ToLocalToWorld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraInstanceTransform::ToLocalToWorldNoScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"ToLocalToWorldNoScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraInstanceTransform::ToLocalToWorldMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"ToLocalToWorldMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(*this, ___internal_method);
}
inline bool MA::Flora::FloraInstanceTransform::Equals(::MA::Flora::FloraInstanceTransform  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::FloraInstanceTransform::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceTransform>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t MA::Flora::FloraInstanceTransform::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceTransform>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW MA::Flora::FloraInstanceTransform::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceTransform>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::op_Addition(::MA::Flora::FloraInstanceTransform  lhs, ::Unity::Mathematics::float3  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"op_Addition", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(nullptr, ___internal_method, lhs, rhs);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraInstanceTransform::op_Subtraction(::MA::Flora::FloraInstanceTransform  lhs, ::Unity::Mathematics::float3  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(nullptr, ___internal_method, lhs, rhs);
}
inline bool MA::Flora::FloraInstanceTransform::op_Equality(::MA::Flora::FloraInstanceTransform  lhs, ::MA::Flora::FloraInstanceTransform  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool MA::Flora::FloraInstanceTransform::op_Inequality(::MA::Flora::FloraInstanceTransform  lhs, ::MA::Flora::FloraInstanceTransform  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceTransform>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::FloraInstanceTransform>"
constexpr  MA::Flora::FloraInstanceTransform::operator ::System::IEquatable_1<::MA::Flora::FloraInstanceTransform>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::FloraInstanceTransform>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::FloraInstanceTransform>"
constexpr ::System::IEquatable_1<::MA::Flora::FloraInstanceTransform>* MA::Flora::FloraInstanceTransform::i___System__IEquatable_1___MA__Flora__FloraInstanceTransform_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::FloraInstanceTransform>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Rotation", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "Scale", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraInstanceTransform::FloraInstanceTransform(::Unity::Mathematics::float3  Position, ::Unity::Mathematics::quaternion  Rotation, ::Unity::Mathematics::float3  Scale) noexcept  {
this->Position = Position;
this->Rotation = Rotation;
this->Scale = Scale;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraInstanceTransform::FloraInstanceTransform()   {
}
