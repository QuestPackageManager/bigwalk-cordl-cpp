#pragma once
// IWYU pragma private; include "Mirror/NetworkStatistics.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/zzzz__NetworkStatistics_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkStatistics.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkStatistics::*)()>(&::Mirror::NetworkStatistics::Start)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x1815265d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkStatistics.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkStatistics::*)()>(&::Mirror::NetworkStatistics::OnDestroy)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181525fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkStatistics.OnClientReceive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkStatistics::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::NetworkStatistics::OnClientReceive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181525fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"OnClientReceive", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkStatistics.OnClientSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkStatistics::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::NetworkStatistics::OnClientSend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181525fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"OnClientSend", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkStatistics.OnServerReceive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkStatistics::*)(int32_t, ::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::NetworkStatistics::OnServerReceive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815265b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"OnServerReceive", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkStatistics.OnServerSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkStatistics::*)(int32_t, ::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::NetworkStatistics::OnServerSend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815265c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"OnServerSend", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkStatistics.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkStatistics::*)()>(&::Mirror::NetworkStatistics::Update)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181526970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkStatistics.UpdateClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkStatistics::*)()>(&::Mirror::NetworkStatistics::UpdateClient)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181526900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"UpdateClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkStatistics.UpdateServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkStatistics::*)()>(&::Mirror::NetworkStatistics::UpdateServer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181526930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"UpdateServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkStatistics.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkStatistics::*)()>(&::Mirror::NetworkStatistics::OnGUI)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1815262b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkStatistics.OnClientGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkStatistics::*)()>(&::Mirror::NetworkStatistics::OnClientGUI)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181525d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"OnClientGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkStatistics.OnServerGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkStatistics::*)()>(&::Mirror::NetworkStatistics::OnServerGUI)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181526370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"OnServerGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkStatistics._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkStatistics::*)()>(&::Mirror::NetworkStatistics::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& Mirror::NetworkStatistics::__cordl_internal_get_intervalStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intervalStartTime;
}
constexpr double_t const& Mirror::NetworkStatistics::__cordl_internal_get_intervalStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intervalStartTime;
}
constexpr void Mirror::NetworkStatistics::__cordl_internal_set_intervalStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intervalStartTime = value;
}
constexpr int32_t& Mirror::NetworkStatistics::__cordl_internal_get_clientIntervalReceivedPackets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientIntervalReceivedPackets;
}
constexpr int32_t const& Mirror::NetworkStatistics::__cordl_internal_get_clientIntervalReceivedPackets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientIntervalReceivedPackets;
}
constexpr void Mirror::NetworkStatistics::__cordl_internal_set_clientIntervalReceivedPackets(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientIntervalReceivedPackets = value;
}
constexpr int64_t& Mirror::NetworkStatistics::__cordl_internal_get_clientIntervalReceivedBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientIntervalReceivedBytes;
}
constexpr int64_t const& Mirror::NetworkStatistics::__cordl_internal_get_clientIntervalReceivedBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientIntervalReceivedBytes;
}
constexpr void Mirror::NetworkStatistics::__cordl_internal_set_clientIntervalReceivedBytes(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientIntervalReceivedBytes = value;
}
constexpr int32_t& Mirror::NetworkStatistics::__cordl_internal_get_clientIntervalSentPackets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientIntervalSentPackets;
}
constexpr int32_t const& Mirror::NetworkStatistics::__cordl_internal_get_clientIntervalSentPackets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientIntervalSentPackets;
}
constexpr void Mirror::NetworkStatistics::__cordl_internal_set_clientIntervalSentPackets(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientIntervalSentPackets = value;
}
constexpr int64_t& Mirror::NetworkStatistics::__cordl_internal_get_clientIntervalSentBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientIntervalSentBytes;
}
constexpr int64_t const& Mirror::NetworkStatistics::__cordl_internal_get_clientIntervalSentBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientIntervalSentBytes;
}
constexpr void Mirror::NetworkStatistics::__cordl_internal_set_clientIntervalSentBytes(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientIntervalSentBytes = value;
}
constexpr int32_t& Mirror::NetworkStatistics::__cordl_internal_get_clientReceivedPacketsPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientReceivedPacketsPerSecond;
}
constexpr int32_t const& Mirror::NetworkStatistics::__cordl_internal_get_clientReceivedPacketsPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientReceivedPacketsPerSecond;
}
constexpr void Mirror::NetworkStatistics::__cordl_internal_set_clientReceivedPacketsPerSecond(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientReceivedPacketsPerSecond = value;
}
constexpr int64_t& Mirror::NetworkStatistics::__cordl_internal_get_clientReceivedBytesPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientReceivedBytesPerSecond;
}
constexpr int64_t const& Mirror::NetworkStatistics::__cordl_internal_get_clientReceivedBytesPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientReceivedBytesPerSecond;
}
constexpr void Mirror::NetworkStatistics::__cordl_internal_set_clientReceivedBytesPerSecond(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientReceivedBytesPerSecond = value;
}
constexpr int32_t& Mirror::NetworkStatistics::__cordl_internal_get_clientSentPacketsPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientSentPacketsPerSecond;
}
constexpr int32_t const& Mirror::NetworkStatistics::__cordl_internal_get_clientSentPacketsPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientSentPacketsPerSecond;
}
constexpr void Mirror::NetworkStatistics::__cordl_internal_set_clientSentPacketsPerSecond(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientSentPacketsPerSecond = value;
}
constexpr int64_t& Mirror::NetworkStatistics::__cordl_internal_get_clientSentBytesPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientSentBytesPerSecond;
}
constexpr int64_t const& Mirror::NetworkStatistics::__cordl_internal_get_clientSentBytesPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientSentBytesPerSecond;
}
constexpr void Mirror::NetworkStatistics::__cordl_internal_set_clientSentBytesPerSecond(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientSentBytesPerSecond = value;
}
constexpr int32_t& Mirror::NetworkStatistics::__cordl_internal_get_serverIntervalReceivedPackets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverIntervalReceivedPackets;
}
constexpr int32_t const& Mirror::NetworkStatistics::__cordl_internal_get_serverIntervalReceivedPackets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverIntervalReceivedPackets;
}
constexpr void Mirror::NetworkStatistics::__cordl_internal_set_serverIntervalReceivedPackets(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverIntervalReceivedPackets = value;
}
constexpr int64_t& Mirror::NetworkStatistics::__cordl_internal_get_serverIntervalReceivedBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverIntervalReceivedBytes;
}
constexpr int64_t const& Mirror::NetworkStatistics::__cordl_internal_get_serverIntervalReceivedBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverIntervalReceivedBytes;
}
constexpr void Mirror::NetworkStatistics::__cordl_internal_set_serverIntervalReceivedBytes(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverIntervalReceivedBytes = value;
}
constexpr int32_t& Mirror::NetworkStatistics::__cordl_internal_get_serverIntervalSentPackets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverIntervalSentPackets;
}
constexpr int32_t const& Mirror::NetworkStatistics::__cordl_internal_get_serverIntervalSentPackets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverIntervalSentPackets;
}
constexpr void Mirror::NetworkStatistics::__cordl_internal_set_serverIntervalSentPackets(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverIntervalSentPackets = value;
}
constexpr int64_t& Mirror::NetworkStatistics::__cordl_internal_get_serverIntervalSentBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverIntervalSentBytes;
}
constexpr int64_t const& Mirror::NetworkStatistics::__cordl_internal_get_serverIntervalSentBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverIntervalSentBytes;
}
constexpr void Mirror::NetworkStatistics::__cordl_internal_set_serverIntervalSentBytes(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverIntervalSentBytes = value;
}
constexpr int32_t& Mirror::NetworkStatistics::__cordl_internal_get_serverReceivedPacketsPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverReceivedPacketsPerSecond;
}
constexpr int32_t const& Mirror::NetworkStatistics::__cordl_internal_get_serverReceivedPacketsPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverReceivedPacketsPerSecond;
}
constexpr void Mirror::NetworkStatistics::__cordl_internal_set_serverReceivedPacketsPerSecond(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverReceivedPacketsPerSecond = value;
}
constexpr int64_t& Mirror::NetworkStatistics::__cordl_internal_get_serverReceivedBytesPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverReceivedBytesPerSecond;
}
constexpr int64_t const& Mirror::NetworkStatistics::__cordl_internal_get_serverReceivedBytesPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverReceivedBytesPerSecond;
}
constexpr void Mirror::NetworkStatistics::__cordl_internal_set_serverReceivedBytesPerSecond(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverReceivedBytesPerSecond = value;
}
constexpr int32_t& Mirror::NetworkStatistics::__cordl_internal_get_serverSentPacketsPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverSentPacketsPerSecond;
}
constexpr int32_t const& Mirror::NetworkStatistics::__cordl_internal_get_serverSentPacketsPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverSentPacketsPerSecond;
}
constexpr void Mirror::NetworkStatistics::__cordl_internal_set_serverSentPacketsPerSecond(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverSentPacketsPerSecond = value;
}
constexpr int64_t& Mirror::NetworkStatistics::__cordl_internal_get_serverSentBytesPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverSentBytesPerSecond;
}
constexpr int64_t const& Mirror::NetworkStatistics::__cordl_internal_get_serverSentBytesPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverSentBytesPerSecond;
}
constexpr void Mirror::NetworkStatistics::__cordl_internal_set_serverSentBytesPerSecond(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverSentBytesPerSecond = value;
}
inline void Mirror::NetworkStatistics::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkStatistics::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkStatistics::OnClientReceive(::System::ArraySegment_1<uint8_t>  data, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"OnClientReceive", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channelId);
}
inline void Mirror::NetworkStatistics::OnClientSend(::System::ArraySegment_1<uint8_t>  data, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"OnClientSend", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channelId);
}
inline void Mirror::NetworkStatistics::OnServerReceive(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  data, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"OnServerReceive", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, data, channelId);
}
inline void Mirror::NetworkStatistics::OnServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  data, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"OnServerSend", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, data, channelId);
}
inline void Mirror::NetworkStatistics::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkStatistics::UpdateClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"UpdateClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkStatistics::UpdateServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"UpdateServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkStatistics::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkStatistics::OnClientGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"OnClientGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkStatistics::OnServerGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {"OnServerGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkStatistics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkStatistics*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::NetworkStatistics* Mirror::NetworkStatistics::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkStatistics*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkStatistics::NetworkStatistics()   {
}
