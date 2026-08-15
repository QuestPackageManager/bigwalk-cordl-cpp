#pragma once
// IWYU pragma private; include "MA/Flora/FloraEditorSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__FloraEditorSettings_def.hpp"
#include "MA/Flora/zzzz__FloraEditorSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraEditorSettings_Version::FloraEditorSettings_Version(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraEditorSettings_Version::FloraEditorSettings_Version()   {
}
constexpr ::MA::Flora::FloraEditorSettings_Version  MA::Flora::FloraEditorSettings_Version::Initial{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::FloraEditorSettings_Version  MA::Flora::FloraEditorSettings_Version::Count{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::FloraEditorSettings_Version  MA::Flora::FloraEditorSettings_Version::Last{static_cast<int32_t>(0x0)};
//  Writing Method size for method: ::MA::Flora::FloraEditorSettings.get_isAvailableInPlayerBuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraEditorSettings::*)()>(&::MA::Flora::FloraEditorSettings::get_isAvailableInPlayerBuild)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraEditorSettings*>(),
                        {"get_isAvailableInPlayerBuild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraEditorSettings.get_version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::FloraEditorSettings::*)()>(&::MA::Flora::FloraEditorSettings::get_version)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraEditorSettings*>(),
                        {"get_version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraEditorSettings.get_DisableInstanceRenderersInEditMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraEditorSettings::*)()>(&::MA::Flora::FloraEditorSettings::get_DisableInstanceRenderersInEditMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039e7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraEditorSettings*>(),
                        {"get_DisableInstanceRenderersInEditMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraEditorSettings.set_DisableInstanceRenderersInEditMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraEditorSettings::*)(bool)>(&::MA::Flora::FloraEditorSettings::set_DisableInstanceRenderersInEditMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f7cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraEditorSettings*>(),
                        {"set_DisableInstanceRenderersInEditMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraEditorSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraEditorSettings::*)()>(&::MA::Flora::FloraEditorSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraEditorSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::Flora::FloraEditorSettings_Version& MA::Flora::FloraEditorSettings::__cordl_internal_get_m_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Version;
}
constexpr ::MA::Flora::FloraEditorSettings_Version const& MA::Flora::FloraEditorSettings::__cordl_internal_get_m_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Version;
}
constexpr void MA::Flora::FloraEditorSettings::__cordl_internal_set_m_Version(::MA::Flora::FloraEditorSettings_Version  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Version = value;
}
constexpr bool& MA::Flora::FloraEditorSettings::__cordl_internal_get_m_DisableInstanceRenderersInEditMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisableInstanceRenderersInEditMode;
}
constexpr bool const& MA::Flora::FloraEditorSettings::__cordl_internal_get_m_DisableInstanceRenderersInEditMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisableInstanceRenderersInEditMode;
}
constexpr void MA::Flora::FloraEditorSettings::__cordl_internal_set_m_DisableInstanceRenderersInEditMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DisableInstanceRenderersInEditMode = value;
}
inline bool MA::Flora::FloraEditorSettings::get_isAvailableInPlayerBuild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraEditorSettings*>(),
                        {"get_isAvailableInPlayerBuild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t MA::Flora::FloraEditorSettings::get_version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraEditorSettings*>(),
                        {"get_version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool MA::Flora::FloraEditorSettings::get_DisableInstanceRenderersInEditMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraEditorSettings*>(),
                        {"get_DisableInstanceRenderersInEditMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::Flora::FloraEditorSettings::set_DisableInstanceRenderersInEditMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraEditorSettings*>(),
                        {"set_DisableInstanceRenderersInEditMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void MA::Flora::FloraEditorSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraEditorSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::FloraEditorSettings* MA::Flora::FloraEditorSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraEditorSettings*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr  MA::Flora::FloraEditorSettings::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* MA::Flora::FloraEditorSettings::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraEditorSettings::FloraEditorSettings()   {
}
