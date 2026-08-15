#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaveSpectrum.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__CustomScriptableObject_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaveSpectrum_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaveSpectrum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel::WaveSpectrum_SpectrumModel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel::WaveSpectrum_SpectrumModel()   {
}
constexpr ::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel  WaveHarmonic::Crest::WaveSpectrum_SpectrumModel::None{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel  WaveHarmonic::Crest::WaveSpectrum_SpectrumModel::PiersonMoskowitz{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaveSpectrum.SmallWavelength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::WaveHarmonic::Crest::WaveSpectrum::SmallWavelength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a6e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"SmallWavelength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaveSpectrum.GetOctaveIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::WaveHarmonic::Crest::WaveSpectrum::GetOctaveIndex)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825a6c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"GetOctaveIndex", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaveSpectrum.GetAmplitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::WaveSpectrum::*)(float_t, float_t, float_t, float_t, ::by_ref<float_t>)>(&::WaveHarmonic::Crest::WaveSpectrum::GetAmplitude)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x1825a6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"GetAmplitude", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaveSpectrum.ComputeWaveSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::WaveHarmonic::Crest::WaveSpectrum::ComputeWaveSpeed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825a6590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"ComputeWaveSpeed", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaveSpectrum.GenerateWaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaveSpectrum::*)(int32_t, ::by_ref<::ArrayW<float_t>>, ::by_ref<::ArrayW<float_t>>)>(&::WaveHarmonic::Crest::WaveSpectrum::GenerateWaveData)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1825a6600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"GenerateWaveData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaveSpectrum.ApplyPiersonMoskowitzSpectrum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaveSpectrum::*)(float_t)>(&::WaveHarmonic::Crest::WaveSpectrum::ApplyPiersonMoskowitzSpectrum)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1825a6400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"ApplyPiersonMoskowitzSpectrum", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaveSpectrum.AlphaSpectrum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::WaveHarmonic::Crest::WaveSpectrum::AlphaSpectrum)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825a63c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"AlphaSpectrum", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaveSpectrum.DeepDispersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, ::by_ref<float_t>)>(&::WaveHarmonic::Crest::WaveSpectrum::DeepDispersion)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825a65c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"DeepDispersion", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaveSpectrum.PiersonMoskowitzSpectrum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::WaveHarmonic::Crest::WaveSpectrum::PiersonMoskowitzSpectrum)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1825a6e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"PiersonMoskowitzSpectrum", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaveSpectrum.get_ControlsTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::WaveHarmonic::Crest::WaveSpectrum::*)()>(&::WaveHarmonic::Crest::WaveSpectrum::get_ControlsTexture)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1825a7050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"get_ControlsTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaveSpectrum.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaveSpectrum::*)()>(&::WaveHarmonic::Crest::WaveSpectrum::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825a6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaveSpectrum.InitializeHandControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaveSpectrum::*)()>(&::WaveHarmonic::Crest::WaveSpectrum::InitializeHandControls)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1825a6c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"InitializeHandControls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaveSpectrum.OnChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaveSpectrum::*)(::StringW, ::System::Object*)>(&::WaveHarmonic::Crest::WaveSpectrum::OnChange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825a6d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"OnChange", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaveSpectrum.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaveSpectrum::*)()>(&::WaveHarmonic::Crest::WaveSpectrum::OnGUI)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1825a6da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaveSpectrum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaveSpectrum::*)()>(&::WaveHarmonic::Crest::WaveSpectrum::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1825a6ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__Multiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Multiplier;
}
constexpr float_t const& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__Multiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Multiplier;
}
constexpr void WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_set__Multiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Multiplier = value;
}
constexpr float_t& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__Chop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Chop;
}
constexpr float_t const& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__Chop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Chop;
}
constexpr void WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_set__Chop(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Chop = value;
}
constexpr float_t& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__GravityScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GravityScale;
}
constexpr float_t const& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__GravityScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GravityScale;
}
constexpr void WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_set__GravityScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GravityScale = value;
}
constexpr float_t& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__WaveDirectionVariance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveDirectionVariance;
}
constexpr float_t const& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__WaveDirectionVariance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveDirectionVariance;
}
constexpr void WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_set__WaveDirectionVariance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaveDirectionVariance = value;
}
constexpr ::ArrayW<float_t>& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__PowerLogarithmicScales()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PowerLogarithmicScales;
}
constexpr ::ArrayW<float_t> const& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__PowerLogarithmicScales() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PowerLogarithmicScales;
}
constexpr void WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_set__PowerLogarithmicScales(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PowerLogarithmicScales = value;
}
constexpr ::ArrayW<bool>& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__PowerDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PowerDisabled;
}
constexpr ::ArrayW<bool> const& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__PowerDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PowerDisabled;
}
constexpr void WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_set__PowerDisabled(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PowerDisabled = value;
}
constexpr ::ArrayW<float_t>& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__ChopScales()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChopScales;
}
constexpr ::ArrayW<float_t> const& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__ChopScales() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChopScales;
}
constexpr void WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_set__ChopScales(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChopScales = value;
}
constexpr ::ArrayW<float_t>& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__GravityScales()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GravityScales;
}
constexpr ::ArrayW<float_t> const& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__GravityScales() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GravityScales;
}
constexpr void WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_set__GravityScales(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GravityScales = value;
}
constexpr ::ArrayW<float_t>& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__Attenuation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Attenuation;
}
constexpr ::ArrayW<float_t> const& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__Attenuation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Attenuation;
}
constexpr void WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_set__Attenuation(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Attenuation = value;
}
constexpr bool& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__ShowAdvancedControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowAdvancedControls;
}
constexpr bool const& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__ShowAdvancedControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowAdvancedControls;
}
constexpr void WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_set__ShowAdvancedControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShowAdvancedControls = value;
}
constexpr ::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__Model()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Model;
}
constexpr ::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel const& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__Model() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Model;
}
constexpr void WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_set__Model(::WaveHarmonic::Crest::WaveSpectrum_SpectrumModel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Model = value;
}
constexpr ::ArrayW<float_t>& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__PowerLinearScales()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PowerLinearScales;
}
constexpr ::ArrayW<float_t> const& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__PowerLinearScales() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PowerLinearScales;
}
constexpr void WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_set__PowerLinearScales(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PowerLinearScales = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__ControlsTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ControlsTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__ControlsTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ControlsTexture;
}
constexpr void WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_set__ControlsTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ControlsTexture = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__ScratchData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScratchData;
}
constexpr ::ArrayW<::UnityEngine::Color> const& WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_get__ScratchData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScratchData;
}
constexpr void WaveHarmonic::Crest::WaveSpectrum::__cordl_internal_set__ScratchData(::ArrayW<::UnityEngine::Color>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScratchData = value;
}
inline void WaveHarmonic::Crest::WaveSpectrum::setStaticF_s_MinimumPowerLog(float_t  value)  {
::cordl_internals::setStaticField<float_t, "s_MinimumPowerLog", ::WaveHarmonic::Crest::WaveSpectrum*>(std::forward<float_t>(value));
}
inline float_t WaveHarmonic::Crest::WaveSpectrum::getStaticF_s_MinimumPowerLog()  {
return ::cordl_internals::getStaticField<float_t, "s_MinimumPowerLog", ::WaveHarmonic::Crest::WaveSpectrum*>();
}
inline void WaveHarmonic::Crest::WaveSpectrum::setStaticF_s_MaximumPowerLog(float_t  value)  {
::cordl_internals::setStaticField<float_t, "s_MaximumPowerLog", ::WaveHarmonic::Crest::WaveSpectrum*>(std::forward<float_t>(value));
}
inline float_t WaveHarmonic::Crest::WaveSpectrum::getStaticF_s_MaximumPowerLog()  {
return ::cordl_internals::getStaticField<float_t, "s_MaximumPowerLog", ::WaveHarmonic::Crest::WaveSpectrum*>();
}
inline float_t WaveHarmonic::Crest::WaveSpectrum::SmallWavelength(float_t  octaveIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"SmallWavelength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, octaveIndex);
}
inline int32_t WaveHarmonic::Crest::WaveSpectrum::GetOctaveIndex(float_t  wavelength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"GetOctaveIndex", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, wavelength);
}
inline float_t WaveHarmonic::Crest::WaveSpectrum::GetAmplitude(float_t  wavelength, float_t  componentsPerOctave, float_t  windSpeed, float_t  gravity, ::by_ref<float_t>  power)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"GetAmplitude", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, wavelength, componentsPerOctave, windSpeed, gravity, power);
}
inline float_t WaveHarmonic::Crest::WaveSpectrum::ComputeWaveSpeed(float_t  wavelength, float_t  gravity, float_t  gravityMultiplier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"ComputeWaveSpeed", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, wavelength, gravity, gravityMultiplier);
}
inline void WaveHarmonic::Crest::WaveSpectrum::GenerateWaveData(int32_t  componentsPerOctave, ::by_ref<::ArrayW<float_t>>  wavelengths, ::by_ref<::ArrayW<float_t>>  anglesDeg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"GenerateWaveData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, componentsPerOctave, wavelengths, anglesDeg);
}
inline void WaveHarmonic::Crest::WaveSpectrum::ApplyPiersonMoskowitzSpectrum(float_t  gravity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"ApplyPiersonMoskowitzSpectrum", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gravity);
}
inline float_t WaveHarmonic::Crest::WaveSpectrum::AlphaSpectrum(float_t  a, float_t  g, float_t  w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"AlphaSpectrum", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, g, w);
}
inline void WaveHarmonic::Crest::WaveSpectrum::DeepDispersion(float_t  k, float_t  gravity, ::by_ref<float_t>  w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"DeepDispersion", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, k, gravity, w);
}
inline float_t WaveHarmonic::Crest::WaveSpectrum::PiersonMoskowitzSpectrum(float_t  gravity, float_t  wavelength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"PiersonMoskowitzSpectrum", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, gravity, wavelength);
}
inline ::UnityW<::UnityEngine::Texture2D> WaveHarmonic::Crest::WaveSpectrum::get_ControlsTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"get_ControlsTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaveSpectrum::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaveSpectrum::InitializeHandControls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"InitializeHandControls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaveSpectrum::OnChange(::StringW  path, ::System::Object*  previous)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"OnChange", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, previous);
}
inline void WaveHarmonic::Crest::WaveSpectrum::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaveSpectrum::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaveSpectrum*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaveSpectrum* WaveHarmonic::Crest::WaveSpectrum::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaveSpectrum*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaveSpectrum::WaveSpectrum()   {
}
