#pragma once
// IWYU pragma private; include "Telepathy/ClientConnectionState.hpp"
#include "Telepathy/zzzz__ConnectionState_impl.hpp"
#include "Telepathy/zzzz__ClientConnectionState_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "Telepathy/zzzz__MagnificentReceivePipe_def.hpp"
//  Writing Method size for method: ::Telepathy::ClientConnectionState.get_Connected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Telepathy::ClientConnectionState::*)()>(&::Telepathy::ClientConnectionState::get_Connected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e57900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::ClientConnectionState*>(),
                        {"get_Connected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::ClientConnectionState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::ClientConnectionState::*)(int32_t)>(&::Telepathy::ClientConnectionState::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e57880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::ClientConnectionState*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::ClientConnectionState.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::ClientConnectionState::*)()>(&::Telepathy::ClientConnectionState::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e57820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::ClientConnectionState*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Thread*& Telepathy::ClientConnectionState::__cordl_internal_get_receiveThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receiveThread;
}
constexpr ::System::Threading::Thread* const& Telepathy::ClientConnectionState::__cordl_internal_get_receiveThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receiveThread;
}
constexpr void Telepathy::ClientConnectionState::__cordl_internal_set_receiveThread(::System::Threading::Thread*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___receiveThread = value;
}
constexpr bool& Telepathy::ClientConnectionState::__cordl_internal_get_Connecting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Connecting;
}
constexpr bool const& Telepathy::ClientConnectionState::__cordl_internal_get_Connecting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Connecting;
}
constexpr void Telepathy::ClientConnectionState::__cordl_internal_set_Connecting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Connecting = value;
}
constexpr ::Telepathy::MagnificentReceivePipe*& Telepathy::ClientConnectionState::__cordl_internal_get_receivePipe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivePipe;
}
constexpr ::Telepathy::MagnificentReceivePipe* const& Telepathy::ClientConnectionState::__cordl_internal_get_receivePipe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivePipe;
}
constexpr void Telepathy::ClientConnectionState::__cordl_internal_set_receivePipe(::Telepathy::MagnificentReceivePipe*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___receivePipe = value;
}
inline bool Telepathy::ClientConnectionState::get_Connected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::ClientConnectionState*>(),
                        {"get_Connected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Telepathy::ClientConnectionState::_ctor(int32_t  MaxMessageSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::ClientConnectionState*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, MaxMessageSize);
}
inline void Telepathy::ClientConnectionState::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::ClientConnectionState*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Telepathy::ClientConnectionState* Telepathy::ClientConnectionState::New_ctor(int32_t  MaxMessageSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Telepathy::ClientConnectionState*>(MaxMessageSize));
}
// Ctor Parameters []
constexpr ::Telepathy::ClientConnectionState::ClientConnectionState()   {
}
