#pragma once
// IWYU pragma private; include "Rowlan/Genesis/PathSettingsTemplate.hpp"
#include "Rowlan/Genesis/zzzz__PathSettings_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rowlan/Genesis/zzzz__PathSettingsTemplate_def.hpp"
#include "Rowlan/Genesis/zzzz__ITemplateSettings_def.hpp"
//  Writing Method size for method: ::Rowlan::Genesis::PathSettingsTemplate.GetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rowlan::Genesis::PathSettingsTemplate::*)()>(&::Rowlan::Genesis::PathSettingsTemplate::GetName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::PathSettingsTemplate*>(),
                        {"GetName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::PathSettingsTemplate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::PathSettingsTemplate::*)()>(&::Rowlan::Genesis::PathSettingsTemplate::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181abf510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::PathSettingsTemplate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_get_templateName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateName;
}
constexpr ::StringW const& Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_get_templateName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateName;
}
constexpr void Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_set_templateName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___templateName = value;
}
constexpr bool& Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_get_active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr bool const& Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_get_active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr void Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_set_active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___active = value;
}
constexpr float_t& Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_get_probability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probability;
}
constexpr float_t const& Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_get_probability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probability;
}
constexpr void Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_set_probability(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___probability = value;
}
constexpr ::Rowlan::Genesis::PathSettings_Shape& Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_get_shape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shape;
}
constexpr ::Rowlan::Genesis::PathSettings_Shape const& Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_get_shape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shape;
}
constexpr void Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_set_shape(::Rowlan::Genesis::PathSettings_Shape  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shape = value;
}
constexpr bool& Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_get_closed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closed;
}
constexpr bool const& Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_get_closed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closed;
}
constexpr void Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_set_closed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closed = value;
}
constexpr float_t& Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr float_t const& Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_set_scale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scale = value;
}
constexpr ::UnityEngine::Vector2& Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_get_deformationAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deformationAngle;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_get_deformationAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deformationAngle;
}
constexpr void Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_set_deformationAngle(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deformationAngle = value;
}
constexpr int32_t& Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_get_subdivisionIterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subdivisionIterations;
}
constexpr int32_t const& Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_get_subdivisionIterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subdivisionIterations;
}
constexpr void Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_set_subdivisionIterations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subdivisionIterations = value;
}
constexpr ::UnityEngine::Vector2& Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_get_subdivisionRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subdivisionRange;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_get_subdivisionRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subdivisionRange;
}
constexpr void Rowlan::Genesis::PathSettingsTemplate::__cordl_internal_set_subdivisionRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subdivisionRange = value;
}
inline ::StringW Rowlan::Genesis::PathSettingsTemplate::GetName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::PathSettingsTemplate*>(),
                        {"GetName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rowlan::Genesis::PathSettingsTemplate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::PathSettingsTemplate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::PathSettingsTemplate* Rowlan::Genesis::PathSettingsTemplate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::PathSettingsTemplate*>());
}
/// @brief Convert operator to "::Rowlan::Genesis::ITemplateSettings"
constexpr  Rowlan::Genesis::PathSettingsTemplate::operator ::Rowlan::Genesis::ITemplateSettings*() noexcept {
return static_cast<::Rowlan::Genesis::ITemplateSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rowlan::Genesis::ITemplateSettings"
constexpr ::Rowlan::Genesis::ITemplateSettings* Rowlan::Genesis::PathSettingsTemplate::i___Rowlan__Genesis__ITemplateSettings() noexcept {
return static_cast<::Rowlan::Genesis::ITemplateSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::PathSettingsTemplate::PathSettingsTemplate()   {
}
