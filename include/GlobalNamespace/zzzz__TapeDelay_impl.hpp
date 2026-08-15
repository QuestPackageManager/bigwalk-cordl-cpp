#pragma once
// IWYU pragma private; include "GlobalNamespace/TapeDelay.hpp"
#include "GlobalNamespace/zzzz__AudioFilterBase_impl.hpp"
#include "GlobalNamespace/zzzz__TapeDelay_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TapeDelay.get_Delay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TapeDelay::*)()>(&::GlobalNamespace::TapeDelay::get_Delay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"get_Delay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TapeDelay.set_Delay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TapeDelay::*)(int32_t)>(&::GlobalNamespace::TapeDelay::set_Delay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18049c460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"set_Delay", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TapeDelay.get_DecayRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TapeDelay::*)()>(&::GlobalNamespace::TapeDelay::get_DecayRatio)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"get_DecayRatio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TapeDelay.set_DecayRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TapeDelay::*)(float_t)>(&::GlobalNamespace::TapeDelay::set_DecayRatio)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049c430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"set_DecayRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TapeDelay.get_DryMix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TapeDelay::*)()>(&::GlobalNamespace::TapeDelay::get_DryMix)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"get_DryMix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TapeDelay.set_DryMix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TapeDelay::*)(float_t)>(&::GlobalNamespace::TapeDelay::set_DryMix)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049a6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"set_DryMix", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TapeDelay.get_WetMix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TapeDelay::*)()>(&::GlobalNamespace::TapeDelay::get_WetMix)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049a530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"get_WetMix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TapeDelay.set_WetMix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TapeDelay::*)(float_t)>(&::GlobalNamespace::TapeDelay::set_WetMix)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049a680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"set_WetMix", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TapeDelay.get_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TapeDelay::*)()>(&::GlobalNamespace::TapeDelay::get_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                    {::i2c::class_of<::GlobalNamespace::TapeDelay*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TapeDelay.set_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TapeDelay::*)(bool)>(&::GlobalNamespace::TapeDelay::set_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180499eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                    {::i2c::class_of<::GlobalNamespace::TapeDelay*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TapeDelay.get_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TapeDelay::*)()>(&::GlobalNamespace::TapeDelay::get_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049c410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                    {::i2c::class_of<::GlobalNamespace::TapeDelay*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TapeDelay.set_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TapeDelay::*)(bool)>(&::GlobalNamespace::TapeDelay::set_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049c420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                    {::i2c::class_of<::GlobalNamespace::TapeDelay*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TapeDelay.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TapeDelay::*)()>(&::GlobalNamespace::TapeDelay::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804a5bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TapeDelay.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TapeDelay::*)()>(&::GlobalNamespace::TapeDelay::Init)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1804a5c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TapeDelay.UpdateVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TapeDelay::*)(float_t)>(&::GlobalNamespace::TapeDelay::UpdateVariables)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                    {::i2c::class_of<::GlobalNamespace::TapeDelay*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TapeDelay.ProcessSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TapeDelay::*)(::by_ref<::ArrayW<float_t>>, int32_t)>(&::GlobalNamespace::TapeDelay::ProcessSamples)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x1804a5db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                    {::i2c::class_of<::GlobalNamespace::TapeDelay*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TapeDelay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TapeDelay::*)()>(&::GlobalNamespace::TapeDelay::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049c3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::TapeDelay::__cordl_internal_get__delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delay;
}
constexpr int32_t const& GlobalNamespace::TapeDelay::__cordl_internal_get__delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delay;
}
constexpr void GlobalNamespace::TapeDelay::__cordl_internal_set__delay(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delay = value;
}
constexpr float_t& GlobalNamespace::TapeDelay::__cordl_internal_get__decayRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decayRatio;
}
constexpr float_t const& GlobalNamespace::TapeDelay::__cordl_internal_get__decayRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decayRatio;
}
constexpr void GlobalNamespace::TapeDelay::__cordl_internal_set__decayRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decayRatio = value;
}
constexpr float_t& GlobalNamespace::TapeDelay::__cordl_internal_get__dryMix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dryMix;
}
constexpr float_t const& GlobalNamespace::TapeDelay::__cordl_internal_get__dryMix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dryMix;
}
constexpr void GlobalNamespace::TapeDelay::__cordl_internal_set__dryMix(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dryMix = value;
}
constexpr float_t& GlobalNamespace::TapeDelay::__cordl_internal_get__wetMix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wetMix;
}
constexpr float_t const& GlobalNamespace::TapeDelay::__cordl_internal_get__wetMix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wetMix;
}
constexpr void GlobalNamespace::TapeDelay::__cordl_internal_set__wetMix(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wetMix = value;
}
constexpr bool& GlobalNamespace::TapeDelay::__cordl_internal_get__internalBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr bool const& GlobalNamespace::TapeDelay::__cordl_internal_get__internalBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr void GlobalNamespace::TapeDelay::__cordl_internal_set__internalBypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internalBypass = value;
}
constexpr bool& GlobalNamespace::TapeDelay::__cordl_internal_get__bypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr bool const& GlobalNamespace::TapeDelay::__cordl_internal_get__bypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr void GlobalNamespace::TapeDelay::__cordl_internal_set__bypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bypass = value;
}
constexpr ::ArrayW<::ArrayW<float_t>>& GlobalNamespace::TapeDelay::__cordl_internal_get__delayBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayBuffers;
}
constexpr ::ArrayW<::ArrayW<float_t>> const& GlobalNamespace::TapeDelay::__cordl_internal_get__delayBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayBuffers;
}
constexpr void GlobalNamespace::TapeDelay::__cordl_internal_set__delayBuffers(::ArrayW<::ArrayW<float_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayBuffers = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::TapeDelay::__cordl_internal_get__delayLengths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayLengths;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::TapeDelay::__cordl_internal_get__delayLengths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayLengths;
}
constexpr void GlobalNamespace::TapeDelay::__cordl_internal_set__delayLengths(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayLengths = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::TapeDelay::__cordl_internal_get__deltaDelayLengthPerSample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltaDelayLengthPerSample;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::TapeDelay::__cordl_internal_get__deltaDelayLengthPerSample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltaDelayLengthPerSample;
}
constexpr void GlobalNamespace::TapeDelay::__cordl_internal_set__deltaDelayLengthPerSample(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deltaDelayLengthPerSample = value;
}
constexpr int32_t& GlobalNamespace::TapeDelay::__cordl_internal_get__transitionSamplesRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionSamplesRemaining;
}
constexpr int32_t const& GlobalNamespace::TapeDelay::__cordl_internal_get__transitionSamplesRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionSamplesRemaining;
}
constexpr void GlobalNamespace::TapeDelay::__cordl_internal_set__transitionSamplesRemaining(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transitionSamplesRemaining = value;
}
constexpr int32_t& GlobalNamespace::TapeDelay::__cordl_internal_get__bufferMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferMask;
}
constexpr int32_t const& GlobalNamespace::TapeDelay::__cordl_internal_get__bufferMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferMask;
}
constexpr void GlobalNamespace::TapeDelay::__cordl_internal_set__bufferMask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferMask = value;
}
constexpr int32_t& GlobalNamespace::TapeDelay::__cordl_internal_get__channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channels;
}
constexpr int32_t const& GlobalNamespace::TapeDelay::__cordl_internal_get__channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channels;
}
constexpr void GlobalNamespace::TapeDelay::__cordl_internal_set__channels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channels = value;
}
constexpr int32_t& GlobalNamespace::TapeDelay::__cordl_internal_get__sampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr int32_t const& GlobalNamespace::TapeDelay::__cordl_internal_get__sampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr void GlobalNamespace::TapeDelay::__cordl_internal_set__sampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleRate = value;
}
constexpr int32_t& GlobalNamespace::TapeDelay::__cordl_internal_get__writeHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeHead;
}
constexpr int32_t const& GlobalNamespace::TapeDelay::__cordl_internal_get__writeHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeHead;
}
constexpr void GlobalNamespace::TapeDelay::__cordl_internal_set__writeHead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____writeHead = value;
}
constexpr float_t& GlobalNamespace::TapeDelay::__cordl_internal_get__targetDelayLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetDelayLength;
}
constexpr float_t const& GlobalNamespace::TapeDelay::__cordl_internal_get__targetDelayLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetDelayLength;
}
constexpr void GlobalNamespace::TapeDelay::__cordl_internal_set__targetDelayLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetDelayLength = value;
}
inline void GlobalNamespace::TapeDelay::setStaticF_DebugBypass(bool  value)  {
::cordl_internals::setStaticField<bool, "DebugBypass", ::GlobalNamespace::TapeDelay*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::TapeDelay::getStaticF_DebugBypass()  {
return ::cordl_internals::getStaticField<bool, "DebugBypass", ::GlobalNamespace::TapeDelay*>();
}
inline int32_t GlobalNamespace::TapeDelay::get_Delay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"get_Delay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::TapeDelay::set_Delay(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"set_Delay", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TapeDelay::get_DecayRatio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"get_DecayRatio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TapeDelay::set_DecayRatio(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"set_DecayRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TapeDelay::get_DryMix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"get_DryMix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TapeDelay::set_DryMix(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"set_DryMix", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TapeDelay::get_WetMix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"get_WetMix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TapeDelay::set_WetMix(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"set_WetMix", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::TapeDelay::get_InternalBypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TapeDelay*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TapeDelay::set_InternalBypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TapeDelay*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::TapeDelay::get_Bypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TapeDelay*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TapeDelay::set_Bypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TapeDelay*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TapeDelay::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TapeDelay::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TapeDelay::UpdateVariables(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TapeDelay*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::TapeDelay::ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TapeDelay*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void GlobalNamespace::TapeDelay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapeDelay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TapeDelay* GlobalNamespace::TapeDelay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TapeDelay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TapeDelay::TapeDelay()   {
}
