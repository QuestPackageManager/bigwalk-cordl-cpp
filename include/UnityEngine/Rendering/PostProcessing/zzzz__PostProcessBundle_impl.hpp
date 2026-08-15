#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessBundle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessBundle_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessAttribute_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessBundle.get_attribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::PostProcessAttribute* (::UnityEngine::Rendering::PostProcessing::PostProcessBundle::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessBundle::get_attribute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(),
                        {"get_attribute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessBundle.set_attribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessBundle::*)(::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessBundle::set_attribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(),
                        {"set_attribute", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessBundle.get_settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings> (::UnityEngine::Rendering::PostProcessing::PostProcessBundle::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessBundle::get_settings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(),
                        {"get_settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessBundle.set_settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessBundle::*)(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessBundle::set_settings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(),
                        {"set_settings", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessBundle.get_renderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer* (::UnityEngine::Rendering::PostProcessing::PostProcessBundle::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessBundle::get_renderer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181fc12f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(),
                        {"get_renderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessBundle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessBundle::*)(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessBundle::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fc12a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessBundle.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessBundle::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessBundle::Release)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fc1240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessBundle.ResetHistory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessBundle::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessBundle::ResetHistory)> {
  constexpr static std::size_t size = 0x1750;
  constexpr static std::size_t addrs = 0x181283350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(),
                        {"ResetHistory", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*& UnityEngine::Rendering::PostProcessing::PostProcessBundle::__cordl_internal_get__attribute_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attribute_k__BackingField;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessAttribute* const& UnityEngine::Rendering::PostProcessing::PostProcessBundle::__cordl_internal_get__attribute_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attribute_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessBundle::__cordl_internal_set__attribute_k__BackingField(::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attribute_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>& UnityEngine::Rendering::PostProcessing::PostProcessBundle::__cordl_internal_get__settings_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings> const& UnityEngine::Rendering::PostProcessing::PostProcessBundle::__cordl_internal_get__settings_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessBundle::__cordl_internal_set__settings_k__BackingField(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settings_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*& UnityEngine::Rendering::PostProcessing::PostProcessBundle::__cordl_internal_get_m_Renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Renderer;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer* const& UnityEngine::Rendering::PostProcessing::PostProcessBundle::__cordl_internal_get_m_Renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Renderer;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessBundle::__cordl_internal_set_m_Renderer(::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Renderer = value;
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessAttribute* UnityEngine::Rendering::PostProcessing::PostProcessBundle::get_attribute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(),
                        {"get_attribute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessBundle::set_attribute(::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(),
                        {"set_attribute", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings> UnityEngine::Rendering::PostProcessing::PostProcessBundle::get_settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(),
                        {"get_settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessBundle::set_settings(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(),
                        {"set_settings", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer* UnityEngine::Rendering::PostProcessing::PostProcessBundle::get_renderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(),
                        {"get_renderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessBundle::_ctor(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessBundle::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessBundle::ResetHistory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(),
                        {"ResetHistory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T UnityEngine::Rendering::PostProcessing::PostProcessBundle::CastSettings()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(),
                    {"CastSettings", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline T UnityEngine::Rendering::PostProcessing::PostProcessBundle::CastRenderer()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(),
                    {"CastRenderer", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessBundle* UnityEngine::Rendering::PostProcessing::PostProcessBundle::New_ctor(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*  settings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(settings));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessBundle::PostProcessBundle()   {
}
