#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationRemoveScalePlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationRemoveScalePlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationRemoveScalePlayable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimationRemoveScalePlayable::*)(::UnityEngine::Playables::PlayableHandle)>(&::UnityEngine::Animations::AnimationRemoveScalePlayable::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182231850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationRemoveScalePlayable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationRemoveScalePlayable.GetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Animations::AnimationRemoveScalePlayable::*)()>(&::UnityEngine::Animations::AnimationRemoveScalePlayable::GetHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationRemoveScalePlayable>(),
                        {"GetHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationRemoveScalePlayable.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimationRemoveScalePlayable::*)(::UnityEngine::Animations::AnimationRemoveScalePlayable)>(&::UnityEngine::Animations::AnimationRemoveScalePlayable::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182231720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationRemoveScalePlayable>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationRemoveScalePlayable>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::AnimationRemoveScalePlayable::setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationRemoveScalePlayable  value)  {
::cordl_internals::setStaticField<::UnityEngine::Animations::AnimationRemoveScalePlayable, "m_NullPlayable", ::UnityEngine::Animations::AnimationRemoveScalePlayable>(std::forward<::UnityEngine::Animations::AnimationRemoveScalePlayable>(value));
}
inline ::UnityEngine::Animations::AnimationRemoveScalePlayable UnityEngine::Animations::AnimationRemoveScalePlayable::getStaticF_m_NullPlayable()  {
return ::cordl_internals::getStaticField<::UnityEngine::Animations::AnimationRemoveScalePlayable, "m_NullPlayable", ::UnityEngine::Animations::AnimationRemoveScalePlayable>();
}
inline void UnityEngine::Animations::AnimationRemoveScalePlayable::_ctor(::UnityEngine::Playables::PlayableHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationRemoveScalePlayable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationRemoveScalePlayable::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationRemoveScalePlayable>(),
                        {"GetHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline bool UnityEngine::Animations::AnimationRemoveScalePlayable::Equals(::UnityEngine::Animations::AnimationRemoveScalePlayable  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationRemoveScalePlayable>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationRemoveScalePlayable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr  UnityEngine::Animations::AnimationRemoveScalePlayable::operator ::UnityEngine::Playables::IPlayable*()  {
return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Animations::AnimationRemoveScalePlayable::i___UnityEngine__Playables__IPlayable()  {
return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationRemoveScalePlayable>"
constexpr  UnityEngine::Animations::AnimationRemoveScalePlayable::operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationRemoveScalePlayable>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationRemoveScalePlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationRemoveScalePlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationRemoveScalePlayable>* UnityEngine::Animations::AnimationRemoveScalePlayable::i___System__IEquatable_1___UnityEngine__Animations__AnimationRemoveScalePlayable_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationRemoveScalePlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimationRemoveScalePlayable::AnimationRemoveScalePlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept  {
this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationRemoveScalePlayable::AnimationRemoveScalePlayable()   {
}
