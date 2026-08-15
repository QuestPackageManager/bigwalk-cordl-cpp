#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationClipPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationClipPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationClipPlayable.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::AnimationClipPlayable (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AnimationClip*)>(&::UnityEngine::Animations::AnimationClipPlayable::Create)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18222f140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationClipPlayable.CreateHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AnimationClip*)>(&::UnityEngine::Animations::AnimationClipPlayable::CreateHandle)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18222f0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"CreateHandle", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationClipPlayable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimationClipPlayable::*)(::UnityEngine::Playables::PlayableHandle)>(&::UnityEngine::Animations::AnimationClipPlayable::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18222f310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationClipPlayable.GetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Animations::AnimationClipPlayable::*)()>(&::UnityEngine::Animations::AnimationClipPlayable::GetHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"GetHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationClipPlayable.op_Implicit___UnityEngine__Playables__Playable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (*)(::UnityEngine::Animations::AnimationClipPlayable)>(&::UnityEngine::Animations::AnimationClipPlayable::op_Implicit___UnityEngine__Playables__Playable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18222f460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationClipPlayable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationClipPlayable.op_Explicit___UnityEngine__Animations__AnimationClipPlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::AnimationClipPlayable (*)(::UnityEngine::Playables::Playable)>(&::UnityEngine::Animations::AnimationClipPlayable::op_Explicit___UnityEngine__Animations__AnimationClipPlayable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18222f3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"op_Explicit", {}, {::i2c::type_of<::UnityEngine::Playables::Playable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationClipPlayable.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimationClipPlayable::*)(::UnityEngine::Animations::AnimationClipPlayable)>(&::UnityEngine::Animations::AnimationClipPlayable::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18222f240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationClipPlayable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationClipPlayable.GetApplyFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimationClipPlayable::*)()>(&::UnityEngine::Animations::AnimationClipPlayable::GetApplyFootIK)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18222f290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"GetApplyFootIK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationClipPlayable.SetApplyFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimationClipPlayable::*)(bool)>(&::UnityEngine::Animations::AnimationClipPlayable::SetApplyFootIK)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18222f2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"SetApplyFootIK", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationClipPlayable.GetApplyPlayableIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimationClipPlayable::*)()>(&::UnityEngine::Animations::AnimationClipPlayable::GetApplyPlayableIK)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18222f2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"GetApplyPlayableIK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationClipPlayable.SetApplyPlayableIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimationClipPlayable::*)(bool)>(&::UnityEngine::Animations::AnimationClipPlayable::SetApplyPlayableIK)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18222f2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"SetApplyPlayableIK", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationClipPlayable.CreateHandleInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AnimationClip*, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Animations::AnimationClipPlayable::CreateHandleInternal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18222f070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"CreateHandleInternal", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationClipPlayable.GetApplyFootIKInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Animations::AnimationClipPlayable::GetApplyFootIKInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18222f290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"GetApplyFootIKInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationClipPlayable.SetApplyFootIKInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, bool)>(&::UnityEngine::Animations::AnimationClipPlayable::SetApplyFootIKInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18222f2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"SetApplyFootIKInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationClipPlayable.GetApplyPlayableIKInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Animations::AnimationClipPlayable::GetApplyPlayableIKInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18222f2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"GetApplyPlayableIKInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationClipPlayable.SetApplyPlayableIKInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, bool)>(&::UnityEngine::Animations::AnimationClipPlayable::SetApplyPlayableIKInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18222f2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"SetApplyPlayableIKInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationClipPlayable.CreateHandleInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::System::IntPtr, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Animations::AnimationClipPlayable::CreateHandleInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18222f060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"CreateHandleInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Animations::AnimationClipPlayable UnityEngine::Animations::AnimationClipPlayable::Create(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimationClipPlayable>(nullptr, ___internal_method, graph, clip);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationClipPlayable::CreateHandle(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"CreateHandle", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(nullptr, ___internal_method, graph, clip);
}
inline void UnityEngine::Animations::AnimationClipPlayable::_ctor(::UnityEngine::Playables::PlayableHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationClipPlayable::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"GetHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Animations::AnimationClipPlayable::op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationClipPlayable  playable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationClipPlayable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(nullptr, ___internal_method, playable);
}
inline ::UnityEngine::Animations::AnimationClipPlayable UnityEngine::Animations::AnimationClipPlayable::op_Explicit___UnityEngine__Animations__AnimationClipPlayable(::UnityEngine::Playables::Playable  playable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"op_Explicit", {}, {::i2c::type_of<::UnityEngine::Playables::Playable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimationClipPlayable>(nullptr, ___internal_method, playable);
}
inline bool UnityEngine::Animations::AnimationClipPlayable::Equals(::UnityEngine::Animations::AnimationClipPlayable  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Animations::AnimationClipPlayable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Animations::AnimationClipPlayable::GetApplyFootIK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"GetApplyFootIK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Animations::AnimationClipPlayable::SetApplyFootIK(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"SetApplyFootIK", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Animations::AnimationClipPlayable::GetApplyPlayableIK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"GetApplyPlayableIK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Animations::AnimationClipPlayable::SetApplyPlayableIK(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"SetApplyPlayableIK", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Animations::AnimationClipPlayable::CreateHandleInternal(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::AnimationClip*  clip, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"CreateHandleInternal", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, clip, handle);
}
inline bool UnityEngine::Animations::AnimationClipPlayable::GetApplyFootIKInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"GetApplyFootIKInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline void UnityEngine::Animations::AnimationClipPlayable::SetApplyFootIKInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"SetApplyFootIKInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, value);
}
inline bool UnityEngine::Animations::AnimationClipPlayable::GetApplyPlayableIKInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"GetApplyPlayableIKInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline void UnityEngine::Animations::AnimationClipPlayable::SetApplyPlayableIKInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"SetApplyPlayableIKInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, value);
}
inline bool UnityEngine::Animations::AnimationClipPlayable::CreateHandleInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::System::IntPtr  clip, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimationClipPlayable>(),
                        {"CreateHandleInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, clip, handle);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr  UnityEngine::Animations::AnimationClipPlayable::operator ::UnityEngine::Playables::IPlayable*()  {
return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Animations::AnimationClipPlayable::i___UnityEngine__Playables__IPlayable()  {
return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>"
constexpr  UnityEngine::Animations::AnimationClipPlayable::operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>* UnityEngine::Animations::AnimationClipPlayable::i___System__IEquatable_1___UnityEngine__Animations__AnimationClipPlayable_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimationClipPlayable::AnimationClipPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept  {
this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationClipPlayable::AnimationClipPlayable()   {
}
