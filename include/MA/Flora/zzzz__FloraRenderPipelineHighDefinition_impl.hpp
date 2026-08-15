#pragma once
// IWYU pragma private; include "MA/Flora/FloraRenderPipelineHighDefinition.hpp"
#include "MA/Flora/zzzz__FloraRenderPipeline_impl.hpp"
#include "MA/Flora/zzzz__FloraRenderPipelineHighDefinition_def.hpp"
#include "MA/Flora/zzzz__FloraRenderPipelineCameraSettings_def.hpp"
#include "MA/Flora/zzzz__FloraRenderPipelineType_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraRenderPipelineHighDefinition.get_PipelineType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraRenderPipelineType (::MA::Flora::FloraRenderPipelineHighDefinition::*)()>(&::MA::Flora::FloraRenderPipelineHighDefinition::get_PipelineType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ee400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraRenderPipelineHighDefinition*>(),
                    {::i2c::class_of<::MA::Flora::FloraRenderPipelineHighDefinition*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRenderPipelineHighDefinition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipelineHighDefinition::*)()>(&::MA::Flora::FloraRenderPipelineHighDefinition::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderPipelineHighDefinition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRenderPipelineHighDefinition.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipelineHighDefinition::*)()>(&::MA::Flora::FloraRenderPipelineHighDefinition::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraRenderPipelineHighDefinition*>(),
                    {::i2c::class_of<::MA::Flora::FloraRenderPipelineHighDefinition*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRenderPipelineHighDefinition.EnqueueCameraPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRenderPipelineHighDefinition::*)(::UnityEngine::Camera*, ::MA::Flora::FloraRenderPipelineCameraSettings)>(&::MA::Flora::FloraRenderPipelineHighDefinition::EnqueueCameraPasses)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraRenderPipelineHighDefinition*>(),
                    {::i2c::class_of<::MA::Flora::FloraRenderPipelineHighDefinition*>(), 7}
                ));
    return ___internal_method;
  }
};
inline ::MA::Flora::FloraRenderPipelineType MA::Flora::FloraRenderPipelineHighDefinition::get_PipelineType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraRenderPipelineHighDefinition*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraRenderPipelineType>(this, ___internal_method);
}
inline void MA::Flora::FloraRenderPipelineHighDefinition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRenderPipelineHighDefinition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraRenderPipelineHighDefinition::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraRenderPipelineHighDefinition*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraRenderPipelineHighDefinition::EnqueueCameraPasses(::UnityEngine::Camera*  camera, ::MA::Flora::FloraRenderPipelineCameraSettings  cameraSettings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraRenderPipelineHighDefinition*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, cameraSettings);
}
inline ::MA::Flora::FloraRenderPipelineHighDefinition* MA::Flora::FloraRenderPipelineHighDefinition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraRenderPipelineHighDefinition*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraRenderPipelineHighDefinition::FloraRenderPipelineHighDefinition()   {
}
