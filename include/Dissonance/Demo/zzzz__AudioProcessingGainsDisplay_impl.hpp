#pragma once
// IWYU pragma private; include "Dissonance/Demo/AudioProcessingGainsDisplay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RectTransform_impl.hpp"
#include "Dissonance/Demo/zzzz__AudioProcessingGainsDisplay_def.hpp"
#include "Dissonance/Demo/zzzz__AudioProcessingTestSetup_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingGainsDisplay.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::AudioProcessingGainsDisplay::*)()>(&::Dissonance::Demo::AudioProcessingGainsDisplay::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805c32a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingGainsDisplay*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingGainsDisplay.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::AudioProcessingGainsDisplay::*)()>(&::Dissonance::Demo::AudioProcessingGainsDisplay::Update)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805c32f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingGainsDisplay*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::AudioProcessingGainsDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::AudioProcessingGainsDisplay::*)()>(&::Dissonance::Demo::AudioProcessingGainsDisplay::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805c3430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingGainsDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& Dissonance::Demo::AudioProcessingGainsDisplay::__cordl_internal_get__gains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gains;
}
constexpr ::ArrayW<float_t> const& Dissonance::Demo::AudioProcessingGainsDisplay::__cordl_internal_get__gains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gains;
}
constexpr void Dissonance::Demo::AudioProcessingGainsDisplay::__cordl_internal_set__gains(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gains = value;
}
constexpr ::UnityW<::Dissonance::Demo::AudioProcessingTestSetup>& Dissonance::Demo::AudioProcessingGainsDisplay::__cordl_internal_get__processor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processor;
}
constexpr ::UnityW<::Dissonance::Demo::AudioProcessingTestSetup> const& Dissonance::Demo::AudioProcessingGainsDisplay::__cordl_internal_get__processor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processor;
}
constexpr void Dissonance::Demo::AudioProcessingGainsDisplay::__cordl_internal_set__processor(::UnityW<::Dissonance::Demo::AudioProcessingTestSetup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____processor = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RectTransform>>& Dissonance::Demo::AudioProcessingGainsDisplay::__cordl_internal_get_Bars()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bars;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RectTransform>> const& Dissonance::Demo::AudioProcessingGainsDisplay::__cordl_internal_get_Bars() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bars;
}
constexpr void Dissonance::Demo::AudioProcessingGainsDisplay::__cordl_internal_set_Bars(::ArrayW<::UnityW<::UnityEngine::RectTransform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Bars = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Dissonance::Demo::AudioProcessingGainsDisplay::__cordl_internal_get__self()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____self;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Dissonance::Demo::AudioProcessingGainsDisplay::__cordl_internal_get__self() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____self;
}
constexpr void Dissonance::Demo::AudioProcessingGainsDisplay::__cordl_internal_set__self(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____self = value;
}
inline void Dissonance::Demo::AudioProcessingGainsDisplay::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingGainsDisplay*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Demo::AudioProcessingGainsDisplay::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingGainsDisplay*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Demo::AudioProcessingGainsDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::AudioProcessingGainsDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Demo::AudioProcessingGainsDisplay* Dissonance::Demo::AudioProcessingGainsDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Demo::AudioProcessingGainsDisplay*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Demo::AudioProcessingGainsDisplay::AudioProcessingGainsDisplay()   {
}
