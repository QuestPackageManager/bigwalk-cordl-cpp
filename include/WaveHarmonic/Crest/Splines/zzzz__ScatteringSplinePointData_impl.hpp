#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/ScatteringSplinePointData.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__SplinePointData_impl.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__ScatteringSplinePointData_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ScatteringSplinePointData.get_OverrideScattering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Splines::ScatteringSplinePointData::*)()>(&::WaveHarmonic::Crest::Splines::ScatteringSplinePointData::get_OverrideScattering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>(),
                        {"get_OverrideScattering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ScatteringSplinePointData.set_OverrideScattering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::ScatteringSplinePointData::*)(bool)>(&::WaveHarmonic::Crest::Splines::ScatteringSplinePointData::set_OverrideScattering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>(),
                        {"set_OverrideScattering", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ScatteringSplinePointData.get_Scattering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::Splines::ScatteringSplinePointData::*)()>(&::WaveHarmonic::Crest::Splines::ScatteringSplinePointData::get_Scattering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18256e030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>(),
                        {"get_Scattering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ScatteringSplinePointData.set_Scattering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::ScatteringSplinePointData::*)(::UnityEngine::Color)>(&::WaveHarmonic::Crest::Splines::ScatteringSplinePointData::set_Scattering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18256e4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>(),
                        {"set_Scattering", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ScatteringSplinePointData.get_Weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::Splines::ScatteringSplinePointData::*)()>(&::WaveHarmonic::Crest::Splines::ScatteringSplinePointData::get_Weight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>(),
                        {"get_Weight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ScatteringSplinePointData.set_Weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::ScatteringSplinePointData::*)(float_t)>(&::WaveHarmonic::Crest::Splines::ScatteringSplinePointData::set_Weight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>(),
                        {"set_Weight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ScatteringSplinePointData.GetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::WaveHarmonic::Crest::Splines::ScatteringSplinePointData::*)(::UnityEngine::Vector4)>(&::WaveHarmonic::Crest::Splines::ScatteringSplinePointData::GetData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18256e390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ScatteringSplinePointData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::ScatteringSplinePointData::*)()>(&::WaveHarmonic::Crest::Splines::ScatteringSplinePointData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18256e470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::Splines::ScatteringSplinePointData::__cordl_internal_get__OverrideScattering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideScattering;
}
constexpr bool const& WaveHarmonic::Crest::Splines::ScatteringSplinePointData::__cordl_internal_get__OverrideScattering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideScattering;
}
constexpr void WaveHarmonic::Crest::Splines::ScatteringSplinePointData::__cordl_internal_set__OverrideScattering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideScattering = value;
}
constexpr ::UnityEngine::Color& WaveHarmonic::Crest::Splines::ScatteringSplinePointData::__cordl_internal_get__Scattering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Scattering;
}
constexpr ::UnityEngine::Color const& WaveHarmonic::Crest::Splines::ScatteringSplinePointData::__cordl_internal_get__Scattering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Scattering;
}
constexpr void WaveHarmonic::Crest::Splines::ScatteringSplinePointData::__cordl_internal_set__Scattering(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Scattering = value;
}
constexpr float_t& WaveHarmonic::Crest::Splines::ScatteringSplinePointData::__cordl_internal_get__Weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Weight;
}
constexpr float_t const& WaveHarmonic::Crest::Splines::ScatteringSplinePointData::__cordl_internal_get__Weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Weight;
}
constexpr void WaveHarmonic::Crest::Splines::ScatteringSplinePointData::__cordl_internal_set__Weight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Weight = value;
}
inline void WaveHarmonic::Crest::Splines::ScatteringSplinePointData::setStaticF_s_DefaultScattering(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "s_DefaultScattering", ::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color WaveHarmonic::Crest::Splines::ScatteringSplinePointData::getStaticF_s_DefaultScattering()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_DefaultScattering", ::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>();
}
inline bool WaveHarmonic::Crest::Splines::ScatteringSplinePointData::get_OverrideScattering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>(),
                        {"get_OverrideScattering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::ScatteringSplinePointData::set_OverrideScattering(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>(),
                        {"set_OverrideScattering", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::Splines::ScatteringSplinePointData::get_Scattering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>(),
                        {"get_Scattering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::ScatteringSplinePointData::set_Scattering(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>(),
                        {"set_Scattering", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::Splines::ScatteringSplinePointData::get_Weight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>(),
                        {"get_Weight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::ScatteringSplinePointData::set_Weight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>(),
                        {"set_Weight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector4 WaveHarmonic::Crest::Splines::ScatteringSplinePointData::GetData(::UnityEngine::Vector4  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, data);
}
inline void WaveHarmonic::Crest::Splines::ScatteringSplinePointData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Splines::ScatteringSplinePointData* WaveHarmonic::Crest::Splines::ScatteringSplinePointData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Splines::ScatteringSplinePointData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Splines::ScatteringSplinePointData::ScatteringSplinePointData()   {
}
