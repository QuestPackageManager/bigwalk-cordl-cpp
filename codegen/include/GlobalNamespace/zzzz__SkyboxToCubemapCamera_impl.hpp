#pragma once
// IWYU pragma private; include "GlobalNamespace/SkyboxToCubemapCamera.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__SkyboxToCubemapCamera_def.hpp"
#include "GlobalNamespace/zzzz__SkyboxToCubemapCamera_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__ReflectionProbe_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SkyboxToCubemapCamera_FaceElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyboxToCubemapCamera_FaceElement::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::SkyboxToCubemapCamera_FaceElement::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180325880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera_FaceElement*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyboxToCubemapCamera_FaceElement.GetViewMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::SkyboxToCubemapCamera_FaceElement::*)()>(&::GlobalNamespace::SkyboxToCubemapCamera_FaceElement::GetViewMatrix)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180325730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera_FaceElement*>(),
                        {"GetViewMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Quaternion& GlobalNamespace::SkyboxToCubemapCamera_FaceElement::__cordl_internal_get_Rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::SkyboxToCubemapCamera_FaceElement::__cordl_internal_get_Rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rotation;
}
constexpr void GlobalNamespace::SkyboxToCubemapCamera_FaceElement::__cordl_internal_set_Rotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Rotation = value;
}
inline void GlobalNamespace::SkyboxToCubemapCamera_FaceElement::_ctor(::UnityEngine::Vector3  forward, ::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera_FaceElement*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forward, up);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::SkyboxToCubemapCamera_FaceElement::GetViewMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera_FaceElement*>(),
                        {"GetViewMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline ::GlobalNamespace::SkyboxToCubemapCamera_FaceElement* GlobalNamespace::SkyboxToCubemapCamera_FaceElement::New_ctor(::UnityEngine::Vector3  forward, ::UnityEngine::Vector3  up)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SkyboxToCubemapCamera_FaceElement*>(forward, up));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SkyboxToCubemapCamera_FaceElement::SkyboxToCubemapCamera_FaceElement()   {
}
//  Writing Method size for method: ::GlobalNamespace::SkyboxToCubemapCamera.get_Camera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::GlobalNamespace::SkyboxToCubemapCamera::*)()>(&::GlobalNamespace::SkyboxToCubemapCamera::get_Camera)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera*>(),
                        {"get_Camera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyboxToCubemapCamera.set_Camera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyboxToCubemapCamera::*)(::UnityEngine::Camera*)>(&::GlobalNamespace::SkyboxToCubemapCamera::set_Camera)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera*>(),
                        {"set_Camera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyboxToCubemapCamera.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SkyboxToCubemapCamera> (*)()>(&::GlobalNamespace::SkyboxToCubemapCamera::get_Instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803294d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyboxToCubemapCamera.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SkyboxToCubemapCamera*)>(&::GlobalNamespace::SkyboxToCubemapCamera::set_Instance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803294f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::SkyboxToCubemapCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyboxToCubemapCamera.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyboxToCubemapCamera::*)()>(&::GlobalNamespace::SkyboxToCubemapCamera::Start)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x180329020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyboxToCubemapCamera.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyboxToCubemapCamera::*)()>(&::GlobalNamespace::SkyboxToCubemapCamera::OnDestroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180328fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyboxToCubemapCamera.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyboxToCubemapCamera::*)()>(&::GlobalNamespace::SkyboxToCubemapCamera::Update)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803293a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyboxToCubemapCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyboxToCubemapCamera::*)()>(&::GlobalNamespace::SkyboxToCubemapCamera::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::SkyboxToCubemapCamera::__cordl_internal_get_faceTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::SkyboxToCubemapCamera::__cordl_internal_get_faceTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceTexture;
}
constexpr void GlobalNamespace::SkyboxToCubemapCamera::__cordl_internal_set_faceTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceTexture = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::SkyboxToCubemapCamera::__cordl_internal_get_cubemapTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cubemapTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::SkyboxToCubemapCamera::__cordl_internal_get_cubemapTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cubemapTexture;
}
constexpr void GlobalNamespace::SkyboxToCubemapCamera::__cordl_internal_set_cubemapTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cubemapTexture = value;
}
constexpr ::UnityW<::UnityEngine::ReflectionProbe>& GlobalNamespace::SkyboxToCubemapCamera::__cordl_internal_get_reflectionProbe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reflectionProbe;
}
constexpr ::UnityW<::UnityEngine::ReflectionProbe> const& GlobalNamespace::SkyboxToCubemapCamera::__cordl_internal_get_reflectionProbe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reflectionProbe;
}
constexpr void GlobalNamespace::SkyboxToCubemapCamera::__cordl_internal_set_reflectionProbe(::UnityW<::UnityEngine::ReflectionProbe>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reflectionProbe = value;
}
constexpr int32_t& GlobalNamespace::SkyboxToCubemapCamera::__cordl_internal_get_faceIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceIndex;
}
constexpr int32_t const& GlobalNamespace::SkyboxToCubemapCamera::__cordl_internal_get_faceIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceIndex;
}
constexpr void GlobalNamespace::SkyboxToCubemapCamera::__cordl_internal_set_faceIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceIndex = value;
}
constexpr ::ArrayW<::GlobalNamespace::SkyboxToCubemapCamera_FaceElement*>& GlobalNamespace::SkyboxToCubemapCamera::__cordl_internal_get_faces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faces;
}
constexpr ::ArrayW<::GlobalNamespace::SkyboxToCubemapCamera_FaceElement*> const& GlobalNamespace::SkyboxToCubemapCamera::__cordl_internal_get_faces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faces;
}
constexpr void GlobalNamespace::SkyboxToCubemapCamera::__cordl_internal_set_faces(::ArrayW<::GlobalNamespace::SkyboxToCubemapCamera_FaceElement*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faces = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::SkyboxToCubemapCamera::__cordl_internal_get__Camera_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Camera_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::SkyboxToCubemapCamera::__cordl_internal_get__Camera_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Camera_k__BackingField;
}
constexpr void GlobalNamespace::SkyboxToCubemapCamera::__cordl_internal_set__Camera_k__BackingField(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Camera_k__BackingField = value;
}
inline void GlobalNamespace::SkyboxToCubemapCamera::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::SkyboxToCubemapCamera>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::SkyboxToCubemapCamera>, "<Instance>k__BackingField", ::GlobalNamespace::SkyboxToCubemapCamera*>(std::forward<::UnityW<::GlobalNamespace::SkyboxToCubemapCamera>>(value));
}
inline ::UnityW<::GlobalNamespace::SkyboxToCubemapCamera> GlobalNamespace::SkyboxToCubemapCamera::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::SkyboxToCubemapCamera>, "<Instance>k__BackingField", ::GlobalNamespace::SkyboxToCubemapCamera*>();
}
inline ::UnityW<::UnityEngine::Camera> GlobalNamespace::SkyboxToCubemapCamera::get_Camera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera*>(),
                        {"get_Camera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void GlobalNamespace::SkyboxToCubemapCamera::set_Camera(::UnityEngine::Camera*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera*>(),
                        {"set_Camera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::SkyboxToCubemapCamera> GlobalNamespace::SkyboxToCubemapCamera::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SkyboxToCubemapCamera>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SkyboxToCubemapCamera::set_Instance(::GlobalNamespace::SkyboxToCubemapCamera*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::SkyboxToCubemapCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::SkyboxToCubemapCamera::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SkyboxToCubemapCamera::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SkyboxToCubemapCamera::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SkyboxToCubemapCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyboxToCubemapCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SkyboxToCubemapCamera* GlobalNamespace::SkyboxToCubemapCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SkyboxToCubemapCamera*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SkyboxToCubemapCamera::SkyboxToCubemapCamera()   {
}
