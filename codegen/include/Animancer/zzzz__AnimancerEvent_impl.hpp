#pragma once
// IWYU pragma private; include "Animancer/AnimancerEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_impl.hpp"
#include "Animancer/zzzz__AnimancerEvent_def.hpp"
#include "Animancer/zzzz__AnimancerEvent_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__FastEnumerator_1_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::Animancer::Sequence_AnimancerEvent_Serializable.get_NormalizedTimes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::ArrayW<float_t>> (::Animancer::Sequence_AnimancerEvent_Serializable::*)()>(&::Animancer::Sequence_AnimancerEvent_Serializable::get_NormalizedTimes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"get_NormalizedTimes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Sequence_AnimancerEvent_Serializable.get_Callbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::ArrayW<::UnityEngine::Events::UnityEvent*>> (::Animancer::Sequence_AnimancerEvent_Serializable::*)()>(&::Animancer::Sequence_AnimancerEvent_Serializable::get_Callbacks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"get_Callbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Sequence_AnimancerEvent_Serializable.get_Names
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::ArrayW<::StringW>> (::Animancer::Sequence_AnimancerEvent_Serializable::*)()>(&::Animancer::Sequence_AnimancerEvent_Serializable::get_Names)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"get_Names", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Sequence_AnimancerEvent_Serializable.get_Events
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerEvent_Sequence* (::Animancer::Sequence_AnimancerEvent_Serializable::*)()>(&::Animancer::Sequence_AnimancerEvent_Serializable::get_Events)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1802f4940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"get_Events", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Sequence_AnimancerEvent_Serializable.set_Events
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Sequence_AnimancerEvent_Serializable::*)(::Animancer::AnimancerEvent_Sequence*)>(&::Animancer::Sequence_AnimancerEvent_Serializable::set_Events)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"set_Events", {}, {::i2c::type_of<::Animancer::AnimancerEvent_Sequence*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Sequence_AnimancerEvent_Serializable.GetEventsOptional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerEvent_Sequence* (::Animancer::Sequence_AnimancerEvent_Serializable::*)()>(&::Animancer::Sequence_AnimancerEvent_Serializable::GetEventsOptional)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1802f4480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"GetEventsOptional", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Sequence_AnimancerEvent_Serializable.op_Implicit___Animancer__AnimancerEvent_Sequence_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerEvent_Sequence* (*)(::Animancer::Sequence_AnimancerEvent_Serializable*)>(&::Animancer::Sequence_AnimancerEvent_Serializable::op_Implicit___Animancer__AnimancerEvent_Sequence_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Animancer::Sequence_AnimancerEvent_Serializable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Sequence_AnimancerEvent_Serializable.get_InitializedEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerEvent_Sequence* (::Animancer::Sequence_AnimancerEvent_Serializable::*)()>(&::Animancer::Sequence_AnimancerEvent_Serializable::get_InitializedEvents)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"get_InitializedEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Sequence_AnimancerEvent_Serializable.GetInvoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (*)(::UnityEngine::Events::UnityEvent*)>(&::Animancer::Sequence_AnimancerEvent_Serializable::GetInvoker)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802f4790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"GetInvoker", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Sequence_AnimancerEvent_Serializable.HasPersistentCalls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Events::UnityEvent*)>(&::Animancer::Sequence_AnimancerEvent_Serializable::HasPersistentCalls)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f4880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"HasPersistentCalls", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Sequence_AnimancerEvent_Serializable.GetNormalizedEndTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::Sequence_AnimancerEvent_Serializable::*)(float_t)>(&::Animancer::Sequence_AnimancerEvent_Serializable::GetNormalizedEndTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802f4810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"GetNormalizedEndTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Sequence_AnimancerEvent_Serializable.SetNormalizedEndTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Sequence_AnimancerEvent_Serializable::*)(float_t)>(&::Animancer::Sequence_AnimancerEvent_Serializable::SetNormalizedEndTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802f48b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"SetNormalizedEndTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Sequence_AnimancerEvent_Serializable.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Sequence_AnimancerEvent_Serializable::*)(::Animancer::Sequence_AnimancerEvent_Serializable*)>(&::Animancer::Sequence_AnimancerEvent_Serializable::CopyFrom)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802f43e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Animancer::Sequence_AnimancerEvent_Serializable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Sequence_AnimancerEvent_Serializable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Sequence_AnimancerEvent_Serializable::*)()>(&::Animancer::Sequence_AnimancerEvent_Serializable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& Animancer::Sequence_AnimancerEvent_Serializable::__cordl_internal_get__NormalizedTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NormalizedTimes;
}
constexpr ::ArrayW<float_t> const& Animancer::Sequence_AnimancerEvent_Serializable::__cordl_internal_get__NormalizedTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NormalizedTimes;
}
constexpr void Animancer::Sequence_AnimancerEvent_Serializable::__cordl_internal_set__NormalizedTimes(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NormalizedTimes = value;
}
constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*>& Animancer::Sequence_AnimancerEvent_Serializable::__cordl_internal_get__Callbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Callbacks;
}
constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*> const& Animancer::Sequence_AnimancerEvent_Serializable::__cordl_internal_get__Callbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Callbacks;
}
constexpr void Animancer::Sequence_AnimancerEvent_Serializable::__cordl_internal_set__Callbacks(::ArrayW<::UnityEngine::Events::UnityEvent*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Callbacks = value;
}
constexpr ::ArrayW<::StringW>& Animancer::Sequence_AnimancerEvent_Serializable::__cordl_internal_get__Names()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Names;
}
constexpr ::ArrayW<::StringW> const& Animancer::Sequence_AnimancerEvent_Serializable::__cordl_internal_get__Names() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Names;
}
constexpr void Animancer::Sequence_AnimancerEvent_Serializable::__cordl_internal_set__Names(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Names = value;
}
constexpr ::Animancer::AnimancerEvent_Sequence*& Animancer::Sequence_AnimancerEvent_Serializable::__cordl_internal_get__Events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Events;
}
constexpr ::Animancer::AnimancerEvent_Sequence* const& Animancer::Sequence_AnimancerEvent_Serializable::__cordl_internal_get__Events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Events;
}
constexpr void Animancer::Sequence_AnimancerEvent_Serializable::__cordl_internal_set__Events(::Animancer::AnimancerEvent_Sequence*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Events = value;
}
inline ::by_ref<::ArrayW<float_t>> Animancer::Sequence_AnimancerEvent_Serializable::get_NormalizedTimes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"get_NormalizedTimes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::ArrayW<float_t>>>(this, ___internal_method);
}
inline ::by_ref<::ArrayW<::UnityEngine::Events::UnityEvent*>> Animancer::Sequence_AnimancerEvent_Serializable::get_Callbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"get_Callbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::ArrayW<::UnityEngine::Events::UnityEvent*>>>(this, ___internal_method);
}
inline ::by_ref<::ArrayW<::StringW>> Animancer::Sequence_AnimancerEvent_Serializable::get_Names()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"get_Names", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::ArrayW<::StringW>>>(this, ___internal_method);
}
inline ::Animancer::AnimancerEvent_Sequence* Animancer::Sequence_AnimancerEvent_Serializable::get_Events()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"get_Events", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerEvent_Sequence*>(this, ___internal_method);
}
inline void Animancer::Sequence_AnimancerEvent_Serializable::set_Events(::Animancer::AnimancerEvent_Sequence*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"set_Events", {}, {::i2c::type_of<::Animancer::AnimancerEvent_Sequence*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Animancer::AnimancerEvent_Sequence* Animancer::Sequence_AnimancerEvent_Serializable::GetEventsOptional()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"GetEventsOptional", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerEvent_Sequence*>(this, ___internal_method);
}
inline ::Animancer::AnimancerEvent_Sequence* Animancer::Sequence_AnimancerEvent_Serializable::op_Implicit___Animancer__AnimancerEvent_Sequence_(::Animancer::Sequence_AnimancerEvent_Serializable*  serializable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Animancer::Sequence_AnimancerEvent_Serializable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerEvent_Sequence*>(nullptr, ___internal_method, serializable);
}
inline ::Animancer::AnimancerEvent_Sequence* Animancer::Sequence_AnimancerEvent_Serializable::get_InitializedEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"get_InitializedEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerEvent_Sequence*>(this, ___internal_method);
}
inline ::System::Action* Animancer::Sequence_AnimancerEvent_Serializable::GetInvoker(::UnityEngine::Events::UnityEvent*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"GetInvoker", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(nullptr, ___internal_method, callback);
}
inline bool Animancer::Sequence_AnimancerEvent_Serializable::HasPersistentCalls(::UnityEngine::Events::UnityEvent*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"HasPersistentCalls", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callback);
}
inline float_t Animancer::Sequence_AnimancerEvent_Serializable::GetNormalizedEndTime(float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"GetNormalizedEndTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, speed);
}
inline void Animancer::Sequence_AnimancerEvent_Serializable::SetNormalizedEndTime(float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"SetNormalizedEndTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, normalizedTime);
}
inline void Animancer::Sequence_AnimancerEvent_Serializable::CopyFrom(::Animancer::Sequence_AnimancerEvent_Serializable*  copyFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Animancer::Sequence_AnimancerEvent_Serializable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline void Animancer::Sequence_AnimancerEvent_Serializable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Sequence_AnimancerEvent_Serializable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Sequence_AnimancerEvent_Serializable* Animancer::Sequence_AnimancerEvent_Serializable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Sequence_AnimancerEvent_Serializable*>());
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::Sequence_AnimancerEvent_Serializable*>"
constexpr  Animancer::Sequence_AnimancerEvent_Serializable::operator ::Animancer::ICopyable_1<::Animancer::Sequence_AnimancerEvent_Serializable*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::Sequence_AnimancerEvent_Serializable*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::Sequence_AnimancerEvent_Serializable*>"
constexpr ::Animancer::ICopyable_1<::Animancer::Sequence_AnimancerEvent_Serializable*>* Animancer::Sequence_AnimancerEvent_Serializable::i___Animancer__ICopyable_1___Animancer__Sequence_AnimancerEvent_Serializable__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::Sequence_AnimancerEvent_Serializable*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::Sequence_AnimancerEvent_Serializable::Sequence_AnimancerEvent_Serializable()   {
}
//  Writing Method size for method: ::Animancer::AnimancerEvent.Dummy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Animancer::AnimancerEvent::Dummy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"Dummy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent.IsNullOrDummy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Action*)>(&::Animancer::AnimancerEvent::IsNullOrDummy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802de470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"IsNullOrDummy", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent::*)(float_t, ::System::Action*)>(&::Animancer::AnimancerEvent::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802de600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::AnimancerEvent::*)()>(&::Animancer::AnimancerEvent::ToString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802de4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerEvent>(),
                    {::i2c::class_of<::Animancer::AnimancerEvent>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent.AppendDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent::*)(::System::Text::StringBuilder*)>(&::Animancer::AnimancerEvent::AppendDetails)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1802ddb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"AppendDetails", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent.get_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (*)()>(&::Animancer::AnimancerEvent::get_CurrentState)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802de660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"get_CurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent.get_CurrentEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Animancer::AnimancerEvent> (*)()>(&::Animancer::AnimancerEvent::get_CurrentEvent)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802de620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"get_CurrentEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerEvent::Invoke)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1802de290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"Invoke", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent.GetFadeOutDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Animancer::AnimancerEvent::GetFadeOutDuration)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802de1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"GetFadeOutDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent.GetFadeOutDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::AnimancerEvent::GetFadeOutDuration)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802ddfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"GetFadeOutDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent.GetFadeOutDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Animancer::AnimancerState*, float_t)>(&::Animancer::AnimancerEvent::GetFadeOutDuration)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1802de010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"GetFadeOutDuration", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Animancer::AnimancerEvent, ::Animancer::AnimancerEvent)>(&::Animancer::AnimancerEvent::op_Equality)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802de6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"op_Equality", {}, {::i2c::type_of<::Animancer::AnimancerEvent>(), ::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Animancer::AnimancerEvent, ::Animancer::AnimancerEvent)>(&::Animancer::AnimancerEvent::op_Inequality)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1802de720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Animancer::AnimancerEvent>(), ::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerEvent::*)(::Animancer::AnimancerEvent)>(&::Animancer::AnimancerEvent::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802dde50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"Equals", {}, {::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerEvent::*)(::System::Object*)>(&::Animancer::AnimancerEvent::Equals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802ddef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerEvent>(),
                    {::i2c::class_of<::Animancer::AnimancerEvent>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent::*)()>(&::Animancer::AnimancerEvent::GetHashCode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802de220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerEvent>(),
                    {::i2c::class_of<::Animancer::AnimancerEvent>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Animancer::AnimancerEvent::setStaticF_DummyCallback(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "DummyCallback", ::Animancer::AnimancerEvent>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Animancer::AnimancerEvent::getStaticF_DummyCallback()  {
return ::cordl_internals::getStaticField<::System::Action*, "DummyCallback", ::Animancer::AnimancerEvent>();
}
inline void Animancer::AnimancerEvent::setStaticF__CurrentState(::Animancer::AnimancerState*  value)  {
::cordl_internals::setStaticField<::Animancer::AnimancerState*, "_CurrentState", ::Animancer::AnimancerEvent>(std::forward<::Animancer::AnimancerState*>(value));
}
inline ::Animancer::AnimancerState* Animancer::AnimancerEvent::getStaticF__CurrentState()  {
return ::cordl_internals::getStaticField<::Animancer::AnimancerState*, "_CurrentState", ::Animancer::AnimancerEvent>();
}
inline void Animancer::AnimancerEvent::setStaticF__CurrentEvent(::Animancer::AnimancerEvent  value)  {
::cordl_internals::setStaticField<::Animancer::AnimancerEvent, "_CurrentEvent", ::Animancer::AnimancerEvent>(std::forward<::Animancer::AnimancerEvent>(value));
}
inline ::Animancer::AnimancerEvent Animancer::AnimancerEvent::getStaticF__CurrentEvent()  {
return ::cordl_internals::getStaticField<::Animancer::AnimancerEvent, "_CurrentEvent", ::Animancer::AnimancerEvent>();
}
inline void Animancer::AnimancerEvent::Dummy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"Dummy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Animancer::AnimancerEvent::IsNullOrDummy(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"IsNullOrDummy", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callback);
}
inline void Animancer::AnimancerEvent::_ctor(float_t  normalizedTime, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, normalizedTime, callback);
}
inline ::StringW Animancer::AnimancerEvent::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerEvent>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Animancer::AnimancerEvent::AppendDetails(::System::Text::StringBuilder*  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"AppendDetails", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerEvent::get_CurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"get_CurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(nullptr, ___internal_method);
}
inline ::by_ref<::Animancer::AnimancerEvent> Animancer::AnimancerEvent::get_CurrentEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"get_CurrentEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Animancer::AnimancerEvent>>(nullptr, ___internal_method);
}
inline void Animancer::AnimancerEvent::Invoke(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"Invoke", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state);
}
inline float_t Animancer::AnimancerEvent::GetFadeOutDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"GetFadeOutDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t Animancer::AnimancerEvent::GetFadeOutDuration(float_t  minDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"GetFadeOutDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, minDuration);
}
inline float_t Animancer::AnimancerEvent::GetFadeOutDuration(::Animancer::AnimancerState*  state, float_t  minDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"GetFadeOutDuration", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, state, minDuration);
}
inline bool Animancer::AnimancerEvent::op_Equality(::Animancer::AnimancerEvent  a, ::Animancer::AnimancerEvent  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"op_Equality", {}, {::i2c::type_of<::Animancer::AnimancerEvent>(), ::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Animancer::AnimancerEvent::op_Inequality(::Animancer::AnimancerEvent  a, ::Animancer::AnimancerEvent  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Animancer::AnimancerEvent>(), ::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Animancer::AnimancerEvent::Equals(::Animancer::AnimancerEvent  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent>(),
                        {"Equals", {}, {::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Animancer::AnimancerEvent::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerEvent>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Animancer::AnimancerEvent::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerEvent>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Animancer::AnimancerEvent>"
constexpr  Animancer::AnimancerEvent::operator ::System::IEquatable_1<::Animancer::AnimancerEvent>*()  {
return static_cast<::System::IEquatable_1<::Animancer::AnimancerEvent>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Animancer::AnimancerEvent>"
constexpr ::System::IEquatable_1<::Animancer::AnimancerEvent>* Animancer::AnimancerEvent::i___System__IEquatable_1___Animancer__AnimancerEvent_()  {
return static_cast<::System::IEquatable_1<::Animancer::AnimancerEvent>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "normalizedTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "callback", ty: "::System::Action*", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::AnimancerEvent::AnimancerEvent(float_t  normalizedTime, ::System::Action*  callback) noexcept  {
this->normalizedTime = normalizedTime;
this->callback = callback;
}
// Ctor Parameters []
constexpr ::Animancer::AnimancerEvent::AnimancerEvent()   {
}
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent_Sequence::*)()>(&::Animancer::AnimancerEvent_Sequence::get_Count)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.set_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(int32_t)>(&::Animancer::AnimancerEvent_Sequence::set_Count)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerEvent_Sequence::*)()>(&::Animancer::AnimancerEvent_Sequence::get_IsEmpty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f41c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent_Sequence::*)()>(&::Animancer::AnimancerEvent_Sequence::get_Capacity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f4180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.set_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(int32_t)>(&::Animancer::AnimancerEvent_Sequence::set_Capacity)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802f42d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent_Sequence::*)()>(&::Animancer::AnimancerEvent_Sequence::get_Version)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_Version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.set_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(int32_t)>(&::Animancer::AnimancerEvent_Sequence::set_Version)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"set_Version", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.SetShouldNotModifyReason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(::StringW)>(&::Animancer::AnimancerEvent_Sequence::SetShouldNotModifyReason)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"SetShouldNotModifyReason", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.OnSequenceModified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)()>(&::Animancer::AnimancerEvent_Sequence::OnSequenceModified)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"OnSequenceModified", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.get_EndEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerEvent (::Animancer::AnimancerEvent_Sequence::*)()>(&::Animancer::AnimancerEvent_Sequence::get_EndEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_EndEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.set_EndEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(::Animancer::AnimancerEvent)>(&::Animancer::AnimancerEvent_Sequence::set_EndEvent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f43a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"set_EndEvent", {}, {::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.get_OnEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::Animancer::AnimancerEvent_Sequence::*)()>(&::Animancer::AnimancerEvent_Sequence::get_OnEnd)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_OnEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.set_OnEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(::System::Action*)>(&::Animancer::AnimancerEvent_Sequence::set_OnEnd)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"set_OnEnd", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.get_NormalizedEndTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerEvent_Sequence::*)()>(&::Animancer::AnimancerEvent_Sequence::get_NormalizedEndTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_NormalizedEndTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.set_NormalizedEndTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(float_t)>(&::Animancer::AnimancerEvent_Sequence::set_NormalizedEndTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"set_NormalizedEndTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.GetDefaultNormalizedStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::AnimancerEvent_Sequence::GetDefaultNormalizedStartTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"GetDefaultNormalizedStartTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.GetDefaultNormalizedEndTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::AnimancerEvent_Sequence::GetDefaultNormalizedEndTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f2bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"GetDefaultNormalizedEndTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.get_Names
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::ArrayW<::StringW>> (::Animancer::AnimancerEvent_Sequence::*)()>(&::Animancer::AnimancerEvent_Sequence::get_Names)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_Names", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.GetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::AnimancerEvent_Sequence::*)(int32_t)>(&::Animancer::AnimancerEvent_Sequence::GetName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f2c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"GetName", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.SetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(int32_t, ::StringW)>(&::Animancer::AnimancerEvent_Sequence::SetName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802f3aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"SetName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent_Sequence::*)(::StringW, int32_t)>(&::Animancer::AnimancerEvent_Sequence::IndexOf)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802f2ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"IndexOf", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.IndexOfRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent_Sequence::*)(::StringW, int32_t)>(&::Animancer::AnimancerEvent_Sequence::IndexOfRequired)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802f2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"IndexOfRequired", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)()>(&::Animancer::AnimancerEvent_Sequence::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802f40d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(int32_t)>(&::Animancer::AnimancerEvent_Sequence::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802f3ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(::Animancer::AnimancerEvent_Sequence*)>(&::Animancer::AnimancerEvent_Sequence::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1802f3f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::AnimancerEvent_Sequence*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerEvent (::Animancer::AnimancerEvent_Sequence::*)(int32_t)>(&::Animancer::AnimancerEvent_Sequence::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f41e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerEvent (::Animancer::AnimancerEvent_Sequence::*)(::StringW)>(&::Animancer::AnimancerEvent_Sequence::get_Item)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802f4210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.AssertNormalizedTimes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerEvent_Sequence::AssertNormalizedTimes)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802f24a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"AssertNormalizedTimes", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.AssertNormalizedTimes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(::Animancer::AnimancerState*, bool)>(&::Animancer::AnimancerEvent_Sequence::AssertNormalizedTimes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"AssertNormalizedTimes", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.DeepToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::AnimancerEvent_Sequence::*)(bool)>(&::Animancer::AnimancerEvent_Sequence::DeepToString)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1802f28d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"DeepToString", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::FastEnumerator_1<::Animancer::AnimancerEvent> (::Animancer::AnimancerEvent_Sequence::*)()>(&::Animancer::AnimancerEvent_Sequence::GetEnumerator)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f2c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.System_Collections_Generic_IEnumerable_Animancer_AnimancerEvent__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Animancer::AnimancerEvent>* (::Animancer::AnimancerEvent_Sequence::*)()>(&::Animancer::AnimancerEvent_Sequence::System_Collections_Generic_IEnumerable_Animancer_AnimancerEvent__GetEnumerator)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802f3e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"System.Collections.Generic.IEnumerable<Animancer.AnimancerEvent>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Animancer::AnimancerEvent_Sequence::*)()>(&::Animancer::AnimancerEvent_Sequence::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802f3e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent_Sequence::*)(::Animancer::AnimancerEvent)>(&::Animancer::AnimancerEvent_Sequence::IndexOf)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f2fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"IndexOf", {}, {::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.IndexOfRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent_Sequence::*)(::Animancer::AnimancerEvent)>(&::Animancer::AnimancerEvent_Sequence::IndexOfRequired)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802f2ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"IndexOfRequired", {}, {::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent_Sequence::*)(int32_t, ::Animancer::AnimancerEvent)>(&::Animancer::AnimancerEvent_Sequence::IndexOf)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1802f2de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"IndexOf", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.IndexOfRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent_Sequence::*)(int32_t, ::Animancer::AnimancerEvent)>(&::Animancer::AnimancerEvent_Sequence::IndexOfRequired)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802f2c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"IndexOfRequired", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent_Sequence::*)(::Animancer::AnimancerEvent)>(&::Animancer::AnimancerEvent_Sequence::Add)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802f21d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Add", {}, {::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent_Sequence::*)(float_t, ::System::Action*)>(&::Animancer::AnimancerEvent_Sequence::Add)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1802f23b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Add", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent_Sequence::*)(int32_t, ::Animancer::AnimancerEvent)>(&::Animancer::AnimancerEvent_Sequence::Add)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1802f22a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Add", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent_Sequence::*)(int32_t, float_t, ::System::Action*)>(&::Animancer::AnimancerEvent_Sequence::Add)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802f2240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Add", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerEvent>*)>(&::Animancer::AnimancerEvent_Sequence::AddRange)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1802f1ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"AddRange", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.AddCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(int32_t, ::System::Action*)>(&::Animancer::AnimancerEvent_Sequence::AddCallback)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802f1f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"AddCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.AddCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(::StringW, ::System::Action*)>(&::Animancer::AnimancerEvent_Sequence::AddCallback)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1802f1e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"AddCallback", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.RemoveCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(int32_t, ::System::Action*)>(&::Animancer::AnimancerEvent_Sequence::RemoveCallback)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1802f3700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"RemoveCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.RemoveCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(::StringW, ::System::Action*)>(&::Animancer::AnimancerEvent_Sequence::RemoveCallback)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1802f35b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"RemoveCallback", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.SetCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(int32_t, ::System::Action*)>(&::Animancer::AnimancerEvent_Sequence::SetCallback)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802f39a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"SetCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.SetCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(::StringW, ::System::Action*)>(&::Animancer::AnimancerEvent_Sequence::SetCallback)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802f39f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"SetCallback", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.AssertCallbackUniqueness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*, ::System::Action*, ::StringW)>(&::Animancer::AnimancerEvent_Sequence::AssertCallbackUniqueness)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"AssertCallbackUniqueness", {}, {::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.AssertEventUniqueness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(int32_t, ::Animancer::AnimancerEvent)>(&::Animancer::AnimancerEvent_Sequence::AssertEventUniqueness)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"AssertEventUniqueness", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.SetNormalizedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent_Sequence::*)(int32_t, float_t)>(&::Animancer::AnimancerEvent_Sequence::SetNormalizedTime)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1802f3b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"SetNormalizedTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.SetNormalizedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent_Sequence::*)(::StringW, float_t)>(&::Animancer::AnimancerEvent_Sequence::SetNormalizedTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802f3d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"SetNormalizedTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.SetNormalizedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent_Sequence::*)(::Animancer::AnimancerEvent, float_t)>(&::Animancer::AnimancerEvent_Sequence::SetNormalizedTime)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802f3db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"SetNormalizedTime", {}, {::i2c::type_of<::Animancer::AnimancerEvent>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent_Sequence::*)(float_t)>(&::Animancer::AnimancerEvent_Sequence::Insert)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1802f3170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Insert", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerEvent_Sequence::*)(int32_t, float_t)>(&::Animancer::AnimancerEvent_Sequence::Insert)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802f30a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(int32_t)>(&::Animancer::AnimancerEvent_Sequence::Insert)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1802f33b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(int32_t)>(&::Animancer::AnimancerEvent_Sequence::Remove)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1802f3890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Remove", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerEvent_Sequence::*)(::StringW)>(&::Animancer::AnimancerEvent_Sequence::Remove)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f3850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerEvent_Sequence::*)(::Animancer::AnimancerEvent)>(&::Animancer::AnimancerEvent_Sequence::Remove)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802f3800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Remove", {}, {::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)()>(&::Animancer::AnimancerEvent_Sequence::Clear)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802f2580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(::Animancer::AnimancerEvent_Sequence*)>(&::Animancer::AnimancerEvent_Sequence::CopyFrom)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1802f2770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Animancer::AnimancerEvent_Sequence*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.AddAllEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerEvent_Sequence::AddAllEvents)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1802f1c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"AddAllEvents", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerEvent_Sequence::*)(::ArrayW<::Animancer::AnimancerEvent>, int32_t)>(&::Animancer::AnimancerEvent_Sequence::CopyTo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f28a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::Animancer::AnimancerEvent>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerEvent_Sequence.ContentsAreEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerEvent_Sequence::*)(::Animancer::AnimancerEvent_Sequence*)>(&::Animancer::AnimancerEvent_Sequence::ContentsAreEqual)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1802f2600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"ContentsAreEqual", {}, {::i2c::type_of<::Animancer::AnimancerEvent_Sequence*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Animancer::AnimancerEvent>& Animancer::AnimancerEvent_Sequence::__cordl_internal_get__Events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Events;
}
constexpr ::ArrayW<::Animancer::AnimancerEvent> const& Animancer::AnimancerEvent_Sequence::__cordl_internal_get__Events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Events;
}
constexpr void Animancer::AnimancerEvent_Sequence::__cordl_internal_set__Events(::ArrayW<::Animancer::AnimancerEvent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Events = value;
}
constexpr int32_t& Animancer::AnimancerEvent_Sequence::__cordl_internal_get__Count_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
constexpr int32_t const& Animancer::AnimancerEvent_Sequence::__cordl_internal_get__Count_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
constexpr void Animancer::AnimancerEvent_Sequence::__cordl_internal_set__Count_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Count_k__BackingField = value;
}
constexpr int32_t& Animancer::AnimancerEvent_Sequence::__cordl_internal_get__Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Version;
}
constexpr int32_t const& Animancer::AnimancerEvent_Sequence::__cordl_internal_get__Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Version;
}
constexpr void Animancer::AnimancerEvent_Sequence::__cordl_internal_set__Version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Version = value;
}
constexpr ::Animancer::AnimancerEvent& Animancer::AnimancerEvent_Sequence::__cordl_internal_get__EndEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EndEvent;
}
constexpr ::Animancer::AnimancerEvent const& Animancer::AnimancerEvent_Sequence::__cordl_internal_get__EndEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EndEvent;
}
constexpr void Animancer::AnimancerEvent_Sequence::__cordl_internal_set__EndEvent(::Animancer::AnimancerEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EndEvent = value;
}
constexpr ::ArrayW<::StringW>& Animancer::AnimancerEvent_Sequence::__cordl_internal_get__Names()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Names;
}
constexpr ::ArrayW<::StringW> const& Animancer::AnimancerEvent_Sequence::__cordl_internal_get__Names() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Names;
}
constexpr void Animancer::AnimancerEvent_Sequence::__cordl_internal_set__Names(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Names = value;
}
inline int32_t Animancer::AnimancerEvent_Sequence::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Animancer::AnimancerEvent_Sequence::set_Count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::AnimancerEvent_Sequence::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Animancer::AnimancerEvent_Sequence::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Animancer::AnimancerEvent_Sequence::set_Capacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Animancer::AnimancerEvent_Sequence::get_Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Animancer::AnimancerEvent_Sequence::set_Version(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"set_Version", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::AnimancerEvent_Sequence::SetShouldNotModifyReason(::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"SetShouldNotModifyReason", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline void Animancer::AnimancerEvent_Sequence::OnSequenceModified()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"OnSequenceModified", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::AnimancerEvent Animancer::AnimancerEvent_Sequence::get_EndEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_EndEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerEvent>(this, ___internal_method);
}
inline void Animancer::AnimancerEvent_Sequence::set_EndEvent(::Animancer::AnimancerEvent  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"set_EndEvent", {}, {::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action* Animancer::AnimancerEvent_Sequence::get_OnEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_OnEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline void Animancer::AnimancerEvent_Sequence::set_OnEnd(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"set_OnEnd", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::AnimancerEvent_Sequence::get_NormalizedEndTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_NormalizedEndTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::AnimancerEvent_Sequence::set_NormalizedEndTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"set_NormalizedEndTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::AnimancerEvent_Sequence::GetDefaultNormalizedStartTime(float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"GetDefaultNormalizedStartTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, speed);
}
inline float_t Animancer::AnimancerEvent_Sequence::GetDefaultNormalizedEndTime(float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"GetDefaultNormalizedEndTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, speed);
}
inline ::by_ref<::ArrayW<::StringW>> Animancer::AnimancerEvent_Sequence::get_Names()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_Names", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::ArrayW<::StringW>>>(this, ___internal_method);
}
inline ::StringW Animancer::AnimancerEvent_Sequence::GetName(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"GetName", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline void Animancer::AnimancerEvent_Sequence::SetName(int32_t  index, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"SetName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, name);
}
inline int32_t Animancer::AnimancerEvent_Sequence::IndexOf(::StringW  name, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"IndexOf", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name, startIndex);
}
inline int32_t Animancer::AnimancerEvent_Sequence::IndexOfRequired(::StringW  name, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"IndexOfRequired", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name, startIndex);
}
inline void Animancer::AnimancerEvent_Sequence::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerEvent_Sequence::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void Animancer::AnimancerEvent_Sequence::_ctor(::Animancer::AnimancerEvent_Sequence*  copyFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::AnimancerEvent_Sequence*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline ::Animancer::AnimancerEvent Animancer::AnimancerEvent_Sequence::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerEvent>(this, ___internal_method, index);
}
inline ::Animancer::AnimancerEvent Animancer::AnimancerEvent_Sequence::get_Item(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerEvent>(this, ___internal_method, name);
}
inline void Animancer::AnimancerEvent_Sequence::AssertNormalizedTimes(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"AssertNormalizedTimes", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Animancer::AnimancerEvent_Sequence::AssertNormalizedTimes(::Animancer::AnimancerState*  state, bool  isLooping)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"AssertNormalizedTimes", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, isLooping);
}
inline ::StringW Animancer::AnimancerEvent_Sequence::DeepToString(bool  multiLine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"DeepToString", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, multiLine);
}
inline ::Animancer::FastEnumerator_1<::Animancer::AnimancerEvent> Animancer::AnimancerEvent_Sequence::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::FastEnumerator_1<::Animancer::AnimancerEvent>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Animancer::AnimancerEvent>* Animancer::AnimancerEvent_Sequence::System_Collections_Generic_IEnumerable_Animancer_AnimancerEvent__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"System.Collections.Generic.IEnumerable<Animancer.AnimancerEvent>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Animancer::AnimancerEvent>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Animancer::AnimancerEvent_Sequence::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline int32_t Animancer::AnimancerEvent_Sequence::IndexOf(::Animancer::AnimancerEvent  animancerEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"IndexOf", {}, {::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, animancerEvent);
}
inline int32_t Animancer::AnimancerEvent_Sequence::IndexOfRequired(::Animancer::AnimancerEvent  animancerEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"IndexOfRequired", {}, {::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, animancerEvent);
}
inline int32_t Animancer::AnimancerEvent_Sequence::IndexOf(int32_t  indexHint, ::Animancer::AnimancerEvent  animancerEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"IndexOf", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, indexHint, animancerEvent);
}
inline int32_t Animancer::AnimancerEvent_Sequence::IndexOfRequired(int32_t  indexHint, ::Animancer::AnimancerEvent  animancerEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"IndexOfRequired", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, indexHint, animancerEvent);
}
inline int32_t Animancer::AnimancerEvent_Sequence::Add(::Animancer::AnimancerEvent  animancerEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Add", {}, {::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, animancerEvent);
}
inline int32_t Animancer::AnimancerEvent_Sequence::Add(float_t  normalizedTime, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Add", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, normalizedTime, callback);
}
inline int32_t Animancer::AnimancerEvent_Sequence::Add(int32_t  indexHint, ::Animancer::AnimancerEvent  animancerEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Add", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, indexHint, animancerEvent);
}
inline int32_t Animancer::AnimancerEvent_Sequence::Add(int32_t  indexHint, float_t  normalizedTime, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Add", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, indexHint, normalizedTime, callback);
}
inline void Animancer::AnimancerEvent_Sequence::AddRange(::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerEvent>*  enumerable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"AddRange", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enumerable);
}
inline void Animancer::AnimancerEvent_Sequence::AddCallback(int32_t  index, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"AddCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, callback);
}
inline void Animancer::AnimancerEvent_Sequence::AddCallback(::StringW  name, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"AddCallback", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, callback);
}
inline void Animancer::AnimancerEvent_Sequence::RemoveCallback(int32_t  index, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"RemoveCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, callback);
}
inline void Animancer::AnimancerEvent_Sequence::RemoveCallback(::StringW  name, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"RemoveCallback", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, callback);
}
inline void Animancer::AnimancerEvent_Sequence::SetCallback(int32_t  index, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"SetCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, callback);
}
inline void Animancer::AnimancerEvent_Sequence::SetCallback(::StringW  name, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"SetCallback", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, callback);
}
inline void Animancer::AnimancerEvent_Sequence::AssertCallbackUniqueness(::System::Action*  oldCallback, ::System::Action*  newCallback, ::StringW  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"AssertCallbackUniqueness", {}, {::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, oldCallback, newCallback, target);
}
inline void Animancer::AnimancerEvent_Sequence::AssertEventUniqueness(int32_t  index, ::Animancer::AnimancerEvent  newEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"AssertEventUniqueness", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, newEvent);
}
inline int32_t Animancer::AnimancerEvent_Sequence::SetNormalizedTime(int32_t  index, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"SetNormalizedTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index, normalizedTime);
}
inline int32_t Animancer::AnimancerEvent_Sequence::SetNormalizedTime(::StringW  name, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"SetNormalizedTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name, normalizedTime);
}
inline int32_t Animancer::AnimancerEvent_Sequence::SetNormalizedTime(::Animancer::AnimancerEvent  animancerEvent, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"SetNormalizedTime", {}, {::i2c::type_of<::Animancer::AnimancerEvent>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, animancerEvent, normalizedTime);
}
inline int32_t Animancer::AnimancerEvent_Sequence::Insert(float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Insert", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, normalizedTime);
}
inline int32_t Animancer::AnimancerEvent_Sequence::Insert(int32_t  indexHint, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, indexHint, normalizedTime);
}
inline void Animancer::AnimancerEvent_Sequence::Insert(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Animancer::AnimancerEvent_Sequence::Remove(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Remove", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline bool Animancer::AnimancerEvent_Sequence::Remove(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool Animancer::AnimancerEvent_Sequence::Remove(::Animancer::AnimancerEvent  animancerEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Remove", {}, {::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, animancerEvent);
}
inline void Animancer::AnimancerEvent_Sequence::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerEvent_Sequence::CopyFrom(::Animancer::AnimancerEvent_Sequence*  copyFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Animancer::AnimancerEvent_Sequence*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline void Animancer::AnimancerEvent_Sequence::AddAllEvents(::UnityEngine::AnimationClip*  animation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"AddAllEvents", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animation);
}
inline void Animancer::AnimancerEvent_Sequence::CopyTo(::ArrayW<::Animancer::AnimancerEvent>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::Animancer::AnimancerEvent>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline bool Animancer::AnimancerEvent_Sequence::ContentsAreEqual(::Animancer::AnimancerEvent_Sequence*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerEvent_Sequence*>(),
                        {"ContentsAreEqual", {}, {::i2c::type_of<::Animancer::AnimancerEvent_Sequence*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::Animancer::AnimancerEvent_Sequence* Animancer::AnimancerEvent_Sequence::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerEvent_Sequence*>());
}
inline ::Animancer::AnimancerEvent_Sequence* Animancer::AnimancerEvent_Sequence::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerEvent_Sequence*>(capacity));
}
inline ::Animancer::AnimancerEvent_Sequence* Animancer::AnimancerEvent_Sequence::New_ctor(::Animancer::AnimancerEvent_Sequence*  copyFrom)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerEvent_Sequence*>(copyFrom));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerEvent>"
constexpr  Animancer::AnimancerEvent_Sequence::operator ::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerEvent>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerEvent>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerEvent>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerEvent>* Animancer::AnimancerEvent_Sequence::i___System__Collections__Generic__IEnumerable_1___Animancer__AnimancerEvent_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Animancer::AnimancerEvent>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Animancer::AnimancerEvent_Sequence::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Animancer::AnimancerEvent_Sequence::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::AnimancerEvent_Sequence*>"
constexpr  Animancer::AnimancerEvent_Sequence::operator ::Animancer::ICopyable_1<::Animancer::AnimancerEvent_Sequence*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::AnimancerEvent_Sequence*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::AnimancerEvent_Sequence*>"
constexpr ::Animancer::ICopyable_1<::Animancer::AnimancerEvent_Sequence*>* Animancer::AnimancerEvent_Sequence::i___Animancer__ICopyable_1___Animancer__AnimancerEvent_Sequence__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::AnimancerEvent_Sequence*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::AnimancerEvent_Sequence::AnimancerEvent_Sequence()   {
}
