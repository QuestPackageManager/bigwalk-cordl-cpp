#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioClipPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioClipPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Audio::AudioClipPlayable::*)()>(&::UnityEngine::Audio::AudioClipPlayable::GetHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"GetHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::AudioClipPlayable::*)(::UnityEngine::Audio::AudioClipPlayable)>(&::UnityEngine::Audio::AudioClipPlayable::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18222f240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Audio::AudioClipPlayable>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Audio::AudioClipPlayable::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"GetHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline bool UnityEngine::Audio::AudioClipPlayable::Equals(::UnityEngine::Audio::AudioClipPlayable  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Audio::AudioClipPlayable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr  UnityEngine::Audio::AudioClipPlayable::operator ::UnityEngine::Playables::IPlayable*()  {
return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Audio::AudioClipPlayable::i___UnityEngine__Playables__IPlayable()  {
return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>"
constexpr  UnityEngine::Audio::AudioClipPlayable::operator ::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>* UnityEngine::Audio::AudioClipPlayable::i___System__IEquatable_1___UnityEngine__Audio__AudioClipPlayable_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::AudioClipPlayable::AudioClipPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept  {
this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioClipPlayable::AudioClipPlayable()   {
}
