#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioBus.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_impl.hpp"
#include "GlobalNamespace/zzzz__AudioSettingsGroupType_impl.hpp"
#include "GlobalNamespace/zzzz__AudioBus_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__ISoundBankable_def.hpp"
#include "GlobalNamespace/zzzz__SoundBank_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioBus.get_SoundBankReferenceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SoundBank>,int32_t>* (::GlobalNamespace::AudioBus::*)()>(&::GlobalNamespace::AudioBus::get_SoundBankReferenceCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBus*>(),
                        {"get_SoundBankReferenceCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBus.set_SoundBankReferenceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBus::*)(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SoundBank>,int32_t>*)>(&::GlobalNamespace::AudioBus::set_SoundBankReferenceCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBus*>(),
                        {"set_SoundBankReferenceCount", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SoundBank>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBus.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBus::*)()>(&::GlobalNamespace::AudioBus::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18046fba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBus*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBus.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBus::*)()>(&::GlobalNamespace::AudioBus::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBus*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioBus._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioBus::*)()>(&::GlobalNamespace::AudioBus::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18046fc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBus*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioSettingsGroupType& GlobalNamespace::AudioBus::__cordl_internal_get_AudioSettingsGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioSettingsGroup;
}
constexpr ::GlobalNamespace::AudioSettingsGroupType const& GlobalNamespace::AudioBus::__cordl_internal_get_AudioSettingsGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioSettingsGroup;
}
constexpr void GlobalNamespace::AudioBus::__cordl_internal_set_AudioSettingsGroup(::GlobalNamespace::AudioSettingsGroupType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AudioSettingsGroup = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& GlobalNamespace::AudioBus::__cordl_internal_get_MixerGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MixerGroup;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& GlobalNamespace::AudioBus::__cordl_internal_get_MixerGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MixerGroup;
}
constexpr void GlobalNamespace::AudioBus::__cordl_internal_set_MixerGroup(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MixerGroup = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::AudioBus::__cordl_internal_get_BusVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BusVolume;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::AudioBus::__cordl_internal_get_BusVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BusVolume;
}
constexpr void GlobalNamespace::AudioBus::__cordl_internal_set_BusVolume(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BusVolume = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SoundBank>,int32_t>*& GlobalNamespace::AudioBus::__cordl_internal_get__SoundBankReferenceCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SoundBankReferenceCount_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SoundBank>,int32_t>* const& GlobalNamespace::AudioBus::__cordl_internal_get__SoundBankReferenceCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SoundBankReferenceCount_k__BackingField;
}
constexpr void GlobalNamespace::AudioBus::__cordl_internal_set__SoundBankReferenceCount_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SoundBank>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SoundBankReferenceCount_k__BackingField = value;
}
inline void GlobalNamespace::AudioBus::setStaticF_S_AllMixerGroups(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Audio::AudioMixerGroup>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Audio::AudioMixerGroup>>*, "S_AllMixerGroups", ::GlobalNamespace::AudioBus*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Audio::AudioMixerGroup>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Audio::AudioMixerGroup>>* GlobalNamespace::AudioBus::getStaticF_S_AllMixerGroups()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Audio::AudioMixerGroup>>*, "S_AllMixerGroups", ::GlobalNamespace::AudioBus*>();
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SoundBank>,int32_t>* GlobalNamespace::AudioBus::get_SoundBankReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBus*>(),
                        {"get_SoundBankReferenceCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SoundBank>,int32_t>*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBus::set_SoundBankReferenceCount(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SoundBank>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBus*>(),
                        {"set_SoundBankReferenceCount", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SoundBank>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioBus::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBus*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBus::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBus*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioBus::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioBus*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioBus* GlobalNamespace::AudioBus::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioBus*>());
}
/// @brief Convert operator to "::GlobalNamespace::ISoundBankable"
constexpr  GlobalNamespace::AudioBus::operator ::GlobalNamespace::ISoundBankable*() noexcept {
return static_cast<::GlobalNamespace::ISoundBankable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISoundBankable"
constexpr ::GlobalNamespace::ISoundBankable* GlobalNamespace::AudioBus::i___GlobalNamespace__ISoundBankable() noexcept {
return static_cast<::GlobalNamespace::ISoundBankable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioBus::AudioBus()   {
}
