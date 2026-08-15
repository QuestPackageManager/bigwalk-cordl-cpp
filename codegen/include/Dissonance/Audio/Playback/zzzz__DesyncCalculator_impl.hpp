#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/DesyncCalculator.hpp"
#include "Dissonance/Audio/Playback/zzzz__DesyncCalculator_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::DesyncCalculator.get_DesyncMilliseconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Playback::DesyncCalculator::*)()>(&::Dissonance::Audio::Playback::DesyncCalculator::get_DesyncMilliseconds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DesyncCalculator>(),
                        {"get_DesyncMilliseconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DesyncCalculator.set_DesyncMilliseconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::DesyncCalculator::*)(int32_t)>(&::Dissonance::Audio::Playback::DesyncCalculator::set_DesyncMilliseconds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DesyncCalculator>(),
                        {"set_DesyncMilliseconds", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DesyncCalculator.get_CorrectedPlaybackSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::DesyncCalculator::*)()>(&::Dissonance::Audio::Playback::DesyncCalculator::get_CorrectedPlaybackSpeed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805dd030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DesyncCalculator>(),
                        {"get_CorrectedPlaybackSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DesyncCalculator.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::DesyncCalculator::*)(::System::TimeSpan, ::System::TimeSpan)>(&::Dissonance::Audio::Playback::DesyncCalculator::Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805dcf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DesyncCalculator>(),
                        {"Update", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DesyncCalculator.Skip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::DesyncCalculator::*)(int32_t)>(&::Dissonance::Audio::Playback::DesyncCalculator::Skip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805dcf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DesyncCalculator>(),
                        {"Skip", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DesyncCalculator.CalculateDesync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::TimeSpan, ::System::TimeSpan)>(&::Dissonance::Audio::Playback::DesyncCalculator::CalculateDesync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805dcef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DesyncCalculator>(),
                        {"CalculateDesync", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DesyncCalculator.CalculateCorrectionFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Dissonance::Audio::Playback::DesyncCalculator::CalculateCorrectionFactor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805dcea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DesyncCalculator>(),
                        {"CalculateCorrectionFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Dissonance::Audio::Playback::DesyncCalculator::get_DesyncMilliseconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DesyncCalculator>(),
                        {"get_DesyncMilliseconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Dissonance::Audio::Playback::DesyncCalculator::set_DesyncMilliseconds(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DesyncCalculator>(),
                        {"set_DesyncMilliseconds", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Dissonance::Audio::Playback::DesyncCalculator::get_CorrectedPlaybackSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DesyncCalculator>(),
                        {"get_CorrectedPlaybackSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Dissonance::Audio::Playback::DesyncCalculator::Update(::System::TimeSpan  ideal, ::System::TimeSpan  actual)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DesyncCalculator>(),
                        {"Update", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ideal, actual);
}
inline void Dissonance::Audio::Playback::DesyncCalculator::Skip(int32_t  deltaDesyncMilliseconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DesyncCalculator>(),
                        {"Skip", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, deltaDesyncMilliseconds);
}
inline int32_t Dissonance::Audio::Playback::DesyncCalculator::CalculateDesync(::System::TimeSpan  idealPlaybackPosition, ::System::TimeSpan  actualPlaybackPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DesyncCalculator>(),
                        {"CalculateDesync", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, idealPlaybackPosition, actualPlaybackPosition);
}
inline float_t Dissonance::Audio::Playback::DesyncCalculator::CalculateCorrectionFactor(float_t  desyncMilliseconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DesyncCalculator>(),
                        {"CalculateCorrectionFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, desyncMilliseconds);
}
// Ctor Parameters [CppParam { name: "_DesyncMilliseconds_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Playback::DesyncCalculator::DesyncCalculator(int32_t  _DesyncMilliseconds_k__BackingField) noexcept  {
this->_DesyncMilliseconds_k__BackingField = _DesyncMilliseconds_k__BackingField;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::DesyncCalculator::DesyncCalculator()   {
}
