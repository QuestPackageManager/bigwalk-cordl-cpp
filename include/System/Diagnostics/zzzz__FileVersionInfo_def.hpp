#pragma once
// IWYU pragma private; include "System/Diagnostics/FileVersionInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileVersionInfo)
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Diagnostics {
class FileVersionInfo;
}
// Write type traits
MARK_REF_T(::System::Diagnostics::FileVersionInfo*);
DEFINE_IL2CPP_CLASS(::System::Diagnostics::FileVersionInfo*, "System.Diagnostics", "FileVersionInfo");
// Dependencies System.Object
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.FileVersionInfo
class CORDL_TYPE FileVersionInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FileBuildPart)) int32_t  FileBuildPart;

 __declspec(property(get=get_FileMajorPart)) int32_t  FileMajorPart;

 __declspec(property(get=get_FileMinorPart)) int32_t  FileMinorPart;

 __declspec(property(get=get_FileName)) ::StringW  FileName;

 __declspec(property(get=get_ProductVersion)) ::StringW  ProductVersion;

/// @brief Field comments, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_comments, put=__cordl_internal_set_comments)) ::StringW  comments;

/// @brief Field companyname, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_companyname, put=__cordl_internal_set_companyname)) ::StringW  companyname;

/// @brief Field filebuildpart, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_filebuildpart, put=__cordl_internal_set_filebuildpart)) int32_t  filebuildpart;

/// @brief Field filedescription, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_filedescription, put=__cordl_internal_set_filedescription)) ::StringW  filedescription;

/// @brief Field filemajorpart, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_filemajorpart, put=__cordl_internal_set_filemajorpart)) int32_t  filemajorpart;

/// @brief Field fileminorpart, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fileminorpart, put=__cordl_internal_set_fileminorpart)) int32_t  fileminorpart;

/// @brief Field filename, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_filename, put=__cordl_internal_set_filename)) ::StringW  filename;

/// @brief Field fileprivatepart, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_fileprivatepart, put=__cordl_internal_set_fileprivatepart)) int32_t  fileprivatepart;

/// @brief Field fileversion, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_fileversion, put=__cordl_internal_set_fileversion)) ::StringW  fileversion;

/// @brief Field internalname, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_internalname, put=__cordl_internal_set_internalname)) ::StringW  internalname;

/// @brief Field isdebug, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_isdebug, put=__cordl_internal_set_isdebug)) bool  isdebug;

/// @brief Field ispatched, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_ispatched, put=__cordl_internal_set_ispatched)) bool  ispatched;

/// @brief Field isprerelease, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get_isprerelease, put=__cordl_internal_set_isprerelease)) bool  isprerelease;

/// @brief Field isprivatebuild, offset 0x83, size 0x1 
 __declspec(property(get=__cordl_internal_get_isprivatebuild, put=__cordl_internal_set_isprivatebuild)) bool  isprivatebuild;

/// @brief Field isspecialbuild, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_isspecialbuild, put=__cordl_internal_set_isspecialbuild)) bool  isspecialbuild;

/// @brief Field language, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_language, put=__cordl_internal_set_language)) ::StringW  language;

/// @brief Field legalcopyright, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_legalcopyright, put=__cordl_internal_set_legalcopyright)) ::StringW  legalcopyright;

/// @brief Field legaltrademarks, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_legaltrademarks, put=__cordl_internal_set_legaltrademarks)) ::StringW  legaltrademarks;

/// @brief Field originalfilename, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalfilename, put=__cordl_internal_set_originalfilename)) ::StringW  originalfilename;

/// @brief Field privatebuild, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_privatebuild, put=__cordl_internal_set_privatebuild)) ::StringW  privatebuild;

/// @brief Field productbuildpart, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_productbuildpart, put=__cordl_internal_set_productbuildpart)) int32_t  productbuildpart;

/// @brief Field productmajorpart, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_productmajorpart, put=__cordl_internal_set_productmajorpart)) int32_t  productmajorpart;

/// @brief Field productminorpart, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_productminorpart, put=__cordl_internal_set_productminorpart)) int32_t  productminorpart;

/// @brief Field productname, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_productname, put=__cordl_internal_set_productname)) ::StringW  productname;

/// @brief Field productprivatepart, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_productprivatepart, put=__cordl_internal_set_productprivatepart)) int32_t  productprivatepart;

/// @brief Field productversion, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_productversion, put=__cordl_internal_set_productversion)) ::StringW  productversion;

/// @brief Field specialbuild, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_specialbuild, put=__cordl_internal_set_specialbuild)) ::StringW  specialbuild;

/// @brief Method AppendFormat, addr 0x181dd9420, size 0x10, virtual false, abstract: false, final false
static inline void AppendFormat(::System::Text::StringBuilder*  sb, ::StringW  format, ::ArrayW<::System::Object*>  args) ;

/// @brief Method GetVersionInfo, addr 0x181dd9490, size 0x1c0, virtual false, abstract: false, final false
static inline ::System::Diagnostics::FileVersionInfo* GetVersionInfo(::StringW  fileName) ;

