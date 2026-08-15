#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCameraMinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerCameraMinder_def.hpp"
#include "GlobalNamespace/zzzz__ListenerMover_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCameraMinder_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCameraReferences_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRendererData_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCameraMinder___c::*)()>(&::GlobalNamespace::PlayerCameraMinder___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder___c._SetWorldUIFOV_b__36_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerCameraMinder___c::*)(::UnityEngine::Rendering::Universal::ScriptableRendererFeature*)>(&::GlobalNamespace::PlayerCameraMinder___c::_SetWorldUIFOV_b__36_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18046cea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder___c*>(),
                        {"<SetWorldUIFOV>b__36_0", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerCameraMinder___c::setStaticF___9(::GlobalNamespace::PlayerCameraMinder___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PlayerCameraMinder___c*, "<>9", ::GlobalNamespace::PlayerCameraMinder___c*>(std::forward<::GlobalNamespace::PlayerCameraMinder___c*>(value));
}
inline ::GlobalNamespace::PlayerCameraMinder___c* GlobalNamespace::PlayerCameraMinder___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PlayerCameraMinder___c*, "<>9", ::GlobalNamespace::PlayerCameraMinder___c*>();
}
inline void GlobalNamespace::PlayerCameraMinder___c::setStaticF___9__36_0(::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*, "<>9__36_0", ::GlobalNamespace::PlayerCameraMinder___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* GlobalNamespace::PlayerCameraMinder___c::getStaticF___9__36_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*, "<>9__36_0", ::GlobalNamespace::PlayerCameraMinder___c*>();
}
inline void GlobalNamespace::PlayerCameraMinder___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerCameraMinder___c::_SetWorldUIFOV_b__36_0(::UnityEngine::Rendering::Universal::ScriptableRendererFeature*  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder___c*>(),
                        {"<SetWorldUIFOV>b__36_0", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, f);
}
inline ::GlobalNamespace::PlayerCameraMinder___c* GlobalNamespace::PlayerCameraMinder___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerCameraMinder___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerCameraMinder___c::PlayerCameraMinder___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder.set_cameraGuide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCameraMinder::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::PlayerCameraMinder::set_cameraGuide)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x180460d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"set_cameraGuide", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder.get_cameraMoveScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerCameraMinder::*)()>(&::GlobalNamespace::PlayerCameraMinder::get_cameraMoveScalar)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"get_cameraMoveScalar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCameraMinder::*)()>(&::GlobalNamespace::PlayerCameraMinder::Awake)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18045fed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCameraMinder::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerCameraMinder::Initialize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180460210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder.HardRefreshLightingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCameraMinder::*)()>(&::GlobalNamespace::PlayerCameraMinder::HardRefreshLightingState)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804601e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"HardRefreshLightingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder.SetZoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCameraMinder::*)(float_t)>(&::GlobalNamespace::PlayerCameraMinder::SetZoom)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804606d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"SetZoom", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCameraMinder::*)()>(&::GlobalNamespace::PlayerCameraMinder::Update)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x180460840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder.ResetZoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCameraMinder::*)()>(&::GlobalNamespace::PlayerCameraMinder::ResetZoom)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180460240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"ResetZoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder.ScaleVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCameraMinder::*)(::UnityEngine::Vector2, ::by_ref<::UnityEngine::Vector2>)>(&::GlobalNamespace::PlayerCameraMinder::ScaleVelocity)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1804603c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"ScaleVelocity", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder.ClampHeadIfFixed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCameraMinder::*)(::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::PlayerCameraMinder::ClampHeadIfFixed)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18045ff10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"ClampHeadIfFixed", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder.SetHeadFixed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCameraMinder::*)(float_t, float_t)>(&::GlobalNamespace::PlayerCameraMinder::SetHeadFixed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180460500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"SetHeadFixed", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder.ClearHeadFixed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCameraMinder::*)()>(&::GlobalNamespace::PlayerCameraMinder::ClearHeadFixed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"ClearHeadFixed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder.TakeCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCameraMinder::*)()>(&::GlobalNamespace::PlayerCameraMinder::TakeCamera)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180460740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"TakeCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder.ReturnCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCameraMinder::*)()>(&::GlobalNamespace::PlayerCameraMinder::ReturnCamera)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1804602b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"ReturnCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder.GetRelativeHeadRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::PlayerCameraMinder::*)(::UnityEngine::Quaternion)>(&::GlobalNamespace::PlayerCameraMinder::GetRelativeHeadRotation)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180460000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"GetRelativeHeadRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder.SetWorldUIFOV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCameraMinder::*)(float_t)>(&::GlobalNamespace::PlayerCameraMinder::SetWorldUIFOV)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180460560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"SetWorldUIFOV", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCameraMinder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCameraMinder::*)()>(&::GlobalNamespace::PlayerCameraMinder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180460d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ListenerMover>& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_listenerMover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerMover;
}
constexpr ::UnityW<::GlobalNamespace::ListenerMover> const& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_listenerMover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerMover;
}
constexpr void GlobalNamespace::PlayerCameraMinder::__cordl_internal_set_listenerMover(::UnityW<::GlobalNamespace::ListenerMover>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listenerMover = value;
}
constexpr float_t& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_magnetFloor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnetFloor;
}
constexpr float_t const& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_magnetFloor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnetFloor;
}
constexpr void GlobalNamespace::PlayerCameraMinder::__cordl_internal_set_magnetFloor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___magnetFloor = value;
}
constexpr float_t& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_magnetDirectionFloor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnetDirectionFloor;
}
constexpr float_t const& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_magnetDirectionFloor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnetDirectionFloor;
}
constexpr void GlobalNamespace::PlayerCameraMinder::__cordl_internal_set_magnetDirectionFloor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___magnetDirectionFloor = value;
}
constexpr float_t& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_magnetMinScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnetMinScale;
}
constexpr float_t const& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_magnetMinScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnetMinScale;
}
constexpr void GlobalNamespace::PlayerCameraMinder::__cordl_internal_set_magnetMinScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___magnetMinScale = value;
}
constexpr float_t& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_magnetMaxScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnetMaxScale;
}
constexpr float_t const& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_magnetMaxScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnetMaxScale;
}
constexpr void GlobalNamespace::PlayerCameraMinder::__cordl_internal_set_magnetMaxScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___magnetMaxScale = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerCameraMinder::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr float_t& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_baseFieldOfView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseFieldOfView;
}
constexpr float_t const& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_baseFieldOfView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseFieldOfView;
}
constexpr void GlobalNamespace::PlayerCameraMinder::__cordl_internal_set_baseFieldOfView(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseFieldOfView = value;
}
constexpr float_t& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_zoomLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoomLevel;
}
constexpr float_t const& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_zoomLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoomLevel;
}
constexpr void GlobalNamespace::PlayerCameraMinder::__cordl_internal_set_zoomLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoomLevel = value;
}
constexpr ::UnityEngine::Gradient*& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_ambientLightForCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientLightForCamera;
}
constexpr ::UnityEngine::Gradient* const& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_ambientLightForCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientLightForCamera;
}
constexpr void GlobalNamespace::PlayerCameraMinder::__cordl_internal_set_ambientLightForCamera(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientLightForCamera = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get__cameraGuide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraGuide;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get__cameraGuide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraGuide;
}
constexpr void GlobalNamespace::PlayerCameraMinder::__cordl_internal_set__cameraGuide(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraGuide = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRendererData>& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_universalRendererData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___universalRendererData;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRendererData> const& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_universalRendererData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___universalRendererData;
}
constexpr void GlobalNamespace::PlayerCameraMinder::__cordl_internal_set_universalRendererData(::UnityW<::UnityEngine::Rendering::Universal::UniversalRendererData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___universalRendererData = value;
}
constexpr bool& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_headIsFixed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headIsFixed;
}
constexpr bool const& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_headIsFixed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headIsFixed;
}
constexpr void GlobalNamespace::PlayerCameraMinder::__cordl_internal_set_headIsFixed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headIsFixed = value;
}
constexpr float_t& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_fixedYCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedYCenter;
}
constexpr float_t const& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_fixedYCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedYCenter;
}
constexpr void GlobalNamespace::PlayerCameraMinder::__cordl_internal_set_fixedYCenter(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fixedYCenter = value;
}
constexpr float_t& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_fixedHeadRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedHeadRange;
}
constexpr float_t const& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_fixedHeadRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedHeadRange;
}
constexpr void GlobalNamespace::PlayerCameraMinder::__cordl_internal_set_fixedHeadRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fixedHeadRange = value;
}
constexpr float_t& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr float_t const& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void GlobalNamespace::PlayerCameraMinder::__cordl_internal_set_value(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
constexpr float_t& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_saturationScalar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saturationScalar;
}
constexpr float_t const& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_saturationScalar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saturationScalar;
}
constexpr void GlobalNamespace::PlayerCameraMinder::__cordl_internal_set_saturationScalar(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saturationScalar = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCameraReferences>& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_playerCameraReferences()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCameraReferences;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCameraReferences> const& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get_playerCameraReferences() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCameraReferences;
}
constexpr void GlobalNamespace::PlayerCameraMinder::__cordl_internal_set_playerCameraReferences(::UnityW<::GlobalNamespace::PlayerCameraReferences>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCameraReferences = value;
}
constexpr float_t& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get__worldUIFOV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldUIFOV;
}
constexpr float_t const& GlobalNamespace::PlayerCameraMinder::__cordl_internal_get__worldUIFOV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worldUIFOV;
}
constexpr void GlobalNamespace::PlayerCameraMinder::__cordl_internal_set__worldUIFOV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worldUIFOV = value;
}
inline void GlobalNamespace::PlayerCameraMinder::setStaticF_fovFromSettings(float_t  value)  {
::cordl_internals::setStaticField<float_t, "fovFromSettings", ::GlobalNamespace::PlayerCameraMinder*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::PlayerCameraMinder::getStaticF_fovFromSettings()  {
return ::cordl_internals::getStaticField<float_t, "fovFromSettings", ::GlobalNamespace::PlayerCameraMinder*>();
}
inline void GlobalNamespace::PlayerCameraMinder::set_cameraGuide(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"set_cameraGuide", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::PlayerCameraMinder::get_cameraMoveScalar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"get_cameraMoveScalar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCameraMinder::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCameraMinder::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerCameraMinder::HardRefreshLightingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"HardRefreshLightingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCameraMinder::SetZoom(float_t  zoom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"SetZoom", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zoom);
}
inline void GlobalNamespace::PlayerCameraMinder::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCameraMinder::ResetZoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"ResetZoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCameraMinder::ScaleVelocity(::UnityEngine::Vector2  head, ::by_ref<::UnityEngine::Vector2>  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"ScaleVelocity", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, head, velocity);
}
inline void GlobalNamespace::PlayerCameraMinder::ClampHeadIfFixed(::by_ref<float_t>  headX, ::by_ref<float_t>  headY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"ClampHeadIfFixed", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headX, headY);
}
inline void GlobalNamespace::PlayerCameraMinder::SetHeadFixed(float_t  yCenter, float_t  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"SetHeadFixed", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, yCenter, range);
}
inline void GlobalNamespace::PlayerCameraMinder::ClearHeadFixed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"ClearHeadFixed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCameraMinder::TakeCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"TakeCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCameraMinder::ReturnCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"ReturnCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::PlayerCameraMinder::GetRelativeHeadRotation(::UnityEngine::Quaternion  guideRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"GetRelativeHeadRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, guideRotation);
}
inline void GlobalNamespace::PlayerCameraMinder::SetWorldUIFOV(float_t  fov)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {"SetWorldUIFOV", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fov);
}
inline void GlobalNamespace::PlayerCameraMinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCameraMinder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerCameraMinder* GlobalNamespace::PlayerCameraMinder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerCameraMinder*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerCameraMinder::PlayerCameraMinder()   {
}
