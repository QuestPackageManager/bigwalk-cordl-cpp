#pragma once
// IWYU pragma private; include "System/IO/Enumeration/FileSystemEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FileSystemEntry)
namespace GlobalNamespace {
struct NtDll_Interop_FILE_FULL_DIR_INFORMATION;
}
namespace System::IO {
struct FileAttributes;
}
namespace System::IO {
class FileSystemInfo;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::IO::Enumeration {
struct FileSystemEntry;
}
// Write type traits
MARK_VAL_T(::System::IO::Enumeration::FileSystemEntry);
DEFINE_IL2CPP_CLASS(::System::IO::Enumeration::FileSystemEntry, "System.IO.Enumeration", "FileSystemEntry");
// Dependencies System.ReadOnlySpan`1<T>
namespace System::IO::Enumeration {
// Is value type: true
// CS Name: System.IO.Enumeration.FileSystemEntry
struct CORDL_TYPE FileSystemEntry {
public:
// Declarations
 __declspec(property(get=get_Attributes)) ::System::IO::FileAttributes  Attributes;

 __declspec(property(get=get_Directory, put=set_Directory)) ::System::ReadOnlySpan_1<char16_t>  Directory;

 __declspec(property(get=get_FileName)) ::System::ReadOnlySpan_1<char16_t>  FileName;

 __declspec(property(get=get_IsDirectory)) bool  IsDirectory;

 __declspec(property(get=get_OriginalRootDirectory, put=set_OriginalRootDirectory)) ::System::ReadOnlySpan_1<char16_t>  OriginalRootDirectory;

 __declspec(property(get=get_RootDirectory, put=set_RootDirectory)) ::System::ReadOnlySpan_1<char16_t>  RootDirectory;

/// @brief Method Initialize, addr 0x1816ea5f0, size 0x20, virtual false, abstract: false, final false
static inline void Initialize(::by_ref<::System::IO::Enumeration::FileSystemEntry>  entry, ::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*  info, ::System::ReadOnlySpan_1<char16_t>  directory, ::System::ReadOnlySpan_1<char16_t>  rootDirectory, ::System::ReadOnlySpan_1<char16_t>  originalRootDirectory) ;

/// @brief Method ToFileSystemInfo, addr 0x1816ea610, size 0x1e0, virtual false, abstract: false, final false
inline ::System::IO::FileSystemInfo* ToFileSystemInfo() ;

/// @brief Method ToSpecifiedFullPath, addr 0x1816ea7f0, size 0x1d0, virtual false, abstract: false, final false
inline ::StringW ToSpecifiedFullPath() ;

/// @brief Method get_Attributes, addr 0x1816ea9c0, size 0x10, virtual false, abstract: false, final false
inline ::System::IO::FileAttributes get_Attributes() ;

/// @brief Method get_Directory, addr 0x18038fea0, size 0x10, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<char16_t> get_Directory() ;

/// @brief Method get_FileName, addr 0x1816ea9d0, size 0x20, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<char16_t> get_FileName() ;

/// @brief Method get_IsDirectory, addr 0x1816ea9f0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsDirectory() ;

/// @brief Method get_OriginalRootDirectory, addr 0x180a26490, size 0x12a0, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<char16_t> get_OriginalRootDirectory() ;

/// @brief Method get_RootDirectory, addr 0x1802e2d70, size 0x10, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<char16_t> get_RootDirectory() ;

/// @brief Method set_Directory, addr 0x18051e9e0, size 0x10, virtual false, abstract: false, final false
inline void set_Directory(::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method set_OriginalRootDirectory, addr 0x1816eaa00, size 0x10, virtual false, abstract: false, final false
inline void set_OriginalRootDirectory(::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method set_RootDirectory, addr 0x1802f1b20, size 0x10, virtual false, abstract: false, final false
inline void set_RootDirectory(::System::ReadOnlySpan_1<char16_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FileSystemEntry() ;

// Ctor Parameters [CppParam { name: "_info", ty: "::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*", modifiers: "", def_value: None }, CppParam { name: "_Directory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_RootDirectory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_OriginalRootDirectory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }]
constexpr FileSystemEntry(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*  _info, ::System::ReadOnlySpan_1<char16_t>  _Directory_k__BackingField, ::System::ReadOnlySpan_1<char16_t>  _RootDirectory_k__BackingField, ::System::ReadOnlySpan_1<char16_t>  _OriginalRootDirectory_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1675};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field _info, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*  _info;

/// @brief Field <Directory>k__BackingField, offset: 0x8, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  _Directory_k__BackingField;

/// @brief Field <RootDirectory>k__BackingField, offset: 0x18, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  _RootDirectory_k__BackingField;

/// @brief Field <OriginalRootDirectory>k__BackingField, offset: 0x28, size: 0x10, def value: None
 ::System::ReadOnlySpan_1<char16_t>  _OriginalRootDirectory_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _info) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _Directory_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _RootDirectory_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Enumeration::FileSystemEntry, _OriginalRootDirectory_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::IO::Enumeration::FileSystemEntry) == 0x38, "Size mismatch!");

} // namespace end def System::IO::Enumeration
