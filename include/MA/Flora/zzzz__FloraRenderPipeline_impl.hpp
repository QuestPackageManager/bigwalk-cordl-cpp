#pragma once
// IWYU pragma private; include "MA/Flora/FloraRenderPipeline.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__FloraRenderPipeline_def.hpp"
#include "MA/Flora/zzzz__FloraRenderPipelineCameraSettings_def.hpp"
#include "MA/Flora/zzzz__FloraRenderPipelineType_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraRenderPipeline.get_PipelineType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraRenderPipelineType (::MA::Flora::FloraRenderPipeline::*)()>(&::MA::Flora::FloraRenderPipeline::get_PipelineType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraRenderPipeline*>(),
                    {::i2c::class_of<::MA::Flora::FloraRenderPipeline*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRenderPipeline.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipeline::*)()>(&::MA::Flora::FloraRenderPipeline::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraRenderPipeline*>(),
                    {::i2c::class_of<::MA::Flora::FloraRenderPipeline*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRenderPipeline.EnqueueCameraPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipeline::*)(::UnityEngine::Camera*, ::MA::Flora::FloraRenderPipelineCameraSettings)>(&::MA::Flora::FloraRenderPipeline::EnqueueCameraPasses)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraRenderPipeline*>(),
                    {::i2c::class_of<::MA::Flora::FloraRenderPipeline*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRenderPipeline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipeline::*)()>(&::MA::Flora::FloraRenderPipeline::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderPipeline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::FloraRenderPipelineType MA::Flora::FloraRenderPipeline::get_PipelineType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraRenderPipeline*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraRenderPipelineType>(this, ___internal_method);
}
inline void MA::Flora::FloraRenderPipeline::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraRenderPipeline*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraRenderPipeline::EnqueueCameraPasses(::UnityEngine::Camera*  camera, ::MA::Flora::FloraRenderPipelineCameraSettings  cameraSettings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraRenderPipeline*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, cameraSettings);
}
inline void MA::Flora::FloraRenderPipeline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderPipeline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::FloraRenderPipeline* MA::Flora::FloraRenderPipeline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraRenderPipeline*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::FloraRenderPipeline::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::FloraRenderPipeline::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraRenderPipeline::FloraRenderPipeline()   {
}
