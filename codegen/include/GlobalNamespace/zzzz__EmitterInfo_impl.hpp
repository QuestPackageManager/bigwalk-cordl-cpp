#pragma once
// IWYU pragma private; include "GlobalNamespace/EmitterInfo.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__EmitterInfo_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EmitterInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EmitterInfo::*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::EmitterInfo::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803255b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EmitterInfo>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmitterInfo.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EmitterInfo (*)(::GlobalNamespace::EmitterInfo, float_t)>(&::GlobalNamespace::EmitterInfo::op_Multiply)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803256a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EmitterInfo>(),
                        {"op_Multiply", {}, {::i2c::type_of<::GlobalNamespace::EmitterInfo>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmitterInfo.op_Division
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EmitterInfo (*)(::GlobalNamespace::EmitterInfo, float_t)>(&::GlobalNamespace::EmitterInfo::op_Division)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180325650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EmitterInfo>(),
                        {"op_Division", {}, {::i2c::type_of<::GlobalNamespace::EmitterInfo>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmitterInfo.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EmitterInfo (*)(::GlobalNamespace::EmitterInfo, ::GlobalNamespace::EmitterInfo)>(&::GlobalNamespace::EmitterInfo::op_Addition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803255f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EmitterInfo>(),
                        {"op_Addition", {}, {::i2c::type_of<::GlobalNamespace::EmitterInfo>(), ::i2c::type_of<::GlobalNamespace::EmitterInfo>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EmitterInfo::_ctor(::UnityEngine::Vector3  direction, float_t  attenuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EmitterInfo>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, direction, attenuation);
}
inline ::GlobalNamespace::EmitterInfo GlobalNamespace::EmitterInfo::op_Multiply(::GlobalNamespace::EmitterInfo  a, float_t  multiplier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EmitterInfo>(),
                        {"op_Multiply", {}, {::i2c::type_of<::GlobalNamespace::EmitterInfo>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EmitterInfo>(nullptr, ___internal_method, a, multiplier);
}
inline ::GlobalNamespace::EmitterInfo GlobalNamespace::EmitterInfo::op_Division(::GlobalNamespace::EmitterInfo  a, float_t  divisor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EmitterInfo>(),
                        {"op_Division", {}, {::i2c::type_of<::GlobalNamespace::EmitterInfo>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EmitterInfo>(nullptr, ___internal_method, a, divisor);
}
inline ::GlobalNamespace::EmitterInfo GlobalNamespace::EmitterInfo::op_Addition(::GlobalNamespace::EmitterInfo  a, ::GlobalNamespace::EmitterInfo  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EmitterInfo>(),
                        {"op_Addition", {}, {::i2c::type_of<::GlobalNamespace::EmitterInfo>(), ::i2c::type_of<::GlobalNamespace::EmitterInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EmitterInfo>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "Direction", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Attenuation", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EmitterInfo::EmitterInfo(::UnityEngine::Vector3  Direction, float_t  Attenuation) noexcept  {
this->Direction = Direction;
this->Attenuation = Attenuation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EmitterInfo::EmitterInfo()   {
}
