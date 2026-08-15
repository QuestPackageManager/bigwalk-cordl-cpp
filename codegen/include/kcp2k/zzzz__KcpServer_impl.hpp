#pragma once
// IWYU pragma private; include "kcp2k/KcpServer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "kcp2k/zzzz__KcpServerConnection_impl.hpp"
#include "kcp2k/zzzz__KcpServer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "kcp2k/zzzz__ErrorCode_def.hpp"
#include "kcp2k/zzzz__KcpChannel_def.hpp"
#include "kcp2k/zzzz__KcpConfig_def.hpp"
#include "kcp2k/zzzz__KcpServerConnection_def.hpp"
#include "kcp2k/zzzz__KcpServer_def.hpp"
//  Writing Method size for method: ::kcp2k::KcpServer___c__DisplayClass18_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpServer___c__DisplayClass18_0::*)()>(&::kcp2k::KcpServer___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer___c__DisplayClass18_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer___c__DisplayClass18_0._CreateConnection_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpServer___c__DisplayClass18_0::*)(::System::ArraySegment_1<uint8_t>)>(&::kcp2k::KcpServer___c__DisplayClass18_0::_CreateConnection_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814531a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer___c__DisplayClass18_0*>(),
                        {"<CreateConnection>b__0", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer___c__DisplayClass18_0._CreateConnection_g__OnAuthenticatedWrap_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpServer___c__DisplayClass18_0::*)()>(&::kcp2k::KcpServer___c__DisplayClass18_0::_CreateConnection_g__OnAuthenticatedWrap_1)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814531f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer___c__DisplayClass18_0*>(),
                        {"<CreateConnection>g__OnAuthenticatedWrap|1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer___c__DisplayClass18_0._CreateConnection_g__OnDataWrap_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpServer___c__DisplayClass18_0::*)(::System::ArraySegment_1<uint8_t>, ::kcp2k::KcpChannel)>(&::kcp2k::KcpServer___c__DisplayClass18_0::_CreateConnection_g__OnDataWrap_2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181453340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer___c__DisplayClass18_0*>(),
                        {"<CreateConnection>g__OnDataWrap|2", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::kcp2k::KcpChannel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer___c__DisplayClass18_0._CreateConnection_g__OnDisconnectedWrap_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpServer___c__DisplayClass18_0::*)()>(&::kcp2k::KcpServer___c__DisplayClass18_0::_CreateConnection_g__OnDisconnectedWrap_3)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181453390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer___c__DisplayClass18_0*>(),
                        {"<CreateConnection>g__OnDisconnectedWrap|3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer___c__DisplayClass18_0._CreateConnection_g__OnErrorWrap_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpServer___c__DisplayClass18_0::*)(::kcp2k::ErrorCode, ::StringW)>(&::kcp2k::KcpServer___c__DisplayClass18_0::_CreateConnection_g__OnErrorWrap_4)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181453470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer___c__DisplayClass18_0*>(),
                        {"<CreateConnection>g__OnErrorWrap|4", {}, {::i2c::type_of<::kcp2k::ErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::kcp2k::KcpServer*& kcp2k::KcpServer___c__DisplayClass18_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::kcp2k::KcpServer* const& kcp2k::KcpServer___c__DisplayClass18_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void kcp2k::KcpServer___c__DisplayClass18_0::__cordl_internal_set___4__this(::kcp2k::KcpServer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& kcp2k::KcpServer___c__DisplayClass18_0::__cordl_internal_get_connectionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionId;
}
constexpr int32_t const& kcp2k::KcpServer___c__DisplayClass18_0::__cordl_internal_get_connectionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionId;
}
constexpr void kcp2k::KcpServer___c__DisplayClass18_0::__cordl_internal_set_connectionId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectionId = value;
}
constexpr ::kcp2k::KcpServerConnection& kcp2k::KcpServer___c__DisplayClass18_0::__cordl_internal_get_connection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connection;
}
constexpr ::kcp2k::KcpServerConnection const& kcp2k::KcpServer___c__DisplayClass18_0::__cordl_internal_get_connection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connection;
}
constexpr void kcp2k::KcpServer___c__DisplayClass18_0::__cordl_internal_set_connection(::kcp2k::KcpServerConnection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connection = value;
}
inline void kcp2k::KcpServer___c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer___c__DisplayClass18_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpServer___c__DisplayClass18_0::_CreateConnection_b__0(::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer___c__DisplayClass18_0*>(),
                        {"<CreateConnection>b__0", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void kcp2k::KcpServer___c__DisplayClass18_0::_CreateConnection_g__OnAuthenticatedWrap_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer___c__DisplayClass18_0*>(),
                        {"<CreateConnection>g__OnAuthenticatedWrap|1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpServer___c__DisplayClass18_0::_CreateConnection_g__OnDataWrap_2(::System::ArraySegment_1<uint8_t>  message, ::kcp2k::KcpChannel  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer___c__DisplayClass18_0*>(),
                        {"<CreateConnection>g__OnDataWrap|2", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::kcp2k::KcpChannel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, channel);
}
inline void kcp2k::KcpServer___c__DisplayClass18_0::_CreateConnection_g__OnDisconnectedWrap_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer___c__DisplayClass18_0*>(),
                        {"<CreateConnection>g__OnDisconnectedWrap|3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpServer___c__DisplayClass18_0::_CreateConnection_g__OnErrorWrap_4(::kcp2k::ErrorCode  error, ::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer___c__DisplayClass18_0*>(),
                        {"<CreateConnection>g__OnErrorWrap|4", {}, {::i2c::type_of<::kcp2k::ErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, reason);
}
inline ::kcp2k::KcpServer___c__DisplayClass18_0* kcp2k::KcpServer___c__DisplayClass18_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::kcp2k::KcpServer___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::kcp2k::KcpServer___c__DisplayClass18_0::KcpServer___c__DisplayClass18_0()   {
}
//  Writing Method size for method: ::kcp2k::KcpServer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpServer::*)(::System::Action_1<int32_t>*, ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*, ::System::Action_1<int32_t>*, ::System::Action_3<int32_t,::kcp2k::ErrorCode,::StringW>*, ::kcp2k::KcpConfig*)>(&::kcp2k::KcpServer::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181450930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<int32_t>*>(), ::i2c::type_of<::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*>(), ::i2c::type_of<::System::Action_1<int32_t>*>(), ::i2c::type_of<::System::Action_3<int32_t,::kcp2k::ErrorCode,::StringW>*>(), ::i2c::type_of<::kcp2k::KcpConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer.IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::kcp2k::KcpServer::*)()>(&::kcp2k::KcpServer::IsActive)> {
  constexpr static std::size_t size = 0x1780;
  constexpr static std::size_t addrs = 0x180d8de60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpServer*>(),
                    {::i2c::class_of<::kcp2k::KcpServer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer.CreateServerSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::Socket* (*)(bool, uint16_t)>(&::kcp2k::KcpServer::CreateServerSocket)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18144fef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer*>(),
                        {"CreateServerSocket", {}, {::i2c::type_of<bool>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpServer::*)(uint16_t)>(&::kcp2k::KcpServer::Start)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181450510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpServer*>(),
                    {::i2c::class_of<::kcp2k::KcpServer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpServer::*)(int32_t, ::System::ArraySegment_1<uint8_t>, ::kcp2k::KcpChannel)>(&::kcp2k::KcpServer::Send)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814504a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer*>(),
                        {"Send", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::kcp2k::KcpChannel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpServer::*)(int32_t)>(&::kcp2k::KcpServer::Disconnect)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181450090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer*>(),
                        {"Disconnect", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer.GetClientEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::kcp2k::KcpServer::*)(int32_t)>(&::kcp2k::KcpServer::GetClientEndPoint)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814500e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer*>(),
                        {"GetClientEndPoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer.RawReceiveFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::kcp2k::KcpServer::*)(::by_ref<::System::ArraySegment_1<uint8_t>>, ::by_ref<int32_t>)>(&::kcp2k::KcpServer::RawReceiveFrom)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181450260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpServer*>(),
                    {::i2c::class_of<::kcp2k::KcpServer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer.RawSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpServer::*)(int32_t, ::System::ArraySegment_1<uint8_t>)>(&::kcp2k::KcpServer::RawSend)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181450330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpServer*>(),
                    {::i2c::class_of<::kcp2k::KcpServer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer.CreateConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::kcp2k::KcpServerConnection (::kcp2k::KcpServer::*)(int32_t)>(&::kcp2k::KcpServer::CreateConnection)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18144fc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpServer*>(),
                    {::i2c::class_of<::kcp2k::KcpServer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer.ProcessMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpServer::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::kcp2k::KcpServer::ProcessMessage)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181450170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer*>(),
                        {"ProcessMessage", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer.TickIncoming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpServer::*)()>(&::kcp2k::KcpServer::TickIncoming)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x181450610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpServer*>(),
                    {::i2c::class_of<::kcp2k::KcpServer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer.TickOutgoing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpServer::*)()>(&::kcp2k::KcpServer::TickOutgoing)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181450860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpServer*>(),
                    {::i2c::class_of<::kcp2k::KcpServer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpServer::*)()>(&::kcp2k::KcpServer::Tick)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814508f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpServer*>(),
                    {::i2c::class_of<::kcp2k::KcpServer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpServer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpServer::*)()>(&::kcp2k::KcpServer::Stop)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814505d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpServer*>(),
                    {::i2c::class_of<::kcp2k::KcpServer*>(), 12}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<int32_t>*& kcp2k::KcpServer::__cordl_internal_get_OnConnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr ::System::Action_1<int32_t>* const& kcp2k::KcpServer::__cordl_internal_get_OnConnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr void kcp2k::KcpServer::__cordl_internal_set_OnConnected(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConnected = value;
}
constexpr ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*& kcp2k::KcpServer::__cordl_internal_get_OnData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnData;
}
constexpr ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>* const& kcp2k::KcpServer::__cordl_internal_get_OnData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnData;
}
constexpr void kcp2k::KcpServer::__cordl_internal_set_OnData(::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnData = value;
}
constexpr ::System::Action_1<int32_t>*& kcp2k::KcpServer::__cordl_internal_get_OnDisconnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr ::System::Action_1<int32_t>* const& kcp2k::KcpServer::__cordl_internal_get_OnDisconnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr void kcp2k::KcpServer::__cordl_internal_set_OnDisconnected(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDisconnected = value;
}
constexpr ::System::Action_3<int32_t,::kcp2k::ErrorCode,::StringW>*& kcp2k::KcpServer::__cordl_internal_get_OnError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnError;
}
constexpr ::System::Action_3<int32_t,::kcp2k::ErrorCode,::StringW>* const& kcp2k::KcpServer::__cordl_internal_get_OnError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnError;
}
constexpr void kcp2k::KcpServer::__cordl_internal_set_OnError(::System::Action_3<int32_t,::kcp2k::ErrorCode,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnError = value;
}
constexpr ::kcp2k::KcpConfig*& kcp2k::KcpServer::__cordl_internal_get_config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr ::kcp2k::KcpConfig* const& kcp2k::KcpServer::__cordl_internal_get_config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr void kcp2k::KcpServer::__cordl_internal_set_config(::kcp2k::KcpConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___config = value;
}
constexpr ::System::Net::Sockets::Socket*& kcp2k::KcpServer::__cordl_internal_get_socket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___socket;
}
constexpr ::System::Net::Sockets::Socket* const& kcp2k::KcpServer::__cordl_internal_get_socket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___socket;
}
constexpr void kcp2k::KcpServer::__cordl_internal_set_socket(::System::Net::Sockets::Socket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___socket = value;
}
constexpr ::System::Net::EndPoint*& kcp2k::KcpServer::__cordl_internal_get_newClientEP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newClientEP;
}
constexpr ::System::Net::EndPoint* const& kcp2k::KcpServer::__cordl_internal_get_newClientEP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newClientEP;
}
constexpr void kcp2k::KcpServer::__cordl_internal_set_newClientEP(::System::Net::EndPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newClientEP = value;
}
constexpr ::ArrayW<uint8_t>& kcp2k::KcpServer::__cordl_internal_get_rawReceiveBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawReceiveBuffer;
}
constexpr ::ArrayW<uint8_t> const& kcp2k::KcpServer::__cordl_internal_get_rawReceiveBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawReceiveBuffer;
}
constexpr void kcp2k::KcpServer::__cordl_internal_set_rawReceiveBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rawReceiveBuffer = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::kcp2k::KcpServerConnection>*& kcp2k::KcpServer::__cordl_internal_get_connections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connections;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::kcp2k::KcpServerConnection>* const& kcp2k::KcpServer::__cordl_internal_get_connections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connections;
}
constexpr void kcp2k::KcpServer::__cordl_internal_set_connections(::System::Collections::Generic::Dictionary_2<int32_t,::kcp2k::KcpServerConnection>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connections = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& kcp2k::KcpServer::__cordl_internal_get_connectionsToRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionsToRemove;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& kcp2k::KcpServer::__cordl_internal_get_connectionsToRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionsToRemove;
}
constexpr void kcp2k::KcpServer::__cordl_internal_set_connectionsToRemove(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectionsToRemove = value;
}
inline void kcp2k::KcpServer::_ctor(::System::Action_1<int32_t>*  OnConnected, ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  OnData, ::System::Action_1<int32_t>*  OnDisconnected, ::System::Action_3<int32_t,::kcp2k::ErrorCode,::StringW>*  OnError, ::kcp2k::KcpConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<int32_t>*>(), ::i2c::type_of<::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*>(), ::i2c::type_of<::System::Action_1<int32_t>*>(), ::i2c::type_of<::System::Action_3<int32_t,::kcp2k::ErrorCode,::StringW>*>(), ::i2c::type_of<::kcp2k::KcpConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, OnConnected, OnData, OnDisconnected, OnError, config);
}
inline bool kcp2k::KcpServer::IsActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpServer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::Sockets::Socket* kcp2k::KcpServer::CreateServerSocket(bool  DualMode, uint16_t  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer*>(),
                        {"CreateServerSocket", {}, {::i2c::type_of<bool>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*>(nullptr, ___internal_method, DualMode, port);
}
inline void kcp2k::KcpServer::Start(uint16_t  port)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpServer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, port);
}
inline void kcp2k::KcpServer::Send(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, ::kcp2k::KcpChannel  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer*>(),
                        {"Send", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::kcp2k::KcpChannel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, segment, channel);
}
inline void kcp2k::KcpServer::Disconnect(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer*>(),
                        {"Disconnect", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId);
}
inline ::System::Net::IPEndPoint* kcp2k::KcpServer::GetClientEndPoint(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer*>(),
                        {"GetClientEndPoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method, connectionId);
}
inline bool kcp2k::KcpServer::RawReceiveFrom(::by_ref<::System::ArraySegment_1<uint8_t>>  segment, ::by_ref<int32_t>  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpServer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, segment, connectionId);
}
inline void kcp2k::KcpServer::RawSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpServer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, data);
}
inline ::kcp2k::KcpServerConnection kcp2k::KcpServer::CreateConnection(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpServer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::kcp2k::KcpServerConnection>(this, ___internal_method, connectionId);
}
inline void kcp2k::KcpServer::ProcessMessage(::System::ArraySegment_1<uint8_t>  segment, int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServer*>(),
                        {"ProcessMessage", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment, connectionId);
}
inline void kcp2k::KcpServer::TickIncoming()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpServer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpServer::TickOutgoing()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpServer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpServer::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpServer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpServer::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpServer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::kcp2k::KcpServer* kcp2k::KcpServer::New_ctor(::System::Action_1<int32_t>*  OnConnected, ::System::Action_3<int32_t,::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  OnData, ::System::Action_1<int32_t>*  OnDisconnected, ::System::Action_3<int32_t,::kcp2k::ErrorCode,::StringW>*  OnError, ::kcp2k::KcpConfig*  config)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::kcp2k::KcpServer*>(OnConnected, OnData, OnDisconnected, OnError, config));
}
// Ctor Parameters []
constexpr ::kcp2k::KcpServer::KcpServer()   {
}
