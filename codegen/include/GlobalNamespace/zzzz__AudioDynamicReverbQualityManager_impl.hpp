#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioDynamicReverbQualityManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioDynamicReverbQualityManager_def.hpp"
#include "GlobalNamespace/zzzz__AudioDynamicReverb_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverbQualityManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverbQualityManager::*)()>(&::GlobalNamespace::AudioDynamicReverbQualityManager::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18041c8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverbQualityManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverbQualityManager.ApplyQualityEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverbQualityManager::*)(int32_t)>(&::GlobalNamespace::AudioDynamicReverbQualityManager::ApplyQualityEffects)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18041c6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverbQualityManager*>(),
                        {"ApplyQualityEffects", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverbQualityManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverbQualityManager::*)()>(&::GlobalNamespace::AudioDynamicReverbQualityManager::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18041c7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverbQualityManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverbQualityManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverbQualityManager::*)()>(&::GlobalNamespace::AudioDynamicReverbQualityManager::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18041c700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverbQualityManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverbQualityManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverbQualityManager::*)()>(&::GlobalNamespace::AudioDynamicReverbQualityManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverbQualityManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb>& GlobalNamespace::AudioDynamicReverbQualityManager::__cordl_internal_get__audioDynamicReverb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioDynamicReverb;
}
constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb> const& GlobalNamespace::AudioDynamicReverbQualityManager::__cordl_internal_get__audioDynamicReverb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioDynamicReverb;
}
constexpr void GlobalNamespace::AudioDynamicReverbQualityManager::__cordl_internal_set__audioDynamicReverb(::UnityW<::GlobalNamespace::AudioDynamicReverb>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioDynamicReverb = value;
}
inline void GlobalNamespace::AudioDynamicReverbQualityManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverbQualityManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverbQualityManager::ApplyQualityEffects(int32_t  qualityLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverbQualityManager*>(),
                        {"ApplyQualityEffects", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, qualityLevel);
}
inline void GlobalNamespace::AudioDynamicReverbQualityManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverbQualityManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverbQualityManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverbQualityManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverbQualityManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverbQualityManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioDynamicReverbQualityManager* GlobalNamespace::AudioDynamicReverbQualityManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioDynamicReverbQualityManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioDynamicReverbQualityManager::AudioDynamicReverbQualityManager()   {
}
