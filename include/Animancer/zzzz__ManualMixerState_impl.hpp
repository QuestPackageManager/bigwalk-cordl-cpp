#pragma once
// IWYU pragma private; include "Animancer/ManualMixerState.hpp"
#include "Animancer/zzzz__AnimancerState_impl.hpp"
#include "Animancer/zzzz__ManualMixerState_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__ClipState_def.hpp"
#include "Animancer/zzzz__FastEnumerator_1_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPlayableWrapper_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "Animancer/zzzz__ManualMixerState_def.hpp"
#include "Animancer/zzzz__MixerState_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationScriptPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameterType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::ManualMixerState*>"
constexpr  Animancer::ManualMixerState_ITransition::operator ::Animancer::ITransition_1<::Animancer::ManualMixerState*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::ManualMixerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::ManualMixerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::ManualMixerState*>* Animancer::ManualMixerState_ITransition::i___Animancer__ITransition_1___Animancer__ManualMixerState__() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::ManualMixerState*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::ManualMixerState_ITransition::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::ManualMixerState_ITransition::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::ManualMixerState_ITransition::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::ManualMixerState_ITransition::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::ManualMixerState_ITransition::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::ManualMixerState_ITransition::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>"
constexpr  Animancer::ManualMixerState_ITransition2D::operator ::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>"
constexpr ::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>* Animancer::ManualMixerState_ITransition2D::i___Animancer__ITransition_1___Animancer__MixerState_1___UnityEngine__Vector2___() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::ManualMixerState_ITransition2D::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::ManualMixerState_ITransition2D::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::ManualMixerState_ITransition2D::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::ManualMixerState_ITransition2D::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::ManualMixerState_ITransition2D::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::ManualMixerState_ITransition2D::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::Animancer::ManualMixerState.get_ParameterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::get_ParameterCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.GetParameterName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::ManualMixerState::*)(int32_t)>(&::Animancer::ManualMixerState::GetParameterName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030f480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.GetParameterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorControllerParameterType (::Animancer::ManualMixerState::*)(int32_t)>(&::Animancer::ManualMixerState::GetParameterType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030f480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.GetParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::ManualMixerState::*)(int32_t)>(&::Animancer::ManualMixerState::GetParameterValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030f480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.SetParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(int32_t, ::System::Object*)>(&::Animancer::ManualMixerState::SetParameterValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030f480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.get_KeepChildrenConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::get_KeepChildrenConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.get_Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::get_Clip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.get_ChildStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Animancer::AnimancerState*> (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::get_ChildStates)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"get_ChildStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.set_ChildStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::ArrayW<::Animancer::AnimancerState*>)>(&::Animancer::ManualMixerState::set_ChildStates)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803117a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"set_ChildStates", {}, {::i2c::type_of<::ArrayW<::Animancer::AnimancerState*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.get_ChildCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::get_ChildCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180310fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"get_ChildCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.get_ChildCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::get_ChildCapacity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180310fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"get_ChildCapacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.set_ChildCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(int32_t)>(&::Animancer::ManualMixerState::set_ChildCapacity)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x180311620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"set_ChildCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.OnChildCapacityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::OnChildCapacityChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.get_DefaultChildCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Animancer::ManualMixerState::get_DefaultChildCapacity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180310fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"get_DefaultChildCapacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.set_DefaultChildCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Animancer::ManualMixerState::set_DefaultChildCapacity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803117b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"set_DefaultChildCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.EnsureRemainingChildCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(int32_t)>(&::Animancer::ManualMixerState::EnsureRemainingChildCapacity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18030f350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"EnsureRemainingChildCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.GetChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::ManualMixerState::*)(int32_t)>(&::Animancer::ManualMixerState::GetChild)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18030f3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"GetChild", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::FastEnumerator_1<::Animancer::AnimancerState*> (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::GetEnumerator)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18030f440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.OnSetIsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::OnSetIsPlaying)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18030ffe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.get_IsLooping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::get_IsLooping)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180311000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.get_RawTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::get_RawTime)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x180311290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.set_RawTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(double_t)>(&::Animancer::ManualMixerState::set_RawTime)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803117f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.MoveTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(double_t, bool)>(&::Animancer::ManualMixerState::MoveTime)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18030faa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.GetSynchronizedTimeDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ManualMixerState::*)(::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::Animancer::ManualMixerState::GetSynchronizedTimeDetails)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18030f5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"GetSynchronizedTimeDetails", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.GetTimeDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::Animancer::ManualMixerState::GetTimeDetails)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18030f730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"GetTimeDetails", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::get_Length)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180311090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.CreatePlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::by_ref<::UnityEngine::Playables::Playable>)>(&::Animancer::ManualMixerState::CreatePlayable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18030eec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.OnAddChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::Animancer::AnimancerState*)>(&::Animancer::ManualMixerState::OnAddChild)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18030fcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.OnRemoveChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::Animancer::AnimancerState*)>(&::Animancer::ManualMixerState::OnRemoveChild)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x18030fd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::Destroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18030f000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::ManualMixerState::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::ManualMixerState::Clone)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18030ee00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.Animancer_ICopyable_Animancer_ManualMixerState__CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::Animancer::ManualMixerState*)>(&::Animancer::ManualMixerState::Animancer_ICopyable_Animancer_ManualMixerState__CopyFrom)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18030e590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Animancer.ICopyable<Animancer.ManualMixerState>.CopyFrom", {}, {::i2c::type_of<::Animancer::ManualMixerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::Animancer::AnimancerState*)>(&::Animancer::ManualMixerState::Add)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18030e540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Add", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ClipState* (::Animancer::ManualMixerState::*)(::UnityEngine::AnimationClip*)>(&::Animancer::ManualMixerState::Add)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18030e290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::ManualMixerState::*)(::Animancer::ITransition*)>(&::Animancer::ManualMixerState::Add)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18030e4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Add", {}, {::i2c::type_of<::Animancer::ITransition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::ManualMixerState::*)(::System::Object*)>(&::Animancer::ManualMixerState::Add)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18030e310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Add", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::ManualMixerState::AddRange)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18030dde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"AddRange", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::ArrayW<::UnityEngine::AnimationClip*>)>(&::Animancer::ManualMixerState::AddRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030e280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"AddRange", {}, {::i2c::type_of<::ArrayW<::UnityEngine::AnimationClip*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::System::Collections::Generic::IList_1<::Animancer::ITransition*>*)>(&::Animancer::ManualMixerState::AddRange)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18030e0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"AddRange", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Animancer::ITransition*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::ArrayW<::Animancer::ITransition*>)>(&::Animancer::ManualMixerState::AddRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030e0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"AddRange", {}, {::i2c::type_of<::ArrayW<::Animancer::ITransition*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::System::Collections::Generic::IList_1<::System::Object*>*)>(&::Animancer::ManualMixerState::AddRange)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18030df90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"AddRange", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::ArrayW<::System::Object*>)>(&::Animancer::ManualMixerState::AddRange)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18030df90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"AddRange", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(int32_t, bool)>(&::Animancer::ManualMixerState::Remove)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803100e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Remove", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::Animancer::AnimancerState*, bool)>(&::Animancer::ManualMixerState::Remove)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180310090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Remove", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(int32_t, ::Animancer::AnimancerState*, bool)>(&::Animancer::ManualMixerState::Set)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1803102e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Set", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ClipState* (::Animancer::ManualMixerState::*)(int32_t, ::UnityEngine::AnimationClip*, bool)>(&::Animancer::ManualMixerState::Set)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803101e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Set", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::ManualMixerState::*)(int32_t, ::Animancer::ITransition*, bool)>(&::Animancer::ManualMixerState::Set)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180310270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Set", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Animancer::ITransition*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::ManualMixerState::*)(int32_t, ::System::Object*, bool)>(&::Animancer::ManualMixerState::Set)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1803104d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Set", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::ManualMixerState::*)(::Animancer::AnimancerState*)>(&::Animancer::ManualMixerState::IndexOf)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18030f890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"IndexOf", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.DestroyChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::DestroyChildren)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18030ef60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"DestroyChildren", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::by_ref<bool>)>(&::Animancer::ManualMixerState::Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180310ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.get_WeightsAreDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::get_WeightsAreDirty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803115f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"get_WeightsAreDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.set_WeightsAreDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(bool)>(&::Animancer::ManualMixerState::set_WeightsAreDirty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180311a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"set_WeightsAreDirty", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.RecalculateWeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::RecalculateWeights)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180310060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"RecalculateWeights", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.ForceRecalculateWeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::ForceRecalculateWeights)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.get_SynchronizeNewChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Animancer::ManualMixerState::get_SynchronizeNewChildren)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"get_SynchronizeNewChildren", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.set_SynchronizeNewChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Animancer::ManualMixerState::set_SynchronizeNewChildren)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"set_SynchronizeNewChildren", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.get_MinimumSynchronizeChildrenWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Animancer::ManualMixerState::get_MinimumSynchronizeChildrenWeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"get_MinimumSynchronizeChildrenWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.set_MinimumSynchronizeChildrenWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Animancer::ManualMixerState::set_MinimumSynchronizeChildrenWeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803117d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"set_MinimumSynchronizeChildrenWeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.get_SynchronizedChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Animancer::AnimancerState*> (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::get_SynchronizedChildren)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180311560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"get_SynchronizedChildren", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.set_SynchronizedChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::ArrayW<::Animancer::AnimancerState*>)>(&::Animancer::ManualMixerState::set_SynchronizedChildren)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180311920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"set_SynchronizedChildren", {}, {::i2c::type_of<::ArrayW<::Animancer::AnimancerState*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.get_SynchronizedChildCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::get_SynchronizedChildCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"get_SynchronizedChildCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.IsSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ManualMixerState::*)(::Animancer::AnimancerState*)>(&::Animancer::ManualMixerState::IsSynchronized)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18030fa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"IsSynchronized", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.Synchronize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::Animancer::AnimancerState*)>(&::Animancer::ManualMixerState::Synchronize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803108d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Synchronize", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.SynchronizeDirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::Animancer::AnimancerState*)>(&::Animancer::ManualMixerState::SynchronizeDirect)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180310700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"SynchronizeDirect", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.DontSynchronize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::Animancer::AnimancerState*)>(&::Animancer::ManualMixerState::DontSynchronize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18030f2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"DontSynchronize", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.DontSynchronizeChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::DontSynchronizeChildren)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18030f0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"DontSynchronizeChildren", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.InitializeSynchronizedChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::ArrayW<bool>)>(&::Animancer::ManualMixerState::InitializeSynchronizedChildren)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18030f8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"InitializeSynchronizedChildren", {}, {::i2c::type_of<::ArrayW<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.GetParentMixer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ManualMixerState* (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::GetParentMixer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18030f510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"GetParentMixer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.GetParentMixer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ManualMixerState* (*)(::Animancer::IPlayableWrapper*)>(&::Animancer::ManualMixerState::GetParentMixer)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18030f490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"GetParentMixer", {}, {::i2c::type_of<::Animancer::IPlayableWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.IsChildOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Animancer::IPlayableWrapper*, ::Animancer::IPlayableWrapper*)>(&::Animancer::ManualMixerState::IsChildOf)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18030f990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"IsChildOf", {}, {::i2c::type_of<::Animancer::IPlayableWrapper*>(), ::i2c::type_of<::Animancer::IPlayableWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.ApplySynchronizeChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::by_ref<bool>)>(&::Animancer::ManualMixerState::ApplySynchronizeChildren)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x18030e8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"ApplySynchronizeChildren", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.CalculateRealEffectiveSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::CalculateRealEffectiveSpeed)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18030ec30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"CalculateRealEffectiveSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.get_ApplyAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::get_ApplyAnimatorIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180310e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.set_ApplyAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(bool)>(&::Animancer::ManualMixerState::set_ApplyAnimatorIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180311600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.get_ApplyFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::get_ApplyFootIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180310e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.set_ApplyFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(bool)>(&::Animancer::ManualMixerState::set_ApplyFootIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180311610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.CalculateTotalWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::ArrayW<::Animancer::AnimancerState*>, int32_t)>(&::Animancer::ManualMixerState::CalculateTotalWeight)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18030edc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"CalculateTotalWeight", {}, {::i2c::type_of<::ArrayW<::Animancer::AnimancerState*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.SetChildrenTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(float_t, bool)>(&::Animancer::ManualMixerState::SetChildrenTime)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180310140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"SetChildrenTime", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.DisableRemainingStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(int32_t)>(&::Animancer::ManualMixerState::DisableRemainingStates)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18030f020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"DisableRemainingStates", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.NormalizeWeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(float_t)>(&::Animancer::ManualMixerState::NormalizeWeights)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18030fc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"NormalizeWeights", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.GetDisplayKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::ManualMixerState::*)(::Animancer::AnimancerState*)>(&::Animancer::ManualMixerState::GetDisplayKey)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18030f400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.get_AverageVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::get_AverageVelocity)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180310e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.NormalizeDurations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::NormalizeDurations)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18030fb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"NormalizeDurations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::ToString)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x180310910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.AppendDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::System::Text::StringBuilder*, ::StringW)>(&::Animancer::ManualMixerState::AppendDetails)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18030e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState.GatherAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::ManualMixerState::GatherAnimationClips)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18030f3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {::i2c::class_of<::Animancer::ManualMixerState*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerState::*)()>(&::Animancer::ManualMixerState::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180310de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Animancer::AnimancerState*>& Animancer::ManualMixerState::__cordl_internal_get__ChildStates_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChildStates_k__BackingField;
}
constexpr ::ArrayW<::Animancer::AnimancerState*> const& Animancer::ManualMixerState::__cordl_internal_get__ChildStates_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChildStates_k__BackingField;
}
constexpr void Animancer::ManualMixerState::__cordl_internal_set__ChildStates_k__BackingField(::ArrayW<::Animancer::AnimancerState*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChildStates_k__BackingField = value;
}
constexpr int32_t& Animancer::ManualMixerState::__cordl_internal_get__ChildCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChildCount;
}
constexpr int32_t const& Animancer::ManualMixerState::__cordl_internal_get__ChildCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChildCount;
}
constexpr void Animancer::ManualMixerState::__cordl_internal_set__ChildCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChildCount = value;
}
constexpr bool& Animancer::ManualMixerState::__cordl_internal_get__WeightsAreDirty_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WeightsAreDirty_k__BackingField;
}
constexpr bool const& Animancer::ManualMixerState::__cordl_internal_get__WeightsAreDirty_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WeightsAreDirty_k__BackingField;
}
constexpr void Animancer::ManualMixerState::__cordl_internal_set__WeightsAreDirty_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WeightsAreDirty_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Animancer::AnimancerState*>*& Animancer::ManualMixerState::__cordl_internal_get__SynchronizedChildren()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SynchronizedChildren;
}
constexpr ::System::Collections::Generic::List_1<::Animancer::AnimancerState*>* const& Animancer::ManualMixerState::__cordl_internal_get__SynchronizedChildren() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SynchronizedChildren;
}
constexpr void Animancer::ManualMixerState::__cordl_internal_set__SynchronizedChildren(::System::Collections::Generic::List_1<::Animancer::AnimancerState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SynchronizedChildren = value;
}
constexpr bool& Animancer::ManualMixerState::__cordl_internal_get__ApplyAnimatorIK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApplyAnimatorIK;
}
constexpr bool const& Animancer::ManualMixerState::__cordl_internal_get__ApplyAnimatorIK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApplyAnimatorIK;
}
constexpr void Animancer::ManualMixerState::__cordl_internal_set__ApplyAnimatorIK(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ApplyAnimatorIK = value;
}
constexpr bool& Animancer::ManualMixerState::__cordl_internal_get__ApplyFootIK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApplyFootIK;
}
constexpr bool const& Animancer::ManualMixerState::__cordl_internal_get__ApplyFootIK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ApplyFootIK;
}
constexpr void Animancer::ManualMixerState::__cordl_internal_set__ApplyFootIK(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ApplyFootIK = value;
}
inline void Animancer::ManualMixerState::setStaticF__DefaultChildCapacity_k__BackingField(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "<DefaultChildCapacity>k__BackingField", ::Animancer::ManualMixerState*>(std::forward<int32_t>(value));
}
inline int32_t Animancer::ManualMixerState::getStaticF__DefaultChildCapacity_k__BackingField()  {
return ::cordl_internals::getStaticField<int32_t, "<DefaultChildCapacity>k__BackingField", ::Animancer::ManualMixerState*>();
}
inline void Animancer::ManualMixerState::setStaticF__SynchronizeNewChildren_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<SynchronizeNewChildren>k__BackingField", ::Animancer::ManualMixerState*>(std::forward<bool>(value));
}
inline bool Animancer::ManualMixerState::getStaticF__SynchronizeNewChildren_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<SynchronizeNewChildren>k__BackingField", ::Animancer::ManualMixerState*>();
}
inline void Animancer::ManualMixerState::setStaticF__MinimumSynchronizeChildrenWeight_k__BackingField(float_t  value)  {
::cordl_internals::setStaticField<float_t, "<MinimumSynchronizeChildrenWeight>k__BackingField", ::Animancer::ManualMixerState*>(std::forward<float_t>(value));
}
inline float_t Animancer::ManualMixerState::getStaticF__MinimumSynchronizeChildrenWeight_k__BackingField()  {
return ::cordl_internals::getStaticField<float_t, "<MinimumSynchronizeChildrenWeight>k__BackingField", ::Animancer::ManualMixerState*>();
}
inline int32_t Animancer::ManualMixerState::get_ParameterCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Animancer::ManualMixerState::GetParameterName(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::UnityEngine::AnimatorControllerParameterType Animancer::ManualMixerState::GetParameterType(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorControllerParameterType>(this, ___internal_method, index);
}
inline ::System::Object* Animancer::ManualMixerState::GetParameterValue(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void Animancer::ManualMixerState::SetParameterValue(int32_t  index, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline bool Animancer::ManualMixerState::get_KeepChildrenConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::ManualMixerState::get_Clip()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline ::ArrayW<::Animancer::AnimancerState*> Animancer::ManualMixerState::get_ChildStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"get_ChildStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Animancer::AnimancerState*>>(this, ___internal_method);
}
inline void Animancer::ManualMixerState::set_ChildStates(::ArrayW<::Animancer::AnimancerState*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"set_ChildStates", {}, {::i2c::type_of<::ArrayW<::Animancer::AnimancerState*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Animancer::ManualMixerState::get_ChildCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"get_ChildCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Animancer::ManualMixerState::get_ChildCapacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"get_ChildCapacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Animancer::ManualMixerState::set_ChildCapacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"set_ChildCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::ManualMixerState::OnChildCapacityChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Animancer::ManualMixerState::get_DefaultChildCapacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"get_DefaultChildCapacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Animancer::ManualMixerState::set_DefaultChildCapacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"set_DefaultChildCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Animancer::ManualMixerState::EnsureRemainingChildCapacity(int32_t  minimumCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"EnsureRemainingChildCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minimumCapacity);
}
inline ::Animancer::AnimancerState* Animancer::ManualMixerState::GetChild(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"GetChild", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, index);
}
inline ::Animancer::FastEnumerator_1<::Animancer::AnimancerState*> Animancer::ManualMixerState::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::FastEnumerator_1<::Animancer::AnimancerState*>>(this, ___internal_method);
}
inline void Animancer::ManualMixerState::OnSetIsPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Animancer::ManualMixerState::get_IsLooping()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline double_t Animancer::ManualMixerState::get_RawTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Animancer::ManualMixerState::set_RawTime(double_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::ManualMixerState::MoveTime(double_t  time, bool  normalized)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, normalized);
}
inline bool Animancer::ManualMixerState::GetSynchronizedTimeDetails(::by_ref<float_t>  totalWeight, ::by_ref<float_t>  normalizedTime, ::by_ref<float_t>  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"GetSynchronizedTimeDetails", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, totalWeight, normalizedTime, length);
}
inline void Animancer::ManualMixerState::GetTimeDetails(::by_ref<float_t>  totalWeight, ::by_ref<float_t>  normalizedTime, ::by_ref<float_t>  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"GetTimeDetails", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, totalWeight, normalizedTime, length);
}
inline float_t Animancer::ManualMixerState::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::ManualMixerState::CreatePlayable(::by_ref<::UnityEngine::Playables::Playable>  playable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void Animancer::ManualMixerState::OnAddChild(::Animancer::AnimancerState*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Animancer::ManualMixerState::OnRemoveChild(::Animancer::AnimancerState*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Animancer::ManualMixerState::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::AnimancerState* Animancer::ManualMixerState::Clone(::Animancer::AnimancerPlayable*  root)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, root);
}
inline void Animancer::ManualMixerState::Animancer_ICopyable_Animancer_ManualMixerState__CopyFrom(::Animancer::ManualMixerState*  copyFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Animancer.ICopyable<Animancer.ManualMixerState>.CopyFrom", {}, {::i2c::type_of<::Animancer::ManualMixerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline void Animancer::ManualMixerState::Add(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Add", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::Animancer::ClipState* Animancer::ManualMixerState::Add(::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ClipState*>(this, ___internal_method, clip);
}
inline ::Animancer::AnimancerState* Animancer::ManualMixerState::Add(::Animancer::ITransition*  transition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Add", {}, {::i2c::type_of<::Animancer::ITransition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, transition);
}
inline ::Animancer::AnimancerState* Animancer::ManualMixerState::Add(::System::Object*  child)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Add", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, child);
}
inline void Animancer::ManualMixerState::AddRange(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"AddRange", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline void Animancer::ManualMixerState::AddRange(::ArrayW<::UnityEngine::AnimationClip*>  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"AddRange", {}, {::i2c::type_of<::ArrayW<::UnityEngine::AnimationClip*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline void Animancer::ManualMixerState::AddRange(::System::Collections::Generic::IList_1<::Animancer::ITransition*>*  transitions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"AddRange", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Animancer::ITransition*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitions);
}
inline void Animancer::ManualMixerState::AddRange(::ArrayW<::Animancer::ITransition*>  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"AddRange", {}, {::i2c::type_of<::ArrayW<::Animancer::ITransition*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline void Animancer::ManualMixerState::AddRange(::System::Collections::Generic::IList_1<::System::Object*>*  children)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"AddRange", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, children);
}
inline void Animancer::ManualMixerState::AddRange(::ArrayW<::System::Object*>  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"AddRange", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline void Animancer::ManualMixerState::Remove(int32_t  index, bool  destroy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Remove", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, destroy);
}
inline void Animancer::ManualMixerState::Remove(::Animancer::AnimancerState*  child, bool  destroy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Remove", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, child, destroy);
}
inline void Animancer::ManualMixerState::Set(int32_t  index, ::Animancer::AnimancerState*  child, bool  destroyPrevious)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Set", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, child, destroyPrevious);
}
inline ::Animancer::ClipState* Animancer::ManualMixerState::Set(int32_t  index, ::UnityEngine::AnimationClip*  clip, bool  destroyPrevious)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Set", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ClipState*>(this, ___internal_method, index, clip, destroyPrevious);
}
inline ::Animancer::AnimancerState* Animancer::ManualMixerState::Set(int32_t  index, ::Animancer::ITransition*  transition, bool  destroyPrevious)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Set", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Animancer::ITransition*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, index, transition, destroyPrevious);
}
inline ::Animancer::AnimancerState* Animancer::ManualMixerState::Set(int32_t  index, ::System::Object*  child, bool  destroyPrevious)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Set", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, index, child, destroyPrevious);
}
inline int32_t Animancer::ManualMixerState::IndexOf(::Animancer::AnimancerState*  child)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"IndexOf", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, child);
}
inline void Animancer::ManualMixerState::DestroyChildren()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"DestroyChildren", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Animations::AnimationScriptPlayable Animancer::ManualMixerState::CreatePlayable(::Animancer::AnimancerPlayable*  root, T  job, bool  processInputs)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {"CreatePlayable", {::i2c::class_of<T>()}, {::i2c::type_of<::Animancer::AnimancerPlayable*>(), ::i2c::type_of<T>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimationScriptPlayable>(this, ___internal_method, root, job, processInputs);
}
template<typename T>
inline void Animancer::ManualMixerState::CreatePlayable(::by_ref<::UnityEngine::Playables::Playable>  playable, T  job, bool  processInputs)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {"CreatePlayable", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::Playable>>(), ::i2c::type_of<T>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, job, processInputs);
}
template<typename T>
inline T Animancer::ManualMixerState::GetJobData()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {"GetJobData", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Animancer::ManualMixerState::SetJobData(T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerState*>(),
                    {"SetJobData", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::ManualMixerState::Update(::by_ref<bool>  needsMoreUpdates)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, needsMoreUpdates);
}
inline bool Animancer::ManualMixerState::get_WeightsAreDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"get_WeightsAreDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::ManualMixerState::set_WeightsAreDirty(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"set_WeightsAreDirty", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::ManualMixerState::RecalculateWeights()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"RecalculateWeights", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::ManualMixerState::ForceRecalculateWeights()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Animancer::ManualMixerState::get_SynchronizeNewChildren()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"get_SynchronizeNewChildren", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Animancer::ManualMixerState::set_SynchronizeNewChildren(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"set_SynchronizeNewChildren", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t Animancer::ManualMixerState::get_MinimumSynchronizeChildrenWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"get_MinimumSynchronizeChildrenWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void Animancer::ManualMixerState::set_MinimumSynchronizeChildrenWeight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"set_MinimumSynchronizeChildrenWeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::ArrayW<::Animancer::AnimancerState*> Animancer::ManualMixerState::get_SynchronizedChildren()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"get_SynchronizedChildren", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Animancer::AnimancerState*>>(this, ___internal_method);
}
inline void Animancer::ManualMixerState::set_SynchronizedChildren(::ArrayW<::Animancer::AnimancerState*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"set_SynchronizedChildren", {}, {::i2c::type_of<::ArrayW<::Animancer::AnimancerState*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Animancer::ManualMixerState::get_SynchronizedChildCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"get_SynchronizedChildCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Animancer::ManualMixerState::IsSynchronized(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"IsSynchronized", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void Animancer::ManualMixerState::Synchronize(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"Synchronize", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Animancer::ManualMixerState::SynchronizeDirect(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"SynchronizeDirect", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Animancer::ManualMixerState::DontSynchronize(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"DontSynchronize", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Animancer::ManualMixerState::DontSynchronizeChildren()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"DontSynchronizeChildren", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::ManualMixerState::InitializeSynchronizedChildren(::ArrayW<bool>  synchronizeChildren)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"InitializeSynchronizedChildren", {}, {::i2c::type_of<::ArrayW<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, synchronizeChildren);
}
inline ::Animancer::ManualMixerState* Animancer::ManualMixerState::GetParentMixer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"GetParentMixer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ManualMixerState*>(this, ___internal_method);
}
inline ::Animancer::ManualMixerState* Animancer::ManualMixerState::GetParentMixer(::Animancer::IPlayableWrapper*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"GetParentMixer", {}, {::i2c::type_of<::Animancer::IPlayableWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ManualMixerState*>(nullptr, ___internal_method, node);
}
inline bool Animancer::ManualMixerState::IsChildOf(::Animancer::IPlayableWrapper*  child, ::Animancer::IPlayableWrapper*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"IsChildOf", {}, {::i2c::type_of<::Animancer::IPlayableWrapper*>(), ::i2c::type_of<::Animancer::IPlayableWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, child, parent);
}
inline void Animancer::ManualMixerState::ApplySynchronizeChildren(::by_ref<bool>  needsMoreUpdates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"ApplySynchronizeChildren", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, needsMoreUpdates);
}
inline float_t Animancer::ManualMixerState::CalculateRealEffectiveSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"CalculateRealEffectiveSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Animancer::ManualMixerState::get_ApplyAnimatorIK()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::ManualMixerState::set_ApplyAnimatorIK(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::ManualMixerState::get_ApplyFootIK()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::ManualMixerState::set_ApplyFootIK(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::ManualMixerState::CalculateTotalWeight(::ArrayW<::Animancer::AnimancerState*>  states, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"CalculateTotalWeight", {}, {::i2c::type_of<::ArrayW<::Animancer::AnimancerState*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, states, count);
}
inline void Animancer::ManualMixerState::SetChildrenTime(float_t  value, bool  normalized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"SetChildrenTime", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, normalized);
}
inline void Animancer::ManualMixerState::DisableRemainingStates(int32_t  previousIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"DisableRemainingStates", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previousIndex);
}
inline void Animancer::ManualMixerState::NormalizeWeights(float_t  totalWeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"NormalizeWeights", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, totalWeight);
}
inline ::StringW Animancer::ManualMixerState::GetDisplayKey(::Animancer::AnimancerState*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, state);
}
inline ::UnityEngine::Vector3 Animancer::ManualMixerState::get_AverageVelocity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Animancer::ManualMixerState::NormalizeDurations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {"NormalizeDurations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Animancer::ManualMixerState::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Animancer::ManualMixerState::AppendDetails(::System::Text::StringBuilder*  text, ::StringW  separator)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, separator);
}
inline void Animancer::ManualMixerState::GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerState*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline void Animancer::ManualMixerState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::ManualMixerState* Animancer::ManualMixerState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::ManualMixerState*>());
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::ManualMixerState*>"
constexpr  Animancer::ManualMixerState::operator ::Animancer::ICopyable_1<::Animancer::ManualMixerState*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::ManualMixerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::ManualMixerState*>"
constexpr ::Animancer::ICopyable_1<::Animancer::ManualMixerState*>* Animancer::ManualMixerState::i___Animancer__ICopyable_1___Animancer__ManualMixerState__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::ManualMixerState*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::ManualMixerState::ManualMixerState()   {
}
