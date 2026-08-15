#pragma once
// IWYU pragma private; include "System/IO/DirectoryInfo.hpp"
#include "System/IO/zzzz__FileSystemInfo_impl.hpp"
#include "System/IO/zzzz__DirectoryInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/zzzz__EnumerationOptions_def.hpp"
#include "System/IO/zzzz__FileInfo_def.hpp"
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "System/IO/zzzz__SearchTarget_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::IO::DirectoryInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::DirectoryInfo::*)(::StringW)>(&::System::IO::DirectoryInfo::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816d27e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DirectoryInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::DirectoryInfo::*)(::StringW, ::StringW, ::StringW, bool)>(&::System::IO::DirectoryInfo::_ctor)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1816d2840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DirectoryInfo.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::DirectoryInfo::*)(::StringW, ::StringW, ::StringW, bool)>(&::System::IO::DirectoryInfo::Init)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1816d24e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {"Init", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DirectoryInfo.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::DirectoryInfo::*)()>(&::System::IO::DirectoryInfo::Create)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816d2210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DirectoryInfo.GetFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::IO::FileInfo*> (::System::IO::DirectoryInfo::*)()>(&::System::IO::DirectoryInfo::GetFiles)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1816d2390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {"GetFiles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DirectoryInfo.GetFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::IO::FileInfo*> (::System::IO::DirectoryInfo::*)(::StringW, ::System::IO::EnumerationOptions*)>(&::System::IO::DirectoryInfo::GetFiles)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1816d2450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {"GetFiles", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DirectoryInfo.GetDirectories
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::IO::DirectoryInfo*> (::System::IO::DirectoryInfo::*)()>(&::System::IO::DirectoryInfo::GetDirectories)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1816d2240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {"GetDirectories", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DirectoryInfo.GetDirectories
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::IO::DirectoryInfo*> (::System::IO::DirectoryInfo::*)(::StringW, ::System::IO::EnumerationOptions*)>(&::System::IO::DirectoryInfo::GetDirectories)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1816d2300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {"GetDirectories", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DirectoryInfo.InternalEnumerateInfos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* (*)(::StringW, ::StringW, ::System::IO::SearchTarget, ::System::IO::EnumerationOptions*)>(&::System::IO::DirectoryInfo::InternalEnumerateInfos)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1816d2700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {"InternalEnumerateInfos", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::SearchTarget>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DirectoryInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::DirectoryInfo::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::IO::DirectoryInfo::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816d2a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::DirectoryInfo::_ctor(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void System::IO::DirectoryInfo::_ctor(::StringW  originalPath, ::StringW  fullPath, ::StringW  fileName, bool  isNormalized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, originalPath, fullPath, fileName, isNormalized);
}
inline void System::IO::DirectoryInfo::Init(::StringW  originalPath, ::StringW  fullPath, ::StringW  fileName, bool  isNormalized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {"Init", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, originalPath, fullPath, fileName, isNormalized);
}
inline void System::IO::DirectoryInfo::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::System::IO::FileInfo*> System::IO::DirectoryInfo::GetFiles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {"GetFiles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::IO::FileInfo*>>(this, ___internal_method);
}
inline ::ArrayW<::System::IO::FileInfo*> System::IO::DirectoryInfo::GetFiles(::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {"GetFiles", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::IO::FileInfo*>>(this, ___internal_method, searchPattern, enumerationOptions);
}
inline ::ArrayW<::System::IO::DirectoryInfo*> System::IO::DirectoryInfo::GetDirectories()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {"GetDirectories", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::IO::DirectoryInfo*>>(this, ___internal_method);
}
inline ::ArrayW<::System::IO::DirectoryInfo*> System::IO::DirectoryInfo::GetDirectories(::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {"GetDirectories", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::IO::DirectoryInfo*>>(this, ___internal_method, searchPattern, enumerationOptions);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* System::IO::DirectoryInfo::InternalEnumerateInfos(::StringW  path, ::StringW  searchPattern, ::System::IO::SearchTarget  searchTarget, ::System::IO::EnumerationOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {"InternalEnumerateInfos", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::SearchTarget>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>*>(nullptr, ___internal_method, path, searchPattern, searchTarget, options);
}
inline void System::IO::DirectoryInfo::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DirectoryInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::IO::DirectoryInfo* System::IO::DirectoryInfo::New_ctor(::StringW  path)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::DirectoryInfo*>(path));
}
inline ::System::IO::DirectoryInfo* System::IO::DirectoryInfo::New_ctor(::StringW  originalPath, ::StringW  fullPath, ::StringW  fileName, bool  isNormalized)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::DirectoryInfo*>(originalPath, fullPath, fileName, isNormalized));
}
inline ::System::IO::DirectoryInfo* System::IO::DirectoryInfo::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::DirectoryInfo*>(info, context));
}
// Ctor Parameters []
constexpr ::System::IO::DirectoryInfo::DirectoryInfo()   {
}
