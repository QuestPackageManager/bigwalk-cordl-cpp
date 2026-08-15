#pragma once
// IWYU pragma private; include "GlobalNamespace/TrackedPeckState.hpp"
#include "GlobalNamespace/zzzz__PeckContext_impl.hpp"
#include "GlobalNamespace/zzzz__PeckOutputPort_impl.hpp"
#include "GlobalNamespace/zzzz__SavableSystem_impl.hpp"
#include "GlobalNamespace/zzzz__SeaShell_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__SaveIdentity_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "LobbyNetworking/zzzz__ITicketed_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedPeckState___c::*)()>(&::GlobalNamespace::TrackedPeckState___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState___c._AddEffect_b__26_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TrackedPeckState___c::*)(::GlobalNamespace::PeckSystemReference, ::GlobalNamespace::PeckSystemReference)>(&::GlobalNamespace::TrackedPeckState___c::_AddEffect_b__26_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18045a3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState___c*>(),
                        {"<AddEffect>b__26_0", {}, {::i2c::type_of<::GlobalNamespace::PeckSystemReference>(), ::i2c::type_of<::GlobalNamespace::PeckSystemReference>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TrackedPeckState___c::setStaticF___9(::GlobalNamespace::TrackedPeckState___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::TrackedPeckState___c*, "<>9", ::GlobalNamespace::TrackedPeckState___c*>(std::forward<::GlobalNamespace::TrackedPeckState___c*>(value));
}
inline ::GlobalNamespace::TrackedPeckState___c* GlobalNamespace::TrackedPeckState___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::TrackedPeckState___c*, "<>9", ::GlobalNamespace::TrackedPeckState___c*>();
}
inline void GlobalNamespace::TrackedPeckState___c::setStaticF___9__26_0(::System::Comparison_1<::GlobalNamespace::PeckSystemReference>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::PeckSystemReference>*, "<>9__26_0", ::GlobalNamespace::TrackedPeckState___c*>(std::forward<::System::Comparison_1<::GlobalNamespace::PeckSystemReference>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::PeckSystemReference>* GlobalNamespace::TrackedPeckState___c::getStaticF___9__26_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::PeckSystemReference>*, "<>9__26_0", ::GlobalNamespace::TrackedPeckState___c*>();
}
inline void GlobalNamespace::TrackedPeckState___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::TrackedPeckState___c::_AddEffect_b__26_0(::GlobalNamespace::PeckSystemReference  a, ::GlobalNamespace::PeckSystemReference  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState___c*>(),
                        {"<AddEffect>b__26_0", {}, {::i2c::type_of<::GlobalNamespace::PeckSystemReference>(), ::i2c::type_of<::GlobalNamespace::PeckSystemReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::GlobalNamespace::TrackedPeckState___c* GlobalNamespace::TrackedPeckState___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrackedPeckState___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackedPeckState___c::TrackedPeckState___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState.get_isServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TrackedPeckState::*)()>(&::GlobalNamespace::TrackedPeckState::get_isServer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803163c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"get_isServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedPeckState::*)()>(&::GlobalNamespace::TrackedPeckState::Start)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180459f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedPeckState::*)()>(&::GlobalNamespace::TrackedPeckState::Initialize)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180459360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedPeckState::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::TrackedPeckState::SetState)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x1804599a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedPeckState::*)(int32_t)>(&::GlobalNamespace::TrackedPeckState::SetState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180459ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"SetState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState.AddEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedPeckState::*)(::System::Action_1<::GlobalNamespace::PeckContext>*)>(&::GlobalNamespace::TrackedPeckState::AddEffect)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180458ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"AddEffect", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::PeckContext>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState.AddEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedPeckState::*)(::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*)>(&::GlobalNamespace::TrackedPeckState::AddEffect)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180458d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"AddEffect", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState.AddEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedPeckState::*)(::GlobalNamespace::PeckSystemReference)>(&::GlobalNamespace::TrackedPeckState::AddEffect)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180458ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"AddEffect", {}, {::i2c::type_of<::GlobalNamespace::PeckSystemReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState.ReTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedPeckState::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::TrackedPeckState::ReTrigger)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180459630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"ReTrigger", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState.ServerRejectPrediction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedPeckState::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::TrackedPeckState::ServerRejectPrediction)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804597a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"ServerRejectPrediction", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState.Reject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedPeckState::*)()>(&::GlobalNamespace::TrackedPeckState::Reject)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180459710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"Reject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState.DoPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedPeckState::*)(::GlobalNamespace::PeckContext, bool)>(&::GlobalNamespace::TrackedPeckState::DoPeck)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x180458de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"DoPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState.PredictPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedPeckState::*)(::GlobalNamespace::PeckContext, ::GlobalNamespace::PeckSwitch*)>(&::GlobalNamespace::TrackedPeckState::PredictPeck)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180459550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"PredictPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::PeckSwitch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState.get_ticket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::GlobalNamespace::TrackedPeckState::*)()>(&::GlobalNamespace::TrackedPeckState::get_ticket)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180459fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"get_ticket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState.set_ticket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedPeckState::*)(uint16_t)>(&::GlobalNamespace::TrackedPeckState::set_ticket)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180459fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"set_ticket", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedPeckState::*)()>(&::GlobalNamespace::TrackedPeckState::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804594f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedPeckState::*)()>(&::GlobalNamespace::TrackedPeckState::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180380080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedPeckState::*)()>(&::GlobalNamespace::TrackedPeckState::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackedPeckState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackedPeckState::*)()>(&::GlobalNamespace::TrackedPeckState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::TrackedPeckState::__cordl_internal_get_label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___label;
}
constexpr ::StringW const& GlobalNamespace::TrackedPeckState::__cordl_internal_get_label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___label;
}
constexpr void GlobalNamespace::TrackedPeckState::__cordl_internal_set_label(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___label = value;
}
constexpr bool& GlobalNamespace::TrackedPeckState::__cordl_internal_get_hasInitialState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasInitialState;
}
constexpr bool const& GlobalNamespace::TrackedPeckState::__cordl_internal_get_hasInitialState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasInitialState;
}
constexpr void GlobalNamespace::TrackedPeckState::__cordl_internal_set_hasInitialState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasInitialState = value;
}
constexpr int32_t& GlobalNamespace::TrackedPeckState::__cordl_internal_get_initialState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialState;
}
constexpr int32_t const& GlobalNamespace::TrackedPeckState::__cordl_internal_get_initialState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialState;
}
constexpr void GlobalNamespace::TrackedPeckState::__cordl_internal_set_initialState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialState = value;
}
constexpr bool& GlobalNamespace::TrackedPeckState::__cordl_internal_get_ignoreStateRepeats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreStateRepeats;
}
constexpr bool const& GlobalNamespace::TrackedPeckState::__cordl_internal_get_ignoreStateRepeats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreStateRepeats;
}
constexpr void GlobalNamespace::TrackedPeckState::__cordl_internal_set_ignoreStateRepeats(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreStateRepeats = value;
}
constexpr ::GlobalNamespace::PeckContext& GlobalNamespace::TrackedPeckState::__cordl_internal_get_currentPeckContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPeckContext;
}
constexpr ::GlobalNamespace::PeckContext const& GlobalNamespace::TrackedPeckState::__cordl_internal_get_currentPeckContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPeckContext;
}
constexpr void GlobalNamespace::TrackedPeckState::__cordl_internal_set_currentPeckContext(::GlobalNamespace::PeckContext  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPeckContext = value;
}
constexpr ::GlobalNamespace::PeckContext& GlobalNamespace::TrackedPeckState::__cordl_internal_get_peckContextForPrediction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckContextForPrediction;
}
constexpr ::GlobalNamespace::PeckContext const& GlobalNamespace::TrackedPeckState::__cordl_internal_get_peckContextForPrediction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckContextForPrediction;
}
constexpr void GlobalNamespace::TrackedPeckState::__cordl_internal_set_peckContextForPrediction(::GlobalNamespace::PeckContext  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckContextForPrediction = value;
}
constexpr ::GlobalNamespace::PeckOutputPort& GlobalNamespace::TrackedPeckState::__cordl_internal_get_port()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___port;
}
constexpr ::GlobalNamespace::PeckOutputPort const& GlobalNamespace::TrackedPeckState::__cordl_internal_get_port() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___port;
}
constexpr void GlobalNamespace::TrackedPeckState::__cordl_internal_set_port(::GlobalNamespace::PeckOutputPort  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___port = value;
}
constexpr ::GlobalNamespace::SavableSystem& GlobalNamespace::TrackedPeckState::__cordl_internal_get_savableSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savableSystem;
}
constexpr ::GlobalNamespace::SavableSystem const& GlobalNamespace::TrackedPeckState::__cordl_internal_get_savableSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savableSystem;
}
constexpr void GlobalNamespace::TrackedPeckState::__cordl_internal_set_savableSystem(::GlobalNamespace::SavableSystem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___savableSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::SaveIdentity>& GlobalNamespace::TrackedPeckState::__cordl_internal_get_saveIdentity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveIdentity;
}
constexpr ::UnityW<::GlobalNamespace::SaveIdentity> const& GlobalNamespace::TrackedPeckState::__cordl_internal_get_saveIdentity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveIdentity;
}
constexpr void GlobalNamespace::TrackedPeckState::__cordl_internal_set_saveIdentity(::UnityW<::GlobalNamespace::SaveIdentity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveIdentity = value;
}
constexpr bool& GlobalNamespace::TrackedPeckState::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::TrackedPeckState::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::TrackedPeckState::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PeckSystemReference>*& GlobalNamespace::TrackedPeckState::__cordl_internal_get_systemRefences()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemRefences;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PeckSystemReference>* const& GlobalNamespace::TrackedPeckState::__cordl_internal_get_systemRefences() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemRefences;
}
constexpr void GlobalNamespace::TrackedPeckState::__cordl_internal_set_systemRefences(::System::Collections::Generic::List_1<::GlobalNamespace::PeckSystemReference>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemRefences = value;
}
constexpr ::System::Action_1<::GlobalNamespace::PeckContext>*& GlobalNamespace::TrackedPeckState::__cordl_internal_get_onPeck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPeck;
}
constexpr ::System::Action_1<::GlobalNamespace::PeckContext>* const& GlobalNamespace::TrackedPeckState::__cordl_internal_get_onPeck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPeck;
}
constexpr void GlobalNamespace::TrackedPeckState::__cordl_internal_set_onPeck(::System::Action_1<::GlobalNamespace::PeckContext>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPeck = value;
}
constexpr ::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*& GlobalNamespace::TrackedPeckState::__cordl_internal_get_onPeckWithSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPeckWithSystem;
}
constexpr ::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>* const& GlobalNamespace::TrackedPeckState::__cordl_internal_get_onPeckWithSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPeckWithSystem;
}
constexpr void GlobalNamespace::TrackedPeckState::__cordl_internal_set_onPeckWithSystem(::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPeckWithSystem = value;
}
constexpr bool& GlobalNamespace::TrackedPeckState::__cordl_internal_get_isInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInitialized;
}
constexpr bool const& GlobalNamespace::TrackedPeckState::__cordl_internal_get_isInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInitialized;
}
constexpr void GlobalNamespace::TrackedPeckState::__cordl_internal_set_isInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInitialized = value;
}
constexpr bool& GlobalNamespace::TrackedPeckState::__cordl_internal_get_treatPredictionsAsAlreadyPredicted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treatPredictionsAsAlreadyPredicted;
}
constexpr bool const& GlobalNamespace::TrackedPeckState::__cordl_internal_get_treatPredictionsAsAlreadyPredicted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treatPredictionsAsAlreadyPredicted;
}
constexpr void GlobalNamespace::TrackedPeckState::__cordl_internal_set_treatPredictionsAsAlreadyPredicted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treatPredictionsAsAlreadyPredicted = value;
}
constexpr bool& GlobalNamespace::TrackedPeckState::__cordl_internal_get__firedOnce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firedOnce;
}
constexpr bool const& GlobalNamespace::TrackedPeckState::__cordl_internal_get__firedOnce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firedOnce;
}
constexpr void GlobalNamespace::TrackedPeckState::__cordl_internal_set__firedOnce(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firedOnce = value;
}
constexpr ::GlobalNamespace::SeaShell_ShellReference& GlobalNamespace::TrackedPeckState::__cordl_internal_get_shellReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shellReference;
}
constexpr ::GlobalNamespace::SeaShell_ShellReference const& GlobalNamespace::TrackedPeckState::__cordl_internal_get_shellReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shellReference;
}
constexpr void GlobalNamespace::TrackedPeckState::__cordl_internal_set_shellReference(::GlobalNamespace::SeaShell_ShellReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shellReference = value;
}
constexpr uint16_t& GlobalNamespace::TrackedPeckState::__cordl_internal_get__ticket_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ticket_k__BackingField;
}
constexpr uint16_t const& GlobalNamespace::TrackedPeckState::__cordl_internal_get__ticket_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ticket_k__BackingField;
}
constexpr void GlobalNamespace::TrackedPeckState::__cordl_internal_set__ticket_k__BackingField(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ticket_k__BackingField = value;
}
inline void GlobalNamespace::TrackedPeckState::setStaticF_eventName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "eventName", ::GlobalNamespace::TrackedPeckState*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::TrackedPeckState::getStaticF_eventName()  {
return ::cordl_internals::getStaticField<::StringW, "eventName", ::GlobalNamespace::TrackedPeckState*>();
}
inline bool GlobalNamespace::TrackedPeckState::get_isServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"get_isServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TrackedPeckState::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrackedPeckState::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrackedPeckState::SetState(::GlobalNamespace::PeckContext  newPeckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPeckContext);
}
inline void GlobalNamespace::TrackedPeckState::SetState(int32_t  intValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"SetState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, intValue);
}
inline void GlobalNamespace::TrackedPeckState::AddEffect(::System::Action_1<::GlobalNamespace::PeckContext>*  effectOnPeck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"AddEffect", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::PeckContext>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effectOnPeck);
}
inline void GlobalNamespace::TrackedPeckState::AddEffect(::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*  effectOnPeck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"AddEffect", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effectOnPeck);
}
inline void GlobalNamespace::TrackedPeckState::AddEffect(::GlobalNamespace::PeckSystemReference  systemReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"AddEffect", {}, {::i2c::type_of<::GlobalNamespace::PeckSystemReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, systemReference);
}
inline void GlobalNamespace::TrackedPeckState::ReTrigger(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"ReTrigger", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::TrackedPeckState::ServerRejectPrediction(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"ServerRejectPrediction", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::TrackedPeckState::Reject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"Reject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrackedPeckState::DoPeck(::GlobalNamespace::PeckContext  peckContext, bool  isPrediction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"DoPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext, isPrediction);
}
inline void GlobalNamespace::TrackedPeckState::PredictPeck(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::PeckSwitch*  peckSwitch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"PredictPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::PeckSwitch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext, peckSwitch);
}
inline uint16_t GlobalNamespace::TrackedPeckState::get_ticket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"get_ticket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void GlobalNamespace::TrackedPeckState::set_ticket(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"set_ticket", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TrackedPeckState::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrackedPeckState::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrackedPeckState::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrackedPeckState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackedPeckState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TrackedPeckState* GlobalNamespace::TrackedPeckState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrackedPeckState*>());
}
/// @brief Convert operator to "::LobbyNetworking::ITicketed"
constexpr  GlobalNamespace::TrackedPeckState::operator ::LobbyNetworking::ITicketed*() noexcept {
return static_cast<::LobbyNetworking::ITicketed*>(static_cast<void*>(this));
}
/// @brief Convert to "::LobbyNetworking::ITicketed"
constexpr ::LobbyNetworking::ITicketed* GlobalNamespace::TrackedPeckState::i___LobbyNetworking__ITicketed() noexcept {
return static_cast<::LobbyNetworking::ITicketed*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackedPeckState::TrackedPeckState()   {
}
