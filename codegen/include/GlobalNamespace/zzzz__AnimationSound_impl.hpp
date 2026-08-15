#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimationSound.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AnimationSound_def.hpp"
#include "GlobalNamespace/zzzz__AnimationSound_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "Asset", ty: "::UnityW<::GlobalNamespace::AudioAsset>", modifiers: "", def_value: Some("{}") }, CppParam { name: "AssetSwap", ty: "::UnityW<::GlobalNamespace::AudioAsset>", modifiers: "", def_value: Some("{}") }, CppParam { name: "StopTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SoundOnStop", ty: "::UnityW<::GlobalNamespace::AudioAsset>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AnimationSound_AnimationSoundControls::AnimationSound_AnimationSoundControls(::UnityW<::GlobalNamespace::AudioAsset>  Asset, ::UnityW<::GlobalNamespace::AudioAsset>  AssetSwap, float_t  StopTime, ::UnityW<::GlobalNamespace::AudioAsset>  SoundOnStop) noexcept  {
this->Asset = Asset;
this->AssetSwap = AssetSwap;
this->StopTime = StopTime;
this->SoundOnStop = SoundOnStop;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimationSound_AnimationSoundControls::AnimationSound_AnimationSoundControls()   {
}
//  Writing Method size for method: ::GlobalNamespace::AnimationSound___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationSound___c__DisplayClass10_0::*)()>(&::GlobalNamespace::AnimationSound___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationSound___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimationSound___c__DisplayClass10_0._PlayAnimationSound_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationSound___c__DisplayClass10_0::*)(double_t)>(&::GlobalNamespace::AnimationSound___c__DisplayClass10_0::_PlayAnimationSound_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180329ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationSound___c__DisplayClass10_0*>(),
                        {"<PlayAnimationSound>b__0", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimationSound___c__DisplayClass10_0._PlayAnimationSound_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationSound___c__DisplayClass10_0::*)(double_t)>(&::GlobalNamespace::AnimationSound___c__DisplayClass10_0::_PlayAnimationSound_b__1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180329af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationSound___c__DisplayClass10_0*>(),
                        {"<PlayAnimationSound>b__1", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimationSound___c__DisplayClass10_0._PlayAnimationSound_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationSound___c__DisplayClass10_0::*)(double_t)>(&::GlobalNamespace::AnimationSound___c__DisplayClass10_0::_PlayAnimationSound_b__2)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180329b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationSound___c__DisplayClass10_0*>(),
                        {"<PlayAnimationSound>b__2", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::AnimationSound___c__DisplayClass10_0::__cordl_internal_get_asc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asc;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::AnimationSound___c__DisplayClass10_0::__cordl_internal_get_asc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asc;
}
constexpr void GlobalNamespace::AnimationSound___c__DisplayClass10_0::__cordl_internal_set_asc(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asc = value;
}
constexpr ::GlobalNamespace::AnimationSound_AnimationSoundControls& GlobalNamespace::AnimationSound___c__DisplayClass10_0::__cordl_internal_get_control()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___control;
}
constexpr ::GlobalNamespace::AnimationSound_AnimationSoundControls const& GlobalNamespace::AnimationSound___c__DisplayClass10_0::__cordl_internal_get_control() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___control;
}
constexpr void GlobalNamespace::AnimationSound___c__DisplayClass10_0::__cordl_internal_set_control(::GlobalNamespace::AnimationSound_AnimationSoundControls  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___control = value;
}
constexpr ::UnityW<::GlobalNamespace::AnimationSound>& GlobalNamespace::AnimationSound___c__DisplayClass10_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::AnimationSound> const& GlobalNamespace::AnimationSound___c__DisplayClass10_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::AnimationSound___c__DisplayClass10_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AnimationSound>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::AnimationSound___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationSound___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimationSound___c__DisplayClass10_0::_PlayAnimationSound_b__0(double_t  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationSound___c__DisplayClass10_0*>(),
                        {"<PlayAnimationSound>b__0", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void GlobalNamespace::AnimationSound___c__DisplayClass10_0::_PlayAnimationSound_b__1(double_t  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationSound___c__DisplayClass10_0*>(),
                        {"<PlayAnimationSound>b__1", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void GlobalNamespace::AnimationSound___c__DisplayClass10_0::_PlayAnimationSound_b__2(double_t  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationSound___c__DisplayClass10_0*>(),
                        {"<PlayAnimationSound>b__2", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::GlobalNamespace::AnimationSound___c__DisplayClass10_0* GlobalNamespace::AnimationSound___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnimationSound___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimationSound___c__DisplayClass10_0::AnimationSound___c__DisplayClass10_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::AnimationSound.get_ControlLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::GlobalNamespace::AnimationSound_AnimationSoundControls>* (::GlobalNamespace::AnimationSound::*)()>(&::GlobalNamespace::AnimationSound::get_ControlLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationSound*>(),
                        {"get_ControlLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimationSound.set_ControlLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationSound::*)(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::GlobalNamespace::AnimationSound_AnimationSoundControls>*)>(&::GlobalNamespace::AnimationSound::set_ControlLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationSound*>(),
                        {"set_ControlLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::GlobalNamespace::AnimationSound_AnimationSoundControls>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimationSound.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationSound::*)()>(&::GlobalNamespace::AnimationSound::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180322be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationSound*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimationSound.PlayAnimationSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationSound::*)(::GlobalNamespace::AudioAsset*)>(&::GlobalNamespace::AnimationSound::PlayAnimationSound)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x180322c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AnimationSound*>(),
                    {::i2c::class_of<::GlobalNamespace::AnimationSound*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimationSound._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationSound::*)()>(&::GlobalNamespace::AnimationSound::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180322f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationSound*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AnimationSound::__cordl_internal_get_CustomTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AnimationSound::__cordl_internal_get_CustomTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomTransform;
}
constexpr void GlobalNamespace::AnimationSound::__cordl_internal_set_CustomTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomTransform = value;
}
constexpr float_t& GlobalNamespace::AnimationSound::__cordl_internal_get_StopAttenuationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopAttenuationTime;
}
constexpr float_t const& GlobalNamespace::AnimationSound::__cordl_internal_get_StopAttenuationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopAttenuationTime;
}
constexpr void GlobalNamespace::AnimationSound::__cordl_internal_set_StopAttenuationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StopAttenuationTime = value;
}
constexpr float_t& GlobalNamespace::AnimationSound::__cordl_internal_get_LoopDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoopDuration;
}
constexpr float_t const& GlobalNamespace::AnimationSound::__cordl_internal_get_LoopDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoopDuration;
}
constexpr void GlobalNamespace::AnimationSound::__cordl_internal_set_LoopDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LoopDuration = value;
}
constexpr ::ArrayW<::GlobalNamespace::AnimationSound_AnimationSoundControls>& GlobalNamespace::AnimationSound::__cordl_internal_get_Controls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Controls;
}
constexpr ::ArrayW<::GlobalNamespace::AnimationSound_AnimationSoundControls> const& GlobalNamespace::AnimationSound::__cordl_internal_get_Controls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Controls;
}
constexpr void GlobalNamespace::AnimationSound::__cordl_internal_set_Controls(::ArrayW<::GlobalNamespace::AnimationSound_AnimationSoundControls>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Controls = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::GlobalNamespace::AnimationSound_AnimationSoundControls>*& GlobalNamespace::AnimationSound::__cordl_internal_get__ControlLookup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ControlLookup_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::GlobalNamespace::AnimationSound_AnimationSoundControls>* const& GlobalNamespace::AnimationSound::__cordl_internal_get__ControlLookup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ControlLookup_k__BackingField;
}
constexpr void GlobalNamespace::AnimationSound::__cordl_internal_set__ControlLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::GlobalNamespace::AnimationSound_AnimationSoundControls>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ControlLookup_k__BackingField = value;
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::GlobalNamespace::AnimationSound_AnimationSoundControls>* GlobalNamespace::AnimationSound::get_ControlLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationSound*>(),
                        {"get_ControlLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::GlobalNamespace::AnimationSound_AnimationSoundControls>*>(this, ___internal_method);
}
inline void GlobalNamespace::AnimationSound::set_ControlLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::GlobalNamespace::AnimationSound_AnimationSoundControls>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationSound*>(),
                        {"set_ControlLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::GlobalNamespace::AnimationSound_AnimationSoundControls>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AnimationSound::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationSound*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimationSound::PlayAnimationSound(::GlobalNamespace::AudioAsset*  audioAsset)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AnimationSound*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioAsset);
}
inline void GlobalNamespace::AnimationSound::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimationSound*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AnimationSound* GlobalNamespace::AnimationSound::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnimationSound*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimationSound::AnimationSound()   {
}
