#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LevelTextureLodInputData.hpp"
#include "WaveHarmonic/Crest/zzzz__TextureLodInputData_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__LevelTextureLodInputData_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelTextureLodInputData.get_TextureShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::WaveHarmonic::Crest::LevelTextureLodInputData::*)()>(&::WaveHarmonic::Crest::LevelTextureLodInputData::get_TextureShader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18255a600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LevelTextureLodInputData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LevelTextureLodInputData*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelTextureLodInputData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LevelTextureLodInputData::*)()>(&::WaveHarmonic::Crest::LevelTextureLodInputData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825501c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelTextureLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::LevelTextureLodInputData::__cordl_internal_get__UseCatmullRomFiltering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseCatmullRomFiltering;
}
constexpr bool const& WaveHarmonic::Crest::LevelTextureLodInputData::__cordl_internal_get__UseCatmullRomFiltering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseCatmullRomFiltering;
}
constexpr void WaveHarmonic::Crest::LevelTextureLodInputData::__cordl_internal_set__UseCatmullRomFiltering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseCatmullRomFiltering = value;
}
inline ::UnityW<::UnityEngine::ComputeShader> WaveHarmonic::Crest::LevelTextureLodInputData::get_TextureShader()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LevelTextureLodInputData*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LevelTextureLodInputData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelTextureLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::LevelTextureLodInputData* WaveHarmonic::Crest::LevelTextureLodInputData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::LevelTextureLodInputData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::LevelTextureLodInputData::LevelTextureLodInputData()   {
}
