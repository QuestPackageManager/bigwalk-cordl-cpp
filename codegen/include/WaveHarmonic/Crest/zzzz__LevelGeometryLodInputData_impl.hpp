#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LevelGeometryLodInputData.hpp"
#include "WaveHarmonic/Crest/zzzz__GeometryLodInputData_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__LevelGeometryLodInputData_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelGeometryLodInputData.get_GeometryShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::WaveHarmonic::Crest::LevelGeometryLodInputData::*)()>(&::WaveHarmonic::Crest::LevelGeometryLodInputData::get_GeometryShader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182559f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LevelGeometryLodInputData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LevelGeometryLodInputData*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelGeometryLodInputData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LevelGeometryLodInputData::*)()>(&::WaveHarmonic::Crest::LevelGeometryLodInputData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182553b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelGeometryLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Shader> WaveHarmonic::Crest::LevelGeometryLodInputData::get_GeometryShader()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LevelGeometryLodInputData*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LevelGeometryLodInputData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelGeometryLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::LevelGeometryLodInputData* WaveHarmonic::Crest::LevelGeometryLodInputData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::LevelGeometryLodInputData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::LevelGeometryLodInputData::LevelGeometryLodInputData()   {
}
