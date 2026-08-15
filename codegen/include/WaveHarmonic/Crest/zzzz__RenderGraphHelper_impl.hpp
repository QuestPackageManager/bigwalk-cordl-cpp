#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/RenderGraphHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__RenderGraphHelper_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IUnsafeRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "WaveHarmonic/Crest/zzzz__RenderGraphHelper_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderGraphHelper_Handle.get_Texture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::WaveHarmonic::Crest::RenderGraphHelper_Handle::*)()>(&::WaveHarmonic::Crest::RenderGraphHelper_Handle::get_Texture)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182563e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderGraphHelper_Handle>(),
                        {"get_Texture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderGraphHelper_Handle.op_Implicit___WaveHarmonic__Crest__RenderGraphHelper_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::RenderGraphHelper_Handle (*)(::UnityEngine::Rendering::RTHandle*)>(&::WaveHarmonic::Crest::RenderGraphHelper_Handle::op_Implicit___WaveHarmonic__Crest__RenderGraphHelper_Handle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1825678b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderGraphHelper_Handle>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::RTHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderGraphHelper_Handle.op_Implicit___WaveHarmonic__Crest__RenderGraphHelper_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::RenderGraphHelper_Handle (*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::WaveHarmonic::Crest::RenderGraphHelper_Handle::op_Implicit___WaveHarmonic__Crest__RenderGraphHelper_Handle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182567890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderGraphHelper_Handle>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderGraphHelper_Handle.op_Implicit___UnityEngine__Rendering__RTHandle_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::WaveHarmonic::Crest::RenderGraphHelper_Handle)>(&::WaveHarmonic::Crest::RenderGraphHelper_Handle::op_Implicit___UnityEngine__Rendering__RTHandle_)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182563e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderGraphHelper_Handle>(),
                        {"op_Implicit", {}, {::i2c::type_of<::WaveHarmonic::Crest::RenderGraphHelper_Handle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderGraphHelper_Handle.op_Implicit___UnityEngine__Rendering__RenderGraphModule__TextureHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (*)(::WaveHarmonic::Crest::RenderGraphHelper_Handle)>(&::WaveHarmonic::Crest::RenderGraphHelper_Handle::op_Implicit___UnityEngine__Rendering__RenderGraphModule__TextureHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderGraphHelper_Handle>(),
                        {"op_Implicit", {}, {::i2c::type_of<::WaveHarmonic::Crest::RenderGraphHelper_Handle>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::RTHandle* WaveHarmonic::Crest::RenderGraphHelper_Handle::get_Texture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderGraphHelper_Handle>(),
                        {"get_Texture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(*this, ___internal_method);
}
inline ::WaveHarmonic::Crest::RenderGraphHelper_Handle WaveHarmonic::Crest::RenderGraphHelper_Handle::op_Implicit___WaveHarmonic__Crest__RenderGraphHelper_Handle(::UnityEngine::Rendering::RTHandle*  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderGraphHelper_Handle>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::RTHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::RenderGraphHelper_Handle>(nullptr, ___internal_method, handle);
}
inline ::WaveHarmonic::Crest::RenderGraphHelper_Handle WaveHarmonic::Crest::RenderGraphHelper_Handle::op_Implicit___WaveHarmonic__Crest__RenderGraphHelper_Handle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderGraphHelper_Handle>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::RenderGraphHelper_Handle>(nullptr, ___internal_method, handle);
}
inline ::UnityEngine::Rendering::RTHandle* WaveHarmonic::Crest::RenderGraphHelper_Handle::op_Implicit___UnityEngine__Rendering__RTHandle_(::WaveHarmonic::Crest::RenderGraphHelper_Handle  texture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderGraphHelper_Handle>(),
                        {"op_Implicit", {}, {::i2c::type_of<::WaveHarmonic::Crest::RenderGraphHelper_Handle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, texture);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle WaveHarmonic::Crest::RenderGraphHelper_Handle::op_Implicit___UnityEngine__Rendering__RenderGraphModule__TextureHandle(::WaveHarmonic::Crest::RenderGraphHelper_Handle  texture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderGraphHelper_Handle>(),
                        {"op_Implicit", {}, {::i2c::type_of<::WaveHarmonic::Crest::RenderGraphHelper_Handle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(nullptr, ___internal_method, texture);
}
// Ctor Parameters [CppParam { name: "_RTHandle", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TextureHandle", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::RenderGraphHelper_Handle::RenderGraphHelper_Handle(::UnityEngine::Rendering::RTHandle*  _RTHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  _TextureHandle) noexcept  {
this->_RTHandle = _RTHandle;
this->_TextureHandle = _TextureHandle;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::RenderGraphHelper_Handle::RenderGraphHelper_Handle()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderGraphHelper_PassData.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RenderGraphHelper_PassData::*)(::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*)>(&::WaveHarmonic::Crest::RenderGraphHelper_PassData::Init)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x18256b1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderGraphHelper_PassData*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderGraphHelper_PassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RenderGraphHelper_PassData::*)()>(&::WaveHarmonic::Crest::RenderGraphHelper_PassData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderGraphHelper_PassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& WaveHarmonic::Crest::RenderGraphHelper_PassData::__cordl_internal_get_cameraData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& WaveHarmonic::Crest::RenderGraphHelper_PassData::__cordl_internal_get_cameraData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraData;
}
constexpr void WaveHarmonic::Crest::RenderGraphHelper_PassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraData = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData*& WaveHarmonic::Crest::RenderGraphHelper_PassData::__cordl_internal_get_renderingData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderingData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData* const& WaveHarmonic::Crest::RenderGraphHelper_PassData::__cordl_internal_get_renderingData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderingData;
}
constexpr void WaveHarmonic::Crest::RenderGraphHelper_PassData::__cordl_internal_set_renderingData(::UnityEngine::Rendering::Universal::UniversalRenderingData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderingData = value;
}
constexpr ::WaveHarmonic::Crest::RenderGraphHelper_Handle& WaveHarmonic::Crest::RenderGraphHelper_PassData::__cordl_internal_get_colorTargetHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorTargetHandle;
}
constexpr ::WaveHarmonic::Crest::RenderGraphHelper_Handle const& WaveHarmonic::Crest::RenderGraphHelper_PassData::__cordl_internal_get_colorTargetHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorTargetHandle;
}
constexpr void WaveHarmonic::Crest::RenderGraphHelper_PassData::__cordl_internal_set_colorTargetHandle(::WaveHarmonic::Crest::RenderGraphHelper_Handle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorTargetHandle = value;
}
constexpr ::WaveHarmonic::Crest::RenderGraphHelper_Handle& WaveHarmonic::Crest::RenderGraphHelper_PassData::__cordl_internal_get_depthTargetHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthTargetHandle;
}
constexpr ::WaveHarmonic::Crest::RenderGraphHelper_Handle const& WaveHarmonic::Crest::RenderGraphHelper_PassData::__cordl_internal_get_depthTargetHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthTargetHandle;
}
constexpr void WaveHarmonic::Crest::RenderGraphHelper_PassData::__cordl_internal_set_depthTargetHandle(::WaveHarmonic::Crest::RenderGraphHelper_Handle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthTargetHandle = value;
}
inline void WaveHarmonic::Crest::RenderGraphHelper_PassData::Init(::UnityEngine::Rendering::ContextContainer*  frameData, ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderGraphHelper_PassData*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frameData, builder);
}
inline void WaveHarmonic::Crest::RenderGraphHelper_PassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderGraphHelper_PassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::RenderGraphHelper_PassData* WaveHarmonic::Crest::RenderGraphHelper_PassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::RenderGraphHelper_PassData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::RenderGraphHelper_PassData::RenderGraphHelper_PassData()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderGraphHelper.GetRenderContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ScriptableRenderContext (*)(::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(&::WaveHarmonic::Crest::RenderGraphHelper::GetRenderContext)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18256c960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderGraphHelper*>(),
                        {"GetRenderContext", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderGraphHelper.GetFrameData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ContextContainer* (*)(::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::WaveHarmonic::Crest::RenderGraphHelper::GetFrameData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderGraphHelper*>(),
                        {"GetFrameData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::RenderGraphHelper::setStaticF_s_WrappedContext(::System::Reflection::FieldInfo*  value)  {
::cordl_internals::setStaticField<::System::Reflection::FieldInfo*, "s_WrappedContext", ::WaveHarmonic::Crest::RenderGraphHelper*>(std::forward<::System::Reflection::FieldInfo*>(value));
}
inline ::System::Reflection::FieldInfo* WaveHarmonic::Crest::RenderGraphHelper::getStaticF_s_WrappedContext()  {
return ::cordl_internals::getStaticField<::System::Reflection::FieldInfo*, "s_WrappedContext", ::WaveHarmonic::Crest::RenderGraphHelper*>();
}
inline ::UnityEngine::Rendering::ScriptableRenderContext WaveHarmonic::Crest::RenderGraphHelper::GetRenderContext(::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  unsafeContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderGraphHelper*>(),
                        {"GetRenderContext", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ScriptableRenderContext>(nullptr, ___internal_method, unsafeContext);
}
inline ::UnityEngine::Rendering::ContextContainer* WaveHarmonic::Crest::RenderGraphHelper::GetFrameData(::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderGraphHelper*>(),
                        {"GetFrameData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ContextContainer*>(nullptr, ___internal_method, renderingData);
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::RenderGraphHelper::RenderGraphHelper()   {
}
