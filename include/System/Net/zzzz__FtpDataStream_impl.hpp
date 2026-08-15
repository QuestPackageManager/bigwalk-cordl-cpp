#pragma once
// IWYU pragma private; include "System/Net/FtpDataStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Net/zzzz__FtpDataStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
#include "System/Net/zzzz__CloseExState_def.hpp"
#include "System/Net/zzzz__FtpWebRequest_def.hpp"
#include "System/Net/zzzz__ICloseEx_def.hpp"
#include "System/Net/zzzz__TriState_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::FtpDataStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpDataStream::*)(::System::Net::Sockets::NetworkStream*, ::System::Net::FtpWebRequest*, ::System::Net::TriState)>(&::System::Net::FtpDataStream::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e29d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FtpDataStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Sockets::NetworkStream*>(), ::i2c::type_of<::System::Net::FtpWebRequest*>(), ::i2c::type_of<::System::Net::TriState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpDataStream::*)(bool)>(&::System::Net::FtpDataStream::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e29610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.System_Net_ICloseEx_CloseEx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpDataStream::*)(::System::Net::CloseExState)>(&::System::Net::FtpDataStream::System_Net_ICloseEx_CloseEx)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x181e29a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FtpDataStream*>(),
                        {"System.Net.ICloseEx.CloseEx", {}, {::i2c::type_of<::System::Net::CloseExState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.CheckError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::CheckError)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e295e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FtpDataStream*>(),
                        {"CheckError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::get_CanRead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049a520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816ddcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803023c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::get_Length)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816ddd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816ddfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpDataStream::*)(int64_t)>(&::System::Net::FtpDataStream::set_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18165f330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::FtpDataStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::Net::FtpDataStream::Seek)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e29930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::FtpDataStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::FtpDataStream::Read)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e29880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpDataStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::FtpDataStream::Write)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e29cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.AsyncReadCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpDataStream::*)(::System::IAsyncResult*)>(&::System::Net::FtpDataStream::AsyncReadCallback)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181e29320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FtpDataStream*>(),
                        {"AsyncReadCallback", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.BeginRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::FtpDataStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::FtpDataStream::BeginRead)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181e29430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.EndRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::FtpDataStream::*)(::System::IAsyncResult*)>(&::System::Net::FtpDataStream::EndRead)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181e29660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.BeginWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::FtpDataStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::FtpDataStream::BeginWrite)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e29550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.EndWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpDataStream::*)(::System::IAsyncResult*)>(&::System::Net::FtpDataStream::EndWrite)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e297c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e29860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpDataStream::*)(int64_t)>(&::System::Net::FtpDataStream::SetLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e299a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.get_CanTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::get_CanTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e29dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.get_ReadTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::get_ReadTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e29df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.set_ReadTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpDataStream::*)(int32_t)>(&::System::Net::FtpDataStream::set_ReadTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18165f370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.get_WriteTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::get_WriteTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e29e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.set_WriteTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpDataStream::*)(int32_t)>(&::System::Net::FtpDataStream::set_WriteTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18165f430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FtpDataStream*>(),
                    {::i2c::class_of<::System::Net::FtpDataStream*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.SetSocketTimeoutOption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpDataStream::*)(int32_t)>(&::System::Net::FtpDataStream::SetSocketTimeoutOption)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e299c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FtpDataStream*>(),
                        {"SetSocketTimeoutOption", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::FtpWebRequest*& System::Net::FtpDataStream::__cordl_internal_get__request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request;
}
constexpr ::System::Net::FtpWebRequest* const& System::Net::FtpDataStream::__cordl_internal_get__request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request;
}
constexpr void System::Net::FtpDataStream::__cordl_internal_set__request(::System::Net::FtpWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request = value;
}
constexpr ::System::Net::Sockets::NetworkStream*& System::Net::FtpDataStream::__cordl_internal_get__networkStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkStream;
}
constexpr ::System::Net::Sockets::NetworkStream* const& System::Net::FtpDataStream::__cordl_internal_get__networkStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkStream;
}
constexpr void System::Net::FtpDataStream::__cordl_internal_set__networkStream(::System::Net::Sockets::NetworkStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____networkStream = value;
}
constexpr bool& System::Net::FtpDataStream::__cordl_internal_get__writeable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeable;
}
constexpr bool const& System::Net::FtpDataStream::__cordl_internal_get__writeable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeable;
}
constexpr void System::Net::FtpDataStream::__cordl_internal_set__writeable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____writeable = value;
}
constexpr bool& System::Net::FtpDataStream::__cordl_internal_get__readable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readable;
}
constexpr bool const& System::Net::FtpDataStream::__cordl_internal_get__readable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readable;
}
constexpr void System::Net::FtpDataStream::__cordl_internal_set__readable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readable = value;
}
constexpr bool& System::Net::FtpDataStream::__cordl_internal_get__isFullyRead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFullyRead;
}
constexpr bool const& System::Net::FtpDataStream::__cordl_internal_get__isFullyRead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFullyRead;
}
constexpr void System::Net::FtpDataStream::__cordl_internal_set__isFullyRead(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isFullyRead = value;
}
constexpr bool& System::Net::FtpDataStream::__cordl_internal_get__closing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closing;
}
constexpr bool const& System::Net::FtpDataStream::__cordl_internal_get__closing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closing;
}
constexpr void System::Net::FtpDataStream::__cordl_internal_set__closing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____closing = value;
}
inline void System::Net::FtpDataStream::_ctor(::System::Net::Sockets::NetworkStream*  networkStream, ::System::Net::FtpWebRequest*  request, ::System::Net::TriState  writeOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FtpDataStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Sockets::NetworkStream*>(), ::i2c::type_of<::System::Net::FtpWebRequest*>(), ::i2c::type_of<::System::Net::TriState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkStream, request, writeOnly);
}
inline void System::Net::FtpDataStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Net::FtpDataStream::System_Net_ICloseEx_CloseEx(::System::Net::CloseExState  closeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FtpDataStream*>(),
                        {"System.Net.ICloseEx.CloseEx", {}, {::i2c::type_of<::System::Net::CloseExState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, closeState);
}
inline void System::Net::FtpDataStream::CheckError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FtpDataStream*>(),
                        {"CheckError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::FtpDataStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::FtpDataStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::FtpDataStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t System::Net::FtpDataStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::Net::FtpDataStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Net::FtpDataStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::Net::FtpDataStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline int32_t System::Net::FtpDataStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size);
}
inline void System::Net::FtpDataStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, size);
}
inline void System::Net::FtpDataStream::AsyncReadCallback(::System::IAsyncResult*  ar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FtpDataStream*>(),
                        {"AsyncReadCallback", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ar);
}
inline ::System::IAsyncResult* System::Net::FtpDataStream::BeginRead(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, size, callback, state);
}
inline int32_t System::Net::FtpDataStream::EndRead(::System::IAsyncResult*  ar)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ar);
}
inline ::System::IAsyncResult* System::Net::FtpDataStream::BeginWrite(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, size, callback, state);
}
inline void System::Net::FtpDataStream::EndWrite(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncResult);
}
inline void System::Net::FtpDataStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::FtpDataStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::FtpDataStream::get_CanTimeout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Net::FtpDataStream::get_ReadTimeout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::FtpDataStream::set_ReadTimeout(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::FtpDataStream::get_WriteTimeout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::FtpDataStream::set_WriteTimeout(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FtpDataStream*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::FtpDataStream::SetSocketTimeoutOption(int32_t  timeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FtpDataStream*>(),
                        {"SetSocketTimeoutOption", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeout);
}
inline ::System::Net::FtpDataStream* System::Net::FtpDataStream::New_ctor(::System::Net::Sockets::NetworkStream*  networkStream, ::System::Net::FtpWebRequest*  request, ::System::Net::TriState  writeOnly)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::FtpDataStream*>(networkStream, request, writeOnly));
}
/// @brief Convert operator to "::System::Net::ICloseEx"
constexpr  System::Net::FtpDataStream::operator ::System::Net::ICloseEx*() noexcept {
return static_cast<::System::Net::ICloseEx*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::ICloseEx"
constexpr ::System::Net::ICloseEx* System::Net::FtpDataStream::i___System__Net__ICloseEx() noexcept {
return static_cast<::System::Net::ICloseEx*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::FtpDataStream::FtpDataStream()   {
}
