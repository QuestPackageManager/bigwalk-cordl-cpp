#pragma once
// IWYU pragma private; include "GlobalNamespace/PropertyBlockHelper.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__PropertyBlockHelper_def.hpp"
#include "GlobalNamespace/zzzz__PropertyBlockHelper_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "propertyName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PropertyBlockHelper_ColorSetting::PropertyBlockHelper_ColorSetting(::StringW  propertyName, ::UnityEngine::Color  color) noexcept  {
this->propertyName = propertyName;
this->color = color;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropertyBlockHelper_ColorSetting::PropertyBlockHelper_ColorSetting()   {
}
// Ctor Parameters [CppParam { name: "propertyName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "vector4", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PropertyBlockHelper_VectorSetting::PropertyBlockHelper_VectorSetting(::StringW  propertyName, ::UnityEngine::Vector4  vector4) noexcept  {
this->propertyName = propertyName;
this->vector4 = vector4;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropertyBlockHelper_VectorSetting::PropertyBlockHelper_VectorSetting()   {
}
// Ctor Parameters [CppParam { name: "propertyName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PropertyBlockHelper_TextureSetting::PropertyBlockHelper_TextureSetting(::StringW  propertyName, ::UnityW<::UnityEngine::Texture>  texture) noexcept  {
this->propertyName = propertyName;
this->texture = texture;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropertyBlockHelper_TextureSetting::PropertyBlockHelper_TextureSetting()   {
}
// Ctor Parameters [CppParam { name: "propertyName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "floatValue", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PropertyBlockHelper_FloatSetting::PropertyBlockHelper_FloatSetting(::StringW  propertyName, float_t  floatValue) noexcept  {
this->propertyName = propertyName;
this->floatValue = floatValue;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropertyBlockHelper_FloatSetting::PropertyBlockHelper_FloatSetting()   {
}
//  Writing Method size for method: ::GlobalNamespace::PropertyBlockHelper.get_replacementMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::PropertyBlockHelper::*)()>(&::GlobalNamespace::PropertyBlockHelper::get_replacementMaterial)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803eec10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyBlockHelper*>(),
                        {"get_replacementMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropertyBlockHelper.get_getBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MaterialPropertyBlock* (::GlobalNamespace::PropertyBlockHelper::*)()>(&::GlobalNamespace::PropertyBlockHelper::get_getBlock)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803eebe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyBlockHelper*>(),
                        {"get_getBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropertyBlockHelper.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropertyBlockHelper::*)()>(&::GlobalNamespace::PropertyBlockHelper::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803ee760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyBlockHelper*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropertyBlockHelper.ReplaceWithMaterialInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Renderer*, int32_t, ::UnityEngine::Material*)>(&::GlobalNamespace::PropertyBlockHelper::ReplaceWithMaterialInstance)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803eeae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyBlockHelper*>(),
                        {"ReplaceWithMaterialInstance", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropertyBlockHelper.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropertyBlockHelper::*)()>(&::GlobalNamespace::PropertyBlockHelper::Refresh)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1803ee7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyBlockHelper*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropertyBlockHelper.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropertyBlockHelper::*)()>(&::GlobalNamespace::PropertyBlockHelper::OnDestroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803ee790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyBlockHelper*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropertyBlockHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropertyBlockHelper::*)()>(&::GlobalNamespace::PropertyBlockHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyBlockHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::PropertyBlockHelper::__cordl_internal_get__replacementMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____replacementMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::PropertyBlockHelper::__cordl_internal_get__replacementMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____replacementMaterial;
}
constexpr void GlobalNamespace::PropertyBlockHelper::__cordl_internal_set__replacementMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____replacementMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::PropertyBlockHelper::__cordl_internal_get_targetRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::PropertyBlockHelper::__cordl_internal_get_targetRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr void GlobalNamespace::PropertyBlockHelper::__cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRenderer = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GlobalNamespace::PropertyBlockHelper::__cordl_internal_get_additonalRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___additonalRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GlobalNamespace::PropertyBlockHelper::__cordl_internal_get_additonalRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___additonalRenderers;
}
constexpr void GlobalNamespace::PropertyBlockHelper::__cordl_internal_set_additonalRenderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___additonalRenderers = value;
}
constexpr int32_t& GlobalNamespace::PropertyBlockHelper::__cordl_internal_get_targetSubmesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSubmesh;
}
constexpr int32_t const& GlobalNamespace::PropertyBlockHelper::__cordl_internal_get_targetSubmesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSubmesh;
}
constexpr void GlobalNamespace::PropertyBlockHelper::__cordl_internal_set_targetSubmesh(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetSubmesh = value;
}
constexpr ::ArrayW<::GlobalNamespace::PropertyBlockHelper_FloatSetting>& GlobalNamespace::PropertyBlockHelper::__cordl_internal_get_floatSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatSettings;
}
constexpr ::ArrayW<::GlobalNamespace::PropertyBlockHelper_FloatSetting> const& GlobalNamespace::PropertyBlockHelper::__cordl_internal_get_floatSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatSettings;
}
constexpr void GlobalNamespace::PropertyBlockHelper::__cordl_internal_set_floatSettings(::ArrayW<::GlobalNamespace::PropertyBlockHelper_FloatSetting>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floatSettings = value;
}
constexpr ::ArrayW<::GlobalNamespace::PropertyBlockHelper_ColorSetting>& GlobalNamespace::PropertyBlockHelper::__cordl_internal_get_colorSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorSettings;
}
constexpr ::ArrayW<::GlobalNamespace::PropertyBlockHelper_ColorSetting> const& GlobalNamespace::PropertyBlockHelper::__cordl_internal_get_colorSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorSettings;
}
constexpr void GlobalNamespace::PropertyBlockHelper::__cordl_internal_set_colorSettings(::ArrayW<::GlobalNamespace::PropertyBlockHelper_ColorSetting>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorSettings = value;
}
constexpr ::ArrayW<::GlobalNamespace::PropertyBlockHelper_TextureSetting>& GlobalNamespace::PropertyBlockHelper::__cordl_internal_get_textureSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureSettings;
}
constexpr ::ArrayW<::GlobalNamespace::PropertyBlockHelper_TextureSetting> const& GlobalNamespace::PropertyBlockHelper::__cordl_internal_get_textureSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureSettings;
}
constexpr void GlobalNamespace::PropertyBlockHelper::__cordl_internal_set_textureSettings(::ArrayW<::GlobalNamespace::PropertyBlockHelper_TextureSetting>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureSettings = value;
}
constexpr ::ArrayW<::GlobalNamespace::PropertyBlockHelper_VectorSetting>& GlobalNamespace::PropertyBlockHelper::__cordl_internal_get_vectorSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vectorSettings;
}
constexpr ::ArrayW<::GlobalNamespace::PropertyBlockHelper_VectorSetting> const& GlobalNamespace::PropertyBlockHelper::__cordl_internal_get_vectorSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vectorSettings;
}
constexpr void GlobalNamespace::PropertyBlockHelper::__cordl_internal_set_vectorSettings(::ArrayW<::GlobalNamespace::PropertyBlockHelper_VectorSetting>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vectorSettings = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PropertyBlockHelper::__cordl_internal_get_dummyColorPickerForHexUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyColorPickerForHexUse;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PropertyBlockHelper::__cordl_internal_get_dummyColorPickerForHexUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyColorPickerForHexUse;
}
constexpr void GlobalNamespace::PropertyBlockHelper::__cordl_internal_set_dummyColorPickerForHexUse(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dummyColorPickerForHexUse = value;
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::PropertyBlockHelper::get_replacementMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyBlockHelper*>(),
                        {"get_replacementMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::PropertyBlockHelper::get_getBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyBlockHelper*>(),
                        {"get_getBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*>(this, ___internal_method);
}
inline void GlobalNamespace::PropertyBlockHelper::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyBlockHelper*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::PropertyBlockHelper::ReplaceWithMaterialInstance(::UnityEngine::Renderer*  renderer, int32_t  submeshIndex, ::UnityEngine::Material*  materialInstance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyBlockHelper*>(),
                        {"ReplaceWithMaterialInstance", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, renderer, submeshIndex, materialInstance);
}
inline void GlobalNamespace::PropertyBlockHelper::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyBlockHelper*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropertyBlockHelper::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyBlockHelper*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropertyBlockHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropertyBlockHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropertyBlockHelper* GlobalNamespace::PropertyBlockHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropertyBlockHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropertyBlockHelper::PropertyBlockHelper()   {
}
