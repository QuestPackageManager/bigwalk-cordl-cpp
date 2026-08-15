#pragma once
// IWYU pragma private; include "UnityEngine/Matrix4x4.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__FrustumPlanes_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Matrix4x4.GetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Matrix4x4::*)()>(&::UnityEngine::Matrix4x4::GetRotation)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182265ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"GetRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.GetLossyScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Matrix4x4::*)()>(&::UnityEngine::Matrix4x4::GetLossyScale)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182261d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"GetLossyScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.DecomposeProjection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::FrustumPlanes (::UnityEngine::Matrix4x4::*)()>(&::UnityEngine::Matrix4x4::DecomposeProjection)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822657b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"DecomposeProjection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.get_rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Matrix4x4::*)()>(&::UnityEngine::Matrix4x4::get_rotation)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182265ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"get_rotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.get_lossyScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Matrix4x4::*)()>(&::UnityEngine::Matrix4x4::get_lossyScale)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182261d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"get_lossyScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.get_decomposeProjection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::FrustumPlanes (::UnityEngine::Matrix4x4::*)()>(&::UnityEngine::Matrix4x4::get_decomposeProjection)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822657b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"get_decomposeProjection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Internal_TRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Matrix4x4::Internal_TRS)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182265c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_TRS", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.TRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::UnityEngine::Matrix4x4::TRS)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182265c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"TRS", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Internal_SetTRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Matrix4x4::Internal_SetTRS)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182265be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_SetTRS", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.SetTRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Matrix4x4::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::UnityEngine::Matrix4x4::SetTRS)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182266010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"SetTRS", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Internal_Inverse3DAffine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Matrix4x4::Internal_Inverse3DAffine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182265b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_Inverse3DAffine", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Inverse3DAffine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Matrix4x4, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Matrix4x4::Inverse3DAffine)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182265c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Inverse3DAffine", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Inverse3DAffine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Matrix4x4::Inverse3DAffine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182265b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Inverse3DAffine", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Internal_Inverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Matrix4x4::Internal_Inverse)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182265b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_Inverse", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Inverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::Matrix4x4::Inverse)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182265b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Inverse", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.get_inverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Matrix4x4::*)()>(&::UnityEngine::Matrix4x4::get_inverse)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182265b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"get_inverse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Internal_Transpose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Matrix4x4::Internal_Transpose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182265c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_Transpose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Transpose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::Matrix4x4::Transpose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182265c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Transpose", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.get_transpose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Matrix4x4::*)()>(&::UnityEngine::Matrix4x4::get_transpose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182265c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"get_transpose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Ortho
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(float_t, float_t, float_t, float_t, float_t, float_t)>(&::UnityEngine::Matrix4x4::Ortho)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182265da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Ortho", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Perspective
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::Matrix4x4::Perspective)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182265e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Perspective", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Internal_LookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Matrix4x4::Internal_LookAt)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182265ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_LookAt", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.LookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Matrix4x4::LookAt)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182265ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"LookAt", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Frustum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(float_t, float_t, float_t, float_t, float_t, float_t)>(&::UnityEngine::Matrix4x4::Frustum)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182265970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Frustum", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Frustum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::FrustumPlanes)>(&::UnityEngine::Matrix4x4::Frustum)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182265910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Frustum", {}, {::i2c::type_of<::UnityEngine::FrustumPlanes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Matrix4x4::*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4)>(&::UnityEngine::Matrix4x4::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1822661e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Matrix4x4::*)(int32_t, int32_t)>(&::UnityEngine::Matrix4x4::get_Item)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822662c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Matrix4x4::*)(int32_t, int32_t, float_t)>(&::UnityEngine::Matrix4x4::set_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182266530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Matrix4x4::*)(int32_t)>(&::UnityEngine::Matrix4x4::get_Item)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1805fbfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Matrix4x4::*)(int32_t, float_t)>(&::UnityEngine::Matrix4x4::set_Item)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1805fc210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Matrix4x4::*)()>(&::UnityEngine::Matrix4x4::GetHashCode)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x180c4d930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                    {::i2c::class_of<::UnityEngine::Matrix4x4>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Matrix4x4::*)(::System::Object*)>(&::UnityEngine::Matrix4x4::Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182265820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                    {::i2c::class_of<::UnityEngine::Matrix4x4>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Matrix4x4::*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::Matrix4x4::Equals)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180646850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Matrix4x4::*)(::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Matrix4x4::Equals)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180646850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Equals", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Matrix4x4::op_Multiply)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182266400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"op_Multiply", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector4)>(&::UnityEngine::Matrix4x4::op_Multiply)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181f019e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"op_Multiply", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.GetColumn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Matrix4x4::*)(int32_t)>(&::UnityEngine::Matrix4x4::GetColumn)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180646960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"GetColumn", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.GetRow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Matrix4x4::*)(int32_t)>(&::UnityEngine::Matrix4x4::GetRow)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18201bfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"GetRow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.GetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Matrix4x4::*)()>(&::UnityEngine::Matrix4x4::GetPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18142a650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"GetPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.SetColumn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Matrix4x4::*)(int32_t, ::UnityEngine::Vector4)>(&::UnityEngine::Matrix4x4::SetColumn)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182265ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"SetColumn", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.SetRow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Matrix4x4::*)(int32_t, ::UnityEngine::Vector4)>(&::UnityEngine::Matrix4x4::SetRow)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182265f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"SetRow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.MultiplyPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Matrix4x4::*)(::UnityEngine::Vector3)>(&::UnityEngine::Matrix4x4::MultiplyPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1813fe7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"MultiplyPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.MultiplyPoint3x4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Matrix4x4::*)(::UnityEngine::Vector3)>(&::UnityEngine::Matrix4x4::MultiplyPoint3x4)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802d5480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"MultiplyPoint3x4", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.MultiplyVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Matrix4x4::*)(::UnityEngine::Vector3)>(&::UnityEngine::Matrix4x4::MultiplyVector)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802d54e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"MultiplyVector", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Vector3)>(&::UnityEngine::Matrix4x4::Scale)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182265e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Scale", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Translate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Vector3)>(&::UnityEngine::Matrix4x4::Translate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182266090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Translate", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Rotate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Quaternion)>(&::UnityEngine::Matrix4x4::Rotate)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1802d5540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Rotate", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.get_zero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)()>(&::UnityEngine::Matrix4x4::get_zero)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1820dfb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"get_zero", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.get_identity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)()>(&::UnityEngine::Matrix4x4::get_identity)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x182266310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"get_identity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Matrix4x4::*)()>(&::UnityEngine::Matrix4x4::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180c4dae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                    {::i2c::class_of<::UnityEngine::Matrix4x4>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Matrix4x4::*)(::StringW, ::System::IFormatProvider*)>(&::UnityEngine::Matrix4x4::ToString)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x180c4daf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.GetRotation_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Matrix4x4::GetRotation_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182265aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"GetRotation_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.GetLossyScale_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Matrix4x4::GetLossyScale_Injected)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182265a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"GetLossyScale_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.DecomposeProjection_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::FrustumPlanes>)>(&::UnityEngine::Matrix4x4::DecomposeProjection_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822657a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"DecomposeProjection_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::FrustumPlanes>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Internal_TRS_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Matrix4x4::Internal_TRS_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182265bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_TRS_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Internal_Inverse_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Matrix4x4::Internal_Inverse_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182265b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_Inverse_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Internal_Transpose_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Matrix4x4::Internal_Transpose_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182265c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_Transpose_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Ortho_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t, float_t, float_t, float_t, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Matrix4x4::Ortho_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182265d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Ortho_Injected", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Perspective_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t, float_t, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Matrix4x4::Perspective_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182265e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Perspective_Injected", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Internal_LookAt_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Matrix4x4::Internal_LookAt_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182265b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_LookAt_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Matrix4x4.Frustum_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t, float_t, float_t, float_t, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Matrix4x4::Frustum_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182265900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Frustum_Injected", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Matrix4x4::setStaticF_zeroMatrix(::UnityEngine::Matrix4x4  value)  {
::cordl_internals::setStaticField<::UnityEngine::Matrix4x4, "zeroMatrix", ::UnityEngine::Matrix4x4>(std::forward<::UnityEngine::Matrix4x4>(value));
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::getStaticF_zeroMatrix()  {
return ::cordl_internals::getStaticField<::UnityEngine::Matrix4x4, "zeroMatrix", ::UnityEngine::Matrix4x4>();
}
inline void UnityEngine::Matrix4x4::setStaticF_identityMatrix(::UnityEngine::Matrix4x4  value)  {
::cordl_internals::setStaticField<::UnityEngine::Matrix4x4, "identityMatrix", ::UnityEngine::Matrix4x4>(std::forward<::UnityEngine::Matrix4x4>(value));
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::getStaticF_identityMatrix()  {
return ::cordl_internals::getStaticField<::UnityEngine::Matrix4x4, "identityMatrix", ::UnityEngine::Matrix4x4>();
}
inline ::UnityEngine::Quaternion UnityEngine::Matrix4x4::GetRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"GetRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Matrix4x4::GetLossyScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"GetLossyScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::FrustumPlanes UnityEngine::Matrix4x4::DecomposeProjection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"DecomposeProjection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::FrustumPlanes>(*this, ___internal_method);
}
inline ::UnityEngine::Quaternion UnityEngine::Matrix4x4::get_rotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"get_rotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Matrix4x4::get_lossyScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"get_lossyScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::FrustumPlanes UnityEngine::Matrix4x4::get_decomposeProjection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"get_decomposeProjection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::FrustumPlanes>(*this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::Internal_TRS(::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  q, ::by_ref<::UnityEngine::Vector3>  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_TRS", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, pos, q, s);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::TRS(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  q, ::UnityEngine::Vector3  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"TRS", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, pos, q, s);
}
inline void UnityEngine::Matrix4x4::Internal_SetTRS(::by_ref<::UnityEngine::Matrix4x4>  m, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  q, ::by_ref<::UnityEngine::Vector3>  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_SetTRS", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, pos, q, s);
}
inline void UnityEngine::Matrix4x4::SetTRS(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  q, ::UnityEngine::Vector3  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"SetTRS", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, q, s);
}
inline bool UnityEngine::Matrix4x4::Internal_Inverse3DAffine(::by_ref<::UnityEngine::Matrix4x4>  input, ::by_ref<::UnityEngine::Matrix4x4>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_Inverse3DAffine", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, result);
}
inline bool UnityEngine::Matrix4x4::Inverse3DAffine(::UnityEngine::Matrix4x4  input, ::by_ref<::UnityEngine::Matrix4x4>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Inverse3DAffine", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, result);
}
inline bool UnityEngine::Matrix4x4::Inverse3DAffine(::by_ref<::UnityEngine::Matrix4x4>  input, ::by_ref<::UnityEngine::Matrix4x4>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Inverse3DAffine", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, result);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::Internal_Inverse(::by_ref<::UnityEngine::Matrix4x4>  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_Inverse", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, m);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::Inverse(::UnityEngine::Matrix4x4  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Inverse", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, m);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::get_inverse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"get_inverse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(*this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::Internal_Transpose(::by_ref<::UnityEngine::Matrix4x4>  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_Transpose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, m);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::Transpose(::UnityEngine::Matrix4x4  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Transpose", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, m);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::get_transpose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"get_transpose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(*this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::Ortho(float_t  left, float_t  right, float_t  bottom, float_t  top, float_t  zNear, float_t  zFar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Ortho", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, left, right, bottom, top, zNear, zFar);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::Perspective(float_t  fov, float_t  aspect, float_t  zNear, float_t  zFar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Perspective", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, fov, aspect, zNear, zFar);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::Internal_LookAt(::by_ref<::UnityEngine::Vector3>  from, ::by_ref<::UnityEngine::Vector3>  to, ::by_ref<::UnityEngine::Vector3>  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_LookAt", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, from, to, up);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::LookAt(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"LookAt", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, from, to, up);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::Frustum(float_t  left, float_t  right, float_t  bottom, float_t  top, float_t  zNear, float_t  zFar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Frustum", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, left, right, bottom, top, zNear, zFar);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::Frustum(::UnityEngine::FrustumPlanes  fp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Frustum", {}, {::i2c::type_of<::UnityEngine::FrustumPlanes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, fp);
}
inline void UnityEngine::Matrix4x4::_ctor(::UnityEngine::Vector4  column0, ::UnityEngine::Vector4  column1, ::UnityEngine::Vector4  column2, ::UnityEngine::Vector4  column3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, column0, column1, column2, column3);
}
inline float_t UnityEngine::Matrix4x4::get_Item(int32_t  row, int32_t  column)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, row, column);
}
inline void UnityEngine::Matrix4x4::set_Item(int32_t  row, int32_t  column, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, row, column, value);
}
inline float_t UnityEngine::Matrix4x4::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, index);
}
inline void UnityEngine::Matrix4x4::set_Item(int32_t  index, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline int32_t UnityEngine::Matrix4x4::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Matrix4x4>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Matrix4x4::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Matrix4x4>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Matrix4x4::Equals(::UnityEngine::Matrix4x4  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Matrix4x4::Equals(::by_ref<::UnityEngine::Matrix4x4>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Equals", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::op_Multiply(::UnityEngine::Matrix4x4  lhs, ::UnityEngine::Matrix4x4  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"op_Multiply", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, lhs, rhs);
}
inline ::UnityEngine::Vector4 UnityEngine::Matrix4x4::op_Multiply(::UnityEngine::Matrix4x4  lhs, ::UnityEngine::Vector4  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"op_Multiply", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, lhs, vector);
}
inline ::UnityEngine::Vector4 UnityEngine::Matrix4x4::GetColumn(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"GetColumn", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(*this, ___internal_method, index);
}
inline ::UnityEngine::Vector4 UnityEngine::Matrix4x4::GetRow(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"GetRow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(*this, ___internal_method, index);
}
inline ::UnityEngine::Vector3 UnityEngine::Matrix4x4::GetPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"GetPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::Matrix4x4::SetColumn(int32_t  index, ::UnityEngine::Vector4  column)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"SetColumn", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, column);
}
inline void UnityEngine::Matrix4x4::SetRow(int32_t  index, ::UnityEngine::Vector4  row)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"SetRow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, row);
}
inline ::UnityEngine::Vector3 UnityEngine::Matrix4x4::MultiplyPoint(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"MultiplyPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, point);
}
inline ::UnityEngine::Vector3 UnityEngine::Matrix4x4::MultiplyPoint3x4(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"MultiplyPoint3x4", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, point);
}
inline ::UnityEngine::Vector3 UnityEngine::Matrix4x4::MultiplyVector(::UnityEngine::Vector3  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"MultiplyVector", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, vector);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::Scale(::UnityEngine::Vector3  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Scale", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, vector);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::Translate(::UnityEngine::Vector3  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Translate", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, vector);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::Rotate(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Rotate", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, q);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::get_zero()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"get_zero", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::get_identity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"get_identity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Matrix4x4::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Matrix4x4>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Matrix4x4::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline void UnityEngine::Matrix4x4::GetRotation_Injected(::by_ref<::UnityEngine::Matrix4x4>  _unity_self, ::by_ref<::UnityEngine::Quaternion>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"GetRotation_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Matrix4x4::GetLossyScale_Injected(::by_ref<::UnityEngine::Matrix4x4>  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"GetLossyScale_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Matrix4x4::DecomposeProjection_Injected(::by_ref<::UnityEngine::Matrix4x4>  _unity_self, ::by_ref<::UnityEngine::FrustumPlanes>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"DecomposeProjection_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::FrustumPlanes>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Matrix4x4::Internal_TRS_Injected(::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  q, ::by_ref<::UnityEngine::Vector3>  s, ::by_ref<::UnityEngine::Matrix4x4>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_TRS_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pos, q, s, ret);
}
inline void UnityEngine::Matrix4x4::Internal_Inverse_Injected(::by_ref<::UnityEngine::Matrix4x4>  m, ::by_ref<::UnityEngine::Matrix4x4>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_Inverse_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, ret);
}
inline void UnityEngine::Matrix4x4::Internal_Transpose_Injected(::by_ref<::UnityEngine::Matrix4x4>  m, ::by_ref<::UnityEngine::Matrix4x4>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_Transpose_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, ret);
}
inline void UnityEngine::Matrix4x4::Ortho_Injected(float_t  left, float_t  right, float_t  bottom, float_t  top, float_t  zNear, float_t  zFar, ::by_ref<::UnityEngine::Matrix4x4>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Ortho_Injected", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, left, right, bottom, top, zNear, zFar, ret);
}
inline void UnityEngine::Matrix4x4::Perspective_Injected(float_t  fov, float_t  aspect, float_t  zNear, float_t  zFar, ::by_ref<::UnityEngine::Matrix4x4>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Perspective_Injected", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fov, aspect, zNear, zFar, ret);
}
inline void UnityEngine::Matrix4x4::Internal_LookAt_Injected(::by_ref<::UnityEngine::Vector3>  from, ::by_ref<::UnityEngine::Vector3>  to, ::by_ref<::UnityEngine::Vector3>  up, ::by_ref<::UnityEngine::Matrix4x4>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Internal_LookAt_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, up, ret);
}
inline void UnityEngine::Matrix4x4::Frustum_Injected(float_t  left, float_t  right, float_t  bottom, float_t  top, float_t  zNear, float_t  zFar, ::by_ref<::UnityEngine::Matrix4x4>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Matrix4x4>(),
                        {"Frustum_Injected", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, left, right, bottom, top, zNear, zFar, ret);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Matrix4x4>"
constexpr  UnityEngine::Matrix4x4::operator ::System::IEquatable_1<::UnityEngine::Matrix4x4>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Matrix4x4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Matrix4x4>"
constexpr ::System::IEquatable_1<::UnityEngine::Matrix4x4>* UnityEngine::Matrix4x4::i___System__IEquatable_1___UnityEngine__Matrix4x4_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Matrix4x4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  UnityEngine::Matrix4x4::operator ::System::IFormattable*()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* UnityEngine::Matrix4x4::i___System__IFormattable()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m00", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m10", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m20", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m30", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m01", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m11", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m21", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m31", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m02", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m12", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m22", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m32", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m03", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m13", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m23", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m33", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Matrix4x4::Matrix4x4(float_t  m00, float_t  m10, float_t  m20, float_t  m30, float_t  m01, float_t  m11, float_t  m21, float_t  m31, float_t  m02, float_t  m12, float_t  m22, float_t  m32, float_t  m03, float_t  m13, float_t  m23, float_t  m33) noexcept  {
this->m00 = m00;
this->m10 = m10;
this->m20 = m20;
this->m30 = m30;
this->m01 = m01;
this->m11 = m11;
this->m21 = m21;
this->m31 = m31;
this->m02 = m02;
this->m12 = m12;
this->m22 = m22;
this->m32 = m32;
this->m03 = m03;
this->m13 = m13;
this->m23 = m23;
this->m33 = m33;
}
// Ctor Parameters []
constexpr ::UnityEngine::Matrix4x4::Matrix4x4()   {
}
