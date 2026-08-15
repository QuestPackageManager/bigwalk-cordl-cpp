#pragma once
// IWYU pragma private; include "Telepathy/NetworkStreamExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Telepathy/zzzz__NetworkStreamExtensions_def.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
//  Writing Method size for method: ::Telepathy::NetworkStreamExtensions.ReadSafely
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Net::Sockets::NetworkStream*, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Telepathy::NetworkStreamExtensions::ReadSafely)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e597b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::NetworkStreamExtensions*>(),
                        {"ReadSafely", {}, {::i2c::type_of<::System::Net::Sockets::NetworkStream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::NetworkStreamExtensions.ReadExactly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Sockets::NetworkStream*, ::ArrayW<uint8_t>, int32_t)>(&::Telepathy::NetworkStreamExtensions::ReadExactly)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e59730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::NetworkStreamExtensions*>(),
                        {"ReadExactly", {}, {::i2c::type_of<::System::Net::Sockets::NetworkStream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Telepathy::NetworkStreamExtensions::ReadSafely(::System::Net::Sockets::NetworkStream*  stream, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::NetworkStreamExtensions*>(),
                        {"ReadSafely", {}, {::i2c::type_of<::System::Net::Sockets::NetworkStream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, stream, buffer, offset, size);
}
inline bool Telepathy::NetworkStreamExtensions::ReadExactly(::System::Net::Sockets::NetworkStream*  stream, ::ArrayW<uint8_t>  buffer, int32_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::NetworkStreamExtensions*>(),
                        {"ReadExactly", {}, {::i2c::type_of<::System::Net::Sockets::NetworkStream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stream, buffer, amount);
}
// Ctor Parameters []
constexpr ::Telepathy::NetworkStreamExtensions::NetworkStreamExtensions()   {
}
