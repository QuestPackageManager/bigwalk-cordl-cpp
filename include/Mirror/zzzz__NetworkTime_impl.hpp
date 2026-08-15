#pragma once
// IWYU pragma private; include "Mirror/NetworkTime.hpp"
#include "Mirror/zzzz__ExponentialMovingAverage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__NetworkTime_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkPingMessage_def.hpp"
#include "Mirror/zzzz__NetworkPongMessage_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkTime.get_localTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::Mirror::NetworkTime::get_localTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181594c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTime*>(),
                        {"get_localTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTime.get_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::Mirror::NetworkTime::get_time)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180316400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTime*>(),
                        {"get_time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTime.get_offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::Mirror::NetworkTime::get_offset)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181594c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTime*>(),
                        {"get_offset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTime.get_rtt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::Mirror::NetworkTime::get_rtt)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181594ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTime*>(),
                        {"get_rtt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTime.ResetStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkTime::ResetStatics)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181594a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTime*>(),
                        {"ResetStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTime.UpdateClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkTime::UpdateClient)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181594b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTime*>(),
                        {"UpdateClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTime.OnServerPing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkConnectionToClient*, ::Mirror::NetworkPingMessage)>(&::Mirror::NetworkTime::OnServerPing)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181594a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTime*>(),
                        {"OnServerPing", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::NetworkPingMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTime.OnClientPong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkPongMessage)>(&::Mirror::NetworkTime::OnClientPong)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181594950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTime*>(),
                        {"OnClientPong", {}, {::i2c::type_of<::Mirror::NetworkPongMessage>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::NetworkTime::setStaticF_PingFrequency(float_t  value)  {
::cordl_internals::setStaticField<float_t, "PingFrequency", ::Mirror::NetworkTime*>(std::forward<float_t>(value));
}
inline float_t Mirror::NetworkTime::getStaticF_PingFrequency()  {
return ::cordl_internals::getStaticField<float_t, "PingFrequency", ::Mirror::NetworkTime*>();
}
inline void Mirror::NetworkTime::setStaticF_PingWindowSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "PingWindowSize", ::Mirror::NetworkTime*>(std::forward<int32_t>(value));
}
inline int32_t Mirror::NetworkTime::getStaticF_PingWindowSize()  {
return ::cordl_internals::getStaticField<int32_t, "PingWindowSize", ::Mirror::NetworkTime*>();
}
inline void Mirror::NetworkTime::setStaticF_lastPingTime(double_t  value)  {
::cordl_internals::setStaticField<double_t, "lastPingTime", ::Mirror::NetworkTime*>(std::forward<double_t>(value));
}
inline double_t Mirror::NetworkTime::getStaticF_lastPingTime()  {
return ::cordl_internals::getStaticField<double_t, "lastPingTime", ::Mirror::NetworkTime*>();
}
inline void Mirror::NetworkTime::setStaticF__rtt(::Mirror::ExponentialMovingAverage  value)  {
::cordl_internals::setStaticField<::Mirror::ExponentialMovingAverage, "_rtt", ::Mirror::NetworkTime*>(std::forward<::Mirror::ExponentialMovingAverage>(value));
}
inline ::Mirror::ExponentialMovingAverage Mirror::NetworkTime::getStaticF__rtt()  {
return ::cordl_internals::getStaticField<::Mirror::ExponentialMovingAverage, "_rtt", ::Mirror::NetworkTime*>();
}
inline double_t Mirror::NetworkTime::get_localTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTime*>(),
                        {"get_localTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline double_t Mirror::NetworkTime::get_time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTime*>(),
                        {"get_time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline double_t Mirror::NetworkTime::get_offset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTime*>(),
                        {"get_offset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline double_t Mirror::NetworkTime::get_rtt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTime*>(),
                        {"get_rtt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline void Mirror::NetworkTime::ResetStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTime*>(),
                        {"ResetStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkTime::UpdateClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTime*>(),
                        {"UpdateClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkTime::OnServerPing(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::NetworkPingMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTime*>(),
                        {"OnServerPing", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::NetworkPingMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, conn, message);
}
inline void Mirror::NetworkTime::OnClientPong(::Mirror::NetworkPongMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTime*>(),
                        {"OnClientPong", {}, {::i2c::type_of<::Mirror::NetworkPongMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::Mirror::NetworkTime::NetworkTime()   {
}
