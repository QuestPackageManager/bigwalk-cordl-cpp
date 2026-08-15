#pragma once
// IWYU pragma private; include "Animancer/SoloAnimation.hpp"
#include "UnityEngine/Animations/zzzz__AnimationClipPlayable_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/zzzz__SoloAnimation_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__IAnimationClipSource_def.hpp"
//  Writing Method size for method: ::Animancer::SoloAnimation.get_Animator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Animator> (::Animancer::SoloAnimation::*)()>(&::Animancer::SoloAnimation::get_Animator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"get_Animator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.set_Animator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SoloAnimation::*)(::UnityEngine::Animator*)>(&::Animancer::SoloAnimation::set_Animator)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803152d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"set_Animator", {}, {::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.get_Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::SoloAnimation::*)()>(&::Animancer::SoloAnimation::get_Clip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"get_Clip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.set_Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SoloAnimation::*)(::UnityEngine::AnimationClip*)>(&::Animancer::SoloAnimation::set_Clip)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180315310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"set_Clip", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.get_StopOnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::SoloAnimation::*)()>(&::Animancer::SoloAnimation::get_StopOnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180315270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"get_StopOnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.set_StopOnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SoloAnimation::*)(bool)>(&::Animancer::SoloAnimation::set_StopOnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803154b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"set_StopOnDisable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.get_IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::SoloAnimation::*)()>(&::Animancer::SoloAnimation::get_IsPlaying)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.set_IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SoloAnimation::*)(bool)>(&::Animancer::SoloAnimation::set_IsPlaying)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180315360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"set_IsPlaying", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.get_Speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::SoloAnimation::*)()>(&::Animancer::SoloAnimation::get_Speed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180315260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"get_Speed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.set_Speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SoloAnimation::*)(float_t)>(&::Animancer::SoloAnimation::set_Speed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180315410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"set_Speed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.get_FootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::SoloAnimation::*)()>(&::Animancer::SoloAnimation::get_FootIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803151e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"get_FootIK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.set_FootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SoloAnimation::*)(bool)>(&::Animancer::SoloAnimation::set_FootIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180315350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"set_FootIK", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.get_Time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::SoloAnimation::*)()>(&::Animancer::SoloAnimation::get_Time)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803152a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"get_Time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.set_Time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SoloAnimation::*)(float_t)>(&::Animancer::SoloAnimation::set_Time)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803154e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"set_Time", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.get_NormalizedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::SoloAnimation::*)()>(&::Animancer::SoloAnimation::get_NormalizedTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180315200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"get_NormalizedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.set_NormalizedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SoloAnimation::*)(float_t)>(&::Animancer::SoloAnimation::set_NormalizedTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803153c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"set_NormalizedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::SoloAnimation::*)()>(&::Animancer::SoloAnimation::get_IsInitialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803151f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SoloAnimation::*)()>(&::Animancer::SoloAnimation::Play)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180314f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SoloAnimation::*)(::UnityEngine::AnimationClip*)>(&::Animancer::SoloAnimation::Play)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180315010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SoloAnimation::*)()>(&::Animancer::SoloAnimation::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180314ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::SoloAnimation*>(),
                    {::i2c::class_of<::Animancer::SoloAnimation*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SoloAnimation::*)()>(&::Animancer::SoloAnimation::Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180315120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::SoloAnimation*>(),
                    {::i2c::class_of<::Animancer::SoloAnimation*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SoloAnimation::*)()>(&::Animancer::SoloAnimation::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180314e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::SoloAnimation*>(),
                    {::i2c::class_of<::Animancer::SoloAnimation*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SoloAnimation::*)()>(&::Animancer::SoloAnimation::OnDestroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180314e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::SoloAnimation*>(),
                    {::i2c::class_of<::Animancer::SoloAnimation*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation.GetAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SoloAnimation::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::SoloAnimation::GetAnimationClips)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180314d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"GetAnimationClips", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SoloAnimation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SoloAnimation::*)()>(&::Animancer::SoloAnimation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803151d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animator>& Animancer::SoloAnimation::__cordl_internal_get__Animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Animancer::SoloAnimation::__cordl_internal_get__Animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animator;
}
constexpr void Animancer::SoloAnimation::__cordl_internal_set__Animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animator = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::SoloAnimation::__cordl_internal_get__Clip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Clip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::SoloAnimation::__cordl_internal_get__Clip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Clip;
}
constexpr void Animancer::SoloAnimation::__cordl_internal_set__Clip(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Clip = value;
}
constexpr ::UnityEngine::Playables::PlayableGraph& Animancer::SoloAnimation::__cordl_internal_get__Graph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Graph;
}
constexpr ::UnityEngine::Playables::PlayableGraph const& Animancer::SoloAnimation::__cordl_internal_get__Graph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Graph;
}
constexpr void Animancer::SoloAnimation::__cordl_internal_set__Graph(::UnityEngine::Playables::PlayableGraph  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Graph = value;
}
constexpr ::UnityEngine::Animations::AnimationClipPlayable& Animancer::SoloAnimation::__cordl_internal_get__Playable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Playable;
}
constexpr ::UnityEngine::Animations::AnimationClipPlayable const& Animancer::SoloAnimation::__cordl_internal_get__Playable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Playable;
}
constexpr void Animancer::SoloAnimation::__cordl_internal_set__Playable(::UnityEngine::Animations::AnimationClipPlayable  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Playable = value;
}
constexpr bool& Animancer::SoloAnimation::__cordl_internal_get__IsPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPlaying;
}
constexpr bool const& Animancer::SoloAnimation::__cordl_internal_get__IsPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPlaying;
}
constexpr void Animancer::SoloAnimation::__cordl_internal_set__IsPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsPlaying = value;
}
constexpr float_t& Animancer::SoloAnimation::__cordl_internal_get__Speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Speed;
}
constexpr float_t const& Animancer::SoloAnimation::__cordl_internal_get__Speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Speed;
}
constexpr void Animancer::SoloAnimation::__cordl_internal_set__Speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Speed = value;
}
constexpr bool& Animancer::SoloAnimation::__cordl_internal_get__FootIK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FootIK;
}
constexpr bool const& Animancer::SoloAnimation::__cordl_internal_get__FootIK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FootIK;
}
constexpr void Animancer::SoloAnimation::__cordl_internal_set__FootIK(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FootIK = value;
}
inline ::UnityW<::UnityEngine::Animator> Animancer::SoloAnimation::get_Animator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"get_Animator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Animator>>(this, ___internal_method);
}
inline void Animancer::SoloAnimation::set_Animator(::UnityEngine::Animator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"set_Animator", {}, {::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::SoloAnimation::get_Clip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"get_Clip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline void Animancer::SoloAnimation::set_Clip(::UnityEngine::AnimationClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"set_Clip", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::SoloAnimation::get_StopOnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"get_StopOnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::SoloAnimation::set_StopOnDisable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"set_StopOnDisable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::SoloAnimation::get_IsPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::SoloAnimation::set_IsPlaying(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"set_IsPlaying", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::SoloAnimation::get_Speed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"get_Speed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::SoloAnimation::set_Speed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"set_Speed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::SoloAnimation::get_FootIK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"get_FootIK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::SoloAnimation::set_FootIK(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"set_FootIK", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::SoloAnimation::get_Time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"get_Time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::SoloAnimation::set_Time(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"set_Time", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::SoloAnimation::get_NormalizedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"get_NormalizedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::SoloAnimation::set_NormalizedTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"set_NormalizedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::SoloAnimation::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::SoloAnimation::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::SoloAnimation::Play(::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void Animancer::SoloAnimation::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::SoloAnimation*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::SoloAnimation::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::SoloAnimation*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::SoloAnimation::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::SoloAnimation*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::SoloAnimation::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::SoloAnimation*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::SoloAnimation::GetAnimationClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {"GetAnimationClips", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline void Animancer::SoloAnimation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SoloAnimation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::SoloAnimation* Animancer::SoloAnimation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::SoloAnimation*>());
}
/// @brief Convert operator to "::UnityEngine::IAnimationClipSource"
constexpr  Animancer::SoloAnimation::operator ::UnityEngine::IAnimationClipSource*() noexcept {
return static_cast<::UnityEngine::IAnimationClipSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::IAnimationClipSource"
constexpr ::UnityEngine::IAnimationClipSource* Animancer::SoloAnimation::i___UnityEngine__IAnimationClipSource() noexcept {
return static_cast<::UnityEngine::IAnimationClipSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::SoloAnimation::SoloAnimation()   {
}
