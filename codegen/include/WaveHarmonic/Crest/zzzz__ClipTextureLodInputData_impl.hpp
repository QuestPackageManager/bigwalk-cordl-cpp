#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ClipTextureLodInputData.hpp"
#include "WaveHarmonic/Crest/zzzz__TextureLodInputData_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ClipTextureLodInputData_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipTextureLodInputData.get_TextureShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::WaveHarmonic::Crest::ClipTextureLodInputData::*)()>(&::WaveHarmonic::Crest::ClipTextureLodInputData::get_TextureShader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182553800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipTextureLodInputData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipTextureLodInputData*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipTextureLodInputData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ClipTextureLodInputData::*)()>(&::WaveHarmonic::Crest::ClipTextureLodInputData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825501c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipTextureLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::ComputeShader> WaveHarmonic::Crest::ClipTextureLodInputData::get_TextureShader()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipTextureLodInputData*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ClipTextureLodInputData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipTextureLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::ClipTextureLodInputData* WaveHarmonic::Crest::ClipTextureLodInputData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::ClipTextureLodInputData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ClipTextureLodInputData::ClipTextureLodInputData()   {
}
