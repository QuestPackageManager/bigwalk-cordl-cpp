#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/SplinePath.hpp"
#include "JBooth/MicroVerseCore/zzzz__SplineRenderer_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__RenderBuffer_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__SplinePath_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Easing_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__HeightmapData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IHeightModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ITextureModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Noise_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__SplinePath_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__SplineRenderer_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TextureData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineData_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::SplinePath_CombineMode::SplinePath_CombineMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::SplinePath_CombineMode::SplinePath_CombineMode()   {
}
constexpr ::JBooth::MicroVerseCore::SplinePath_CombineMode  JBooth::MicroVerseCore::SplinePath_CombineMode::Override{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::SplinePath_CombineMode  JBooth::MicroVerseCore::SplinePath_CombineMode::Max{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::SplinePath_CombineMode  JBooth::MicroVerseCore::SplinePath_CombineMode::Min{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::SplinePath_CombineMode  JBooth::MicroVerseCore::SplinePath_CombineMode::Blend{static_cast<int32_t>(0x9)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::SplinePath_SDFRes::SplinePath_SDFRes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::SplinePath_SDFRes::SplinePath_SDFRes()   {
}
constexpr ::JBooth::MicroVerseCore::SplinePath_SDFRes  JBooth::MicroVerseCore::SplinePath_SDFRes::k256{static_cast<int32_t>(0x100)};
constexpr ::JBooth::MicroVerseCore::SplinePath_SDFRes  JBooth::MicroVerseCore::SplinePath_SDFRes::k512{static_cast<int32_t>(0x200)};
constexpr ::JBooth::MicroVerseCore::SplinePath_SDFRes  JBooth::MicroVerseCore::SplinePath_SDFRes::k1024{static_cast<int32_t>(0x400)};
constexpr ::JBooth::MicroVerseCore::SplinePath_SDFRes  JBooth::MicroVerseCore::SplinePath_SDFRes::k2048{static_cast<int32_t>(0x800)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::SplinePath_SearchQuality::SplinePath_SearchQuality(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::SplinePath_SearchQuality::SplinePath_SearchQuality()   {
}
constexpr ::JBooth::MicroVerseCore::SplinePath_SearchQuality  JBooth::MicroVerseCore::SplinePath_SearchQuality::VeryLow{static_cast<int32_t>(0x40)};
constexpr ::JBooth::MicroVerseCore::SplinePath_SearchQuality  JBooth::MicroVerseCore::SplinePath_SearchQuality::Low{static_cast<int32_t>(0x80)};
constexpr ::JBooth::MicroVerseCore::SplinePath_SearchQuality  JBooth::MicroVerseCore::SplinePath_SearchQuality::Medium{static_cast<int32_t>(0x100)};
constexpr ::JBooth::MicroVerseCore::SplinePath_SearchQuality  JBooth::MicroVerseCore::SplinePath_SearchQuality::High{static_cast<int32_t>(0x200)};
constexpr ::JBooth::MicroVerseCore::SplinePath_SearchQuality  JBooth::MicroVerseCore::SplinePath_SearchQuality::VeryHigh{static_cast<int32_t>(0x400)};
constexpr ::JBooth::MicroVerseCore::SplinePath_SearchQuality  JBooth::MicroVerseCore::SplinePath_SearchQuality::ExtremelyHigh{static_cast<int32_t>(0x800)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath_SplineWidthData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath_SplineWidthData::*)()>(&::JBooth::MicroVerseCore::SplinePath_SplineWidthData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181426400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Splines::SplineData_1<float_t>*& JBooth::MicroVerseCore::SplinePath_SplineWidthData::__cordl_internal_get_widthData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___widthData;
}
constexpr ::UnityEngine::Splines::SplineData_1<float_t>* const& JBooth::MicroVerseCore::SplinePath_SplineWidthData::__cordl_internal_get_widthData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___widthData;
}
constexpr void JBooth::MicroVerseCore::SplinePath_SplineWidthData::__cordl_internal_set_widthData(::UnityEngine::Splines::SplineData_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___widthData = value;
}
inline void JBooth::MicroVerseCore::SplinePath_SplineWidthData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::SplinePath_SplineWidthData* JBooth::MicroVerseCore::SplinePath_SplineWidthData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::SplinePath_SplineWidthData::SplinePath_SplineWidthData()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.ComputeMaxSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::ComputeMaxSDF)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x181421680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"ComputeMaxSDF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.NeedCurvatureMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::NeedCurvatureMap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.NeedFlowMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::NeedFlowMap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"NeedFlowMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181422270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.ClearSplineRenders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)(::System::Nullable_1<::UnityEngine::Bounds>)>(&::JBooth::MicroVerseCore::SplinePath::ClearSplineRenders)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x181420880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"ClearSplineRenders", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.GetSplineRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::SplineRenderer* (::JBooth::MicroVerseCore::SplinePath::*)(::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::SplinePath::GetSplineRenderer)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x181421b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"GetSplineRenderer", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.UpdateSplineSDFs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::UpdateSplineSDFs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814231e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"UpdateSplineSDFs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::Initialize)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181421ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181422220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::OnDestroy)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181422130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.ApplyHeightStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::SplinePath::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::JBooth::MicroVerseCore::HeightmapData*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::SplinePath::ApplyHeightStamp)> {
  constexpr static std::size_t size = 0xc40;
  constexpr static std::size_t addrs = 0x18141f650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"ApplyHeightStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.ClearCachedSplineTextureCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::ClearCachedSplineTextureCurve)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814207c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"ClearCachedSplineTextureCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.ClearCachedSplineTreeCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::ClearCachedSplineTreeCurve)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181420800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"ClearCachedSplineTreeCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.ClearCachedSplineDetailCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::ClearCachedSplineDetailCurve)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181420780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"ClearCachedSplineDetailCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.ClearCachedSplineTrenchCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::ClearCachedSplineTrenchCurve)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181420840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"ClearCachedSplineTrenchCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.UpdateCachedTextureWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::UpdateCachedTextureWeight)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181422d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"UpdateCachedTextureWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.UpdateCachedTreeWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::UpdateCachedTreeWeight)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181422ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"UpdateCachedTreeWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.UpdateCachedTrenchCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::UpdateCachedTrenchCurve)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181423060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"UpdateCachedTrenchCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.UpdateCachedDetailWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::UpdateCachedDetailWeight)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181422be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"UpdateCachedDetailWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.ApplyTextureStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::SplinePath::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::JBooth::MicroVerseCore::TextureData*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::SplinePath::ApplyTextureStamp)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x181420290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"ApplyTextureStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TextureData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.PrepareMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)(::UnityEngine::Material*, ::JBooth::MicroVerseCore::HeightmapData*, ::System::Collections::Generic::List_1<::StringW>*)>(&::JBooth::MicroVerseCore::SplinePath::PrepareMaterial)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x181422700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"PrepareMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.PrepareMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)(::UnityEngine::Material*, ::JBooth::MicroVerseCore::TextureData*, ::System::Collections::Generic::List_1<::StringW>*)>(&::JBooth::MicroVerseCore::SplinePath::PrepareMaterial)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x1814222c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"PrepareMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TextureData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.ComputeBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Splines::SplineContainer*, float_t)>(&::JBooth::MicroVerseCore::SplinePath::ComputeBounds)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x181420e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"ComputeBounds", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::GetBounds)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x181421930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath.InqTerrainLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)(::UnityEngine::Terrain*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*)>(&::JBooth::MicroVerseCore::SplinePath::InqTerrainLayers)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181422020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"InqTerrainLayers", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplinePath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplinePath::*)()>(&::JBooth::MicroVerseCore::SplinePath::_ctor)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x181423650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::SplinePath_CombineMode& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_heightBlendMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightBlendMode;
}
constexpr ::JBooth::MicroVerseCore::SplinePath_CombineMode const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_heightBlendMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightBlendMode;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_heightBlendMode(::JBooth::MicroVerseCore::SplinePath_CombineMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightBlendMode = value;
}
constexpr ::ArrayW<::JBooth::MicroVerseCore::SplineRenderer_RenderDesc>& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_multiSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiSpline;
}
constexpr ::ArrayW<::JBooth::MicroVerseCore::SplineRenderer_RenderDesc> const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_multiSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiSpline;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_multiSpline(::ArrayW<::JBooth::MicroVerseCore::SplineRenderer_RenderDesc>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multiSpline = value;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_spline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_spline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_spline(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spline = value;
}
constexpr ::JBooth::MicroVerseCore::Noise*& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_positionNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionNoise;
}
constexpr ::JBooth::MicroVerseCore::Noise* const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_positionNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionNoise;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_positionNoise(::JBooth::MicroVerseCore::Noise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionNoise = value;
}
constexpr ::JBooth::MicroVerseCore::Noise*& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_widthNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___widthNoise;
}
constexpr ::JBooth::MicroVerseCore::Noise* const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_widthNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___widthNoise;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_widthNoise(::JBooth::MicroVerseCore::Noise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___widthNoise = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_blend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blend;
}
constexpr float_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_blend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blend;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_blend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blend = value;
}
constexpr bool& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_treatAsSplineArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treatAsSplineArea;
}
constexpr bool const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_treatAsSplineArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treatAsSplineArea;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_treatAsSplineArea(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treatAsSplineArea = value;
}
constexpr ::JBooth::MicroVerseCore::SplinePath_SDFRes& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_sdfRes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdfRes;
}
constexpr ::JBooth::MicroVerseCore::SplinePath_SDFRes const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_sdfRes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdfRes;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_sdfRes(::JBooth::MicroVerseCore::SplinePath_SDFRes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sdfRes = value;
}
constexpr ::JBooth::MicroVerseCore::SplinePath_SearchQuality& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_searchQuality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchQuality;
}
constexpr ::JBooth::MicroVerseCore::SplinePath_SearchQuality const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_searchQuality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchQuality;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_searchQuality(::JBooth::MicroVerseCore::SplinePath_SearchQuality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchQuality = value;
}
constexpr bool& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_modifyHeightMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifyHeightMap;
}
constexpr bool const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_modifyHeightMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifyHeightMap;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_modifyHeightMap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modifyHeightMap = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr float_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_width(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_smoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothness;
}
constexpr float_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_smoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothness;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_smoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothness = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_trench()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trench;
}
constexpr float_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_trench() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trench;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_trench(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trench = value;
}
constexpr ::UnityEngine::AnimationCurve*& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_trenchCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trenchCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_trenchCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trenchCurve;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_trenchCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trenchCurve = value;
}
constexpr bool& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_useTrenchCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTrenchCurve;
}
constexpr bool const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_useTrenchCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTrenchCurve;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_useTrenchCurve(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useTrenchCurve = value;
}
constexpr ::JBooth::MicroVerseCore::Noise*& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_heightNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightNoise;
}
constexpr ::JBooth::MicroVerseCore::Noise* const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_heightNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightNoise;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_heightNoise(::JBooth::MicroVerseCore::Noise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightNoise = value;
}
constexpr ::JBooth::MicroVerseCore::Easing*& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_embankmentEasing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___embankmentEasing;
}
constexpr ::JBooth::MicroVerseCore::Easing* const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_embankmentEasing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___embankmentEasing;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_embankmentEasing(::JBooth::MicroVerseCore::Easing*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___embankmentEasing = value;
}
constexpr ::JBooth::MicroVerseCore::Noise*& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_embankmentNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___embankmentNoise;
}
constexpr ::JBooth::MicroVerseCore::Noise* const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_embankmentNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___embankmentNoise;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_embankmentNoise(::JBooth::MicroVerseCore::Noise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___embankmentNoise = value;
}
constexpr bool& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_useTextureCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTextureCurve;
}
constexpr bool const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_useTextureCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTextureCurve;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_useTextureCurve(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useTextureCurve = value;
}
constexpr bool& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_useDetailCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useDetailCurve;
}
constexpr bool const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_useDetailCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useDetailCurve;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_useDetailCurve(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useDetailCurve = value;
}
constexpr bool& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_useTreeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTreeCurve;
}
constexpr bool const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_useTreeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTreeCurve;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_useTreeCurve(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useTreeCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_textureCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_textureCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureCurve;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_textureCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_treeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_treeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeCurve;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_treeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_detailCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_detailCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailCurve;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_detailCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailCurve = value;
}
constexpr bool& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_modifySplatMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifySplatMap;
}
constexpr bool const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_modifySplatMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifySplatMap;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_modifySplatMap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modifySplatMap = value;
}
constexpr ::UnityW<::UnityEngine::TerrainLayer>& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr ::UnityW<::UnityEngine::TerrainLayer> const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_layer(::UnityW<::UnityEngine::TerrainLayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layer = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_splatWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splatWeight;
}
constexpr float_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_splatWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splatWeight;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_splatWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splatWeight = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_splatWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splatWidth;
}
constexpr float_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_splatWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splatWidth;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_splatWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splatWidth = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_splatSmoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splatSmoothness;
}
constexpr float_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_splatSmoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splatSmoothness;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_splatSmoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splatSmoothness = value;
}
constexpr ::JBooth::MicroVerseCore::Noise*& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_splatNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splatNoise;
}
constexpr ::JBooth::MicroVerseCore::Noise* const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_splatNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splatNoise;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_splatNoise(::JBooth::MicroVerseCore::Noise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splatNoise = value;
}
constexpr ::UnityW<::UnityEngine::TerrainLayer>& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_embankmentLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___embankmentLayer;
}
constexpr ::UnityW<::UnityEngine::TerrainLayer> const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_embankmentLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___embankmentLayer;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_embankmentLayer(::UnityW<::UnityEngine::TerrainLayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___embankmentLayer = value;
}
constexpr bool& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_clearTrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearTrees;
}
constexpr bool const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_clearTrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearTrees;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_clearTrees(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearTrees = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_treeWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeWidth;
}
constexpr float_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_treeWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeWidth;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_treeWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeWidth = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_treeSmoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeSmoothness;
}
constexpr float_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_treeSmoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeSmoothness;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_treeSmoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeSmoothness = value;
}
constexpr bool& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_clearDetails()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearDetails;
}
constexpr bool const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_clearDetails() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearDetails;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_clearDetails(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearDetails = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_detailWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailWidth;
}
constexpr float_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_detailWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailWidth;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_detailWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailWidth = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_detailSmoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailSmoothness;
}
constexpr float_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_detailSmoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailSmoothness;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_detailSmoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailSmoothness = value;
}
constexpr bool& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_clearObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearObjects;
}
constexpr bool const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_clearObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearObjects;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_clearObjects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearObjects = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_objectWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectWidth;
}
constexpr float_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_objectWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectWidth;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_objectWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectWidth = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_objectSmoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectSmoothness;
}
constexpr float_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_objectSmoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectSmoothness;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_objectSmoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectSmoothness = value;
}
constexpr bool& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_occludeHeightMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeHeightMod;
}
constexpr bool const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_occludeHeightMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeHeightMod;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_occludeHeightMod(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occludeHeightMod = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_occludeHeightWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeHeightWidth;
}
constexpr float_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_occludeHeightWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeHeightWidth;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_occludeHeightWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occludeHeightWidth = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_occludeHeightSmoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeHeightSmoothness;
}
constexpr float_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_occludeHeightSmoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeHeightSmoothness;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_occludeHeightSmoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occludeHeightSmoothness = value;
}
constexpr bool& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_occludeTextureMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeTextureMod;
}
constexpr bool const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_occludeTextureMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeTextureMod;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_occludeTextureMod(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occludeTextureMod = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_occludeTextureWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeTextureWidth;
}
constexpr float_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_occludeTextureWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeTextureWidth;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_occludeTextureWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occludeTextureWidth = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_occludeTextureSmoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeTextureSmoothness;
}
constexpr float_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_occludeTextureSmoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occludeTextureSmoothness;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_occludeTextureSmoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occludeTextureSmoothness = value;
}
constexpr ::JBooth::MicroVerseCore::Easing*& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_splineWidthEasing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineWidthEasing;
}
constexpr ::JBooth::MicroVerseCore::Easing* const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_splineWidthEasing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineWidthEasing;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_splineWidthEasing(::JBooth::MicroVerseCore::Easing*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineWidthEasing = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>*& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_splineWidths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineWidths;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>* const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_splineWidths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineWidths;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_splineWidths(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SplinePath_SplineWidthData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineWidths = value;
}
constexpr ::ArrayW<::UnityEngine::RenderBuffer>& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_multipleRenderBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multipleRenderBuffers;
}
constexpr ::ArrayW<::UnityEngine::RenderBuffer> const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_multipleRenderBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multipleRenderBuffers;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_multipleRenderBuffers(::ArrayW<::UnityEngine::RenderBuffer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multipleRenderBuffers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::SplineRenderer*>*& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_splineRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineRenderers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::SplineRenderer*>* const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_splineRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineRenderers;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_splineRenderers(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::SplineRenderer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineRenderers = value;
}
constexpr int32_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_mainChannelIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainChannelIndex;
}
constexpr int32_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_mainChannelIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainChannelIndex;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_mainChannelIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainChannelIndex = value;
}
constexpr int32_t& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_embankmentChannelIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___embankmentChannelIndex;
}
constexpr int32_t const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_embankmentChannelIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___embankmentChannelIndex;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_embankmentChannelIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___embankmentChannelIndex = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_cachedSplineTextureWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSplineTextureWeight;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_cachedSplineTextureWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSplineTextureWeight;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_cachedSplineTextureWeight(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedSplineTextureWeight = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_cachedSplineTreeWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSplineTreeWeight;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_cachedSplineTreeWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSplineTreeWeight;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_cachedSplineTreeWeight(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedSplineTreeWeight = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_cachedSplineDetailWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSplineDetailWeight;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_cachedSplineDetailWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSplineDetailWeight;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_cachedSplineDetailWeight(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedSplineDetailWeight = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_cachedSplineTrenchWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSplineTrenchWeight;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_cachedSplineTrenchWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSplineTrenchWeight;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_cachedSplineTrenchWeight(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedSplineTrenchWeight = value;
}
constexpr ::UnityEngine::Bounds& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::UnityEngine::Bounds const& JBooth::MicroVerseCore::SplinePath::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void JBooth::MicroVerseCore::SplinePath::__cordl_internal_set_bounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF_heightMat(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "heightMat", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> JBooth::MicroVerseCore::SplinePath::getStaticF_heightMat()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "heightMat", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF_splatMat(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "splatMat", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> JBooth::MicroVerseCore::SplinePath::getStaticF_splatMat()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "splatMat", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__SplineSDF(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SplineSDF", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__SplineSDF()  {
return ::cordl_internals::getStaticField<int32_t, "_SplineSDF", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__TerrainHeight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TerrainHeight", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__TerrainHeight()  {
return ::cordl_internals::getStaticField<int32_t, "_TerrainHeight", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__TreeWidth(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TreeWidth", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__TreeWidth()  {
return ::cordl_internals::getStaticField<int32_t, "_TreeWidth", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__Channel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Channel", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__Channel()  {
return ::cordl_internals::getStaticField<int32_t, "_Channel", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__TreeSmoothness(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TreeSmoothness", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__TreeSmoothness()  {
return ::cordl_internals::getStaticField<int32_t, "_TreeSmoothness", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__DetailWidth(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DetailWidth", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__DetailWidth()  {
return ::cordl_internals::getStaticField<int32_t, "_DetailWidth", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__DetailSmoothness(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DetailSmoothness", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__DetailSmoothness()  {
return ::cordl_internals::getStaticField<int32_t, "_DetailSmoothness", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__SplatWidth(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SplatWidth", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__SplatWidth()  {
return ::cordl_internals::getStaticField<int32_t, "_SplatWidth", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__SplatSmoothness(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SplatSmoothness", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__SplatSmoothness()  {
return ::cordl_internals::getStaticField<int32_t, "_SplatSmoothness", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__WeightMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_WeightMap", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__WeightMap()  {
return ::cordl_internals::getStaticField<int32_t, "_WeightMap", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__IndexMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_IndexMap", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__IndexMap()  {
return ::cordl_internals::getStaticField<int32_t, "_IndexMap", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__AlphaMapSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AlphaMapSize", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__AlphaMapSize()  {
return ::cordl_internals::getStaticField<int32_t, "_AlphaMapSize", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__SplatWeight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SplatWeight", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__SplatWeight()  {
return ::cordl_internals::getStaticField<int32_t, "_SplatWeight", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__HeightMapSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_HeightMapSize", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__HeightMapSize()  {
return ::cordl_internals::getStaticField<int32_t, "_HeightMapSize", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__Blend(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Blend", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__Blend()  {
return ::cordl_internals::getStaticField<int32_t, "_Blend", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF_sdfToMaskShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "sdfToMaskShader", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::SplinePath::getStaticF_sdfToMaskShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "sdfToMaskShader", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF_sdfToMaskMat(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "sdfToMaskMat", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> JBooth::MicroVerseCore::SplinePath::getStaticF_sdfToMaskMat()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "sdfToMaskMat", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__NoiseUV(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_NoiseUV", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__NoiseUV()  {
return ::cordl_internals::getStaticField<int32_t, "_NoiseUV", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__Width(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Width", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__Width()  {
return ::cordl_internals::getStaticField<int32_t, "_Width", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__Smoothness(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Smoothness", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__Smoothness()  {
return ::cordl_internals::getStaticField<int32_t, "_Smoothness", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__RealHeight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_RealHeight", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__RealHeight()  {
return ::cordl_internals::getStaticField<int32_t, "_RealHeight", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__Trench(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Trench", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__Trench()  {
return ::cordl_internals::getStaticField<int32_t, "_Trench", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__TrenchCurve(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TrenchCurve", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__TrenchCurve()  {
return ::cordl_internals::getStaticField<int32_t, "_TrenchCurve", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__CombineMode(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CombineMode", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__CombineMode()  {
return ::cordl_internals::getStaticField<int32_t, "_CombineMode", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__CombineBlend(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CombineBlend", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__CombineBlend()  {
return ::cordl_internals::getStaticField<int32_t, "_CombineBlend", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__EmbankmentChannel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_EmbankmentChannel", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__EmbankmentChannel()  {
return ::cordl_internals::getStaticField<int32_t, "_EmbankmentChannel", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__HeightWidth(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_HeightWidth", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__HeightWidth()  {
return ::cordl_internals::getStaticField<int32_t, "_HeightWidth", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__HeightSmoothness(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_HeightSmoothness", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__HeightSmoothness()  {
return ::cordl_internals::getStaticField<int32_t, "_HeightSmoothness", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__NoiseParams(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_NoiseParams", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__NoiseParams()  {
return ::cordl_internals::getStaticField<int32_t, "_NoiseParams", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__NoiseParams2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_NoiseParams2", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__NoiseParams2()  {
return ::cordl_internals::getStaticField<int32_t, "_NoiseParams2", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__SplatNoiseChannel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SplatNoiseChannel", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__SplatNoiseChannel()  {
return ::cordl_internals::getStaticField<int32_t, "_SplatNoiseChannel", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline void JBooth::MicroVerseCore::SplinePath::setStaticF__SplatNoiseTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SplatNoiseTexture", ::JBooth::MicroVerseCore::SplinePath*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::SplinePath::getStaticF__SplatNoiseTexture()  {
return ::cordl_internals::getStaticField<int32_t, "_SplatNoiseTexture", ::JBooth::MicroVerseCore::SplinePath*>();
}
inline float_t JBooth::MicroVerseCore::SplinePath::ComputeMaxSDF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"ComputeMaxSDF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::SplinePath::NeedCurvatureMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::SplinePath::NeedFlowMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"NeedFlowMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplinePath::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplinePath::ClearSplineRenders(::System::Nullable_1<::UnityEngine::Bounds>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"ClearSplineRenders", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bounds);
}
inline ::JBooth::MicroVerseCore::SplineRenderer* JBooth::MicroVerseCore::SplinePath::GetSplineRenderer(::UnityEngine::Terrain*  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"GetSplineRenderer", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::SplineRenderer*>(this, ___internal_method, terrain);
}
inline void JBooth::MicroVerseCore::SplinePath::UpdateSplineSDFs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"UpdateSplineSDFs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplinePath::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplinePath::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplinePath::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::SplinePath::ApplyHeightStamp(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"ApplyHeightStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, dest, heightmapData, od);
}
inline void JBooth::MicroVerseCore::SplinePath::ClearCachedSplineTextureCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"ClearCachedSplineTextureCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplinePath::ClearCachedSplineTreeCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"ClearCachedSplineTreeCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplinePath::ClearCachedSplineDetailCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"ClearCachedSplineDetailCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplinePath::ClearCachedSplineTrenchCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"ClearCachedSplineTrenchCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplinePath::UpdateCachedTextureWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"UpdateCachedTextureWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplinePath::UpdateCachedTreeWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"UpdateCachedTreeWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplinePath::UpdateCachedTrenchCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"UpdateCachedTrenchCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplinePath::UpdateCachedDetailWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"UpdateCachedDetailWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::SplinePath::ApplyTextureStamp(::UnityEngine::RenderTexture*  indexSrc, ::UnityEngine::RenderTexture*  indexDest, ::UnityEngine::RenderTexture*  weightSrc, ::UnityEngine::RenderTexture*  weightDest, ::JBooth::MicroVerseCore::TextureData*  splatmapData, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"ApplyTextureStamp", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TextureData*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, indexSrc, indexDest, weightSrc, weightDest, splatmapData, od);
}
inline void JBooth::MicroVerseCore::SplinePath::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplinePath::PrepareMaterial(::UnityEngine::Material*  material, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::System::Collections::Generic::List_1<::StringW>*  keywords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"PrepareMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::JBooth::MicroVerseCore::HeightmapData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, heightmapData, keywords);
}
inline void JBooth::MicroVerseCore::SplinePath::PrepareMaterial(::UnityEngine::Material*  material, ::JBooth::MicroVerseCore::TextureData*  splatmapData, ::System::Collections::Generic::List_1<::StringW>*  keywords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"PrepareMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TextureData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, splatmapData, keywords);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::SplinePath::ComputeBounds(::UnityEngine::Splines::SplineContainer*  spline, float_t  expand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"ComputeBounds", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, spline, expand);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::SplinePath::GetBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplinePath::InqTerrainLayers(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*  layers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {"InqTerrainLayers", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, layers);
}
inline void JBooth::MicroVerseCore::SplinePath::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplinePath*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::SplinePath* JBooth::MicroVerseCore::SplinePath::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::SplinePath*>());
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr  JBooth::MicroVerseCore::SplinePath::operator ::JBooth::MicroVerseCore::IHeightModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IHeightModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr ::JBooth::MicroVerseCore::IHeightModifier* JBooth::MicroVerseCore::SplinePath::i___JBooth__MicroVerseCore__IHeightModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IHeightModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr  JBooth::MicroVerseCore::SplinePath::operator ::JBooth::MicroVerseCore::IModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* JBooth::MicroVerseCore::SplinePath::i___JBooth__MicroVerseCore__IModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr  JBooth::MicroVerseCore::SplinePath::operator ::JBooth::MicroVerseCore::ITextureModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITextureModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr ::JBooth::MicroVerseCore::ITextureModifier* JBooth::MicroVerseCore::SplinePath::i___JBooth__MicroVerseCore__ITextureModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::ITextureModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::SplinePath::SplinePath()   {
}
