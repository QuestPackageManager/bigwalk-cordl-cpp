#pragma once
// IWYU pragma private; include "Rowlan/Genesis/ReGenesis/ReGenesisData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rowlan/Genesis/ReGenesis/zzzz__ReGenesisData_def.hpp"
#include "Rowlan/Genesis/ReGenesis/zzzz__ReGenesisData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode::ReGenesisData_HeightStampMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode::ReGenesisData_HeightStampMode()   {
}
constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode  Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode::Transform{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode  Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode::Heightmap{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesMode::ReGenesisData_BiomesMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesMode::ReGenesisData_BiomesMode()   {
}
constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesMode  Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesMode::Settings{static_cast<int32_t>(0x0)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource::HeightStampSettings_ReGenesisData_HeightMapSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource::HeightStampSettings_ReGenesisData_HeightMapSource()   {
}
constexpr ::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource  Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource::ContentBrowser{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource  Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource::Path{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::*)()>(&::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181abe9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::*)()>(&::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181abea60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::StringW const& Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::__cordl_internal_set_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::UnityEngine::Vector2& Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::__cordl_internal_get_scaleRangeWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleRangeWidth;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::__cordl_internal_get_scaleRangeWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleRangeWidth;
}
constexpr void Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::__cordl_internal_set_scaleRangeWidth(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleRangeWidth = value;
}
constexpr ::UnityEngine::Vector2& Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::__cordl_internal_get_scaleRangeHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleRangeHeight;
}
constexpr ::UnityEngine::Vector2 const& Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::__cordl_internal_get_scaleRangeHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleRangeHeight;
}
constexpr void Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::__cordl_internal_set_scaleRangeHeight(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleRangeHeight = value;
}
constexpr ::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource& Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::__cordl_internal_get_heightMapSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightMapSource;
}
constexpr ::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource const& Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::__cordl_internal_get_heightMapSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightMapSource;
}
constexpr void Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::__cordl_internal_set_heightMapSource(::Rowlan::Genesis::ReGenesis::HeightStampSettings_ReGenesisData_HeightMapSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightMapSource = value;
}
inline void Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings* Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings::ReGenesisData_HeightStampSettings()   {
}
//  Writing Method size for method: ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings::*)()>(&::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings::*)()>(&::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings::__cordl_internal_get_includeChildren()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeChildren;
}
constexpr bool const& Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings::__cordl_internal_get_includeChildren() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeChildren;
}
constexpr void Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings::__cordl_internal_set_includeChildren(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___includeChildren = value;
}
inline void Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings* Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings::ReGenesisData_BiomesSettings()   {
}
//  Writing Method size for method: ::Rowlan::Genesis::ReGenesis::ReGenesisData.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::ReGenesis::ReGenesisData::*)()>(&::Rowlan::Genesis::ReGenesis::ReGenesisData::Reset)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181abf850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::ReGenesis::ReGenesisData*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::ReGenesis::ReGenesisData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::ReGenesis::ReGenesisData::*)()>(&::Rowlan::Genesis::ReGenesis::ReGenesisData::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181abf900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::ReGenesis::ReGenesisData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_get_gameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_get_gameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr void Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObject = value;
}
constexpr bool& Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_get_autoAssignment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoAssignment;
}
constexpr bool const& Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_get_autoAssignment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoAssignment;
}
constexpr void Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_set_autoAssignment(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoAssignment = value;
}
constexpr bool& Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_get_helpBoxVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpBoxVisible;
}
constexpr bool const& Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_get_helpBoxVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpBoxVisible;
}
constexpr void Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_set_helpBoxVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___helpBoxVisible = value;
}
constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode& Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_get_heightStampMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightStampMode;
}
constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode const& Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_get_heightStampMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightStampMode;
}
constexpr void Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_set_heightStampMode(::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightStampMode = value;
}
constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings*& Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_get_heightStampSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightStampSettings;
}
constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings* const& Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_get_heightStampSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightStampSettings;
}
constexpr void Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_set_heightStampSettings(::Rowlan::Genesis::ReGenesis::ReGenesisData_HeightStampSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightStampSettings = value;
}
constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesMode& Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_get_biomesMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___biomesMode;
}
constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesMode const& Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_get_biomesMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___biomesMode;
}
constexpr void Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_set_biomesMode(::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___biomesMode = value;
}
constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings*& Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_get_biomesSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___biomesSettings;
}
constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings* const& Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_get_biomesSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___biomesSettings;
}
constexpr void Rowlan::Genesis::ReGenesis::ReGenesisData::__cordl_internal_set_biomesSettings(::Rowlan::Genesis::ReGenesis::ReGenesisData_BiomesSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___biomesSettings = value;
}
inline void Rowlan::Genesis::ReGenesis::ReGenesisData::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::ReGenesis::ReGenesisData*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::Genesis::ReGenesis::ReGenesisData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::ReGenesis::ReGenesisData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::ReGenesis::ReGenesisData* Rowlan::Genesis::ReGenesis::ReGenesisData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::ReGenesis::ReGenesisData*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::ReGenesis::ReGenesisData::ReGenesisData()   {
}
