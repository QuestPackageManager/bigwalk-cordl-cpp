#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ITextureModifier.hpp"
#include "JBooth/MicroVerseCore/zzzz__ITextureModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TextureData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::ITextureModifier.ApplyTextureStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ITextureModifier::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::JBooth::MicroVerseCore::TextureData*, ::JBooth::MicroVerseCore::OcclusionData*)>(&::JBooth::MicroVerseCore::ITextureModifier::ApplyTextureStamp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::ITextureModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::ITextureModifier*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ITextureModifier.InqTerrainLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ITextureModifier::*)(::UnityEngine::Terrain*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*)>(&::JBooth::MicroVerseCore::ITextureModifier::InqTerrainLayers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::ITextureModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::ITextureModifier*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ITextureModifier.NeedCurvatureMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ITextureModifier::*)()>(&::JBooth::MicroVerseCore::ITextureModifier::NeedCurvatureMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::ITextureModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::ITextureModifier*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ITextureModifier.NeedFlowMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ITextureModifier::*)()>(&::JBooth::MicroVerseCore::ITextureModifier::NeedFlowMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::ITextureModifier*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::ITextureModifier*>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool JBooth::MicroVerseCore::ITextureModifier::ApplyTextureStamp(::UnityEngine::RenderTexture*  indexSrc, ::UnityEngine::RenderTexture*  indexDest, ::UnityEngine::RenderTexture*  weightSrc, ::UnityEngine::RenderTexture*  weightDest, ::JBooth::MicroVerseCore::TextureData*  splatmapData, ::JBooth::MicroVerseCore::OcclusionData*  od)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::ITextureModifier*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, indexSrc, indexDest, weightSrc, weightDest, splatmapData, od);
}
inline void JBooth::MicroVerseCore::ITextureModifier::InqTerrainLayers(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*  prototypes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::ITextureModifier*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, prototypes);
}
inline bool JBooth::MicroVerseCore::ITextureModifier::NeedCurvatureMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::ITextureModifier*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ITextureModifier::NeedFlowMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::ITextureModifier*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr  JBooth::MicroVerseCore::ITextureModifier::operator ::JBooth::MicroVerseCore::IModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* JBooth::MicroVerseCore::ITextureModifier::i___JBooth__MicroVerseCore__IModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
