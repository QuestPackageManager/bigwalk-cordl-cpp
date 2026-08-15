#pragma once
// IWYU pragma private; include "MA/Flora/FloraRuntimeShaders.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__FloraRuntimeShaders_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineResources_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraRuntimeShaders.get_version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::FloraRuntimeShaders::*)()>(&::MA::Flora::FloraRuntimeShaders::get_version)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeShaders*>(),
                        {"get_version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeShaders.get_isAvailableInPlayerBuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraRuntimeShaders::*)()>(&::MA::Flora::FloraRuntimeShaders::get_isAvailableInPlayerBuild)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeShaders*>(),
                        {"get_isAvailableInPlayerBuild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeShaders._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeShaders::*)()>(&::MA::Flora::FloraRuntimeShaders::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeShaders*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t MA::Flora::FloraRuntimeShaders::get_version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeShaders*>(),
                        {"get_version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool MA::Flora::FloraRuntimeShaders::get_isAvailableInPlayerBuild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeShaders*>(),
                        {"get_isAvailableInPlayerBuild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeShaders::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeShaders*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::FloraRuntimeShaders* MA::Flora::FloraRuntimeShaders::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraRuntimeShaders*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr  MA::Flora::FloraRuntimeShaders::operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept {
return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources* MA::Flora::FloraRuntimeShaders::i___UnityEngine__Rendering__IRenderPipelineResources() noexcept {
return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr  MA::Flora::FloraRuntimeShaders::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* MA::Flora::FloraRuntimeShaders::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraRuntimeShaders::FloraRuntimeShaders()   {
}
