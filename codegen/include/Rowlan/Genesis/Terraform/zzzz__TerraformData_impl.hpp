#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Terraform/TerraformData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rowlan/Genesis/Terraform/zzzz__TerraformData_def.hpp"
#include "Rowlan/Genesis/Terraform/zzzz__TerraformData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::Terraform::TerraformData_HeightStampMode::TerraformData_HeightStampMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Terraform::TerraformData_HeightStampMode::TerraformData_HeightStampMode()   {
}
constexpr ::Rowlan::Genesis::Terraform::TerraformData_HeightStampMode  Rowlan::Genesis::Terraform::TerraformData_HeightStampMode::Transform{static_cast<int32_t>(0x0)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::Terraform::TerraformData_SplineMode::TerraformData_SplineMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Terraform::TerraformData_SplineMode::TerraformData_SplineMode()   {
}
constexpr ::Rowlan::Genesis::Terraform::TerraformData_SplineMode  Rowlan::Genesis::Terraform::TerraformData_SplineMode::Operations{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::Genesis::Terraform::TerraformData_SplineMode  Rowlan::Genesis::Terraform::TerraformData_SplineMode::Shape{static_cast<int32_t>(0x1)};
constexpr ::Rowlan::Genesis::Terraform::TerraformData_SplineMode  Rowlan::Genesis::Terraform::TerraformData_SplineMode::Mask{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::Terraform::TerraformData_FalloffMode::TerraformData_FalloffMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Terraform::TerraformData_FalloffMode::TerraformData_FalloffMode()   {
}
constexpr ::Rowlan::Genesis::Terraform::TerraformData_FalloffMode  Rowlan::Genesis::Terraform::TerraformData_FalloffMode::Hierarchy{static_cast<int32_t>(0x0)};
//  Writing Method size for method: ::Rowlan::Genesis::Terraform::TerraformData_SplineSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Terraform::TerraformData_SplineSettings::*)()>(&::Rowlan::Genesis::Terraform::TerraformData_SplineSettings::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181abfa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Terraform::TerraformData_SplineSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& Rowlan::Genesis::Terraform::TerraformData_SplineSettings::__cordl_internal_get_deformationAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deformationAngle;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::Genesis::Terraform::TerraformData_SplineSettings::__cordl_internal_get_deformationAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deformationAngle;
}
constexpr void Rowlan::Genesis::Terraform::TerraformData_SplineSettings::__cordl_internal_set_deformationAngle(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deformationAngle = value;
}
constexpr ::UnityEngine::Vector2& Rowlan::Genesis::Terraform::TerraformData_SplineSettings::__cordl_internal_get_subdivisionRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subdivisionRange;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::Genesis::Terraform::TerraformData_SplineSettings::__cordl_internal_get_subdivisionRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subdivisionRange;
}
constexpr void Rowlan::Genesis::Terraform::TerraformData_SplineSettings::__cordl_internal_set_subdivisionRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subdivisionRange = value;
}
constexpr float_t& Rowlan::Genesis::Terraform::TerraformData_SplineSettings::__cordl_internal_get_douglasPeuckerReductionTolerance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___douglasPeuckerReductionTolerance;
}
constexpr float_t const& Rowlan::Genesis::Terraform::TerraformData_SplineSettings::__cordl_internal_get_douglasPeuckerReductionTolerance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___douglasPeuckerReductionTolerance;
}
constexpr void Rowlan::Genesis::Terraform::TerraformData_SplineSettings::__cordl_internal_set_douglasPeuckerReductionTolerance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___douglasPeuckerReductionTolerance = value;
}
inline void Rowlan::Genesis::Terraform::TerraformData_SplineSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Terraform::TerraformData_SplineSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::Terraform::TerraformData_SplineSettings* Rowlan::Genesis::Terraform::TerraformData_SplineSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::Terraform::TerraformData_SplineSettings*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Terraform::TerraformData_SplineSettings::TerraformData_SplineSettings()   {
}
//  Writing Method size for method: ::Rowlan::Genesis::Terraform::TerraformData.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Terraform::TerraformData::*)()>(&::Rowlan::Genesis::Terraform::TerraformData::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Terraform::TerraformData*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::Terraform::TerraformData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Terraform::TerraformData::*)()>(&::Rowlan::Genesis::Terraform::TerraformData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181abfba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Terraform::TerraformData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_get_gameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_get_gameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr void Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObject = value;
}
constexpr bool& Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_get_autoAssignment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoAssignment;
}
constexpr bool const& Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_get_autoAssignment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoAssignment;
}
constexpr void Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_set_autoAssignment(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoAssignment = value;
}
constexpr bool& Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_get_helpBoxVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpBoxVisible;
}
constexpr bool const& Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_get_helpBoxVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpBoxVisible;
}
constexpr void Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_set_helpBoxVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___helpBoxVisible = value;
}
constexpr ::Rowlan::Genesis::Terraform::TerraformData_SplineMode& Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_get_splineMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineMode;
}
constexpr ::Rowlan::Genesis::Terraform::TerraformData_SplineMode const& Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_get_splineMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineMode;
}
constexpr void Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_set_splineMode(::Rowlan::Genesis::Terraform::TerraformData_SplineMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineMode = value;
}
constexpr ::Rowlan::Genesis::Terraform::TerraformData_SplineSettings*& Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_get_splineSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineSettings;
}
constexpr ::Rowlan::Genesis::Terraform::TerraformData_SplineSettings* const& Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_get_splineSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineSettings;
}
constexpr void Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_set_splineSettings(::Rowlan::Genesis::Terraform::TerraformData_SplineSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineSettings = value;
}
constexpr ::Rowlan::Genesis::Terraform::TerraformData_HeightStampMode& Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_get_heightStampMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightStampMode;
}
constexpr ::Rowlan::Genesis::Terraform::TerraformData_HeightStampMode const& Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_get_heightStampMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightStampMode;
}
constexpr void Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_set_heightStampMode(::Rowlan::Genesis::Terraform::TerraformData_HeightStampMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightStampMode = value;
}
constexpr ::Rowlan::Genesis::Terraform::TerraformData_FalloffMode& Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_get_falloffMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloffMode;
}
constexpr ::Rowlan::Genesis::Terraform::TerraformData_FalloffMode const& Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_get_falloffMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___falloffMode;
}
constexpr void Rowlan::Genesis::Terraform::TerraformData::__cordl_internal_set_falloffMode(::Rowlan::Genesis::Terraform::TerraformData_FalloffMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___falloffMode = value;
}
inline void Rowlan::Genesis::Terraform::TerraformData::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Terraform::TerraformData*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::Genesis::Terraform::TerraformData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Terraform::TerraformData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::Terraform::TerraformData* Rowlan::Genesis::Terraform::TerraformData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::Terraform::TerraformData*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Terraform::TerraformData::TerraformData()   {
}
