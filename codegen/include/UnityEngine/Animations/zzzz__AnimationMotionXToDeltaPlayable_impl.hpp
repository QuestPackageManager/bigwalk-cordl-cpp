#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationMotionXToDeltaPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationMotionXToDeltaPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimationMotionXToDeltaPlayable::*)(::UnityEngine::Playables::PlayableHandle)>(&::UnityEngine::Animations::AnimationMotionXToDeltaPlayable::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182230ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable.GetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Animations::AnimationMotionXToDeltaPlayable::*)()>(&::UnityEngine::Animations::AnimationMotionXToDeltaPlayable::GetHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>(),
                        {"GetHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimationMotionXToDeltaPlayable::*)(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable)>(&::UnityEngine::Animations::AnimationMotionXToDeltaPlayable::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18222f240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::AnimationMotionXToDeltaPlayable::setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable  value)  {
::cordl_internals::setStaticField<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable, "m_NullPlayable", ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>(std::forward<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>(value));
}
inline ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable UnityEngine::Animations::AnimationMotionXToDeltaPlayable::getStaticF_m_NullPlayable()  {
return ::cordl_internals::getStaticField<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable, "m_NullPlayable", ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>();
}
inline void UnityEngine::Animations::AnimationMotionXToDeltaPlayable::_ctor(::UnityEngine::Playables::PlayableHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationMotionXToDeltaPlayable::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>(),
                        {"GetHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline bool UnityEngine::Animations::AnimationMotionXToDeltaPlayable::Equals(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr  UnityEngine::Animations::AnimationMotionXToDeltaPlayable::operator ::UnityEngine::Playables::IPlayable*()  {
return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Animations::AnimationMotionXToDeltaPlayable::i___UnityEngine__Playables__IPlayable()  {
return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>"
constexpr  UnityEngine::Animations::AnimationMotionXToDeltaPlayable::operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>* UnityEngine::Animations::AnimationMotionXToDeltaPlayable::i___System__IEquatable_1___UnityEngine__Animations__AnimationMotionXToDeltaPlayable_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable::AnimationMotionXToDeltaPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept  {
this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable::AnimationMotionXToDeltaPlayable()   {
}
