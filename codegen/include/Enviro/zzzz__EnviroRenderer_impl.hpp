#pragma once
// IWYU pragma private; include "Enviro/EnviroRenderer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Enviro/zzzz__EnviroRenderer_def.hpp"
#include "Enviro/zzzz__EnviroQuality_def.hpp"
#include "Enviro/zzzz__EnviroVolumetricCloudRenderer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroRenderer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroRenderer::*)()>(&::Enviro::EnviroRenderer::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1806059d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroRenderer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroRenderer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroRenderer::*)()>(&::Enviro::EnviroRenderer::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1806059c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroRenderer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroRenderer.CleanupVolumetricRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroRenderer::*)()>(&::Enviro::EnviroRenderer::CleanupVolumetricRenderer)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180605820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroRenderer*>(),
                        {"CleanupVolumetricRenderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroRenderer.SetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroRenderer::*)()>(&::Enviro::EnviroRenderer::SetMatrix)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x180606430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroRenderer*>(),
                        {"SetMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroRenderer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroRenderer::*)()>(&::Enviro::EnviroRenderer::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroRenderer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroRenderer.OnRenderImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroRenderer::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&::Enviro::EnviroRenderer::OnRenderImage)> {
  constexpr static std::size_t size = 0xa20;
  constexpr static std::size_t addrs = 0x180605a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroRenderer*>(),
                        {"OnRenderImage", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroRenderer::*)()>(&::Enviro::EnviroRenderer::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1806069f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Enviro::EnviroQuality>& Enviro::EnviroRenderer::__cordl_internal_get_myQuality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myQuality;
}
constexpr ::UnityW<::Enviro::EnviroQuality> const& Enviro::EnviroRenderer::__cordl_internal_get_myQuality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myQuality;
}
constexpr void Enviro::EnviroRenderer::__cordl_internal_set_myQuality(::UnityW<::Enviro::EnviroQuality>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myQuality = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& Enviro::EnviroRenderer::__cordl_internal_get_myCam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCam;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Enviro::EnviroRenderer::__cordl_internal_get_myCam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCam;
}
constexpr void Enviro::EnviroRenderer::__cordl_internal_set_myCam(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myCam = value;
}
constexpr ::Enviro::EnviroVolumetricCloudRenderer*& Enviro::EnviroRenderer::__cordl_internal_get_volumetricCloudsRender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricCloudsRender;
}
constexpr ::Enviro::EnviroVolumetricCloudRenderer* const& Enviro::EnviroRenderer::__cordl_internal_get_volumetricCloudsRender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricCloudsRender;
}
constexpr void Enviro::EnviroRenderer::__cordl_internal_set_volumetricCloudsRender(::Enviro::EnviroVolumetricCloudRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumetricCloudsRender = value;
}
constexpr ::UnityEngine::Vector3& Enviro::EnviroRenderer::__cordl_internal_get_floatingPointOriginMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatingPointOriginMod;
}
constexpr ::UnityEngine::Vector3 const& Enviro::EnviroRenderer::__cordl_internal_get_floatingPointOriginMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatingPointOriginMod;
}
constexpr void Enviro::EnviroRenderer::__cordl_internal_set_floatingPointOriginMod(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floatingPointOriginMod = value;
}
inline void Enviro::EnviroRenderer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroRenderer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroRenderer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroRenderer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroRenderer::CleanupVolumetricRenderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroRenderer*>(),
                        {"CleanupVolumetricRenderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroRenderer::SetMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroRenderer*>(),
                        {"SetMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroRenderer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroRenderer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroRenderer::OnRenderImage(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroRenderer*>(),
                        {"OnRenderImage", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dest);
}
inline void Enviro::EnviroRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroRenderer* Enviro::EnviroRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroRenderer*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroRenderer::EnviroRenderer()   {
}
