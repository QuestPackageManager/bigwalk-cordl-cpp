#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/FoamLodSettings.hpp"
#include "WaveHarmonic/Crest/zzzz__LodSettings_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__FoamLodSettings_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLodSettings.get_FilterWaves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::FoamLodSettings::*)()>(&::WaveHarmonic::Crest::FoamLodSettings::get_FilterWaves)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"get_FilterWaves", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLodSettings.set_FilterWaves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FoamLodSettings::*)(int32_t)>(&::WaveHarmonic::Crest::FoamLodSettings::set_FilterWaves)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"set_FilterWaves", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLodSettings.get_FoamFadeRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::FoamLodSettings::*)()>(&::WaveHarmonic::Crest::FoamLodSettings::get_FoamFadeRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"get_FoamFadeRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLodSettings.set_FoamFadeRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FoamLodSettings::*)(float_t)>(&::WaveHarmonic::Crest::FoamLodSettings::set_FoamFadeRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f81c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"set_FoamFadeRate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLodSettings.get_Maximum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::FoamLodSettings::*)()>(&::WaveHarmonic::Crest::FoamLodSettings::get_Maximum)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"get_Maximum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLodSettings.set_Maximum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FoamLodSettings::*)(float_t)>(&::WaveHarmonic::Crest::FoamLodSettings::set_Maximum)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"set_Maximum", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLodSettings.get_ShorelineFoamMaximumDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::FoamLodSettings::*)()>(&::WaveHarmonic::Crest::FoamLodSettings::get_ShorelineFoamMaximumDepth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"get_ShorelineFoamMaximumDepth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLodSettings.set_ShorelineFoamMaximumDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FoamLodSettings::*)(float_t)>(&::WaveHarmonic::Crest::FoamLodSettings::set_ShorelineFoamMaximumDepth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"set_ShorelineFoamMaximumDepth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLodSettings.get_ShorelineFoamPriming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::FoamLodSettings::*)()>(&::WaveHarmonic::Crest::FoamLodSettings::get_ShorelineFoamPriming)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"get_ShorelineFoamPriming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLodSettings.set_ShorelineFoamPriming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FoamLodSettings::*)(float_t)>(&::WaveHarmonic::Crest::FoamLodSettings::set_ShorelineFoamPriming)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"set_ShorelineFoamPriming", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLodSettings.get_ShorelineFoamStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::FoamLodSettings::*)()>(&::WaveHarmonic::Crest::FoamLodSettings::get_ShorelineFoamStrength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f7fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"get_ShorelineFoamStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLodSettings.set_ShorelineFoamStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FoamLodSettings::*)(float_t)>(&::WaveHarmonic::Crest::FoamLodSettings::set_ShorelineFoamStrength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"set_ShorelineFoamStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLodSettings.get_WaveFoamCoverage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::FoamLodSettings::*)()>(&::WaveHarmonic::Crest::FoamLodSettings::get_WaveFoamCoverage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049a530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"get_WaveFoamCoverage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLodSettings.set_WaveFoamCoverage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FoamLodSettings::*)(float_t)>(&::WaveHarmonic::Crest::FoamLodSettings::set_WaveFoamCoverage)> {
  constexpr static std::size_t size = 0x3450;
  constexpr static std::size_t addrs = 0x180bb44a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"set_WaveFoamCoverage", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLodSettings.get_WaveFoamStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::FoamLodSettings::*)()>(&::WaveHarmonic::Crest::FoamLodSettings::get_WaveFoamStrength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"get_WaveFoamStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLodSettings.set_WaveFoamStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FoamLodSettings::*)(float_t)>(&::WaveHarmonic::Crest::FoamLodSettings::set_WaveFoamStrength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"set_WaveFoamStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::FoamLodSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::FoamLodSettings::*)()>(&::WaveHarmonic::Crest::FoamLodSettings::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182575600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_get__Maximum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Maximum;
}
constexpr float_t const& WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_get__Maximum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Maximum;
}
constexpr void WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_set__Maximum(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Maximum = value;
}
constexpr float_t& WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_get__FoamFadeRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FoamFadeRate;
}
constexpr float_t const& WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_get__FoamFadeRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FoamFadeRate;
}
constexpr void WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_set__FoamFadeRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FoamFadeRate = value;
}
constexpr float_t& WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_get__WaveFoamStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveFoamStrength;
}
constexpr float_t const& WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_get__WaveFoamStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveFoamStrength;
}
constexpr void WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_set__WaveFoamStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaveFoamStrength = value;
}
constexpr float_t& WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_get__WaveFoamCoverage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveFoamCoverage;
}
constexpr float_t const& WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_get__WaveFoamCoverage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveFoamCoverage;
}
constexpr void WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_set__WaveFoamCoverage(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaveFoamCoverage = value;
}
constexpr int32_t& WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_get__FilterWaves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FilterWaves;
}
constexpr int32_t const& WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_get__FilterWaves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FilterWaves;
}
constexpr void WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_set__FilterWaves(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FilterWaves = value;
}
constexpr float_t& WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_get__ShorelineFoamMaximumDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineFoamMaximumDepth;
}
constexpr float_t const& WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_get__ShorelineFoamMaximumDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineFoamMaximumDepth;
}
constexpr void WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_set__ShorelineFoamMaximumDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShorelineFoamMaximumDepth = value;
}
constexpr float_t& WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_get__ShorelineFoamStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineFoamStrength;
}
constexpr float_t const& WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_get__ShorelineFoamStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineFoamStrength;
}
constexpr void WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_set__ShorelineFoamStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShorelineFoamStrength = value;
}
constexpr float_t& WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_get__ShorelineFoamPriming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineFoamPriming;
}
constexpr float_t const& WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_get__ShorelineFoamPriming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShorelineFoamPriming;
}
constexpr void WaveHarmonic::Crest::FoamLodSettings::__cordl_internal_set__ShorelineFoamPriming(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShorelineFoamPriming = value;
}
inline int32_t WaveHarmonic::Crest::FoamLodSettings::get_FilterWaves()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"get_FilterWaves", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FoamLodSettings::set_FilterWaves(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"set_FilterWaves", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::FoamLodSettings::get_FoamFadeRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"get_FoamFadeRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FoamLodSettings::set_FoamFadeRate(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"set_FoamFadeRate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::FoamLodSettings::get_Maximum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"get_Maximum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FoamLodSettings::set_Maximum(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"set_Maximum", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::FoamLodSettings::get_ShorelineFoamMaximumDepth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"get_ShorelineFoamMaximumDepth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FoamLodSettings::set_ShorelineFoamMaximumDepth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"set_ShorelineFoamMaximumDepth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::FoamLodSettings::get_ShorelineFoamPriming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"get_ShorelineFoamPriming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FoamLodSettings::set_ShorelineFoamPriming(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"set_ShorelineFoamPriming", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::FoamLodSettings::get_ShorelineFoamStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"get_ShorelineFoamStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FoamLodSettings::set_ShorelineFoamStrength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"set_ShorelineFoamStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::FoamLodSettings::get_WaveFoamCoverage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"get_WaveFoamCoverage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FoamLodSettings::set_WaveFoamCoverage(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"set_WaveFoamCoverage", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::FoamLodSettings::get_WaveFoamStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"get_WaveFoamStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::FoamLodSettings::set_WaveFoamStrength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {"set_WaveFoamStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::FoamLodSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::FoamLodSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::FoamLodSettings* WaveHarmonic::Crest::FoamLodSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::FoamLodSettings*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::FoamLodSettings::FoamLodSettings()   {
}
