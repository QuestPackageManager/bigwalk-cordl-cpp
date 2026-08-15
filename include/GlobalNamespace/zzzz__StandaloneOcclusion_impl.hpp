#pragma once
// IWYU pragma private; include "GlobalNamespace/StandaloneOcclusion.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandaloneOcclusion_def.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionConfig_def.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusion_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCXProvider_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandaloneOcclusion.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandaloneOcclusion::*)()>(&::GlobalNamespace::StandaloneOcclusion::Start)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803e0b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StandaloneOcclusion*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneOcclusion.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandaloneOcclusion::*)()>(&::GlobalNamespace::StandaloneOcclusion::Update)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803e0c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StandaloneOcclusion*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneOcclusion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandaloneOcclusion::*)()>(&::GlobalNamespace::StandaloneOcclusion::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StandaloneOcclusion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioOcclusionConfig>& GlobalNamespace::StandaloneOcclusion::__cordl_internal_get_OcclusionConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcclusionConfig;
}
constexpr ::UnityW<::GlobalNamespace::AudioOcclusionConfig> const& GlobalNamespace::StandaloneOcclusion::__cordl_internal_get_OcclusionConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcclusionConfig;
}
constexpr void GlobalNamespace::StandaloneOcclusion::__cordl_internal_set_OcclusionConfig(::UnityW<::GlobalNamespace::AudioOcclusionConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OcclusionConfig = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioOcclusion>& GlobalNamespace::StandaloneOcclusion::__cordl_internal_get_Occlusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Occlusion;
}
constexpr ::UnityW<::GlobalNamespace::AudioOcclusion> const& GlobalNamespace::StandaloneOcclusion::__cordl_internal_get_Occlusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Occlusion;
}
constexpr void GlobalNamespace::StandaloneOcclusion::__cordl_internal_set_Occlusion(::UnityW<::GlobalNamespace::AudioOcclusion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Occlusion = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider>& GlobalNamespace::StandaloneOcclusion::__cordl_internal_get_RTPCXProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RTPCXProvider;
}
constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider> const& GlobalNamespace::StandaloneOcclusion::__cordl_internal_get_RTPCXProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RTPCXProvider;
}
constexpr void GlobalNamespace::StandaloneOcclusion::__cordl_internal_set_RTPCXProvider(::UnityW<::GlobalNamespace::AudioRTPCXProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RTPCXProvider = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& GlobalNamespace::StandaloneOcclusion::__cordl_internal_get_Mixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& GlobalNamespace::StandaloneOcclusion::__cordl_internal_get_Mixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mixer;
}
constexpr void GlobalNamespace::StandaloneOcclusion::__cordl_internal_set_Mixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Mixer = value;
}
constexpr ::StringW& GlobalNamespace::StandaloneOcclusion::__cordl_internal_get_FilterParam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilterParam;
}
constexpr ::StringW const& GlobalNamespace::StandaloneOcclusion::__cordl_internal_get_FilterParam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilterParam;
}
constexpr void GlobalNamespace::StandaloneOcclusion::__cordl_internal_set_FilterParam(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FilterParam = value;
}
constexpr float_t& GlobalNamespace::StandaloneOcclusion::__cordl_internal_get_MinGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinGain;
}
constexpr float_t const& GlobalNamespace::StandaloneOcclusion::__cordl_internal_get_MinGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinGain;
}
constexpr void GlobalNamespace::StandaloneOcclusion::__cordl_internal_set_MinGain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinGain = value;
}
inline void GlobalNamespace::StandaloneOcclusion::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StandaloneOcclusion*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandaloneOcclusion::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StandaloneOcclusion*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandaloneOcclusion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StandaloneOcclusion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StandaloneOcclusion* GlobalNamespace::StandaloneOcclusion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandaloneOcclusion*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandaloneOcclusion::StandaloneOcclusion()   {
}
