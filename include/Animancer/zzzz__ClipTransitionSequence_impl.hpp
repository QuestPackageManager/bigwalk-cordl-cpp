#pragma once
// IWYU pragma private; include "Animancer/ClipTransitionSequence.hpp"
#include "Animancer/zzzz__ClipTransition_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Animancer/zzzz__ClipTransitionSequence_def.hpp"
#include "Animancer/zzzz__AnimancerEvent_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__ClipTransitionSequence_def.hpp"
#include "Animancer/zzzz__ClipTransition_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Animancer::ClipTransitionSequence___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipTransitionSequence___c__DisplayClass6_0::*)()>(&::Animancer::ClipTransitionSequence___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence___c__DisplayClass6_0._UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipTransitionSequence___c__DisplayClass6_0::*)()>(&::Animancer::ClipTransitionSequence___c__DisplayClass6_0::_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180316050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence___c__DisplayClass6_0*>(),
                        {"<UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Animancer::ClipTransition*& Animancer::ClipTransitionSequence___c__DisplayClass6_0::__cordl_internal_get_next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr ::Animancer::ClipTransition* const& Animancer::ClipTransitionSequence___c__DisplayClass6_0::__cordl_internal_get_next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr void Animancer::ClipTransitionSequence___c__DisplayClass6_0::__cordl_internal_set_next(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___next = value;
}
inline void Animancer::ClipTransitionSequence___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::ClipTransitionSequence___c__DisplayClass6_0::_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence___c__DisplayClass6_0*>(),
                        {"<UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::ClipTransitionSequence___c__DisplayClass6_0* Animancer::ClipTransitionSequence___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::ClipTransitionSequence___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Animancer::ClipTransitionSequence___c__DisplayClass6_0::ClipTransitionSequence___c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::Animancer::ClipTransitionSequence.get_Others
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::ArrayW<::Animancer::ClipTransition*>> (::Animancer::ClipTransitionSequence::*)()>(&::Animancer::ClipTransitionSequence::get_Others)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f0290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"get_Others", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence.get_LastTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ClipTransition* (::Animancer::ClipTransitionSequence::*)()>(&::Animancer::ClipTransitionSequence::get_LastTransition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180306c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"get_LastTransition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipTransitionSequence::*)()>(&::Animancer::ClipTransitionSequence::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipTransitionSequence::*)()>(&::Animancer::ClipTransitionSequence::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803065d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipTransitionSequence::*)(::Animancer::AnimancerState*)>(&::Animancer::ClipTransitionSequence::Apply)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803061c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                    {::i2c::class_of<::Animancer::ClipTransitionSequence*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ClipTransitionSequence::*)()>(&::Animancer::ClipTransitionSequence::get_IsValid)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180306bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                    {::i2c::class_of<::Animancer::ClipTransitionSequence*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence.get_IsLooping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::ClipTransitionSequence::*)()>(&::Animancer::ClipTransitionSequence::get_IsLooping)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180306b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                    {::i2c::class_of<::Animancer::ClipTransitionSequence*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::ClipTransitionSequence::*)()>(&::Animancer::ClipTransitionSequence::get_Length)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180306cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                    {::i2c::class_of<::Animancer::ClipTransitionSequence*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence.get_MaximumDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::ClipTransitionSequence::*)()>(&::Animancer::ClipTransitionSequence::get_MaximumDuration)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180306d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                    {::i2c::class_of<::Animancer::ClipTransitionSequence*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence.get_AverageAngularSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::ClipTransitionSequence::*)()>(&::Animancer::ClipTransitionSequence::get_AverageAngularSpeed)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180306770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                    {::i2c::class_of<::Animancer::ClipTransitionSequence*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence.get_AverageVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::ClipTransitionSequence::*)()>(&::Animancer::ClipTransitionSequence::get_AverageVelocity)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1803068e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                    {::i2c::class_of<::Animancer::ClipTransitionSequence*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence.GatherAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipTransitionSequence::*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::ClipTransitionSequence::GatherAnimationClips)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803063d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                    {::i2c::class_of<::Animancer::ClipTransitionSequence*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipTransitionSequence::*)(::Animancer::ClipTransitionSequence*)>(&::Animancer::ClipTransitionSequence::CopyFrom)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180306320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                    {::i2c::class_of<::Animancer::ClipTransitionSequence*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence.get_EndEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerEvent (::Animancer::ClipTransitionSequence::*)()>(&::Animancer::ClipTransitionSequence::get_EndEvent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180306af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"get_EndEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence.set_EndEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipTransitionSequence::*)(::Animancer::AnimancerEvent)>(&::Animancer::ClipTransitionSequence::set_EndEvent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180306e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"set_EndEvent", {}, {::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence.AddEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipTransitionSequence::*)(float_t, bool, ::System::Action*)>(&::Animancer::ClipTransitionSequence::AddEvent)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180305fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"AddEvent", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence.TryAddEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Animancer::ClipTransition*, float_t, ::by_ref<float_t>, ::System::Action*)>(&::Animancer::ClipTransitionSequence::TryAddEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180306470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"TryAddEvent", {}, {::i2c::type_of<::Animancer::ClipTransition*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence.AddEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::ClipTransition*, float_t, ::System::Action*)>(&::Animancer::ClipTransitionSequence::AddEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180306100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"AddEvent", {}, {::i2c::type_of<::Animancer::ClipTransition*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipTransitionSequence::*)()>(&::Animancer::ClipTransitionSequence::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803066e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ClipTransitionSequence._Apply_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ClipTransitionSequence::*)()>(&::Animancer::ClipTransitionSequence::_Apply_b__8_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180306550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"<Apply>b__8_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Animancer::ClipTransition*>& Animancer::ClipTransitionSequence::__cordl_internal_get__Others()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Others;
}
constexpr ::ArrayW<::Animancer::ClipTransition*> const& Animancer::ClipTransitionSequence::__cordl_internal_get__Others() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Others;
}
constexpr void Animancer::ClipTransitionSequence::__cordl_internal_set__Others(::ArrayW<::Animancer::ClipTransition*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Others = value;
}
constexpr ::System::Action*& Animancer::ClipTransitionSequence::__cordl_internal_get__OnEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnEnd;
}
constexpr ::System::Action* const& Animancer::ClipTransitionSequence::__cordl_internal_get__OnEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnEnd;
}
constexpr void Animancer::ClipTransitionSequence::__cordl_internal_set__OnEnd(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnEnd = value;
}
inline ::by_ref<::ArrayW<::Animancer::ClipTransition*>> Animancer::ClipTransitionSequence::get_Others()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"get_Others", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::ArrayW<::Animancer::ClipTransition*>>>(this, ___internal_method);
}
inline ::Animancer::ClipTransition* Animancer::ClipTransitionSequence::get_LastTransition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"get_LastTransition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ClipTransition*>(this, ___internal_method);
}
inline void Animancer::ClipTransitionSequence::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::ClipTransitionSequence::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::ClipTransitionSequence::Apply(::Animancer::AnimancerState*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransitionSequence*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline bool Animancer::ClipTransitionSequence::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransitionSequence*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Animancer::ClipTransitionSequence::get_IsLooping()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransitionSequence*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Animancer::ClipTransitionSequence::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransitionSequence*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Animancer::ClipTransitionSequence::get_MaximumDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransitionSequence*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Animancer::ClipTransitionSequence::get_AverageAngularSpeed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransitionSequence*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Animancer::ClipTransitionSequence::get_AverageVelocity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransitionSequence*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Animancer::ClipTransitionSequence::GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransitionSequence*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline void Animancer::ClipTransitionSequence::CopyFrom(::Animancer::ClipTransitionSequence*  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ClipTransitionSequence*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline ::Animancer::AnimancerEvent Animancer::ClipTransitionSequence::get_EndEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"get_EndEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerEvent>(this, ___internal_method);
}
inline void Animancer::ClipTransitionSequence::set_EndEvent(::Animancer::AnimancerEvent  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"set_EndEvent", {}, {::i2c::type_of<::Animancer::AnimancerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::ClipTransitionSequence::AddEvent(float_t  time, bool  normalized, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"AddEvent", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, normalized, callback);
}
inline bool Animancer::ClipTransitionSequence::TryAddEvent(::Animancer::ClipTransition*  transition, float_t  length, ::by_ref<float_t>  time, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"TryAddEvent", {}, {::i2c::type_of<::Animancer::ClipTransition*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, transition, length, time, callback);
}
inline void Animancer::ClipTransitionSequence::AddEvent(::Animancer::ClipTransition*  transition, float_t  time, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"AddEvent", {}, {::i2c::type_of<::Animancer::ClipTransition*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transition, time, callback);
}
inline void Animancer::ClipTransitionSequence::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::ClipTransitionSequence::_Apply_b__8_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ClipTransitionSequence*>(),
                        {"<Apply>b__8_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::ClipTransitionSequence* Animancer::ClipTransitionSequence::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::ClipTransitionSequence*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  Animancer::ClipTransitionSequence::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* Animancer::ClipTransitionSequence::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::ClipTransitionSequence*>"
constexpr  Animancer::ClipTransitionSequence::operator ::Animancer::ICopyable_1<::Animancer::ClipTransitionSequence*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::ClipTransitionSequence*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::ClipTransitionSequence*>"
constexpr ::Animancer::ICopyable_1<::Animancer::ClipTransitionSequence*>* Animancer::ClipTransitionSequence::i___Animancer__ICopyable_1___Animancer__ClipTransitionSequence__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::ClipTransitionSequence*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::ClipTransitionSequence::ClipTransitionSequence()   {
}
