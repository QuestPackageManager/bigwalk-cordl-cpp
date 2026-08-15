#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationStream.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationStream_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationStream.get_animatorBindingsVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Animations::AnimationStream::*)()>(&::UnityEngine::Animations::AnimationStream::get_animatorBindingsVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationStream>(),
                        {"get_animatorBindingsVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationStream.get_isValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimationStream::*)()>(&::UnityEngine::Animations::AnimationStream::get_isValid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182231c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationStream>(),
                        {"get_isValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationStream.CheckIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimationStream::*)()>(&::UnityEngine::Animations::AnimationStream::CheckIsValid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182231b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationStream>(),
                        {"CheckIsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationStream.get_deltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animations::AnimationStream::*)()>(&::UnityEngine::Animations::AnimationStream::get_deltaTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182231bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationStream>(),
                        {"get_deltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationStream.GetDeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animations::AnimationStream::*)()>(&::UnityEngine::Animations::AnimationStream::GetDeltaTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182231bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationStream>(),
                        {"GetDeltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::Animations::AnimationStream::get_animatorBindingsVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationStream>(),
                        {"get_animatorBindingsVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Animations::AnimationStream::get_isValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationStream>(),
                        {"get_isValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Animations::AnimationStream::CheckIsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationStream>(),
                        {"CheckIsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline float_t UnityEngine::Animations::AnimationStream::get_deltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationStream>(),
                        {"get_deltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::Animations::AnimationStream::GetDeltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationStream>(),
                        {"GetDeltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_AnimatorBindingsVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "constant", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "input", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "output", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "workspace", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputStreamAccessor", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "animationHandleBinder", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimationStream::AnimationStream(uint32_t  m_AnimatorBindingsVersion, ::System::IntPtr  constant, ::System::IntPtr  input, ::System::IntPtr  output, ::System::IntPtr  workspace, ::System::IntPtr  inputStreamAccessor, ::System::IntPtr  animationHandleBinder) noexcept  {
this->m_AnimatorBindingsVersion = m_AnimatorBindingsVersion;
this->constant = constant;
this->input = input;
this->output = output;
this->workspace = workspace;
this->inputStreamAccessor = inputStreamAccessor;
this->animationHandleBinder = animationHandleBinder;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationStream::AnimationStream()   {
}
