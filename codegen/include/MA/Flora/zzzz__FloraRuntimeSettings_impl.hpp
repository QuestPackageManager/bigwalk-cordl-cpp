#pragma once
// IWYU pragma private; include "MA/Flora/FloraRuntimeSettings.hpp"
#include "MA/Flora/zzzz__FloraCullingPipeline_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__FloraRuntimeSettings_def.hpp"
#include "MA/Flora/zzzz__FloraCullingPipeline_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraRuntimeSettings_Version::FloraRuntimeSettings_Version(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraRuntimeSettings_Version::FloraRuntimeSettings_Version()   {
}
constexpr ::MA::Flora::FloraRuntimeSettings_Version  MA::Flora::FloraRuntimeSettings_Version::Initial{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::FloraRuntimeSettings_Version  MA::Flora::FloraRuntimeSettings_Version::RenameClass{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::FloraRuntimeSettings_Version  MA::Flora::FloraRuntimeSettings_Version::Count{static_cast<int32_t>(0x2)};
constexpr ::MA::Flora::FloraRuntimeSettings_Version  MA::Flora::FloraRuntimeSettings_Version::Last{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeSettings.get_isAvailableInPlayerBuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraRuntimeSettings::*)()>(&::MA::Flora::FloraRuntimeSettings::get_isAvailableInPlayerBuild)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"get_isAvailableInPlayerBuild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeSettings.get_version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::FloraRuntimeSettings::*)()>(&::MA::Flora::FloraRuntimeSettings::get_version)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"get_version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeSettings.get_DisableGPUOcclusionCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraRuntimeSettings::*)()>(&::MA::Flora::FloraRuntimeSettings::get_DisableGPUOcclusionCulling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"get_DisableGPUOcclusionCulling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeSettings.set_DisableGPUOcclusionCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeSettings::*)(bool)>(&::MA::Flora::FloraRuntimeSettings::set_DisableGPUOcclusionCulling)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f8750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"set_DisableGPUOcclusionCulling", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeSettings.get_DisableLegacyLightProbes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraRuntimeSettings::*)()>(&::MA::Flora::FloraRuntimeSettings::get_DisableLegacyLightProbes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f8710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"get_DisableLegacyLightProbes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeSettings.set_DisableLegacyLightProbes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeSettings::*)(bool)>(&::MA::Flora::FloraRuntimeSettings::set_DisableLegacyLightProbes)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f8780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"set_DisableLegacyLightProbes", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeSettings.get_DisablePerObjectMotionVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraRuntimeSettings::*)()>(&::MA::Flora::FloraRuntimeSettings::get_DisablePerObjectMotionVectors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805c5560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"get_DisablePerObjectMotionVectors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeSettings.set_DisablePerObjectMotionVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeSettings::*)(bool)>(&::MA::Flora::FloraRuntimeSettings::set_DisablePerObjectMotionVectors)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f87b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"set_DisablePerObjectMotionVectors", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeSettings.get_DefaultCullingPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraCullingPipeline (::MA::Flora::FloraRuntimeSettings::*)()>(&::MA::Flora::FloraRuntimeSettings::get_DefaultCullingPipeline)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"get_DefaultCullingPipeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeSettings.set_DefaultCullingPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeSettings::*)(::MA::Flora::FloraCullingPipeline)>(&::MA::Flora::FloraRuntimeSettings::set_DefaultCullingPipeline)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f8720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"set_DefaultCullingPipeline", {}, {::i2c::type_of<::MA::Flora::FloraCullingPipeline>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeSettings::*)()>(&::MA::Flora::FloraRuntimeSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f8700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::Flora::FloraRuntimeSettings_Version& MA::Flora::FloraRuntimeSettings::__cordl_internal_get_m_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Version;
}
constexpr ::MA::Flora::FloraRuntimeSettings_Version const& MA::Flora::FloraRuntimeSettings::__cordl_internal_get_m_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Version;
}
constexpr void MA::Flora::FloraRuntimeSettings::__cordl_internal_set_m_Version(::MA::Flora::FloraRuntimeSettings_Version  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Version = value;
}
constexpr ::MA::Flora::FloraCullingPipeline& MA::Flora::FloraRuntimeSettings::__cordl_internal_get_m_DefaultCullingPipeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultCullingPipeline;
}
constexpr ::MA::Flora::FloraCullingPipeline const& MA::Flora::FloraRuntimeSettings::__cordl_internal_get_m_DefaultCullingPipeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultCullingPipeline;
}
constexpr void MA::Flora::FloraRuntimeSettings::__cordl_internal_set_m_DefaultCullingPipeline(::MA::Flora::FloraCullingPipeline  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DefaultCullingPipeline = value;
}
constexpr bool& MA::Flora::FloraRuntimeSettings::__cordl_internal_get_m_DisableGPUOcclusionCulling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisableGPUOcclusionCulling;
}
constexpr bool const& MA::Flora::FloraRuntimeSettings::__cordl_internal_get_m_DisableGPUOcclusionCulling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisableGPUOcclusionCulling;
}
constexpr void MA::Flora::FloraRuntimeSettings::__cordl_internal_set_m_DisableGPUOcclusionCulling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DisableGPUOcclusionCulling = value;
}
constexpr bool& MA::Flora::FloraRuntimeSettings::__cordl_internal_get_m_DisableLegacyLightProbes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisableLegacyLightProbes;
}
constexpr bool const& MA::Flora::FloraRuntimeSettings::__cordl_internal_get_m_DisableLegacyLightProbes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisableLegacyLightProbes;
}
constexpr void MA::Flora::FloraRuntimeSettings::__cordl_internal_set_m_DisableLegacyLightProbes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DisableLegacyLightProbes = value;
}
constexpr bool& MA::Flora::FloraRuntimeSettings::__cordl_internal_get_m_DisablePerObjectMotionVectors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisablePerObjectMotionVectors;
}
constexpr bool const& MA::Flora::FloraRuntimeSettings::__cordl_internal_get_m_DisablePerObjectMotionVectors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisablePerObjectMotionVectors;
}
constexpr void MA::Flora::FloraRuntimeSettings::__cordl_internal_set_m_DisablePerObjectMotionVectors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DisablePerObjectMotionVectors = value;
}
inline bool MA::Flora::FloraRuntimeSettings::get_isAvailableInPlayerBuild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"get_isAvailableInPlayerBuild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t MA::Flora::FloraRuntimeSettings::get_version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"get_version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool MA::Flora::FloraRuntimeSettings::get_DisableGPUOcclusionCulling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"get_DisableGPUOcclusionCulling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeSettings::set_DisableGPUOcclusionCulling(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"set_DisableGPUOcclusionCulling", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool MA::Flora::FloraRuntimeSettings::get_DisableLegacyLightProbes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"get_DisableLegacyLightProbes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeSettings::set_DisableLegacyLightProbes(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"set_DisableLegacyLightProbes", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool MA::Flora::FloraRuntimeSettings::get_DisablePerObjectMotionVectors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"get_DisablePerObjectMotionVectors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeSettings::set_DisablePerObjectMotionVectors(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"set_DisablePerObjectMotionVectors", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::MA::Flora::FloraCullingPipeline MA::Flora::FloraRuntimeSettings::get_DefaultCullingPipeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"get_DefaultCullingPipeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraCullingPipeline>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeSettings::set_DefaultCullingPipeline(::MA::Flora::FloraCullingPipeline  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {"set_DefaultCullingPipeline", {}, {::i2c::type_of<::MA::Flora::FloraCullingPipeline>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void MA::Flora::FloraRuntimeSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::FloraRuntimeSettings* MA::Flora::FloraRuntimeSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraRuntimeSettings*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr  MA::Flora::FloraRuntimeSettings::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* MA::Flora::FloraRuntimeSettings::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraRuntimeSettings::FloraRuntimeSettings()   {
}
