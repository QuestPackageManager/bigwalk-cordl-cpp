#pragma once
// IWYU pragma private; include "Dissonance/Audio/ArvCalculator.hpp"
#include "Dissonance/Audio/zzzz__ArvCalculator_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::ArvCalculator.get_ARV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::ArvCalculator::*)()>(&::Dissonance::Audio::ArvCalculator::get_ARV)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d56c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::ArvCalculator>(),
                        {"get_ARV", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::ArvCalculator.set_ARV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::ArvCalculator::*)(float_t)>(&::Dissonance::Audio::ArvCalculator::set_ARV)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051eac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::ArvCalculator>(),
                        {"set_ARV", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::ArvCalculator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::ArvCalculator::*)()>(&::Dissonance::Audio::ArvCalculator::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d77b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::ArvCalculator>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::ArvCalculator.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::ArvCalculator::*)(::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::ArvCalculator::Update)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d77d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::ArvCalculator>(),
                        {"Update", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Dissonance::Audio::ArvCalculator::get_ARV()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::ArvCalculator>(),
                        {"get_ARV", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Dissonance::Audio::ArvCalculator::set_ARV(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::ArvCalculator>(),
                        {"set_ARV", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Dissonance::Audio::ArvCalculator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::ArvCalculator>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Dissonance::Audio::ArvCalculator::Update(::System::ArraySegment_1<float_t>  samples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::ArvCalculator>(),
                        {"Update", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, samples);
}
// Ctor Parameters [CppParam { name: "_ARV_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::ArvCalculator::ArvCalculator(float_t  _ARV_k__BackingField) noexcept  {
this->_ARV_k__BackingField = _ARV_k__BackingField;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::ArvCalculator::ArvCalculator()   {
}
