#pragma once
// IWYU pragma private; include "System/IO/FileSystem.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeFindHandle_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__FileSystem_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeFindHandle_def.hpp"
#include "System/IO/zzzz__FileMode_def.hpp"
#include "System/IO/zzzz__FileShare_def.hpp"
#include "System/IO/zzzz__FileSystem_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::IO::FileSystem_UnitySafeFindHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystem_UnitySafeFindHandle::*)(::System::IntPtr)>(&::System::IO::FileSystem_UnitySafeFindHandle::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816e2880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem_UnitySafeFindHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem_UnitySafeFindHandle.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::IO::FileSystem_UnitySafeFindHandle::*)()>(&::System::IO::FileSystem_UnitySafeFindHandle::get_Handle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem_UnitySafeFindHandle*>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem_UnitySafeFindHandle.get_IsInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::FileSystem_UnitySafeFindHandle::*)()>(&::System::IO::FileSystem_UnitySafeFindHandle::get_IsInvalid)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x181192b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::FileSystem_UnitySafeFindHandle*>(),
                    {::i2c::class_of<::System::IO::FileSystem_UnitySafeFindHandle*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem_UnitySafeFindHandle.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystem_UnitySafeFindHandle::*)(bool)>(&::System::IO::FileSystem_UnitySafeFindHandle::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816e2860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::FileSystem_UnitySafeFindHandle*>(),
                    {::i2c::class_of<::System::IO::FileSystem_UnitySafeFindHandle*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& System::IO::FileSystem_UnitySafeFindHandle::__cordl_internal_get_m_Handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Handle;
}
constexpr ::System::IntPtr const& System::IO::FileSystem_UnitySafeFindHandle::__cordl_internal_get_m_Handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Handle;
}
constexpr void System::IO::FileSystem_UnitySafeFindHandle::__cordl_internal_set_m_Handle(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Handle = value;
}
inline void System::IO::FileSystem_UnitySafeFindHandle::_ctor(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem_UnitySafeFindHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::System::IntPtr System::IO::FileSystem_UnitySafeFindHandle::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem_UnitySafeFindHandle*>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline bool System::IO::FileSystem_UnitySafeFindHandle::get_IsInvalid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::FileSystem_UnitySafeFindHandle*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::IO::FileSystem_UnitySafeFindHandle::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::FileSystem_UnitySafeFindHandle*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::IO::FileSystem_UnitySafeFindHandle* System::IO::FileSystem_UnitySafeFindHandle::New_ctor(::System::IntPtr  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileSystem_UnitySafeFindHandle*>(handle));
}
// Ctor Parameters []
constexpr ::System::IO::FileSystem_UnitySafeFindHandle::FileSystem_UnitySafeFindHandle()   {
}
//  Writing Method size for method: ::System::IO::FileSystem.CreateDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::IO::FileSystem::CreateDirectory)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x1816d3c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"CreateDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.DeleteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::IO::FileSystem::DeleteFile)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1816d3fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"DeleteFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.DirectoryExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::FileSystem::DirectoryExists)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1816d4010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"DirectoryExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.DirectoryExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<int32_t>)>(&::System::IO::FileSystem::DirectoryExists)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1816d4060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"DirectoryExists", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.FillAttributeInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>, bool)>(&::System::IO::FileSystem::FillAttributeInfo)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x1816d4100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"FillAttributeInfo", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.FileExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::FileSystem::FileExists)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1816d40b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"FileExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.MoveFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::FileSystem::MoveFile)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816d46e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"MoveFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.RemoveDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool)>(&::System::IO::FileSystem::RemoveDirectory)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1816d4ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"RemoveDirectory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.GetFindData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>)>(&::System::IO::FileSystem::GetFindData)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1816d4520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"GetFindData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.IsNameSurrogateReparsePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>)>(&::System::IO::FileSystem::IsNameSurrogateReparsePoint)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816d46c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"IsNameSurrogateReparsePoint", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.RemoveDirectoryRecursive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>, bool)>(&::System::IO::FileSystem::RemoveDirectoryRecursive)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x1816d4830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"RemoveDirectoryRecursive", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.RemoveDirectoryInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool, bool)>(&::System::IO::FileSystem::RemoveDirectoryInternal)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1816d4750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"RemoveDirectoryInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.UnityCreateDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::FileSystem::UnityCreateDirectory)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816d5110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"UnityCreateDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.UnityRemoveDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::FileSystem::UnityRemoveDirectory)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1816d55d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"UnityRemoveDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.UnityGetFileAttributesEx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>)>(&::System::IO::FileSystem::UnityGetFileAttributesEx)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1816d5480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"UnityGetFileAttributesEx", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.UnityCreateFile_IntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW, int32_t, ::System::IO::FileShare, ::System::IO::FileMode, int32_t)>(&::System::IO::FileSystem::UnityCreateFile_IntPtr)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1816d5170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"UnityCreateFile_IntPtr", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.UnityDeleteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::FileSystem::UnityDeleteFile)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1816d5200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"UnityDeleteFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.UnityMoveFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::System::IO::FileSystem::UnityMoveFile)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816d5570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"UnityMoveFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.UnityFindFirstFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Microsoft::Win32::SafeHandles::SafeFindHandle* (*)(::StringW, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>)>(&::System::IO::FileSystem::UnityFindFirstFile)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1816d5280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"UnityFindFirstFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.UnityFindNextFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Microsoft::Win32::SafeHandles::SafeFindHandle*, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>)>(&::System::IO::FileSystem::UnityFindNextFile)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1816d53a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"UnityFindNextFile", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeFindHandle*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.BrokeredCreateDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::FileSystem::BrokeredCreateDirectory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816d3bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"BrokeredCreateDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.BrokeredRemoveDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::FileSystem::BrokeredRemoveDirectory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816d3bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"BrokeredRemoveDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.BrokeredGetFileAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>)>(&::System::IO::FileSystem::BrokeredGetFileAttributes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816d3c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"BrokeredGetFileAttributes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.BrokeredOpenFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW, int32_t, int32_t, int32_t, int32_t)>(&::System::IO::FileSystem::BrokeredOpenFile)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816d3c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"BrokeredOpenFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.BrokeredMoveFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::System::IO::FileSystem::BrokeredMoveFile)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816d3c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"BrokeredMoveFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.BrokeredDeleteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::FileSystem::BrokeredDeleteFile)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816d3bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"BrokeredDeleteFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.BrokeredFindFirstFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW, ::by_ref<::StringW>, ::by_ref<uint32_t>)>(&::System::IO::FileSystem::BrokeredFindFirstFile)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816d3c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"BrokeredFindFirstFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.BrokeredFindNextFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::StringW>, ::by_ref<uint32_t>)>(&::System::IO::FileSystem::BrokeredFindNextFile)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816d3c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"BrokeredFindNextFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.BrokeredSafeFindHandleDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::System::IO::FileSystem::BrokeredSafeFindHandleDispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816d3c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"BrokeredSafeFindHandleDispose", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.RemoveExtendedPathPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::FileSystem::RemoveExtendedPathPrefix)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1816d50c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"RemoveExtendedPathPrefix", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::FileSystem::CreateDirectory(::StringW  fullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"CreateDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullPath);
}
inline void System::IO::FileSystem::DeleteFile(::StringW  fullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"DeleteFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullPath);
}
inline bool System::IO::FileSystem::DirectoryExists(::StringW  fullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"DirectoryExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fullPath);
}
inline bool System::IO::FileSystem::DirectoryExists(::StringW  path, ::by_ref<int32_t>  lastError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"DirectoryExists", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path, lastError);
}
inline int32_t System::IO::FileSystem::FillAttributeInfo(::StringW  path, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>  data, bool  returnErrorOnNotFound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"FillAttributeInfo", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path, data, returnErrorOnNotFound);
}
inline bool System::IO::FileSystem::FileExists(::StringW  fullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"FileExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fullPath);
}
inline void System::IO::FileSystem::MoveFile(::StringW  sourceFullPath, ::StringW  destFullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"MoveFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFullPath, destFullPath);
}
inline void System::IO::FileSystem::RemoveDirectory(::StringW  fullPath, bool  recursive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"RemoveDirectory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullPath, recursive);
}
inline void System::IO::FileSystem::GetFindData(::StringW  fullPath, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>  findData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"GetFindData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullPath, findData);
}
inline bool System::IO::FileSystem::IsNameSurrogateReparsePoint(::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"IsNameSurrogateReparsePoint", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data);
}
inline void System::IO::FileSystem::RemoveDirectoryRecursive(::StringW  fullPath, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>  findData, bool  topLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"RemoveDirectoryRecursive", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullPath, findData, topLevel);
}
inline void System::IO::FileSystem::RemoveDirectoryInternal(::StringW  fullPath, bool  topLevel, bool  allowDirectoryNotEmpty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"RemoveDirectoryInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullPath, topLevel, allowDirectoryNotEmpty);
}
inline bool System::IO::FileSystem::UnityCreateDirectory(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"UnityCreateDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline bool System::IO::FileSystem::UnityRemoveDirectory(::StringW  fullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"UnityRemoveDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fullPath);
}
inline bool System::IO::FileSystem::UnityGetFileAttributesEx(::StringW  path, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"UnityGetFileAttributesEx", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path, data);
}
inline ::System::IntPtr System::IO::FileSystem::UnityCreateFile_IntPtr(::StringW  lpFileName, int32_t  dwDesiredAccess, ::System::IO::FileShare  dwShareMode, ::System::IO::FileMode  dwCreationDisposition, int32_t  dwFlagsAndAttributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"UnityCreateFile_IntPtr", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, lpFileName, dwDesiredAccess, dwShareMode, dwCreationDisposition, dwFlagsAndAttributes);
}
inline bool System::IO::FileSystem::UnityDeleteFile(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"UnityDeleteFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool System::IO::FileSystem::UnityMoveFile(::StringW  sourceFullPath, ::StringW  destFullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"UnityMoveFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourceFullPath, destFullPath);
}
inline ::Microsoft::Win32::SafeHandles::SafeFindHandle* System::IO::FileSystem::UnityFindFirstFile(::StringW  path, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>  findData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"UnityFindFirstFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeFindHandle*>(nullptr, ___internal_method, path, findData);
}
inline bool System::IO::FileSystem::UnityFindNextFile(::Microsoft::Win32::SafeHandles::SafeFindHandle*  handle, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>  findData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"UnityFindNextFile", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeFindHandle*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, findData);
}
inline bool System::IO::FileSystem::BrokeredCreateDirectory(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"BrokeredCreateDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool System::IO::FileSystem::BrokeredRemoveDirectory(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"BrokeredRemoveDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool System::IO::FileSystem::BrokeredGetFileAttributes(::StringW  path, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"BrokeredGetFileAttributes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path, data);
}
inline ::System::IntPtr System::IO::FileSystem::BrokeredOpenFile(::StringW  lpFileName, int32_t  dwDesiredAccess, int32_t  dwShareMode, int32_t  dwCreationDisposition, int32_t  dwFlagsAndAttributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"BrokeredOpenFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, lpFileName, dwDesiredAccess, dwShareMode, dwCreationDisposition, dwFlagsAndAttributes);
}
inline bool System::IO::FileSystem::BrokeredMoveFile(::StringW  sourceFullPath, ::StringW  destFullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"BrokeredMoveFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourceFullPath, destFullPath);
}
inline bool System::IO::FileSystem::BrokeredDeleteFile(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"BrokeredDeleteFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline ::System::IntPtr System::IO::FileSystem::BrokeredFindFirstFile(::StringW  searchPath, ::by_ref<::StringW>  resultFilePath, ::by_ref<uint32_t>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"BrokeredFindFirstFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, searchPath, resultFilePath, attributes);
}
inline bool System::IO::FileSystem::BrokeredFindNextFile(::System::IntPtr  handle, ::by_ref<::StringW>  resultFilePath, ::by_ref<uint32_t>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"BrokeredFindNextFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, resultFilePath, attributes);
}
inline int32_t System::IO::FileSystem::BrokeredSafeFindHandleDispose(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"BrokeredSafeFindHandleDispose", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline ::StringW System::IO::FileSystem::RemoveExtendedPathPrefix(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"RemoveExtendedPathPrefix", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
// Ctor Parameters []
constexpr ::System::IO::FileSystem::FileSystem()   {
}
