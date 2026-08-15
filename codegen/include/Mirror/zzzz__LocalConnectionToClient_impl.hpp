#pragma once
// IWYU pragma private; include "Mirror/LocalConnectionToClient.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_impl.hpp"
#include "Mirror/zzzz__LocalConnectionToClient_def.hpp"
#include "Mirror/zzzz__LocalConnectionToServer_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Mirror::LocalConnectionToClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LocalConnectionToClient::*)()>(&::Mirror::LocalConnectionToClient::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181536dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LocalConnectionToClient*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LocalConnectionToClient.get_address
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::LocalConnectionToClient::*)()>(&::Mirror::LocalConnectionToClient::get_address)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181536de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LocalConnectionToClient*>(),
                    {::i2c::class_of<::Mirror::LocalConnectionToClient*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LocalConnectionToClient.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LocalConnectionToClient::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::LocalConnectionToClient::Send)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181536d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LocalConnectionToClient*>(),
                    {::i2c::class_of<::Mirror::LocalConnectionToClient*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LocalConnectionToClient.IsAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::LocalConnectionToClient::*)(float_t)>(&::Mirror::LocalConnectionToClient::IsAlive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LocalConnectionToClient*>(),
                    {::i2c::class_of<::Mirror::LocalConnectionToClient*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LocalConnectionToClient.DisconnectInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LocalConnectionToClient::*)()>(&::Mirror::LocalConnectionToClient::DisconnectInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181536ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LocalConnectionToClient*>(),
                        {"DisconnectInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LocalConnectionToClient.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LocalConnectionToClient::*)()>(&::Mirror::LocalConnectionToClient::Disconnect)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181536cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LocalConnectionToClient*>(),
                    {::i2c::class_of<::Mirror::LocalConnectionToClient*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::Mirror::LocalConnectionToServer*& Mirror::LocalConnectionToClient::__cordl_internal_get_connectionToServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionToServer;
}
constexpr ::Mirror::LocalConnectionToServer* const& Mirror::LocalConnectionToClient::__cordl_internal_get_connectionToServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionToServer;
}
constexpr void Mirror::LocalConnectionToClient::__cordl_internal_set_connectionToServer(::Mirror::LocalConnectionToServer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectionToServer = value;
}
inline void Mirror::LocalConnectionToClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LocalConnectionToClient*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Mirror::LocalConnectionToClient::get_address()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LocalConnectionToClient*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mirror::LocalConnectionToClient::Send(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LocalConnectionToClient*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment, channelId);
}
inline bool Mirror::LocalConnectionToClient::IsAlive(float_t  timeout)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LocalConnectionToClient*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, timeout);
}
inline void Mirror::LocalConnectionToClient::DisconnectInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LocalConnectionToClient*>(),
                        {"DisconnectInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::LocalConnectionToClient::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LocalConnectionToClient*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::LocalConnectionToClient* Mirror::LocalConnectionToClient::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::LocalConnectionToClient*>());
}
// Ctor Parameters []
constexpr ::Mirror::LocalConnectionToClient::LocalConnectionToClient()   {
}
