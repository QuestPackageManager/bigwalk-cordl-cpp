#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/Effects/TouchJoystickAngleIndicator.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rewired/ComponentControls/Effects/zzzz__TouchJoystickAngleIndicator_def.hpp"
#include "Rewired/ComponentControls/zzzz__TouchJoystick_def.hpp"
#include "Rewired/UI/zzzz__IVisibilityChangedHandler_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IRegistrar_1_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.get_visible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::get_visible)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"get_visible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.set_visible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)(bool)>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::set_visible)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f79e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"set_visible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.get_targetAngleFromRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::get_targetAngleFromRotation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"get_targetAngleFromRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.set_targetAngleFromRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)(bool)>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::set_targetAngleFromRotation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f79b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"set_targetAngleFromRotation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.get_targetAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::get_targetAngle)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818f7820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"get_targetAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.set_targetAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)(float_t)>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::set_targetAngle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f79c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"set_targetAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.get_fadeWithValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::get_fadeWithValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"get_fadeWithValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.set_fadeWithValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)(bool)>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::set_fadeWithValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f0c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"set_fadeWithValue", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.get_fadeWithAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::get_fadeWithAngle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"get_fadeWithAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.set_fadeWithAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)(bool)>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::set_fadeWithAngle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f79a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"set_fadeWithAngle", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.get_fadeRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::get_fadeRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049a530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"get_fadeRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.set_fadeRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)(float_t)>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::set_fadeRange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f7980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"set_fadeRange", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.get_activeColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::get_activeColor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"get_activeColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.set_activeColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)(::UnityEngine::Color)>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::set_activeColor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18187c9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"set_activeColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.get_normalColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::get_normalColor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"get_normalColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.set_normalColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)(::UnityEngine::Color)>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::set_normalColor)> {
  constexpr static std::size_t size = 0x2a50;
  constexpr static std::size_t addrs = 0x180e94c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"set_normalColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.QNyJjbrugXBccIPiwsHcZSsjSafj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Image> (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::QNyJjbrugXBccIPiwsHcZSsjSafj)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818f7180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"QNyJjbrugXBccIPiwsHcZSsjSafj", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.mCWsrbNgpgRMuYlOuGINKdMwwypf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::mCWsrbNgpgRMuYlOuGINKdMwwypf)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818f78d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"mCWsrbNgpgRMuYlOuGINKdMwwypf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.hJOsFPfUwVRitQDcVTuoUqpPAlEkA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::hJOsFPfUwVRitQDcVTuoUqpPAlEkA)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818f7860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"hJOsFPfUwVRitQDcVTuoUqpPAlEkA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818f77d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.WkQdKaCrmGJwrRWRrekECTqSLDReb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)(::by_ref<::UnityEngine::Vector2>)>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::WkQdKaCrmGJwrRWRrekECTqSLDReb)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818f72d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"WkQdKaCrmGJwrRWRrekECTqSLDReb", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818f6ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818f7060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818f6ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::OnValidate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818f7120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.OnTransformParentChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::OnTransformParentChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f7110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"OnTransformParentChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.SwiTLyINyGhGyvUEOOoyLaEMFXJiA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)(bool, bool)>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::SwiTLyINyGhGyvUEOOoyLaEMFXJiA)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818f71d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"SwiTLyINyGhGyvUEOOoyLaEMFXJiA", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.XQPSIgWbNHuSsykiBiHYezOljYLy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)(::UnityEngine::Vector2)>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::XQPSIgWbNHuSsykiBiHYezOljYLy)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x1818f73c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"XQPSIgWbNHuSsykiBiHYezOljYLy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.fSwPnYSsLORCGYLXNfHSEaYDmybcb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::fSwPnYSsLORCGYLXNfHSEaYDmybcb)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f7810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"fSwPnYSsLORCGYLXNfHSEaYDmybcb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.kSItHRmDkJPhlxNXzfkfFjwoaqDNA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::kSItHRmDkJPhlxNXzfkfFjwoaqDNA)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f78b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"kSItHRmDkJPhlxNXzfkfFjwoaqDNA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.OdrBOdJnSDjZydUJcFrxMySjwJBLb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::OdrBOdJnSDjZydUJcFrxMySjwJBLb)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"OdrBOdJnSDjZydUJcFrxMySjwJBLb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.LKrTycttCpWjQLsdedBgVzLDioRF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::LKrTycttCpWjQLsdedBgVzLDioRF)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818f6f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"LKrTycttCpWjQLsdedBgVzLDioRF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.obFmnkyCttYRGYLnHkYDjUeFhmLw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)()>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::obFmnkyCttYRGYLnHkYDjUeFhmLw)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818f6ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"obFmnkyCttYRGYLnHkYDjUeFhmLw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.OnVisibilityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)(bool)>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::OnVisibilityChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818f7170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"OnVisibilityChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.OnTouchJoystickStickPositionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)(::UnityEngine::Vector2)>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::OnTouchJoystickStickPositionChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818f70b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"OnTouchJoystickStickPositionChanged", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator.Rewired_ComponentControls_TouchJoystick_IStickPositionChangedHandler_OnStickPositionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::*)(::UnityEngine::Vector2)>(&::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::Rewired_ComponentControls_TouchJoystick_IStickPositionChangedHandler_OnStickPositionChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818f70b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"Rewired.ComponentControls.TouchJoystick.IStickPositionChangedHandler.OnStickPositionChanged", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get__visible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visible;
}
constexpr bool const& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get__visible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visible;
}
constexpr void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_set__visible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visible = value;
}
constexpr bool& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get__targetAngleFromRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetAngleFromRotation;
}
constexpr bool const& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get__targetAngleFromRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetAngleFromRotation;
}
constexpr void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_set__targetAngleFromRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetAngleFromRotation = value;
}
constexpr float_t& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get__targetAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetAngle;
}
constexpr float_t const& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get__targetAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetAngle;
}
constexpr void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_set__targetAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetAngle = value;
}
constexpr bool& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get__fadeWithValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeWithValue;
}
constexpr bool const& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get__fadeWithValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeWithValue;
}
constexpr void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_set__fadeWithValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeWithValue = value;
}
constexpr bool& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get__fadeWithAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeWithAngle;
}
constexpr bool const& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get__fadeWithAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeWithAngle;
}
constexpr void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_set__fadeWithAngle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeWithAngle = value;
}
constexpr float_t& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get__fadeRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeRange;
}
constexpr float_t const& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get__fadeRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeRange;
}
constexpr void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_set__fadeRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeRange = value;
}
constexpr ::UnityEngine::Color& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get__activeColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeColor;
}
constexpr ::UnityEngine::Color const& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get__activeColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeColor;
}
constexpr void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_set__activeColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeColor = value;
}
constexpr ::UnityEngine::Color& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get__normalColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalColor;
}
constexpr ::UnityEngine::Color const& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get__normalColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalColor;
}
constexpr void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_set__normalColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalColor = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get_jjGBoiXyIaGuAvLEEelyRpsobhWf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jjGBoiXyIaGuAvLEEelyRpsobhWf;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get_jjGBoiXyIaGuAvLEEelyRpsobhWf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jjGBoiXyIaGuAvLEEelyRpsobhWf;
}
constexpr void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_set_jjGBoiXyIaGuAvLEEelyRpsobhWf(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jjGBoiXyIaGuAvLEEelyRpsobhWf = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get_apgtxvbpLxitptmPeyuSXMfzRbLf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apgtxvbpLxitptmPeyuSXMfzRbLf;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get_apgtxvbpLxitptmPeyuSXMfzRbLf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apgtxvbpLxitptmPeyuSXMfzRbLf;
}
constexpr void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_set_apgtxvbpLxitptmPeyuSXMfzRbLf(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___apgtxvbpLxitptmPeyuSXMfzRbLf = value;
}
constexpr ::UnityEngine::Vector2& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get_mdZYkPkWVRoPwOCNrdljgmSgtHnEA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mdZYkPkWVRoPwOCNrdljgmSgtHnEA;
}
constexpr ::UnityEngine::Vector2 const& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get_mdZYkPkWVRoPwOCNrdljgmSgtHnEA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mdZYkPkWVRoPwOCNrdljgmSgtHnEA;
}
constexpr void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_set_mdZYkPkWVRoPwOCNrdljgmSgtHnEA(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mdZYkPkWVRoPwOCNrdljgmSgtHnEA = value;
}
constexpr bool& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get_ZqnDCfONipJShFBpEppqsoLpZVSf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZqnDCfONipJShFBpEppqsoLpZVSf;
}
constexpr bool const& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get_ZqnDCfONipJShFBpEppqsoLpZVSf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZqnDCfONipJShFBpEppqsoLpZVSf;
}
constexpr void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_set_ZqnDCfONipJShFBpEppqsoLpZVSf(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZqnDCfONipJShFBpEppqsoLpZVSf = value;
}
constexpr ::Rewired::Utils::Interfaces::IRegistrar_1<::UnityW<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>>*& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get_iAedVxLAKSZeGCgPFpYGHiMkeFpU()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iAedVxLAKSZeGCgPFpYGHiMkeFpU;
}
constexpr ::Rewired::Utils::Interfaces::IRegistrar_1<::UnityW<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>>* const& Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_get_iAedVxLAKSZeGCgPFpYGHiMkeFpU() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iAedVxLAKSZeGCgPFpYGHiMkeFpU;
}
constexpr void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::__cordl_internal_set_iAedVxLAKSZeGCgPFpYGHiMkeFpU(::Rewired::Utils::Interfaces::IRegistrar_1<::UnityW<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iAedVxLAKSZeGCgPFpYGHiMkeFpU = value;
}
inline bool Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::get_visible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"get_visible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::set_visible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"set_visible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::get_targetAngleFromRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"get_targetAngleFromRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::set_targetAngleFromRotation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"set_targetAngleFromRotation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::get_targetAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"get_targetAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::set_targetAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"set_targetAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::get_fadeWithValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"get_fadeWithValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::set_fadeWithValue(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"set_fadeWithValue", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::get_fadeWithAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"get_fadeWithAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::set_fadeWithAngle(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"set_fadeWithAngle", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::get_fadeRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"get_fadeRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::set_fadeRange(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"set_fadeRange", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::get_activeColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"get_activeColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::set_activeColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"set_activeColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::get_normalColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"get_normalColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::set_normalColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"set_normalColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Image> Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::QNyJjbrugXBccIPiwsHcZSsjSafj()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"QNyJjbrugXBccIPiwsHcZSsjSafj", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Image>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Sprite> Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::mCWsrbNgpgRMuYlOuGINKdMwwypf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"mCWsrbNgpgRMuYlOuGINKdMwwypf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RectTransform> Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::hJOsFPfUwVRitQDcVTuoUqpPAlEkA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"hJOsFPfUwVRitQDcVTuoUqpPAlEkA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::WkQdKaCrmGJwrRWRrekECTqSLDReb(::by_ref<::UnityEngine::Vector2>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"WkQdKaCrmGJwrRWRrekECTqSLDReb", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::OnTransformParentChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"OnTransformParentChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::SwiTLyINyGhGyvUEOOoyLaEMFXJiA(bool  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"SwiTLyINyGhGyvUEOOoyLaEMFXJiA", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::XQPSIgWbNHuSsykiBiHYezOljYLy(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"XQPSIgWbNHuSsykiBiHYezOljYLy", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::fSwPnYSsLORCGYLXNfHSEaYDmybcb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"fSwPnYSsLORCGYLXNfHSEaYDmybcb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::kSItHRmDkJPhlxNXzfkfFjwoaqDNA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"kSItHRmDkJPhlxNXzfkfFjwoaqDNA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::OdrBOdJnSDjZydUJcFrxMySjwJBLb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"OdrBOdJnSDjZydUJcFrxMySjwJBLb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::LKrTycttCpWjQLsdedBgVzLDioRF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"LKrTycttCpWjQLsdedBgVzLDioRF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::obFmnkyCttYRGYLnHkYDjUeFhmLw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"obFmnkyCttYRGYLnHkYDjUeFhmLw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::OnVisibilityChanged(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"OnVisibilityChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::OnTouchJoystickStickPositionChanged(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"OnTouchJoystickStickPositionChanged", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::Rewired_ComponentControls_TouchJoystick_IStickPositionChangedHandler_OnStickPositionChanged(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>(),
                        {"Rewired.ComponentControls.TouchJoystick.IStickPositionChangedHandler.OnStickPositionChanged", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator* Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*>());
}
/// @brief Convert operator to "::Rewired::UI::IVisibilityChangedHandler"
constexpr  Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::operator ::Rewired::UI::IVisibilityChangedHandler*() noexcept {
return static_cast<::Rewired::UI::IVisibilityChangedHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::UI::IVisibilityChangedHandler"
constexpr ::Rewired::UI::IVisibilityChangedHandler* Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::i___Rewired__UI__IVisibilityChangedHandler() noexcept {
return static_cast<::Rewired::UI::IVisibilityChangedHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler"
constexpr  Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::operator ::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*() noexcept {
return static_cast<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler"
constexpr ::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler* Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::i___Rewired__ComponentControls__TouchJoystick_IStickPositionChangedHandler() noexcept {
return static_cast<::Rewired::ComponentControls::TouchJoystick_IStickPositionChangedHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator::TouchJoystickAngleIndicator()   {
}
