#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Roads/RoadsData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rowlan/Genesis/Roads/zzzz__RoadsData_def.hpp"
#include "Rowlan/Genesis/Roads/zzzz__RoadsData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode::RoadsData_RoadSystemMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode::RoadsData_RoadSystemMode()   {
}
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode  Rowlan::Genesis::Roads::RoadsData_RoadSystemMode::Design{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode  Rowlan::Genesis::Roads::RoadsData_RoadSystemMode::Batch{static_cast<int32_t>(0x1)};
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode  Rowlan::Genesis::Roads::RoadsData_RoadSystemMode::Global{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::Roads::RoadsData_IntersectionMode::RoadsData_IntersectionMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Roads::RoadsData_IntersectionMode::RoadsData_IntersectionMode()   {
}
constexpr ::Rowlan::Genesis::Roads::RoadsData_IntersectionMode  Rowlan::Genesis::Roads::RoadsData_IntersectionMode::Design{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::Genesis::Roads::RoadsData_IntersectionMode  Rowlan::Genesis::Roads::RoadsData_IntersectionMode::Align{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadMode::RoadsData_RoadMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadMode::RoadsData_RoadMode()   {
}
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadMode  Rowlan::Genesis::Roads::RoadsData_RoadMode::Design{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadMode  Rowlan::Genesis::Roads::RoadsData_RoadMode::Objects{static_cast<int32_t>(0x1)};
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadMode  Rowlan::Genesis::Roads::RoadsData_RoadMode::Align{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings::*)()>(&::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181abead0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings::__cordl_internal_get_rotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationOffset;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings::__cordl_internal_get_rotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationOffset;
}
constexpr void Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings::__cordl_internal_set_rotationOffset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationOffset = value;
}
constexpr ::UnityEngine::Vector2& Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings::__cordl_internal_get_heightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightOffset;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings::__cordl_internal_get_heightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightOffset;
}
constexpr void Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings::__cordl_internal_set_heightOffset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightOffset = value;
}
constexpr ::UnityEngine::Vector2& Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings::__cordl_internal_get_positionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionOffset;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings::__cordl_internal_get_positionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionOffset;
}
constexpr void Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings::__cordl_internal_set_positionOffset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionOffset = value;
}
inline void Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings* Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings::RoadSystemSettings_RoadsData_JitterSettings()   {
}
//  Writing Method size for method: ::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings::*)()>(&::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181abf980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings*& Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings::__cordl_internal_get_jitterSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jitterSettings;
}
constexpr ::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings* const& Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings::__cordl_internal_get_jitterSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jitterSettings;
}
constexpr void Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings::__cordl_internal_set_jitterSettings(::Rowlan::Genesis::Roads::RoadSystemSettings_RoadsData_JitterSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jitterSettings = value;
}
inline void Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings* Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings::RoadsData_RoadSystemSettings()   {
}
//  Writing Method size for method: ::Rowlan::Genesis::Roads::RoadsData_RoadSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Roads::RoadsData_RoadSettings::*)()>(&::Rowlan::Genesis::Roads::RoadsData_RoadSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Roads::RoadsData_RoadSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rowlan::Genesis::Roads::RoadsData_RoadSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Roads::RoadsData_RoadSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::Roads::RoadsData_RoadSettings* Rowlan::Genesis::Roads::RoadsData_RoadSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::Roads::RoadsData_RoadSettings*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSettings::RoadsData_RoadSettings()   {
}
//  Writing Method size for method: ::Rowlan::Genesis::Roads::RoadsData.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Roads::RoadsData::*)()>(&::Rowlan::Genesis::Roads::RoadsData::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Roads::RoadsData*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::Roads::RoadsData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Roads::RoadsData::*)()>(&::Rowlan::Genesis::Roads::RoadsData::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181abf9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Roads::RoadsData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Rowlan::Genesis::Roads::RoadsData::__cordl_internal_get_gameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Rowlan::Genesis::Roads::RoadsData::__cordl_internal_get_gameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr void Rowlan::Genesis::Roads::RoadsData::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObject = value;
}
constexpr bool& Rowlan::Genesis::Roads::RoadsData::__cordl_internal_get_autoAssignment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoAssignment;
}
constexpr bool const& Rowlan::Genesis::Roads::RoadsData::__cordl_internal_get_autoAssignment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoAssignment;
}
constexpr void Rowlan::Genesis::Roads::RoadsData::__cordl_internal_set_autoAssignment(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoAssignment = value;
}
constexpr bool& Rowlan::Genesis::Roads::RoadsData::__cordl_internal_get_helpBoxVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpBoxVisible;
}
constexpr bool const& Rowlan::Genesis::Roads::RoadsData::__cordl_internal_get_helpBoxVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpBoxVisible;
}
constexpr void Rowlan::Genesis::Roads::RoadsData::__cordl_internal_set_helpBoxVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___helpBoxVisible = value;
}
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode& Rowlan::Genesis::Roads::RoadsData::__cordl_internal_get_roadSystemMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roadSystemMode;
}
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode const& Rowlan::Genesis::Roads::RoadsData::__cordl_internal_get_roadSystemMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roadSystemMode;
}
constexpr void Rowlan::Genesis::Roads::RoadsData::__cordl_internal_set_roadSystemMode(::Rowlan::Genesis::Roads::RoadsData_RoadSystemMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roadSystemMode = value;
}
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings*& Rowlan::Genesis::Roads::RoadsData::__cordl_internal_get_roadSystemSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roadSystemSettings;
}
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings* const& Rowlan::Genesis::Roads::RoadsData::__cordl_internal_get_roadSystemSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roadSystemSettings;
}
constexpr void Rowlan::Genesis::Roads::RoadsData::__cordl_internal_set_roadSystemSettings(::Rowlan::Genesis::Roads::RoadsData_RoadSystemSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roadSystemSettings = value;
}
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadMode& Rowlan::Genesis::Roads::RoadsData::__cordl_internal_get_roadMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roadMode;
}
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadMode const& Rowlan::Genesis::Roads::RoadsData::__cordl_internal_get_roadMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roadMode;
}
constexpr void Rowlan::Genesis::Roads::RoadsData::__cordl_internal_set_roadMode(::Rowlan::Genesis::Roads::RoadsData_RoadMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roadMode = value;
}
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSettings*& Rowlan::Genesis::Roads::RoadsData::__cordl_internal_get_roadSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roadSettings;
}
constexpr ::Rowlan::Genesis::Roads::RoadsData_RoadSettings* const& Rowlan::Genesis::Roads::RoadsData::__cordl_internal_get_roadSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roadSettings;
}
constexpr void Rowlan::Genesis::Roads::RoadsData::__cordl_internal_set_roadSettings(::Rowlan::Genesis::Roads::RoadsData_RoadSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roadSettings = value;
}
constexpr ::Rowlan::Genesis::Roads::RoadsData_IntersectionMode& Rowlan::Genesis::Roads::RoadsData::__cordl_internal_get_intersectionMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intersectionMode;
}
constexpr ::Rowlan::Genesis::Roads::RoadsData_IntersectionMode const& Rowlan::Genesis::Roads::RoadsData::__cordl_internal_get_intersectionMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intersectionMode;
}
constexpr void Rowlan::Genesis::Roads::RoadsData::__cordl_internal_set_intersectionMode(::Rowlan::Genesis::Roads::RoadsData_IntersectionMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intersectionMode = value;
}
inline void Rowlan::Genesis::Roads::RoadsData::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Roads::RoadsData*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::Genesis::Roads::RoadsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Roads::RoadsData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::Roads::RoadsData* Rowlan::Genesis::Roads::RoadsData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::Roads::RoadsData*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Roads::RoadsData::RoadsData()   {
}