/// @brief Method GetVersionInfo_icall, addr 0x181dd9430, size 0x10, virtual false, abstract: false, final false
inline void GetVersionInfo_icall(char16_t*  fileName, int32_t  fileName_length) ;

/// @brief Method GetVersionInfo_internal, addr 0x181dd9440, size 0x50, virtual false, abstract: false, final false
inline void GetVersionInfo_internal(::StringW  fileName) ;

static inline ::System::Diagnostics::FileVersionInfo* New_ctor() ;

/// @brief Method ToString, addr 0x181dd9650, size 0x4f0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_comments() const;

constexpr ::StringW& __cordl_internal_get_comments() ;

constexpr ::StringW const& __cordl_internal_get_companyname() const;

constexpr ::StringW& __cordl_internal_get_companyname() ;

constexpr int32_t const& __cordl_internal_get_filebuildpart() const;

constexpr int32_t& __cordl_internal_get_filebuildpart() ;

constexpr ::StringW const& __cordl_internal_get_filedescription() const;

constexpr ::StringW& __cordl_internal_get_filedescription() ;

constexpr int32_t const& __cordl_internal_get_filemajorpart() const;

constexpr int32_t& __cordl_internal_get_filemajorpart() ;

constexpr int32_t const& __cordl_internal_get_fileminorpart() const;

constexpr int32_t& __cordl_internal_get_fileminorpart() ;

constexpr ::StringW const& __cordl_internal_get_filename() const;

constexpr ::StringW& __cordl_internal_get_filename() ;

constexpr int32_t const& __cordl_internal_get_fileprivatepart() const;

constexpr int32_t& __cordl_internal_get_fileprivatepart() ;

constexpr ::StringW const& __cordl_internal_get_fileversion() const;

constexpr ::StringW& __cordl_internal_get_fileversion() ;

constexpr ::StringW const& __cordl_internal_get_internalname() const;

constexpr ::StringW& __cordl_internal_get_internalname() ;

constexpr bool const& __cordl_internal_get_isdebug() const;

constexpr bool& __cordl_internal_get_isdebug() ;

constexpr bool const& __cordl_internal_get_ispatched() const;

constexpr bool& __cordl_internal_get_ispatched() ;

constexpr bool const& __cordl_internal_get_isprerelease() const;

constexpr bool& __cordl_internal_get_isprerelease() ;

constexpr bool const& __cordl_internal_get_isprivatebuild() const;

constexpr bool& __cordl_internal_get_isprivatebuild() ;

constexpr bool const& __cordl_internal_get_isspecialbuild() const;

constexpr bool& __cordl_internal_get_isspecialbuild() ;

constexpr ::StringW const& __cordl_internal_get_language() const;

constexpr ::StringW& __cordl_internal_get_language() ;

constexpr ::StringW const& __cordl_internal_get_legalcopyright() const;

constexpr ::StringW& __cordl_internal_get_legalcopyright() ;

constexpr ::StringW const& __cordl_internal_get_legaltrademarks() const;

constexpr ::StringW& __cordl_internal_get_legaltrademarks() ;

constexpr ::StringW const& __cordl_internal_get_originalfilename() const;

constexpr ::StringW& __cordl_internal_get_originalfilename() ;

constexpr ::StringW const& __cordl_internal_get_privatebuild() const;

constexpr ::StringW& __cordl_internal_get_privatebuild() ;

constexpr int32_t const& __cordl_internal_get_productbuildpart() const;

constexpr int32_t& __cordl_internal_get_productbuildpart() ;

constexpr int32_t const& __cordl_internal_get_productmajorpart() const;

constexpr int32_t& __cordl_internal_get_productmajorpart() ;

constexpr int32_t const& __cordl_internal_get_productminorpart() const;

constexpr int32_t& __cordl_internal_get_productminorpart() ;

constexpr ::StringW const& __cordl_internal_get_productname() const;

constexpr ::StringW& __cordl_internal_get_productname() ;

constexpr int32_t const& __cordl_internal_get_productprivatepart() const;

constexpr int32_t& __cordl_internal_get_productprivatepart() ;

constexpr ::StringW const& __cordl_internal_get_productversion() const;

constexpr ::StringW& __cordl_internal_get_productversion() ;

constexpr ::StringW const& __cordl_internal_get_specialbuild() const;

constexpr ::StringW& __cordl_internal_get_specialbuild() ;

constexpr void __cordl_internal_set_comments(::StringW  value) ;

constexpr void __cordl_internal_set_companyname(::StringW  value) ;

constexpr void __cordl_internal_set_filebuildpart(int32_t  value) ;

constexpr void __cordl_internal_set_filedescription(::StringW  value) ;

constexpr void __cordl_internal_set_filemajorpart(int32_t  value) ;

constexpr void __cordl_internal_set_fileminorpart(int32_t  value) ;

constexpr void __cordl_internal_set_filename(::StringW  value) ;

constexpr void __cordl_internal_set_fileprivatepart(int32_t  value) ;

