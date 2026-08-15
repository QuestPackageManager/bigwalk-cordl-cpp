#pragma once
// IWYU pragma private; include "UnityEngine/Vector2.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Vector2.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Vector2::*)(int32_t)>(&::UnityEngine::Vector2::get_Item)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18201c0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Vector2::*)(int32_t, float_t)>(&::UnityEngine::Vector2::set_Item)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18226cd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Vector2::*)(float_t, float_t)>(&::UnityEngine::Vector2::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802d5750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t)>(&::UnityEngine::Vector2::Lerp)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18227b360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.LerpUnclamped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t)>(&::UnityEngine::Vector2::LerpUnclamped)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181eff480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"LerpUnclamped", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Vector2::Scale)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181952b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Scale", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.Normalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Vector2::Normalize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18227b450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Normalize", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.Normalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Vector2::*)()>(&::UnityEngine::Vector2::Normalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818d65c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Normalize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.get_normalized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Vector2::*)()>(&::UnityEngine::Vector2::get_normalized)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18227b450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_normalized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Vector2::*)()>(&::UnityEngine::Vector2::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18045a630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Vector2>(),
                    {::i2c::class_of<::UnityEngine::Vector2>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Vector2::*)(::StringW, ::System::IFormatProvider*)>(&::UnityEngine::Vector2::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18045a6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Vector2::*)()>(&::UnityEngine::Vector2::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1807854f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Vector2>(),
                    {::i2c::class_of<::UnityEngine::Vector2>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Vector2::*)(::System::Object*)>(&::UnityEngine::Vector2::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180651b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Vector2>(),
                    {::i2c::class_of<::UnityEngine::Vector2>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Vector2::*)(::UnityEngine::Vector2)>(&::UnityEngine::Vector2::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f60a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Vector2::*)(::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Vector2::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180651ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Equals", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.Dot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Vector2::Dot)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819095a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Dot", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.Dot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Vector2::Dot)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18227b320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Dot", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.get_magnitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Vector2::*)()>(&::UnityEngine::Vector2::get_magnitude)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180303b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_magnitude", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.get_sqrMagnitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Vector2::*)()>(&::UnityEngine::Vector2::get_sqrMagnitude)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f60d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_sqrMagnitude", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.Angle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Vector2::Angle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18227b210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Angle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.Angle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Vector2::Angle)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18227b150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Angle", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.SignedAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Vector2::SignedAngle)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18046d0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"SignedAngle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.Distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Vector2::Distance)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18227b2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Distance", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.ClampMagnitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t)>(&::UnityEngine::Vector2::ClampMagnitude)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802f5ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"ClampMagnitude", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.Min
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Vector2::Min)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18227b410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Min", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Vector2::Max)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18227b3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Max", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Vector2::op_Addition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181952a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Addition", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.op_Subtraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Vector2::op_Subtraction)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181952980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Vector2::op_Multiply)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181952b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Multiply", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.op_Division
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Vector2::op_Division)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819525f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Division", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.op_UnaryNegation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::UnityEngine::Vector2::op_UnaryNegation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181a51a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_UnaryNegation", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t)>(&::UnityEngine::Vector2::op_Multiply)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181952af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Multiply", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(float_t, ::UnityEngine::Vector2)>(&::UnityEngine::Vector2::op_Multiply)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181a52080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Multiply", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.op_Division
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t)>(&::UnityEngine::Vector2::op_Division)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181952ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Division", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Vector2::op_Equality)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18227b670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Vector2::op_Inequality)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18227b6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.op_Implicit___UnityEngine__Vector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector3)>(&::UnityEngine::Vector2::op_Implicit___UnityEngine__Vector2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180646ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.op_Implicit___UnityEngine__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2)>(&::UnityEngine::Vector2::op_Implicit___UnityEngine__Vector3)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18227b6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.get_zero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::UnityEngine::Vector2::get_zero)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181aa7200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_zero", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.get_one
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::UnityEngine::Vector2::get_one)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18227b610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_one", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.get_up
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::UnityEngine::Vector2::get_up)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18227b650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_up", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.get_down
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::UnityEngine::Vector2::get_down)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18227b5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_down", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.get_left
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::UnityEngine::Vector2::get_left)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18227b5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_left", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.get_right
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::UnityEngine::Vector2::get_right)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18227b630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_right", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2.get_negativeInfinity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::UnityEngine::Vector2::get_negativeInfinity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18227b5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_negativeInfinity", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Vector2::setStaticF_zeroVector(::UnityEngine::Vector2  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2, "zeroVector", ::UnityEngine::Vector2>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::getStaticF_zeroVector()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "zeroVector", ::UnityEngine::Vector2>();
}
inline void UnityEngine::Vector2::setStaticF_oneVector(::UnityEngine::Vector2  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2, "oneVector", ::UnityEngine::Vector2>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::getStaticF_oneVector()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "oneVector", ::UnityEngine::Vector2>();
}
inline void UnityEngine::Vector2::setStaticF_upVector(::UnityEngine::Vector2  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2, "upVector", ::UnityEngine::Vector2>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::getStaticF_upVector()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "upVector", ::UnityEngine::Vector2>();
}
inline void UnityEngine::Vector2::setStaticF_downVector(::UnityEngine::Vector2  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2, "downVector", ::UnityEngine::Vector2>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::getStaticF_downVector()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "downVector", ::UnityEngine::Vector2>();
}
inline void UnityEngine::Vector2::setStaticF_leftVector(::UnityEngine::Vector2  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2, "leftVector", ::UnityEngine::Vector2>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::getStaticF_leftVector()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "leftVector", ::UnityEngine::Vector2>();
}
inline void UnityEngine::Vector2::setStaticF_rightVector(::UnityEngine::Vector2  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2, "rightVector", ::UnityEngine::Vector2>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::getStaticF_rightVector()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "rightVector", ::UnityEngine::Vector2>();
}
inline void UnityEngine::Vector2::setStaticF_positiveInfinityVector(::UnityEngine::Vector2  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2, "positiveInfinityVector", ::UnityEngine::Vector2>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::getStaticF_positiveInfinityVector()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "positiveInfinityVector", ::UnityEngine::Vector2>();
}
inline void UnityEngine::Vector2::setStaticF_negativeInfinityVector(::UnityEngine::Vector2  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2, "negativeInfinityVector", ::UnityEngine::Vector2>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::getStaticF_negativeInfinityVector()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "negativeInfinityVector", ::UnityEngine::Vector2>();
}
inline float_t UnityEngine::Vector2::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, index);
}
inline void UnityEngine::Vector2::set_Item(int32_t  index, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void UnityEngine::Vector2::_ctor(float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::Lerp(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::LerpUnclamped(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"LerpUnclamped", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a, b, t);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::Scale(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Scale", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::Normalize(::by_ref<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Normalize", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Vector2::Normalize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Normalize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::get_normalized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_normalized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Vector2::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Vector2>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Vector2::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline int32_t UnityEngine::Vector2::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Vector2>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Vector2::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Vector2>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Vector2::Equals(::UnityEngine::Vector2  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Vector2::Equals(::by_ref<::UnityEngine::Vector2>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Equals", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline float_t UnityEngine::Vector2::Dot(::UnityEngine::Vector2  lhs, ::UnityEngine::Vector2  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Dot", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lhs, rhs);
}
inline float_t UnityEngine::Vector2::Dot(::by_ref<::UnityEngine::Vector2>  lhs, ::by_ref<::UnityEngine::Vector2>  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Dot", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lhs, rhs);
}
inline float_t UnityEngine::Vector2::get_magnitude()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_magnitude", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::Vector2::get_sqrMagnitude()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_sqrMagnitude", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::Vector2::Angle(::UnityEngine::Vector2  from, ::UnityEngine::Vector2  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Angle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, from, to);
}
inline float_t UnityEngine::Vector2::Angle(::by_ref<::UnityEngine::Vector2>  from, ::by_ref<::UnityEngine::Vector2>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Angle", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, from, to);
}
inline float_t UnityEngine::Vector2::SignedAngle(::UnityEngine::Vector2  from, ::UnityEngine::Vector2  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"SignedAngle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, from, to);
}
inline float_t UnityEngine::Vector2::Distance(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Distance", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::ClampMagnitude(::UnityEngine::Vector2  vector, float_t  maxLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"ClampMagnitude", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, vector, maxLength);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::Min(::UnityEngine::Vector2  lhs, ::UnityEngine::Vector2  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Min", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::Max(::UnityEngine::Vector2  lhs, ::UnityEngine::Vector2  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"Max", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, lhs, rhs);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::op_Addition(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Addition", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::op_Subtraction(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::op_Multiply(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Multiply", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::op_Division(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Division", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::op_UnaryNegation(::UnityEngine::Vector2  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_UnaryNegation", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::op_Multiply(::UnityEngine::Vector2  a, float_t  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Multiply", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a, d);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::op_Multiply(float_t  d, ::UnityEngine::Vector2  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Multiply", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, d, a);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::op_Division(::UnityEngine::Vector2  a, float_t  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Division", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a, d);
}
inline bool UnityEngine::Vector2::op_Equality(::UnityEngine::Vector2  lhs, ::UnityEngine::Vector2  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::Vector2::op_Inequality(::UnityEngine::Vector2  lhs, ::UnityEngine::Vector2  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::op_Implicit___UnityEngine__Vector2(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 UnityEngine::Vector2::op_Implicit___UnityEngine__Vector3(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::get_zero()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_zero", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::get_one()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_one", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::get_up()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_up", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::get_down()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_down", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::get_left()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_left", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::get_right()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_right", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2::get_negativeInfinity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Vector2>(),
                        {"get_negativeInfinity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Vector2>"
constexpr  UnityEngine::Vector2::operator ::System::IEquatable_1<::UnityEngine::Vector2>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Vector2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Vector2>"
constexpr ::System::IEquatable_1<::UnityEngine::Vector2>* UnityEngine::Vector2::i___System__IEquatable_1___UnityEngine__Vector2_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Vector2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  UnityEngine::Vector2::operator ::System::IFormattable*()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* UnityEngine::Vector2::i___System__IFormattable()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Vector2::Vector2(float_t  x, float_t  y) noexcept  {
this->x = x;
this->y = y;
}
// Ctor Parameters []
constexpr ::UnityEngine::Vector2::Vector2()   {
}
