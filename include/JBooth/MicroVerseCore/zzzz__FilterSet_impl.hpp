#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/FilterSet.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__FilterSet_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__FalloffFilter_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__FilterSet_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Noise_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::FilterSet_NoiseOp::FilterSet_NoiseOp(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::FilterSet_NoiseOp::FilterSet_NoiseOp()   {
}
constexpr ::JBooth::MicroVerseCore::FilterSet_NoiseOp  JBooth::MicroVerseCore::FilterSet_NoiseOp::Add{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::FilterSet_NoiseOp  JBooth::MicroVerseCore::FilterSet_NoiseOp::Subtract{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::FilterSet_NoiseOp  JBooth::MicroVerseCore::FilterSet_NoiseOp::Multiply{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::FilterSet_NoiseOp  JBooth::MicroVerseCore::FilterSet_NoiseOp::Overlay{static_cast<int32_t>(0x3)};
constexpr ::JBooth::MicroVerseCore::FilterSet_NoiseOp  JBooth::MicroVerseCore::FilterSet_NoiseOp::Min{static_cast<int32_t>(0x4)};
constexpr ::JBooth::MicroVerseCore::FilterSet_NoiseOp  JBooth::MicroVerseCore::FilterSet_NoiseOp::Max{static_cast<int32_t>(0x5)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::Filter_FilterSet_FilterType::Filter_FilterSet_FilterType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Filter_FilterSet_FilterType::Filter_FilterSet_FilterType()   {
}
constexpr ::JBooth::MicroVerseCore::Filter_FilterSet_FilterType  JBooth::MicroVerseCore::Filter_FilterSet_FilterType::Simple{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::Filter_FilterSet_FilterType  JBooth::MicroVerseCore::Filter_FilterSet_FilterType::Curve{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FilterSet_Filter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FilterSet_Filter::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::JBooth::MicroVerseCore::FilterSet_Filter::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181430270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet_Filter*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FilterSet_Filter.get_curveTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::JBooth::MicroVerseCore::FilterSet_Filter::*)()>(&::JBooth::MicroVerseCore::FilterSet_Filter::get_curveTexture)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181430490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet_Filter*>(),
                        {"get_curveTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_get_enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabled;
}
constexpr bool const& JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_get_enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabled;
}
constexpr void JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_set_enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enabled = value;
}
constexpr ::JBooth::MicroVerseCore::Filter_FilterSet_FilterType& JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_get_filterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterType;
}
constexpr ::JBooth::MicroVerseCore::Filter_FilterSet_FilterType const& JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_get_filterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterType;
}
constexpr void JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_set_filterType(::JBooth::MicroVerseCore::Filter_FilterSet_FilterType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filterType = value;
}
constexpr float_t& JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_get_weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight;
}
constexpr float_t const& JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_get_weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight;
}
constexpr void JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_set_weight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weight = value;
}
constexpr ::UnityEngine::Vector2& JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_get_range()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr ::UnityEngine::Vector2 const& JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_get_range() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr void JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_set_range(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___range = value;
}
constexpr ::UnityEngine::Vector2& JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_get_smoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothness;
}
constexpr ::UnityEngine::Vector2 const& JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_get_smoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothness;
}
constexpr void JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_set_smoothness(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothness = value;
}
constexpr ::JBooth::MicroVerseCore::Noise*& JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_get_noise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noise;
}
constexpr ::JBooth::MicroVerseCore::Noise* const& JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_get_noise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noise;
}
constexpr void JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_set_noise(::JBooth::MicroVerseCore::Noise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noise = value;
}
constexpr float_t& JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_get_mipBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mipBias;
}
constexpr float_t const& JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_get_mipBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mipBias;
}
constexpr void JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_set_mipBias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mipBias = value;
}
constexpr ::UnityEngine::AnimationCurve*& JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_get_curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curve;
}
constexpr ::UnityEngine::AnimationCurve* const& JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_get_curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curve;
}
constexpr void JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_set_curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curve = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_get__curveTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curveTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_get__curveTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curveTexture;
}
constexpr void JBooth::MicroVerseCore::FilterSet_Filter::__cordl_internal_set__curveTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____curveTexture = value;
}
inline void JBooth::MicroVerseCore::FilterSet_Filter::_ctor(::UnityEngine::Vector2  range, ::UnityEngine::Vector2  smoothness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet_Filter*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, range, smoothness);
}
inline ::UnityW<::UnityEngine::Texture2D> JBooth::MicroVerseCore::FilterSet_Filter::get_curveTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet_Filter*>(),
                        {"get_curveTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::FilterSet_Filter* JBooth::MicroVerseCore::FilterSet_Filter::New_ctor(::UnityEngine::Vector2  range, ::UnityEngine::Vector2  smoothness)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::FilterSet_Filter*>(range, smoothness));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::FilterSet_Filter::FilterSet_Filter()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::FilterSet_TextureFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FilterSet_TextureFilter::*)()>(&::JBooth::MicroVerseCore::FilterSet_TextureFilter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18143d020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet_TextureFilter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::TerrainLayer>& JBooth::MicroVerseCore::FilterSet_TextureFilter::__cordl_internal_get_layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr ::UnityW<::UnityEngine::TerrainLayer> const& JBooth::MicroVerseCore::FilterSet_TextureFilter::__cordl_internal_get_layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr void JBooth::MicroVerseCore::FilterSet_TextureFilter::__cordl_internal_set_layer(::UnityW<::UnityEngine::TerrainLayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layer = value;
}
constexpr float_t& JBooth::MicroVerseCore::FilterSet_TextureFilter::__cordl_internal_get_weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight;
}
constexpr float_t const& JBooth::MicroVerseCore::FilterSet_TextureFilter::__cordl_internal_get_weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight;
}
constexpr void JBooth::MicroVerseCore::FilterSet_TextureFilter::__cordl_internal_set_weight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weight = value;
}
constexpr float_t& JBooth::MicroVerseCore::FilterSet_TextureFilter::__cordl_internal_get_amplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amplitude;
}
constexpr float_t const& JBooth::MicroVerseCore::FilterSet_TextureFilter::__cordl_internal_get_amplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amplitude;
}
constexpr void JBooth::MicroVerseCore::FilterSet_TextureFilter::__cordl_internal_set_amplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___amplitude = value;
}
constexpr float_t& JBooth::MicroVerseCore::FilterSet_TextureFilter::__cordl_internal_get_balance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balance;
}
constexpr float_t const& JBooth::MicroVerseCore::FilterSet_TextureFilter::__cordl_internal_get_balance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balance;
}
constexpr void JBooth::MicroVerseCore::FilterSet_TextureFilter::__cordl_internal_set_balance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___balance = value;
}
inline void JBooth::MicroVerseCore::FilterSet_TextureFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet_TextureFilter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::FilterSet_TextureFilter* JBooth::MicroVerseCore::FilterSet_TextureFilter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::FilterSet_TextureFilter*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::FilterSet_TextureFilter::FilterSet_TextureFilter()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::FilterSet.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FilterSet::*)()>(&::JBooth::MicroVerseCore::FilterSet::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FilterSet.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FilterSet::*)()>(&::JBooth::MicroVerseCore::FilterSet::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18142d160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FilterSet.ScaleAllNoises
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FilterSet::*)(float_t)>(&::JBooth::MicroVerseCore::FilterSet::ScaleAllNoises)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18142f4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {"ScaleAllNoises", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FilterSet.NeedCurvatureMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::FilterSet::*)()>(&::JBooth::MicroVerseCore::FilterSet::NeedCurvatureMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18142d120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FilterSet.NeedFlowMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::FilterSet::*)()>(&::JBooth::MicroVerseCore::FilterSet::NeedFlowMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18142d140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {"NeedFlowMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FilterSet.GetTextureWeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector4> (::JBooth::MicroVerseCore::FilterSet::*)(::ArrayW<::UnityEngine::TerrainLayer*>)>(&::JBooth::MicroVerseCore::FilterSet::GetTextureWeights)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18142cf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {"GetTextureWeights", {}, {::i2c::type_of<::ArrayW<::UnityEngine::TerrainLayer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FilterSet.PrepareTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FilterSet::*)(::UnityEngine::Transform*, ::UnityEngine::Terrain*, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::StringW>*, float_t)>(&::JBooth::MicroVerseCore::FilterSet::PrepareTransform)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x18142f070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {"PrepareTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FilterSet.PrepareMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FilterSet::*)(::UnityEngine::Transform*, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::StringW>*)>(&::JBooth::MicroVerseCore::FilterSet::PrepareMaterial)> {
  constexpr static std::size_t size = 0x1920;
  constexpr static std::size_t addrs = 0x18142d2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {"PrepareMaterial", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FilterSet.PrepareSDFFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::JBooth::MicroVerseCore::Stamp_KeywordBuilder*, ::UnityEngine::Material*, ::UnityEngine::Transform*, ::JBooth::MicroVerseCore::OcclusionData*, float_t, bool, float_t, float_t, float_t, float_t, float_t, float_t)>(&::JBooth::MicroVerseCore::FilterSet::PrepareSDFFilter)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x18142ec10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {"PrepareSDFFilter", {}, {::i2c::type_of<::JBooth::MicroVerseCore::Stamp_KeywordBuilder*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::FilterSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FilterSet::*)()>(&::JBooth::MicroVerseCore::FilterSet::_ctor)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x18142ff20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::FalloffFilter*& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_falloffFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloffFilter;
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter* const& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_falloffFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloffFilter;
}
constexpr void JBooth::MicroVerseCore::FilterSet::__cordl_internal_set_falloffFilter(::JBooth::MicroVerseCore::FalloffFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___falloffFilter = value;
}
constexpr float_t& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight;
}
constexpr float_t const& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight;
}
constexpr void JBooth::MicroVerseCore::FilterSet::__cordl_internal_set_weight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weight = value;
}
constexpr ::JBooth::MicroVerseCore::Noise*& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_weightNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weightNoise;
}
constexpr ::JBooth::MicroVerseCore::Noise* const& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_weightNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weightNoise;
}
constexpr void JBooth::MicroVerseCore::FilterSet::__cordl_internal_set_weightNoise(::JBooth::MicroVerseCore::Noise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weightNoise = value;
}
constexpr ::JBooth::MicroVerseCore::Noise*& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_weight2Noise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight2Noise;
}
constexpr ::JBooth::MicroVerseCore::Noise* const& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_weight2Noise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight2Noise;
}
constexpr void JBooth::MicroVerseCore::FilterSet::__cordl_internal_set_weight2Noise(::JBooth::MicroVerseCore::Noise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weight2Noise = value;
}
constexpr ::JBooth::MicroVerseCore::Noise*& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_weight3Noise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight3Noise;
}
constexpr ::JBooth::MicroVerseCore::Noise* const& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_weight3Noise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight3Noise;
}
constexpr void JBooth::MicroVerseCore::FilterSet::__cordl_internal_set_weight3Noise(::JBooth::MicroVerseCore::Noise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weight3Noise = value;
}
constexpr ::JBooth::MicroVerseCore::FilterSet_NoiseOp& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_weight2NoiseOp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight2NoiseOp;
}
constexpr ::JBooth::MicroVerseCore::FilterSet_NoiseOp const& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_weight2NoiseOp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight2NoiseOp;
}
constexpr void JBooth::MicroVerseCore::FilterSet::__cordl_internal_set_weight2NoiseOp(::JBooth::MicroVerseCore::FilterSet_NoiseOp  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weight2NoiseOp = value;
}
constexpr ::JBooth::MicroVerseCore::FilterSet_NoiseOp& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_weight3NoiseOp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight3NoiseOp;
}
constexpr ::JBooth::MicroVerseCore::FilterSet_NoiseOp const& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_weight3NoiseOp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight3NoiseOp;
}
constexpr void JBooth::MicroVerseCore::FilterSet::__cordl_internal_set_weight3NoiseOp(::JBooth::MicroVerseCore::FilterSet_NoiseOp  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weight3NoiseOp = value;
}
constexpr int32_t& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr int32_t const& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void JBooth::MicroVerseCore::FilterSet::__cordl_internal_set_version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
constexpr ::JBooth::MicroVerseCore::FilterSet_Filter*& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_heightFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightFilter;
}
constexpr ::JBooth::MicroVerseCore::FilterSet_Filter* const& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_heightFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightFilter;
}
constexpr void JBooth::MicroVerseCore::FilterSet::__cordl_internal_set_heightFilter(::JBooth::MicroVerseCore::FilterSet_Filter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightFilter = value;
}
constexpr ::JBooth::MicroVerseCore::FilterSet_Filter*& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_slopeFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slopeFilter;
}
constexpr ::JBooth::MicroVerseCore::FilterSet_Filter* const& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_slopeFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slopeFilter;
}
constexpr void JBooth::MicroVerseCore::FilterSet::__cordl_internal_set_slopeFilter(::JBooth::MicroVerseCore::FilterSet_Filter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slopeFilter = value;
}
constexpr ::JBooth::MicroVerseCore::FilterSet_Filter*& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_angleFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleFilter;
}
constexpr ::JBooth::MicroVerseCore::FilterSet_Filter* const& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_angleFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleFilter;
}
constexpr void JBooth::MicroVerseCore::FilterSet::__cordl_internal_set_angleFilter(::JBooth::MicroVerseCore::FilterSet_Filter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleFilter = value;
}
constexpr ::JBooth::MicroVerseCore::FilterSet_Filter*& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_curvatureFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curvatureFilter;
}
constexpr ::JBooth::MicroVerseCore::FilterSet_Filter* const& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_curvatureFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curvatureFilter;
}
constexpr void JBooth::MicroVerseCore::FilterSet::__cordl_internal_set_curvatureFilter(::JBooth::MicroVerseCore::FilterSet_Filter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curvatureFilter = value;
}
constexpr ::JBooth::MicroVerseCore::FilterSet_Filter*& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_flowFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowFilter;
}
constexpr ::JBooth::MicroVerseCore::FilterSet_Filter* const& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_flowFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowFilter;
}
constexpr void JBooth::MicroVerseCore::FilterSet::__cordl_internal_set_flowFilter(::JBooth::MicroVerseCore::FilterSet_Filter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flowFilter = value;
}
constexpr bool& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_textureFilterEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureFilterEnabled;
}
constexpr bool const& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_textureFilterEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureFilterEnabled;
}
constexpr void JBooth::MicroVerseCore::FilterSet::__cordl_internal_set_textureFilterEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureFilterEnabled = value;
}
constexpr float_t& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_otherTextureWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherTextureWeight;
}
constexpr float_t const& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_otherTextureWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherTextureWeight;
}
constexpr void JBooth::MicroVerseCore::FilterSet::__cordl_internal_set_otherTextureWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___otherTextureWeight = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::FilterSet_TextureFilter*>*& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_textureFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureFilters;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::FilterSet_TextureFilter*>* const& JBooth::MicroVerseCore::FilterSet::__cordl_internal_get_textureFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureFilters;
}
constexpr void JBooth::MicroVerseCore::FilterSet::__cordl_internal_set_textureFilters(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::FilterSet_TextureFilter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureFilters = value;
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF_terrainLayerWeights(::ArrayW<::UnityEngine::Vector4>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector4>, "terrainLayerWeights", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<::ArrayW<::UnityEngine::Vector4>>(value));
}
inline ::ArrayW<::UnityEngine::Vector4> JBooth::MicroVerseCore::FilterSet::getStaticF_terrainLayerWeights()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector4>, "terrainLayerWeights", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__Transform(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Transform", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__Transform()  {
return ::cordl_internals::getStaticField<int32_t, "_Transform", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__RealSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_RealSize", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__RealSize()  {
return ::cordl_internals::getStaticField<int32_t, "_RealSize", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__Weight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Weight", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__Weight()  {
return ::cordl_internals::getStaticField<int32_t, "_Weight", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__NoiseUV(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_NoiseUV", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__NoiseUV()  {
return ::cordl_internals::getStaticField<int32_t, "_NoiseUV", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__WeightNoise(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_WeightNoise", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__WeightNoise()  {
return ::cordl_internals::getStaticField<int32_t, "_WeightNoise", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__WeightNoise2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_WeightNoise2", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__WeightNoise2()  {
return ::cordl_internals::getStaticField<int32_t, "_WeightNoise2", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__WeightNoiseChannel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_WeightNoiseChannel", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__WeightNoiseChannel()  {
return ::cordl_internals::getStaticField<int32_t, "_WeightNoiseChannel", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__WeightNoiseTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_WeightNoiseTexture", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__WeightNoiseTexture()  {
return ::cordl_internals::getStaticField<int32_t, "_WeightNoiseTexture", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__Weight2Noise(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Weight2Noise", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__Weight2Noise()  {
return ::cordl_internals::getStaticField<int32_t, "_Weight2Noise", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__Weight2Noise2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Weight2Noise2", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__Weight2Noise2()  {
return ::cordl_internals::getStaticField<int32_t, "_Weight2Noise2", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__Weight2NoiseTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Weight2NoiseTexture", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__Weight2NoiseTexture()  {
return ::cordl_internals::getStaticField<int32_t, "_Weight2NoiseTexture", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__Weight2NoiseChannel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Weight2NoiseChannel", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__Weight2NoiseChannel()  {
return ::cordl_internals::getStaticField<int32_t, "_Weight2NoiseChannel", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__Weight3Noise(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Weight3Noise", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__Weight3Noise()  {
return ::cordl_internals::getStaticField<int32_t, "_Weight3Noise", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__Weight3Noise2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Weight3Noise2", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__Weight3Noise2()  {
return ::cordl_internals::getStaticField<int32_t, "_Weight3Noise2", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__Weight3NoiseTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Weight3NoiseTexture", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__Weight3NoiseTexture()  {
return ::cordl_internals::getStaticField<int32_t, "_Weight3NoiseTexture", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__Weight3NoiseChannel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Weight3NoiseChannel", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__Weight3NoiseChannel()  {
return ::cordl_internals::getStaticField<int32_t, "_Weight3NoiseChannel", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__Weight2NoiseOp(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Weight2NoiseOp", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__Weight2NoiseOp()  {
return ::cordl_internals::getStaticField<int32_t, "_Weight2NoiseOp", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__Weight3NoiseOp(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Weight3NoiseOp", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__Weight3NoiseOp()  {
return ::cordl_internals::getStaticField<int32_t, "_Weight3NoiseOp", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__HeightWeight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_HeightWeight", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__HeightWeight()  {
return ::cordl_internals::getStaticField<int32_t, "_HeightWeight", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__HeightRange(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_HeightRange", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__HeightRange()  {
return ::cordl_internals::getStaticField<int32_t, "_HeightRange", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__HeightSmoothness(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_HeightSmoothness", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__HeightSmoothness()  {
return ::cordl_internals::getStaticField<int32_t, "_HeightSmoothness", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__HeightNoise1(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_HeightNoise1", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__HeightNoise1()  {
return ::cordl_internals::getStaticField<int32_t, "_HeightNoise1", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__HeightNoise2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_HeightNoise2", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__HeightNoise2()  {
return ::cordl_internals::getStaticField<int32_t, "_HeightNoise2", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__HeightNoiseTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_HeightNoiseTexture", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__HeightNoiseTexture()  {
return ::cordl_internals::getStaticField<int32_t, "_HeightNoiseTexture", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__HeightNoiseChannel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_HeightNoiseChannel", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__HeightNoiseChannel()  {
return ::cordl_internals::getStaticField<int32_t, "_HeightNoiseChannel", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__SlopeWeight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SlopeWeight", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__SlopeWeight()  {
return ::cordl_internals::getStaticField<int32_t, "_SlopeWeight", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__SlopeRange(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SlopeRange", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__SlopeRange()  {
return ::cordl_internals::getStaticField<int32_t, "_SlopeRange", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__SlopeSmoothness(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SlopeSmoothness", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__SlopeSmoothness()  {
return ::cordl_internals::getStaticField<int32_t, "_SlopeSmoothness", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__SlopeNoise(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SlopeNoise", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__SlopeNoise()  {
return ::cordl_internals::getStaticField<int32_t, "_SlopeNoise", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__SlopeNoise2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SlopeNoise2", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__SlopeNoise2()  {
return ::cordl_internals::getStaticField<int32_t, "_SlopeNoise2", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__SlopeNoiseTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SlopeNoiseTexture", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__SlopeNoiseTexture()  {
return ::cordl_internals::getStaticField<int32_t, "_SlopeNoiseTexture", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__SlopeNoiseChannel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SlopeNoiseChannel", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__SlopeNoiseChannel()  {
return ::cordl_internals::getStaticField<int32_t, "_SlopeNoiseChannel", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__AngleWeight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AngleWeight", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__AngleWeight()  {
return ::cordl_internals::getStaticField<int32_t, "_AngleWeight", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__AngleRange(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AngleRange", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__AngleRange()  {
return ::cordl_internals::getStaticField<int32_t, "_AngleRange", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__AngleSmoothness(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AngleSmoothness", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__AngleSmoothness()  {
return ::cordl_internals::getStaticField<int32_t, "_AngleSmoothness", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__AngleNoise(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AngleNoise", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__AngleNoise()  {
return ::cordl_internals::getStaticField<int32_t, "_AngleNoise", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__AngleNoise2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AngleNoise2", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__AngleNoise2()  {
return ::cordl_internals::getStaticField<int32_t, "_AngleNoise2", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__AngleNoiseTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AngleNoiseTexture", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__AngleNoiseTexture()  {
return ::cordl_internals::getStaticField<int32_t, "_AngleNoiseTexture", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__AngleNoiseChannel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AngleNoiseChannel", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__AngleNoiseChannel()  {
return ::cordl_internals::getStaticField<int32_t, "_AngleNoiseChannel", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__CurvatureWeight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CurvatureWeight", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__CurvatureWeight()  {
return ::cordl_internals::getStaticField<int32_t, "_CurvatureWeight", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__CurvatureRange(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CurvatureRange", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__CurvatureRange()  {
return ::cordl_internals::getStaticField<int32_t, "_CurvatureRange", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__CurvatureSmoothness(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CurvatureSmoothness", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__CurvatureSmoothness()  {
return ::cordl_internals::getStaticField<int32_t, "_CurvatureSmoothness", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__CurvatureNoise(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CurvatureNoise", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__CurvatureNoise()  {
return ::cordl_internals::getStaticField<int32_t, "_CurvatureNoise", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__CurvatureNoise2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CurvatureNoise2", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__CurvatureNoise2()  {
return ::cordl_internals::getStaticField<int32_t, "_CurvatureNoise2", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__CurvatureNoiseTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CurvatureNoiseTexture", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__CurvatureNoiseTexture()  {
return ::cordl_internals::getStaticField<int32_t, "_CurvatureNoiseTexture", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__CurvatureNoiseChannel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CurvatureNoiseChannel", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__CurvatureNoiseChannel()  {
return ::cordl_internals::getStaticField<int32_t, "_CurvatureNoiseChannel", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__CurvatureMipBias(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CurvatureMipBias", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__CurvatureMipBias()  {
return ::cordl_internals::getStaticField<int32_t, "_CurvatureMipBias", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__FlowWeight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_FlowWeight", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__FlowWeight()  {
return ::cordl_internals::getStaticField<int32_t, "_FlowWeight", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__FlowRange(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_FlowRange", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__FlowRange()  {
return ::cordl_internals::getStaticField<int32_t, "_FlowRange", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__FlowSmoothness(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_FlowSmoothness", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__FlowSmoothness()  {
return ::cordl_internals::getStaticField<int32_t, "_FlowSmoothness", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__FlowNoise(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_FlowNoise", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__FlowNoise()  {
return ::cordl_internals::getStaticField<int32_t, "_FlowNoise", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__FlowNoise2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_FlowNoise2", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__FlowNoise2()  {
return ::cordl_internals::getStaticField<int32_t, "_FlowNoise2", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__FlowNoiseTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_FlowNoiseTexture", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__FlowNoiseTexture()  {
return ::cordl_internals::getStaticField<int32_t, "_FlowNoiseTexture", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__FlowNoiseChannel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_FlowNoiseChannel", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__FlowNoiseChannel()  {
return ::cordl_internals::getStaticField<int32_t, "_FlowNoiseChannel", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__HeightCurve(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_HeightCurve", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__HeightCurve()  {
return ::cordl_internals::getStaticField<int32_t, "_HeightCurve", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__SlopeCurve(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SlopeCurve", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__SlopeCurve()  {
return ::cordl_internals::getStaticField<int32_t, "_SlopeCurve", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__AngleCurve(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_AngleCurve", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__AngleCurve()  {
return ::cordl_internals::getStaticField<int32_t, "_AngleCurve", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__CurvatureCurve(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CurvatureCurve", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__CurvatureCurve()  {
return ::cordl_internals::getStaticField<int32_t, "_CurvatureCurve", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__FlowCurve(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_FlowCurve", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__FlowCurve()  {
return ::cordl_internals::getStaticField<int32_t, "_FlowCurve", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__GlobalOriginMTX(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_GlobalOriginMTX", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__GlobalOriginMTX()  {
return ::cordl_internals::getStaticField<int32_t, "_GlobalOriginMTX", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__TerrainSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_TerrainSize", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__TerrainSize()  {
return ::cordl_internals::getStaticField<int32_t, "_TerrainSize", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__PlacementSDF(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_PlacementSDF", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__PlacementSDF()  {
return ::cordl_internals::getStaticField<int32_t, "_PlacementSDF", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__PlacementSDF2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_PlacementSDF2", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__PlacementSDF2()  {
return ::cordl_internals::getStaticField<int32_t, "_PlacementSDF2", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__PlacementSDF3(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_PlacementSDF3", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__PlacementSDF3()  {
return ::cordl_internals::getStaticField<int32_t, "_PlacementSDF3", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__DistancesFromTrees(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DistancesFromTrees", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__DistancesFromTrees()  {
return ::cordl_internals::getStaticField<int32_t, "_DistancesFromTrees", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__DistancesFromObject(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DistancesFromObject", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__DistancesFromObject()  {
return ::cordl_internals::getStaticField<int32_t, "_DistancesFromObject", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__DistancesFromParent(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DistancesFromParent", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__DistancesFromParent()  {
return ::cordl_internals::getStaticField<int32_t, "_DistancesFromParent", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::setStaticF__SDFClamp(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SDFClamp", ::JBooth::MicroVerseCore::FilterSet*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::FilterSet::getStaticF__SDFClamp()  {
return ::cordl_internals::getStaticField<int32_t, "_SDFClamp", ::JBooth::MicroVerseCore::FilterSet*>();
}
inline void JBooth::MicroVerseCore::FilterSet::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::FilterSet::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::FilterSet::ScaleAllNoises(float_t  factor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {"ScaleAllNoises", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, factor);
}
inline bool JBooth::MicroVerseCore::FilterSet::NeedCurvatureMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {"NeedCurvatureMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::FilterSet::NeedFlowMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {"NeedFlowMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector4> JBooth::MicroVerseCore::FilterSet::GetTextureWeights(::ArrayW<::UnityEngine::TerrainLayer*>  layers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {"GetTextureWeights", {}, {::i2c::type_of<::ArrayW<::UnityEngine::TerrainLayer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>>(this, ___internal_method, layers);
}
inline void JBooth::MicroVerseCore::FilterSet::PrepareTransform(::UnityEngine::Transform*  transform, ::UnityEngine::Terrain*  terrain, ::UnityEngine::Material*  material, ::System::Collections::Generic::List_1<::StringW>*  keywords, float_t  densityScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {"PrepareTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform, terrain, material, keywords, densityScale);
}
inline void JBooth::MicroVerseCore::FilterSet::PrepareMaterial(::UnityEngine::Transform*  transform, ::UnityEngine::Material*  material, ::System::Collections::Generic::List_1<::StringW>*  keywords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {"PrepareMaterial", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform, material, keywords);
}
inline void JBooth::MicroVerseCore::FilterSet::PrepareSDFFilter(::JBooth::MicroVerseCore::Stamp_KeywordBuilder*  keywords, ::UnityEngine::Material*  material, ::UnityEngine::Transform*  transform, ::JBooth::MicroVerseCore::OcclusionData*  od, float_t  ratio, bool  sdfClamp, float_t  minTree, float_t  maxTree, float_t  minObj, float_t  maxObj, float_t  minParent, float_t  maxParent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {"PrepareSDFFilter", {}, {::i2c::type_of<::JBooth::MicroVerseCore::Stamp_KeywordBuilder*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::JBooth::MicroVerseCore::OcclusionData*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keywords, material, transform, od, ratio, sdfClamp, minTree, maxTree, minObj, maxObj, minParent, maxParent);
}
inline void JBooth::MicroVerseCore::FilterSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FilterSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::FilterSet* JBooth::MicroVerseCore::FilterSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::FilterSet*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  JBooth::MicroVerseCore::FilterSet::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* JBooth::MicroVerseCore::FilterSet::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::FilterSet::FilterSet()   {
}
