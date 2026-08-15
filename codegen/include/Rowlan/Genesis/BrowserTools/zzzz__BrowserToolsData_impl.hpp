#pragma once
// IWYU pragma private; include "Rowlan/Genesis/BrowserTools/BrowserToolsData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Rowlan/Genesis/BrowserTools/zzzz__BrowserToolsData_def.hpp"
#include "Rowlan/Genesis/BrowserTools/zzzz__BrowserToolsData_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module::BrowserToolsData_Module(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module::BrowserToolsData_Module()   {
}
constexpr ::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module  Rowlan::Genesis::BrowserTools::BrowserToolsData_Module::Screenshot{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module  Rowlan::Genesis::BrowserTools::BrowserToolsData_Module::Presets{static_cast<int32_t>(0x1)};
constexpr ::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module  Rowlan::Genesis::BrowserTools::BrowserToolsData_Module::Placement{static_cast<int32_t>(0x2)};
constexpr ::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module  Rowlan::Genesis::BrowserTools::BrowserToolsData_Module::Validation{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::*)()>(&::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181abf7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_get_basePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___basePath;
}
constexpr ::StringW const& Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_get_basePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___basePath;
}
constexpr void Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_set_basePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___basePath = value;
}
constexpr ::StringW& Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_get_author()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___author;
}
constexpr ::StringW const& Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_get_author() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___author;
}
constexpr void Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_set_author(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___author = value;
}
constexpr ::StringW& Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_get_packName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packName;
}
constexpr ::StringW const& Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_get_packName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packName;
}
constexpr void Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_set_packName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___packName = value;
}
constexpr ::StringW& Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr ::StringW const& Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_set_id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_get_image()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___image;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_get_image() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___image;
}
constexpr void Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_set_image(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___image = value;
}
constexpr ::StringW& Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_get_downloadPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadPath;
}
constexpr ::StringW const& Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_get_downloadPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadPath;
}
constexpr void Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_set_downloadPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downloadPath = value;
}
constexpr bool& Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_get_requireInstalledObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requireInstalledObject;
}
constexpr bool const& Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_get_requireInstalledObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requireInstalledObject;
}
constexpr void Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_set_requireInstalledObject(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requireInstalledObject = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_get_installedObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installedObject;
}
constexpr ::UnityW<::UnityEngine::Object> const& Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_get_installedObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installedObject;
}
constexpr void Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::__cordl_internal_set_installedObject(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___installedObject = value;
}
inline void Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings* Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings::BrowserToolsData_PresetsSettings()   {
}
//  Writing Method size for method: ::Rowlan::Genesis::BrowserTools::BrowserToolsData.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::BrowserTools::BrowserToolsData::*)()>(&::Rowlan::Genesis::BrowserTools::BrowserToolsData::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181abd260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::BrowserTools::BrowserToolsData*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::BrowserTools::BrowserToolsData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::BrowserTools::BrowserToolsData::*)()>(&::Rowlan::Genesis::BrowserTools::BrowserToolsData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181abd2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::BrowserTools::BrowserToolsData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rowlan::Genesis::BrowserTools::BrowserToolsData::__cordl_internal_get_helpBoxVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpBoxVisible;
}
constexpr bool const& Rowlan::Genesis::BrowserTools::BrowserToolsData::__cordl_internal_get_helpBoxVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpBoxVisible;
}
constexpr void Rowlan::Genesis::BrowserTools::BrowserToolsData::__cordl_internal_set_helpBoxVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___helpBoxVisible = value;
}
constexpr ::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module& Rowlan::Genesis::BrowserTools::BrowserToolsData::__cordl_internal_get__cordl_module()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_module;
}
constexpr ::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module const& Rowlan::Genesis::BrowserTools::BrowserToolsData::__cordl_internal_get__cordl_module() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_module;
}
constexpr void Rowlan::Genesis::BrowserTools::BrowserToolsData::__cordl_internal_set__cordl_module(::Rowlan::Genesis::BrowserTools::BrowserToolsData_Module  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cordl_module = value;
}
constexpr ::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings*& Rowlan::Genesis::BrowserTools::BrowserToolsData::__cordl_internal_get_presetsSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___presetsSettings;
}
constexpr ::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings* const& Rowlan::Genesis::BrowserTools::BrowserToolsData::__cordl_internal_get_presetsSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___presetsSettings;
}
constexpr void Rowlan::Genesis::BrowserTools::BrowserToolsData::__cordl_internal_set_presetsSettings(::Rowlan::Genesis::BrowserTools::BrowserToolsData_PresetsSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___presetsSettings = value;
}
inline void Rowlan::Genesis::BrowserTools::BrowserToolsData::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::BrowserTools::BrowserToolsData*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::Genesis::BrowserTools::BrowserToolsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::BrowserTools::BrowserToolsData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::BrowserTools::BrowserToolsData* Rowlan::Genesis::BrowserTools::BrowserToolsData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::BrowserTools::BrowserToolsData*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::BrowserTools::BrowserToolsData::BrowserToolsData()   {
}
