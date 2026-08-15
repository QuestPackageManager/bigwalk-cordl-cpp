#pragma once
// IWYU pragma private; include "System/IO/File.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__File_def.hpp"
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/IO/zzzz__FileMode_def.hpp"
#include "System/IO/zzzz__FileShare_def.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::System::IO::File.OpenText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::StreamReader* (*)(::StringW)>(&::System::IO::File::OpenText)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1816d5d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"OpenText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (*)(::StringW)>(&::System::IO::File::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816d56b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (*)(::StringW, int32_t)>(&::System::IO::File::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816d5650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Delete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::IO::File::Delete)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1816d5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Delete", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::File::Exists)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1816d5790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Exists", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Open
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (*)(::StringW, ::System::IO::FileMode)>(&::System::IO::File::Open)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816d5e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Open", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Open
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (*)(::StringW, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare)>(&::System::IO::File::Open)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816d5eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Open", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<::System::IO::FileShare>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.OpenRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (*)(::StringW)>(&::System::IO::File::OpenRead)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816d5ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"OpenRead", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.ReadAllText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::File::ReadAllText)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816d6440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"ReadAllText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.InternalReadAllText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Text::Encoding*)>(&::System::IO::File::InternalReadAllText)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1816d5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"InternalReadAllText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.WriteAllText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::File::WriteAllText)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1816d6510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"WriteAllText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.ReadAllBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::System::IO::File::ReadAllBytes)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1816d6260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"ReadAllBytes", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.ReadAllBytesUnknownLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::FileStream*)>(&::System::IO::File::ReadAllBytesUnknownLength)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1816d5f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"ReadAllBytesUnknownLength", {}, {::i2c::type_of<::System::IO::FileStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.WriteAllBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>)>(&::System::IO::File::WriteAllBytes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816d64a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"WriteAllBytes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.InternalWriteAllBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>)>(&::System::IO::File::InternalWriteAllBytes)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1816d5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"InternalWriteAllBytes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::File::Move)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1816d5b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Move", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IO::StreamReader* System::IO::File::OpenText(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"OpenText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::StreamReader*>(nullptr, ___internal_method, path);
}
inline ::System::IO::FileStream* System::IO::File::Create(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(nullptr, ___internal_method, path);
}
inline ::System::IO::FileStream* System::IO::File::Create(::StringW  path, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(nullptr, ___internal_method, path, bufferSize);
}
inline void System::IO::File::Delete(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Delete", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path);
}
inline bool System::IO::File::Exists(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Exists", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline ::System::IO::FileStream* System::IO::File::Open(::StringW  path, ::System::IO::FileMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Open", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(nullptr, ___internal_method, path, mode);
}
inline ::System::IO::FileStream* System::IO::File::Open(::StringW  path, ::System::IO::FileMode  mode, ::System::IO::FileAccess  access, ::System::IO::FileShare  share)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Open", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<::System::IO::FileShare>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(nullptr, ___internal_method, path, mode, access, share);
}
inline ::System::IO::FileStream* System::IO::File::OpenRead(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"OpenRead", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::File::ReadAllText(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"ReadAllText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::File::InternalReadAllText(::StringW  path, ::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"InternalReadAllText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path, encoding);
}
inline void System::IO::File::WriteAllText(::StringW  path, ::StringW  contents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"WriteAllText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, contents);
}
inline ::ArrayW<uint8_t> System::IO::File::ReadAllBytes(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"ReadAllBytes", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, path);
}
inline ::ArrayW<uint8_t> System::IO::File::ReadAllBytesUnknownLength(::System::IO::FileStream*  fs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"ReadAllBytesUnknownLength", {}, {::i2c::type_of<::System::IO::FileStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, fs);
}
inline void System::IO::File::WriteAllBytes(::StringW  path, ::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"WriteAllBytes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, bytes);
}
inline void System::IO::File::InternalWriteAllBytes(::StringW  path, ::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"InternalWriteAllBytes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, bytes);
}
inline void System::IO::File::Move(::StringW  sourceFileName, ::StringW  destFileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Move", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFileName, destFileName);
}
// Ctor Parameters []
constexpr ::System::IO::File::File()   {
}
