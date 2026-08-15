#pragma once
// IWYU pragma private; include "PlayEveryWare/Common/Extensions/FileInfoExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileInfoExtensions)
namespace System::IO {
class FileInfo;
}
// Forward declare root types
namespace PlayEveryWare::Common::Extensions {
class FileInfoExtensions;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::Common::Extensions::FileInfoExtensions*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::Common::Extensions::FileInfoExtensions*, "PlayEveryWare.Common.Extensions", "FileInfoExtensions");
// Dependencies System.Object
namespace PlayEveryWare::Common::Extensions {
// Is value type: false
// CS Name: PlayEveryWare.Common.Extensions.FileInfoExtensions
class CORDL_TYPE FileInfoExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method AreContentsSemanticallyEqual, addr 0x18053f5c0, size 0x3b0, virtual false, abstract: false, final false
static inline bool AreContentsSemanticallyEqual(::System::IO::FileInfo*  fileInfo, ::System::IO::FileInfo*  other) ;

/// @brief Method ComputeSHA, addr 0x18053f970, size 0x230, virtual false, abstract: false, final false
static inline ::StringW ComputeSHA(::System::IO::FileInfo*  fileInfo) ;

/// @brief Method LogInequalityReason, addr 0x18053fba0, size 0x120, virtual false, abstract: false, final false
static inline void LogInequalityReason(::System::IO::FileInfo*  one, ::System::IO::FileInfo*  two, ::StringW  reason) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileInfoExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileInfoExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileInfoExtensions(FileInfoExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileInfoExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileInfoExtensions(FileInfoExtensions const& ) = delete;

/// @brief Field ReadBytesBufferSize offset 0xffffffff size 0x4
static constexpr int32_t  ReadBytesBufferSize{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18799};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::Common::Extensions::FileInfoExtensions) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::Common::Extensions
