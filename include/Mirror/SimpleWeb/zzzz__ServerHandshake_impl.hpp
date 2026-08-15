#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/ServerHandshake.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__ServerHandshake_def.hpp"
#include "Mirror/SimpleWeb/zzzz__BufferPool_def.hpp"
#include "Mirror/SimpleWeb/zzzz__Connection_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__SHA1_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::ServerHandshake._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ServerHandshake::*)(::Mirror::SimpleWeb::BufferPool*, int32_t)>(&::Mirror::SimpleWeb::ServerHandshake::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181ad4700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::SimpleWeb::BufferPool*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ServerHandshake.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ServerHandshake::*)()>(&::Mirror::SimpleWeb::ServerHandshake::Finalize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ad42a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ServerHandshake.TryHandshake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::SimpleWeb::ServerHandshake::*)(::Mirror::SimpleWeb::Connection*)>(&::Mirror::SimpleWeb::ServerHandshake::TryHandshake)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181ad4540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                        {"TryHandshake", {}, {::i2c::type_of<::Mirror::SimpleWeb::Connection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ServerHandshake.ReadToEndForHandshake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::SimpleWeb::ServerHandshake::*)(::System::IO::Stream*)>(&::Mirror::SimpleWeb::ServerHandshake::ReadToEndForHandshake)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181ad4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                        {"ReadToEndForHandshake", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ServerHandshake.IsGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&::Mirror::SimpleWeb::ServerHandshake::IsGet)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ad4360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                        {"IsGet", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ServerHandshake.AcceptHandshake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ServerHandshake::*)(::System::IO::Stream*, ::StringW)>(&::Mirror::SimpleWeb::ServerHandshake::AcceptHandshake)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x181ad3e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                        {"AcceptHandshake", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ServerHandshake.GetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>)>(&::Mirror::SimpleWeb::ServerHandshake::GetKey)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ad42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                        {"GetKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ServerHandshake.AppendGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>)>(&::Mirror::SimpleWeb::ServerHandshake::AppendGuid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181ad4190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                        {"AppendGuid", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ServerHandshake.CreateHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mirror::SimpleWeb::ServerHandshake::*)(::ArrayW<uint8_t>)>(&::Mirror::SimpleWeb::ServerHandshake::CreateHash)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ad41f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                        {"CreateHash", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ServerHandshake.CreateResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Mirror::SimpleWeb::ServerHandshake::CreateResponse)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ad4220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                        {"CreateResponse", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::SimpleWeb::ServerHandshake::__cordl_internal_get_maxHttpHeaderSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHttpHeaderSize;
}
constexpr int32_t const& Mirror::SimpleWeb::ServerHandshake::__cordl_internal_get_maxHttpHeaderSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHttpHeaderSize;
}
constexpr void Mirror::SimpleWeb::ServerHandshake::__cordl_internal_set_maxHttpHeaderSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHttpHeaderSize = value;
}
constexpr ::System::Security::Cryptography::SHA1*& Mirror::SimpleWeb::ServerHandshake::__cordl_internal_get_sha1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sha1;
}
constexpr ::System::Security::Cryptography::SHA1* const& Mirror::SimpleWeb::ServerHandshake::__cordl_internal_get_sha1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sha1;
}
constexpr void Mirror::SimpleWeb::ServerHandshake::__cordl_internal_set_sha1(::System::Security::Cryptography::SHA1*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sha1 = value;
}
constexpr ::Mirror::SimpleWeb::BufferPool*& Mirror::SimpleWeb::ServerHandshake::__cordl_internal_get_bufferPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferPool;
}
constexpr ::Mirror::SimpleWeb::BufferPool* const& Mirror::SimpleWeb::ServerHandshake::__cordl_internal_get_bufferPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferPool;
}
constexpr void Mirror::SimpleWeb::ServerHandshake::__cordl_internal_set_bufferPool(::Mirror::SimpleWeb::BufferPool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferPool = value;
}
inline void Mirror::SimpleWeb::ServerHandshake::_ctor(::Mirror::SimpleWeb::BufferPool*  bufferPool, int32_t  handshakeMaxSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::SimpleWeb::BufferPool*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferPool, handshakeMaxSize);
}
inline void Mirror::SimpleWeb::ServerHandshake::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::SimpleWeb::ServerHandshake::TryHandshake(::Mirror::SimpleWeb::Connection*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                        {"TryHandshake", {}, {::i2c::type_of<::Mirror::SimpleWeb::Connection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, conn);
}
inline ::StringW Mirror::SimpleWeb::ServerHandshake::ReadToEndForHandshake(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                        {"ReadToEndForHandshake", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, stream);
}
inline bool Mirror::SimpleWeb::ServerHandshake::IsGet(::ArrayW<uint8_t>  getHeader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                        {"IsGet", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, getHeader);
}
inline void Mirror::SimpleWeb::ServerHandshake::AcceptHandshake(::System::IO::Stream*  stream, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                        {"AcceptHandshake", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, msg);
}
inline void Mirror::SimpleWeb::ServerHandshake::GetKey(::StringW  msg, ::ArrayW<uint8_t>  keyBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                        {"GetKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, keyBuffer);
}
inline void Mirror::SimpleWeb::ServerHandshake::AppendGuid(::ArrayW<uint8_t>  keyBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                        {"AppendGuid", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyBuffer);
}
inline ::ArrayW<uint8_t> Mirror::SimpleWeb::ServerHandshake::CreateHash(::ArrayW<uint8_t>  keyBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                        {"CreateHash", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, keyBuffer);
}
inline void Mirror::SimpleWeb::ServerHandshake::CreateResponse(::ArrayW<uint8_t>  keyHash, ::ArrayW<uint8_t>  responseBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ServerHandshake*>(),
                        {"CreateResponse", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyHash, responseBuffer);
}
inline ::Mirror::SimpleWeb::ServerHandshake* Mirror::SimpleWeb::ServerHandshake::New_ctor(::Mirror::SimpleWeb::BufferPool*  bufferPool, int32_t  handshakeMaxSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::ServerHandshake*>(bufferPool, handshakeMaxSize));
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::ServerHandshake::ServerHandshake()   {
}
