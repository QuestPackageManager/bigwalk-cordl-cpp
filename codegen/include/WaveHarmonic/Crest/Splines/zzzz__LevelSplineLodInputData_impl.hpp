#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/LevelSplineLodInputData.hpp"
#include "WaveHarmonic/Crest/Splines/Internal/zzzz__SplineLodInputData_1_impl.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__LevelSplineLodInputData_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__SplinePointData_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::LevelSplineLodInputData.get_SplineShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::WaveHarmonic::Crest::Splines::LevelSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::LevelSplineLodInputData::get_SplineShader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182559f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::LevelSplineLodInputData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::LevelSplineLodInputData*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::LevelSplineLodInputData.get_DefaultCustomSplineData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::WaveHarmonic::Crest::Splines::LevelSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::LevelSplineLodInputData::get_DefaultCustomSplineData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1821c80f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::LevelSplineLodInputData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::LevelSplineLodInputData*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::LevelSplineLodInputData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::LevelSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::LevelSplineLodInputData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18256e2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::LevelSplineLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Shader> WaveHarmonic::Crest::Splines::LevelSplineLodInputData::get_SplineShader()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::LevelSplineLodInputData*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 WaveHarmonic::Crest::Splines::LevelSplineLodInputData::get_DefaultCustomSplineData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::LevelSplineLodInputData*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::LevelSplineLodInputData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::LevelSplineLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Splines::LevelSplineLodInputData* WaveHarmonic::Crest::Splines::LevelSplineLodInputData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Splines::LevelSplineLodInputData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Splines::LevelSplineLodInputData::LevelSplineLodInputData()   {
}
