#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/WindController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__WindController_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__WindZone_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::WindController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::WindController::*)()>(&::JBooth::MicroVerseCore::WindController::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18144cbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::WindController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::WindController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::WindController::*)()>(&::JBooth::MicroVerseCore::WindController::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18144cbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::WindController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::WindController.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::WindController::*)()>(&::JBooth::MicroVerseCore::WindController::OnValidate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18144cbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::WindController*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::WindController.ApplySettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::WindController::*)()>(&::JBooth::MicroVerseCore::WindController::ApplySettings)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x18144c310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::WindController*>(),
                        {"ApplySettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::WindController.GetDirectionAndSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::JBooth::MicroVerseCore::WindController::*)()>(&::JBooth::MicroVerseCore::WindController::GetDirectionAndSpeed)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18144cae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::WindController*>(),
                        {"GetDirectionAndSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::WindController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::WindController::*)()>(&::JBooth::MicroVerseCore::WindController::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18144cd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::WindController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& JBooth::MicroVerseCore::WindController::__cordl_internal_get_windSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windSpeed;
}
constexpr float_t const& JBooth::MicroVerseCore::WindController::__cordl_internal_get_windSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windSpeed;
}
constexpr void JBooth::MicroVerseCore::WindController::__cordl_internal_set_windSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windSpeed = value;
}
constexpr float_t& JBooth::MicroVerseCore::WindController::__cordl_internal_get_turbulence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turbulence;
}
constexpr float_t const& JBooth::MicroVerseCore::WindController::__cordl_internal_get_turbulence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turbulence;
}
constexpr void JBooth::MicroVerseCore::WindController::__cordl_internal_set_turbulence(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turbulence = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::WindController::__cordl_internal_get_noiseTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::WindController::__cordl_internal_get_noiseTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseTexture;
}
constexpr void JBooth::MicroVerseCore::WindController::__cordl_internal_set_noiseTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noiseTexture = value;
}
constexpr float_t& JBooth::MicroVerseCore::WindController::__cordl_internal_get_bendingWorldSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bendingWorldSize;
}
constexpr float_t const& JBooth::MicroVerseCore::WindController::__cordl_internal_get_bendingWorldSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bendingWorldSize;
}
constexpr void JBooth::MicroVerseCore::WindController::__cordl_internal_set_bendingWorldSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bendingWorldSize = value;
}
constexpr float_t& JBooth::MicroVerseCore::WindController::__cordl_internal_get_leafWorldSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leafWorldSize;
}
constexpr float_t const& JBooth::MicroVerseCore::WindController::__cordl_internal_get_leafWorldSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leafWorldSize;
}
constexpr void JBooth::MicroVerseCore::WindController::__cordl_internal_set_leafWorldSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leafWorldSize = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::WindController::__cordl_internal_get_gustTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gustTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::WindController::__cordl_internal_get_gustTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gustTexture;
}
constexpr void JBooth::MicroVerseCore::WindController::__cordl_internal_set_gustTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gustTexture = value;
}
constexpr float_t& JBooth::MicroVerseCore::WindController::__cordl_internal_get_gustWorldSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gustWorldSize;
}
constexpr float_t const& JBooth::MicroVerseCore::WindController::__cordl_internal_get_gustWorldSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gustWorldSize;
}
constexpr void JBooth::MicroVerseCore::WindController::__cordl_internal_set_gustWorldSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gustWorldSize = value;
}
constexpr float_t& JBooth::MicroVerseCore::WindController::__cordl_internal_get_gistSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gistSpeed;
}
constexpr float_t const& JBooth::MicroVerseCore::WindController::__cordl_internal_get_gistSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gistSpeed;
}
constexpr void JBooth::MicroVerseCore::WindController::__cordl_internal_set_gistSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gistSpeed = value;
}
constexpr float_t& JBooth::MicroVerseCore::WindController::__cordl_internal_get_gustScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gustScale;
}
constexpr float_t const& JBooth::MicroVerseCore::WindController::__cordl_internal_get_gustScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gustScale;
}
constexpr void JBooth::MicroVerseCore::WindController::__cordl_internal_set_gustScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gustScale = value;
}
constexpr ::UnityW<::UnityEngine::WindZone>& JBooth::MicroVerseCore::WindController::__cordl_internal_get_point1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___point1;
}
constexpr ::UnityW<::UnityEngine::WindZone> const& JBooth::MicroVerseCore::WindController::__cordl_internal_get_point1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___point1;
}
constexpr void JBooth::MicroVerseCore::WindController::__cordl_internal_set_point1(::UnityW<::UnityEngine::WindZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___point1 = value;
}
constexpr ::UnityW<::UnityEngine::WindZone>& JBooth::MicroVerseCore::WindController::__cordl_internal_get_point2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___point2;
}
constexpr ::UnityW<::UnityEngine::WindZone> const& JBooth::MicroVerseCore::WindController::__cordl_internal_get_point2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___point2;
}
constexpr void JBooth::MicroVerseCore::WindController::__cordl_internal_set_point2(::UnityW<::UnityEngine::WindZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___point2 = value;
}
constexpr ::UnityW<::UnityEngine::WindZone>& JBooth::MicroVerseCore::WindController::__cordl_internal_get_point3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___point3;
}
constexpr ::UnityW<::UnityEngine::WindZone> const& JBooth::MicroVerseCore::WindController::__cordl_internal_get_point3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___point3;
}
constexpr void JBooth::MicroVerseCore::WindController::__cordl_internal_set_point3(::UnityW<::UnityEngine::WindZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___point3 = value;
}
constexpr ::UnityW<::UnityEngine::WindZone>& JBooth::MicroVerseCore::WindController::__cordl_internal_get_point4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___point4;
}
constexpr ::UnityW<::UnityEngine::WindZone> const& JBooth::MicroVerseCore::WindController::__cordl_internal_get_point4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___point4;
}
constexpr void JBooth::MicroVerseCore::WindController::__cordl_internal_set_point4(::UnityW<::UnityEngine::WindZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___point4 = value;
}
constexpr ::UnityEngine::Vector4& JBooth::MicroVerseCore::WindController::__cordl_internal_get_pos1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos1;
}
constexpr ::UnityEngine::Vector4 const& JBooth::MicroVerseCore::WindController::__cordl_internal_get_pos1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos1;
}
constexpr void JBooth::MicroVerseCore::WindController::__cordl_internal_set_pos1(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pos1 = value;
}
constexpr ::UnityEngine::Vector4& JBooth::MicroVerseCore::WindController::__cordl_internal_get_pos2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos2;
}
constexpr ::UnityEngine::Vector4 const& JBooth::MicroVerseCore::WindController::__cordl_internal_get_pos2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos2;
}
constexpr void JBooth::MicroVerseCore::WindController::__cordl_internal_set_pos2(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pos2 = value;
}
constexpr ::UnityEngine::Vector4& JBooth::MicroVerseCore::WindController::__cordl_internal_get_pos3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos3;
}
constexpr ::UnityEngine::Vector4 const& JBooth::MicroVerseCore::WindController::__cordl_internal_get_pos3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos3;
}
constexpr void JBooth::MicroVerseCore::WindController::__cordl_internal_set_pos3(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pos3 = value;
}
constexpr ::UnityEngine::Vector4& JBooth::MicroVerseCore::WindController::__cordl_internal_get_pos4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos4;
}
constexpr ::UnityEngine::Vector4 const& JBooth::MicroVerseCore::WindController::__cordl_internal_get_pos4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos4;
}
constexpr void JBooth::MicroVerseCore::WindController::__cordl_internal_set_pos4(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pos4 = value;
}
constexpr ::UnityEngine::Vector4& JBooth::MicroVerseCore::WindController::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr ::UnityEngine::Vector4 const& JBooth::MicroVerseCore::WindController::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void JBooth::MicroVerseCore::WindController::__cordl_internal_set_radius(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
inline void JBooth::MicroVerseCore::WindController::setStaticF_WIND_SETTINGS_TexNoise(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "WIND_SETTINGS_TexNoise", ::JBooth::MicroVerseCore::WindController*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::WindController::getStaticF_WIND_SETTINGS_TexNoise()  {
return ::cordl_internals::getStaticField<int32_t, "WIND_SETTINGS_TexNoise", ::JBooth::MicroVerseCore::WindController*>();
}
inline void JBooth::MicroVerseCore::WindController::setStaticF_WIND_SETTINGS_TexGust(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "WIND_SETTINGS_TexGust", ::JBooth::MicroVerseCore::WindController*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::WindController::getStaticF_WIND_SETTINGS_TexGust()  {
return ::cordl_internals::getStaticField<int32_t, "WIND_SETTINGS_TexGust", ::JBooth::MicroVerseCore::WindController*>();
}
inline void JBooth::MicroVerseCore::WindController::setStaticF_WIND_SETTINGS_WorldDirectionAndSpeed(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "WIND_SETTINGS_WorldDirectionAndSpeed", ::JBooth::MicroVerseCore::WindController*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::WindController::getStaticF_WIND_SETTINGS_WorldDirectionAndSpeed()  {
return ::cordl_internals::getStaticField<int32_t, "WIND_SETTINGS_WorldDirectionAndSpeed", ::JBooth::MicroVerseCore::WindController*>();
}
inline void JBooth::MicroVerseCore::WindController::setStaticF_WIND_SETTINGS_FlexNoiseScale(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "WIND_SETTINGS_FlexNoiseScale", ::JBooth::MicroVerseCore::WindController*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::WindController::getStaticF_WIND_SETTINGS_FlexNoiseScale()  {
return ::cordl_internals::getStaticField<int32_t, "WIND_SETTINGS_FlexNoiseScale", ::JBooth::MicroVerseCore::WindController*>();
}
inline void JBooth::MicroVerseCore::WindController::setStaticF_WIND_SETTINGS_ShiverNoiseScale(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "WIND_SETTINGS_ShiverNoiseScale", ::JBooth::MicroVerseCore::WindController*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::WindController::getStaticF_WIND_SETTINGS_ShiverNoiseScale()  {
return ::cordl_internals::getStaticField<int32_t, "WIND_SETTINGS_ShiverNoiseScale", ::JBooth::MicroVerseCore::WindController*>();
}
inline void JBooth::MicroVerseCore::WindController::setStaticF_WIND_SETTINGS_Turbulence(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "WIND_SETTINGS_Turbulence", ::JBooth::MicroVerseCore::WindController*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::WindController::getStaticF_WIND_SETTINGS_Turbulence()  {
return ::cordl_internals::getStaticField<int32_t, "WIND_SETTINGS_Turbulence", ::JBooth::MicroVerseCore::WindController*>();
}
inline void JBooth::MicroVerseCore::WindController::setStaticF_WIND_SETTINGS_GustSpeed(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "WIND_SETTINGS_GustSpeed", ::JBooth::MicroVerseCore::WindController*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::WindController::getStaticF_WIND_SETTINGS_GustSpeed()  {
return ::cordl_internals::getStaticField<int32_t, "WIND_SETTINGS_GustSpeed", ::JBooth::MicroVerseCore::WindController*>();
}
inline void JBooth::MicroVerseCore::WindController::setStaticF_WIND_SETTINGS_GustScale(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "WIND_SETTINGS_GustScale", ::JBooth::MicroVerseCore::WindController*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::WindController::getStaticF_WIND_SETTINGS_GustScale()  {
return ::cordl_internals::getStaticField<int32_t, "WIND_SETTINGS_GustScale", ::JBooth::MicroVerseCore::WindController*>();
}
inline void JBooth::MicroVerseCore::WindController::setStaticF_WIND_SETTINGS_GustWorldScale(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "WIND_SETTINGS_GustWorldScale", ::JBooth::MicroVerseCore::WindController*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::WindController::getStaticF_WIND_SETTINGS_GustWorldScale()  {
return ::cordl_internals::getStaticField<int32_t, "WIND_SETTINGS_GustWorldScale", ::JBooth::MicroVerseCore::WindController*>();
}
inline void JBooth::MicroVerseCore::WindController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::WindController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::WindController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::WindController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::WindController::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::WindController*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::WindController::ApplySettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::WindController*>(),
                        {"ApplySettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 JBooth::MicroVerseCore::WindController::GetDirectionAndSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::WindController*>(),
                        {"GetDirectionAndSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::WindController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::WindController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::WindController* JBooth::MicroVerseCore::WindController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::WindController*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::WindController::WindController()   {
}
