#pragma once
// IWYU pragma private; include "System/IO/Directory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__Directory_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/zzzz__DirectoryInfo_def.hpp"
#include "System/IO/zzzz__EnumerationOptions_def.hpp"
#include "System/IO/zzzz__SearchOption_def.hpp"
#include "System/IO/zzzz__SearchTarget_def.hpp"
//  Writing Method size for method: ::System::IO::Directory.CreateDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::DirectoryInfo* (*)(::StringW)>(&::System::IO::Directory::CreateDirectory)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1816d2ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"CreateDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::Directory::Exists)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1816d2d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"Exists", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&::System::IO::Directory::GetFiles)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1816d3000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetFiles", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW)>(&::System::IO::Directory::GetFiles)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1816d2f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetFiles", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW, ::System::IO::EnumerationOptions*)>(&::System::IO::Directory::GetFiles)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1816d30c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetFiles", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetDirectories
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&::System::IO::Directory::GetDirectories)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1816d2e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetDirectories", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetDirectories
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW, ::System::IO::EnumerationOptions*)>(&::System::IO::Directory::GetDirectories)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1816d2ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetDirectories", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.InternalEnumeratePaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::StringW, ::System::IO::SearchTarget, ::System::IO::EnumerationOptions*)>(&::System::IO::Directory::InternalEnumeratePaths)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1816d3180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"InternalEnumeratePaths", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::SearchTarget>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.EnumerateFileSystemEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::StringW, ::System::IO::SearchOption)>(&::System::IO::Directory::EnumerateFileSystemEntries)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1816d2c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateFileSystemEntries", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::SearchOption>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.EnumerateFileSystemEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::StringW, ::System::IO::EnumerationOptions*)>(&::System::IO::Directory::EnumerateFileSystemEntries)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816d2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateFileSystemEntries", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.InternalGetDirectoryRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Directory::InternalGetDirectoryRoot)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816d3270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"InternalGetDirectoryRoot", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetCurrentDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::IO::Directory::GetCurrentDirectory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816d2df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetCurrentDirectory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.Delete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool)>(&::System::IO::Directory::Delete)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1816d2b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"Delete", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.InsecureGetCurrentDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::IO::Directory::InsecureGetCurrentDirectory)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1816d3140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"InsecureGetCurrentDirectory", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IO::DirectoryInfo* System::IO::Directory::CreateDirectory(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"CreateDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::DirectoryInfo*>(nullptr, ___internal_method, path);
}
inline bool System::IO::Directory::Exists(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"Exists", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline ::ArrayW<::StringW> System::IO::Directory::GetFiles(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetFiles", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, path);
}
inline ::ArrayW<::StringW> System::IO::Directory::GetFiles(::StringW  path, ::StringW  searchPattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetFiles", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, path, searchPattern);
}
inline ::ArrayW<::StringW> System::IO::Directory::GetFiles(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetFiles", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, path, searchPattern, enumerationOptions);
}
inline ::ArrayW<::StringW> System::IO::Directory::GetDirectories(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetDirectories", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, path);
}
inline ::ArrayW<::StringW> System::IO::Directory::GetDirectories(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetDirectories", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, path, searchPattern, enumerationOptions);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Directory::InternalEnumeratePaths(::StringW  path, ::StringW  searchPattern, ::System::IO::SearchTarget  searchTarget, ::System::IO::EnumerationOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"InternalEnumeratePaths", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::SearchTarget>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method, path, searchPattern, searchTarget, options);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Directory::EnumerateFileSystemEntries(::StringW  path, ::StringW  searchPattern, ::System::IO::SearchOption  searchOption)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateFileSystemEntries", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::SearchOption>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method, path, searchPattern, searchOption);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Directory::EnumerateFileSystemEntries(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateFileSystemEntries", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method, path, searchPattern, enumerationOptions);
}
inline ::StringW System::IO::Directory::InternalGetDirectoryRoot(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"InternalGetDirectoryRoot", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Directory::GetCurrentDirectory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetCurrentDirectory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void System::IO::Directory::Delete(::StringW  path, bool  recursive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"Delete", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, recursive);
}
inline ::StringW System::IO::Directory::InsecureGetCurrentDirectory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"InsecureGetCurrentDirectory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::IO::Directory::Directory()   {
}
