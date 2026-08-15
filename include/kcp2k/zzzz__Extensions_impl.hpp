#pragma once
// IWYU pragma private; include "kcp2k/Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "kcp2k/zzzz__Extensions_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::kcp2k::Extensions.SendToNonBlocking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Sockets::Socket*, ::System::ArraySegment_1<uint8_t>, ::System::Net::EndPoint*)>(&::kcp2k::Extensions::SendToNonBlocking)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18144d560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Extensions*>(),
                        {"SendToNonBlocking", {}, {::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::System::Net::EndPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Extensions.SendNonBlocking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Sockets::Socket*, ::System::ArraySegment_1<uint8_t>)>(&::kcp2k::Extensions::SendNonBlocking)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18144d4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Extensions*>(),
                        {"SendNonBlocking", {}, {::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Extensions.ReceiveFromNonBlocking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Sockets::Socket*, ::ArrayW<uint8_t>, ::by_ref<::System::ArraySegment_1<uint8_t>>, ::by_ref<::System::Net::EndPoint*>)>(&::kcp2k::Extensions::ReceiveFromNonBlocking)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18144d2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Extensions*>(),
                        {"ReceiveFromNonBlocking", {}, {::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::System::ArraySegment_1<uint8_t>>>(), ::i2c::type_of<::by_ref<::System::Net::EndPoint*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Extensions.ReceiveNonBlocking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Sockets::Socket*, ::ArrayW<uint8_t>, ::by_ref<::System::ArraySegment_1<uint8_t>>)>(&::kcp2k::Extensions::ReceiveNonBlocking)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18144d3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Extensions*>(),
                        {"ReceiveNonBlocking", {}, {::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::System::ArraySegment_1<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool kcp2k::Extensions::SendToNonBlocking(::System::Net::Sockets::Socket*  socket, ::System::ArraySegment_1<uint8_t>  data, ::System::Net::EndPoint*  remoteEP)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Extensions*>(),
                        {"SendToNonBlocking", {}, {::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::System::Net::EndPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, socket, data, remoteEP);
}
inline bool kcp2k::Extensions::SendNonBlocking(::System::Net::Sockets::Socket*  socket, ::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Extensions*>(),
                        {"SendNonBlocking", {}, {::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, socket, data);
}
inline bool kcp2k::Extensions::ReceiveFromNonBlocking(::System::Net::Sockets::Socket*  socket, ::ArrayW<uint8_t>  recvBuffer, ::by_ref<::System::ArraySegment_1<uint8_t>>  data, ::by_ref<::System::Net::EndPoint*>  remoteEP)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Extensions*>(),
                        {"ReceiveFromNonBlocking", {}, {::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::System::ArraySegment_1<uint8_t>>>(), ::i2c::type_of<::by_ref<::System::Net::EndPoint*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, socket, recvBuffer, data, remoteEP);
}
inline bool kcp2k::Extensions::ReceiveNonBlocking(::System::Net::Sockets::Socket*  socket, ::ArrayW<uint8_t>  recvBuffer, ::by_ref<::System::ArraySegment_1<uint8_t>>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Extensions*>(),
                        {"ReceiveNonBlocking", {}, {::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::System::ArraySegment_1<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, socket, recvBuffer, data);
}
// Ctor Parameters []
constexpr ::kcp2k::Extensions::Extensions()   {
}
