#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/MaskRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__MaskRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__MaskRenderer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
inline void WaveHarmonic::Crest::MaskRenderer_ShaderIDs::setStaticF_s_WaterMaskTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WaterMaskTexture", ::WaveHarmonic::Crest::MaskRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::MaskRenderer_ShaderIDs::getStaticF_s_WaterMaskTexture()  {
return ::cordl_internals::getStaticField<int32_t, "s_WaterMaskTexture", ::WaveHarmonic::Crest::MaskRenderer_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::MaskRenderer_ShaderIDs::setStaticF_s_WaterMaskDepthTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WaterMaskDepthTexture", ::WaveHarmonic::Crest::MaskRenderer_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::MaskRenderer_ShaderIDs::getStaticF_s_WaterMaskDepthTexture()  {
return ::cordl_internals::getStaticField<int32_t, "s_WaterMaskDepthTexture", ::WaveHarmonic::Crest::MaskRenderer_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::MaskRenderer_ShaderIDs::MaskRenderer_ShaderIDs()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::MaskRenderer_MaskInput::MaskRenderer_MaskInput(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::MaskRenderer_MaskInput::MaskRenderer_MaskInput()   {
}
constexpr ::WaveHarmonic::Crest::MaskRenderer_MaskInput  WaveHarmonic::Crest::MaskRenderer_MaskInput::None{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::MaskRenderer_MaskInput  WaveHarmonic::Crest::MaskRenderer_MaskInput::Zero{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::MaskRenderer_MaskInput  WaveHarmonic::Crest::MaskRenderer_MaskInput::Color{static_cast<int32_t>(0x2)};
constexpr ::WaveHarmonic::Crest::MaskRenderer_MaskInput  WaveHarmonic::Crest::MaskRenderer_MaskInput::Depth{static_cast<int32_t>(0x4)};
constexpr ::WaveHarmonic::Crest::MaskRenderer_MaskInput  WaveHarmonic::Crest::MaskRenderer_MaskInput::Both{static_cast<int32_t>(0x6)};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer_IMaskProvider.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::MaskRenderer_MaskInput (::WaveHarmonic::Crest::MaskRenderer_IMaskProvider::*)()>(&::WaveHarmonic::Crest::MaskRenderer_IMaskProvider::Allocate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer_IMaskProvider.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::MaskRenderer_MaskInput (::WaveHarmonic::Crest::MaskRenderer_IMaskProvider::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::MaskRenderer_IMaskProvider::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer_IMaskProvider.OnMaskPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer_IMaskProvider::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::WaveHarmonic::Crest::MaskRenderer*)>(&::WaveHarmonic::Crest::MaskRenderer_IMaskProvider::OnMaskPass)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::WaveHarmonic::Crest::MaskRenderer_MaskInput WaveHarmonic::Crest::MaskRenderer_IMaskProvider::Allocate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::MaskRenderer_MaskInput>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::MaskRenderer_MaskInput WaveHarmonic::Crest::MaskRenderer_IMaskProvider::Write(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::MaskRenderer_MaskInput>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::MaskRenderer_IMaskProvider::OnMaskPass(::UnityEngine::Rendering::CommandBuffer*  commands, ::UnityEngine::Camera*  camera, ::WaveHarmonic::Crest::MaskRenderer*  mask)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commands, camera, mask);
}
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::MaskRenderer_MaskInput (::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver::*)()>(&::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver::Allocate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::WaveHarmonic::Crest::MaskRenderer_MaskInput WaveHarmonic::Crest::MaskRenderer_IMaskReceiver::Allocate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::MaskRenderer_MaskInput>(this, ___internal_method);
}
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::MaskRenderer* (*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::MaskRenderer::Instantiate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1825a25f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"Instantiate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::MaskRenderer::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1825a2b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::MaskRenderer::*)()>(&::WaveHarmonic::Crest::MaskRenderer::get_Enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.get_ColorDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::WaveHarmonic::Crest::MaskRenderer::*)()>(&::WaveHarmonic::Crest::MaskRenderer::get_ColorDescriptor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825a2c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"get_ColorDescriptor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.get_DepthDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::WaveHarmonic::Crest::MaskRenderer::*)()>(&::WaveHarmonic::Crest::MaskRenderer::get_DepthDescriptor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825a2ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"get_DepthDescriptor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.OnBeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::MaskRenderer::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.OnEndCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::MaskRenderer::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer::*)()>(&::WaveHarmonic::Crest::MaskRenderer::Enable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer::*)()>(&::WaveHarmonic::Crest::MaskRenderer::Disable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer::*)()>(&::WaveHarmonic::Crest::MaskRenderer::Destroy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1825a22a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.UpdateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer::*)(::UnityEngine::Texture*)>(&::WaveHarmonic::Crest::MaskRenderer::UpdateColor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1825a2a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"UpdateColor", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.UpdateDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer::*)(::UnityEngine::Texture*)>(&::WaveHarmonic::Crest::MaskRenderer::UpdateDepth)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1825a2ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"UpdateDepth", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer::*)()>(&::WaveHarmonic::Crest::MaskRenderer::Initialize)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1825a24d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer::*)(::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*)>(&::WaveHarmonic::Crest::MaskRenderer::Add)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1825a1e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"Add", {}, {::i2c::type_of<::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer::*)(::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*)>(&::WaveHarmonic::Crest::MaskRenderer::Remove)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825a2860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"Remove", {}, {::i2c::type_of<::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer::*)(int32_t, ::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*)>(&::WaveHarmonic::Crest::MaskRenderer::Add)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1825a1ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"Add", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer::*)(::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*)>(&::WaveHarmonic::Crest::MaskRenderer::Remove)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825a28a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"Remove", {}, {::i2c::type_of<::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer::*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::MaskRenderer::Execute)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1825a2340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"Execute", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.ShouldExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::MaskRenderer::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::MaskRenderer::ShouldExecute)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1825a2920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"ShouldExecute", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.get_ColorT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::WaveHarmonic::Crest::MaskRenderer::*)()>(&::WaveHarmonic::Crest::MaskRenderer::get_ColorT)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a2c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"get_ColorT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.get_DepthT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::WaveHarmonic::Crest::MaskRenderer::*)()>(&::WaveHarmonic::Crest::MaskRenderer::get_DepthT)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a2cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"get_DepthT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.get_ColorRTH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::WaveHarmonic::Crest::MaskRenderer::*)()>(&::WaveHarmonic::Crest::MaskRenderer::get_ColorRTH)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"get_ColorRTH", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.get_DepthRTH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::WaveHarmonic::Crest::MaskRenderer::*)()>(&::WaveHarmonic::Crest::MaskRenderer::get_DepthRTH)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"get_DepthRTH", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.get_ColorRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::WaveHarmonic::Crest::MaskRenderer::*)()>(&::WaveHarmonic::Crest::MaskRenderer::get_ColorRT)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825a2c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"get_ColorRT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.get_DepthRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::WaveHarmonic::Crest::MaskRenderer::*)()>(&::WaveHarmonic::Crest::MaskRenderer::get_DepthRT)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825a2ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"get_DepthRT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.ResetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::MaskRenderer::ResetRenderTarget)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825a28e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"ResetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer::*)()>(&::WaveHarmonic::Crest::MaskRenderer::Allocate)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x1825a1f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"Allocate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.ReAllocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer::*)(::UnityEngine::RenderTextureDescriptor)>(&::WaveHarmonic::Crest::MaskRenderer::ReAllocate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1825a26a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"ReAllocate", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::MaskRenderer.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::MaskRenderer::*)()>(&::WaveHarmonic::Crest::MaskRenderer::Release)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1825a22a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& WaveHarmonic::Crest::MaskRenderer::__cordl_internal_get__ColorRTI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorRTI;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& WaveHarmonic::Crest::MaskRenderer::__cordl_internal_get__ColorRTI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorRTI;
}
constexpr void WaveHarmonic::Crest::MaskRenderer::__cordl_internal_set__ColorRTI(::UnityEngine::Rendering::RenderTargetIdentifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ColorRTI = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& WaveHarmonic::Crest::MaskRenderer::__cordl_internal_get__DepthRTI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthRTI;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& WaveHarmonic::Crest::MaskRenderer::__cordl_internal_get__DepthRTI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthRTI;
}
constexpr void WaveHarmonic::Crest::MaskRenderer::__cordl_internal_set__DepthRTI(::UnityEngine::Rendering::RenderTargetIdentifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DepthRTI = value;
}
constexpr ::WaveHarmonic::Crest::MaskRenderer_MaskInput& WaveHarmonic::Crest::MaskRenderer::__cordl_internal_get__Inputs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Inputs;
}
constexpr ::WaveHarmonic::Crest::MaskRenderer_MaskInput const& WaveHarmonic::Crest::MaskRenderer::__cordl_internal_get__Inputs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Inputs;
}
constexpr void WaveHarmonic::Crest::MaskRenderer::__cordl_internal_set__Inputs(::WaveHarmonic::Crest::MaskRenderer_MaskInput  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Inputs = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& WaveHarmonic::Crest::MaskRenderer::__cordl_internal_get__Water()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& WaveHarmonic::Crest::MaskRenderer::__cordl_internal_get__Water() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr void WaveHarmonic::Crest::MaskRenderer::__cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Water = value;
}
constexpr ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>*& WaveHarmonic::Crest::MaskRenderer::__cordl_internal_get__Providers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Providers;
}
constexpr ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>* const& WaveHarmonic::Crest::MaskRenderer::__cordl_internal_get__Providers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Providers;
}
constexpr void WaveHarmonic::Crest::MaskRenderer::__cordl_internal_set__Providers(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Providers = value;
}
constexpr ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*>*& WaveHarmonic::Crest::MaskRenderer::__cordl_internal_get__Receivers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Receivers;
}
constexpr ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*>* const& WaveHarmonic::Crest::MaskRenderer::__cordl_internal_get__Receivers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Receivers;
}
constexpr void WaveHarmonic::Crest::MaskRenderer::__cordl_internal_set__Receivers(::System::Collections::Generic::List_1<::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Receivers = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& WaveHarmonic::Crest::MaskRenderer::__cordl_internal_get__ColorRTH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorRTH;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& WaveHarmonic::Crest::MaskRenderer::__cordl_internal_get__ColorRTH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColorRTH;
}
constexpr void WaveHarmonic::Crest::MaskRenderer::__cordl_internal_set__ColorRTH(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ColorRTH = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& WaveHarmonic::Crest::MaskRenderer::__cordl_internal_get__DepthRTH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthRTH;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& WaveHarmonic::Crest::MaskRenderer::__cordl_internal_get__DepthRTH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthRTH;
}
constexpr void WaveHarmonic::Crest::MaskRenderer::__cordl_internal_set__DepthRTH(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DepthRTH = value;
}
inline void WaveHarmonic::Crest::MaskRenderer::setStaticF_s_OnAllocate(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "s_OnAllocate", ::WaveHarmonic::Crest::MaskRenderer*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* WaveHarmonic::Crest::MaskRenderer::getStaticF_s_OnAllocate()  {
return ::cordl_internals::getStaticField<::System::Action*, "s_OnAllocate", ::WaveHarmonic::Crest::MaskRenderer*>();
}
inline void WaveHarmonic::Crest::MaskRenderer::setStaticF_s_OnRelease(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "s_OnRelease", ::WaveHarmonic::Crest::MaskRenderer*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* WaveHarmonic::Crest::MaskRenderer::getStaticF_s_OnRelease()  {
return ::cordl_internals::getStaticField<::System::Action*, "s_OnRelease", ::WaveHarmonic::Crest::MaskRenderer*>();
}
inline void WaveHarmonic::Crest::MaskRenderer::setStaticF_s_OnReAllocate(::System::Action_1<::UnityEngine::RenderTextureDescriptor>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::RenderTextureDescriptor>*, "s_OnReAllocate", ::WaveHarmonic::Crest::MaskRenderer*>(std::forward<::System::Action_1<::UnityEngine::RenderTextureDescriptor>*>(value));
}
inline ::System::Action_1<::UnityEngine::RenderTextureDescriptor>* WaveHarmonic::Crest::MaskRenderer::getStaticF_s_OnReAllocate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::RenderTextureDescriptor>*, "s_OnReAllocate", ::WaveHarmonic::Crest::MaskRenderer*>();
}
inline ::WaveHarmonic::Crest::MaskRenderer* WaveHarmonic::Crest::MaskRenderer::Instantiate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"Instantiate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::MaskRenderer*>(nullptr, ___internal_method, water);
}
inline void WaveHarmonic::Crest::MaskRenderer::_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline bool WaveHarmonic::Crest::MaskRenderer::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::RenderTextureDescriptor WaveHarmonic::Crest::MaskRenderer::get_ColorDescriptor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"get_ColorDescriptor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method);
}
inline ::UnityEngine::RenderTextureDescriptor WaveHarmonic::Crest::MaskRenderer::get_DepthDescriptor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"get_DepthDescriptor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::MaskRenderer::OnBeginCameraRendering(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::MaskRenderer::OnEndCameraRendering(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::MaskRenderer::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::MaskRenderer::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::MaskRenderer::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::MaskRenderer::UpdateColor(::UnityEngine::Texture*  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"UpdateColor", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void WaveHarmonic::Crest::MaskRenderer::UpdateDepth(::UnityEngine::Texture*  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"UpdateDepth", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, depth);
}
inline void WaveHarmonic::Crest::MaskRenderer::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::MaskRenderer::Add(::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*  receiver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"Add", {}, {::i2c::type_of<::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receiver);
}
inline void WaveHarmonic::Crest::MaskRenderer::Remove(::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*  receiver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"Remove", {}, {::i2c::type_of<::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receiver);
}
inline void WaveHarmonic::Crest::MaskRenderer::Add(int32_t  queue, ::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"Add", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, queue, provider);
}
inline void WaveHarmonic::Crest::MaskRenderer::Remove(::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"Remove", {}, {::i2c::type_of<::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline void WaveHarmonic::Crest::MaskRenderer::Execute(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::CommandBuffer*  commands)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"Execute", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, commands);
}
inline bool WaveHarmonic::Crest::MaskRenderer::ShouldExecute(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"ShouldExecute", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, camera);
}
inline ::UnityW<::UnityEngine::Texture> WaveHarmonic::Crest::MaskRenderer::get_ColorT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"get_ColorT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> WaveHarmonic::Crest::MaskRenderer::get_DepthT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"get_DepthT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* WaveHarmonic::Crest::MaskRenderer::get_ColorRTH()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"get_ColorRTH", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* WaveHarmonic::Crest::MaskRenderer::get_DepthRTH()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"get_DepthRTH", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> WaveHarmonic::Crest::MaskRenderer::get_ColorRT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"get_ColorRT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> WaveHarmonic::Crest::MaskRenderer::get_DepthRT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"get_DepthRT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::MaskRenderer::ResetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  commands)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"ResetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commands);
}
inline void WaveHarmonic::Crest::MaskRenderer::Allocate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"Allocate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::MaskRenderer::ReAllocate(::UnityEngine::RenderTextureDescriptor  descriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"ReAllocate", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, descriptor);
}
inline void WaveHarmonic::Crest::MaskRenderer::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::MaskRenderer*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::MaskRenderer* WaveHarmonic::Crest::MaskRenderer::New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::MaskRenderer*>(water));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::MaskRenderer::MaskRenderer()   {
}
