#pragma once
// IWYU pragma private; include "System/Security/Cryptography/TailStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Security/Cryptography/zzzz__TailStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::TailStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::TailStream::*)(int32_t)>(&::System::Security::Cryptography::TailStream::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181610cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::TailStream*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TailStream.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::TailStream::*)()>(&::System::Security::Cryptography::TailStream::Clear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815f45f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::TailStream*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TailStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::TailStream::*)(bool)>(&::System::Security::Cryptography::TailStream::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181610ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::TailStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TailStream.get_Buffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::TailStream::*)()>(&::System::Security::Cryptography::TailStream::get_Buffer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181608a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::TailStream*>(),
                        {"get_Buffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TailStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::TailStream::*)()>(&::System::Security::Cryptography::TailStream::get_CanRead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::TailStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TailStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::TailStream::*)()>(&::System::Security::Cryptography::TailStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::TailStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TailStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::TailStream::*)()>(&::System::Security::Cryptography::TailStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181610d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::TailStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TailStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Security::Cryptography::TailStream::*)()>(&::System::Security::Cryptography::TailStream::get_Length)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181610b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::TailStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TailStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Security::Cryptography::TailStream::*)()>(&::System::Security::Cryptography::TailStream::get_Position)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181610b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::TailStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TailStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::TailStream::*)(int64_t)>(&::System::Security::Cryptography::TailStream::set_Position)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181610b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::TailStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TailStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::TailStream::*)()>(&::System::Security::Cryptography::TailStream::Flush)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::TailStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TailStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Security::Cryptography::TailStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::Security::Cryptography::TailStream::Seek)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181610b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::TailStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TailStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::TailStream::*)(int64_t)>(&::System::Security::Cryptography::TailStream::SetLength)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181610b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::TailStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TailStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::TailStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Security::Cryptography::TailStream::Read)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181610b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::TailStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TailStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::TailStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Security::Cryptography::TailStream::Write)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181610b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::TailStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 36}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::TailStream::__cordl_internal_get__Buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::TailStream::__cordl_internal_get__Buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Buffer;
}
constexpr void System::Security::Cryptography::TailStream::__cordl_internal_set__Buffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Buffer = value;
}
constexpr int32_t& System::Security::Cryptography::TailStream::__cordl_internal_get__BufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BufferSize;
}
constexpr int32_t const& System::Security::Cryptography::TailStream::__cordl_internal_get__BufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BufferSize;
}
constexpr void System::Security::Cryptography::TailStream::__cordl_internal_set__BufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BufferSize = value;
}
constexpr int32_t& System::Security::Cryptography::TailStream::__cordl_internal_get__BufferIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BufferIndex;
}
constexpr int32_t const& System::Security::Cryptography::TailStream::__cordl_internal_get__BufferIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BufferIndex;
}
constexpr void System::Security::Cryptography::TailStream::__cordl_internal_set__BufferIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BufferIndex = value;
}
constexpr bool& System::Security::Cryptography::TailStream::__cordl_internal_get__BufferFull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BufferFull;
}
constexpr bool const& System::Security::Cryptography::TailStream::__cordl_internal_get__BufferFull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BufferFull;
}
constexpr void System::Security::Cryptography::TailStream::__cordl_internal_set__BufferFull(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BufferFull = value;
}
inline void System::Security::Cryptography::TailStream::_ctor(int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::TailStream*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferSize);
}
inline void System::Security::Cryptography::TailStream::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::TailStream*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::TailStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::TailStream::get_Buffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::TailStream*>(),
                        {"get_Buffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool System::Security::Cryptography::TailStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Security::Cryptography::TailStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Security::Cryptography::TailStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t System::Security::Cryptography::TailStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::Security::Cryptography::TailStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Security::Cryptography::TailStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Security::Cryptography::TailStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t System::Security::Cryptography::TailStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void System::Security::Cryptography::TailStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Security::Cryptography::TailStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void System::Security::Cryptography::TailStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::TailStream*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Security::Cryptography::TailStream* System::Security::Cryptography::TailStream::New_ctor(int32_t  bufferSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::TailStream*>(bufferSize));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::TailStream::TailStream()   {
}
