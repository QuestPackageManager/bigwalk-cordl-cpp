#pragma once
// IWYU pragma private; include "Dissonance/Audio/Fader.hpp"
#include "Dissonance/Audio/zzzz__Fader_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Fader.get_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Fader::*)()>(&::Dissonance::Audio::Fader::get_Volume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d56c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Fader>(),
                        {"get_Volume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Fader.set_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Fader::*)(float_t)>(&::Dissonance::Audio::Fader::set_Volume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051eac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Fader>(),
                        {"set_Volume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Fader.get_EndVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Fader::*)()>(&::Dissonance::Audio::Fader::get_EndVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Fader>(),
                        {"get_EndVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Fader.set_EndVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Fader::*)(float_t)>(&::Dissonance::Audio::Fader::set_EndVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051eae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Fader>(),
                        {"set_EndVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Fader.get_StartVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Fader::*)()>(&::Dissonance::Audio::Fader::get_StartVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Fader>(),
                        {"get_StartVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Fader.set_StartVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Fader::*)(float_t)>(&::Dissonance::Audio::Fader::set_StartVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051eaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Fader>(),
                        {"set_StartVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Fader.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Fader::*)(float_t)>(&::Dissonance::Audio::Fader::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805e0590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Fader>(),
                        {"Update", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Fader.CalculateVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Fader::*)()>(&::Dissonance::Audio::Fader::CalculateVolume)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805e04f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Fader>(),
                        {"CalculateVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Fader.FadeTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Fader::*)(float_t, float_t)>(&::Dissonance::Audio::Fader::FadeTo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805e0560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Fader>(),
                        {"FadeTo", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Dissonance::Audio::Fader::get_Volume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Fader>(),
                        {"get_Volume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Dissonance::Audio::Fader::set_Volume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Fader>(),
                        {"set_Volume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Dissonance::Audio::Fader::get_EndVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Fader>(),
                        {"get_EndVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Dissonance::Audio::Fader::set_EndVolume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Fader>(),
                        {"set_EndVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Dissonance::Audio::Fader::get_StartVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Fader>(),
                        {"get_StartVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Dissonance::Audio::Fader::set_StartVolume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Fader>(),
                        {"set_StartVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Dissonance::Audio::Fader::Update(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Fader>(),
                        {"Update", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dt);
}
inline float_t Dissonance::Audio::Fader::CalculateVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Fader>(),
                        {"CalculateVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Dissonance::Audio::Fader::FadeTo(float_t  target, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Fader>(),
                        {"FadeTo", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target, duration);
}
// Ctor Parameters [CppParam { name: "_Volume_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_fadeTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_EndVolume_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_StartVolume_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_elapsedTime", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Fader::Fader(float_t  _Volume_k__BackingField, float_t  _fadeTime, float_t  _EndVolume_k__BackingField, float_t  _StartVolume_k__BackingField, float_t  _elapsedTime) noexcept  {
this->_Volume_k__BackingField = _Volume_k__BackingField;
this->_fadeTime = _fadeTime;
this->_EndVolume_k__BackingField = _EndVolume_k__BackingField;
this->_StartVolume_k__BackingField = _StartVolume_k__BackingField;
this->_elapsedTime = _elapsedTime;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Fader::Fader()   {
}
