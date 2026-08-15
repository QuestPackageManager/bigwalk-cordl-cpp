#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationScriptPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationScriptPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationScriptPlayable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimationScriptPlayable::*)(::UnityEngine::Playables::PlayableHandle)>(&::UnityEngine::Animations::AnimationScriptPlayable::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182231a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationScriptPlayable.GetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Animations::AnimationScriptPlayable::*)()>(&::UnityEngine::Animations::AnimationScriptPlayable::GetHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {"GetHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationScriptPlayable.op_Implicit___UnityEngine__Playables__Playable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (*)(::UnityEngine::Animations::AnimationScriptPlayable)>(&::UnityEngine::Animations::AnimationScriptPlayable::op_Implicit___UnityEngine__Playables__Playable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18222f460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationScriptPlayable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationScriptPlayable.op_Explicit___UnityEngine__Animations__AnimationScriptPlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::AnimationScriptPlayable (*)(::UnityEngine::Playables::Playable)>(&::UnityEngine::Animations::AnimationScriptPlayable::op_Explicit___UnityEngine__Animations__AnimationScriptPlayable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182231ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {"op_Explicit", {}, {::i2c::type_of<::UnityEngine::Playables::Playable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationScriptPlayable.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimationScriptPlayable::*)(::UnityEngine::Animations::AnimationScriptPlayable)>(&::UnityEngine::Animations::AnimationScriptPlayable::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18222f240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationScriptPlayable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationScriptPlayable.SetProcessInputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimationScriptPlayable::*)(bool)>(&::UnityEngine::Animations::AnimationScriptPlayable::SetProcessInputs)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182231950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {"SetProcessInputs", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationScriptPlayable.CreateHandleInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Playables::PlayableGraph, ::by_ref<::UnityEngine::Playables::PlayableHandle>, ::System::IntPtr)>(&::UnityEngine::Animations::AnimationScriptPlayable::CreateHandleInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182231910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {"CreateHandleInternal", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationScriptPlayable.SetProcessInputsInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Playables::PlayableHandle, bool)>(&::UnityEngine::Animations::AnimationScriptPlayable::SetProcessInputsInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182231940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {"SetProcessInputsInternal", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationScriptPlayable.CreateHandleInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::by_ref<::UnityEngine::Playables::PlayableHandle>, ::System::IntPtr)>(&::UnityEngine::Animations::AnimationScriptPlayable::CreateHandleInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182231900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {"CreateHandleInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationScriptPlayable.SetProcessInputsInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, bool)>(&::UnityEngine::Animations::AnimationScriptPlayable::SetProcessInputsInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182231930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {"SetProcessInputsInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::AnimationScriptPlayable::setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationScriptPlayable  value)  {
::cordl_internals::setStaticField<::UnityEngine::Animations::AnimationScriptPlayable, "m_NullPlayable", ::UnityEngine::Animations::AnimationScriptPlayable>(std::forward<::UnityEngine::Animations::AnimationScriptPlayable>(value));
}
inline ::UnityEngine::Animations::AnimationScriptPlayable UnityEngine::Animations::AnimationScriptPlayable::getStaticF_m_NullPlayable()  {
return ::cordl_internals::getStaticField<::UnityEngine::Animations::AnimationScriptPlayable, "m_NullPlayable", ::UnityEngine::Animations::AnimationScriptPlayable>();
}
template<typename T>
inline ::UnityEngine::Animations::AnimationScriptPlayable UnityEngine::Animations::AnimationScriptPlayable::Create(::UnityEngine::Playables::PlayableGraph  graph, T  jobData, int32_t  inputCount)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                    {"Create", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimationScriptPlayable>(nullptr, ___internal_method, graph, jobData, inputCount);
}
template<typename T>
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationScriptPlayable::CreateHandle(::UnityEngine::Playables::PlayableGraph  graph, int32_t  inputCount)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                    {"CreateHandle", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(nullptr, ___internal_method, graph, inputCount);
}
inline void UnityEngine::Animations::AnimationScriptPlayable::_ctor(::UnityEngine::Playables::PlayableHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationScriptPlayable::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {"GetHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Animations::AnimationScriptPlayable::CheckJobTypeValidity()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                    {"CheckJobTypeValidity", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline T UnityEngine::Animations::AnimationScriptPlayable::GetJobData()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                    {"GetJobData", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Animations::AnimationScriptPlayable::SetJobData(T  jobData)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                    {"SetJobData", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, jobData);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Animations::AnimationScriptPlayable::op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationScriptPlayable  playable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationScriptPlayable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(nullptr, ___internal_method, playable);
}
inline ::UnityEngine::Animations::AnimationScriptPlayable UnityEngine::Animations::AnimationScriptPlayable::op_Explicit___UnityEngine__Animations__AnimationScriptPlayable(::UnityEngine::Playables::Playable  playable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {"op_Explicit", {}, {::i2c::type_of<::UnityEngine::Playables::Playable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimationScriptPlayable>(nullptr, ___internal_method, playable);
}
inline bool UnityEngine::Animations::AnimationScriptPlayable::Equals(::UnityEngine::Animations::AnimationScriptPlayable  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationScriptPlayable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline void UnityEngine::Animations::AnimationScriptPlayable::SetProcessInputs(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {"SetProcessInputs", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Animations::AnimationScriptPlayable::CreateHandleInternal(::UnityEngine::Playables::PlayableGraph  graph, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::System::IntPtr  jobReflectionData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {"CreateHandleInternal", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, handle, jobReflectionData);
}
inline void UnityEngine::Animations::AnimationScriptPlayable::SetProcessInputsInternal(::UnityEngine::Playables::PlayableHandle  handle, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {"SetProcessInputsInternal", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, value);
}
inline bool UnityEngine::Animations::AnimationScriptPlayable::CreateHandleInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::System::IntPtr  jobReflectionData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {"CreateHandleInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, handle, jobReflectionData);
}
inline void UnityEngine::Animations::AnimationScriptPlayable::SetProcessInputsInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                        {"SetProcessInputsInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, value);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr  UnityEngine::Animations::AnimationScriptPlayable::operator ::UnityEngine::Playables::IPlayable*()  {
return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Animations::AnimationScriptPlayable::i___UnityEngine__Playables__IPlayable()  {
return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>"
constexpr  UnityEngine::Animations::AnimationScriptPlayable::operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>* UnityEngine::Animations::AnimationScriptPlayable::i___System__IEquatable_1___UnityEngine__Animations__AnimationScriptPlayable_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimationScriptPlayable::AnimationScriptPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept  {
this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationScriptPlayable::AnimationScriptPlayable()   {
}
