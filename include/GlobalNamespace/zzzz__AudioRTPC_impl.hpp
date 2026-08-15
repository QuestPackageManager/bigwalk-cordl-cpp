#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRTPC.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCX_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCY_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioRTPC_XAxisType::AudioRTPC_XAxisType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioRTPC_XAxisType::AudioRTPC_XAxisType()   {
}
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::ListenerDistance{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::ScreenDistanceX{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::ScreenDistanceY{static_cast<int32_t>(0x14)};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::CameraDistance{static_cast<int32_t>(0x1e)};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::PlayerDistance{static_cast<int32_t>(0x28)};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::Distance{static_cast<int32_t>(0x32)};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::Speed{static_cast<int32_t>(0x3c)};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::OcclusionLevel{static_cast<int32_t>(0x46)};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::IntersectDistance{static_cast<int32_t>(0x5a)};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::RandomNumOnPlay{static_cast<int32_t>(0x5f)};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::VoiceBlock{static_cast<int32_t>(0x64)};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::Intensity{static_cast<int32_t>(0x6e)};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::Angle{static_cast<int32_t>(0x78)};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::Time{static_cast<int32_t>(0x82)};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::Elevation{static_cast<int32_t>(0x8c)};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::Scaler{static_cast<int32_t>(0x96)};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::FaderVol{static_cast<int32_t>(0xa0)};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::Spatial{static_cast<int32_t>(0xaa)};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType  GlobalNamespace::AudioRTPC_XAxisType::Outdoorness{static_cast<int32_t>(0xb4)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioRTPC_YAxisType::AudioRTPC_YAxisType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioRTPC_YAxisType::AudioRTPC_YAxisType()   {
}
constexpr ::GlobalNamespace::AudioRTPC_YAxisType  GlobalNamespace::AudioRTPC_YAxisType::Volume{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AudioRTPC_YAxisType  GlobalNamespace::AudioRTPC_YAxisType::Pitch{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::AudioRTPC_YAxisType  GlobalNamespace::AudioRTPC_YAxisType::Panning{static_cast<int32_t>(0x14)};
constexpr ::GlobalNamespace::AudioRTPC_YAxisType  GlobalNamespace::AudioRTPC_YAxisType::SpatialBlend{static_cast<int32_t>(0x1e)};
constexpr ::GlobalNamespace::AudioRTPC_YAxisType  GlobalNamespace::AudioRTPC_YAxisType::Spread{static_cast<int32_t>(0x28)};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPC._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRTPC::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::GlobalNamespace::AudioRTPC_YAxisType)>(&::GlobalNamespace::AudioRTPC::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18048c940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPC*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPC.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPCY (::GlobalNamespace::AudioRTPC::*)(::GlobalNamespace::AudioRTPCX)>(&::GlobalNamespace::AudioRTPC::GetValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18048c890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPC*>(),
                        {"GetValue", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCX>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPC.GetYDefaultValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::AudioRTPC_YAxisType)>(&::GlobalNamespace::AudioRTPC::GetYDefaultValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18048c910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPC*>(),
                        {"GetYDefaultValue", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRTPC.ClampYValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::AudioRTPC_YAxisType, float_t)>(&::GlobalNamespace::AudioRTPC::ClampYValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18048c810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPC*>(),
                        {"ClampYValue", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioRTPC_XAxisType& GlobalNamespace::AudioRTPC::__cordl_internal_get_XAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XAxis;
}
constexpr ::GlobalNamespace::AudioRTPC_XAxisType const& GlobalNamespace::AudioRTPC::__cordl_internal_get_XAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XAxis;
}
constexpr void GlobalNamespace::AudioRTPC::__cordl_internal_set_XAxis(::GlobalNamespace::AudioRTPC_XAxisType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XAxis = value;
}
constexpr ::GlobalNamespace::AudioRTPC_YAxisType& GlobalNamespace::AudioRTPC::__cordl_internal_get_YAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YAxis;
}
constexpr ::GlobalNamespace::AudioRTPC_YAxisType const& GlobalNamespace::AudioRTPC::__cordl_internal_get_YAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YAxis;
}
constexpr void GlobalNamespace::AudioRTPC::__cordl_internal_set_YAxis(::GlobalNamespace::AudioRTPC_YAxisType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___YAxis = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::AudioRTPC::__cordl_internal_get_Curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Curve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::AudioRTPC::__cordl_internal_get_Curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Curve;
}
constexpr void GlobalNamespace::AudioRTPC::__cordl_internal_set_Curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Curve = value;
}
inline void GlobalNamespace::AudioRTPC::_ctor(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::GlobalNamespace::AudioRTPC_YAxisType  yType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPC*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xType, yType);
}
inline ::GlobalNamespace::AudioRTPCY GlobalNamespace::AudioRTPC::GetValue(::GlobalNamespace::AudioRTPCX  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPC*>(),
                        {"GetValue", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCX>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPCY>(this, ___internal_method, x);
}
inline float_t GlobalNamespace::AudioRTPC::GetYDefaultValue(::GlobalNamespace::AudioRTPC_YAxisType  yType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPC*>(),
                        {"GetYDefaultValue", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, yType);
}
inline float_t GlobalNamespace::AudioRTPC::ClampYValue(::GlobalNamespace::AudioRTPC_YAxisType  yType, float_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRTPC*>(),
                        {"ClampYValue", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, yType, val);
}
inline ::GlobalNamespace::AudioRTPC* GlobalNamespace::AudioRTPC::New_ctor(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::GlobalNamespace::AudioRTPC_YAxisType  yType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioRTPC*>(xType, yType));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioRTPC::AudioRTPC()   {
}
