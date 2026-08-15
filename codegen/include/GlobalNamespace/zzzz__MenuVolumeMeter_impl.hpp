#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuVolumeMeter.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MenuVolumeMeter_def.hpp"
#include "GlobalNamespace/zzzz__OfflineMicMeter_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MenuVolumeMeter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuVolumeMeter::*)()>(&::GlobalNamespace::MenuVolumeMeter::Awake)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180425450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuVolumeMeter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuVolumeMeter.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuVolumeMeter::*)()>(&::GlobalNamespace::MenuVolumeMeter::Update)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x180425490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuVolumeMeter*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuVolumeMeter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuVolumeMeter::*)()>(&::GlobalNamespace::MenuVolumeMeter::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804259b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuVolumeMeter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OfflineMicMeter>& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_offlineSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineSource;
}
constexpr ::UnityW<::GlobalNamespace::OfflineMicMeter> const& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_offlineSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineSource;
}
constexpr void GlobalNamespace::MenuVolumeMeter::__cordl_internal_set_offlineSource(::UnityW<::GlobalNamespace::OfflineMicMeter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offlineSource = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void GlobalNamespace::MenuVolumeMeter::__cordl_internal_set_text(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr float_t& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_maxAmplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAmplitude;
}
constexpr float_t const& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_maxAmplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAmplitude;
}
constexpr void GlobalNamespace::MenuVolumeMeter::__cordl_internal_set_maxAmplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxAmplitude = value;
}
constexpr float_t& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_smoothedAmplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothedAmplitude;
}
constexpr float_t const& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_smoothedAmplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothedAmplitude;
}
constexpr void GlobalNamespace::MenuVolumeMeter::__cordl_internal_set_smoothedAmplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothedAmplitude = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_scalingTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scalingTarget;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_scalingTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scalingTarget;
}
constexpr void GlobalNamespace::MenuVolumeMeter::__cordl_internal_set_scalingTarget(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scalingTarget = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_maxMeterTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxMeterTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_maxMeterTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxMeterTransform;
}
constexpr void GlobalNamespace::MenuVolumeMeter::__cordl_internal_set_maxMeterTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxMeterTransform = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_maxMeterImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxMeterImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_maxMeterImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxMeterImage;
}
constexpr void GlobalNamespace::MenuVolumeMeter::__cordl_internal_set_maxMeterImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxMeterImage = value;
}
constexpr float_t& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_initialWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialWidth;
}
constexpr float_t const& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_initialWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialWidth;
}
constexpr void GlobalNamespace::MenuVolumeMeter::__cordl_internal_set_initialWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialWidth = value;
}
constexpr float_t& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_initialMaxMeterWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialMaxMeterWidth;
}
constexpr float_t const& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_initialMaxMeterWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialMaxMeterWidth;
}
constexpr void GlobalNamespace::MenuVolumeMeter::__cordl_internal_set_initialMaxMeterWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialMaxMeterWidth = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_initialMaxMeterColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialMaxMeterColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get_initialMaxMeterColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialMaxMeterColor;
}
constexpr void GlobalNamespace::MenuVolumeMeter::__cordl_internal_set_initialMaxMeterColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialMaxMeterColor = value;
}
constexpr ::StringW& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get__greenHEX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____greenHEX;
}
constexpr ::StringW const& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get__greenHEX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____greenHEX;
}
constexpr void GlobalNamespace::MenuVolumeMeter::__cordl_internal_set__greenHEX(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____greenHEX = value;
}
constexpr ::StringW& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get__redHEX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____redHEX;
}
constexpr ::StringW const& GlobalNamespace::MenuVolumeMeter::__cordl_internal_get__redHEX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____redHEX;
}
constexpr void GlobalNamespace::MenuVolumeMeter::__cordl_internal_set__redHEX(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____redHEX = value;
}
inline void GlobalNamespace::MenuVolumeMeter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuVolumeMeter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuVolumeMeter::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuVolumeMeter*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuVolumeMeter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuVolumeMeter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuVolumeMeter* GlobalNamespace::MenuVolumeMeter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuVolumeMeter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuVolumeMeter::MenuVolumeMeter()   {
}
