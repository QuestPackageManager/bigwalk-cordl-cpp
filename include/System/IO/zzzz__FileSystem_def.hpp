#pragma once
// IWYU pragma private; include "System/IO/FileSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeFindHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileSystem)
namespace GlobalNamespace {
struct Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA;
}
namespace GlobalNamespace {
struct Kernel32_Interop_WIN32_FIND_DATA;
}
namespace Microsoft::Win32::SafeHandles {
class SafeFindHandle;
}
namespace System::IO {
struct FileMode;
}
namespace System::IO {
struct FileShare;
}
namespace System::IO {
class FileSystem_UnitySafeFindHandle;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::IO {
class FileSystem;
}
namespace System::IO {
class FileSystem_UnitySafeFindHandle;
}
// Write type traits
MARK_REF_T(::System::IO::FileSystem*);
MARK_REF_T(::System::IO::FileSystem_UnitySafeFindHandle*);
DEFINE_IL2CPP_CLASS(::System::IO::FileSystem*, "System.IO", "FileSystem");
DEFINE_IL2CPP_CLASS(::System::IO::FileSystem_UnitySafeFindHandle*, "System.IO", "FileSystem/UnitySafeFindHandle");
// Dependencies Microsoft.Win32.SafeHandles.SafeFindHandle, System.IntPtr
namespace System::IO {
// Is value type: false
// CS Name: System.IO.FileSystem/UnitySafeFindHandle
class CORDL_TYPE FileSystem_UnitySafeFindHandle : public ::Microsoft::Win32::SafeHandles::SafeFindHandle {
public:
// Declarations
 __declspec(property(get=get_Handle)) ::System::IntPtr  Handle;

