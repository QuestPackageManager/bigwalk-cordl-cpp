#pragma once
// IWYU pragma private; include "Rowlan/Genesis/StampSettingsTemplate.hpp"
#include "Rowlan/Genesis/zzzz__HeightStampSettings_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rowlan/Genesis/zzzz__StampSettingsTemplate_def.hpp"
#include "Rowlan/Genesis/zzzz__ITemplateSettings_def.hpp"
//  Writing Method size for method: ::Rowlan::Genesis::StampSettingsTemplate.GetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rowlan::Genesis::StampSettingsTemplate::*)()>(&::Rowlan::Genesis::StampSettingsTemplate::GetName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::StampSettingsTemplate*>(),
                        {"GetName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::StampSettingsTemplate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::StampSettingsTemplate::*)()>(&::Rowlan::Genesis::StampSettingsTemplate::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181abfab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::StampSettingsTemplate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_templateName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateName;
}
constexpr ::StringW const& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_templateName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateName;
}
constexpr void Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_set_templateName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___templateName = value;
}
constexpr bool& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr bool const& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr void Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_set_active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___active = value;
}
constexpr float_t& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight;
}
constexpr float_t const& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight;
}
constexpr void Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_set_weight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weight = value;
}
constexpr float_t& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_probability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probability;
}
constexpr float_t const& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_probability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probability;
}
constexpr void Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_set_probability(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___probability = value;
}
constexpr ::Rowlan::Genesis::HeightStampSettings_FalloffType& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_falloffType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloffType;
}
constexpr ::Rowlan::Genesis::HeightStampSettings_FalloffType const& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_falloffType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloffType;
}
constexpr void Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_set_falloffType(::Rowlan::Genesis::HeightStampSettings_FalloffType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___falloffType = value;
}
constexpr ::UnityEngine::Vector2& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_positionRangeX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionRangeX;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_positionRangeX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionRangeX;
}
constexpr void Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_set_positionRangeX(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionRangeX = value;
}
constexpr ::UnityEngine::Vector2& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_positionRangeY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionRangeY;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_positionRangeY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionRangeY;
}
constexpr void Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_set_positionRangeY(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionRangeY = value;
}
constexpr ::UnityEngine::Vector2& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_positionRangeZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionRangeZ;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_positionRangeZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionRangeZ;
}
constexpr void Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_set_positionRangeZ(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionRangeZ = value;
}
constexpr ::UnityEngine::Vector2& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_rotationRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationRange;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_rotationRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationRange;
}
constexpr void Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_set_rotationRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationRange = value;
}
constexpr ::UnityEngine::Vector2& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_scaleRangeWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleRangeWidth;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_scaleRangeWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleRangeWidth;
}
constexpr void Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_set_scaleRangeWidth(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleRangeWidth = value;
}
constexpr ::UnityEngine::Vector2& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_scaleRangeHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleRangeHeight;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_get_scaleRangeHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleRangeHeight;
}
constexpr void Rowlan::Genesis::StampSettingsTemplate::__cordl_internal_set_scaleRangeHeight(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleRangeHeight = value;
}
inline ::StringW Rowlan::Genesis::StampSettingsTemplate::GetName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::StampSettingsTemplate*>(),
                        {"GetName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rowlan::Genesis::StampSettingsTemplate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::StampSettingsTemplate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::StampSettingsTemplate* Rowlan::Genesis::StampSettingsTemplate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::StampSettingsTemplate*>());
}
/// @brief Convert operator to "::Rowlan::Genesis::ITemplateSettings"
constexpr  Rowlan::Genesis::StampSettingsTemplate::operator ::Rowlan::Genesis::ITemplateSettings*() noexcept {
return static_cast<::Rowlan::Genesis::ITemplateSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rowlan::Genesis::ITemplateSettings"
constexpr ::Rowlan::Genesis::ITemplateSettings* Rowlan::Genesis::StampSettingsTemplate::i___Rowlan__Genesis__ITemplateSettings() noexcept {
return static_cast<::Rowlan::Genesis::ITemplateSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::StampSettingsTemplate::StampSettingsTemplate()   {
}
