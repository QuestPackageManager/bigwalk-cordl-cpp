#pragma once
// IWYU pragma private; include "System/IO/File.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(File)
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
class StreamReader;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::IO {
class File;
}
// Write type traits
MARK_REF_T(::System::IO::File*);
DEFINE_IL2CPP_CLASS(::System::IO::File*, "System.IO", "File");
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.File
class CORDL_TYPE File : public ::System::Object {
public:
// Declarations
/// @brief Method Create, addr 0x1816d56b0, size 0x60, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* Create(::StringW  path) ;

/// @brief Method Create, addr 0x1816d5650, size 0x60, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* Create(::StringW  path, int32_t  bufferSize) ;

/// @brief Method Delete, addr 0x1816d5710, size 0x80, virtual false, abstract: false, final false
static inline void Delete(::StringW  path) ;

/// @brief Method Exists, addr 0x1816d5790, size 0xc0, virtual false, abstract: false, final false
static inline bool Exists(::StringW  path) ;

/// @brief Method InternalReadAllText, addr 0x1816d5850, size 0x1d0, virtual false, abstract: false, final false
static inline ::StringW InternalReadAllText(::StringW  path, ::System::Text::Encoding*  encoding) ;

/// @brief Method InternalWriteAllBytes, addr 0x1816d5a20, size 0xf0, virtual false, abstract: false, final false
static inline void InternalWriteAllBytes(::StringW  path, ::ArrayW<uint8_t>  bytes) ;

/// @brief Method Move, addr 0x1816d5b10, size 0x190, virtual false, abstract: false, final false
static inline void Move(::StringW  sourceFileName, ::StringW  destFileName) ;

/// @brief Method Open, addr 0x1816d5e40, size 0x70, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* Open(::StringW  path, ::System::IO::FileMode  mode) ;

/// @brief Method Open, addr 0x1816d5eb0, size 0x70, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* Open(::StringW  path, ::System::IO::FileMode  mode, ::System::IO::FileAccess  access, ::System::IO::FileShare  share) ;

/// @brief Method OpenRead, addr 0x1816d5ca0, size 0x60, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* OpenRead(::StringW  path) ;

/// @brief Method OpenText, addr 0x1816d5d00, size 0x140, virtual false, abstract: false, final false
static inline ::System::IO::StreamReader* OpenText(::StringW  path) ;

/// @brief Method ReadAllBytes, addr 0x1816d6260, size 0x1e0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ReadAllBytes(::StringW  path) ;

/// @brief Method ReadAllBytesUnknownLength, addr 0x1816d5f20, size 0x340, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ReadAllBytesUnknownLength(::System::IO::FileStream*  fs) ;

/// @brief Method ReadAllText, addr 0x1816d6440, size 0x60, virtual false, abstract: false, final false
static inline ::StringW ReadAllText(::StringW  path) ;

/// @brief Method WriteAllBytes, addr 0x1816d64a0, size 0x70, virtual false, abstract: false, final false
static inline void WriteAllBytes(::StringW  path, ::ArrayW<uint8_t>  bytes) ;

/// @brief Method WriteAllText, addr 0x1816d6510, size 0x120, virtual false, abstract: false, final false
static inline void WriteAllText(::StringW  path, ::StringW  contents) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr File() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "File", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
File(File && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "File", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
File(File const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1637};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::IO::File) == 0x10, "Size mismatch!");

} // namespace end def System::IO
