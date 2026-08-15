#pragma once
// IWYU pragma private; include "System/IO/Enumeration/FileSystemEntry.hpp"
#include "System/zzzz__ReadOnlySpan_1_impl.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEntry_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IO::Enumeration::FileSystemEntry>, ::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*, ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Enumeration::FileSystemEntry::Initialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816ea5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"Initialize", {}, {::i2c::type_of<::by_ref<::System::IO::Enumeration::FileSystemEntry>>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_Directory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::get_Directory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"get_Directory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.set_Directory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Enumeration::FileSystemEntry::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Enumeration::FileSystemEntry::set_Directory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"set_Directory", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_RootDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::get_RootDirectory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"get_RootDirectory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.set_RootDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Enumeration::FileSystemEntry::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Enumeration::FileSystemEntry::set_RootDirectory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"set_RootDirectory", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_OriginalRootDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::get_OriginalRootDirectory)> {
  constexpr static std::size_t size = 0x12a0;
  constexpr static std::size_t addrs = 0x180a26490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"get_OriginalRootDirectory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.set_OriginalRootDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Enumeration::FileSystemEntry::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Enumeration::FileSystemEntry::set_OriginalRootDirectory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816eaa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"set_OriginalRootDirectory", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_FileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::get_FileName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816ea9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"get_FileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_Attributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileAttributes (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::get_Attributes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816ea9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"get_Attributes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.get_IsDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::get_IsDirectory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816ea9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"get_IsDirectory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.ToFileSystemInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileSystemInfo* (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::ToFileSystemInfo)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1816ea610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"ToFileSystemInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemEntry.ToSpecifiedFullPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::Enumeration::FileSystemEntry::*)()>(&::System::IO::Enumeration::FileSystemEntry::ToSpecifiedFullPath)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1816ea7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"ToSpecifiedFullPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::Enumeration::FileSystemEntry::Initialize(::by_ref<::System::IO::Enumeration::FileSystemEntry>  entry, ::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*  info, ::System::ReadOnlySpan_1<char16_t>  directory, ::System::ReadOnlySpan_1<char16_t>  rootDirectory, ::System::ReadOnlySpan_1<char16_t>  originalRootDirectory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"Initialize", {}, {::i2c::type_of<::by_ref<::System::IO::Enumeration::FileSystemEntry>>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entry, info, directory, rootDirectory, originalRootDirectory);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_Directory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"get_Directory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(*this, ___internal_method);
}
inline void System::IO::Enumeration::FileSystemEntry::set_Directory(::System::ReadOnlySpan_1<char16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"set_Directory", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_RootDirectory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"get_RootDirectory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(*this, ___internal_method);
}
inline void System::IO::Enumeration::FileSystemEntry::set_RootDirectory(::System::ReadOnlySpan_1<char16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"set_RootDirectory", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_OriginalRootDirectory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"get_OriginalRootDirectory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(*this, ___internal_method);
}
inline void System::IO::Enumeration::FileSystemEntry::set_OriginalRootDirectory(::System::ReadOnlySpan_1<char16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"set_OriginalRootDirectory", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Enumeration::FileSystemEntry::get_FileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"get_FileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(*this, ___internal_method);
}
inline ::System::IO::FileAttributes System::IO::Enumeration::FileSystemEntry::get_Attributes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"get_Attributes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileAttributes>(*this, ___internal_method);
}
inline bool System::IO::Enumeration::FileSystemEntry::get_IsDirectory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"get_IsDirectory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::IO::FileSystemInfo* System::IO::Enumeration::FileSystemEntry::ToFileSystemInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"ToFileSystemInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileSystemInfo*>(*this, ___internal_method);
}
inline ::StringW System::IO::Enumeration::FileSystemEntry::ToSpecifiedFullPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Enumeration::FileSystemEntry>(),
                        {"ToSpecifiedFullPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_info", ty: "::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Directory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_RootDirectory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OriginalRootDirectory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Enumeration::FileSystemEntry::FileSystemEntry(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*  _info, ::System::ReadOnlySpan_1<char16_t>  _Directory_k__BackingField, ::System::ReadOnlySpan_1<char16_t>  _RootDirectory_k__BackingField, ::System::ReadOnlySpan_1<char16_t>  _OriginalRootDirectory_k__BackingField) noexcept  {
this->_info = _info;
this->_Directory_k__BackingField = _Directory_k__BackingField;
this->_RootDirectory_k__BackingField = _RootDirectory_k__BackingField;
this->_OriginalRootDirectory_k__BackingField = _OriginalRootDirectory_k__BackingField;
}
// Ctor Parameters []
constexpr ::System::IO::Enumeration::FileSystemEntry::FileSystemEntry()   {
}
