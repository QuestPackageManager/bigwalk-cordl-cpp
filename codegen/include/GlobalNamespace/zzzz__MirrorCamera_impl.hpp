#pragma once
// IWYU pragma private; include "GlobalNamespace/MirrorCamera.hpp"
#include "GlobalNamespace/zzzz__PlayerLooks_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "GlobalNamespace/zzzz__MirrorCamera_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MirrorCamera.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorCamera::*)()>(&::GlobalNamespace::MirrorCamera::Awake)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804039d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MirrorCamera*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorCamera.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorCamera::*)()>(&::GlobalNamespace::MirrorCamera::LateUpdate)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x180403eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MirrorCamera*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorCamera.CustomPreCull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorCamera::*)()>(&::GlobalNamespace::MirrorCamera::CustomPreCull)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180403b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MirrorCamera*>(),
                        {"CustomPreCull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorCamera.CustomPreRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorCamera::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::GlobalNamespace::MirrorCamera::CustomPreRender)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x180403be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MirrorCamera*>(),
                        {"CustomPreRender", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorCamera.CustomPostRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorCamera::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::GlobalNamespace::MirrorCamera::CustomPostRender)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180403ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MirrorCamera*>(),
                        {"CustomPostRender", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorCamera.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorCamera::*)()>(&::GlobalNamespace::MirrorCamera::OnDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180404140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MirrorCamera*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorCamera.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorCamera::*)()>(&::GlobalNamespace::MirrorCamera::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180404200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MirrorCamera*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorCamera.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorCamera::*)()>(&::GlobalNamespace::MirrorCamera::OnDisable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180404180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MirrorCamera*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorCamera::*)()>(&::GlobalNamespace::MirrorCamera::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180404280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MirrorCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::MirrorCamera::__cordl_internal_get_cameraObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraObject;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::MirrorCamera::__cordl_internal_get_cameraObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraObject;
}
constexpr void GlobalNamespace::MirrorCamera::__cordl_internal_set_cameraObject(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraObject = value;
}
constexpr ::GlobalNamespace::PlayerLooks_LookType& GlobalNamespace::MirrorCamera::__cordl_internal_get_savedLookType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedLookType;
}
constexpr ::GlobalNamespace::PlayerLooks_LookType const& GlobalNamespace::MirrorCamera::__cordl_internal_get_savedLookType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedLookType;
}
constexpr void GlobalNamespace::MirrorCamera::__cordl_internal_set_savedLookType(::GlobalNamespace::PlayerLooks_LookType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___savedLookType = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::MirrorCamera::__cordl_internal_get_targetRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::MirrorCamera::__cordl_internal_get_targetRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr void GlobalNamespace::MirrorCamera::__cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRenderer = value;
}
constexpr int32_t& GlobalNamespace::MirrorCamera::__cordl_internal_get_targetSubmesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSubmesh;
}
constexpr int32_t const& GlobalNamespace::MirrorCamera::__cordl_internal_get_targetSubmesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSubmesh;
}
constexpr void GlobalNamespace::MirrorCamera::__cordl_internal_set_targetSubmesh(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetSubmesh = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MirrorCamera::__cordl_internal_get__materialInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MirrorCamera::__cordl_internal_get__materialInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstance;
}
constexpr void GlobalNamespace::MirrorCamera::__cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialInstance = value;
}
constexpr ::StringW& GlobalNamespace::MirrorCamera::__cordl_internal_get_targetMaterialProperty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetMaterialProperty;
}
constexpr ::StringW const& GlobalNamespace::MirrorCamera::__cordl_internal_get_targetMaterialProperty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetMaterialProperty;
}
constexpr void GlobalNamespace::MirrorCamera::__cordl_internal_set_targetMaterialProperty(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetMaterialProperty = value;
}
constexpr bool& GlobalNamespace::MirrorCamera::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::MirrorCamera::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::MirrorCamera::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::ArrayW<::UnityEngine::Plane>& GlobalNamespace::MirrorCamera::__cordl_internal_get__frustumPlanes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frustumPlanes;
}
constexpr ::ArrayW<::UnityEngine::Plane> const& GlobalNamespace::MirrorCamera::__cordl_internal_get__frustumPlanes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frustumPlanes;
}
constexpr void GlobalNamespace::MirrorCamera::__cordl_internal_set__frustumPlanes(::ArrayW<::UnityEngine::Plane>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frustumPlanes = value;
}
inline void GlobalNamespace::MirrorCamera::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MirrorCamera*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirrorCamera::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MirrorCamera*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirrorCamera::CustomPreCull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MirrorCamera*>(),
                        {"CustomPreCull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirrorCamera::CustomPreRender(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  eventCamera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MirrorCamera*>(),
                        {"CustomPreRender", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, eventCamera);
}
inline void GlobalNamespace::MirrorCamera::CustomPostRender(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  eventCamera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MirrorCamera*>(),
                        {"CustomPostRender", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, eventCamera);
}
inline void GlobalNamespace::MirrorCamera::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MirrorCamera*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirrorCamera::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MirrorCamera*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirrorCamera::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MirrorCamera*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirrorCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MirrorCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MirrorCamera* GlobalNamespace::MirrorCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MirrorCamera*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirrorCamera::MirrorCamera()   {
}