constexpr void __cordl_internal_set_fileversion(::StringW  value) ;

constexpr void __cordl_internal_set_internalname(::StringW  value) ;

constexpr void __cordl_internal_set_isdebug(bool  value) ;

constexpr void __cordl_internal_set_ispatched(bool  value) ;

constexpr void __cordl_internal_set_isprerelease(bool  value) ;

constexpr void __cordl_internal_set_isprivatebuild(bool  value) ;

constexpr void __cordl_internal_set_isspecialbuild(bool  value) ;

constexpr void __cordl_internal_set_language(::StringW  value) ;

constexpr void __cordl_internal_set_legalcopyright(::StringW  value) ;

constexpr void __cordl_internal_set_legaltrademarks(::StringW  value) ;

constexpr void __cordl_internal_set_originalfilename(::StringW  value) ;

constexpr void __cordl_internal_set_privatebuild(::StringW  value) ;

constexpr void __cordl_internal_set_productbuildpart(int32_t  value) ;

constexpr void __cordl_internal_set_productmajorpart(int32_t  value) ;

constexpr void __cordl_internal_set_productminorpart(int32_t  value) ;

constexpr void __cordl_internal_set_productname(::StringW  value) ;

constexpr void __cordl_internal_set_productprivatepart(int32_t  value) ;

constexpr void __cordl_internal_set_productversion(::StringW  value) ;

constexpr void __cordl_internal_set_specialbuild(::StringW  value) ;

/// @brief Method .ctor, addr 0x181dd9b40, size 0x120, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FileBuildPart, addr 0x1805d4730, size 0x10, virtual false, abstract: false, final false
inline int32_t get_FileBuildPart() ;

/// @brief Method get_FileMajorPart, addr 0x180310fd0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_FileMajorPart() ;

/// @brief Method get_FileMinorPart, addr 0x180bb89c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_FileMinorPart() ;

/// @brief Method get_FileName, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_FileName() ;

/// @brief Method get_ProductVersion, addr 0x18039fe40, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_ProductVersion() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileVersionInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileVersionInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileVersionInfo(FileVersionInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileVersionInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileVersionInfo(FileVersionInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11610};

/// @brief Field comments, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___comments;

/// @brief Field companyname, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___companyname;

/// @brief Field filedescription, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___filedescription;

/// @brief Field filename, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___filename;

/// @brief Field fileversion, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___fileversion;

/// @brief Field internalname, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___internalname;

/// @brief Field language, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___language;

/// @brief Field legalcopyright, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___legalcopyright;

/// @brief Field legaltrademarks, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___legaltrademarks;

/// @brief Field originalfilename, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___originalfilename;

/// @brief Field privatebuild, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___privatebuild;

/// @brief Field productname, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___productname;

/// @brief Field productversion, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___productversion;

/// @brief Field specialbuild, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___specialbuild;

/// @brief Field isdebug, offset: 0x80, size: 0x1, def value: None
 bool  ___isdebug;

/// @brief Field ispatched, offset: 0x81, size: 0x1, def value: None
 bool  ___ispatched;

/// @brief Field isprerelease, offset: 0x82, size: 0x1, def value: None
 bool  ___isprerelease;

/// @brief Field isprivatebuild, offset: 0x83, size: 0x1, def value: None
 bool  ___isprivatebuild;

/// @brief Field isspecialbuild, offset: 0x84, size: 0x1, def value: None
 bool  ___isspecialbuild;

/// @brief Field filemajorpart, offset: 0x88, size: 0x4, def value: None
 int32_t  ___filemajorpart;

/// @brief Field fileminorpart, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___fileminorpart;

/// @brief Field filebuildpart, offset: 0x90, size: 0x4, def value: None
 int32_t  ___filebuildpart;

/// @brief Field fileprivatepart, offset: 0x94, size: 0x4, def value: None
 int32_t  ___fileprivatepart;

/// @brief Field productmajorpart, offset: 0x98, size: 0x4, def value: None
 int32_t  ___productmajorpart;

/// @brief Field productminorpart, offset: 0x9c, size: 0x4, def value: None
 int32_t  ___productminorpart;

/// @brief Field productbuildpart, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___productbuildpart;

/// @brief Field productprivatepart, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___productprivatepart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___comments) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___companyname) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___filedescription) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___filename) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___fileversion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___internalname) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___language) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___legalcopyright) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___legaltrademarks) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___originalfilename) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___privatebuild) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___productname) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___productversion) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___specialbuild) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___isdebug) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___ispatched) == 0x81, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___isprerelease) == 0x82, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___isprivatebuild) == 0x83, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___isspecialbuild) == 0x84, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___filemajorpart) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___fileminorpart) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___filebuildpart) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___fileprivatepart) == 0x94, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___productmajorpart) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___productminorpart) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___productbuildpart) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::FileVersionInfo, ___productprivatepart) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::System::Diagnostics::FileVersionInfo) == 0xa8, "Size mismatch!");

} // namespace end def System::Diagnostics
