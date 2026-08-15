#pragma once
// IWYU pragma private; include "System/IO/FileSystemInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileSystemInfo)
namespace GlobalNamespace {
struct NtDll_Interop_FILE_FULL_DIR_INFORMATION;
}
namespace System::IO::Enumeration {
struct FileSystemEntry;
}
namespace System::IO {
struct FileAttributes;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::IO {
class FileSystemInfo;
}
// Write type traits
MARK_REF_T(::System::IO::FileSystemInfo*);
DEFINE_IL2CPP_CLASS(::System::IO::FileSystemInfo*, "System.IO", "FileSystemInfo");
// Dependencies Interop::Kernel32::WIN32_FILE_ATTRIBUTE_DATA, System.MarshalByRefObject
namespace System::IO {
// Is value type: false
// CS Name: System.IO.FileSystemInfo
class CORDL_TYPE FileSystemInfo : public ::System::MarshalByRefObject {
public:
// Declarations
 __declspec(property(get=get_Attributes)) ::System::IO::FileAttributes  Attributes;

 __declspec(property(get=get_CreationTime)) ::System::DateTime  CreationTime;

 __declspec(property(get=get_CreationTimeCore)) ::System::DateTimeOffset  CreationTimeCore;

 __declspec(property(get=get_CreationTimeUtc)) ::System::DateTime  CreationTimeUtc;

 __declspec(property(get=get_Exists)) bool  Exists;

 __declspec(property(get=get_ExistsCore)) bool  ExistsCore;

 __declspec(property(get=get_Extension)) ::StringW  Extension;

 __declspec(property(get=get_FullName)) ::StringW  FullName;

/// @brief Field FullPath, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_FullPath, put=__cordl_internal_set_FullPath)) ::StringW  FullPath;

 __declspec(property(get=get_LengthCore)) int64_t  LengthCore;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NormalizedPath)) ::StringW  NormalizedPath;

/// @brief Field OriginalPath, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OriginalPath, put=__cordl_internal_set_OriginalPath)) ::StringW  OriginalPath;

/// @brief Field _data, offset 0x18, size 0x24 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA  _data;

/// @brief Field _dataInitialized, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__dataInitialized, put=__cordl_internal_set__dataInitialized)) int32_t  _dataInitialized;

/// @brief Field _name, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method Create, addr 0x1816eb720, size 0x180, virtual false, abstract: false, final false
static inline ::System::IO::FileSystemInfo* Create(::StringW  fullPath, ::by_ref<::System::IO::Enumeration::FileSystemEntry>  findData) ;

/// @brief Method EnsureDataInitialized, addr 0x1816eb8a0, size 0x60, virtual false, abstract: false, final false
inline void EnsureDataInitialized() ;

/// @brief Method GetObjectData, addr 0x1816eb900, size 0xe0, virtual true, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method Init, addr 0x1816eb9e0, size 0x40, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*  info) ;

/// @brief Method Invalidate, addr 0x1816e73b0, size 0x10, virtual false, abstract: false, final false
inline void Invalidate() ;

static inline ::System::IO::FileSystemInfo* New_ctor() ;

static inline ::System::IO::FileSystemInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method Refresh, addr 0x1816eba20, size 0x30, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method ToString, addr 0x1816eba50, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_FullPath() const;

constexpr ::StringW& __cordl_internal_get_FullPath() ;

constexpr ::StringW const& __cordl_internal_get_OriginalPath() const;

constexpr ::StringW& __cordl_internal_get_OriginalPath() ;

constexpr ::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA const& __cordl_internal_get__data() const;

constexpr ::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA& __cordl_internal_get__data() ;

constexpr int32_t const& __cordl_internal_get__dataInitialized() const;

constexpr int32_t& __cordl_internal_get__dataInitialized() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr void __cordl_internal_set_FullPath(::StringW  value) ;

constexpr void __cordl_internal_set_OriginalPath(::StringW  value) ;

constexpr void __cordl_internal_set__data(::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA  value) ;

constexpr void __cordl_internal_set__dataInitialized(int32_t  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

/// @brief Method .ctor, addr 0x1816e73b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1816e71c0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Attributes, addr 0x1816eba70, size 0x60, virtual false, abstract: false, final false
inline ::System::IO::FileAttributes get_Attributes() ;

/// @brief Method get_CreationTime, addr 0x1816ebbe0, size 0xa0, virtual false, abstract: false, final false
inline ::System::DateTime get_CreationTime() ;

/// @brief Method get_CreationTimeCore, addr 0x1816ebad0, size 0x80, virtual false, abstract: false, final false
inline ::System::DateTimeOffset get_CreationTimeCore() ;

/// @brief Method get_CreationTimeUtc, addr 0x1816ebb50, size 0x90, virtual false, abstract: false, final false
inline ::System::DateTime get_CreationTimeUtc() ;

/// @brief Method get_Exists, addr 0x1816ebcf0, size 0x70, virtual true, abstract: false, final false
inline bool get_Exists() ;

/// @brief Method get_ExistsCore, addr 0x1816ebc80, size 0x70, virtual false, abstract: false, final false
inline bool get_ExistsCore() ;

/// @brief Method get_Extension, addr 0x1816ebd60, size 0xc0, virtual false, abstract: false, final false
inline ::StringW get_Extension() ;

/// @brief Method get_FullName, addr 0x1802e5850, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_FullName() ;

/// @brief Method get_LengthCore, addr 0x1816ebe20, size 0x70, virtual false, abstract: false, final false
inline int64_t get_LengthCore() ;

/// @brief Method get_Name, addr 0x1802e0b30, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NormalizedPath, addr 0x1816ebe90, size 0x40, virtual false, abstract: false, final false
inline ::StringW get_NormalizedPath() ;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileSystemInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileSystemInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileSystemInfo(FileSystemInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileSystemInfo(FileSystemInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1639};

/// @brief Field _data, offset: 0x18, size: 0x24, def value: None
 ::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA  ____data;

/// @brief Field _dataInitialized, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____dataInitialized;

/// @brief Field FullPath, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___FullPath;

/// @brief Field OriginalPath, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___OriginalPath;

/// @brief Field _name, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::FileSystemInfo, ____data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileSystemInfo, ____dataInitialized) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileSystemInfo, ___FullPath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileSystemInfo, ___OriginalPath) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileSystemInfo, ____name) == 0x50, "Offset mismatch!");

static_assert(sizeof(::System::IO::FileSystemInfo) == 0x58, "Size mismatch!");

} // namespace end def System::IO
