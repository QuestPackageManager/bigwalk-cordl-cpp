#pragma once
// IWYU pragma private; include "System/IO/Directory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Directory)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::IO {
class DirectoryInfo;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System::IO {
struct SearchOption;
}
namespace System::IO {
struct SearchTarget;
}
// Forward declare root types
namespace System::IO {
class Directory;
}
// Write type traits
MARK_REF_T(::System::IO::Directory*);
DEFINE_IL2CPP_CLASS(::System::IO::Directory*, "System.IO", "Directory");
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.Directory
class CORDL_TYPE Directory : public ::System::Object {
public:
// Declarations
/// @brief Method CreateDirectory, addr 0x1816d2ae0, size 0xb0, virtual false, abstract: false, final false
static inline ::System::IO::DirectoryInfo* CreateDirectory(::StringW  path) ;

/// @brief Method Delete, addr 0x1816d2b90, size 0x50, virtual false, abstract: false, final false
static inline void Delete(::StringW  path, bool  recursive) ;

/// @brief Method EnumerateFileSystemEntries, addr 0x1816d2be0, size 0x70, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateFileSystemEntries(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions) ;

/// @brief Method EnumerateFileSystemEntries, addr 0x1816d2c50, size 0x110, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateFileSystemEntries(::StringW  path, ::StringW  searchPattern, ::System::IO::SearchOption  searchOption) ;

/// @brief Method Exists, addr 0x1816d2d60, size 0x90, virtual false, abstract: false, final false
static inline bool Exists(::StringW  path) ;

/// @brief Method GetCurrentDirectory, addr 0x1816d2df0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW GetCurrentDirectory() ;

/// @brief Method GetDirectories, addr 0x1816d2e00, size 0xc0, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetDirectories(::StringW  path) ;

/// @brief Method GetDirectories, addr 0x1816d2ec0, size 0x80, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetDirectories(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions) ;

/// @brief Method GetFiles, addr 0x1816d3000, size 0xc0, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetFiles(::StringW  path) ;

/// @brief Method GetFiles, addr 0x1816d2f40, size 0xc0, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetFiles(::StringW  path, ::StringW  searchPattern) ;

/// @brief Method GetFiles, addr 0x1816d30c0, size 0x80, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetFiles(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions) ;

/// @brief Method InsecureGetCurrentDirectory, addr 0x1816d3140, size 0x40, virtual false, abstract: false, final false
static inline ::StringW InsecureGetCurrentDirectory() ;

/// @brief Method InternalEnumeratePaths, addr 0x1816d3180, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* InternalEnumeratePaths(::StringW  path, ::StringW  searchPattern, ::System::IO::SearchTarget  searchTarget, ::System::IO::EnumerationOptions*  options) ;

/// @brief Method InternalGetDirectoryRoot, addr 0x1816d3270, size 0x60, virtual false, abstract: false, final false
static inline ::StringW InternalGetDirectoryRoot(::StringW  path) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Directory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Directory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Directory(Directory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Directory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Directory(Directory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1634};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::IO::Directory) == 0x10, "Size mismatch!");

} // namespace end def System::IO
