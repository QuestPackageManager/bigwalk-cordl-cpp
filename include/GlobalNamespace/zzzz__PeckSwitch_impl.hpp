#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckSwitch.hpp"
#include "GlobalNamespace/zzzz__PropGroup_impl.hpp"
#include "GlobalNamespace/zzzz__SeaShell_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectBlockSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "LobbyNetworking/zzzz__ITicketed_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckSwitch_StateMode::PeckSwitch_StateMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckSwitch_StateMode::PeckSwitch_StateMode()   {
}
constexpr ::GlobalNamespace::PeckSwitch_StateMode  GlobalNamespace::PeckSwitch_StateMode::Specific{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckSwitch_StateMode  GlobalNamespace::PeckSwitch_StateMode::Wrap{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PeckSwitch_StateMode  GlobalNamespace::PeckSwitch_StateMode::Map{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::PeckSwitch_StateMode  GlobalNamespace::PeckSwitch_StateMode::Ignore{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::PeckSwitch.get_isNotBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PeckSwitch::*)()>(&::GlobalNamespace::PeckSwitch::get_isNotBlocked)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180454030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {"get_isNotBlocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckSwitch.GetNextState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PeckSwitch::*)(int32_t)>(&::GlobalNamespace::PeckSwitch::GetNextState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180453d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {"GetNextState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckSwitch.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckSwitch::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckSwitch::Peck)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180453dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckSwitch.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckSwitch::*)()>(&::GlobalNamespace::PeckSwitch::Peck)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180453fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {"Peck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckSwitch.GetCrosshairTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::PeckSwitch::*)()>(&::GlobalNamespace::PeckSwitch::GetCrosshairTransform)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180453cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {"GetCrosshairTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckSwitch.get_ticket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::GlobalNamespace::PeckSwitch::*)()>(&::GlobalNamespace::PeckSwitch::get_ticket)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180454050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {"get_ticket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckSwitch.set_ticket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckSwitch::*)(uint16_t)>(&::GlobalNamespace::PeckSwitch::set_ticket)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180454060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {"set_ticket", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckSwitch.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckSwitch::*)()>(&::GlobalNamespace::PeckSwitch::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180453d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckSwitch.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckSwitch::*)()>(&::GlobalNamespace::PeckSwitch::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180453d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckSwitch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckSwitch::*)()>(&::GlobalNamespace::PeckSwitch::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::PeckSwitch::__cordl_internal_get_trackedStateSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedStateSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::PeckSwitch::__cordl_internal_get_trackedStateSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedStateSystem;
}
constexpr void GlobalNamespace::PeckSwitch::__cordl_internal_set_trackedStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackedStateSystem = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PeckSwitch::__cordl_internal_get_customCrosshairPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customCrosshairPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PeckSwitch::__cordl_internal_get_customCrosshairPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customCrosshairPoint;
}
constexpr void GlobalNamespace::PeckSwitch::__cordl_internal_set_customCrosshairPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customCrosshairPoint = value;
}
constexpr bool& GlobalNamespace::PeckSwitch::__cordl_internal_get_showTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showTap;
}
constexpr bool const& GlobalNamespace::PeckSwitch::__cordl_internal_get_showTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showTap;
}
constexpr void GlobalNamespace::PeckSwitch::__cordl_internal_set_showTap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showTap = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PeckSwitch::__cordl_internal_get_upSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PeckSwitch::__cordl_internal_get_upSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upSwitch;
}
constexpr void GlobalNamespace::PeckSwitch::__cordl_internal_set_upSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upSwitch = value;
}
constexpr ::GlobalNamespace::PeckSwitch_StateMode& GlobalNamespace::PeckSwitch::__cordl_internal_get_stateMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateMode;
}
constexpr ::GlobalNamespace::PeckSwitch_StateMode const& GlobalNamespace::PeckSwitch::__cordl_internal_get_stateMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateMode;
}
constexpr void GlobalNamespace::PeckSwitch::__cordl_internal_set_stateMode(::GlobalNamespace::PeckSwitch_StateMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateMode = value;
}
constexpr int32_t& GlobalNamespace::PeckSwitch::__cordl_internal_get_specificState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specificState;
}
constexpr int32_t const& GlobalNamespace::PeckSwitch::__cordl_internal_get_specificState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specificState;
}
constexpr void GlobalNamespace::PeckSwitch::__cordl_internal_set_specificState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___specificState = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::PeckSwitch::__cordl_internal_get_mapStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapStates;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::PeckSwitch::__cordl_internal_get_mapStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapStates;
}
constexpr void GlobalNamespace::PeckSwitch::__cordl_internal_set_mapStates(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapStates = value;
}
constexpr int32_t& GlobalNamespace::PeckSwitch::__cordl_internal_get_wrapTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrapTotal;
}
constexpr int32_t const& GlobalNamespace::PeckSwitch::__cordl_internal_get_wrapTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrapTotal;
}
constexpr void GlobalNamespace::PeckSwitch::__cordl_internal_set_wrapTotal(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wrapTotal = value;
}
constexpr bool& GlobalNamespace::PeckSwitch::__cordl_internal_get_needsKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needsKey;
}
constexpr bool const& GlobalNamespace::PeckSwitch::__cordl_internal_get_needsKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needsKey;
}
constexpr void GlobalNamespace::PeckSwitch::__cordl_internal_set_needsKey(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___needsKey = value;
}
constexpr ::GlobalNamespace::PropGroup& GlobalNamespace::PeckSwitch::__cordl_internal_get_keyType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyType;
}
constexpr ::GlobalNamespace::PropGroup const& GlobalNamespace::PeckSwitch::__cordl_internal_get_keyType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyType;
}
constexpr void GlobalNamespace::PeckSwitch::__cordl_internal_set_keyType(::GlobalNamespace::PropGroup  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyType = value;
}
constexpr bool& GlobalNamespace::PeckSwitch::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckSwitch::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckSwitch::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckEffectBlockSwitch>>*& GlobalNamespace::PeckSwitch::__cordl_internal_get_blockers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckEffectBlockSwitch>>* const& GlobalNamespace::PeckSwitch::__cordl_internal_get_blockers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockers;
}
constexpr void GlobalNamespace::PeckSwitch::__cordl_internal_set_blockers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckEffectBlockSwitch>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockers = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PeckSwitch::__cordl_internal_get_playerHoldingThis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerHoldingThis;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PeckSwitch::__cordl_internal_get_playerHoldingThis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerHoldingThis;
}
constexpr void GlobalNamespace::PeckSwitch::__cordl_internal_set_playerHoldingThis(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerHoldingThis = value;
}
constexpr ::GlobalNamespace::SeaShell_ShellReference& GlobalNamespace::PeckSwitch::__cordl_internal_get_shellReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shellReference;
}
constexpr ::GlobalNamespace::SeaShell_ShellReference const& GlobalNamespace::PeckSwitch::__cordl_internal_get_shellReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shellReference;
}
constexpr void GlobalNamespace::PeckSwitch::__cordl_internal_set_shellReference(::GlobalNamespace::SeaShell_ShellReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shellReference = value;
}
constexpr bool& GlobalNamespace::PeckSwitch::__cordl_internal_get_useTicket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTicket;
}
constexpr bool const& GlobalNamespace::PeckSwitch::__cordl_internal_get_useTicket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTicket;
}
constexpr void GlobalNamespace::PeckSwitch::__cordl_internal_set_useTicket(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useTicket = value;
}
constexpr uint16_t& GlobalNamespace::PeckSwitch::__cordl_internal_get__ticket_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ticket_k__BackingField;
}
constexpr uint16_t const& GlobalNamespace::PeckSwitch::__cordl_internal_get__ticket_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ticket_k__BackingField;
}
constexpr void GlobalNamespace::PeckSwitch::__cordl_internal_set__ticket_k__BackingField(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ticket_k__BackingField = value;
}
inline bool GlobalNamespace::PeckSwitch::get_isNotBlocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {"get_isNotBlocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PeckSwitch::GetNextState(int32_t  oldState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {"GetNextState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, oldState);
}
inline void GlobalNamespace::PeckSwitch::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckSwitch::Peck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {"Peck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::PeckSwitch::GetCrosshairTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {"GetCrosshairTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline uint16_t GlobalNamespace::PeckSwitch::get_ticket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {"get_ticket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void GlobalNamespace::PeckSwitch::set_ticket(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {"set_ticket", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PeckSwitch::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckSwitch::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckSwitch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSwitch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckSwitch* GlobalNamespace::PeckSwitch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckSwitch*>());
}
/// @brief Convert operator to "::LobbyNetworking::ITicketed"
constexpr  GlobalNamespace::PeckSwitch::operator ::LobbyNetworking::ITicketed*() noexcept {
return static_cast<::LobbyNetworking::ITicketed*>(static_cast<void*>(this));
}
/// @brief Convert to "::LobbyNetworking::ITicketed"
constexpr ::LobbyNetworking::ITicketed* GlobalNamespace::PeckSwitch::i___LobbyNetworking__ITicketed() noexcept {
return static_cast<::LobbyNetworking::ITicketed*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckSwitch::PeckSwitch()   {
}
