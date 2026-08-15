#pragma once
// IWYU pragma private; include "Enviro/EnviroURPRenderPass.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Enviro/zzzz__EnviroURPRenderPass_def.hpp"
#include "Enviro/zzzz__EnviroVolumetricCloudRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroURPRenderPass.get_scriptableRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::ScriptableRenderer* (::Enviro::EnviroURPRenderPass::*)()>(&::Enviro::EnviroURPRenderPass::get_scriptableRenderer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"get_scriptableRenderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderPass.set_scriptableRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderPass::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*)>(&::Enviro::EnviroURPRenderPass::set_scriptableRenderer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d49a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"set_scriptableRenderer", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderPass::*)(::StringW)>(&::Enviro::EnviroURPRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18060a470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderPass.CustomBlit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, int32_t)>(&::Enviro::EnviroURPRenderPass::CustomBlit)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180609030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"CustomBlit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderPass.CustomBlit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*)>(&::Enviro::EnviroURPRenderPass::CustomBlit)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180608f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"CustomBlit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderPass.CustomBlit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::Enviro::EnviroURPRenderPass::CustomBlit)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180609180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"CustomBlit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderPass.CustomBlit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Material*)>(&::Enviro::EnviroURPRenderPass::CustomBlit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180609150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"CustomBlit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderPass.CustomBlit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Material*, int32_t)>(&::Enviro::EnviroURPRenderPass::CustomBlit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1806092f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"CustomBlit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderPass.CustomBlit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(&::Enviro::EnviroURPRenderPass::CustomBlit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180608ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"CustomBlit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderPass.Configure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor)>(&::Enviro::EnviroURPRenderPass::Configure)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180608e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                    {::i2c::class_of<::Enviro::EnviroURPRenderPass*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderPass.OnCameraSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::Enviro::EnviroURPRenderPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18060a410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                    {::i2c::class_of<::Enviro::EnviroURPRenderPass*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderPass.CreateCloudsRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Enviro::EnviroVolumetricCloudRenderer* (::Enviro::EnviroURPRenderPass::*)(::UnityEngine::Camera*)>(&::Enviro::EnviroURPRenderPass::CreateCloudsRenderer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180608e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"CreateCloudsRenderer", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderPass.GetCloudsRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Enviro::EnviroVolumetricCloudRenderer* (::Enviro::EnviroURPRenderPass::*)(::UnityEngine::Camera*)>(&::Enviro::EnviroURPRenderPass::GetCloudsRenderer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18060a350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"GetCloudsRenderer", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderPass.SetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderPass::*)(::UnityEngine::Camera*)>(&::Enviro::EnviroURPRenderPass::SetMatrix)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x1806087d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"SetMatrix", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroURPRenderPass.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroURPRenderPass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::Enviro::EnviroURPRenderPass::Execute)> {
  constexpr static std::size_t size = 0x1030;
  constexpr static std::size_t addrs = 0x180609320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                    {::i2c::class_of<::Enviro::EnviroURPRenderPass*>(), 9}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer*& Enviro::EnviroURPRenderPass::__cordl_internal_get__scriptableRenderer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scriptableRenderer_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer* const& Enviro::EnviroURPRenderPass::__cordl_internal_get__scriptableRenderer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scriptableRenderer_k__BackingField;
}
constexpr void Enviro::EnviroURPRenderPass::__cordl_internal_set__scriptableRenderer_k__BackingField(::UnityEngine::Rendering::Universal::ScriptableRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scriptableRenderer_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Enviro::EnviroURPRenderPass::__cordl_internal_get_blitThroughMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitThroughMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& Enviro::EnviroURPRenderPass::__cordl_internal_get_blitThroughMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitThroughMat;
}
constexpr void Enviro::EnviroURPRenderPass::__cordl_internal_set_blitThroughMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blitThroughMat = value;
}
constexpr ::StringW& Enviro::EnviroURPRenderPass::__cordl_internal_get_pName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pName;
}
constexpr ::StringW const& Enviro::EnviroURPRenderPass::__cordl_internal_get_pName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pName;
}
constexpr void Enviro::EnviroURPRenderPass::__cordl_internal_set_pName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pName = value;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroVolumetricCloudRenderer*>*& Enviro::EnviroURPRenderPass::__cordl_internal_get_volumetricCloudsRender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricCloudsRender;
}
constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroVolumetricCloudRenderer*>* const& Enviro::EnviroURPRenderPass::__cordl_internal_get_volumetricCloudsRender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricCloudsRender;
}
constexpr void Enviro::EnviroURPRenderPass::__cordl_internal_set_volumetricCloudsRender(::System::Collections::Generic::List_1<::Enviro::EnviroVolumetricCloudRenderer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumetricCloudsRender = value;
}
constexpr ::UnityEngine::Vector3& Enviro::EnviroURPRenderPass::__cordl_internal_get_floatingPointOriginMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatingPointOriginMod;
}
constexpr ::UnityEngine::Vector3 const& Enviro::EnviroURPRenderPass::__cordl_internal_get_floatingPointOriginMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatingPointOriginMod;
}
constexpr void Enviro::EnviroURPRenderPass::__cordl_internal_set_floatingPointOriginMod(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floatingPointOriginMod = value;
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* Enviro::EnviroURPRenderPass::get_scriptableRenderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"get_scriptableRenderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(this, ___internal_method);
}
inline void Enviro::EnviroURPRenderPass::set_scriptableRenderer(::UnityEngine::Rendering::Universal::ScriptableRenderer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"set_scriptableRenderer", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroURPRenderPass::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Enviro::EnviroURPRenderPass::CustomBlit(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  target, ::UnityEngine::Material*  mat, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"CustomBlit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, matrix, source, target, mat, pass);
}
inline void Enviro::EnviroURPRenderPass::CustomBlit(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  target, ::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"CustomBlit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, matrix, source, target, mat);
}
inline void Enviro::EnviroURPRenderPass::CustomBlit(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"CustomBlit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, matrix, source, target);
}
inline void Enviro::EnviroURPRenderPass::CustomBlit(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  target, ::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"CustomBlit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, source, target, mat);
}
inline void Enviro::EnviroURPRenderPass::CustomBlit(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  target, ::UnityEngine::Material*  mat, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"CustomBlit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, source, target, mat, pass);
}
inline void Enviro::EnviroURPRenderPass::CustomBlit(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"CustomBlit", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, source, target);
}
inline void Enviro::EnviroURPRenderPass::Configure(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTextureDescriptor  cameraTextureDescriptor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroURPRenderPass*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraTextureDescriptor);
}
inline void Enviro::EnviroURPRenderPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroURPRenderPass*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, renderingData);
}
inline ::Enviro::EnviroVolumetricCloudRenderer* Enviro::EnviroURPRenderPass::CreateCloudsRenderer(::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"CreateCloudsRenderer", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Enviro::EnviroVolumetricCloudRenderer*>(this, ___internal_method, cam);
}
inline ::Enviro::EnviroVolumetricCloudRenderer* Enviro::EnviroURPRenderPass::GetCloudsRenderer(::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"GetCloudsRenderer", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Enviro::EnviroVolumetricCloudRenderer*>(this, ___internal_method, cam);
}
inline void Enviro::EnviroURPRenderPass::SetMatrix(::UnityEngine::Camera*  myCam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroURPRenderPass*>(),
                        {"SetMatrix", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, myCam);
}
inline void Enviro::EnviroURPRenderPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroURPRenderPass*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline ::Enviro::EnviroURPRenderPass* Enviro::EnviroURPRenderPass::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroURPRenderPass*>(name));
}
// Ctor Parameters []
constexpr ::Enviro::EnviroURPRenderPass::EnviroURPRenderPass()   {
}
