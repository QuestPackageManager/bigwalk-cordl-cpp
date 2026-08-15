#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ShapeWavesRendererLodInputData.hpp"
#include "WaveHarmonic/Crest/zzzz__RendererLodInputData_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ShapeWavesRendererLodInputData_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWavesRendererLodInputData.get_ShaderPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::ShapeWavesRendererLodInputData::*)()>(&::WaveHarmonic::Crest::ShapeWavesRendererLodInputData::get_ShaderPrefix)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182561660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShapeWavesRendererLodInputData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShapeWavesRendererLodInputData*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShapeWavesRendererLodInputData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShapeWavesRendererLodInputData::*)()>(&::WaveHarmonic::Crest::ShapeWavesRendererLodInputData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182550150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWavesRendererLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW WaveHarmonic::Crest::ShapeWavesRendererLodInputData::get_ShaderPrefix()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShapeWavesRendererLodInputData*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShapeWavesRendererLodInputData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShapeWavesRendererLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::ShapeWavesRendererLodInputData* WaveHarmonic::Crest::ShapeWavesRendererLodInputData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::ShapeWavesRendererLodInputData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ShapeWavesRendererLodInputData::ShapeWavesRendererLodInputData()   {
}
