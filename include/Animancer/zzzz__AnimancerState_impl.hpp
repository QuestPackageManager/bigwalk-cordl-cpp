#pragma once
// IWYU pragma private; include "Animancer/AnimancerState.hpp"
#include "Animancer/zzzz__AnimancerNode_impl.hpp"
#include "Animancer/zzzz__Key_impl.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__AnimancerEvent_def.hpp"
#include "Animancer/zzzz__AnimancerLayer_def.hpp"
#include "Animancer/zzzz__AnimancerNode_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__IAnimationClipCollection_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "Animancer/zzzz__IPlayableWrapper_def.hpp"
#include "Animancer/zzzz__IUpdatable_def.hpp"
#include "Animancer/zzzz__Key_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Animancer::AnimancerState_DelayedPause.get_Root
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerPlayable* (::Animancer::AnimancerState_DelayedPause::*)()>(&::Animancer::AnimancerState_DelayedPause::get_Root)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_DelayedPause*>(),
                        {"get_Root", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_DelayedPause.set_Root
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState_DelayedPause::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::AnimancerState_DelayedPause::set_Root)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_DelayedPause*>(),
                        {"set_Root", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_DelayedPause.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerState_DelayedPause::*)()>(&::Animancer::AnimancerState_DelayedPause::get_State)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_DelayedPause*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_DelayedPause.set_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState_DelayedPause::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerState_DelayedPause::set_State)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_DelayedPause*>(),
                        {"set_State", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_DelayedPause.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerState_DelayedPause::Register)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802ecae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_DelayedPause*>(),
                        {"Register", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_DelayedPause.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState_DelayedPause::*)()>(&::Animancer::AnimancerState_DelayedPause::Update)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802ecb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_DelayedPause*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_DelayedPause._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState_DelayedPause::*)()>(&::Animancer::AnimancerState_DelayedPause::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_DelayedPause*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Animancer::AnimancerPlayable*& Animancer::AnimancerState_DelayedPause::__cordl_internal_get__Root_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Root_k__BackingField;
}
constexpr ::Animancer::AnimancerPlayable* const& Animancer::AnimancerState_DelayedPause::__cordl_internal_get__Root_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Root_k__BackingField;
}
constexpr void Animancer::AnimancerState_DelayedPause::__cordl_internal_set__Root_k__BackingField(::Animancer::AnimancerPlayable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Root_k__BackingField = value;
}
constexpr ::Animancer::AnimancerState*& Animancer::AnimancerState_DelayedPause::__cordl_internal_get__State_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr ::Animancer::AnimancerState* const& Animancer::AnimancerState_DelayedPause::__cordl_internal_get__State_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr void Animancer::AnimancerState_DelayedPause::__cordl_internal_set__State_k__BackingField(::Animancer::AnimancerState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____State_k__BackingField = value;
}
inline ::Animancer::AnimancerPlayable* Animancer::AnimancerState_DelayedPause::get_Root()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_DelayedPause*>(),
                        {"get_Root", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerPlayable*>(this, ___internal_method);
}
inline void Animancer::AnimancerState_DelayedPause::set_Root(::Animancer::AnimancerPlayable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_DelayedPause*>(),
                        {"set_Root", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerState_DelayedPause::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_DelayedPause*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method);
}
inline void Animancer::AnimancerState_DelayedPause::set_State(::Animancer::AnimancerState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_DelayedPause*>(),
                        {"set_State", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::AnimancerState_DelayedPause::Register(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_DelayedPause*>(),
                        {"Register", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline void Animancer::AnimancerState_DelayedPause::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_DelayedPause*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerState_DelayedPause::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_DelayedPause*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::AnimancerState_DelayedPause* Animancer::AnimancerState_DelayedPause::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerState_DelayedPause*>());
}
/// @brief Convert operator to "::Animancer::IUpdatable"
constexpr  Animancer::AnimancerState_DelayedPause::operator ::Animancer::IUpdatable*() noexcept {
return static_cast<::Animancer::IUpdatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IUpdatable"
constexpr ::Animancer::IUpdatable* Animancer::AnimancerState_DelayedPause::i___Animancer__IUpdatable() noexcept {
return static_cast<::Animancer::IUpdatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::Key_IListItem"
constexpr  Animancer::AnimancerState_DelayedPause::operator ::Animancer::Key_IListItem*() noexcept {
return static_cast<::Animancer::Key_IListItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::Key_IListItem"
constexpr ::Animancer::Key_IListItem* Animancer::AnimancerState_DelayedPause::i___Animancer__Key_IListItem() noexcept {
return static_cast<::Animancer::Key_IListItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::AnimancerState_DelayedPause::AnimancerState_DelayedPause()   {
}
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher.Acquire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerState_EventDispatcher::Acquire)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802ecd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"Acquire", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState_EventDispatcher::*)()>(&::Animancer::AnimancerState_EventDispatcher::Release)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802ed480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher.TryClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerState_EventDispatcher*)>(&::Animancer::AnimancerState_EventDispatcher::TryClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ed540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"TryClear", {}, {::i2c::type_of<::Animancer::AnimancerState_EventDispatcher*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher.get_HasEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerState_EventDispatcher::*)()>(&::Animancer::AnimancerState_EventDispatcher::get_HasEvents)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ed970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"get_HasEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher.get_Events
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerEvent_Sequence* (::Animancer::AnimancerState_EventDispatcher::*)()>(&::Animancer::AnimancerState_EventDispatcher::get_Events)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"get_Events", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher.set_Events
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState_EventDispatcher::*)(::Animancer::AnimancerEvent_Sequence*)>(&::Animancer::AnimancerState_EventDispatcher::set_Events)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802ed980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"set_Events", {}, {::i2c::type_of<::Animancer::AnimancerEvent_Sequence*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher.Animancer_IUpdatable_Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState_EventDispatcher::*)()>(&::Animancer::AnimancerState_EventDispatcher::Animancer_IUpdatable_Update)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1802ece20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"Animancer.IUpdatable.Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher.ValidateBeforeEndEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState_EventDispatcher::*)()>(&::Animancer::AnimancerState_EventDispatcher::ValidateBeforeEndEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"ValidateBeforeEndEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher.ValidateAfterEndEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState_EventDispatcher::*)(::System::Action*)>(&::Animancer::AnimancerState_EventDispatcher::ValidateAfterEndEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"ValidateAfterEndEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher.OnTimeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState_EventDispatcher::*)()>(&::Animancer::AnimancerState_EventDispatcher::OnTimeChanged)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802ed440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"OnTimeChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher.UpdateZeroLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState_EventDispatcher::*)()>(&::Animancer::AnimancerState_EventDispatcher::UpdateZeroLength)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1802ed550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"UpdateZeroLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher.CheckGeneralEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState_EventDispatcher::*)(float_t)>(&::Animancer::AnimancerState_EventDispatcher::CheckGeneralEvents)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1802ecf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"CheckGeneralEvents", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher.ValidateNextEventIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState_EventDispatcher::*)(::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<int32_t>)>(&::Animancer::AnimancerState_EventDispatcher::ValidateNextEventIndex)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1802ed740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"ValidateNextEventIndex", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher.GetLoopDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t, float_t, float_t)>(&::Animancer::AnimancerState_EventDispatcher::GetLoopDelta)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802ed260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"GetLoopDelta", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher.InvokeAllEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerState_EventDispatcher::*)(int32_t, int32_t)>(&::Animancer::AnimancerState_EventDispatcher::InvokeAllEvents)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802ed2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"InvokeAllEvents", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher.NextEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerState_EventDispatcher::*)(int32_t)>(&::Animancer::AnimancerState_EventDispatcher::NextEvent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802ed3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"NextEvent", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher.NextEventLooped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerState_EventDispatcher::*)(int32_t)>(&::Animancer::AnimancerState_EventDispatcher::NextEventLooped)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802ed380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"NextEventLooped", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::AnimancerState_EventDispatcher::*)()>(&::Animancer::AnimancerState_EventDispatcher::ToString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ed510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                    {::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState_EventDispatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState_EventDispatcher::*)()>(&::Animancer::AnimancerState_EventDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ed920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Animancer::AnimancerState*& Animancer::AnimancerState_EventDispatcher::__cordl_internal_get__State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State;
}
constexpr ::Animancer::AnimancerState* const& Animancer::AnimancerState_EventDispatcher::__cordl_internal_get__State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State;
}
constexpr void Animancer::AnimancerState_EventDispatcher::__cordl_internal_set__State(::Animancer::AnimancerState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____State = value;
}
constexpr ::Animancer::AnimancerEvent_Sequence*& Animancer::AnimancerState_EventDispatcher::__cordl_internal_get__Events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Events;
}
constexpr ::Animancer::AnimancerEvent_Sequence* const& Animancer::AnimancerState_EventDispatcher::__cordl_internal_get__Events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Events;
}
constexpr void Animancer::AnimancerState_EventDispatcher::__cordl_internal_set__Events(::Animancer::AnimancerEvent_Sequence*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Events = value;
}
constexpr bool& Animancer::AnimancerState_EventDispatcher::__cordl_internal_get__GotEventsFromPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GotEventsFromPool;
}
constexpr bool const& Animancer::AnimancerState_EventDispatcher::__cordl_internal_get__GotEventsFromPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GotEventsFromPool;
}
constexpr void Animancer::AnimancerState_EventDispatcher::__cordl_internal_set__GotEventsFromPool(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GotEventsFromPool = value;
}
constexpr bool& Animancer::AnimancerState_EventDispatcher::__cordl_internal_get__IsLooping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsLooping;
}
constexpr bool const& Animancer::AnimancerState_EventDispatcher::__cordl_internal_get__IsLooping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsLooping;
}
constexpr void Animancer::AnimancerState_EventDispatcher::__cordl_internal_set__IsLooping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsLooping = value;
}
constexpr float_t& Animancer::AnimancerState_EventDispatcher::__cordl_internal_get__PreviousTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreviousTime;
}
constexpr float_t const& Animancer::AnimancerState_EventDispatcher::__cordl_internal_get__PreviousTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreviousTime;
}
constexpr void Animancer::AnimancerState_EventDispatcher::__cordl_internal_set__PreviousTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PreviousTime = value;
}
constexpr int32_t& Animancer::AnimancerState_EventDispatcher::__cordl_internal_get__NextEventIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NextEventIndex;
}
constexpr int32_t const& Animancer::AnimancerState_EventDispatcher::__cordl_internal_get__NextEventIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NextEventIndex;
}
constexpr void Animancer::AnimancerState_EventDispatcher::__cordl_internal_set__NextEventIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NextEventIndex = value;
}
constexpr int32_t& Animancer::AnimancerState_EventDispatcher::__cordl_internal_get__SequenceVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SequenceVersion;
}
constexpr int32_t const& Animancer::AnimancerState_EventDispatcher::__cordl_internal_get__SequenceVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SequenceVersion;
}
constexpr void Animancer::AnimancerState_EventDispatcher::__cordl_internal_set__SequenceVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SequenceVersion = value;
}
constexpr bool& Animancer::AnimancerState_EventDispatcher::__cordl_internal_get__WasPlayingForwards()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WasPlayingForwards;
}
constexpr bool const& Animancer::AnimancerState_EventDispatcher::__cordl_internal_get__WasPlayingForwards() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WasPlayingForwards;
}
constexpr void Animancer::AnimancerState_EventDispatcher::__cordl_internal_set__WasPlayingForwards(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WasPlayingForwards = value;
}
inline void Animancer::AnimancerState_EventDispatcher::Acquire(::Animancer::AnimancerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"Acquire", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline void Animancer::AnimancerState_EventDispatcher::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerState_EventDispatcher::TryClear(::Animancer::AnimancerState_EventDispatcher*  events)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"TryClear", {}, {::i2c::type_of<::Animancer::AnimancerState_EventDispatcher*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, events);
}
inline bool Animancer::AnimancerState_EventDispatcher::get_HasEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"get_HasEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Animancer::AnimancerEvent_Sequence* Animancer::AnimancerState_EventDispatcher::get_Events()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"get_Events", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerEvent_Sequence*>(this, ___internal_method);
}
inline void Animancer::AnimancerState_EventDispatcher::set_Events(::Animancer::AnimancerEvent_Sequence*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"set_Events", {}, {::i2c::type_of<::Animancer::AnimancerEvent_Sequence*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::AnimancerState_EventDispatcher::Animancer_IUpdatable_Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"Animancer.IUpdatable.Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerState_EventDispatcher::ValidateBeforeEndEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"ValidateBeforeEndEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerState_EventDispatcher::ValidateAfterEndEvent(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"ValidateAfterEndEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Animancer::AnimancerState_EventDispatcher::OnTimeChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"OnTimeChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerState_EventDispatcher::UpdateZeroLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"UpdateZeroLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerState_EventDispatcher::CheckGeneralEvents(float_t  currentTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"CheckGeneralEvents", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime);
}
inline void Animancer::AnimancerState_EventDispatcher::ValidateNextEventIndex(::by_ref<float_t>  currentTime, ::by_ref<float_t>  playDirectionFloat, ::by_ref<int32_t>  playDirectionInt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"ValidateNextEventIndex", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime, playDirectionFloat, playDirectionInt);
}
inline int32_t Animancer::AnimancerState_EventDispatcher::GetLoopDelta(float_t  previousTime, float_t  nextTime, float_t  eventTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"GetLoopDelta", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, previousTime, nextTime, eventTime);
}
inline bool Animancer::AnimancerState_EventDispatcher::InvokeAllEvents(int32_t  count, int32_t  playDirectionInt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"InvokeAllEvents", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, count, playDirectionInt);
}
inline bool Animancer::AnimancerState_EventDispatcher::NextEvent(int32_t  playDirectionInt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"NextEvent", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playDirectionInt);
}
inline bool Animancer::AnimancerState_EventDispatcher::NextEventLooped(int32_t  playDirectionInt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {"NextEventLooped", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playDirectionInt);
}
inline ::StringW Animancer::AnimancerState_EventDispatcher::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Animancer::AnimancerState_EventDispatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState_EventDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::AnimancerState_EventDispatcher* Animancer::AnimancerState_EventDispatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerState_EventDispatcher*>());
}
/// @brief Convert operator to "::Animancer::IUpdatable"
constexpr  Animancer::AnimancerState_EventDispatcher::operator ::Animancer::IUpdatable*() noexcept {
return static_cast<::Animancer::IUpdatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IUpdatable"
constexpr ::Animancer::IUpdatable* Animancer::AnimancerState_EventDispatcher::i___Animancer__IUpdatable() noexcept {
return static_cast<::Animancer::IUpdatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::Key_IListItem"
constexpr  Animancer::AnimancerState_EventDispatcher::operator ::Animancer::Key_IListItem*() noexcept {
return static_cast<::Animancer::Key_IListItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::Key_IListItem"
constexpr ::Animancer::Key_IListItem* Animancer::AnimancerState_EventDispatcher::i___Animancer__Key_IListItem() noexcept {
return static_cast<::Animancer::Key_IListItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::AnimancerState_EventDispatcher::AnimancerState_EventDispatcher()   {
}
//  Writing Method size for method: ::Animancer::AnimancerState.get_Events
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerEvent_Sequence* (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_Events)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802e7520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_Events", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.set_Events
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(::Animancer::AnimancerEvent_Sequence*)>(&::Animancer::AnimancerState::set_Events)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802e7bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_Events", {}, {::i2c::type_of<::Animancer::AnimancerEvent_Sequence*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_HasEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_HasEvents)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e7570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_HasEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_AutomaticallyClearEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Animancer::AnimancerState::get_AutomaticallyClearEvents)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e73f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_AutomaticallyClearEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.set_AutomaticallyClearEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Animancer::AnimancerState::set_AutomaticallyClearEvents)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e7a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_AutomaticallyClearEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.SetRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::AnimancerState::SetRoot)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1802e6f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"SetRoot", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_Parent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::IPlayableWrapper* (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_Parent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_Parent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.SetParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(::Animancer::AnimancerNode*, int32_t)>(&::Animancer::AnimancerState::SetParent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802e6e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"SetParent", {}, {::i2c::type_of<::Animancer::AnimancerNode*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.SetParentInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(::Animancer::AnimancerNode*, int32_t)>(&::Animancer::AnimancerState::SetParentInternal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802e6e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"SetParentInternal", {}, {::i2c::type_of<::Animancer::AnimancerNode*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerLayer* (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_Layer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e7630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_LayerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_LayerIndex)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802e75f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_LayerIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.set_LayerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(int32_t)>(&::Animancer::AnimancerState::set_LayerIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802e7d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_LayerIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_Key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_Key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.set_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(::System::Object*)>(&::Animancer::AnimancerState::set_Key)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802e7c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_Key", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_Clip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.set_Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(::UnityEngine::AnimationClip*)>(&::Animancer::AnimancerState::set_Clip)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802e7a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_MainObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_MainObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.set_MainObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(::UnityEngine::Object*)>(&::Animancer::AnimancerState::set_MainObject)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802e7dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_AverageVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_AverageVelocity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_IsPlaying)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.set_IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(bool)>(&::Animancer::AnimancerState::set_IsPlaying)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802e7c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_IsPlaying", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.OnSetIsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::OnSetIsPlaying)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.CreatePlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::CreatePlayable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1802e6750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"CreatePlayable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_IsActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e7590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_IsActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_IsStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_IsStopped)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e75c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_IsStopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::Play)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802e6d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::Stop)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1802e7190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.OnStartFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::OnStartFade)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802e6d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_Time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_Time)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802e7990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_Time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.set_Time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(float_t)>(&::Animancer::AnimancerState::set_Time)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e8140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_Time", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_TimeD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_TimeD)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802e7930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_TimeD", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.set_TimeD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(double_t)>(&::Animancer::AnimancerState::set_TimeD)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802e8060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_TimeD", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_RawTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_RawTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e7850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.set_RawTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(double_t)>(&::Animancer::AnimancerState::set_RawTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802e7f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_NormalizedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_NormalizedTime)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802e77a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_NormalizedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.set_NormalizedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(float_t)>(&::Animancer::AnimancerState::set_NormalizedTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802e7ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_NormalizedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_NormalizedTimeD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_NormalizedTimeD)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802e76f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_NormalizedTimeD", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.set_NormalizedTimeD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(double_t)>(&::Animancer::AnimancerState::set_NormalizedTimeD)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802e7e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_NormalizedTimeD", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.MoveTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(float_t, bool)>(&::Animancer::AnimancerState::MoveTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e6c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"MoveTime", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.MoveTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(double_t, bool)>(&::Animancer::AnimancerState::MoveTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802e6c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.CancelSetTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::CancelSetTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e6720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"CancelSetTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_NormalizedEndTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_NormalizedEndTime)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802e7650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_NormalizedEndTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.set_NormalizedEndTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(float_t)>(&::Animancer::AnimancerState::set_NormalizedEndTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802e7e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_NormalizedEndTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_Duration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_Duration)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1802e7420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_Duration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.set_Duration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(float_t)>(&::Animancer::AnimancerState::set_Duration)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1802e7a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_Duration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_RemainingDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_RemainingDuration)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802e7870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_RemainingDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.set_RemainingDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(float_t)>(&::Animancer::AnimancerState::set_RemainingDuration)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1802e7f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_RemainingDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_Length)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.get_IsLooping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::get_IsLooping)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(::by_ref<bool>)>(&::Animancer::AnimancerState::Update)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802e7340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::Destroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802e6870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::Clone)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e6730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerState::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::AnimancerState::Clone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.SetNewCloneRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::AnimancerState::SetNewCloneRoot)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802e6e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"SetNewCloneRoot", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.Animancer_ICopyable_Animancer_AnimancerState__CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerState::Animancer_ICopyable_Animancer_AnimancerState__CopyFrom)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1802e5e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"Animancer.ICopyable<Animancer.AnimancerState>.CopyFrom", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.GatherAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::AnimancerState::GatherAnimationClips)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802e6940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.IsPlayingAndNotEnding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::IsPlayingAndNotEnding)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1802e6ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802e7280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.AppendDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(::System::Text::StringBuilder*, ::StringW)>(&::Animancer::AnimancerState::AppendDetails)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x1802e5fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {::i2c::class_of<::Animancer::AnimancerState*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.GetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::GetPath)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1802e6a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"GetPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.AppendPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::Animancer::AnimancerNode*)>(&::Animancer::AnimancerState::AppendPath)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1802e6510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"AppendPath", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Animancer::AnimancerNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState.AppendPortAndType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)(::System::Text::StringBuilder*)>(&::Animancer::AnimancerState::AppendPortAndType)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1802e6680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"AppendPortAndType", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerState::*)()>(&::Animancer::AnimancerState::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802e73d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Animancer::AnimancerState_EventDispatcher*& Animancer::AnimancerState::__cordl_internal_get__EventDispatcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EventDispatcher;
}
constexpr ::Animancer::AnimancerState_EventDispatcher* const& Animancer::AnimancerState::__cordl_internal_get__EventDispatcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EventDispatcher;
}
constexpr void Animancer::AnimancerState::__cordl_internal_set__EventDispatcher(::Animancer::AnimancerState_EventDispatcher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EventDispatcher = value;
}
constexpr ::Animancer::AnimancerNode*& Animancer::AnimancerState::__cordl_internal_get__Parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parent;
}
constexpr ::Animancer::AnimancerNode* const& Animancer::AnimancerState::__cordl_internal_get__Parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parent;
}
constexpr void Animancer::AnimancerState::__cordl_internal_set__Parent(::Animancer::AnimancerNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Parent = value;
}
constexpr ::System::Object*& Animancer::AnimancerState::__cordl_internal_get__Key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Key;
}
constexpr ::System::Object* const& Animancer::AnimancerState::__cordl_internal_get__Key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Key;
}
constexpr void Animancer::AnimancerState::__cordl_internal_set__Key(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Key = value;
}
constexpr bool& Animancer::AnimancerState::__cordl_internal_get__IsPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPlaying;
}
constexpr bool const& Animancer::AnimancerState::__cordl_internal_get__IsPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPlaying;
}
constexpr void Animancer::AnimancerState::__cordl_internal_set__IsPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsPlaying = value;
}
constexpr bool& Animancer::AnimancerState::__cordl_internal_get__IsPlayingDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPlayingDirty;
}
constexpr bool const& Animancer::AnimancerState::__cordl_internal_get__IsPlayingDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPlayingDirty;
}
constexpr void Animancer::AnimancerState::__cordl_internal_set__IsPlayingDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsPlayingDirty = value;
}
constexpr double_t& Animancer::AnimancerState::__cordl_internal_get__Time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Time;
}
constexpr double_t const& Animancer::AnimancerState::__cordl_internal_get__Time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Time;
}
constexpr void Animancer::AnimancerState::__cordl_internal_set__Time(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Time = value;
}
constexpr bool& Animancer::AnimancerState::__cordl_internal_get__MustSetTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MustSetTime;
}
constexpr bool const& Animancer::AnimancerState::__cordl_internal_get__MustSetTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MustSetTime;
}
constexpr void Animancer::AnimancerState::__cordl_internal_set__MustSetTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MustSetTime = value;
}
constexpr uint64_t& Animancer::AnimancerState::__cordl_internal_get__TimeFrameID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeFrameID;
}
constexpr uint64_t const& Animancer::AnimancerState::__cordl_internal_get__TimeFrameID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeFrameID;
}
constexpr void Animancer::AnimancerState::__cordl_internal_set__TimeFrameID(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeFrameID = value;
}
inline void Animancer::AnimancerState::setStaticF__AutomaticallyClearEvents_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<AutomaticallyClearEvents>k__BackingField", ::Animancer::AnimancerState*>(std::forward<bool>(value));
}
inline bool Animancer::AnimancerState::getStaticF__AutomaticallyClearEvents_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<AutomaticallyClearEvents>k__BackingField", ::Animancer::AnimancerState*>();
}
inline ::Animancer::AnimancerEvent_Sequence* Animancer::AnimancerState::get_Events()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_Events", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerEvent_Sequence*>(this, ___internal_method);
}
inline void Animancer::AnimancerState::set_Events(::Animancer::AnimancerEvent_Sequence*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_Events", {}, {::i2c::type_of<::Animancer::AnimancerEvent_Sequence*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::AnimancerState::get_HasEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_HasEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Animancer::AnimancerState::get_AutomaticallyClearEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_AutomaticallyClearEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Animancer::AnimancerState::set_AutomaticallyClearEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_AutomaticallyClearEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Animancer::AnimancerState::SetRoot(::Animancer::AnimancerPlayable*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"SetRoot", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline ::Animancer::IPlayableWrapper* Animancer::AnimancerState::get_Parent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_Parent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::IPlayableWrapper*>(this, ___internal_method);
}
inline void Animancer::AnimancerState::SetParent(::Animancer::AnimancerNode*  parent, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"SetParent", {}, {::i2c::type_of<::Animancer::AnimancerNode*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, index);
}
inline void Animancer::AnimancerState::SetParentInternal(::Animancer::AnimancerNode*  parent, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"SetParentInternal", {}, {::i2c::type_of<::Animancer::AnimancerNode*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, index);
}
inline ::Animancer::AnimancerLayer* Animancer::AnimancerState::get_Layer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerLayer*>(this, ___internal_method);
}
inline int32_t Animancer::AnimancerState::get_LayerIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_LayerIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Animancer::AnimancerState::set_LayerIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_LayerIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* Animancer::AnimancerState::get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Animancer::AnimancerState::set_Key(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_Key", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::AnimancerState::get_Clip()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline void Animancer::AnimancerState::set_Clip(::UnityEngine::AnimationClip*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Object> Animancer::AnimancerState::get_MainObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline void Animancer::AnimancerState::set_MainObject(::UnityEngine::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Animancer::AnimancerState::ChangeMainObject(::by_ref<T>  currentObject, T  newObject)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerState*>(),
                    {"ChangeMainObject", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentObject, newObject);
}
inline ::UnityEngine::Vector3 Animancer::AnimancerState::get_AverageVelocity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool Animancer::AnimancerState::get_IsPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerState::set_IsPlaying(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_IsPlaying", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::AnimancerState::OnSetIsPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerState::CreatePlayable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"CreatePlayable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Animancer::AnimancerState::get_IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Animancer::AnimancerState::get_IsStopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_IsStopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerState::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerState::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::AnimancerState::OnStartFade()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Animancer::AnimancerState::get_Time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_Time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::AnimancerState::set_Time(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_Time", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t Animancer::AnimancerState::get_TimeD()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_TimeD", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Animancer::AnimancerState::set_TimeD(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_TimeD", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t Animancer::AnimancerState::get_RawTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Animancer::AnimancerState::set_RawTime(double_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::AnimancerState::get_NormalizedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_NormalizedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::AnimancerState::set_NormalizedTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_NormalizedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t Animancer::AnimancerState::get_NormalizedTimeD()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_NormalizedTimeD", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Animancer::AnimancerState::set_NormalizedTimeD(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_NormalizedTimeD", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::AnimancerState::MoveTime(float_t  time, bool  normalized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"MoveTime", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, normalized);
}
inline void Animancer::AnimancerState::MoveTime(double_t  time, bool  normalized)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, normalized);
}
inline void Animancer::AnimancerState::CancelSetTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"CancelSetTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Animancer::AnimancerState::get_NormalizedEndTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_NormalizedEndTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::AnimancerState::set_NormalizedEndTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_NormalizedEndTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::AnimancerState::get_Duration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_Duration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::AnimancerState::set_Duration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_Duration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::AnimancerState::get_RemainingDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"get_RemainingDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::AnimancerState::set_RemainingDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"set_RemainingDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::AnimancerState::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Animancer::AnimancerState::get_IsLooping()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::AnimancerState::Update(::by_ref<bool>  needsMoreUpdates)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, needsMoreUpdates);
}
inline void Animancer::AnimancerState::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerState::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerState::Clone(::Animancer::AnimancerPlayable*  root)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, root);
}
inline void Animancer::AnimancerState::SetNewCloneRoot(::Animancer::AnimancerPlayable*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"SetNewCloneRoot", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline void Animancer::AnimancerState::Animancer_ICopyable_Animancer_AnimancerState__CopyFrom(::Animancer::AnimancerState*  copyFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"Animancer.ICopyable<Animancer.AnimancerState>.CopyFrom", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline void Animancer::AnimancerState::GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline bool Animancer::AnimancerState::IsPlayingAndNotEnding()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Animancer::AnimancerState::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Animancer::AnimancerState::AppendDetails(::System::Text::StringBuilder*  text, ::StringW  separator)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerState*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, separator);
}
inline ::StringW Animancer::AnimancerState::GetPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"GetPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Animancer::AnimancerState::AppendPath(::System::Text::StringBuilder*  path, ::Animancer::AnimancerNode*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"AppendPath", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Animancer::AnimancerNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, parent);
}
inline void Animancer::AnimancerState::AppendPortAndType(::System::Text::StringBuilder*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {"AppendPortAndType", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Animancer::AnimancerState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerState*>());
}
/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
constexpr  Animancer::AnimancerState::operator ::Animancer::IAnimationClipCollection*() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IAnimationClipCollection"
constexpr ::Animancer::IAnimationClipCollection* Animancer::AnimancerState::i___Animancer__IAnimationClipCollection() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::AnimancerState*>"
constexpr  Animancer::AnimancerState::operator ::Animancer::ICopyable_1<::Animancer::AnimancerState*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::AnimancerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::AnimancerState*>"
constexpr ::Animancer::ICopyable_1<::Animancer::AnimancerState*>* Animancer::AnimancerState::i___Animancer__ICopyable_1___Animancer__AnimancerState__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::AnimancerState*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::AnimancerState::AnimancerState()   {
}
