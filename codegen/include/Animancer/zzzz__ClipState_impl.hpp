#pragma once
// IWYU pragma private; include "Animancer/ClipState.hpp"
#include "Animancer/zzzz__AnimancerState_impl.hpp"
#include "Animancer/zzzz__ClipState_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__ClipState_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::ClipState*>"
constexpr  Animancer::ClipState_ITransition::operator ::Animancer::ITransition_1<::Animancer::ClipState*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::ClipState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::ClipState*>"
constexpr ::Animancer::ITransition_1<::Animancer::ClipState*>* Animancer::ClipState_ITransition::i___Animancer__ITransition_1___Animancer__ClipState__() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::ClipState*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::ClipState_ITransition::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::ClipState_ITransition::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::ClipState_ITransition::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::ClipState_ITransition::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::ClipState_ITransition::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::ClipState_ITransition::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::Animancer::ClipState.get_Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::ClipState::*)()>(&::Animancer::ClipState::get_Clip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipState*>(),
                    {::i2c::class_of<::Animancer::ClipState*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipState.set_Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipState::*)(::UnityEngine::AnimationClip*)>(&::Animancer::ClipState::set_Clip)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802ec7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipState*>(),
                    {::i2c::class_of<::Animancer::ClipState*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipState.get_MainObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Animancer::ClipState::*)()>(&::Animancer::ClipState::get_MainObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipState*>(),
                    {::i2c::class_of<::Animancer::ClipState*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipState.set_MainObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipState::*)(::UnityEngine::Object*)>(&::Animancer::ClipState::set_MainObject)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180305f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipState*>(),
                    {::i2c::class_of<::Animancer::ClipState*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipState.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::ClipState::*)()>(&::Animancer::ClipState::get_Length)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180305e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipState*>(),
                    {::i2c::class_of<::Animancer::ClipState*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipState.get_IsLooping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ClipState::*)()>(&::Animancer::ClipState::get_IsLooping)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180305e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipState*>(),
                    {::i2c::class_of<::Animancer::ClipState*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipState.get_AverageVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::ClipState::*)()>(&::Animancer::ClipState::get_AverageVelocity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180305e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipState*>(),
                    {::i2c::class_of<::Animancer::ClipState*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipState.get_ApplyAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ClipState::*)()>(&::Animancer::ClipState::get_ApplyAnimatorIK)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180305d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipState*>(),
                    {::i2c::class_of<::Animancer::ClipState*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipState.set_ApplyAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipState::*)(bool)>(&::Animancer::ClipState::set_ApplyAnimatorIK)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180305eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipState*>(),
                    {::i2c::class_of<::Animancer::ClipState*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipState.get_ApplyFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ClipState::*)()>(&::Animancer::ClipState::get_ApplyFootIK)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180305db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipState*>(),
                    {::i2c::class_of<::Animancer::ClipState*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipState.set_ApplyFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipState::*)(bool)>(&::Animancer::ClipState::set_ApplyFootIK)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180305f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipState*>(),
                    {::i2c::class_of<::Animancer::ClipState*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipState::*)(::UnityEngine::AnimationClip*)>(&::Animancer::ClipState::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180305d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipState.CreatePlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipState::*)(::by_ref<::UnityEngine::Playables::Playable>)>(&::Animancer::ClipState::CreatePlayable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180305c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipState*>(),
                    {::i2c::class_of<::Animancer::ClipState*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipState.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipState::*)()>(&::Animancer::ClipState::Destroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180305cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipState*>(),
                    {::i2c::class_of<::Animancer::ClipState*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipState.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::ClipState::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::ClipState::Clone)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180305be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipState*>(),
                    {::i2c::class_of<::Animancer::ClipState*>(), 59}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::ClipState::__cordl_internal_get__Clip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Clip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::ClipState::__cordl_internal_get__Clip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Clip;
}
constexpr void Animancer::ClipState::__cordl_internal_set__Clip(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Clip = value;
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::ClipState::get_Clip()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipState*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline void Animancer::ClipState::set_Clip(::UnityEngine::AnimationClip*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipState*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Object> Animancer::ClipState::get_MainObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipState*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline void Animancer::ClipState::set_MainObject(::UnityEngine::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipState*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::ClipState::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipState*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Animancer::ClipState::get_IsLooping()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipState*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Animancer::ClipState::get_AverageVelocity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipState*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool Animancer::ClipState::get_ApplyAnimatorIK()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipState*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::ClipState::set_ApplyAnimatorIK(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipState*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::ClipState::get_ApplyFootIK()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipState*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::ClipState::set_ApplyFootIK(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipState*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::ClipState::_ctor(::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void Animancer::ClipState::CreatePlayable(::by_ref<::UnityEngine::Playables::Playable>  playable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipState*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void Animancer::ClipState::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipState*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::AnimancerState* Animancer::ClipState::Clone(::Animancer::AnimancerPlayable*  root)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipState*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, root);
}
inline ::Animancer::ClipState* Animancer::ClipState::New_ctor(::UnityEngine::AnimationClip*  clip)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::ClipState*>(clip));
}
// Ctor Parameters []
constexpr ::Animancer::ClipState::ClipState()   {
}
