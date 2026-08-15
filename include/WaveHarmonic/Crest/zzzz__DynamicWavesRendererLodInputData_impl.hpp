#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DynamicWavesRendererLodInputData.hpp"
#include "WaveHarmonic/Crest/zzzz__RendererLodInputData_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__DynamicWavesRendererLodInputData_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesRendererLodInputData.get_ShaderPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::DynamicWavesRendererLodInputData::*)()>(&::WaveHarmonic::Crest::DynamicWavesRendererLodInputData::get_ShaderPrefix)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825584b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesRendererLodInputData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesRendererLodInputData*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DynamicWavesRendererLodInputData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DynamicWavesRendererLodInputData::*)()>(&::WaveHarmonic::Crest::DynamicWavesRendererLodInputData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182550150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesRendererLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW WaveHarmonic::Crest::DynamicWavesRendererLodInputData::get_ShaderPrefix()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesRendererLodInputData*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DynamicWavesRendererLodInputData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DynamicWavesRendererLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::DynamicWavesRendererLodInputData* WaveHarmonic::Crest::DynamicWavesRendererLodInputData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::DynamicWavesRendererLodInputData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DynamicWavesRendererLodInputData::DynamicWavesRendererLodInputData()   {
}
