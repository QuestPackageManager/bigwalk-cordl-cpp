#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioUtility_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioUtility.GetTerrainTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Terrain*, ::UnityEngine::Vector3, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<float_t>, ::by_ref<float_t>, bool)>(&::GlobalNamespace::AudioUtility::GetTerrainTexture)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x18032a7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtility*>(),
                        {"GetTerrainTexture", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtility.GetTerrainDetailDensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Terrain*, ::UnityEngine::Vector3, int32_t, bool)>(&::GlobalNamespace::AudioUtility::GetTerrainDetailDensity)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x18032a4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtility*>(),
                        {"GetTerrainDetailDensity", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtility.GetTextureColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Terrain*, ::UnityEngine::Texture2D*, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Color>)>(&::GlobalNamespace::AudioUtility::GetTextureColor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18032ab70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtility*>(),
                        {"GetTextureColor", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AudioUtility::setStaticF_s_alphaMapLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::System::Object*>*, "s_alphaMapLookup", ::GlobalNamespace::AudioUtility*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::System::Object*>* GlobalNamespace::AudioUtility::getStaticF_s_alphaMapLookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::System::Object*>*, "s_alphaMapLookup", ::GlobalNamespace::AudioUtility*>();
}
inline void GlobalNamespace::AudioUtility::setStaticF_s_detailMapLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::ArrayW<::System::Object*>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::ArrayW<::System::Object*>>*, "s_detailMapLookup", ::GlobalNamespace::AudioUtility*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::ArrayW<::System::Object*>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::ArrayW<::System::Object*>>* GlobalNamespace::AudioUtility::getStaticF_s_detailMapLookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::ArrayW<::System::Object*>>*, "s_detailMapLookup", ::GlobalNamespace::AudioUtility*>();
}
inline void GlobalNamespace::AudioUtility::GetTerrainTexture(::UnityEngine::Terrain*  terrain, ::UnityEngine::Vector3  testPos, ::by_ref<int32_t>  largestIndex, ::by_ref<int32_t>  secondLargestIndex, ::by_ref<float_t>  largestProportion, ::by_ref<float_t>  secondLargestProportion, bool  debug)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtility*>(),
                        {"GetTerrainTexture", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrain, testPos, largestIndex, secondLargestIndex, largestProportion, secondLargestProportion, debug);
}
inline int32_t GlobalNamespace::AudioUtility::GetTerrainDetailDensity(::UnityEngine::Terrain*  terrain, ::UnityEngine::Vector3  testPos, int32_t  detailIndex, bool  debug)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtility*>(),
                        {"GetTerrainDetailDensity", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, terrain, testPos, detailIndex, debug);
}
inline bool GlobalNamespace::AudioUtility::GetTextureColor(::UnityEngine::Terrain*  terrain, ::UnityEngine::Texture2D*  tex, ::UnityEngine::Vector3  worldPos, ::by_ref<::UnityEngine::Color>  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtility*>(),
                        {"GetTextureColor", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, terrain, tex, worldPos, color);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioUtility::AudioUtility()   {
}
