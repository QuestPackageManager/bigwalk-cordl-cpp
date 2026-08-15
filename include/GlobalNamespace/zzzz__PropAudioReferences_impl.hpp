#pragma once
// IWYU pragma private; include "GlobalNamespace/PropAudioReferences.hpp"
#include "GlobalNamespace/zzzz__AudioVolumeStruct_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PropAudioReferences_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioLayerContainer_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropAudioReferences.GetImpactSoft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioLayerContainer> (::GlobalNamespace::PropAudioReferences::*)(int32_t)>(&::GlobalNamespace::PropAudioReferences::GetImpactSoft)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803dcda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropAudioReferences*>(),
                        {"GetImpactSoft", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropAudioReferences.GetImpactHard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioLayerContainer> (::GlobalNamespace::PropAudioReferences::*)(int32_t)>(&::GlobalNamespace::PropAudioReferences::GetImpactHard)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803dccd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropAudioReferences*>(),
                        {"GetImpactHard", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropAudioReferences.GetImpactKick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioAsset> (::GlobalNamespace::PropAudioReferences::*)(int32_t)>(&::GlobalNamespace::PropAudioReferences::GetImpactKick)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803dcd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropAudioReferences*>(),
                        {"GetImpactKick", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropAudioReferences._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropAudioReferences::*)()>(&::GlobalNamespace::PropAudioReferences::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropAudioReferences*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PropAudioReferences::__cordl_internal_get_grabSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PropAudioReferences::__cordl_internal_get_grabSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabSound;
}
constexpr void GlobalNamespace::PropAudioReferences::__cordl_internal_set_grabSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PropAudioReferences::__cordl_internal_get_releaseSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PropAudioReferences::__cordl_internal_get_releaseSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseSound;
}
constexpr void GlobalNamespace::PropAudioReferences::__cordl_internal_set_releaseSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releaseSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PropAudioReferences::__cordl_internal_get_placeSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PropAudioReferences::__cordl_internal_get_placeSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeSound;
}
constexpr void GlobalNamespace::PropAudioReferences::__cordl_internal_set_placeSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placeSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PropAudioReferences::__cordl_internal_get_removeSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PropAudioReferences::__cordl_internal_get_removeSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeSound;
}
constexpr void GlobalNamespace::PropAudioReferences::__cordl_internal_set_removeSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___removeSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PropAudioReferences::__cordl_internal_get_impactSoftSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactSoftSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PropAudioReferences::__cordl_internal_get_impactSoftSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactSoftSound;
}
constexpr void GlobalNamespace::PropAudioReferences::__cordl_internal_set_impactSoftSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impactSoftSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PropAudioReferences::__cordl_internal_get_impactHardSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactHardSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PropAudioReferences::__cordl_internal_get_impactHardSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactHardSound;
}
constexpr void GlobalNamespace::PropAudioReferences::__cordl_internal_set_impactHardSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impactHardSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PropAudioReferences::__cordl_internal_get_impactKickSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactKickSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PropAudioReferences::__cordl_internal_get_impactKickSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactKickSound;
}
constexpr void GlobalNamespace::PropAudioReferences::__cordl_internal_set_impactKickSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impactKickSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::PropAudioReferences::__cordl_internal_get_rollSoftLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollSoftLoop;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::PropAudioReferences::__cordl_internal_get_rollSoftLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollSoftLoop;
}
constexpr void GlobalNamespace::PropAudioReferences::__cordl_internal_set_rollSoftLoop(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rollSoftLoop = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::PropAudioReferences::__cordl_internal_get_rollHardLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollHardLoop;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::PropAudioReferences::__cordl_internal_get_rollHardLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollHardLoop;
}
constexpr void GlobalNamespace::PropAudioReferences::__cordl_internal_set_rollHardLoop(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rollHardLoop = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PropAudioReferences::__cordl_internal_get_onSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PropAudioReferences::__cordl_internal_get_onSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSound;
}
constexpr void GlobalNamespace::PropAudioReferences::__cordl_internal_set_onSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PropAudioReferences::__cordl_internal_get_offSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PropAudioReferences::__cordl_internal_get_offSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offSound;
}
constexpr void GlobalNamespace::PropAudioReferences::__cordl_internal_set_offSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PropAudioReferences::__cordl_internal_get_writeSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writeSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PropAudioReferences::__cordl_internal_get_writeSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writeSound;
}
constexpr void GlobalNamespace::PropAudioReferences::__cordl_internal_set_writeSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___writeSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PropAudioReferences::__cordl_internal_get_eraseSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eraseSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PropAudioReferences::__cordl_internal_get_eraseSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eraseSound;
}
constexpr void GlobalNamespace::PropAudioReferences::__cordl_internal_set_eraseSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eraseSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PropAudioReferences::__cordl_internal_get_dudSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dudSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PropAudioReferences::__cordl_internal_get_dudSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dudSound;
}
constexpr void GlobalNamespace::PropAudioReferences::__cordl_internal_set_dudSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dudSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::PropAudioReferences::__cordl_internal_get_looseLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___looseLoop;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::PropAudioReferences::__cordl_internal_get_looseLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___looseLoop;
}
constexpr void GlobalNamespace::PropAudioReferences::__cordl_internal_set_looseLoop(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___looseLoop = value;
}
constexpr bool& GlobalNamespace::PropAudioReferences::__cordl_internal_get_IsMusicTile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsMusicTile;
}
constexpr bool const& GlobalNamespace::PropAudioReferences::__cordl_internal_get_IsMusicTile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsMusicTile;
}
constexpr void GlobalNamespace::PropAudioReferences::__cordl_internal_set_IsMusicTile(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsMusicTile = value;
}
inline void GlobalNamespace::PropAudioReferences::setStaticF_MusicTileBackPackVol(::GlobalNamespace::AudioVolumeStruct  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::AudioVolumeStruct, "MusicTileBackPackVol", ::GlobalNamespace::PropAudioReferences*>(std::forward<::GlobalNamespace::AudioVolumeStruct>(value));
}
inline ::GlobalNamespace::AudioVolumeStruct GlobalNamespace::PropAudioReferences::getStaticF_MusicTileBackPackVol()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::AudioVolumeStruct, "MusicTileBackPackVol", ::GlobalNamespace::PropAudioReferences*>();
}
inline ::UnityW<::GlobalNamespace::AudioLayerContainer> GlobalNamespace::PropAudioReferences::GetImpactSoft(int32_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropAudioReferences*>(),
                        {"GetImpactSoft", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioLayerContainer>>(this, ___internal_method, state);
}
inline ::UnityW<::GlobalNamespace::AudioLayerContainer> GlobalNamespace::PropAudioReferences::GetImpactHard(int32_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropAudioReferences*>(),
                        {"GetImpactHard", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioLayerContainer>>(this, ___internal_method, state);
}
inline ::UnityW<::GlobalNamespace::AudioAsset> GlobalNamespace::PropAudioReferences::GetImpactKick(int32_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropAudioReferences*>(),
                        {"GetImpactKick", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioAsset>>(this, ___internal_method, state);
}
inline void GlobalNamespace::PropAudioReferences::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropAudioReferences*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropAudioReferences* GlobalNamespace::PropAudioReferences::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropAudioReferences*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropAudioReferences::PropAudioReferences()   {
}
