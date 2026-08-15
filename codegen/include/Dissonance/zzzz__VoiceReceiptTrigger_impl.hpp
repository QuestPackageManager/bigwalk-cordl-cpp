#pragma once
// IWYU pragma private; include "Dissonance/VoiceReceiptTrigger.hpp"
#include "Dissonance/zzzz__BaseCommsTrigger_impl.hpp"
#include "Dissonance/zzzz__RoomMembership_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Dissonance/zzzz__VoiceReceiptTrigger_def.hpp"
#include "Dissonance/zzzz__IVoiceReceiptTrigger_def.hpp"
//  Writing Method size for method: ::Dissonance::VoiceReceiptTrigger.get_RoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::VoiceReceiptTrigger::*)()>(&::Dissonance::VoiceReceiptTrigger::get_RoomName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                        {"get_RoomName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceReceiptTrigger.set_RoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceReceiptTrigger::*)(::StringW)>(&::Dissonance::VoiceReceiptTrigger::set_RoomName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805d4c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                        {"set_RoomName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceReceiptTrigger.get_UseColliderTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::VoiceReceiptTrigger::*)()>(&::Dissonance::VoiceReceiptTrigger::get_UseColliderTrigger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e56b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceReceiptTrigger.set_UseColliderTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceReceiptTrigger::*)(bool)>(&::Dissonance::VoiceReceiptTrigger::set_UseColliderTrigger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d4c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceReceiptTrigger.get_CanTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::VoiceReceiptTrigger::*)()>(&::Dissonance::VoiceReceiptTrigger::get_CanTrigger)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805d4be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceReceiptTrigger.StartListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceReceiptTrigger::*)()>(&::Dissonance::VoiceReceiptTrigger::StartListening)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d4a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                        {"StartListening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceReceiptTrigger.StopListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceReceiptTrigger::*)()>(&::Dissonance::VoiceReceiptTrigger::StopListening)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804353c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                        {"StopListening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceReceiptTrigger.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceReceiptTrigger::*)()>(&::Dissonance::VoiceReceiptTrigger::Update)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1805d4a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceReceiptTrigger.JoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceReceiptTrigger::*)()>(&::Dissonance::VoiceReceiptTrigger::JoinRoom)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805d4810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                        {"JoinRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceReceiptTrigger.LeaveRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceReceiptTrigger::*)()>(&::Dissonance::VoiceReceiptTrigger::LeaveRoom)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805d4910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                        {"LeaveRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceReceiptTrigger.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceReceiptTrigger::*)()>(&::Dissonance::VoiceReceiptTrigger::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d4990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                    {::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoiceReceiptTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoiceReceiptTrigger::*)()>(&::Dissonance::VoiceReceiptTrigger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d4bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Dissonance::VoiceReceiptTrigger::__cordl_internal_get__roomExpanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomExpanded;
}
constexpr bool const& Dissonance::VoiceReceiptTrigger::__cordl_internal_get__roomExpanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomExpanded;
}
constexpr void Dissonance::VoiceReceiptTrigger::__cordl_internal_set__roomExpanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomExpanded = value;
}
constexpr bool& Dissonance::VoiceReceiptTrigger::__cordl_internal_get__tokensExpanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tokensExpanded;
}
constexpr bool const& Dissonance::VoiceReceiptTrigger::__cordl_internal_get__tokensExpanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tokensExpanded;
}
constexpr void Dissonance::VoiceReceiptTrigger::__cordl_internal_set__tokensExpanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tokensExpanded = value;
}
constexpr bool& Dissonance::VoiceReceiptTrigger::__cordl_internal_get__colliderExpanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliderExpanded;
}
constexpr bool const& Dissonance::VoiceReceiptTrigger::__cordl_internal_get__colliderExpanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliderExpanded;
}
constexpr void Dissonance::VoiceReceiptTrigger::__cordl_internal_set__colliderExpanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colliderExpanded = value;
}
constexpr ::System::Nullable_1<::Dissonance::RoomMembership>& Dissonance::VoiceReceiptTrigger::__cordl_internal_get__membership()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____membership;
}
constexpr ::System::Nullable_1<::Dissonance::RoomMembership> const& Dissonance::VoiceReceiptTrigger::__cordl_internal_get__membership() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____membership;
}
constexpr void Dissonance::VoiceReceiptTrigger::__cordl_internal_set__membership(::System::Nullable_1<::Dissonance::RoomMembership>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____membership = value;
}
constexpr ::StringW& Dissonance::VoiceReceiptTrigger::__cordl_internal_get__roomName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomName;
}
constexpr ::StringW const& Dissonance::VoiceReceiptTrigger::__cordl_internal_get__roomName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomName;
}
constexpr void Dissonance::VoiceReceiptTrigger::__cordl_internal_set__roomName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomName = value;
}
constexpr bool& Dissonance::VoiceReceiptTrigger::__cordl_internal_get__scriptDeactivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scriptDeactivated;
}
constexpr bool const& Dissonance::VoiceReceiptTrigger::__cordl_internal_get__scriptDeactivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scriptDeactivated;
}
constexpr void Dissonance::VoiceReceiptTrigger::__cordl_internal_set__scriptDeactivated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scriptDeactivated = value;
}
constexpr bool& Dissonance::VoiceReceiptTrigger::__cordl_internal_get__useTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useTrigger;
}
constexpr bool const& Dissonance::VoiceReceiptTrigger::__cordl_internal_get__useTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useTrigger;
}
constexpr void Dissonance::VoiceReceiptTrigger::__cordl_internal_set__useTrigger(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useTrigger = value;
}
inline ::StringW Dissonance::VoiceReceiptTrigger::get_RoomName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                        {"get_RoomName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Dissonance::VoiceReceiptTrigger::set_RoomName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                        {"set_RoomName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::VoiceReceiptTrigger::get_UseColliderTrigger()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::VoiceReceiptTrigger::set_UseColliderTrigger(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::VoiceReceiptTrigger::get_CanTrigger()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::VoiceReceiptTrigger::StartListening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                        {"StartListening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceReceiptTrigger::StopListening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                        {"StopListening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceReceiptTrigger::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceReceiptTrigger::JoinRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                        {"JoinRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceReceiptTrigger::LeaveRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                        {"LeaveRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceReceiptTrigger::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoiceReceiptTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoiceReceiptTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::VoiceReceiptTrigger* Dissonance::VoiceReceiptTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::VoiceReceiptTrigger*>());
}
/// @brief Convert operator to "::Dissonance::IVoiceReceiptTrigger"
constexpr  Dissonance::VoiceReceiptTrigger::operator ::Dissonance::IVoiceReceiptTrigger*() noexcept {
return static_cast<::Dissonance::IVoiceReceiptTrigger*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::IVoiceReceiptTrigger"
constexpr ::Dissonance::IVoiceReceiptTrigger* Dissonance::VoiceReceiptTrigger::i___Dissonance__IVoiceReceiptTrigger() noexcept {
return static_cast<::Dissonance::IVoiceReceiptTrigger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::VoiceReceiptTrigger::VoiceReceiptTrigger()   {
}
