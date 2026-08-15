#pragma once
// IWYU pragma private; include "Animancer/IAnimancerComponent.hpp"
#include "Animancer/zzzz__IAnimancerComponent_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__AnimatorUpdateMode_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Animancer::IAnimancerComponent.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::IAnimancerComponent::*)()>(&::Animancer::IAnimancerComponent::get_enabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::IAnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::IAnimancerComponent.get_gameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Animancer::IAnimancerComponent::*)()>(&::Animancer::IAnimancerComponent::get_gameObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::IAnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::IAnimancerComponent.get_Animator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Animator> (::Animancer::IAnimancerComponent::*)()>(&::Animancer::IAnimancerComponent::get_Animator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::IAnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::IAnimancerComponent.set_Animator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::IAnimancerComponent::*)(::UnityEngine::Animator*)>(&::Animancer::IAnimancerComponent::set_Animator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::IAnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::IAnimancerComponent.get_Playable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerPlayable* (::Animancer::IAnimancerComponent::*)()>(&::Animancer::IAnimancerComponent::get_Playable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::IAnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::IAnimancerComponent.get_IsPlayableInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::IAnimancerComponent::*)()>(&::Animancer::IAnimancerComponent::get_IsPlayableInitialized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::IAnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::IAnimancerComponent.get_ResetOnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::IAnimancerComponent::*)()>(&::Animancer::IAnimancerComponent::get_ResetOnDisable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::IAnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::IAnimancerComponent.get_UpdateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorUpdateMode (::Animancer::IAnimancerComponent::*)()>(&::Animancer::IAnimancerComponent::get_UpdateMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::IAnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::IAnimancerComponent.set_UpdateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::IAnimancerComponent::*)(::UnityEngine::AnimatorUpdateMode)>(&::Animancer::IAnimancerComponent::set_UpdateMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::IAnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::IAnimancerComponent.GetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::IAnimancerComponent::*)(::UnityEngine::AnimationClip*)>(&::Animancer::IAnimancerComponent::GetKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::IAnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 9}
                ));
    return ___internal_method;
  }
};
inline bool Animancer::IAnimancerComponent::get_enabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Animancer::IAnimancerComponent::get_gameObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Animator> Animancer::IAnimancerComponent::get_Animator()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Animator>>(this, ___internal_method);
}
inline void Animancer::IAnimancerComponent::set_Animator(::UnityEngine::Animator*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Animancer::AnimancerPlayable* Animancer::IAnimancerComponent::get_Playable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerPlayable*>(this, ___internal_method);
}
inline bool Animancer::IAnimancerComponent::get_IsPlayableInitialized()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Animancer::IAnimancerComponent::get_ResetOnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::AnimatorUpdateMode Animancer::IAnimancerComponent::get_UpdateMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorUpdateMode>(this, ___internal_method);
}
inline void Animancer::IAnimancerComponent::set_UpdateMode(::UnityEngine::AnimatorUpdateMode  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* Animancer::IAnimancerComponent::GetKey(::UnityEngine::AnimationClip*  clip)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::IAnimancerComponent*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, clip);
}
