#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ShadowLod.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__PersistentLod_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__PropertyWrapperMaterial_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ShadowLod_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__PropertyWrapperCompute_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ShadowLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
inline void WaveHarmonic::Crest::ShadowLod_ShaderIDs::setStaticF_s_DynamicSoftShadowsFactor(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_DynamicSoftShadowsFactor", ::WaveHarmonic::Crest::ShadowLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShadowLod_ShaderIDs::getStaticF_s_DynamicSoftShadowsFactor()  {
return ::cordl_internals::getStaticField<int32_t, "s_DynamicSoftShadowsFactor", ::WaveHarmonic::Crest::ShadowLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShadowLod_ShaderIDs::setStaticF_s_SampleColorMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_SampleColorMap", ::WaveHarmonic::Crest::ShadowLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShadowLod_ShaderIDs::getStaticF_s_SampleColorMap()  {
return ::cordl_internals::getStaticField<int32_t, "s_SampleColorMap", ::WaveHarmonic::Crest::ShadowLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShadowLod_ShaderIDs::setStaticF_s_CenterPos(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_CenterPos", ::WaveHarmonic::Crest::ShadowLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShadowLod_ShaderIDs::getStaticF_s_CenterPos()  {
return ::cordl_internals::getStaticField<int32_t, "s_CenterPos", ::WaveHarmonic::Crest::ShadowLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShadowLod_ShaderIDs::setStaticF_s_Scale(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Scale", ::WaveHarmonic::Crest::ShadowLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShadowLod_ShaderIDs::getStaticF_s_Scale()  {
return ::cordl_internals::getStaticField<int32_t, "s_Scale", ::WaveHarmonic::Crest::ShadowLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShadowLod_ShaderIDs::setStaticF_s_JitterDiameters_CurrentFrameWeights(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_JitterDiameters_CurrentFrameWeights", ::WaveHarmonic::Crest::ShadowLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShadowLod_ShaderIDs::getStaticF_s_JitterDiameters_CurrentFrameWeights()  {
return ::cordl_internals::getStaticField<int32_t, "s_JitterDiameters_CurrentFrameWeights", ::WaveHarmonic::Crest::ShadowLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShadowLod_ShaderIDs::setStaticF_s_MainCameraProjectionMatrix(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_MainCameraProjectionMatrix", ::WaveHarmonic::Crest::ShadowLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShadowLod_ShaderIDs::getStaticF_s_MainCameraProjectionMatrix()  {
return ::cordl_internals::getStaticField<int32_t, "s_MainCameraProjectionMatrix", ::WaveHarmonic::Crest::ShadowLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShadowLod_ShaderIDs::setStaticF_s_ShadowPassExecuteLastFrame(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ShadowPassExecuteLastFrame", ::WaveHarmonic::Crest::ShadowLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShadowLod_ShaderIDs::getStaticF_s_ShadowPassExecuteLastFrame()  {
return ::cordl_internals::getStaticField<int32_t, "s_ShadowPassExecuteLastFrame", ::WaveHarmonic::Crest::ShadowLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::ShadowLod_ShaderIDs::setStaticF_s_ClearShadows(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ClearShadows", ::WaveHarmonic::Crest::ShadowLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::ShadowLod_ShaderIDs::getStaticF_s_ClearShadows()  {
return ::cordl_internals::getStaticField<int32_t, "s_ClearShadows", ::WaveHarmonic::Crest::ShadowLod_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ShadowLod_ShaderIDs::ShadowLod_ShaderIDs()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::ShadowLod_Error::ShadowLod_Error(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ShadowLod_Error::ShadowLod_Error()   {
}
constexpr ::WaveHarmonic::Crest::ShadowLod_Error  WaveHarmonic::Crest::ShadowLod_Error::None{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::ShadowLod_Error  WaveHarmonic::Crest::ShadowLod_Error::NoLight{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::ShadowLod_Error  WaveHarmonic::Crest::ShadowLod_Error::NoShadows{static_cast<int32_t>(0x2)};
constexpr ::WaveHarmonic::Crest::ShadowLod_Error  WaveHarmonic::Crest::ShadowLod_Error::IncorrectLightType{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.ShouldRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShadowLod::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::ShadowLod::ShouldRender)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18255de90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"ShouldRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.OnBeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShadowLod::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::ShadowLod::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18255d460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.OnEndCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShadowLod::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::ShadowLod::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18255d570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::get_ID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255e460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255e4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.get_GizmoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::get_GizmoColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18255ccb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.get_ClearColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::get_ClearColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182263110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.get_NeedToReadWriteTextureData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::get_NeedToReadWriteTextureData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.get_BufferCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::get_BufferCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.get_SkipEndOfFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::get_SkipEndOfFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.get_RequestedTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::get_RequestedTextureFormat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18255e4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.get_Kernel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::get_Kernel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18255e470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.get_SkipFlipBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::get_SkipFlipBuffers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.get_SimulationShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::get_SimulationShader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18255e500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::Initialize)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18255d320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.SetGlobals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShadowLod::*)(bool)>(&::WaveHarmonic::Crest::ShadowLod::SetGlobals)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18255dda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::Enable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18255d2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::Disable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18255d280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::Destroy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18255d1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::Allocate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18255cd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.ValidateLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::ValidateLight)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18255e220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"ValidateLight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.SetUpLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::SetUpLight)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18255de00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"SetUpLight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.ClearBufferIfLightChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::ClearBufferIfLightChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18255d140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"ClearBufferIfLightChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.CleanUpShadowCommandBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::CleanUpShadowCommandBuffers)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18255d110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"CleanUpShadowCommandBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShadowLod::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::ShadowLod::Update)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x18255df10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"Update", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.BuildCommandBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShadowLod::*)(::WaveHarmonic::Crest::WaterRenderer*, ::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::ShadowLod::BuildCommandBuffer)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18255cef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.SetAdditionalSimulationParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShadowLod::*)(::WaveHarmonic::Crest::PropertyWrapperCompute)>(&::WaveHarmonic::Crest::ShadowLod::SetAdditionalSimulationParameters)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x18255d670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18255e400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.get_Inputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::get_Inputs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18255ccf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.OnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::WaveHarmonic::Crest::ShadowLod::OnLoad)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18255d610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"OnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.get_CurrentFrameWeightHard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::get_CurrentFrameWeightHard)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18040c3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"get_CurrentFrameWeightHard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.set_CurrentFrameWeightHard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShadowLod::*)(float_t)>(&::WaveHarmonic::Crest::ShadowLod::set_CurrentFrameWeightHard)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1820c8120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"set_CurrentFrameWeightHard", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.get_CurrentFrameWeightSoft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::get_CurrentFrameWeightSoft)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"get_CurrentFrameWeightSoft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.set_CurrentFrameWeightSoft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShadowLod::*)(float_t)>(&::WaveHarmonic::Crest::ShadowLod::set_CurrentFrameWeightSoft)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255e570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"set_CurrentFrameWeightSoft", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.get_JitterDiameterHard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::get_JitterDiameterHard)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18040c380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"get_JitterDiameterHard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.set_JitterDiameterHard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShadowLod::*)(float_t)>(&::WaveHarmonic::Crest::ShadowLod::set_JitterDiameterHard)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18255e580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"set_JitterDiameterHard", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.get_JitterDiameterSoft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ShadowLod::*)()>(&::WaveHarmonic::Crest::ShadowLod::get_JitterDiameterSoft)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"get_JitterDiameterSoft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ShadowLod.set_JitterDiameterSoft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ShadowLod::*)(float_t)>(&::WaveHarmonic::Crest::ShadowLod::set_JitterDiameterSoft)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"set_JitterDiameterSoft", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__DynamicSoftShadows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DynamicSoftShadows;
}
constexpr bool const& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__DynamicSoftShadows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DynamicSoftShadows;
}
constexpr void WaveHarmonic::Crest::ShadowLod::__cordl_internal_set__DynamicSoftShadows(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DynamicSoftShadows = value;
}
constexpr float_t& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__SoftJitterExtinctionFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SoftJitterExtinctionFactor;
}
constexpr float_t const& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__SoftJitterExtinctionFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SoftJitterExtinctionFactor;
}
constexpr void WaveHarmonic::Crest::ShadowLod::__cordl_internal_set__SoftJitterExtinctionFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SoftJitterExtinctionFactor = value;
}
constexpr float_t& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__JitterDiameterSoft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JitterDiameterSoft;
}
constexpr float_t const& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__JitterDiameterSoft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JitterDiameterSoft;
}
constexpr void WaveHarmonic::Crest::ShadowLod::__cordl_internal_set__JitterDiameterSoft(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____JitterDiameterSoft = value;
}
constexpr float_t& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__CurrentFrameWeightSoft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentFrameWeightSoft;
}
constexpr float_t const& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__CurrentFrameWeightSoft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentFrameWeightSoft;
}
constexpr void WaveHarmonic::Crest::ShadowLod::__cordl_internal_set__CurrentFrameWeightSoft(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentFrameWeightSoft = value;
}
constexpr float_t& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__JitterDiameterHard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JitterDiameterHard;
}
constexpr float_t const& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__JitterDiameterHard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JitterDiameterHard;
}
constexpr void WaveHarmonic::Crest::ShadowLod::__cordl_internal_set__JitterDiameterHard(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____JitterDiameterHard = value;
}
constexpr float_t& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__CurrentFrameWeightHard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentFrameWeightHard;
}
constexpr float_t const& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__CurrentFrameWeightHard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentFrameWeightHard;
}
constexpr void WaveHarmonic::Crest::ShadowLod::__cordl_internal_set__CurrentFrameWeightHard(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentFrameWeightHard = value;
}
constexpr bool& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__AllowNullLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowNullLight;
}
constexpr bool const& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__AllowNullLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowNullLight;
}
constexpr void WaveHarmonic::Crest::ShadowLod::__cordl_internal_set__AllowNullLight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllowNullLight = value;
}
constexpr bool& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__AllowNoShadows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowNoShadows;
}
constexpr bool const& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__AllowNoShadows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowNoShadows;
}
constexpr void WaveHarmonic::Crest::ShadowLod::__cordl_internal_set__AllowNoShadows(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllowNoShadows = value;
}
constexpr ::UnityW<::UnityEngine::Light>& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__Light()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Light;
}
constexpr ::UnityW<::UnityEngine::Light> const& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__Light() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Light;
}
constexpr void WaveHarmonic::Crest::ShadowLod::__cordl_internal_set__Light(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Light = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__CopyShadowMapBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyShadowMapBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__CopyShadowMapBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CopyShadowMapBuffer;
}
constexpr void WaveHarmonic::Crest::ShadowLod::__cordl_internal_set__CopyShadowMapBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CopyShadowMapBuffer = value;
}
constexpr ::ArrayW<::WaveHarmonic::Crest::PropertyWrapperMaterial>& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__RenderMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderMaterial;
}
constexpr ::ArrayW<::WaveHarmonic::Crest::PropertyWrapperMaterial> const& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__RenderMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderMaterial;
}
constexpr void WaveHarmonic::Crest::ShadowLod::__cordl_internal_set__RenderMaterial(::ArrayW<::WaveHarmonic::Crest::PropertyWrapperMaterial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RenderMaterial = value;
}
constexpr ::WaveHarmonic::Crest::ShadowLod_Error& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error;
}
constexpr ::WaveHarmonic::Crest::ShadowLod_Error const& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error;
}
constexpr void WaveHarmonic::Crest::ShadowLod::__cordl_internal_set__Error(::WaveHarmonic::Crest::ShadowLod_Error  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error = value;
}
constexpr bool& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__IsSimulationBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSimulationBuffer;
}
constexpr bool const& WaveHarmonic::Crest::ShadowLod::__cordl_internal_get__IsSimulationBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSimulationBuffer;
}
constexpr void WaveHarmonic::Crest::ShadowLod::__cordl_internal_set__IsSimulationBuffer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSimulationBuffer = value;
}
inline void WaveHarmonic::Crest::ShadowLod::setStaticF_s_GizmoColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "s_GizmoColor", ::WaveHarmonic::Crest::ShadowLod*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color WaveHarmonic::Crest::ShadowLod::getStaticF_s_GizmoColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_GizmoColor", ::WaveHarmonic::Crest::ShadowLod*>();
}
inline void WaveHarmonic::Crest::ShadowLod::setStaticF_s_ProcessData(bool  value)  {
::cordl_internals::setStaticField<bool, "s_ProcessData", ::WaveHarmonic::Crest::ShadowLod*>(std::forward<bool>(value));
}
inline bool WaveHarmonic::Crest::ShadowLod::getStaticF_s_ProcessData()  {
return ::cordl_internals::getStaticField<bool, "s_ProcessData", ::WaveHarmonic::Crest::ShadowLod*>();
}
inline void WaveHarmonic::Crest::ShadowLod::setStaticF_s_Inputs(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, "s_Inputs", ::WaveHarmonic::Crest::ShadowLod*>(std::forward<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(value));
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::ShadowLod::getStaticF_s_Inputs()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, "s_Inputs", ::WaveHarmonic::Crest::ShadowLod*>();
}
inline bool WaveHarmonic::Crest::ShadowLod::ShouldRender(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"ShouldRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::ShadowLod::OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void WaveHarmonic::Crest::ShadowLod::OnEndCameraRendering(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline ::StringW WaveHarmonic::Crest::ShadowLod::get_ID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW WaveHarmonic::Crest::ShadowLod::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::ShadowLod::get_GizmoColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::ShadowLod::get_ClearColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ShadowLod::get_NeedToReadWriteTextureData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ShadowLod::get_BufferCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ShadowLod::get_SkipEndOfFrame()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::ShadowLod::get_RequestedTextureFormat()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ShadowLod::get_Kernel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ShadowLod::get_SkipFlipBuffers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ComputeShader> WaveHarmonic::Crest::ShadowLod::get_SimulationShader()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShadowLod::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShadowLod::SetGlobals(bool  enable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void WaveHarmonic::Crest::ShadowLod::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShadowLod::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShadowLod::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShadowLod::Allocate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ShadowLod::ValidateLight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"ValidateLight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ShadowLod::SetUpLight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"SetUpLight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShadowLod::ClearBufferIfLightChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"ClearBufferIfLightChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShadowLod::CleanUpShadowCommandBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"CleanUpShadowCommandBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShadowLod::Update(::UnityEngine::Rendering::CommandBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"Update", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void WaveHarmonic::Crest::ShadowLod::BuildCommandBuffer(::WaveHarmonic::Crest::WaterRenderer*  water, ::UnityEngine::Rendering::CommandBuffer*  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, buffer);
}
inline void WaveHarmonic::Crest::ShadowLod::SetAdditionalSimulationParameters(::WaveHarmonic::Crest::PropertyWrapperCompute  properties)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties);
}
inline void WaveHarmonic::Crest::ShadowLod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::ShadowLod::get_Inputs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShadowLod::OnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"OnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline float_t WaveHarmonic::Crest::ShadowLod::get_CurrentFrameWeightHard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"get_CurrentFrameWeightHard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShadowLod::set_CurrentFrameWeightHard(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"set_CurrentFrameWeightHard", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::ShadowLod::get_CurrentFrameWeightSoft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"get_CurrentFrameWeightSoft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShadowLod::set_CurrentFrameWeightSoft(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"set_CurrentFrameWeightSoft", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::ShadowLod::get_JitterDiameterHard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"get_JitterDiameterHard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShadowLod::set_JitterDiameterHard(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"set_JitterDiameterHard", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::ShadowLod::get_JitterDiameterSoft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"get_JitterDiameterSoft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ShadowLod::set_JitterDiameterSoft(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ShadowLod*>(),
                        {"set_JitterDiameterSoft", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::ShadowLod* WaveHarmonic::Crest::ShadowLod::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::ShadowLod*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ShadowLod::ShadowLod()   {
}
