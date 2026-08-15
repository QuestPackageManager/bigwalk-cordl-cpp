#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioAsset.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioAsset.TryGetCue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SoundCue> (::GlobalNamespace::AudioAsset::*)()>(&::GlobalNamespace::AudioAsset::TryGetCue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18046ed10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAsset*>(),
                        {"TryGetCue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioAsset.EqualsOrContainsCue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioAsset::*)(::GlobalNamespace::SoundCue*)>(&::GlobalNamespace::AudioAsset::EqualsOrContainsCue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18046e760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAsset*>(),
                        {"EqualsOrContainsCue", {}, {::i2c::type_of<::GlobalNamespace::SoundCue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioAsset.ContainsCue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioAsset::*)(::GlobalNamespace::SoundCue*)>(&::GlobalNamespace::AudioAsset::ContainsCue)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x18046e3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAsset*>(),
                        {"ContainsCue", {}, {::i2c::type_of<::GlobalNamespace::SoundCue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioAsset.TryGetAllCues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundCue>>* (::GlobalNamespace::AudioAsset::*)()>(&::GlobalNamespace::AudioAsset::TryGetAllCues)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x18046e7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAsset*>(),
                        {"TryGetAllCues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioAsset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioAsset::*)()>(&::GlobalNamespace::AudioAsset::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAsset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::GlobalNamespace::SoundCue> GlobalNamespace::AudioAsset::TryGetCue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAsset*>(),
                        {"TryGetCue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SoundCue>>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioAsset::EqualsOrContainsCue(::GlobalNamespace::SoundCue*  cue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAsset*>(),
                        {"EqualsOrContainsCue", {}, {::i2c::type_of<::GlobalNamespace::SoundCue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cue);
}
inline bool GlobalNamespace::AudioAsset::ContainsCue(::GlobalNamespace::SoundCue*  cue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAsset*>(),
                        {"ContainsCue", {}, {::i2c::type_of<::GlobalNamespace::SoundCue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cue);
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundCue>>* GlobalNamespace::AudioAsset::TryGetAllCues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAsset*>(),
                        {"TryGetAllCues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundCue>>*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioAsset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioAsset* GlobalNamespace::AudioAsset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioAsset*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioAsset::AudioAsset()   {
}
