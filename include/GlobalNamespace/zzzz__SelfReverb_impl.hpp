#pragma once
// IWYU pragma private; include "GlobalNamespace/SelfReverb.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SelfReverb_def.hpp"
#include "GlobalNamespace/zzzz__AudioDynamicReverb_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelfReverb.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelfReverb::*)()>(&::GlobalNamespace::SelfReverb::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803de5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfReverb*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfReverb.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelfReverb::*)()>(&::GlobalNamespace::SelfReverb::Update)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x1803de630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfReverb*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfReverb._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelfReverb::*)()>(&::GlobalNamespace::SelfReverb::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfReverb*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& GlobalNamespace::SelfReverb::__cordl_internal_get__mixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& GlobalNamespace::SelfReverb::__cordl_internal_get__mixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mixer;
}
constexpr void GlobalNamespace::SelfReverb::__cordl_internal_set__mixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mixer = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb>& GlobalNamespace::SelfReverb::__cordl_internal_get__reverb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverb;
}
constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb> const& GlobalNamespace::SelfReverb::__cordl_internal_get__reverb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverb;
}
constexpr void GlobalNamespace::SelfReverb::__cordl_internal_set__reverb(::UnityW<::GlobalNamespace::AudioDynamicReverb>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reverb = value;
}
inline void GlobalNamespace::SelfReverb::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfReverb*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelfReverb::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfReverb*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelfReverb::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelfReverb*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SelfReverb* GlobalNamespace::SelfReverb::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SelfReverb*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelfReverb::SelfReverb()   {
}