 __declspec(property(get=get_IsInvalid)) bool  IsInvalid;

/// @brief Field m_Handle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Handle, put=__cordl_internal_set_m_Handle)) ::System::IntPtr  m_Handle;

/// @brief Method Dispose, addr 0x1816e2860, size 0x20, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::System::IO::FileSystem_UnitySafeFindHandle* New_ctor(::System::IntPtr  handle) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Handle() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Handle() ;

constexpr void __cordl_internal_set_m_Handle(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x1816e2880, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  handle) ;

/// @brief Method get_Handle, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_Handle() ;

/// @brief Method get_IsInvalid, addr 0x181192b20, size 0x3f0, virtual true, abstract: false, final false
inline bool get_IsInvalid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileSystem_UnitySafeFindHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileSystem_UnitySafeFindHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileSystem_UnitySafeFindHandle(FileSystem_UnitySafeFindHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileSystem_UnitySafeFindHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileSystem_UnitySafeFindHandle(FileSystem_UnitySafeFindHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1594};

/// @brief Field m_Handle, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  ___m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::FileSystem_UnitySafeFindHandle, ___m_Handle) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::IO::FileSystem_UnitySafeFindHandle) == 0x28, "Size mismatch!");

} // namespace end def System::IO
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.FileSystem
class CORDL_TYPE FileSystem : public ::System::Object {
public:
// Declarations
using UnitySafeFindHandle = ::System::IO::FileSystem_UnitySafeFindHandle;

/// @brief Method BrokeredCreateDirectory, addr 0x1816d3bf0, size 0x10, virtual false, abstract: false, final false
static inline bool BrokeredCreateDirectory(::StringW  path) ;

/// @brief Method BrokeredDeleteFile, addr 0x1816d3bf0, size 0x10, virtual false, abstract: false, final false
static inline bool BrokeredDeleteFile(::StringW  path) ;

/// @brief Method BrokeredFindFirstFile, addr 0x1816d3c00, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr BrokeredFindFirstFile(::StringW  searchPath, ::by_ref<::StringW>  resultFilePath, ::by_ref<uint32_t>  attributes) ;

/// @brief Method BrokeredFindNextFile, addr 0x1816d3c10, size 0x10, virtual false, abstract: false, final false
static inline bool BrokeredFindNextFile(::System::IntPtr  handle, ::by_ref<::StringW>  resultFilePath, ::by_ref<uint32_t>  attributes) ;

/// @brief Method BrokeredGetFileAttributes, addr 0x1816d3c20, size 0x10, virtual false, abstract: false, final false
static inline bool BrokeredGetFileAttributes(::StringW  path, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>  data) ;

/// @brief Method BrokeredMoveFile, addr 0x1816d3c30, size 0x10, virtual false, abstract: false, final false
static inline bool BrokeredMoveFile(::StringW  sourceFullPath, ::StringW  destFullPath) ;

/// @brief Method BrokeredOpenFile, addr 0x1816d3c40, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr BrokeredOpenFile(::StringW  lpFileName, int32_t  dwDesiredAccess, int32_t  dwShareMode, int32_t  dwCreationDisposition, int32_t  dwFlagsAndAttributes) ;

/// @brief Method BrokeredRemoveDirectory, addr 0x1816d3bf0, size 0x10, virtual false, abstract: false, final false
static inline bool BrokeredRemoveDirectory(::StringW  path) ;

/// @brief Method BrokeredSafeFindHandleDispose, addr 0x1816d3c50, size 0x10, virtual false, abstract: false, final false
static inline int32_t BrokeredSafeFindHandleDispose(::System::IntPtr  handle) ;

/// @brief Method CreateDirectory, addr 0x1816d3c60, size 0x370, virtual false, abstract: false, final false
static inline void CreateDirectory(::StringW  fullPath) ;

/// @brief Method DeleteFile, addr 0x1816d3fd0, size 0x40, virtual false, abstract: false, final false
static inline void DeleteFile(::StringW  fullPath) ;

/// @brief Method DirectoryExists, addr 0x1816d4010, size 0x50, virtual false, abstract: false, final false
static inline bool DirectoryExists(::StringW  fullPath) ;

/// @brief Method DirectoryExists, addr 0x1816d4060, size 0x50, virtual false, abstract: false, final false
static inline bool DirectoryExists(::StringW  path, ::by_ref<int32_t>  lastError) ;

/// @brief Method FileExists, addr 0x1816d40b0, size 0x50, virtual false, abstract: false, final false
static inline bool FileExists(::StringW  fullPath) ;

/// @brief Method FillAttributeInfo, addr 0x1816d4100, size 0x420, virtual false, abstract: false, final false
static inline int32_t FillAttributeInfo(::StringW  path, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>  data, bool  returnErrorOnNotFound) ;

/// @brief Method GetFindData, addr 0x1816d4520, size 0x1a0, virtual false, abstract: false, final false
static inline void GetFindData(::StringW  fullPath, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>  findData) ;

/// @brief Method IsNameSurrogateReparsePoint, addr 0x1816d46c0, size 0x20, virtual false, abstract: false, final false
static inline bool IsNameSurrogateReparsePoint(::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>  data) ;

/// @brief Method MoveFile, addr 0x1816d46e0, size 0x70, virtual false, abstract: false, final false
static inline void MoveFile(::StringW  sourceFullPath, ::StringW  destFullPath) ;

/// @brief Method RemoveDirectory, addr 0x1816d4ef0, size 0x1d0, virtual false, abstract: false, final false
static inline void RemoveDirectory(::StringW  fullPath, bool  recursive) ;

/// @brief Method RemoveDirectoryInternal, addr 0x1816d4750, size 0xe0, virtual false, abstract: false, final false
static inline void RemoveDirectoryInternal(::StringW  fullPath, bool  topLevel, bool  allowDirectoryNotEmpty) ;

/// @brief Method RemoveDirectoryRecursive, addr 0x1816d4830, size 0x6c0, virtual false, abstract: false, final false
static inline void RemoveDirectoryRecursive(::StringW  fullPath, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>  findData, bool  topLevel) ;

/// @brief Method RemoveExtendedPathPrefix, addr 0x1816d50c0, size 0x50, virtual false, abstract: false, final false
static inline ::StringW RemoveExtendedPathPrefix(::StringW  path) ;

/// @brief Method UnityCreateDirectory, addr 0x1816d5110, size 0x60, virtual false, abstract: false, final false
static inline bool UnityCreateDirectory(::StringW  name) ;

/// @brief Method UnityCreateFile_IntPtr, addr 0x1816d5170, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr UnityCreateFile_IntPtr(::StringW  lpFileName, int32_t  dwDesiredAccess, ::System::IO::FileShare  dwShareMode, ::System::IO::FileMode  dwCreationDisposition, int32_t  dwFlagsAndAttributes) ;

/// @brief Method UnityDeleteFile, addr 0x1816d5200, size 0x80, virtual false, abstract: false, final false
static inline bool UnityDeleteFile(::StringW  path) ;

/// @brief Method UnityFindFirstFile, addr 0x1816d5280, size 0x120, virtual false, abstract: false, final false
static inline ::Microsoft::Win32::SafeHandles::SafeFindHandle* UnityFindFirstFile(::StringW  path, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>  findData) ;

/// @brief Method UnityFindNextFile, addr 0x1816d53a0, size 0xe0, virtual false, abstract: false, final false
static inline bool UnityFindNextFile(::Microsoft::Win32::SafeHandles::SafeFindHandle*  handle, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>  findData) ;

/// @brief Method UnityGetFileAttributesEx, addr 0x1816d5480, size 0xf0, virtual false, abstract: false, final false
static inline bool UnityGetFileAttributesEx(::StringW  path, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>  data) ;

/// @brief Method UnityMoveFile, addr 0x1816d5570, size 0x60, virtual false, abstract: false, final false
static inline bool UnityMoveFile(::StringW  sourceFullPath, ::StringW  destFullPath) ;

/// @brief Method UnityRemoveDirectory, addr 0x1816d55d0, size 0x80, virtual false, abstract: false, final false
static inline bool UnityRemoveDirectory(::StringW  fullPath) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileSystem(FileSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileSystem(FileSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1595};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::IO::FileSystem) == 0x10, "Size mismatch!");

} // namespace end def System::IO
