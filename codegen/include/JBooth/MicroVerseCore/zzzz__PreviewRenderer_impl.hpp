#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/PreviewRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__PreviewRenderer_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__FalloffFilter_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__FilterSet_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Noise_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__PreviewRenderer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType::PreviewRenderer_FilterSetType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType::PreviewRenderer_FilterSetType()   {
}
constexpr ::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType  JBooth::MicroVerseCore::PreviewRenderer_FilterSetType::Height{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType  JBooth::MicroVerseCore::PreviewRenderer_FilterSetType::Slope{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType  JBooth::MicroVerseCore::PreviewRenderer_FilterSetType::Angle{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType  JBooth::MicroVerseCore::PreviewRenderer_FilterSetType::Curvature{static_cast<int32_t>(0x3)};
constexpr ::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType  JBooth::MicroVerseCore::PreviewRenderer_FilterSetType::Flow{static_cast<int32_t>(0x4)};
constexpr ::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType  JBooth::MicroVerseCore::PreviewRenderer_FilterSetType::Texture{static_cast<int32_t>(0x5)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::PreviewRenderer.get_kNormalizedHeightScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::JBooth::MicroVerseCore::PreviewRenderer::get_kNormalizedHeightScale)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181449620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {"get_kNormalizedHeightScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::PreviewRenderer.DrawNoisePreview
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::JBooth::MicroVerseCore::PreviewRenderer::DrawNoisePreview)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x181447f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {"DrawNoisePreview", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::PreviewRenderer.DrawFilterSetPreview
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::JBooth::MicroVerseCore::PreviewRenderer::DrawFilterSetPreview)> {
  constexpr static std::size_t size = 0x1020;
  constexpr static std::size_t addrs = 0x181446f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {"DrawFilterSetPreview", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::PreviewRenderer.DrawStampPreview
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::JBooth::MicroVerseCore::IModifier*, ::ArrayW<::UnityEngine::Terrain*>, ::UnityEngine::Transform*, ::JBooth::MicroVerseCore::FalloffFilter*, ::UnityEngine::Color, ::UnityEngine::Texture2D*)>(&::JBooth::MicroVerseCore::PreviewRenderer::DrawStampPreview)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181448530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {"DrawStampPreview", {}, {::i2c::type_of<::JBooth::MicroVerseCore::IModifier*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::JBooth::MicroVerseCore::FalloffFilter*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::PreviewRenderer.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Terrain*, ::UnityEngine::Texture2D*)>(&::JBooth::MicroVerseCore::PreviewRenderer::Draw)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181448d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {"Draw", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::PreviewRenderer.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Terrain*, ::UnityEngine::Transform*, ::UnityEngine::Texture2D*, ::UnityEngine::Color, ::UnityEngine::Texture2D*, int32_t)>(&::JBooth::MicroVerseCore::PreviewRenderer::Draw)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x181448a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {"Draw", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::PreviewRenderer.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Terrain*, ::UnityEngine::Transform*, ::UnityEngine::Vector2, ::UnityEngine::Color, ::UnityEngine::Texture2D*, int32_t)>(&::JBooth::MicroVerseCore::PreviewRenderer::Draw)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1814487d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {"Draw", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::PreviewRenderer.SetupDrawing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Terrain*, ::UnityEngine::Material*)>(&::JBooth::MicroVerseCore::PreviewRenderer::SetupDrawing)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x181448f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {"SetupDrawing", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::PreviewRenderer.SetupDrawing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Terrain*, ::UnityEngine::Transform*, ::UnityEngine::Material*)>(&::JBooth::MicroVerseCore::PreviewRenderer::SetupDrawing)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181448ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {"SetupDrawing", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::PreviewRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::PreviewRenderer::*)()>(&::JBooth::MicroVerseCore::PreviewRenderer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void JBooth::MicroVerseCore::PreviewRenderer::setStaticF_brushPreviewMat(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "brushPreviewMat", ::JBooth::MicroVerseCore::PreviewRenderer*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> JBooth::MicroVerseCore::PreviewRenderer::getStaticF_brushPreviewMat()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "brushPreviewMat", ::JBooth::MicroVerseCore::PreviewRenderer*>();
}
inline void JBooth::MicroVerseCore::PreviewRenderer::setStaticF_noiseMat(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "noiseMat", ::JBooth::MicroVerseCore::PreviewRenderer*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> JBooth::MicroVerseCore::PreviewRenderer::getStaticF_noiseMat()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "noiseMat", ::JBooth::MicroVerseCore::PreviewRenderer*>();
}
inline void JBooth::MicroVerseCore::PreviewRenderer::setStaticF_filterSetMat(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "filterSetMat", ::JBooth::MicroVerseCore::PreviewRenderer*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> JBooth::MicroVerseCore::PreviewRenderer::getStaticF_filterSetMat()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "filterSetMat", ::JBooth::MicroVerseCore::PreviewRenderer*>();
}
inline void JBooth::MicroVerseCore::PreviewRenderer::setStaticF_noisePreview(::JBooth::MicroVerseCore::Noise*  value)  {
::cordl_internals::setStaticField<::JBooth::MicroVerseCore::Noise*, "noisePreview", ::JBooth::MicroVerseCore::PreviewRenderer*>(std::forward<::JBooth::MicroVerseCore::Noise*>(value));
}
inline ::JBooth::MicroVerseCore::Noise* JBooth::MicroVerseCore::PreviewRenderer::getStaticF_noisePreview()  {
return ::cordl_internals::getStaticField<::JBooth::MicroVerseCore::Noise*, "noisePreview", ::JBooth::MicroVerseCore::PreviewRenderer*>();
}
inline void JBooth::MicroVerseCore::PreviewRenderer::setStaticF_filter(::JBooth::MicroVerseCore::FilterSet_Filter*  value)  {
::cordl_internals::setStaticField<::JBooth::MicroVerseCore::FilterSet_Filter*, "filter", ::JBooth::MicroVerseCore::PreviewRenderer*>(std::forward<::JBooth::MicroVerseCore::FilterSet_Filter*>(value));
}
inline ::JBooth::MicroVerseCore::FilterSet_Filter* JBooth::MicroVerseCore::PreviewRenderer::getStaticF_filter()  {
return ::cordl_internals::getStaticField<::JBooth::MicroVerseCore::FilterSet_Filter*, "filter", ::JBooth::MicroVerseCore::PreviewRenderer*>();
}
inline void JBooth::MicroVerseCore::PreviewRenderer::setStaticF_filterSet(::JBooth::MicroVerseCore::FilterSet*  value)  {
::cordl_internals::setStaticField<::JBooth::MicroVerseCore::FilterSet*, "filterSet", ::JBooth::MicroVerseCore::PreviewRenderer*>(std::forward<::JBooth::MicroVerseCore::FilterSet*>(value));
}
inline ::JBooth::MicroVerseCore::FilterSet* JBooth::MicroVerseCore::PreviewRenderer::getStaticF_filterSet()  {
return ::cordl_internals::getStaticField<::JBooth::MicroVerseCore::FilterSet*, "filterSet", ::JBooth::MicroVerseCore::PreviewRenderer*>();
}
inline void JBooth::MicroVerseCore::PreviewRenderer::setStaticF_filterSetType(::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType  value)  {
::cordl_internals::setStaticField<::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType, "filterSetType", ::JBooth::MicroVerseCore::PreviewRenderer*>(std::forward<::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType>(value));
}
inline ::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType JBooth::MicroVerseCore::PreviewRenderer::getStaticF_filterSetType()  {
return ::cordl_internals::getStaticField<::JBooth::MicroVerseCore::PreviewRenderer_FilterSetType, "filterSetType", ::JBooth::MicroVerseCore::PreviewRenderer*>();
}
inline float_t JBooth::MicroVerseCore::PreviewRenderer::get_kNormalizedHeightScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {"get_kNormalizedHeightScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void JBooth::MicroVerseCore::PreviewRenderer::DrawNoisePreview()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {"DrawNoisePreview", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void JBooth::MicroVerseCore::PreviewRenderer::DrawFilterSetPreview()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {"DrawFilterSetPreview", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void JBooth::MicroVerseCore::PreviewRenderer::DrawStampPreview(::JBooth::MicroVerseCore::IModifier*  mod, ::ArrayW<::UnityEngine::Terrain*>  terrains, ::UnityEngine::Transform*  transform, ::JBooth::MicroVerseCore::FalloffFilter*  filter, ::UnityEngine::Color  color, ::UnityEngine::Texture2D*  colorTex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {"DrawStampPreview", {}, {::i2c::type_of<::JBooth::MicroVerseCore::IModifier*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::JBooth::MicroVerseCore::FalloffFilter*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mod, terrains, transform, filter, color, colorTex);
}
inline void JBooth::MicroVerseCore::PreviewRenderer::Draw(::UnityEngine::Terrain*  terrain, ::UnityEngine::Texture2D*  tex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {"Draw", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrain, tex);
}
inline void JBooth::MicroVerseCore::PreviewRenderer::Draw(::UnityEngine::Terrain*  terrain, ::UnityEngine::Transform*  transform, ::UnityEngine::Texture2D*  tex, ::UnityEngine::Color  color, ::UnityEngine::Texture2D*  colorTex, int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {"Draw", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrain, transform, tex, color, colorTex, channel);
}
inline void JBooth::MicroVerseCore::PreviewRenderer::Draw(::UnityEngine::Terrain*  terrain, ::UnityEngine::Transform*  transform, ::UnityEngine::Vector2  falloffRange, ::UnityEngine::Color  color, ::UnityEngine::Texture2D*  colorTex, int32_t  falloffChannel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {"Draw", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrain, transform, falloffRange, color, colorTex, falloffChannel);
}
inline int32_t JBooth::MicroVerseCore::PreviewRenderer::SetupDrawing(::UnityEngine::Terrain*  terrain, ::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {"SetupDrawing", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, terrain, mat);
}
inline int32_t JBooth::MicroVerseCore::PreviewRenderer::SetupDrawing(::UnityEngine::Terrain*  terrain, ::UnityEngine::Transform*  stampTransform, ::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {"SetupDrawing", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, terrain, stampTransform, mat);
}
inline void JBooth::MicroVerseCore::PreviewRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PreviewRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::PreviewRenderer* JBooth::MicroVerseCore::PreviewRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::PreviewRenderer*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::PreviewRenderer::PreviewRenderer()   {
}
