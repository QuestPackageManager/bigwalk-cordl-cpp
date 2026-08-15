#pragma once
// IWYU pragma private; include "Dissonance/FrameSkipDetector.hpp"
#include "Dissonance/zzzz__FrameSkipDetector_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Dissonance::FrameSkipDetector.get_IsBreakerClosed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::FrameSkipDetector::*)()>(&::Dissonance::FrameSkipDetector::get_IsBreakerClosed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::FrameSkipDetector>(),
                        {"get_IsBreakerClosed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::FrameSkipDetector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::FrameSkipDetector::*)(::System::TimeSpan, ::System::TimeSpan, ::System::TimeSpan, ::System::TimeSpan)>(&::Dissonance::FrameSkipDetector::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805caa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::FrameSkipDetector>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::FrameSkipDetector.IsFrameSkip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::FrameSkipDetector::*)(float_t)>(&::Dissonance::FrameSkipDetector::IsFrameSkip)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805ca8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::FrameSkipDetector>(),
                        {"IsFrameSkip", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::FrameSkipDetector.UpdateBreaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::FrameSkipDetector::*)(bool, float_t)>(&::Dissonance::FrameSkipDetector::UpdateBreaker)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805ca980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::FrameSkipDetector>(),
                        {"UpdateBreaker", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::FrameSkipDetector::setStaticF_MetricFrameTime(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "MetricFrameTime", ::Dissonance::FrameSkipDetector>(std::forward<::StringW>(value));
}
inline ::StringW Dissonance::FrameSkipDetector::getStaticF_MetricFrameTime()  {
return ::cordl_internals::getStaticField<::StringW, "MetricFrameTime", ::Dissonance::FrameSkipDetector>();
}
inline bool Dissonance::FrameSkipDetector::get_IsBreakerClosed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::FrameSkipDetector>(),
                        {"get_IsBreakerClosed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Dissonance::FrameSkipDetector::_ctor(::System::TimeSpan  maxFrameTime, ::System::TimeSpan  minimumBreakerDuration, ::System::TimeSpan  maxBreakerDuration, ::System::TimeSpan  breakerResetPerSecond)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::FrameSkipDetector>(),
                        {".ctor", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, maxFrameTime, minimumBreakerDuration, maxBreakerDuration, breakerResetPerSecond);
}
inline bool Dissonance::FrameSkipDetector::IsFrameSkip(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::FrameSkipDetector>(),
                        {"IsFrameSkip", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, deltaTime);
}
inline void Dissonance::FrameSkipDetector::UpdateBreaker(bool  skip, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::FrameSkipDetector>(),
                        {"UpdateBreaker", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, skip, dt);
}
// Ctor Parameters [CppParam { name: "_maxFrameTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_minimumBreakerDuration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_maxBreakerDuration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_breakerResetPerSecond", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_breakerCloseTimer", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_currentBreakerDuration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_breakerClosed", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::FrameSkipDetector::FrameSkipDetector(float_t  _maxFrameTime, float_t  _minimumBreakerDuration, float_t  _maxBreakerDuration, float_t  _breakerResetPerSecond, float_t  _breakerCloseTimer, float_t  _currentBreakerDuration, bool  _breakerClosed) noexcept  {
this->_maxFrameTime = _maxFrameTime;
this->_minimumBreakerDuration = _minimumBreakerDuration;
this->_maxBreakerDuration = _maxBreakerDuration;
this->_breakerResetPerSecond = _breakerResetPerSecond;
this->_breakerCloseTimer = _breakerCloseTimer;
this->_currentBreakerDuration = _currentBreakerDuration;
this->_breakerClosed = _breakerClosed;
}
// Ctor Parameters []
constexpr ::Dissonance::FrameSkipDetector::FrameSkipDetector()   {
}
