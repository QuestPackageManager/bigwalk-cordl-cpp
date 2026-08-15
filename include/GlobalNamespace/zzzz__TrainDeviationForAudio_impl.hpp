#pragma once
// IWYU pragma private; include "GlobalNamespace/TrainDeviationForAudio.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TrainDeviationForAudio_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCXProvider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrainDeviationForAudio.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrainDeviationForAudio::*)()>(&::GlobalNamespace::TrainDeviationForAudio::Start)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e18a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainDeviationForAudio*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrainDeviationForAudio.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrainDeviationForAudio::*)()>(&::GlobalNamespace::TrainDeviationForAudio::Update)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803e18d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainDeviationForAudio*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrainDeviationForAudio._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrainDeviationForAudio::*)()>(&::GlobalNamespace::TrainDeviationForAudio::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainDeviationForAudio*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider>& GlobalNamespace::TrainDeviationForAudio::__cordl_internal_get_XProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XProvider;
}
constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider> const& GlobalNamespace::TrainDeviationForAudio::__cordl_internal_get_XProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XProvider;
}
constexpr void GlobalNamespace::TrainDeviationForAudio::__cordl_internal_set_XProvider(::UnityW<::GlobalNamespace::AudioRTPCXProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XProvider = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TrainDeviationForAudio::__cordl_internal_get_TrainFront()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrainFront;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TrainDeviationForAudio::__cordl_internal_get_TrainFront() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrainFront;
}
constexpr void GlobalNamespace::TrainDeviationForAudio::__cordl_internal_set_TrainFront(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrainFront = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TrainDeviationForAudio::__cordl_internal_get_TrainBack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrainBack;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TrainDeviationForAudio::__cordl_internal_get_TrainBack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrainBack;
}
constexpr void GlobalNamespace::TrainDeviationForAudio::__cordl_internal_set_TrainBack(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrainBack = value;
}
inline void GlobalNamespace::TrainDeviationForAudio::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainDeviationForAudio*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrainDeviationForAudio::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainDeviationForAudio*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrainDeviationForAudio::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainDeviationForAudio*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TrainDeviationForAudio* GlobalNamespace::TrainDeviationForAudio::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrainDeviationForAudio*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrainDeviationForAudio::TrainDeviationForAudio()   {
}
