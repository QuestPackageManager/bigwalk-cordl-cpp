#pragma once
// IWYU pragma private; include "System/IO/FileInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileInfo)
namespace System::IO {
class DirectoryInfo;
}
namespace System::IO {
struct FileAccess;
}
namespace System::IO {
struct FileMode;
}
namespace System::IO {
struct FileShare;
}
namespace System::IO {
class FileStream;
}
namespace System::IO {
class StreamWriter;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::IO {
class FileInfo;
}
// Write type traits
MARK_REF_T(::System::IO::FileInfo*);
DEFINE_IL2CPP_CLASS(::System::IO::FileInfo*, "System.IO", "FileInfo");
// Dependencies System.IO.FileSystemInfo
namespace System::IO {
// Is value type: false
// CS Name: System.IO.FileInfo
class CORDL_TYPE FileInfo : public ::System::IO::FileSystemInfo {
public:
// Declarations
 __declspec(property(get=get_Directory)) ::System::IO::DirectoryInfo*  Directory;

 __declspec(property(get=get_DirectoryName)) ::StringW  DirectoryName;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Method AppendText, addr 0x1816e6f00, size 0x60, virtual false, abstract: false, final false
inline ::System::IO::StreamWriter* AppendText() ;

/// @brief Method CreateText, addr 0x1816e6f60, size 0x60, virtual false, abstract: false, final false
inline ::System::IO::StreamWriter* CreateText() ;

static inline ::System::IO::FileInfo* New_ctor() ;

static inline ::System::IO::FileInfo* New_ctor(::StringW  fileName) ;

static inline ::System::IO::FileInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::IO::FileInfo* New_ctor(::StringW  originalPath, ::StringW  fullPath, ::StringW  fileName, bool  isNormalized) ;

/// @brief Method Open, addr 0x1816e7050, size 0xb0, virtual false, abstract: false, final false
inline ::System::IO::FileStream* Open(::System::IO::FileMode  mode, ::System::IO::FileAccess  access, ::System::IO::FileShare  share) ;

/// @brief Method OpenRead, addr 0x1816e6fc0, size 0x90, virtual false, abstract: false, final false
inline ::System::IO::FileStream* OpenRead() ;

/// @brief Method .ctor, addr 0x1816e73b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1816e7100, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::StringW  fileName) ;

/// @brief Method .ctor, addr 0x1816e71c0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x1816e72b0, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::StringW  originalPath, ::StringW  fullPath, ::StringW  fileName, bool  isNormalized) ;

/// @brief Method get_Directory, addr 0x1816e73f0, size 0x70, virtual false, abstract: false, final false
inline ::System::IO::DirectoryInfo* get_Directory() ;

/// @brief Method get_DirectoryName, addr 0x1816e73c0, size 0x30, virtual false, abstract: false, final false
inline ::StringW get_DirectoryName() ;

/// @brief Method get_Length, addr 0x1816e7460, size 0xe0, virtual false, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Name, addr 0x1802e0b30, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileInfo(FileInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileInfo(FileInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1638};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::IO::FileInfo) == 0x58, "Size mismatch!");

} // namespace end def System::IO
