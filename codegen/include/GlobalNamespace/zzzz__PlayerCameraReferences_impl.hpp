#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCameraReferences.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerCameraReferences_def.hpp"
#include "GlobalNamespace/zzzz__CameraQualityManager_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraReferences._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCameraReferences::*)()>(&::GlobalNamespace::PlayerCameraReferences::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraReferences*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::PlayerCameraReferences::__cordl_internal_get_playerCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::PlayerCameraReferences::__cordl_internal_get_playerCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCamera;
}
constexpr void GlobalNamespace::PlayerCameraReferences::__cordl_internal_set_playerCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCamera = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::PlayerCameraReferences::__cordl_internal_get_playerUICamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerUICamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::PlayerCameraReferences::__cordl_internal_get_playerUICamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerUICamera;
}
constexpr void GlobalNamespace::PlayerCameraReferences::__cordl_internal_set_playerUICamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerUICamera = value;
}
constexpr ::UnityW<::GlobalNamespace::CameraQualityManager>& GlobalNamespace::PlayerCameraReferences::__cordl_internal_get_CameraQualityManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraQualityManager;
}
constexpr ::UnityW<::GlobalNamespace::CameraQualityManager> const& GlobalNamespace::PlayerCameraReferences::__cordl_internal_get_CameraQualityManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraQualityManager;
}
constexpr void GlobalNamespace::PlayerCameraReferences::__cordl_internal_set_CameraQualityManager(::UnityW<::GlobalNamespace::CameraQualityManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraQualityManager = value;
}
constexpr ::UnityW<::UnityEngine::Light>& GlobalNamespace::PlayerCameraReferences::__cordl_internal_get_cameraLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraLight;
}
constexpr ::UnityW<::UnityEngine::Light> const& GlobalNamespace::PlayerCameraReferences::__cordl_internal_get_cameraLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraLight;
}
constexpr void GlobalNamespace::PlayerCameraReferences::__cordl_internal_set_cameraLight(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraLight = value;
}
inline void GlobalNamespace::PlayerCameraReferences::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraReferences*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerCameraReferences* GlobalNamespace::PlayerCameraReferences::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerCameraReferences*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerCameraReferences::PlayerCameraReferences()   {
}
