#pragma once
// IWYU pragma private; include "System/IO/FileInfo.hpp"
#include "System/IO/zzzz__FileSystemInfo_impl.hpp"
#include "System/IO/zzzz__FileInfo_def.hpp"
#include "System/IO/zzzz__DirectoryInfo_def.hpp"
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/IO/zzzz__FileMode_def.hpp"
#include "System/IO/zzzz__FileShare_def.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::IO::FileInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileInfo::*)()>(&::System::IO::FileInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816e73b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileInfo::*)(::StringW)>(&::System::IO::FileInfo::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1816e7100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileInfo::*)(::StringW, ::StringW, ::StringW, bool)>(&::System::IO::FileInfo::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1816e72b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::FileInfo::*)()>(&::System::IO::FileInfo::get_Length)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1816e7460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo.get_DirectoryName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileInfo::*)()>(&::System::IO::FileInfo::get_DirectoryName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816e73c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {"get_DirectoryName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo.get_Directory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::DirectoryInfo* (::System::IO::FileInfo::*)()>(&::System::IO::FileInfo::get_Directory)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816e73f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {"get_Directory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo.CreateText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::StreamWriter* (::System::IO::FileInfo::*)()>(&::System::IO::FileInfo::CreateText)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816e6f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {"CreateText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo.AppendText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::StreamWriter* (::System::IO::FileInfo::*)()>(&::System::IO::FileInfo::AppendText)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816e6f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {"AppendText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo.Open
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (::System::IO::FileInfo::*)(::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare)>(&::System::IO::FileInfo::Open)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1816e7050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {"Open", {}, {::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<::System::IO::FileShare>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo.OpenRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (::System::IO::FileInfo::*)()>(&::System::IO::FileInfo::OpenRead)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1816e6fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {"OpenRead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileInfo::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::IO::FileInfo::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1816e71c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileInfo.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileInfo::*)()>(&::System::IO::FileInfo::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::FileInfo*>(),
                    {::i2c::class_of<::System::IO::FileInfo*>(), 9}
                ));
    return ___internal_method;
  }
};
inline void System::IO::FileInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::FileInfo::_ctor(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName);
}
inline void System::IO::FileInfo::_ctor(::StringW  originalPath, ::StringW  fullPath, ::StringW  fileName, bool  isNormalized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, originalPath, fullPath, fileName, isNormalized);
}
inline int64_t System::IO::FileInfo::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::StringW System::IO::FileInfo::get_DirectoryName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {"get_DirectoryName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::IO::DirectoryInfo* System::IO::FileInfo::get_Directory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {"get_Directory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::DirectoryInfo*>(this, ___internal_method);
}
inline ::System::IO::StreamWriter* System::IO::FileInfo::CreateText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {"CreateText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::StreamWriter*>(this, ___internal_method);
}
inline ::System::IO::StreamWriter* System::IO::FileInfo::AppendText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {"AppendText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::StreamWriter*>(this, ___internal_method);
}
inline ::System::IO::FileStream* System::IO::FileInfo::Open(::System::IO::FileMode  mode, ::System::IO::FileAccess  access, ::System::IO::FileShare  share)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {"Open", {}, {::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<::System::IO::FileShare>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(this, ___internal_method, mode, access, share);
}
inline ::System::IO::FileStream* System::IO::FileInfo::OpenRead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {"OpenRead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(this, ___internal_method);
}
inline void System::IO::FileInfo::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::StringW System::IO::FileInfo::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::FileInfo*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::IO::FileInfo* System::IO::FileInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileInfo*>());
}
inline ::System::IO::FileInfo* System::IO::FileInfo::New_ctor(::StringW  fileName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileInfo*>(fileName));
}
inline ::System::IO::FileInfo* System::IO::FileInfo::New_ctor(::StringW  originalPath, ::StringW  fullPath, ::StringW  fileName, bool  isNormalized)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileInfo*>(originalPath, fullPath, fileName, isNormalized));
}
inline ::System::IO::FileInfo* System::IO::FileInfo::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileInfo*>(info, context));
}
// Ctor Parameters []
constexpr ::System::IO::FileInfo::FileInfo()   {
}
