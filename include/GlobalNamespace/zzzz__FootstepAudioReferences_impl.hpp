#pragma once
// IWYU pragma private; include "GlobalNamespace/FootstepAudioReferences.hpp"
#include "GlobalNamespace/zzzz__AudioRandomContainer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__TerrainData_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__FootstepAudioReferences_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioLayerContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioRandomContainer_def.hpp"
#include "GlobalNamespace/zzzz__FootstepAudioReferences_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "GlobalNamespace/zzzz__WaterDepthSampleData_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__MaskTarget_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepAudioReferences_FootstepSoundData::*)()>(&::GlobalNamespace::FootstepAudioReferences_FootstepSoundData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_Material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Material;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_Material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Material;
}
constexpr void GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_set_Material(::UnityW<::UnityEngine::PhysicsMaterial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Material = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_WalkSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WalkSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_WalkSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WalkSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_set_WalkSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WalkSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_RunSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RunSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_RunSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RunSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_set_RunSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RunSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_JumpSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JumpSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_JumpSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JumpSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_set_JumpSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JumpSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_LandSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LandSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_LandSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LandSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_set_LandSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LandSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_StopSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_StopSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_set_StopSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StopSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_SitSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SitSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_SitSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SitSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_set_SitSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SitSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_StandSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StandSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_StandSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StandSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_set_StandSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StandSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_SlidingSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SlidingSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_SlidingSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SlidingSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_set_SlidingSound(::UnityW<::GlobalNamespace::AudioLayerContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SlidingSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_HandSlideSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandSlideSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_get_HandSlideSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandSlideSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences_FootstepSoundData::__cordl_internal_set_HandSlideSound(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandSlideSound = value;
}
inline void GlobalNamespace::FootstepAudioReferences_FootstepSoundData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData* GlobalNamespace::FootstepAudioReferences_FootstepSoundData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData::FootstepAudioReferences_FootstepSoundData()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType::FootstepAudioReferences_VegetationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType::FootstepAudioReferences_VegetationType()   {
}
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType  GlobalNamespace::FootstepAudioReferences_VegetationType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType  GlobalNamespace::FootstepAudioReferences_VegetationType::Bush{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType  GlobalNamespace::FootstepAudioReferences_VegetationType::Fern{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType  GlobalNamespace::FootstepAudioReferences_VegetationType::GrassDry{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType  GlobalNamespace::FootstepAudioReferences_VegetationType::Grass{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType  GlobalNamespace::FootstepAudioReferences_VegetationType::Rush{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType  GlobalNamespace::FootstepAudioReferences_VegetationType::Stem{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType  GlobalNamespace::FootstepAudioReferences_VegetationType::Wiry{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType  GlobalNamespace::FootstepAudioReferences_VegetationType::Twig{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType  GlobalNamespace::FootstepAudioReferences_VegetationType::GrassSmall{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType  GlobalNamespace::FootstepAudioReferences_VegetationType::Sheoak{static_cast<int32_t>(0xa)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::FootstepAudioReferences_TerrainRegion::FootstepAudioReferences_TerrainRegion(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FootstepAudioReferences_TerrainRegion::FootstepAudioReferences_TerrainRegion()   {
}
constexpr ::GlobalNamespace::FootstepAudioReferences_TerrainRegion  GlobalNamespace::FootstepAudioReferences_TerrainRegion::NorthWest{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FootstepAudioReferences_TerrainRegion  GlobalNamespace::FootstepAudioReferences_TerrainRegion::NorthEast{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::FootstepAudioReferences_TerrainRegion  GlobalNamespace::FootstepAudioReferences_TerrainRegion::SouthWest{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::FootstepAudioReferences_TerrainRegion  GlobalNamespace::FootstepAudioReferences_TerrainRegion::SouthEast{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData::*)()>(&::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData::__cordl_internal_get_DetailObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetailObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData::__cordl_internal_get_DetailObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetailObject;
}
constexpr void GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData::__cordl_internal_set_DetailObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DetailObject = value;
}
constexpr float_t& GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData::__cordl_internal_get_BoundingSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BoundingSize;
}
constexpr float_t const& GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData::__cordl_internal_get_BoundingSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BoundingSize;
}
constexpr void GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData::__cordl_internal_set_BoundingSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BoundingSize = value;
}
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType& GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData::__cordl_internal_get_SoundType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SoundType;
}
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType const& GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData::__cordl_internal_get_SoundType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SoundType;
}
constexpr void GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData::__cordl_internal_set_SoundType(::GlobalNamespace::FootstepAudioReferences_VegetationType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SoundType = value;
}
inline void GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData* GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData::FootstepAudioReferences_TerrainDetailSoundData()   {
}
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::*)()>(&::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::__cordl_internal_get_TreeObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TreeObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::__cordl_internal_get_TreeObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TreeObject;
}
constexpr void GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::__cordl_internal_set_TreeObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TreeObject = value;
}
constexpr float_t& GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::__cordl_internal_get_BoundingSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BoundingSize;
}
constexpr float_t const& GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::__cordl_internal_get_BoundingSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BoundingSize;
}
constexpr void GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::__cordl_internal_set_BoundingSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BoundingSize = value;
}
constexpr float_t& GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::__cordl_internal_get_HeightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HeightOffset;
}
constexpr float_t const& GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::__cordl_internal_get_HeightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HeightOffset;
}
constexpr void GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::__cordl_internal_set_HeightOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HeightOffset = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::__cordl_internal_get_HorizontalOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HorizontalOffset;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::__cordl_internal_get_HorizontalOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HorizontalOffset;
}
constexpr void GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::__cordl_internal_set_HorizontalOffset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HorizontalOffset = value;
}
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType& GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::__cordl_internal_get_SoundType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SoundType;
}
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType const& GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::__cordl_internal_get_SoundType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SoundType;
}
constexpr void GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::__cordl_internal_set_SoundType(::GlobalNamespace::FootstepAudioReferences_VegetationType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SoundType = value;
}
inline void GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData* GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData::FootstepAudioReferences_TerrainTreeSoundData()   {
}
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch::*)()>(&::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType& GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch::__cordl_internal_get_SoundType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SoundType;
}
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType const& GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch::__cordl_internal_get_SoundType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SoundType;
}
constexpr void GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch::__cordl_internal_set_SoundType(::GlobalNamespace::FootstepAudioReferences_VegetationType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SoundType = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch::__cordl_internal_get_RustleSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RustleSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch::__cordl_internal_get_RustleSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RustleSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch::__cordl_internal_set_RustleSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RustleSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch::__cordl_internal_get_WindySound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindySound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch::__cordl_internal_get_WindySound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindySound;
}
constexpr void GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch::__cordl_internal_set_WindySound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WindySound = value;
}
constexpr float_t& GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch::__cordl_internal_get_WindyTimeScaler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindyTimeScaler;
}
constexpr float_t const& GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch::__cordl_internal_get_WindyTimeScaler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindyTimeScaler;
}
constexpr void GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch::__cordl_internal_set_WindyTimeScaler(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WindyTimeScaler = value;
}
inline void GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch* GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch::FootstepAudioReferences_VegetationSoundMatch()   {
}
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences_PropSoundPair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepAudioReferences_PropSoundPair::*)()>(&::GlobalNamespace::FootstepAudioReferences_PropSoundPair::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences_PropSoundPair*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& GlobalNamespace::FootstepAudioReferences_PropSoundPair::__cordl_internal_get_Material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Material;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& GlobalNamespace::FootstepAudioReferences_PropSoundPair::__cordl_internal_get_Material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Material;
}
constexpr void GlobalNamespace::FootstepAudioReferences_PropSoundPair::__cordl_internal_set_Material(::UnityW<::UnityEngine::PhysicsMaterial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Material = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::FootstepAudioReferences_PropSoundPair::__cordl_internal_get_Sound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::FootstepAudioReferences_PropSoundPair::__cordl_internal_get_Sound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sound;
}
constexpr void GlobalNamespace::FootstepAudioReferences_PropSoundPair::__cordl_internal_set_Sound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Sound = value;
}
inline void GlobalNamespace::FootstepAudioReferences_PropSoundPair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences_PropSoundPair*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FootstepAudioReferences_PropSoundPair* GlobalNamespace::FootstepAudioReferences_PropSoundPair::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FootstepAudioReferences_PropSoundPair*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FootstepAudioReferences_PropSoundPair::FootstepAudioReferences_PropSoundPair()   {
}
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.get_TreeDataLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>* (::GlobalNamespace::FootstepAudioReferences::*)()>(&::GlobalNamespace::FootstepAudioReferences::get_TreeDataLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180337100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"get_TreeDataLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.set_TreeDataLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepAudioReferences::*)(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*)>(&::GlobalNamespace::FootstepAudioReferences::set_TreeDataLookup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803371f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"set_TreeDataLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.get_DetailDataLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>* (::GlobalNamespace::FootstepAudioReferences::*)()>(&::GlobalNamespace::FootstepAudioReferences::get_DetailDataLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"get_DetailDataLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.set_DetailDataLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepAudioReferences::*)(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*)>(&::GlobalNamespace::FootstepAudioReferences::set_DetailDataLookup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"set_DetailDataLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.get_LogDataLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>* (::GlobalNamespace::FootstepAudioReferences::*)()>(&::GlobalNamespace::FootstepAudioReferences::get_LogDataLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"get_LogDataLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.set_LogDataLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepAudioReferences::*)(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*)>(&::GlobalNamespace::FootstepAudioReferences::set_LogDataLookup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"set_LogDataLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.get_PropSoundLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::UnityW<::GlobalNamespace::AudioAsset>>* (::GlobalNamespace::FootstepAudioReferences::*)()>(&::GlobalNamespace::FootstepAudioReferences::get_PropSoundLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"get_PropSoundLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.set_PropSoundLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepAudioReferences::*)(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::UnityW<::GlobalNamespace::AudioAsset>>*)>(&::GlobalNamespace::FootstepAudioReferences::set_PropSoundLookup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"set_PropSoundLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::UnityW<::GlobalNamespace::AudioAsset>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.get_RustleSoundLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>* (::GlobalNamespace::FootstepAudioReferences::*)()>(&::GlobalNamespace::FootstepAudioReferences::get_RustleSoundLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"get_RustleSoundLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.set_RustleSoundLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepAudioReferences::*)(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*)>(&::GlobalNamespace::FootstepAudioReferences::set_RustleSoundLookup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803371b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"set_RustleSoundLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.get_WindySoundLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>* (::GlobalNamespace::FootstepAudioReferences::*)()>(&::GlobalNamespace::FootstepAudioReferences::get_WindySoundLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180337120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"get_WindySoundLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.set_WindySoundLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepAudioReferences::*)(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*)>(&::GlobalNamespace::FootstepAudioReferences::set_WindySoundLookup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"set_WindySoundLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.get_WindySoundLookupReversed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,::GlobalNamespace::FootstepAudioReferences_VegetationType>* (::GlobalNamespace::FootstepAudioReferences::*)()>(&::GlobalNamespace::FootstepAudioReferences::get_WindySoundLookupReversed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180337110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"get_WindySoundLookupReversed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.set_WindySoundLookupReversed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepAudioReferences::*)(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,::GlobalNamespace::FootstepAudioReferences_VegetationType>*)>(&::GlobalNamespace::FootstepAudioReferences::set_WindySoundLookupReversed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"set_WindySoundLookupReversed", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,::GlobalNamespace::FootstepAudioReferences_VegetationType>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.get_GlobalTintLookUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::UnityW<::UnityEngine::Texture2D>>* (::GlobalNamespace::FootstepAudioReferences::*)()>(&::GlobalNamespace::FootstepAudioReferences::get_GlobalTintLookUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"get_GlobalTintLookUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.set_GlobalTintLookUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepAudioReferences::*)(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::UnityW<::UnityEngine::Texture2D>>*)>(&::GlobalNamespace::FootstepAudioReferences::set_GlobalTintLookUp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"set_GlobalTintLookUp", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::UnityW<::UnityEngine::Texture2D>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.get_TerrainDataLookUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_TerrainRegion,::UnityW<::UnityEngine::TerrainData>>* (::GlobalNamespace::FootstepAudioReferences::*)()>(&::GlobalNamespace::FootstepAudioReferences::get_TerrainDataLookUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"get_TerrainDataLookUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.set_TerrainDataLookUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepAudioReferences::*)(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_TerrainRegion,::UnityW<::UnityEngine::TerrainData>>*)>(&::GlobalNamespace::FootstepAudioReferences::set_TerrainDataLookUp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803371d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"set_TerrainDataLookUp", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_TerrainRegion,::UnityW<::UnityEngine::TerrainData>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepAudioReferences::*)()>(&::GlobalNamespace::FootstepAudioReferences::OnEnable)> {
  constexpr static std::size_t size = 0xcd0;
  constexpr static std::size_t addrs = 0x1803352d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepAudioReferences::*)()>(&::GlobalNamespace::FootstepAudioReferences::OnValidate)> {
  constexpr static std::size_t size = 0xa40;
  constexpr static std::size_t addrs = 0x180335fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.GetFootstepSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FootstepAudioReferences_FootstepSoundData* (::GlobalNamespace::FootstepAudioReferences::*)(::UnityEngine::PhysicsMaterial*, ::by_ref<::GlobalNamespace::AudioAsset*>)>(&::GlobalNamespace::FootstepAudioReferences::GetFootstepSound)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180334fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"GetFootstepSound", {}, {::i2c::type_of<::UnityEngine::PhysicsMaterial*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AudioAsset*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.GetFootstepSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FootstepAudioReferences_FootstepSoundData* (::GlobalNamespace::FootstepAudioReferences::*)(int32_t)>(&::GlobalNamespace::FootstepAudioReferences::GetFootstepSound)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180334f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"GetFootstepSound", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.GetWaterVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FootstepAudioReferences::*)(float_t, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::FootstepAudioReferences::GetWaterVol)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180335240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"GetWaterVol", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.GetDetailRustleSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioRandomContainer> (::GlobalNamespace::FootstepAudioReferences::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::FootstepAudioReferences::GetDetailRustleSound)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180334de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"GetDetailRustleSound", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.GetDetailWindySound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioRandomContainer> (::GlobalNamespace::FootstepAudioReferences::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::FootstepAudioReferences::GetDetailWindySound)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180334e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"GetDetailWindySound", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.GetTreeRustleSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioRandomContainer> (::GlobalNamespace::FootstepAudioReferences::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::FootstepAudioReferences::GetTreeRustleSound)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803350b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"GetTreeRustleSound", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.GetTreeWindySound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioRandomContainer> (::GlobalNamespace::FootstepAudioReferences::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::FootstepAudioReferences::GetTreeWindySound)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180335140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"GetTreeWindySound", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences.GetTreeness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FootstepAudioReferences::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::FootstepAudioReferences::GetTreeness)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803351d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"GetTreeness", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepAudioReferences._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepAudioReferences::*)()>(&::GlobalNamespace::FootstepAudioReferences::_ctor)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x180336c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_Layers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Layers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_Layers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Layers;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_Layers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Layers = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_TerrainMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TerrainMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>> const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_TerrainMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TerrainMaterials;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_TerrainMaterials(::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TerrainMaterials = value;
}
constexpr ::ArrayW<::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_FootstepSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FootstepSounds;
}
constexpr ::ArrayW<::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*> const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_FootstepSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FootstepSounds;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_FootstepSounds(::ArrayW<::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FootstepSounds = value;
}
constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_SqueakySandSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SqueakySandSounds;
}
constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_SqueakySandSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SqueakySandSounds;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_SqueakySandSounds(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SqueakySandSounds = value;
}
constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_DefaultFootstepSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultFootstepSounds;
}
constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_DefaultFootstepSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultFootstepSounds;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_DefaultFootstepSounds(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultFootstepSounds = value;
}
constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_LogSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogSounds;
}
constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_LogSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogSounds;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_LogSounds(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogSounds = value;
}
constexpr ::ArrayW<::GlobalNamespace::FootstepAudioReferences_PropSoundPair*>& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_PropSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PropSounds;
}
constexpr ::ArrayW<::GlobalNamespace::FootstepAudioReferences_PropSoundPair*> const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_PropSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PropSounds;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_PropSounds(::ArrayW<::GlobalNamespace::FootstepAudioReferences_PropSoundPair*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PropSounds = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::TerrainData>>& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_TerrainData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TerrainData;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::TerrainData>> const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_TerrainData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TerrainData;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_TerrainData(::ArrayW<::UnityW<::UnityEngine::TerrainData>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TerrainData = value;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::MaskTarget>& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_GlobalTintData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalTintData;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::MaskTarget> const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_GlobalTintData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalTintData;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_GlobalTintData(::UnityW<::JBooth::MicroVerseCore::MaskTarget>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GlobalTintData = value;
}
constexpr ::UnityW<::GlobalNamespace::WaterDepthSampleData>& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterDepthData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterDepthData;
}
constexpr ::UnityW<::GlobalNamespace::WaterDepthSampleData> const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterDepthData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterDepthData;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_WaterDepthData(::UnityW<::GlobalNamespace::WaterDepthSampleData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WaterDepthData = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioRandomContainer>>& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_VegetationSoundPriority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VegetationSoundPriority;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioRandomContainer>> const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_VegetationSoundPriority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VegetationSoundPriority;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_VegetationSoundPriority(::ArrayW<::UnityW<::GlobalNamespace::AudioRandomContainer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VegetationSoundPriority = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_DetailData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetailData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_DetailData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetailData;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_DetailData(::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DetailData = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_TreeData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TreeData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_TreeData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TreeData;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_TreeData(::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TreeData = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_LogData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_LogData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogData;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_LogData(::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogData = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch*>*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_VegetationSoundMatches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VegetationSoundMatches;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch*>* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_VegetationSoundMatches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VegetationSoundMatches;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_VegetationSoundMatches(::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VegetationSoundMatches = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterWalkSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterWalkSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterWalkSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterWalkSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_WaterWalkSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WaterWalkSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterRunSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterRunSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterRunSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterRunSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_WaterRunSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WaterRunSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterJumpSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterJumpSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterJumpSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterJumpSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_WaterJumpSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WaterJumpSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterLandSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterLandSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterLandSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterLandSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_WaterLandSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WaterLandSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterSitSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterSitSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterSitSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterSitSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_WaterSitSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WaterSitSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterStandSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterStandSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterStandSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterStandSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_WaterStandSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WaterStandSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterBobSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterBobSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterBobSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterBobSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_WaterBobSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WaterBobSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterSlapSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterSlapSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterSlapSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterSlapSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_WaterSlapSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WaterSlapSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterMoveSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterMoveSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterMoveSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterMoveSound;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_WaterMoveSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WaterMoveSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterMoveBodySound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterMoveBodySound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterMoveBodySound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterMoveBodySound;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_WaterMoveBodySound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WaterMoveBodySound = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterVolCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterVolCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_WaterVolCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterVolCurve;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_WaterVolCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WaterVolCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_FootstepWaterFadeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FootstepWaterFadeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_FootstepWaterFadeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FootstepWaterFadeCurve;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_FootstepWaterFadeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FootstepWaterFadeCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_FoleyWaterFadeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FoleyWaterFadeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get_FoleyWaterFadeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FoleyWaterFadeCurve;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set_FoleyWaterFadeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FoleyWaterFadeCurve = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__TreeDataLookup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TreeDataLookup_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__TreeDataLookup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TreeDataLookup_k__BackingField;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set__TreeDataLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TreeDataLookup_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__DetailDataLookup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DetailDataLookup_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__DetailDataLookup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DetailDataLookup_k__BackingField;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set__DetailDataLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DetailDataLookup_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__LogDataLookup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LogDataLookup_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__LogDataLookup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LogDataLookup_k__BackingField;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set__LogDataLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LogDataLookup_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::UnityW<::GlobalNamespace::AudioAsset>>*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__PropSoundLookup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropSoundLookup_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::UnityW<::GlobalNamespace::AudioAsset>>* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__PropSoundLookup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropSoundLookup_k__BackingField;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set__PropSoundLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::UnityW<::GlobalNamespace::AudioAsset>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PropSoundLookup_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__RustleSoundLookup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RustleSoundLookup_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__RustleSoundLookup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RustleSoundLookup_k__BackingField;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set__RustleSoundLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RustleSoundLookup_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__WindySoundLookup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindySoundLookup_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__WindySoundLookup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindySoundLookup_k__BackingField;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set__WindySoundLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WindySoundLookup_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,::GlobalNamespace::FootstepAudioReferences_VegetationType>*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__WindySoundLookupReversed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindySoundLookupReversed_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,::GlobalNamespace::FootstepAudioReferences_VegetationType>* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__WindySoundLookupReversed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WindySoundLookupReversed_k__BackingField;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set__WindySoundLookupReversed_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,::GlobalNamespace::FootstepAudioReferences_VegetationType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WindySoundLookupReversed_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::UnityW<::UnityEngine::Texture2D>>*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__GlobalTintLookUp_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalTintLookUp_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::UnityW<::UnityEngine::Texture2D>>* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__GlobalTintLookUp_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalTintLookUp_k__BackingField;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set__GlobalTintLookUp_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GlobalTintLookUp_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_TerrainRegion,::UnityW<::UnityEngine::TerrainData>>*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__TerrainDataLookUp_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TerrainDataLookUp_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_TerrainRegion,::UnityW<::UnityEngine::TerrainData>>* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__TerrainDataLookUp_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TerrainDataLookUp_k__BackingField;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set__TerrainDataLookUp_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_TerrainRegion,::UnityW<::UnityEngine::TerrainData>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TerrainDataLookUp_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>*& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__footstepSoundLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____footstepSoundLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>* const& GlobalNamespace::FootstepAudioReferences::__cordl_internal_get__footstepSoundLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____footstepSoundLookup;
}
constexpr void GlobalNamespace::FootstepAudioReferences::__cordl_internal_set__footstepSoundLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____footstepSoundLookup = value;
}
inline void GlobalNamespace::FootstepAudioReferences::setStaticF_TERRAIN_NAMES(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "TERRAIN_NAMES", ::GlobalNamespace::FootstepAudioReferences*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::FootstepAudioReferences::getStaticF_TERRAIN_NAMES()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "TERRAIN_NAMES", ::GlobalNamespace::FootstepAudioReferences*>();
}
inline void GlobalNamespace::FootstepAudioReferences::setStaticF_BAD_TREE_NAMES(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "BAD_TREE_NAMES", ::GlobalNamespace::FootstepAudioReferences*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::FootstepAudioReferences::getStaticF_BAD_TREE_NAMES()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "BAD_TREE_NAMES", ::GlobalNamespace::FootstepAudioReferences*>();
}
inline void GlobalNamespace::FootstepAudioReferences::setStaticF_LOG_NAMES(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "LOG_NAMES", ::GlobalNamespace::FootstepAudioReferences*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::FootstepAudioReferences::getStaticF_LOG_NAMES()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "LOG_NAMES", ::GlobalNamespace::FootstepAudioReferences*>();
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>* GlobalNamespace::FootstepAudioReferences::get_TreeDataLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"get_TreeDataLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepAudioReferences::set_TreeDataLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"set_TreeDataLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>* GlobalNamespace::FootstepAudioReferences::get_DetailDataLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"get_DetailDataLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepAudioReferences::set_DetailDataLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"set_DetailDataLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>* GlobalNamespace::FootstepAudioReferences::get_LogDataLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"get_LogDataLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepAudioReferences::set_LogDataLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"set_LogDataLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::UnityW<::GlobalNamespace::AudioAsset>>* GlobalNamespace::FootstepAudioReferences::get_PropSoundLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"get_PropSoundLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::UnityW<::GlobalNamespace::AudioAsset>>*>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepAudioReferences::set_PropSoundLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::UnityW<::GlobalNamespace::AudioAsset>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"set_PropSoundLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::UnityW<::GlobalNamespace::AudioAsset>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>* GlobalNamespace::FootstepAudioReferences::get_RustleSoundLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"get_RustleSoundLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepAudioReferences::set_RustleSoundLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"set_RustleSoundLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>* GlobalNamespace::FootstepAudioReferences::get_WindySoundLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"get_WindySoundLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepAudioReferences::set_WindySoundLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"set_WindySoundLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,::GlobalNamespace::FootstepAudioReferences_VegetationType>* GlobalNamespace::FootstepAudioReferences::get_WindySoundLookupReversed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"get_WindySoundLookupReversed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,::GlobalNamespace::FootstepAudioReferences_VegetationType>*>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepAudioReferences::set_WindySoundLookupReversed(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,::GlobalNamespace::FootstepAudioReferences_VegetationType>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"set_WindySoundLookupReversed", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,::GlobalNamespace::FootstepAudioReferences_VegetationType>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::UnityW<::UnityEngine::Texture2D>>* GlobalNamespace::FootstepAudioReferences::get_GlobalTintLookUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"get_GlobalTintLookUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::UnityW<::UnityEngine::Texture2D>>*>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepAudioReferences::set_GlobalTintLookUp(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::UnityW<::UnityEngine::Texture2D>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"set_GlobalTintLookUp", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::UnityW<::UnityEngine::Texture2D>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_TerrainRegion,::UnityW<::UnityEngine::TerrainData>>* GlobalNamespace::FootstepAudioReferences::get_TerrainDataLookUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"get_TerrainDataLookUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_TerrainRegion,::UnityW<::UnityEngine::TerrainData>>*>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepAudioReferences::set_TerrainDataLookUp(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_TerrainRegion,::UnityW<::UnityEngine::TerrainData>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"set_TerrainDataLookUp", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_TerrainRegion,::UnityW<::UnityEngine::TerrainData>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FootstepAudioReferences::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepAudioReferences::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData* GlobalNamespace::FootstepAudioReferences::GetFootstepSound(::UnityEngine::PhysicsMaterial*  material, ::by_ref<::GlobalNamespace::AudioAsset*>  propLayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"GetFootstepSound", {}, {::i2c::type_of<::UnityEngine::PhysicsMaterial*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AudioAsset*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>(this, ___internal_method, material, propLayer);
}
inline ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData* GlobalNamespace::FootstepAudioReferences::GetFootstepSound(int32_t  terrainTexture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"GetFootstepSound", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>(this, ___internal_method, terrainTexture);
}
inline float_t GlobalNamespace::FootstepAudioReferences::GetWaterVol(float_t  depth, ::by_ref<float_t>  footstepFadeVol, ::by_ref<float_t>  foleyFadeVol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"GetWaterVol", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, depth, footstepFadeVol, foleyFadeVol);
}
inline ::UnityW<::GlobalNamespace::AudioRandomContainer> GlobalNamespace::FootstepAudioReferences::GetDetailRustleSound(::UnityEngine::GameObject*  prototype)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"GetDetailRustleSound", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioRandomContainer>>(this, ___internal_method, prototype);
}
inline ::UnityW<::GlobalNamespace::AudioRandomContainer> GlobalNamespace::FootstepAudioReferences::GetDetailWindySound(::UnityEngine::GameObject*  prototype)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"GetDetailWindySound", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioRandomContainer>>(this, ___internal_method, prototype);
}
inline ::UnityW<::GlobalNamespace::AudioRandomContainer> GlobalNamespace::FootstepAudioReferences::GetTreeRustleSound(::UnityEngine::GameObject*  prototype)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"GetTreeRustleSound", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioRandomContainer>>(this, ___internal_method, prototype);
}
inline ::UnityW<::GlobalNamespace::AudioRandomContainer> GlobalNamespace::FootstepAudioReferences::GetTreeWindySound(::UnityEngine::GameObject*  prototype)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"GetTreeWindySound", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioRandomContainer>>(this, ___internal_method, prototype);
}
inline float_t GlobalNamespace::FootstepAudioReferences::GetTreeness(::UnityEngine::GameObject*  prototype)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {"GetTreeness", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, prototype);
}
inline void GlobalNamespace::FootstepAudioReferences::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepAudioReferences*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FootstepAudioReferences* GlobalNamespace::FootstepAudioReferences::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FootstepAudioReferences*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FootstepAudioReferences::FootstepAudioReferences()   {
}
