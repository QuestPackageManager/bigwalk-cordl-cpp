#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Gameplay/PlayerSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Rowlan/Genesis/Gameplay/zzzz__PlayerSettings_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Rowlan::Genesis::Gameplay::PlayerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Gameplay::PlayerSettings::*)()>(&::Rowlan::Genesis::Gameplay::PlayerSettings::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181abf790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::PlayerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& Rowlan::Genesis::Gameplay::PlayerSettings::__cordl_internal_get_camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Rowlan::Genesis::Gameplay::PlayerSettings::__cordl_internal_get_camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___camera;
}
constexpr void Rowlan::Genesis::Gameplay::PlayerSettings::__cordl_internal_set_camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___camera = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Rowlan::Genesis::Gameplay::PlayerSettings::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Rowlan::Genesis::Gameplay::PlayerSettings::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void Rowlan::Genesis::Gameplay::PlayerSettings::__cordl_internal_set_player(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
constexpr float_t& Rowlan::Genesis::Gameplay::PlayerSettings::__cordl_internal_get_cameraDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraDistance;
}
constexpr float_t const& Rowlan::Genesis::Gameplay::PlayerSettings::__cordl_internal_get_cameraDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraDistance;
}
constexpr void Rowlan::Genesis::Gameplay::PlayerSettings::__cordl_internal_set_cameraDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraDistance = value;
}
constexpr bool& Rowlan::Genesis::Gameplay::PlayerSettings::__cordl_internal_get_addCameraTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addCameraTarget;
}
constexpr bool const& Rowlan::Genesis::Gameplay::PlayerSettings::__cordl_internal_get_addCameraTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addCameraTarget;
}
constexpr void Rowlan::Genesis::Gameplay::PlayerSettings::__cordl_internal_set_addCameraTarget(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addCameraTarget = value;
}
constexpr float_t& Rowlan::Genesis::Gameplay::PlayerSettings::__cordl_internal_get_cameraTargetY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraTargetY;
}
constexpr float_t const& Rowlan::Genesis::Gameplay::PlayerSettings::__cordl_internal_get_cameraTargetY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraTargetY;
}
constexpr void Rowlan::Genesis::Gameplay::PlayerSettings::__cordl_internal_set_cameraTargetY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraTargetY = value;
}
inline void Rowlan::Genesis::Gameplay::PlayerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Gameplay::PlayerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::Gameplay::PlayerSettings* Rowlan::Genesis::Gameplay::PlayerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::Gameplay::PlayerSettings*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Gameplay::PlayerSettings::PlayerSettings()   {
}
