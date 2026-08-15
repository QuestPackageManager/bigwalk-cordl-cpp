#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/IClient.hpp"
#include "Mirror/FizzySteam/zzzz__IClient_def.hpp"
//  Writing Method size for method: ::Mirror::FizzySteam::IClient.get_Connected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::FizzySteam::IClient::*)()>(&::Mirror::FizzySteam::IClient::get_Connected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::IClient*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::IClient*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::IClient.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::FizzySteam::IClient::*)()>(&::Mirror::FizzySteam::IClient::get_Error)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::IClient*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::IClient*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::IClient.ReceiveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::IClient::*)()>(&::Mirror::FizzySteam::IClient::ReceiveData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::IClient*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::IClient*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::IClient.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::IClient::*)()>(&::Mirror::FizzySteam::IClient::Disconnect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::IClient*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::IClient*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::IClient.FlushData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::IClient::*)()>(&::Mirror::FizzySteam::IClient::FlushData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::IClient*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::IClient*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::IClient.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::IClient::*)(::ArrayW<uint8_t>, int32_t)>(&::Mirror::FizzySteam::IClient::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::IClient*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::IClient*>(), 5}
                ));
    return ___internal_method;
  }
};
inline bool Mirror::FizzySteam::IClient::get_Connected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::IClient*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mirror::FizzySteam::IClient::get_Error()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::IClient*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::FizzySteam::IClient::ReceiveData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::IClient*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::IClient::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::IClient*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::IClient::FlushData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::IClient*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::IClient::Send(::ArrayW<uint8_t>  data, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::IClient*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channelId);
}
