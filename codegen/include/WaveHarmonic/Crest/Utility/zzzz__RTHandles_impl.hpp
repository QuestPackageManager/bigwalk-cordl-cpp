#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Utility/RTHandles.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__RTHandles_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Utility::RTHandles.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::WaveHarmonic::Crest::Utility::RTHandles::Initialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18256c410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::RTHandles*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Utility::RTHandles.OnBeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Utility::RTHandles::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18256c490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::RTHandles*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Utility::RTHandles::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::RTHandles*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::Utility::RTHandles::OnBeginCameraRendering(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Utility::RTHandles*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera);
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Utility::RTHandles::RTHandles()   {
}
