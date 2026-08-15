#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/SplineArea.hpp"
#include "JBooth/MicroVerseCore/zzzz__SplinePath_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__SplineArea_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Noise_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__SplineArea_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__SplineRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::SplineArea_ClosedMode::SplineArea_ClosedMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::SplineArea_ClosedMode::SplineArea_ClosedMode()   {
}
constexpr ::JBooth::MicroVerseCore::SplineArea_ClosedMode  JBooth::MicroVerseCore::SplineArea_ClosedMode::Area{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::SplineArea_ClosedMode  JBooth::MicroVerseCore::SplineArea_ClosedMode::Path{static_cast<int32_t>(0x0)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineArea.NeedCurvatureMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::SplineArea::*)()>(&::JBooth::MicroVerseCore::SplineArea::NeedCurvatureMap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineArea.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplineArea::*)()>(&::JBooth::MicroVerseCore::SplineArea::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18141f4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineArea.ClearSplineRenders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplineArea::*)()>(&::JBooth::MicroVerseCore::SplineArea::ClearSplineRenders)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18141ef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                        {"ClearSplineRenders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineArea.GetSplineRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::SplineRenderer* (::JBooth::MicroVerseCore::SplineArea::*)(::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::SplineArea::GetSplineRenderer)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18141f250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                        {"GetSplineRenderer", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineArea.UpdateSplineSDFs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplineArea::*)()>(&::JBooth::MicroVerseCore::SplineArea::UpdateSplineSDFs)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18141f4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                        {"UpdateSplineSDFs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineArea.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplineArea::*)()>(&::JBooth::MicroVerseCore::SplineArea::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineArea.GetSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::JBooth::MicroVerseCore::SplineArea::*)(::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::SplineArea::GetSDF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141f230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                        {"GetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineArea.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplineArea::*)()>(&::JBooth::MicroVerseCore::SplineArea::OnDisable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18141f480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineArea.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplineArea::*)()>(&::JBooth::MicroVerseCore::SplineArea::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18141f470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineArea.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplineArea::*)()>(&::JBooth::MicroVerseCore::SplineArea::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineArea.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::JBooth::MicroVerseCore::SplineArea::*)()>(&::JBooth::MicroVerseCore::SplineArea::GetBounds)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18141f080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineArea._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplineArea::*)()>(&::JBooth::MicroVerseCore::SplineArea::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18141f5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& JBooth::MicroVerseCore::SplineArea::__cordl_internal_get_spline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& JBooth::MicroVerseCore::SplineArea::__cordl_internal_get_spline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr void JBooth::MicroVerseCore::SplineArea::__cordl_internal_set_spline(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spline = value;
}
constexpr ::JBooth::MicroVerseCore::SplinePath_SDFRes& JBooth::MicroVerseCore::SplineArea::__cordl_internal_get_sdfRes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdfRes;
}
constexpr ::JBooth::MicroVerseCore::SplinePath_SDFRes const& JBooth::MicroVerseCore::SplineArea::__cordl_internal_get_sdfRes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdfRes;
}
constexpr void JBooth::MicroVerseCore::SplineArea::__cordl_internal_set_sdfRes(::JBooth::MicroVerseCore::SplinePath_SDFRes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sdfRes = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplineArea::__cordl_internal_get_maxSDF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSDF;
}
constexpr float_t const& JBooth::MicroVerseCore::SplineArea::__cordl_internal_get_maxSDF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSDF;
}
constexpr void JBooth::MicroVerseCore::SplineArea::__cordl_internal_set_maxSDF(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSDF = value;
}
constexpr ::JBooth::MicroVerseCore::Noise*& JBooth::MicroVerseCore::SplineArea::__cordl_internal_get_positionNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionNoise;
}
constexpr ::JBooth::MicroVerseCore::Noise* const& JBooth::MicroVerseCore::SplineArea::__cordl_internal_get_positionNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionNoise;
}
constexpr void JBooth::MicroVerseCore::SplineArea::__cordl_internal_set_positionNoise(::JBooth::MicroVerseCore::Noise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionNoise = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::SplineRenderer*>*& JBooth::MicroVerseCore::SplineArea::__cordl_internal_get_splineRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineRenderers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::SplineRenderer*>* const& JBooth::MicroVerseCore::SplineArea::__cordl_internal_get_splineRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineRenderers;
}
constexpr void JBooth::MicroVerseCore::SplineArea::__cordl_internal_set_splineRenderers(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::SplineRenderer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineRenderers = value;
}
constexpr ::JBooth::MicroVerseCore::SplineArea_ClosedMode& JBooth::MicroVerseCore::SplineArea::__cordl_internal_get_closedMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedMode;
}
constexpr ::JBooth::MicroVerseCore::SplineArea_ClosedMode const& JBooth::MicroVerseCore::SplineArea::__cordl_internal_get_closedMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedMode;
}
constexpr void JBooth::MicroVerseCore::SplineArea::__cordl_internal_set_closedMode(::JBooth::MicroVerseCore::SplineArea_ClosedMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedMode = value;
}
constexpr ::UnityEngine::Bounds& JBooth::MicroVerseCore::SplineArea::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::UnityEngine::Bounds const& JBooth::MicroVerseCore::SplineArea::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void JBooth::MicroVerseCore::SplineArea::__cordl_internal_set_bounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
inline bool JBooth::MicroVerseCore::SplineArea::NeedCurvatureMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplineArea::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplineArea::ClearSplineRenders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                        {"ClearSplineRenders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::SplineRenderer* JBooth::MicroVerseCore::SplineArea::GetSplineRenderer(::UnityEngine::Terrain*  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                        {"GetSplineRenderer", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::SplineRenderer*>(this, ___internal_method, terrain);
}
inline void JBooth::MicroVerseCore::SplineArea::UpdateSplineSDFs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                        {"UpdateSplineSDFs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplineArea::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::SplineArea::GetSDF(::UnityEngine::Terrain*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                        {"GetSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, t);
}
inline void JBooth::MicroVerseCore::SplineArea::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplineArea::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplineArea::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::SplineArea::GetBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplineArea::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineArea*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::SplineArea* JBooth::MicroVerseCore::SplineArea::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::SplineArea*>());
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr  JBooth::MicroVerseCore::SplineArea::operator ::JBooth::MicroVerseCore::IModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* JBooth::MicroVerseCore::SplineArea::i___JBooth__MicroVerseCore__IModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::SplineArea::SplineArea()   {
}
