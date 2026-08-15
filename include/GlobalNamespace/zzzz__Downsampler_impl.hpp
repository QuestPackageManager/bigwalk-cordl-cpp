#pragma once
// IWYU pragma private; include "GlobalNamespace/Downsampler.hpp"
#include "GlobalNamespace/zzzz__AudioFilterBase_impl.hpp"
#include "GlobalNamespace/zzzz__Downsampler_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Downsampler.get_DownsampleFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Downsampler::*)()>(&::GlobalNamespace::Downsampler::get_DownsampleFactor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Downsampler*>(),
                        {"get_DownsampleFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Downsampler.set_DownsampleFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Downsampler::*)(int32_t)>(&::GlobalNamespace::Downsampler::set_DownsampleFactor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18049efa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Downsampler*>(),
                        {"set_DownsampleFactor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Downsampler.get_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Downsampler::*)()>(&::GlobalNamespace::Downsampler::get_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180468800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Downsampler*>(),
                    {::i2c::class_of<::GlobalNamespace::Downsampler*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Downsampler.set_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Downsampler::*)(bool)>(&::GlobalNamespace::Downsampler::set_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180468810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Downsampler*>(),
                    {::i2c::class_of<::GlobalNamespace::Downsampler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Downsampler.get_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Downsampler::*)()>(&::GlobalNamespace::Downsampler::get_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ef80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Downsampler*>(),
                    {::i2c::class_of<::GlobalNamespace::Downsampler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Downsampler.set_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Downsampler::*)(bool)>(&::GlobalNamespace::Downsampler::set_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ef90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Downsampler*>(),
                    {::i2c::class_of<::GlobalNamespace::Downsampler*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Downsampler.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Downsampler::*)()>(&::GlobalNamespace::Downsampler::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18049ec80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Downsampler*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Downsampler.UpdateVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Downsampler::*)(float_t)>(&::GlobalNamespace::Downsampler::UpdateVariables)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Downsampler*>(),
                    {::i2c::class_of<::GlobalNamespace::Downsampler*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Downsampler.ProcessSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Downsampler::*)(::by_ref<::ArrayW<float_t>>, int32_t)>(&::GlobalNamespace::Downsampler::ProcessSamples)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18049ed30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Downsampler*>(),
                    {::i2c::class_of<::GlobalNamespace::Downsampler*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Downsampler.OnFactorChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Downsampler::*)()>(&::GlobalNamespace::Downsampler::OnFactorChange)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18049ece0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Downsampler*>(),
                        {"OnFactorChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Downsampler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Downsampler::*)()>(&::GlobalNamespace::Downsampler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Downsampler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::Downsampler::__cordl_internal_get__downsampleFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____downsampleFactor;
}
constexpr int32_t const& GlobalNamespace::Downsampler::__cordl_internal_get__downsampleFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____downsampleFactor;
}
constexpr void GlobalNamespace::Downsampler::__cordl_internal_set__downsampleFactor(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____downsampleFactor = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::Downsampler::__cordl_internal_get__lastSampleValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSampleValues;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::Downsampler::__cordl_internal_get__lastSampleValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSampleValues;
}
constexpr void GlobalNamespace::Downsampler::__cordl_internal_set__lastSampleValues(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSampleValues = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::Downsampler::__cordl_internal_get__filterState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterState;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::Downsampler::__cordl_internal_get__filterState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterState;
}
constexpr void GlobalNamespace::Downsampler::__cordl_internal_set__filterState(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filterState = value;
}
constexpr int32_t& GlobalNamespace::Downsampler::__cordl_internal_get__sampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr int32_t const& GlobalNamespace::Downsampler::__cordl_internal_get__sampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr void GlobalNamespace::Downsampler::__cordl_internal_set__sampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleRate = value;
}
constexpr float_t& GlobalNamespace::Downsampler::__cordl_internal_get__alpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alpha;
}
constexpr float_t const& GlobalNamespace::Downsampler::__cordl_internal_get__alpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alpha;
}
constexpr void GlobalNamespace::Downsampler::__cordl_internal_set__alpha(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alpha = value;
}
constexpr int32_t& GlobalNamespace::Downsampler::__cordl_internal_get__downsampleCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____downsampleCounter;
}
constexpr int32_t const& GlobalNamespace::Downsampler::__cordl_internal_get__downsampleCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____downsampleCounter;
}
constexpr void GlobalNamespace::Downsampler::__cordl_internal_set__downsampleCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____downsampleCounter = value;
}
constexpr bool& GlobalNamespace::Downsampler::__cordl_internal_get__internalBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr bool const& GlobalNamespace::Downsampler::__cordl_internal_get__internalBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr void GlobalNamespace::Downsampler::__cordl_internal_set__internalBypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internalBypass = value;
}
constexpr bool& GlobalNamespace::Downsampler::__cordl_internal_get__bypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr bool const& GlobalNamespace::Downsampler::__cordl_internal_get__bypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr void GlobalNamespace::Downsampler::__cordl_internal_set__bypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bypass = value;
}
inline void GlobalNamespace::Downsampler::setStaticF_DebugBypass(bool  value)  {
::cordl_internals::setStaticField<bool, "DebugBypass", ::GlobalNamespace::Downsampler*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::Downsampler::getStaticF_DebugBypass()  {
return ::cordl_internals::getStaticField<bool, "DebugBypass", ::GlobalNamespace::Downsampler*>();
}
inline int32_t GlobalNamespace::Downsampler::get_DownsampleFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Downsampler*>(),
                        {"get_DownsampleFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::Downsampler::set_DownsampleFactor(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Downsampler*>(),
                        {"set_DownsampleFactor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::Downsampler::get_InternalBypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Downsampler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::Downsampler::set_InternalBypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Downsampler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::Downsampler::get_Bypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Downsampler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::Downsampler::set_Bypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Downsampler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::Downsampler::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Downsampler*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Downsampler::UpdateVariables(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Downsampler*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::Downsampler::ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Downsampler*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void GlobalNamespace::Downsampler::OnFactorChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Downsampler*>(),
                        {"OnFactorChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Downsampler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Downsampler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Downsampler* GlobalNamespace::Downsampler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Downsampler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Downsampler::Downsampler()   {
}
