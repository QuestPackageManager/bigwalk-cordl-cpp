#pragma once
// IWYU pragma private; include "kcp2k/Common.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "kcp2k/zzzz__Common_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Security/Cryptography/zzzz__RNGCryptoServiceProvider_def.hpp"
//  Writing Method size for method: ::kcp2k::Common.ResolveHostname
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::ArrayW<::System::Net::IPAddress*>>)>(&::kcp2k::Common::ResolveHostname)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18144d160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Common*>(),
                        {"ResolveHostname", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Net::IPAddress*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Common.ConfigureSocketBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Sockets::Socket*, int32_t, int32_t)>(&::kcp2k::Common::ConfigureSocketBuffers)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x18144cdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Common*>(),
                        {"ConfigureSocketBuffers", {}, {::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Common.ConnectionHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Net::EndPoint*)>(&::kcp2k::Common::ConnectionHash)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18144d0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Common*>(),
                        {"ConnectionHash", {}, {::i2c::type_of<::System::Net::EndPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Common.GenerateCookie
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::kcp2k::Common::GenerateCookie)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18144d0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Common*>(),
                        {"GenerateCookie", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void kcp2k::Common::setStaticF_cryptoRandom(::System::Security::Cryptography::RNGCryptoServiceProvider*  value)  {
::cordl_internals::setStaticField<::System::Security::Cryptography::RNGCryptoServiceProvider*, "cryptoRandom", ::kcp2k::Common*>(std::forward<::System::Security::Cryptography::RNGCryptoServiceProvider*>(value));
}
inline ::System::Security::Cryptography::RNGCryptoServiceProvider* kcp2k::Common::getStaticF_cryptoRandom()  {
return ::cordl_internals::getStaticField<::System::Security::Cryptography::RNGCryptoServiceProvider*, "cryptoRandom", ::kcp2k::Common*>();
}
inline void kcp2k::Common::setStaticF_cryptoRandomBuffer(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "cryptoRandomBuffer", ::kcp2k::Common*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> kcp2k::Common::getStaticF_cryptoRandomBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "cryptoRandomBuffer", ::kcp2k::Common*>();
}
inline bool kcp2k::Common::ResolveHostname(::StringW  hostname, ::by_ref<::ArrayW<::System::Net::IPAddress*>>  addresses)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Common*>(),
                        {"ResolveHostname", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Net::IPAddress*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hostname, addresses);
}
inline void kcp2k::Common::ConfigureSocketBuffers(::System::Net::Sockets::Socket*  socket, int32_t  recvBufferSize, int32_t  sendBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Common*>(),
                        {"ConfigureSocketBuffers", {}, {::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, socket, recvBufferSize, sendBufferSize);
}
inline int32_t kcp2k::Common::ConnectionHash(::System::Net::EndPoint*  endPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Common*>(),
                        {"ConnectionHash", {}, {::i2c::type_of<::System::Net::EndPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, endPoint);
}
inline uint32_t kcp2k::Common::GenerateCookie()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Common*>(),
                        {"GenerateCookie", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::kcp2k::Common::Common()   {
}
