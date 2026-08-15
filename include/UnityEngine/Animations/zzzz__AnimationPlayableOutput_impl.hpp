#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationPlayableOutput.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableOutput_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::AnimationPlayableOutput (*)(::UnityEngine::Playables::PlayableGraph, ::StringW, ::UnityEngine::Animator*)>(&::UnityEngine::Animations::AnimationPlayableOutput::Create)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x182230f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimationPlayableOutput::*)(::UnityEngine::Playables::PlayableOutputHandle)>(&::UnityEngine::Animations::AnimationPlayableOutput::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182231140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput.get_Null
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::AnimationPlayableOutput (*)()>(&::UnityEngine::Animations::AnimationPlayableOutput::get_Null)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1822311f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                        {"get_Null", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput.GetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableOutputHandle (::UnityEngine::Animations::AnimationPlayableOutput::*)()>(&::UnityEngine::Animations::AnimationPlayableOutput::GetHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                        {"GetHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput.SetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimationPlayableOutput::*)(::UnityEngine::Animator*)>(&::UnityEngine::Animations::AnimationPlayableOutput::SetTarget)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182231110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                        {"SetTarget", {}, {::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput.InternalSetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>, ::UnityEngine::Animator*)>(&::UnityEngine::Animations::AnimationPlayableOutput::InternalSetTarget)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182231110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                        {"InternalSetTarget", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPlayableOutput.InternalSetTarget_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>, ::System::IntPtr)>(&::UnityEngine::Animations::AnimationPlayableOutput::InternalSetTarget_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182231100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                        {"InternalSetTarget_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Animations::AnimationPlayableOutput UnityEngine::Animations::AnimationPlayableOutput::Create(::UnityEngine::Playables::PlayableGraph  graph, ::StringW  name, ::UnityEngine::Animator*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimationPlayableOutput>(nullptr, ___internal_method, graph, name, target);
}
inline void UnityEngine::Animations::AnimationPlayableOutput::_ctor(::UnityEngine::Playables::PlayableOutputHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Animations::AnimationPlayableOutput UnityEngine::Animations::AnimationPlayableOutput::get_Null()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                        {"get_Null", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimationPlayableOutput>(nullptr, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableOutputHandle UnityEngine::Animations::AnimationPlayableOutput::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                        {"GetHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutputHandle>(*this, ___internal_method);
}
inline void UnityEngine::Animations::AnimationPlayableOutput::SetTarget(::UnityEngine::Animator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                        {"SetTarget", {}, {::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Animations::AnimationPlayableOutput::InternalSetTarget(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  handle, ::UnityEngine::Animator*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                        {"InternalSetTarget", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, target);
}
inline void UnityEngine::Animations::AnimationPlayableOutput::InternalSetTarget_Injected(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  handle, ::System::IntPtr  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationPlayableOutput>(),
                        {"InternalSetTarget_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, target);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
constexpr  UnityEngine::Animations::AnimationPlayableOutput::operator ::UnityEngine::Playables::IPlayableOutput*()  {
return static_cast<::UnityEngine::Playables::IPlayableOutput*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayableOutput"
constexpr ::UnityEngine::Playables::IPlayableOutput* UnityEngine::Animations::AnimationPlayableOutput::i___UnityEngine__Playables__IPlayableOutput()  {
return static_cast<::UnityEngine::Playables::IPlayableOutput*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimationPlayableOutput::AnimationPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle  m_Handle) noexcept  {
this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationPlayableOutput::AnimationPlayableOutput()   {
}
