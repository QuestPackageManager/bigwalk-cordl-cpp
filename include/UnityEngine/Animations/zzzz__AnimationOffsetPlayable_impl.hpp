#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationOffsetPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationOffsetPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationOffsetPlayable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimationOffsetPlayable::*)(::UnityEngine::Playables::PlayableHandle)>(&::UnityEngine::Animations::AnimationOffsetPlayable::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182230cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationOffsetPlayable.GetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Animations::AnimationOffsetPlayable::*)()>(&::UnityEngine::Animations::AnimationOffsetPlayable::GetHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(),
                        {"GetHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationOffsetPlayable.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimationOffsetPlayable::*)(::UnityEngine::Animations::AnimationOffsetPlayable)>(&::UnityEngine::Animations::AnimationOffsetPlayable::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182230b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationOffsetPlayable>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::AnimationOffsetPlayable::setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationOffsetPlayable  value)  {
::cordl_internals::setStaticField<::UnityEngine::Animations::AnimationOffsetPlayable, "m_NullPlayable", ::UnityEngine::Animations::AnimationOffsetPlayable>(std::forward<::UnityEngine::Animations::AnimationOffsetPlayable>(value));
}
inline ::UnityEngine::Animations::AnimationOffsetPlayable UnityEngine::Animations::AnimationOffsetPlayable::getStaticF_m_NullPlayable()  {
return ::cordl_internals::getStaticField<::UnityEngine::Animations::AnimationOffsetPlayable, "m_NullPlayable", ::UnityEngine::Animations::AnimationOffsetPlayable>();
}
inline void UnityEngine::Animations::AnimationOffsetPlayable::_ctor(::UnityEngine::Playables::PlayableHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationOffsetPlayable::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(),
                        {"GetHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline bool UnityEngine::Animations::AnimationOffsetPlayable::Equals(::UnityEngine::Animations::AnimationOffsetPlayable  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationOffsetPlayable>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationOffsetPlayable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr  UnityEngine::Animations::AnimationOffsetPlayable::operator ::UnityEngine::Playables::IPlayable*()  {
return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Animations::AnimationOffsetPlayable::i___UnityEngine__Playables__IPlayable()  {
return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>"
constexpr  UnityEngine::Animations::AnimationOffsetPlayable::operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>* UnityEngine::Animations::AnimationOffsetPlayable::i___System__IEquatable_1___UnityEngine__Animations__AnimationOffsetPlayable_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimationOffsetPlayable::AnimationOffsetPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept  {
this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationOffsetPlayable::AnimationOffsetPlayable()   {
}
