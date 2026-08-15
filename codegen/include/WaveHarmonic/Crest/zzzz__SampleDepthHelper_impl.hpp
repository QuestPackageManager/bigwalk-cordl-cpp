#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/SampleDepthHelper.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__SampleHelper_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleDepthHelper_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleDepthHelper.Sample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleDepthHelper::*)(int32_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector2>, bool)>(&::WaveHarmonic::Crest::SampleDepthHelper::Sample)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18257dbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleDepthHelper*>(),
                        {"Sample", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleDepthHelper.Sample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleDepthHelper::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector2>)>(&::WaveHarmonic::Crest::SampleDepthHelper::Sample)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18257db40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleDepthHelper*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleDepthHelper.Sample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleDepthHelper::*)(::UnityEngine::Vector3, ::by_ref<float_t>, ::by_ref<float_t>)>(&::WaveHarmonic::Crest::SampleDepthHelper::Sample)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18257daa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleDepthHelper*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleDepthHelper.SampleWaterDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleDepthHelper::*)(::UnityEngine::Vector3, ::by_ref<float_t>)>(&::WaveHarmonic::Crest::SampleDepthHelper::SampleWaterDepth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18257da20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleDepthHelper*>(),
                        {"SampleWaterDepth", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleDepthHelper.SampleDistanceToWaterEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleDepthHelper::*)(::UnityEngine::Vector3, ::by_ref<float_t>)>(&::WaveHarmonic::Crest::SampleDepthHelper::SampleDistanceToWaterEdge)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18257d950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleDepthHelper*>(),
                        {"SampleDistanceToWaterEdge", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleDepthHelper.SampleDistanceToWaterEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleDepthHelper::*)(int32_t, ::UnityEngine::Vector3, ::by_ref<float_t>)>(&::WaveHarmonic::Crest::SampleDepthHelper::SampleDistanceToWaterEdge)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18257d9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleDepthHelper*>(),
                        {"SampleDistanceToWaterEdge", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleDepthHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SampleDepthHelper::*)()>(&::WaveHarmonic::Crest::SampleDepthHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18257dd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleDepthHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool WaveHarmonic::Crest::SampleDepthHelper::Sample(int32_t  id, ::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector2>  result, bool  allowMultipleCallsPerFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleDepthHelper*>(),
                        {"Sample", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, position, result, allowMultipleCallsPerFrame);
}
inline bool WaveHarmonic::Crest::SampleDepthHelper::Sample(::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector2>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleDepthHelper*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, result);
}
inline bool WaveHarmonic::Crest::SampleDepthHelper::Sample(::UnityEngine::Vector3  position, ::by_ref<float_t>  depth, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleDepthHelper*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, depth, distance);
}
inline bool WaveHarmonic::Crest::SampleDepthHelper::SampleWaterDepth(::UnityEngine::Vector3  position, ::by_ref<float_t>  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleDepthHelper*>(),
                        {"SampleWaterDepth", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, depth);
}
inline bool WaveHarmonic::Crest::SampleDepthHelper::SampleDistanceToWaterEdge(::UnityEngine::Vector3  position, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleDepthHelper*>(),
                        {"SampleDistanceToWaterEdge", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, distance);
}
inline bool WaveHarmonic::Crest::SampleDepthHelper::SampleDistanceToWaterEdge(int32_t  id, ::UnityEngine::Vector3  position, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleDepthHelper*>(),
                        {"SampleDistanceToWaterEdge", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, position, distance);
}
inline void WaveHarmonic::Crest::SampleDepthHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleDepthHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::SampleDepthHelper* WaveHarmonic::Crest::SampleDepthHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::SampleDepthHelper*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::SampleDepthHelper::SampleDepthHelper()   {
}
