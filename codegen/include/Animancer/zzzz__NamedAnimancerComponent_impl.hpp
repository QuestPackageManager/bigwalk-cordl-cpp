#pragma once
// IWYU pragma private; include "Animancer/NamedAnimancerComponent.hpp"
#include "Animancer/zzzz__AnimancerComponent_impl.hpp"
#include "UnityEngine/zzzz__AnimationClip_impl.hpp"
#include "Animancer/zzzz__NamedAnimancerComponent_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::Animancer::NamedAnimancerComponent.get_PlayAutomatically
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::Animancer::NamedAnimancerComponent::*)()>(&::Animancer::NamedAnimancerComponent::get_PlayAutomatically)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180311e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::NamedAnimancerComponent*>(),
                        {"get_PlayAutomatically", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::NamedAnimancerComponent.get_Animations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::AnimationClip>> (::Animancer::NamedAnimancerComponent::*)()>(&::Animancer::NamedAnimancerComponent::get_Animations)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::NamedAnimancerComponent*>(),
                        {"get_Animations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::NamedAnimancerComponent.set_Animations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::NamedAnimancerComponent::*)(::ArrayW<::UnityEngine::AnimationClip*>)>(&::Animancer::NamedAnimancerComponent::set_Animations)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180311e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::NamedAnimancerComponent*>(),
                        {"set_Animations", {}, {::i2c::type_of<::ArrayW<::UnityEngine::AnimationClip*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::NamedAnimancerComponent.get_DefaultAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::NamedAnimancerComponent::*)()>(&::Animancer::NamedAnimancerComponent::get_DefaultAnimation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180311de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::NamedAnimancerComponent*>(),
                        {"get_DefaultAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::NamedAnimancerComponent.set_DefaultAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::NamedAnimancerComponent::*)(::UnityEngine::AnimationClip*)>(&::Animancer::NamedAnimancerComponent::set_DefaultAnimation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180311e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::NamedAnimancerComponent*>(),
                        {"set_DefaultAnimation", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::NamedAnimancerComponent.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::NamedAnimancerComponent::*)()>(&::Animancer::NamedAnimancerComponent::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180311ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::NamedAnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::NamedAnimancerComponent*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::NamedAnimancerComponent.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::NamedAnimancerComponent::*)()>(&::Animancer::NamedAnimancerComponent::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180311d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::NamedAnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::NamedAnimancerComponent*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::NamedAnimancerComponent.GetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::NamedAnimancerComponent::*)(::UnityEngine::AnimationClip*)>(&::Animancer::NamedAnimancerComponent::GetKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::NamedAnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::NamedAnimancerComponent*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::NamedAnimancerComponent.GatherAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::NamedAnimancerComponent::*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::NamedAnimancerComponent::GatherAnimationClips)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180311cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::NamedAnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::NamedAnimancerComponent*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::NamedAnimancerComponent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::NamedAnimancerComponent::*)()>(&::Animancer::NamedAnimancerComponent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180311dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::NamedAnimancerComponent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Animancer::NamedAnimancerComponent::__cordl_internal_get__PlayAutomatically()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayAutomatically;
}
constexpr bool const& Animancer::NamedAnimancerComponent::__cordl_internal_get__PlayAutomatically() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayAutomatically;
}
constexpr void Animancer::NamedAnimancerComponent::__cordl_internal_set__PlayAutomatically(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayAutomatically = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AnimationClip>>& Animancer::NamedAnimancerComponent::__cordl_internal_get__Animations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animations;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AnimationClip>> const& Animancer::NamedAnimancerComponent::__cordl_internal_get__Animations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animations;
}
constexpr void Animancer::NamedAnimancerComponent::__cordl_internal_set__Animations(::ArrayW<::UnityW<::UnityEngine::AnimationClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animations = value;
}
inline ::by_ref<bool> Animancer::NamedAnimancerComponent::get_PlayAutomatically()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::NamedAnimancerComponent*>(),
                        {"get_PlayAutomatically", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::AnimationClip>> Animancer::NamedAnimancerComponent::get_Animations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::NamedAnimancerComponent*>(),
                        {"get_Animations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::AnimationClip>>>(this, ___internal_method);
}
inline void Animancer::NamedAnimancerComponent::set_Animations(::ArrayW<::UnityEngine::AnimationClip*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::NamedAnimancerComponent*>(),
                        {"set_Animations", {}, {::i2c::type_of<::ArrayW<::UnityEngine::AnimationClip*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::NamedAnimancerComponent::get_DefaultAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::NamedAnimancerComponent*>(),
                        {"get_DefaultAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline void Animancer::NamedAnimancerComponent::set_DefaultAnimation(::UnityEngine::AnimationClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::NamedAnimancerComponent*>(),
                        {"set_DefaultAnimation", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::NamedAnimancerComponent::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::NamedAnimancerComponent*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::NamedAnimancerComponent::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::NamedAnimancerComponent*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Animancer::NamedAnimancerComponent::GetKey(::UnityEngine::AnimationClip*  clip)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::NamedAnimancerComponent*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, clip);
}
inline void Animancer::NamedAnimancerComponent::GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::NamedAnimancerComponent*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline void Animancer::NamedAnimancerComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::NamedAnimancerComponent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::NamedAnimancerComponent* Animancer::NamedAnimancerComponent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::NamedAnimancerComponent*>());
}
// Ctor Parameters []
constexpr ::Animancer::NamedAnimancerComponent::NamedAnimancerComponent()   {
}
