#pragma once
// IWYU pragma private; include "GlobalNamespace/BlurRenderPass.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "GlobalNamespace/zzzz__BlurRenderPass_def.hpp"
#include "GlobalNamespace/zzzz__BlurSettings_def.hpp"
#include "GlobalNamespace/zzzz__BlurVolumeComponent_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BlurRenderPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlurRenderPass::*)(::UnityEngine::Material*, ::GlobalNamespace::BlurSettings*)>(&::GlobalNamespace::BlurRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803241a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlurRenderPass*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::GlobalNamespace::BlurSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlurRenderPass.ShouldBeActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BlurRenderPass::*)()>(&::GlobalNamespace::BlurRenderPass::ShouldBeActive)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180323e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlurRenderPass*>(),
                        {"ShouldBeActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlurRenderPass.UpdateBlurSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlurRenderPass::*)()>(&::GlobalNamespace::BlurRenderPass::UpdateBlurSettings)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x180323fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlurRenderPass*>(),
                        {"UpdateBlurSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlurRenderPass.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlurRenderPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::GlobalNamespace::BlurRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x180323ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BlurRenderPass*>(),
                    {::i2c::class_of<::GlobalNamespace::BlurRenderPass*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlurRenderPass.GetHorizontalBlur
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BlurRenderPass::*)(::GlobalNamespace::BlurVolumeComponent*)>(&::GlobalNamespace::BlurRenderPass::GetHorizontalBlur)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803239a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlurRenderPass*>(),
                        {"GetHorizontalBlur", {}, {::i2c::type_of<::GlobalNamespace::BlurVolumeComponent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlurRenderPass.GetVerticalBlur
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BlurRenderPass::*)(::GlobalNamespace::BlurVolumeComponent*)>(&::GlobalNamespace::BlurRenderPass::GetVerticalBlur)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180323a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlurRenderPass*>(),
                        {"GetVerticalBlur", {}, {::i2c::type_of<::GlobalNamespace::BlurVolumeComponent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlurRenderPass.GetVolumeComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BlurVolumeComponent> (::GlobalNamespace::BlurRenderPass::*)()>(&::GlobalNamespace::BlurRenderPass::GetVolumeComponent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180323aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlurRenderPass*>(),
                        {"GetVolumeComponent", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BlurSettings*& GlobalNamespace::BlurRenderPass::__cordl_internal_get_defaultSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultSettings;
}
constexpr ::GlobalNamespace::BlurSettings* const& GlobalNamespace::BlurRenderPass::__cordl_internal_get_defaultSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultSettings;
}
constexpr void GlobalNamespace::BlurRenderPass::__cordl_internal_set_defaultSettings(::GlobalNamespace::BlurSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultSettings = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::BlurRenderPass::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::BlurRenderPass::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void GlobalNamespace::BlurRenderPass::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureDesc& GlobalNamespace::BlurRenderPass::__cordl_internal_get_blurTextureDescriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blurTextureDescriptor;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureDesc const& GlobalNamespace::BlurRenderPass::__cordl_internal_get_blurTextureDescriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blurTextureDescriptor;
}
constexpr void GlobalNamespace::BlurRenderPass::__cordl_internal_set_blurTextureDescriptor(::UnityEngine::Rendering::RenderGraphModule::TextureDesc  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blurTextureDescriptor = value;
}
inline void GlobalNamespace::BlurRenderPass::setStaticF_horizontalBlurId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "horizontalBlurId", ::GlobalNamespace::BlurRenderPass*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BlurRenderPass::getStaticF_horizontalBlurId()  {
return ::cordl_internals::getStaticField<int32_t, "horizontalBlurId", ::GlobalNamespace::BlurRenderPass*>();
}
inline void GlobalNamespace::BlurRenderPass::setStaticF_verticalBlurId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "verticalBlurId", ::GlobalNamespace::BlurRenderPass*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BlurRenderPass::getStaticF_verticalBlurId()  {
return ::cordl_internals::getStaticField<int32_t, "verticalBlurId", ::GlobalNamespace::BlurRenderPass*>();
}
inline void GlobalNamespace::BlurRenderPass::_ctor(::UnityEngine::Material*  material, ::GlobalNamespace::BlurSettings*  defaultSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlurRenderPass*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::GlobalNamespace::BlurSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, defaultSettings);
}
inline bool GlobalNamespace::BlurRenderPass::ShouldBeActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlurRenderPass*>(),
                        {"ShouldBeActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BlurRenderPass::UpdateBlurSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlurRenderPass*>(),
                        {"UpdateBlurSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BlurRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BlurRenderPass*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline float_t GlobalNamespace::BlurRenderPass::GetHorizontalBlur(::GlobalNamespace::BlurVolumeComponent*  volumeComponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlurRenderPass*>(),
                        {"GetHorizontalBlur", {}, {::i2c::type_of<::GlobalNamespace::BlurVolumeComponent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, volumeComponent);
}
inline float_t GlobalNamespace::BlurRenderPass::GetVerticalBlur(::GlobalNamespace::BlurVolumeComponent*  volumeComponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlurRenderPass*>(),
                        {"GetVerticalBlur", {}, {::i2c::type_of<::GlobalNamespace::BlurVolumeComponent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, volumeComponent);
}
inline ::UnityW<::GlobalNamespace::BlurVolumeComponent> GlobalNamespace::BlurRenderPass::GetVolumeComponent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlurRenderPass*>(),
                        {"GetVolumeComponent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BlurVolumeComponent>>(this, ___internal_method);
}
inline ::GlobalNamespace::BlurRenderPass* GlobalNamespace::BlurRenderPass::New_ctor(::UnityEngine::Material*  material, ::GlobalNamespace::BlurSettings*  defaultSettings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BlurRenderPass*>(material, defaultSettings));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlurRenderPass::BlurRenderPass()   {
}
