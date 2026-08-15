#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/AbsorptionTextureLodInputData.hpp"
#include "WaveHarmonic/Crest/zzzz__TextureLodInputData_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__AbsorptionTextureLodInputData_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionTextureLodInputData.get_TextureShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::WaveHarmonic::Crest::AbsorptionTextureLodInputData::*)()>(&::WaveHarmonic::Crest::AbsorptionTextureLodInputData::get_TextureShader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1825501d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionTextureLodInputData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionTextureLodInputData*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionTextureLodInputData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AbsorptionTextureLodInputData::*)()>(&::WaveHarmonic::Crest::AbsorptionTextureLodInputData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825501c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionTextureLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::ComputeShader> WaveHarmonic::Crest::AbsorptionTextureLodInputData::get_TextureShader()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionTextureLodInputData*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AbsorptionTextureLodInputData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionTextureLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::AbsorptionTextureLodInputData* WaveHarmonic::Crest::AbsorptionTextureLodInputData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::AbsorptionTextureLodInputData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::AbsorptionTextureLodInputData::AbsorptionTextureLodInputData()   {
}
