#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/BakedWaveData.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__CustomScriptableObject_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__BakedWaveData_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ICollisionProvider_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::BakedWaveData.CreateCollisionProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::ICollisionProvider* (::WaveHarmonic::Crest::BakedWaveData::*)()>(&::WaveHarmonic::Crest::BakedWaveData::CreateCollisionProvider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::BakedWaveData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::BakedWaveData*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::BakedWaveData.get_WindSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::BakedWaveData::*)()>(&::WaveHarmonic::Crest::BakedWaveData::get_WindSpeed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::BakedWaveData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::BakedWaveData*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::BakedWaveData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::BakedWaveData::*)()>(&::WaveHarmonic::Crest::BakedWaveData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182552740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::BakedWaveData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::WaveHarmonic::Crest::ICollisionProvider* WaveHarmonic::Crest::BakedWaveData::CreateCollisionProvider()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::BakedWaveData*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::ICollisionProvider*>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::BakedWaveData::get_WindSpeed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::BakedWaveData*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::BakedWaveData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::BakedWaveData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::BakedWaveData* WaveHarmonic::Crest::BakedWaveData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::BakedWaveData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::BakedWaveData::BakedWaveData()   {
}
