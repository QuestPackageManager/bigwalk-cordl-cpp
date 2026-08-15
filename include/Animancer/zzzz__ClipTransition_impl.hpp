#pragma once
// IWYU pragma private; include "Animancer/ClipTransition.hpp"
#include "Animancer/zzzz__AnimancerTransition_1_impl.hpp"
#include "Animancer/zzzz__ClipTransition_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__ClipState_def.hpp"
#include "Animancer/zzzz__FadeMode_def.hpp"
#include "Animancer/zzzz__IAnimationClipCollection_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IMotion_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Animancer::ClipTransition.get_Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::ClipTransition::*)()>(&::Animancer::ClipTransition::get_Clip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransition*>(),
                        {"get_Clip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition.set_Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipTransition::*)(::UnityEngine::AnimationClip*)>(&::Animancer::ClipTransition::set_Clip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransition*>(),
                        {"set_Clip", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition.get_MainObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Animancer::ClipTransition::*)()>(&::Animancer::ClipTransition::get_MainObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransition*>(),
                    {::i2c::class_of<::Animancer::ClipTransition*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::ClipTransition::*)()>(&::Animancer::ClipTransition::get_Key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransition*>(),
                    {::i2c::class_of<::Animancer::ClipTransition*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition.get_Speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::ClipTransition::*)()>(&::Animancer::ClipTransition::get_Speed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransition*>(),
                    {::i2c::class_of<::Animancer::ClipTransition*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition.set_Speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipTransition::*)(float_t)>(&::Animancer::ClipTransition::set_Speed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransition*>(),
                    {::i2c::class_of<::Animancer::ClipTransition*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition.get_NormalizedStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::ClipTransition::*)()>(&::Animancer::ClipTransition::get_NormalizedStartTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransition*>(),
                    {::i2c::class_of<::Animancer::ClipTransition*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition.set_NormalizedStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipTransition::*)(float_t)>(&::Animancer::ClipTransition::set_NormalizedStartTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180307250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransition*>(),
                    {::i2c::class_of<::Animancer::ClipTransition*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition.get_FadeMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::FadeMode (::Animancer::ClipTransition::*)()>(&::Animancer::ClipTransition::get_FadeMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803070a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransition*>(),
                    {::i2c::class_of<::Animancer::ClipTransition*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::ClipTransition::*)()>(&::Animancer::ClipTransition::get_Length)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180307140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransition*>(),
                    {::i2c::class_of<::Animancer::ClipTransition*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ClipTransition::*)()>(&::Animancer::ClipTransition::get_IsValid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180307100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransition*>(),
                    {::i2c::class_of<::Animancer::ClipTransition*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition.get_IsLooping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ClipTransition::*)()>(&::Animancer::ClipTransition::get_IsLooping)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803070c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransition*>(),
                    {::i2c::class_of<::Animancer::ClipTransition*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition.get_MaximumDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::ClipTransition::*)()>(&::Animancer::ClipTransition::get_MaximumDuration)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180307210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransition*>(),
                    {::i2c::class_of<::Animancer::ClipTransition*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition.get_AverageAngularSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::ClipTransition::*)()>(&::Animancer::ClipTransition::get_AverageAngularSpeed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180306ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransition*>(),
                    {::i2c::class_of<::Animancer::ClipTransition*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition.get_AverageVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::ClipTransition::*)()>(&::Animancer::ClipTransition::get_AverageVelocity)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180307030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransition*>(),
                    {::i2c::class_of<::Animancer::ClipTransition*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition.CreateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ClipState* (::Animancer::ClipTransition::*)()>(&::Animancer::ClipTransition::CreateState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180306f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransition*>(),
                    {::i2c::class_of<::Animancer::ClipTransition*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipTransition::*)(::Animancer::AnimancerState*)>(&::Animancer::ClipTransition::Apply)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180306e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransition*>(),
                    {::i2c::class_of<::Animancer::ClipTransition*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition.GatherAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipTransition::*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::ClipTransition::GatherAnimationClips)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180306fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransition*>(),
                    {::i2c::class_of<::Animancer::ClipTransition*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipTransition::*)(::Animancer::ClipTransition*)>(&::Animancer::ClipTransition::CopyFrom)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180306ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransition*>(),
                    {::i2c::class_of<::Animancer::ClipTransition*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipTransition::*)()>(&::Animancer::ClipTransition::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180306fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::ClipTransition::__cordl_internal_get__Clip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Clip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::ClipTransition::__cordl_internal_get__Clip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Clip;
}
constexpr void Animancer::ClipTransition::__cordl_internal_set__Clip(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Clip = value;
}
constexpr float_t& Animancer::ClipTransition::__cordl_internal_get__Speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Speed;
}
constexpr float_t const& Animancer::ClipTransition::__cordl_internal_get__Speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Speed;
}
constexpr void Animancer::ClipTransition::__cordl_internal_set__Speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Speed = value;
}
constexpr float_t& Animancer::ClipTransition::__cordl_internal_get__NormalizedStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NormalizedStartTime;
}
constexpr float_t const& Animancer::ClipTransition::__cordl_internal_get__NormalizedStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NormalizedStartTime;
}
constexpr void Animancer::ClipTransition::__cordl_internal_set__NormalizedStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NormalizedStartTime = value;
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::ClipTransition::get_Clip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransition*>(),
                        {"get_Clip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline void Animancer::ClipTransition::set_Clip(::UnityEngine::AnimationClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransition*>(),
                        {"set_Clip", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Object> Animancer::ClipTransition::get_MainObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransition*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::System::Object* Animancer::ClipTransition::get_Key()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransition*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline float_t Animancer::ClipTransition::get_Speed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransition*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::ClipTransition::set_Speed(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransition*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::ClipTransition::get_NormalizedStartTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransition*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::ClipTransition::set_NormalizedStartTime(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransition*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Animancer::FadeMode Animancer::ClipTransition::get_FadeMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransition*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::FadeMode>(this, ___internal_method);
}
inline float_t Animancer::ClipTransition::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransition*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Animancer::ClipTransition::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransition*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Animancer::ClipTransition::get_IsLooping()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransition*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Animancer::ClipTransition::get_MaximumDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransition*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Animancer::ClipTransition::get_AverageAngularSpeed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransition*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Animancer::ClipTransition::get_AverageVelocity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransition*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::Animancer::ClipState* Animancer::ClipTransition::CreateState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransition*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ClipState*>(this, ___internal_method);
}
inline void Animancer::ClipTransition::Apply(::Animancer::AnimancerState*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransition*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Animancer::ClipTransition::GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransition*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline void Animancer::ClipTransition::CopyFrom(::Animancer::ClipTransition*  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransition*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline void Animancer::ClipTransition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::ClipTransition* Animancer::ClipTransition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::ClipTransition*>());
}
/// @brief Convert operator to "::Animancer::ClipState_ITransition"
constexpr  Animancer::ClipTransition::operator ::Animancer::ClipState_ITransition*() noexcept {
return static_cast<::Animancer::ClipState_ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ClipState_ITransition"
constexpr ::Animancer::ClipState_ITransition* Animancer::ClipTransition::i___Animancer__ClipState_ITransition() noexcept {
return static_cast<::Animancer::ClipState_ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::ClipState*>"
constexpr  Animancer::ClipTransition::operator ::Animancer::ITransition_1<::Animancer::ClipState*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::ClipState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::ClipState*>"
constexpr ::Animancer::ITransition_1<::Animancer::ClipState*>* Animancer::ClipTransition::i___Animancer__ITransition_1___Animancer__ClipState__() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::ClipState*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::ClipTransition::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::ClipTransition::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::ClipTransition::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::ClipTransition::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::ClipTransition::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::ClipTransition::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IMotion"
constexpr  Animancer::ClipTransition::operator ::Animancer::IMotion*() noexcept {
return static_cast<::Animancer::IMotion*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IMotion"
constexpr ::Animancer::IMotion* Animancer::ClipTransition::i___Animancer__IMotion() noexcept {
return static_cast<::Animancer::IMotion*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
constexpr  Animancer::ClipTransition::operator ::Animancer::IAnimationClipCollection*() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IAnimationClipCollection"
constexpr ::Animancer::IAnimationClipCollection* Animancer::ClipTransition::i___Animancer__IAnimationClipCollection() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::ClipTransition*>"
constexpr  Animancer::ClipTransition::operator ::Animancer::ICopyable_1<::Animancer::ClipTransition*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::ClipTransition*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::ClipTransition*>"
constexpr ::Animancer::ICopyable_1<::Animancer::ClipTransition*>* Animancer::ClipTransition::i___Animancer__ICopyable_1___Animancer__ClipTransition__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::ClipTransition*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::ClipTransition::ClipTransition()   {
}
