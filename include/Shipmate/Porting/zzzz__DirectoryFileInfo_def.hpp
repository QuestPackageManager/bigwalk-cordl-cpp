#pragma once
// IWYU pragma private; include "Shipmate/Porting/DirectoryFileInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmate/Porting/zzzz__EFileEntryType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DirectoryFileInfo)
// Forward declare root types
namespace Shipmate::Porting {
class DirectoryFileInfo;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::DirectoryFileInfo*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::DirectoryFileInfo*, "Shipmate.Porting", "DirectoryFileInfo");
// Dependencies Shipmate.Porting.EFileEntryType, System.Object
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.DirectoryFileInfo
class CORDL_TYPE DirectoryFileInfo : public ::System::Object {
public:
// Declarations
/// @brief Field fileName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_fileName, put=__cordl_internal_set_fileName)) ::StringW  fileName;

/// @brief Field fileType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_fileType, put=__cordl_internal_set_fileType)) ::Shipmate::Porting::EFileEntryType  fileType;

static inline ::Shipmate::Porting::DirectoryFileInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_fileName() const;

constexpr ::StringW& __cordl_internal_get_fileName() ;

constexpr ::Shipmate::Porting::EFileEntryType const& __cordl_internal_get_fileType() const;

constexpr ::Shipmate::Porting::EFileEntryType& __cordl_internal_get_fileType() ;

constexpr void __cordl_internal_set_fileName(::StringW  value) ;

constexpr void __cordl_internal_set_fileType(::Shipmate::Porting::EFileEntryType  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DirectoryFileInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DirectoryFileInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectoryFileInfo(DirectoryFileInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectoryFileInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectoryFileInfo(DirectoryFileInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20627};

/// @brief Field fileType, offset: 0x10, size: 0x4, def value: None
 ::Shipmate::Porting::EFileEntryType  ___fileType;

/// @brief Field fileName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___fileName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::DirectoryFileInfo, ___fileType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::DirectoryFileInfo, ___fileName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::DirectoryFileInfo) == 0x20, "Size mismatch!");

} // namespace end def Shipmate::Porting
