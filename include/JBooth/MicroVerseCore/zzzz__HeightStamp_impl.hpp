#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/HeightStamp.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__HeightStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__FalloffFilter_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__HeightStamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__HeightmapData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IHeightModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode::HeightStamp_CombineMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode::HeightStamp_CombineMode()   {
}
constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode  JBooth::MicroVerseCore::HeightStamp_CombineMode::Override{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode  JBooth::MicroVerseCore::HeightStamp_CombineMode::Max{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode  JBooth::MicroVerseCore::HeightStamp_CombineMode::Min{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode  JBooth::MicroVerseCore::HeightStamp_CombineMode::Add{static_cast<int32_t>(0x3)};
constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode  JBooth::MicroVerseCore::HeightStamp_CombineMode::Subtract{static_cast<int32_t>(0x4)};
constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode  JBooth::MicroVerseCore::HeightStamp_CombineMode::Multiply{static_cast<int32_t>(0x5)};
constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode  JBooth::MicroVerseCore::HeightStamp_CombineMode::Average{static_cast<int32_t>(0x6)};
constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode  JBooth::MicroVerseCore::HeightStamp_CombineMode::Difference{static_cast<int32_t>(0x7)};
constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode  JBooth::MicroVerseCore::HeightStamp_CombineMode::SqrtMultiply{static_cast<int32_t>(0x8)};
constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode  JBooth::MicroVerseCore::HeightStamp_CombineMode::Blend{static_cast<int32_t>(0x9)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightStamp.ClearRemapCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::HeightStamp::*)()>(&::JBooth::MicroVerseCore::HeightStamp::ClearRemapCurve)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181441190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                        {"ClearRemapCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightStamp.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::HeightStamp::*)()>(&::JBooth::MicroVerseCore::HeightStamp::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightStamp.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::HeightStamp::*)()>(&::JBooth::MicroVerseCore::HeightStamp::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181441580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightStamp.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::HeightStamp::*)()>(&::JBooth::MicroVerseCore::HeightStamp::OnEnable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181441590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightStamp.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::HeightStamp::*)()>(&::JBooth::MicroVerseCore::HeightStamp::Initialize)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x181441330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightStamp.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::JBooth::MicroVerseCore::HeightStamp::*)()>(&::JBooth::MicroVerseCore::HeightStamp::GetBounds)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1814411d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightStamp.ApplyHeightStampAbsolute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::HeightStamp::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::JBooth::MicroVerseCore::HeightmapData*, ::JBooth::MicroVerseCore::OcclusionData*, ::UnityEngine::Vector2)>(&::JBooth::MicroVerseCore::HeightStamp::ApplyHeightStampAbsolute)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x181440710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                        {"ApplyHeightStampAbsolute", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightStamp.ApplyHeightStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::HeightStamp::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::JBooth::MicroVerseCore::HeightmapData*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::HeightStamp::ApplyHeightStamp)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x181440c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                        {"ApplyHeightStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightStamp.PrepareMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::HeightStamp::*)(::UnityEngine::Material*, ::JBooth::MicroVerseCore::HeightmapData*, ::System::Collections::Generic::List_1<::StringW>*)>(&::JBooth::MicroVerseCore::HeightStamp::PrepareMaterial)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x181441650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                        {"PrepareMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightStamp.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::HeightStamp::*)()>(&::JBooth::MicroVerseCore::HeightStamp::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181440390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightStamp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::HeightStamp::*)()>(&::JBooth::MicroVerseCore::HeightStamp::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181442010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_stamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stamp;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_stamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stamp;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_stamp(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stamp = value;
}
constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::JBooth::MicroVerseCore::HeightStamp_CombineMode const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_mode(::JBooth::MicroVerseCore::HeightStamp_CombineMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter*& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_falloff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloff;
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter* const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_falloff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloff;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_falloff(::JBooth::MicroVerseCore::FalloffFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___falloff = value;
}
constexpr float_t& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_twist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___twist;
}
constexpr float_t const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_twist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___twist;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_twist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___twist = value;
}
constexpr float_t& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_erosion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___erosion;
}
constexpr float_t const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_erosion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___erosion;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_erosion(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___erosion = value;
}
constexpr float_t& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_erosionSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___erosionSize;
}
constexpr float_t const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_erosionSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___erosionSize;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_erosionSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___erosionSize = value;
}
constexpr float_t& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_power()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___power;
}
constexpr float_t const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_power() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___power;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_power(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___power = value;
}
constexpr bool& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_invert()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invert;
}
constexpr bool const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_invert() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invert;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_invert(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invert = value;
}
constexpr bool& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_useHeightRemap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useHeightRemap;
}
constexpr bool const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_useHeightRemap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useHeightRemap;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_useHeightRemap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useHeightRemap = value;
}
constexpr ::UnityEngine::AnimationCurve*& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_remapCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remapCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_remapCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remapCurve;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_remapCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remapCurve = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_remapCurveTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remapCurveTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_remapCurveTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remapCurveTex;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_remapCurveTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remapCurveTex = value;
}
constexpr float_t& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_blend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blend;
}
constexpr float_t const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_blend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blend;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_blend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blend = value;
}
constexpr ::UnityEngine::Vector2& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_remapRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remapRange;
}
constexpr ::UnityEngine::Vector2 const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_remapRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remapRange;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_remapRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remapRange = value;
}
constexpr ::UnityEngine::Vector4& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_scaleOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleOffset;
}
constexpr ::UnityEngine::Vector4 const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_scaleOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleOffset;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_scaleOffset(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleOffset = value;
}
constexpr float_t& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_tiltX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltX;
}
constexpr float_t const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_tiltX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltX;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_tiltX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tiltX = value;
}
constexpr float_t& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_tiltZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltZ;
}
constexpr float_t const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_tiltZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltZ;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_tiltZ(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tiltZ = value;
}
constexpr bool& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_tiltScaleX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltScaleX;
}
constexpr bool const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_tiltScaleX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltScaleX;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_tiltScaleX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tiltScaleX = value;
}
constexpr bool& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_tiltScaleZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltScaleZ;
}
constexpr bool const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_tiltScaleZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltScaleZ;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_tiltScaleZ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tiltScaleZ = value;
}
constexpr float_t& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_mipBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mipBias;
}
constexpr float_t const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_mipBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mipBias;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_mipBias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mipBias = value;
}
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr int32_t& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr int32_t const& JBooth::MicroVerseCore::HeightStamp::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void JBooth::MicroVerseCore::HeightStamp::__cordl_internal_set_version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF_heightmapShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "heightmapShader", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::HeightStamp::getStaticF_heightmapShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "heightmapShader", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__AlphaMapSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AlphaMapSize", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__AlphaMapSize()  {
return ::cordl_internals::getStaticField<int32_t, "_AlphaMapSize", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__PlacementMask(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_PlacementMask", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__PlacementMask()  {
return ::cordl_internals::getStaticField<int32_t, "_PlacementMask", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__NoiseUV(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_NoiseUV", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__NoiseUV()  {
return ::cordl_internals::getStaticField<int32_t, "_NoiseUV", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__Invert(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Invert", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__Invert()  {
return ::cordl_internals::getStaticField<int32_t, "_Invert", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__Blend(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Blend", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__Blend()  {
return ::cordl_internals::getStaticField<int32_t, "_Blend", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__Power(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Power", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__Power()  {
return ::cordl_internals::getStaticField<int32_t, "_Power", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__Tilt(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Tilt", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__Tilt()  {
return ::cordl_internals::getStaticField<int32_t, "_Tilt", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__TiltScale(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TiltScale", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__TiltScale()  {
return ::cordl_internals::getStaticField<int32_t, "_TiltScale", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__Transform(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Transform", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__Transform()  {
return ::cordl_internals::getStaticField<int32_t, "_Transform", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__RealSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_RealSize", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__RealSize()  {
return ::cordl_internals::getStaticField<int32_t, "_RealSize", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__StampTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_StampTex", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__StampTex()  {
return ::cordl_internals::getStaticField<int32_t, "_StampTex", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__MipBias(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_MipBias", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__MipBias()  {
return ::cordl_internals::getStaticField<int32_t, "_MipBias", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__RemapRange(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_RemapRange", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__RemapRange()  {
return ::cordl_internals::getStaticField<int32_t, "_RemapRange", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__ScaleOffset(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ScaleOffset", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__ScaleOffset()  {
return ::cordl_internals::getStaticField<int32_t, "_ScaleOffset", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__HeightRemap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_HeightRemap", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__HeightRemap()  {
return ::cordl_internals::getStaticField<int32_t, "_HeightRemap", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__CombineMode(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CombineMode", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__CombineMode()  {
return ::cordl_internals::getStaticField<int32_t, "_CombineMode", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__Twist(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Twist", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__Twist()  {
return ::cordl_internals::getStaticField<int32_t, "_Twist", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__Erosion(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Erosion", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__Erosion()  {
return ::cordl_internals::getStaticField<int32_t, "_Erosion", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__ErosionSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ErosionSize", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__ErosionSize()  {
return ::cordl_internals::getStaticField<int32_t, "_ErosionSize", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__HeightRemapCurve(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_HeightRemapCurve", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__HeightRemapCurve()  {
return ::cordl_internals::getStaticField<int32_t, "_HeightRemapCurve", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::setStaticF__CombineBlend(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CombineBlend", ::JBooth::MicroVerseCore::HeightStamp*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::HeightStamp::getStaticF__CombineBlend()  {
return ::cordl_internals::getStaticField<int32_t, "_CombineBlend", ::JBooth::MicroVerseCore::HeightStamp*>();
}
inline void JBooth::MicroVerseCore::HeightStamp::ClearRemapCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                        {"ClearRemapCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::HeightStamp::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::HeightStamp::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::HeightStamp::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::HeightStamp::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::HeightStamp::GetBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::HeightStamp::ApplyHeightStampAbsolute(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::JBooth::MicroVerseCore::OcclusionData*  od, ::UnityEngine::Vector2  heightRenorm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                        {"ApplyHeightStampAbsolute", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, dest, heightmapData, od, heightRenorm);
}
inline bool JBooth::MicroVerseCore::HeightStamp::ApplyHeightStamp(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                        {"ApplyHeightStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, dest, heightmapData, od);
}
inline void JBooth::MicroVerseCore::HeightStamp::PrepareMaterial(::UnityEngine::Material*  material, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::System::Collections::Generic::List_1<::StringW>*  keywords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                        {"PrepareMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, heightmapData, keywords);
}
inline void JBooth::MicroVerseCore::HeightStamp::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::HeightStamp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightStamp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::HeightStamp* JBooth::MicroVerseCore::HeightStamp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::HeightStamp*>());
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr  JBooth::MicroVerseCore::HeightStamp::operator ::JBooth::MicroVerseCore::IHeightModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IHeightModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr ::JBooth::MicroVerseCore::IHeightModifier* JBooth::MicroVerseCore::HeightStamp::i___JBooth__MicroVerseCore__IHeightModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IHeightModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr  JBooth::MicroVerseCore::HeightStamp::operator ::JBooth::MicroVerseCore::IModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* JBooth::MicroVerseCore::HeightStamp::i___JBooth__MicroVerseCore__IModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::HeightStamp::HeightStamp()   {
}
