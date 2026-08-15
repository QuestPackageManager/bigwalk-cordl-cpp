#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioPool_def.hpp"
#include "GlobalNamespace/zzzz__AudioPool_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceRefs_def.hpp"
#include "GlobalNamespace/zzzz__HashSetBuffered_1_def.hpp"
#include "GlobalNamespace/zzzz__IAudioBehaviour_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerGroup_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioPool_SourcePoolByMixerGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPool_SourcePoolByMixerGroup::*)(::UnityEngine::Audio::AudioMixerGroup*)>(&::GlobalNamespace::AudioPool_SourcePoolByMixerGroup::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180497e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Audio::AudioMixerGroup*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& GlobalNamespace::AudioPool_SourcePoolByMixerGroup::__cordl_internal_get_Group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& GlobalNamespace::AudioPool_SourcePoolByMixerGroup::__cordl_internal_get_Group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Group;
}
constexpr void GlobalNamespace::AudioPool_SourcePoolByMixerGroup::__cordl_internal_set_Group(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Group = value;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*& GlobalNamespace::AudioPool_SourcePoolByMixerGroup::__cordl_internal_get_Sources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sources;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>* const& GlobalNamespace::AudioPool_SourcePoolByMixerGroup::__cordl_internal_get_Sources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sources;
}
constexpr void GlobalNamespace::AudioPool_SourcePoolByMixerGroup::__cordl_internal_set_Sources(::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Sources = value;
}
inline void GlobalNamespace::AudioPool_SourcePoolByMixerGroup::_ctor(::UnityEngine::Audio::AudioMixerGroup*  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Audio::AudioMixerGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group);
}
inline ::GlobalNamespace::AudioPool_SourcePoolByMixerGroup* GlobalNamespace::AudioPool_SourcePoolByMixerGroup::New_ctor(::UnityEngine::Audio::AudioMixerGroup*  group)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>(group));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioPool_SourcePoolByMixerGroup::AudioPool_SourcePoolByMixerGroup()   {
}
//  Writing Method size for method: ::GlobalNamespace::AudioPool_SortController.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioPool_SortController::*)(::GlobalNamespace::AudioSourceController*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioPool_SortController::Compare)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180497d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool_SortController*>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool_SortController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPool_SortController::*)()>(&::GlobalNamespace::AudioPool_SortController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool_SortController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::AudioPool_SortController::Compare(::GlobalNamespace::AudioSourceController*  x, ::GlobalNamespace::AudioSourceController*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool_SortController*>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void GlobalNamespace::AudioPool_SortController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool_SortController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioPool_SortController* GlobalNamespace::AudioPool_SortController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioPool_SortController*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::AudioSourceController>>"
constexpr  GlobalNamespace::AudioPool_SortController::operator ::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::AudioSourceController>>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::AudioSourceController>>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::AudioSourceController>>* GlobalNamespace::AudioPool_SortController::i___System__Collections__Generic__IComparer_1___UnityW___GlobalNamespace__AudioSourceController__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioPool_SortController::AudioPool_SortController()   {
}
//  Writing Method size for method: ::GlobalNamespace::AudioPool.get_AllControllers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::AudioSourceController>>* (::GlobalNamespace::AudioPool::*)()>(&::GlobalNamespace::AudioPool::get_AllControllers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"get_AllControllers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.get_PlayingControllers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>* (::GlobalNamespace::AudioPool::*)()>(&::GlobalNamespace::AudioPool::get_PlayingControllers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"get_PlayingControllers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.set_PlayingControllers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPool::*)(::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioPool::set_PlayingControllers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"set_PlayingControllers", {}, {::i2c::type_of<::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.get_ActuallyPlayingControllers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>* (::GlobalNamespace::AudioPool::*)()>(&::GlobalNamespace::AudioPool::get_ActuallyPlayingControllers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"get_ActuallyPlayingControllers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.set_ActuallyPlayingControllers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPool::*)(::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioPool::set_ActuallyPlayingControllers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"set_ActuallyPlayingControllers", {}, {::i2c::type_of<::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.get_PlayingSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>* (::GlobalNamespace::AudioPool::*)()>(&::GlobalNamespace::AudioPool::get_PlayingSources)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"get_PlayingSources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.set_PlayingSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPool::*)(::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*)>(&::GlobalNamespace::AudioPool::set_PlayingSources)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"set_PlayingSources", {}, {::i2c::type_of<::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioPool::*)()>(&::GlobalNamespace::AudioPool::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803cf3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.get_UtilASC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioSourceController> (::GlobalNamespace::AudioPool::*)()>(&::GlobalNamespace::AudioPool::get_UtilASC)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"get_UtilASC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.set_UtilASC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPool::*)(::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioPool::set_UtilASC)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803117a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"set_UtilASC", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.AudioUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPool::*)(float_t)>(&::GlobalNamespace::AudioPool::AudioUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.AudioFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPool::*)(float_t)>(&::GlobalNamespace::AudioPool::AudioFixedUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.AudioLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPool::*)(float_t)>(&::GlobalNamespace::AudioPool::AudioLateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.AudioSlowUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPool::*)(float_t)>(&::GlobalNamespace::AudioPool::AudioSlowUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPool::*)(::UnityEngine::GameObject*, int32_t, ::UnityEngine::Transform*, int32_t, ::UnityEngine::Transform*)>(&::GlobalNamespace::AudioPool::Initialize)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x18048a420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.GetController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioSourceController> (::GlobalNamespace::AudioPool::*)(bool)>(&::GlobalNamespace::AudioPool::GetController)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18048a2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"GetController", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.FreeController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPool::*)(::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioPool::FreeController)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180489fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"FreeController", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.GetAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioSourceRefs> (::GlobalNamespace::AudioPool::*)(::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioPool::GetAudioSource)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18048a0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"GetAudioSource", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.FreeAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPool::*)(::GlobalNamespace::AudioSourceRefs*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioPool::FreeAudioSource)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x180489cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"FreeAudioSource", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceRefs*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.FindMaxPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioPool_SourcePoolByMixerGroup* (::GlobalNamespace::AudioPool::*)()>(&::GlobalNamespace::AudioPool::FindMaxPool)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180489c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"FindMaxPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool.StealSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioSourceRefs> (::GlobalNamespace::AudioPool::*)(::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioPool::StealSource)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x18048a9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"StealSource", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPool::*)()>(&::GlobalNamespace::AudioPool::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18048acd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::AudioPool::__cordl_internal_get__allControllers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allControllers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::AudioPool::__cordl_internal_get__allControllers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allControllers;
}
constexpr void GlobalNamespace::AudioPool::__cordl_internal_set__allControllers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allControllers = value;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::AudioPool::__cordl_internal_get__availableControllers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____availableControllers;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::AudioPool::__cordl_internal_get__availableControllers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____availableControllers;
}
constexpr void GlobalNamespace::AudioPool::__cordl_internal_set__availableControllers(::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____availableControllers = value;
}
constexpr int32_t& GlobalNamespace::AudioPool::__cordl_internal_get__initialControllerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialControllerCount;
}
constexpr int32_t const& GlobalNamespace::AudioPool::__cordl_internal_get__initialControllerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialControllerCount;
}
constexpr void GlobalNamespace::AudioPool::__cordl_internal_set__initialControllerCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialControllerCount = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AudioPool::__cordl_internal_get__controllerParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AudioPool::__cordl_internal_get__controllerParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerParent;
}
constexpr void GlobalNamespace::AudioPool::__cordl_internal_set__controllerParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerParent = value;
}
constexpr ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::AudioPool::__cordl_internal_get__PlayingControllers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayingControllers_k__BackingField;
}
constexpr ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::AudioPool::__cordl_internal_get__PlayingControllers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayingControllers_k__BackingField;
}
constexpr void GlobalNamespace::AudioPool::__cordl_internal_set__PlayingControllers_k__BackingField(::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayingControllers_k__BackingField = value;
}
constexpr ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::AudioPool::__cordl_internal_get__ActuallyPlayingControllers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActuallyPlayingControllers_k__BackingField;
}
constexpr ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::AudioPool::__cordl_internal_get__ActuallyPlayingControllers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActuallyPlayingControllers_k__BackingField;
}
constexpr void GlobalNamespace::AudioPool::__cordl_internal_set__ActuallyPlayingControllers_k__BackingField(::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActuallyPlayingControllers_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*& GlobalNamespace::AudioPool::__cordl_internal_get__initialSources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialSources;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>* const& GlobalNamespace::AudioPool::__cordl_internal_get__initialSources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialSources;
}
constexpr void GlobalNamespace::AudioPool::__cordl_internal_set__initialSources(::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialSources = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Audio::AudioMixerGroup>,::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>*& GlobalNamespace::AudioPool::__cordl_internal_get__avaiableSourcesByMixerGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____avaiableSourcesByMixerGroup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Audio::AudioMixerGroup>,::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>* const& GlobalNamespace::AudioPool::__cordl_internal_get__avaiableSourcesByMixerGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____avaiableSourcesByMixerGroup;
}
constexpr void GlobalNamespace::AudioPool::__cordl_internal_set__avaiableSourcesByMixerGroup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Audio::AudioMixerGroup>,::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____avaiableSourcesByMixerGroup = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>*& GlobalNamespace::AudioPool::__cordl_internal_get__sourcePools()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourcePools;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>* const& GlobalNamespace::AudioPool::__cordl_internal_get__sourcePools() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourcePools;
}
constexpr void GlobalNamespace::AudioPool::__cordl_internal_set__sourcePools(::System::Collections::Generic::List_1<::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourcePools = value;
}
constexpr ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*& GlobalNamespace::AudioPool::__cordl_internal_get__PlayingSources_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayingSources_k__BackingField;
}
constexpr ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>* const& GlobalNamespace::AudioPool::__cordl_internal_get__PlayingSources_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayingSources_k__BackingField;
}
constexpr void GlobalNamespace::AudioPool::__cordl_internal_set__PlayingSources_k__BackingField(::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayingSources_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioPool_SortController*& GlobalNamespace::AudioPool::__cordl_internal_get__sort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sort;
}
constexpr ::GlobalNamespace::AudioPool_SortController* const& GlobalNamespace::AudioPool::__cordl_internal_get__sort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sort;
}
constexpr void GlobalNamespace::AudioPool::__cordl_internal_set__sort(::GlobalNamespace::AudioPool_SortController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sort = value;
}
constexpr bool& GlobalNamespace::AudioPool::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& GlobalNamespace::AudioPool::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void GlobalNamespace::AudioPool::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::AudioPool::__cordl_internal_get__UtilASC_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UtilASC_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::AudioPool::__cordl_internal_get__UtilASC_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UtilASC_k__BackingField;
}
constexpr void GlobalNamespace::AudioPool::__cordl_internal_set__UtilASC_k__BackingField(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UtilASC_k__BackingField = value;
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::AudioSourceController>>* GlobalNamespace::AudioPool::get_AllControllers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"get_AllControllers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>(this, ___internal_method);
}
inline ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>* GlobalNamespace::AudioPool::get_PlayingControllers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"get_PlayingControllers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioPool::set_PlayingControllers(::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"set_PlayingControllers", {}, {::i2c::type_of<::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>* GlobalNamespace::AudioPool::get_ActuallyPlayingControllers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"get_ActuallyPlayingControllers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioPool::set_ActuallyPlayingControllers(::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"set_ActuallyPlayingControllers", {}, {::i2c::type_of<::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>* GlobalNamespace::AudioPool::get_PlayingSources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"get_PlayingSources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioPool::set_PlayingSources(::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"set_PlayingSources", {}, {::i2c::type_of<::GlobalNamespace::HashSetBuffered_1<::UnityW<::GlobalNamespace::AudioSourceRefs>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AudioPool::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::AudioSourceController> GlobalNamespace::AudioPool::get_UtilASC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"get_UtilASC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioSourceController>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioPool::set_UtilASC(::GlobalNamespace::AudioSourceController*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"set_UtilASC", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioPool::AudioUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioPool::AudioFixedUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioPool::AudioLateUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioPool::AudioSlowUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioPool::Initialize(::UnityEngine::GameObject*  sourcePrefab, int32_t  sourceCount, ::UnityEngine::Transform*  sourceParent, int32_t  controllerCount, ::UnityEngine::Transform*  controllerParent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourcePrefab, sourceCount, sourceParent, controllerCount, controllerParent);
}
inline ::UnityW<::GlobalNamespace::AudioSourceController> GlobalNamespace::AudioPool::GetController(bool  forceAdd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"GetController", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioSourceController>>(this, ___internal_method, forceAdd);
}
inline void GlobalNamespace::AudioPool::FreeController(::GlobalNamespace::AudioSourceController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"FreeController", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline ::UnityW<::GlobalNamespace::AudioSourceRefs> GlobalNamespace::AudioPool::GetAudioSource(::GlobalNamespace::AudioSourceController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"GetAudioSource", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioSourceRefs>>(this, ___internal_method, controller);
}
inline void GlobalNamespace::AudioPool::FreeAudioSource(::GlobalNamespace::AudioSourceRefs*  source, ::GlobalNamespace::AudioSourceController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"FreeAudioSource", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceRefs*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, controller);
}
inline ::GlobalNamespace::AudioPool_SourcePoolByMixerGroup* GlobalNamespace::AudioPool::FindMaxPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"FindMaxPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioPool_SourcePoolByMixerGroup*>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::AudioSourceRefs> GlobalNamespace::AudioPool::StealSource(::GlobalNamespace::AudioSourceController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {"StealSource", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioSourceRefs>>(this, ___internal_method, controller);
}
inline void GlobalNamespace::AudioPool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioPool* GlobalNamespace::AudioPool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioPool*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr  GlobalNamespace::AudioPool::operator ::GlobalNamespace::IAudioBehaviour*() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* GlobalNamespace::AudioPool::i___GlobalNamespace__IAudioBehaviour() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioPool::AudioPool()   {
}
