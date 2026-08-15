#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Interop)
namespace GlobalNamespace {
struct BCrypt_Interop_NTSTATUS;
}
namespace GlobalNamespace {
struct IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS;
}
namespace GlobalNamespace {
class Interop_Advapi32;
}
namespace GlobalNamespace {
class Interop_BCrypt;
}
namespace GlobalNamespace {
struct Interop_BOOLEAN;
}
namespace GlobalNamespace {
struct Interop_BOOL;
}
namespace GlobalNamespace {
class Interop_Kernel32;
}
namespace GlobalNamespace {
struct Interop_LongFileTime;
}
namespace GlobalNamespace {
class Interop_NtDll;
}
namespace GlobalNamespace {
struct Interop_UNICODE_STRING;
}
namespace GlobalNamespace {
class Interop_User32;
}
namespace GlobalNamespace {
struct Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS;
}
namespace GlobalNamespace {
struct Kernel32_Interop_FILE_TIME;
}
namespace GlobalNamespace {
struct Kernel32_Interop_FINDEX_INFO_LEVELS;
}
namespace GlobalNamespace {
struct Kernel32_Interop_FINDEX_SEARCH_OPS;
}
namespace GlobalNamespace {
struct Kernel32_Interop_GET_FILEEX_INFO_LEVELS;
}
namespace GlobalNamespace {
struct Kernel32_Interop_REG_TZI_FORMAT;
}
namespace GlobalNamespace {
struct Kernel32_Interop_SECURITY_ATTRIBUTES;
}
namespace GlobalNamespace {
struct Kernel32_Interop_SYSTEMTIME;
}
namespace GlobalNamespace {
struct Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION;
}
namespace GlobalNamespace {
struct Kernel32_Interop_TIME_ZONE_INFORMATION;
}
namespace GlobalNamespace {
struct Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA;
}
namespace GlobalNamespace {
struct Kernel32_Interop_WIN32_FIND_DATA;
}
namespace GlobalNamespace {
struct NtDll_Interop_CreateDisposition;
}
namespace GlobalNamespace {
struct NtDll_Interop_CreateOptions;
}
namespace GlobalNamespace {
struct NtDll_Interop_DesiredAccess;
}
namespace GlobalNamespace {
struct NtDll_Interop_FILE_FULL_DIR_INFORMATION;
}
namespace GlobalNamespace {
struct NtDll_Interop_FILE_INFORMATION_CLASS;
}
namespace GlobalNamespace {
struct NtDll_Interop_IO_STATUS_BLOCK;
}
namespace GlobalNamespace {
struct NtDll_Interop_OBJECT_ATTRIBUTES;
}
namespace GlobalNamespace {
struct NtDll_Interop_ObjectAttributes;
}
namespace GlobalNamespace {
struct TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer;
}
namespace GlobalNamespace {
struct TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer;
}
namespace GlobalNamespace {
struct TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer;
}
namespace GlobalNamespace {
struct TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer;
}
namespace GlobalNamespace {
struct TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer;
}
namespace GlobalNamespace {
struct WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer;
}
namespace GlobalNamespace {
struct WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer;
}
namespace Microsoft::Win32::SafeHandles {
class SafeFindHandle;
}
namespace Microsoft::Win32::SafeHandles {
class SafeLibraryHandle;
}
namespace Microsoft::Win32::SafeHandles {
class SafeRegistryHandle;
}
namespace System::IO {
struct FileAttributes;
}
namespace System::IO {
struct FileMode;
}
namespace System::IO {
struct FileShare;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct BCrypt_Interop_NTSTATUS;
}
namespace GlobalNamespace {
struct Interop_BOOL;
}
namespace GlobalNamespace {
struct Interop_BOOLEAN;
}
namespace GlobalNamespace {
struct Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS;
}
namespace GlobalNamespace {
struct Kernel32_Interop_FINDEX_INFO_LEVELS;
}
namespace GlobalNamespace {
struct Kernel32_Interop_FINDEX_SEARCH_OPS;
}
namespace GlobalNamespace {
struct Kernel32_Interop_GET_FILEEX_INFO_LEVELS;
}
namespace GlobalNamespace {
struct NtDll_Interop_CreateDisposition;
}
namespace GlobalNamespace {
struct NtDll_Interop_CreateOptions;
}
namespace GlobalNamespace {
struct NtDll_Interop_DesiredAccess;
}
namespace GlobalNamespace {
struct NtDll_Interop_FILE_INFORMATION_CLASS;
}
namespace GlobalNamespace {
struct NtDll_Interop_ObjectAttributes;
}
namespace GlobalNamespace {
class Interop;
}
namespace GlobalNamespace {
class Interop_Advapi32;
}
namespace GlobalNamespace {
class Interop_BCrypt;
}
namespace GlobalNamespace {
class Interop_Kernel32;
}
namespace GlobalNamespace {
class Interop_NtDll;
}
namespace GlobalNamespace {
class Interop_User32;
}
namespace GlobalNamespace {
struct IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS;
}
namespace GlobalNamespace {
struct Interop_LongFileTime;
}
namespace GlobalNamespace {
struct Interop_UNICODE_STRING;
}
namespace GlobalNamespace {
struct Kernel32_Interop_FILE_TIME;
}
namespace GlobalNamespace {
struct Kernel32_Interop_REG_TZI_FORMAT;
}
namespace GlobalNamespace {
struct Kernel32_Interop_SECURITY_ATTRIBUTES;
}
namespace GlobalNamespace {
struct Kernel32_Interop_SYSTEMTIME;
}
namespace GlobalNamespace {
struct Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION;
}
namespace GlobalNamespace {
struct Kernel32_Interop_TIME_ZONE_INFORMATION;
}
namespace GlobalNamespace {
struct Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA;
}
namespace GlobalNamespace {
struct Kernel32_Interop_WIN32_FIND_DATA;
}
namespace GlobalNamespace {
struct NtDll_Interop_FILE_FULL_DIR_INFORMATION;
}
namespace GlobalNamespace {
struct NtDll_Interop_IO_STATUS_BLOCK;
}
namespace GlobalNamespace {
struct NtDll_Interop_OBJECT_ATTRIBUTES;
}
namespace GlobalNamespace {
struct TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer;
}
namespace GlobalNamespace {
struct TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer;
}
namespace GlobalNamespace {
struct TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer;
}
namespace GlobalNamespace {
struct TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer;
}
namespace GlobalNamespace {
struct TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer;
}
namespace GlobalNamespace {
struct WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer;
}
namespace GlobalNamespace {
struct WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BCrypt_Interop_NTSTATUS);
MARK_VAL_T(::GlobalNamespace::Interop_BOOL);
MARK_VAL_T(::GlobalNamespace::Interop_BOOLEAN);
MARK_VAL_T(::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS);
MARK_VAL_T(::GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS);
MARK_VAL_T(::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS);
MARK_VAL_T(::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS);
MARK_VAL_T(::GlobalNamespace::NtDll_Interop_CreateDisposition);
MARK_VAL_T(::GlobalNamespace::NtDll_Interop_CreateOptions);
MARK_VAL_T(::GlobalNamespace::NtDll_Interop_DesiredAccess);
MARK_VAL_T(::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS);
MARK_VAL_T(::GlobalNamespace::NtDll_Interop_ObjectAttributes);
MARK_REF_T(::GlobalNamespace::Interop*);
MARK_REF_T(::GlobalNamespace::Interop_Advapi32*);
MARK_REF_T(::GlobalNamespace::Interop_BCrypt*);
MARK_REF_T(::GlobalNamespace::Interop_Kernel32*);
MARK_REF_T(::GlobalNamespace::Interop_NtDll*);
MARK_REF_T(::GlobalNamespace::Interop_User32*);
MARK_VAL_T(::GlobalNamespace::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS);
MARK_VAL_T(::GlobalNamespace::Interop_LongFileTime);
MARK_VAL_T(::GlobalNamespace::Interop_UNICODE_STRING);
MARK_VAL_T(::GlobalNamespace::Kernel32_Interop_FILE_TIME);
MARK_VAL_T(::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT);
MARK_VAL_T(::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES);
MARK_VAL_T(::GlobalNamespace::Kernel32_Interop_SYSTEMTIME);
MARK_VAL_T(::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION);
MARK_VAL_T(::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION);
MARK_VAL_T(::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA);
MARK_VAL_T(::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA);
MARK_VAL_T(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION);
MARK_VAL_T(::GlobalNamespace::NtDll_Interop_IO_STATUS_BLOCK);
MARK_VAL_T(::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES);
MARK_VAL_T(::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer);
MARK_VAL_T(::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer);
MARK_VAL_T(::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer);
MARK_VAL_T(::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer);
MARK_VAL_T(::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer);
MARK_VAL_T(::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer);
MARK_VAL_T(::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BCrypt_Interop_NTSTATUS, "", "Interop/BCrypt/NTSTATUS");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Interop_BOOL, "", "Interop/BOOL");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Interop_BOOLEAN, "", "Interop/BOOLEAN");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS, "", "Interop/Kernel32/FILE_INFO_BY_HANDLE_CLASS");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS, "", "Interop/Kernel32/FINDEX_INFO_LEVELS");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS, "", "Interop/Kernel32/FINDEX_SEARCH_OPS");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS, "", "Interop/Kernel32/GET_FILEEX_INFO_LEVELS");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NtDll_Interop_CreateDisposition, "", "Interop/NtDll/CreateDisposition");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NtDll_Interop_CreateOptions, "", "Interop/NtDll/CreateOptions");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NtDll_Interop_DesiredAccess, "", "Interop/NtDll/DesiredAccess");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS, "", "Interop/NtDll/FILE_INFORMATION_CLASS");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NtDll_Interop_ObjectAttributes, "", "Interop/NtDll/ObjectAttributes");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Interop*, "", "Interop");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Interop_Advapi32*, "", "Interop/Advapi32");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Interop_BCrypt*, "", "Interop/BCrypt");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Interop_Kernel32*, "", "Interop/Kernel32");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Interop_NtDll*, "", "Interop/NtDll");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Interop_User32*, "", "Interop/User32");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS, "", "Interop/NtDll/IO_STATUS_BLOCK/IO_STATUS");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Interop_LongFileTime, "", "Interop/LongFileTime");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Interop_UNICODE_STRING, "", "Interop/UNICODE_STRING");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Kernel32_Interop_FILE_TIME, "", "Interop/Kernel32/FILE_TIME");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT, "", "Interop/Kernel32/REG_TZI_FORMAT");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES, "", "Interop/Kernel32/SECURITY_ATTRIBUTES");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Kernel32_Interop_SYSTEMTIME, "", "Interop/Kernel32/SYSTEMTIME");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION, "", "Interop/Kernel32/TIME_DYNAMIC_ZONE_INFORMATION");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION, "", "Interop/Kernel32/TIME_ZONE_INFORMATION");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA, "", "Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA, "", "Interop/Kernel32/WIN32_FIND_DATA");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION, "", "Interop/NtDll/FILE_FULL_DIR_INFORMATION");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NtDll_Interop_IO_STATUS_BLOCK, "", "Interop/NtDll/IO_STATUS_BLOCK");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES, "", "Interop/NtDll/OBJECT_ATTRIBUTES");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer, "", "Interop/Kernel32/TIME_DYNAMIC_ZONE_INFORMATION/<DaylightName>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer, "", "Interop/Kernel32/TIME_DYNAMIC_ZONE_INFORMATION/<StandardName>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer, "", "Interop/Kernel32/TIME_DYNAMIC_ZONE_INFORMATION/<TimeZoneKeyName>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer, "", "Interop/Kernel32/TIME_ZONE_INFORMATION/<DaylightName>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer, "", "Interop/Kernel32/TIME_ZONE_INFORMATION/<StandardName>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer, "", "Interop/Kernel32/WIN32_FIND_DATA/<_cAlternateFileName>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer, "", "Interop/Kernel32/WIN32_FIND_DATA/<_cFileName>e__FixedBuffer");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/WIN32_FIND_DATA/<_cFileName>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: None }]
constexpr WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer(char16_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x208};

/// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
 char16_t  FixedElementField;

/// @brief Size padding 0x208 - 0x2 = 0x206, packed as 0x206
 uint8_t  _cordl_size_padding[0x206];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer) == 0x208, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/WIN32_FIND_DATA/<_cAlternateFileName>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: None }]
constexpr WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer(char16_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
 char16_t  FixedElementField;

/// @brief Size padding 0x1c - 0x2 = 0x1a, packed as 0x1a
 uint8_t  _cordl_size_padding[0x1a];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/FILE_TIME
struct CORDL_TYPE Kernel32_Interop_FILE_TIME {
public:
// Declarations
/// @brief Method ToDateTimeOffset, addr 0x1815c1ef0, size 0x60, virtual false, abstract: false, final false
inline ::System::DateTimeOffset ToDateTimeOffset() ;

/// @brief Method ToTicks, addr 0x1815c1f50, size 0x20, virtual false, abstract: false, final false
inline int64_t ToTicks() ;

// Ctor Parameters []
// @brief default ctor
constexpr Kernel32_Interop_FILE_TIME() ;

// Ctor Parameters [CppParam { name: "dwLowDateTime", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "dwHighDateTime", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Kernel32_Interop_FILE_TIME(uint32_t  dwLowDateTime, uint32_t  dwHighDateTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field dwLowDateTime, offset: 0x0, size: 0x4, def value: None
 uint32_t  dwLowDateTime;

/// @brief Field dwHighDateTime, offset: 0x4, size: 0x4, def value: None
 uint32_t  dwHighDateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_FILE_TIME, dwLowDateTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_FILE_TIME, dwHighDateTime) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Kernel32_Interop_FILE_TIME) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Interop::Kernel32::FILE_TIME, Interop::Kernel32::WIN32_FIND_DATA::<_cAlternateFileName>e__FixedBuffer, Interop::Kernel32::WIN32_FIND_DATA::<_cFileName>e__FixedBuffer
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/WIN32_FIND_DATA
struct CORDL_TYPE Kernel32_Interop_WIN32_FIND_DATA {
public:
// Declarations
using __cAlternateFileName_e__FixedBuffer = ::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer;

using __cFileName_e__FixedBuffer = ::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer;

 __declspec(property(get=get_cFileName)) ::System::ReadOnlySpan_1<char16_t>  cFileName;

/// @brief Method SetFileName, addr 0x1815d2830, size 0x80, virtual false, abstract: false, final false
inline void SetFileName(::StringW  fileName) ;

/// @brief Method get_cFileName, addr 0x1815d28b0, size 0x1b0, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<char16_t> get_cFileName() ;

// Ctor Parameters []
// @brief default ctor
constexpr Kernel32_Interop_WIN32_FIND_DATA() ;

// Ctor Parameters [CppParam { name: "dwFileAttributes", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ftCreationTime", ty: "::GlobalNamespace::Kernel32_Interop_FILE_TIME", modifiers: "", def_value: None }, CppParam { name: "ftLastAccessTime", ty: "::GlobalNamespace::Kernel32_Interop_FILE_TIME", modifiers: "", def_value: None }, CppParam { name: "ftLastWriteTime", ty: "::GlobalNamespace::Kernel32_Interop_FILE_TIME", modifiers: "", def_value: None }, CppParam { name: "nFileSizeHigh", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nFileSizeLow", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "dwReserved0", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "dwReserved1", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_cFileName", ty: "::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "_cAlternateFileName", ty: "::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr Kernel32_Interop_WIN32_FIND_DATA(uint32_t  dwFileAttributes, ::GlobalNamespace::Kernel32_Interop_FILE_TIME  ftCreationTime, ::GlobalNamespace::Kernel32_Interop_FILE_TIME  ftLastAccessTime, ::GlobalNamespace::Kernel32_Interop_FILE_TIME  ftLastWriteTime, uint32_t  nFileSizeHigh, uint32_t  nFileSizeLow, uint32_t  dwReserved0, uint32_t  dwReserved1, ::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer  _cFileName, ::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer  _cAlternateFileName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x250};

/// @brief Field dwFileAttributes, offset: 0x0, size: 0x4, def value: None
 uint32_t  dwFileAttributes;

/// @brief Field ftCreationTime, offset: 0x4, size: 0x8, def value: None
 ::GlobalNamespace::Kernel32_Interop_FILE_TIME  ftCreationTime;

/// @brief Field ftLastAccessTime, offset: 0xc, size: 0x8, def value: None
 ::GlobalNamespace::Kernel32_Interop_FILE_TIME  ftLastAccessTime;

/// @brief Field ftLastWriteTime, offset: 0x14, size: 0x8, def value: None
 ::GlobalNamespace::Kernel32_Interop_FILE_TIME  ftLastWriteTime;

/// @brief Field nFileSizeHigh, offset: 0x1c, size: 0x4, def value: None
 uint32_t  nFileSizeHigh;

/// @brief Field nFileSizeLow, offset: 0x20, size: 0x4, def value: None
 uint32_t  nFileSizeLow;

/// @brief Field dwReserved0, offset: 0x24, size: 0x4, def value: None
 uint32_t  dwReserved0;

/// @brief Field dwReserved1, offset: 0x28, size: 0x4, def value: None
 uint32_t  dwReserved1;

/// @brief Field _cFileName, offset: 0x2c, size: 0x208, def value: None
 ::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer  _cFileName;

/// @brief Field _cAlternateFileName, offset: 0x234, size: 0x1c, def value: None
 ::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer  _cAlternateFileName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA, dwFileAttributes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA, ftCreationTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA, ftLastAccessTime) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA, ftLastWriteTime) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA, nFileSizeHigh) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA, nFileSizeLow) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA, dwReserved0) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA, dwReserved1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA, _cFileName) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA, _cAlternateFileName) == 0x234, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA) == 0x250, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/SYSTEMTIME
struct CORDL_TYPE Kernel32_Interop_SYSTEMTIME {
public:
// Declarations
/// @brief Method Equals, addr 0x1815c95a0, size 0x70, virtual false, abstract: false, final false
inline bool Equals(::by_ref<::GlobalNamespace::Kernel32_Interop_SYSTEMTIME>  other) ;

// Ctor Parameters []
// @brief default ctor
constexpr Kernel32_Interop_SYSTEMTIME() ;

// Ctor Parameters [CppParam { name: "Year", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Month", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "DayOfWeek", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Day", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Hour", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Minute", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Second", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Milliseconds", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr Kernel32_Interop_SYSTEMTIME(uint16_t  Year, uint16_t  Month, uint16_t  DayOfWeek, uint16_t  Day, uint16_t  Hour, uint16_t  Minute, uint16_t  Second, uint16_t  Milliseconds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Year, offset: 0x0, size: 0x2, def value: None
 uint16_t  Year;

/// @brief Field Month, offset: 0x2, size: 0x2, def value: None
 uint16_t  Month;

/// @brief Field DayOfWeek, offset: 0x4, size: 0x2, def value: None
 uint16_t  DayOfWeek;

/// @brief Field Day, offset: 0x6, size: 0x2, def value: None
 uint16_t  Day;

/// @brief Field Hour, offset: 0x8, size: 0x2, def value: None
 uint16_t  Hour;

/// @brief Field Minute, offset: 0xa, size: 0x2, def value: None
 uint16_t  Minute;

/// @brief Field Second, offset: 0xc, size: 0x2, def value: None
 uint16_t  Second;

/// @brief Field Milliseconds, offset: 0xe, size: 0x2, def value: None
 uint16_t  Milliseconds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_SYSTEMTIME, Year) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_SYSTEMTIME, Month) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_SYSTEMTIME, DayOfWeek) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_SYSTEMTIME, Day) == 0x6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_SYSTEMTIME, Hour) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_SYSTEMTIME, Minute) == 0xa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_SYSTEMTIME, Second) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_SYSTEMTIME, Milliseconds) == 0xe, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Kernel32_Interop_SYSTEMTIME) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Interop::Kernel32::SYSTEMTIME
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/REG_TZI_FORMAT
struct CORDL_TYPE Kernel32_Interop_REG_TZI_FORMAT {
public:
// Declarations
/// @brief Method .ctor, addr 0x1815c8d20, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  tzi) ;

// Ctor Parameters []
// @brief default ctor
constexpr Kernel32_Interop_REG_TZI_FORMAT() ;

// Ctor Parameters [CppParam { name: "Bias", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "StandardBias", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DaylightBias", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "StandardDate", ty: "::GlobalNamespace::Kernel32_Interop_SYSTEMTIME", modifiers: "", def_value: None }, CppParam { name: "DaylightDate", ty: "::GlobalNamespace::Kernel32_Interop_SYSTEMTIME", modifiers: "", def_value: None }]
constexpr Kernel32_Interop_REG_TZI_FORMAT(int32_t  Bias, int32_t  StandardBias, int32_t  DaylightBias, ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME  StandardDate, ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME  DaylightDate) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field Bias, offset: 0x0, size: 0x4, def value: None
 int32_t  Bias;

/// @brief Field StandardBias, offset: 0x4, size: 0x4, def value: None
 int32_t  StandardBias;

/// @brief Field DaylightBias, offset: 0x8, size: 0x4, def value: None
 int32_t  DaylightBias;

/// @brief Field StandardDate, offset: 0xc, size: 0x10, def value: None
 ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME  StandardDate;

/// @brief Field DaylightDate, offset: 0x1c, size: 0x10, def value: None
 ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME  DaylightDate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT, Bias) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT, StandardBias) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT, DaylightBias) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT, StandardDate) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT, DaylightDate) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT) == 0x2c, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/TIME_DYNAMIC_ZONE_INFORMATION/<StandardName>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: None }]
constexpr TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer(char16_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
 char16_t  FixedElementField;

/// @brief Size padding 0x40 - 0x2 = 0x3e, packed as 0x3e
 uint8_t  _cordl_size_padding[0x3e];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/TIME_DYNAMIC_ZONE_INFORMATION/<DaylightName>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: None }]
constexpr TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer(char16_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
 char16_t  FixedElementField;

/// @brief Size padding 0x40 - 0x2 = 0x3e, packed as 0x3e
 uint8_t  _cordl_size_padding[0x3e];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/TIME_DYNAMIC_ZONE_INFORMATION/<TimeZoneKeyName>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: None }]
constexpr TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer(char16_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x100};

/// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
 char16_t  FixedElementField;

/// @brief Size padding 0x100 - 0x2 = 0xfe, packed as 0xfe
 uint8_t  _cordl_size_padding[0xfe];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer) == 0x100, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Interop::Kernel32::SYSTEMTIME, Interop::Kernel32::TIME_DYNAMIC_ZONE_INFORMATION::<DaylightName>e__FixedBuffer, Interop::Kernel32::TIME_DYNAMIC_ZONE_INFORMATION::<StandardName>e__FixedBuffer, Interop::Kernel32::TIME_DYNAMIC_ZONE_INFORMATION::<TimeZoneKeyName>e__FixedBuffer
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/TIME_DYNAMIC_ZONE_INFORMATION
struct CORDL_TYPE Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION {
public:
// Declarations
using _DaylightName_e__FixedBuffer = ::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer;

using _StandardName_e__FixedBuffer = ::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer;

using _TimeZoneKeyName_e__FixedBuffer = ::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer;

/// @brief Method GetTimeZoneKeyName, addr 0x1815d24a0, size 0x20, virtual false, abstract: false, final false
inline ::StringW GetTimeZoneKeyName() ;

// Ctor Parameters []
// @brief default ctor
constexpr Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION() ;

// Ctor Parameters [CppParam { name: "Bias", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "StandardName", ty: "::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "StandardDate", ty: "::GlobalNamespace::Kernel32_Interop_SYSTEMTIME", modifiers: "", def_value: None }, CppParam { name: "StandardBias", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DaylightName", ty: "::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "DaylightDate", ty: "::GlobalNamespace::Kernel32_Interop_SYSTEMTIME", modifiers: "", def_value: None }, CppParam { name: "DaylightBias", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "TimeZoneKeyName", ty: "::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "DynamicDaylightTimeDisabled", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION(int32_t  Bias, ::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer  StandardName, ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME  StandardDate, int32_t  StandardBias, ::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer  DaylightName, ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME  DaylightDate, int32_t  DaylightBias, ::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer  TimeZoneKeyName, uint8_t  DynamicDaylightTimeDisabled) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1b0};

/// @brief Field Bias, offset: 0x0, size: 0x4, def value: None
 int32_t  Bias;

/// @brief Field StandardName, offset: 0x4, size: 0x40, def value: None
 ::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer  StandardName;

/// @brief Field StandardDate, offset: 0x44, size: 0x10, def value: None
 ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME  StandardDate;

/// @brief Field StandardBias, offset: 0x54, size: 0x4, def value: None
 int32_t  StandardBias;

/// @brief Field DaylightName, offset: 0x58, size: 0x40, def value: None
 ::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer  DaylightName;

/// @brief Field DaylightDate, offset: 0x98, size: 0x10, def value: None
 ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME  DaylightDate;

/// @brief Field DaylightBias, offset: 0xa8, size: 0x4, def value: None
 int32_t  DaylightBias;

/// @brief Field TimeZoneKeyName, offset: 0xac, size: 0x100, def value: None
 ::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer  TimeZoneKeyName;

/// @brief Field DynamicDaylightTimeDisabled, offset: 0x1ac, size: 0x1, def value: None
 uint8_t  DynamicDaylightTimeDisabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION, Bias) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION, StandardName) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION, StandardDate) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION, StandardBias) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION, DaylightName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION, DaylightDate) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION, DaylightBias) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION, TimeZoneKeyName) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION, DynamicDaylightTimeDisabled) == 0x1ac, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION) == 0x1b0, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/TIME_ZONE_INFORMATION/<StandardName>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: None }]
constexpr TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer(char16_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
 char16_t  FixedElementField;

/// @brief Size padding 0x40 - 0x2 = 0x3e, packed as 0x3e
 uint8_t  _cordl_size_padding[0x3e];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/TIME_ZONE_INFORMATION/<DaylightName>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: None }]
constexpr TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer(char16_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
 char16_t  FixedElementField;

/// @brief Size padding 0x40 - 0x2 = 0x3e, packed as 0x3e
 uint8_t  _cordl_size_padding[0x3e];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Interop::Kernel32::SYSTEMTIME, Interop::Kernel32::TIME_ZONE_INFORMATION::<DaylightName>e__FixedBuffer, Interop::Kernel32::TIME_ZONE_INFORMATION::<StandardName>e__FixedBuffer
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/TIME_ZONE_INFORMATION
struct CORDL_TYPE Kernel32_Interop_TIME_ZONE_INFORMATION {
public:
// Declarations
using _DaylightName_e__FixedBuffer = ::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer;

using _StandardName_e__FixedBuffer = ::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer;

/// @brief Method GetDaylightName, addr 0x1815d24c0, size 0x20, virtual false, abstract: false, final false
inline ::StringW GetDaylightName() ;

/// @brief Method GetStandardName, addr 0x1815d24e0, size 0x20, virtual false, abstract: false, final false
inline ::StringW GetStandardName() ;

/// @brief Method .ctor, addr 0x1815d2500, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION>  dtzi) ;

// Ctor Parameters []
// @brief default ctor
constexpr Kernel32_Interop_TIME_ZONE_INFORMATION() ;

// Ctor Parameters [CppParam { name: "Bias", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "StandardName", ty: "::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "StandardDate", ty: "::GlobalNamespace::Kernel32_Interop_SYSTEMTIME", modifiers: "", def_value: None }, CppParam { name: "StandardBias", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DaylightName", ty: "::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "DaylightDate", ty: "::GlobalNamespace::Kernel32_Interop_SYSTEMTIME", modifiers: "", def_value: None }, CppParam { name: "DaylightBias", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Kernel32_Interop_TIME_ZONE_INFORMATION(int32_t  Bias, ::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer  StandardName, ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME  StandardDate, int32_t  StandardBias, ::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer  DaylightName, ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME  DaylightDate, int32_t  DaylightBias) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xac};

/// @brief Field Bias, offset: 0x0, size: 0x4, def value: None
 int32_t  Bias;

/// @brief Field StandardName, offset: 0x4, size: 0x40, def value: None
 ::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer  StandardName;

/// @brief Field StandardDate, offset: 0x44, size: 0x10, def value: None
 ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME  StandardDate;

/// @brief Field StandardBias, offset: 0x54, size: 0x4, def value: None
 int32_t  StandardBias;

/// @brief Field DaylightName, offset: 0x58, size: 0x40, def value: None
 ::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer  DaylightName;

/// @brief Field DaylightDate, offset: 0x98, size: 0x10, def value: None
 ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME  DaylightDate;

/// @brief Field DaylightBias, offset: 0xa8, size: 0x4, def value: None
 int32_t  DaylightBias;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION, Bias) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION, StandardName) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION, StandardDate) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION, StandardBias) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION, DaylightName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION, DaylightDate) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION, DaylightBias) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION) == 0xac, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/FILE_INFO_BY_HANDLE_CLASS
struct CORDL_TYPE Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS_Unwrapped
enum struct __Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS_Unwrapped : uint32_t {
__E_FileBasicInfo = static_cast<uint32_t>(0x0u),
__E_FileStandardInfo = static_cast<uint32_t>(0x1u),
__E_FileNameInfo = static_cast<uint32_t>(0x2u),
__E_FileRenameInfo = static_cast<uint32_t>(0x3u),
__E_FileDispositionInfo = static_cast<uint32_t>(0x4u),
__E_FileAllocationInfo = static_cast<uint32_t>(0x5u),
__E_FileEndOfFileInfo = static_cast<uint32_t>(0x6u),
__E_FileStreamInfo = static_cast<uint32_t>(0x7u),
__E_FileCompressionInfo = static_cast<uint32_t>(0x8u),
__E_FileAttributeTagInfo = static_cast<uint32_t>(0x9u),
__E_FileIdBothDirectoryInfo = static_cast<uint32_t>(0xau),
__E_FileIdBothDirectoryRestartInfo = static_cast<uint32_t>(0xbu),
__E_FileIoPriorityHintInfo = static_cast<uint32_t>(0xcu),
__E_FileRemoteProtocolInfo = static_cast<uint32_t>(0xdu),
__E_FileFullDirectoryInfo = static_cast<uint32_t>(0xeu),
__E_FileFullDirectoryRestartInfo = static_cast<uint32_t>(0xfu),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS_Unwrapped () const noexcept {
return static_cast<__Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS(uint32_t  value__) noexcept;

/// @brief Field FileAllocationInfo value: U32(5)
static ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS const FileAllocationInfo;

/// @brief Field FileAttributeTagInfo value: U32(9)
static ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS const FileAttributeTagInfo;

/// @brief Field FileBasicInfo value: U32(0)
static ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS const FileBasicInfo;

/// @brief Field FileCompressionInfo value: U32(8)
static ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS const FileCompressionInfo;

/// @brief Field FileDispositionInfo value: U32(4)
static ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS const FileDispositionInfo;

/// @brief Field FileEndOfFileInfo value: U32(6)
static ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS const FileEndOfFileInfo;

/// @brief Field FileFullDirectoryInfo value: U32(14)
static ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS const FileFullDirectoryInfo;

/// @brief Field FileFullDirectoryRestartInfo value: U32(15)
static ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS const FileFullDirectoryRestartInfo;

/// @brief Field FileIdBothDirectoryInfo value: U32(10)
static ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS const FileIdBothDirectoryInfo;

/// @brief Field FileIdBothDirectoryRestartInfo value: U32(11)
static ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS const FileIdBothDirectoryRestartInfo;

/// @brief Field FileIoPriorityHintInfo value: U32(12)
static ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS const FileIoPriorityHintInfo;

/// @brief Field FileNameInfo value: U32(2)
static ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS const FileNameInfo;

/// @brief Field FileRemoteProtocolInfo value: U32(13)
static ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS const FileRemoteProtocolInfo;

/// @brief Field FileRenameInfo value: U32(3)
static ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS const FileRenameInfo;

/// @brief Field FileStandardInfo value: U32(1)
static ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS const FileStandardInfo;

/// @brief Field FileStreamInfo value: U32(7)
static ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS const FileStreamInfo;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/FINDEX_INFO_LEVELS
struct CORDL_TYPE Kernel32_Interop_FINDEX_INFO_LEVELS {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __Kernel32_Interop_FINDEX_INFO_LEVELS_Unwrapped
enum struct __Kernel32_Interop_FINDEX_INFO_LEVELS_Unwrapped : uint32_t {
__E_FindExInfoStandard = static_cast<uint32_t>(0x0u),
__E_FindExInfoBasic = static_cast<uint32_t>(0x1u),
__E_FindExInfoMaxInfoLevel = static_cast<uint32_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Kernel32_Interop_FINDEX_INFO_LEVELS_Unwrapped () const noexcept {
return static_cast<__Kernel32_Interop_FINDEX_INFO_LEVELS_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Kernel32_Interop_FINDEX_INFO_LEVELS() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Kernel32_Interop_FINDEX_INFO_LEVELS(uint32_t  value__) noexcept;

/// @brief Field FindExInfoBasic value: U32(1)
static ::GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS const FindExInfoBasic;

/// @brief Field FindExInfoMaxInfoLevel value: U32(2)
static ::GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS const FindExInfoMaxInfoLevel;

/// @brief Field FindExInfoStandard value: U32(0)
static ::GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS const FindExInfoStandard;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/FINDEX_SEARCH_OPS
struct CORDL_TYPE Kernel32_Interop_FINDEX_SEARCH_OPS {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __Kernel32_Interop_FINDEX_SEARCH_OPS_Unwrapped
enum struct __Kernel32_Interop_FINDEX_SEARCH_OPS_Unwrapped : uint32_t {
__E_FindExSearchNameMatch = static_cast<uint32_t>(0x0u),
__E_FindExSearchLimitToDirectories = static_cast<uint32_t>(0x1u),
__E_FindExSearchLimitToDevices = static_cast<uint32_t>(0x2u),
__E_FindExSearchMaxSearchOp = static_cast<uint32_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Kernel32_Interop_FINDEX_SEARCH_OPS_Unwrapped () const noexcept {
return static_cast<__Kernel32_Interop_FINDEX_SEARCH_OPS_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Kernel32_Interop_FINDEX_SEARCH_OPS() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Kernel32_Interop_FINDEX_SEARCH_OPS(uint32_t  value__) noexcept;

/// @brief Field FindExSearchLimitToDevices value: U32(2)
static ::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS const FindExSearchLimitToDevices;

/// @brief Field FindExSearchLimitToDirectories value: U32(1)
static ::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS const FindExSearchLimitToDirectories;

/// @brief Field FindExSearchMaxSearchOp value: U32(3)
static ::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS const FindExSearchMaxSearchOp;

/// @brief Field FindExSearchNameMatch value: U32(0)
static ::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS const FindExSearchNameMatch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/GET_FILEEX_INFO_LEVELS
struct CORDL_TYPE Kernel32_Interop_GET_FILEEX_INFO_LEVELS {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __Kernel32_Interop_GET_FILEEX_INFO_LEVELS_Unwrapped
enum struct __Kernel32_Interop_GET_FILEEX_INFO_LEVELS_Unwrapped : uint32_t {
__E_GetFileExInfoStandard = static_cast<uint32_t>(0x0u),
__E_GetFileExMaxInfoLevel = static_cast<uint32_t>(0x1u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Kernel32_Interop_GET_FILEEX_INFO_LEVELS_Unwrapped () const noexcept {
return static_cast<__Kernel32_Interop_GET_FILEEX_INFO_LEVELS_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Kernel32_Interop_GET_FILEEX_INFO_LEVELS() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Kernel32_Interop_GET_FILEEX_INFO_LEVELS(uint32_t  value__) noexcept;

/// @brief Field GetFileExInfoStandard value: U32(0)
static ::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS const GetFileExInfoStandard;

/// @brief Field GetFileExMaxInfoLevel value: U32(1)
static ::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS const GetFileExMaxInfoLevel;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/BOOL
struct CORDL_TYPE Interop_BOOL {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Interop_BOOL_Unwrapped
enum struct __Interop_BOOL_Unwrapped : int32_t {
__E_FALSE = static_cast<int32_t>(0x0),
__E_TRUE = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Interop_BOOL_Unwrapped () const noexcept {
return static_cast<__Interop_BOOL_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Interop_BOOL() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Interop_BOOL(int32_t  value__) noexcept;

/// @brief Field FALSE value: I32(0)
static ::GlobalNamespace::Interop_BOOL const FALSE;

/// @brief Field TRUE value: I32(1)
static ::GlobalNamespace::Interop_BOOL const TRUE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Interop_BOOL, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Interop_BOOL) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Interop::BOOL, System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/SECURITY_ATTRIBUTES
struct CORDL_TYPE Kernel32_Interop_SECURITY_ATTRIBUTES {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Kernel32_Interop_SECURITY_ATTRIBUTES() ;

// Ctor Parameters [CppParam { name: "nLength", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "lpSecurityDescriptor", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "bInheritHandle", ty: "::GlobalNamespace::Interop_BOOL", modifiers: "", def_value: None }]
constexpr Kernel32_Interop_SECURITY_ATTRIBUTES(uint32_t  nLength, ::System::IntPtr  lpSecurityDescriptor, ::GlobalNamespace::Interop_BOOL  bInheritHandle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field nLength, offset: 0x0, size: 0x4, def value: None
 uint32_t  nLength;

/// @brief Field lpSecurityDescriptor, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  lpSecurityDescriptor;

/// @brief Field bInheritHandle, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::Interop_BOOL  bInheritHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES, nLength) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES, lpSecurityDescriptor) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES, bInheritHandle) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Interop::Kernel32::FILE_TIME
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA
struct CORDL_TYPE Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA {
public:
// Declarations
/// @brief Method PopulateFrom, addr 0x1815d27f0, size 0x40, virtual false, abstract: false, final false
inline void PopulateFrom(::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>  findData) ;

// Ctor Parameters []
// @brief default ctor
constexpr Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA() ;

// Ctor Parameters [CppParam { name: "dwFileAttributes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ftCreationTime", ty: "::GlobalNamespace::Kernel32_Interop_FILE_TIME", modifiers: "", def_value: None }, CppParam { name: "ftLastAccessTime", ty: "::GlobalNamespace::Kernel32_Interop_FILE_TIME", modifiers: "", def_value: None }, CppParam { name: "ftLastWriteTime", ty: "::GlobalNamespace::Kernel32_Interop_FILE_TIME", modifiers: "", def_value: None }, CppParam { name: "nFileSizeHigh", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nFileSizeLow", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA(int32_t  dwFileAttributes, ::GlobalNamespace::Kernel32_Interop_FILE_TIME  ftCreationTime, ::GlobalNamespace::Kernel32_Interop_FILE_TIME  ftLastAccessTime, ::GlobalNamespace::Kernel32_Interop_FILE_TIME  ftLastWriteTime, uint32_t  nFileSizeHigh, uint32_t  nFileSizeLow) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field dwFileAttributes, offset: 0x0, size: 0x4, def value: None
 int32_t  dwFileAttributes;

/// @brief Field ftCreationTime, offset: 0x4, size: 0x8, def value: None
 ::GlobalNamespace::Kernel32_Interop_FILE_TIME  ftCreationTime;

/// @brief Field ftLastAccessTime, offset: 0xc, size: 0x8, def value: None
 ::GlobalNamespace::Kernel32_Interop_FILE_TIME  ftLastAccessTime;

/// @brief Field ftLastWriteTime, offset: 0x14, size: 0x8, def value: None
 ::GlobalNamespace::Kernel32_Interop_FILE_TIME  ftLastWriteTime;

/// @brief Field nFileSizeHigh, offset: 0x1c, size: 0x4, def value: None
 uint32_t  nFileSizeHigh;

/// @brief Field nFileSizeLow, offset: 0x20, size: 0x4, def value: None
 uint32_t  nFileSizeLow;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA, dwFileAttributes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA, ftCreationTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA, ftLastAccessTime) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA, ftLastWriteTime) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA, nFileSizeHigh) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA, nFileSizeLow) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Interop/Kernel32
class CORDL_TYPE Interop_Kernel32 : public ::System::Object {
public:
// Declarations
using FILE_INFO_BY_HANDLE_CLASS = ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS;

using FILE_TIME = ::GlobalNamespace::Kernel32_Interop_FILE_TIME;

using FINDEX_INFO_LEVELS = ::GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS;

using FINDEX_SEARCH_OPS = ::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS;

using GET_FILEEX_INFO_LEVELS = ::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS;

using REG_TZI_FORMAT = ::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT;

using SECURITY_ATTRIBUTES = ::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES;

using SYSTEMTIME = ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME;

using TIME_DYNAMIC_ZONE_INFORMATION = ::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION;

using TIME_ZONE_INFORMATION = ::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION;

using WIN32_FILE_ATTRIBUTE_DATA = ::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA;

using WIN32_FIND_DATA = ::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA;

/// @brief Method CloseHandle, addr 0x1815c2050, size 0x90, virtual false, abstract: false, final false
static inline bool CloseHandle(::System::IntPtr  handle) ;

/// @brief Method CreateDirectory, addr 0x1815c2180, size 0xb0, virtual false, abstract: false, final false
static inline bool CreateDirectory(::StringW  path, ::by_ref<::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES>  lpSecurityAttributes) ;

/// @brief Method CreateDirectoryPrivate, addr 0x1815c20e0, size 0xa0, virtual false, abstract: false, final false
static inline bool CreateDirectoryPrivate(::StringW  path, ::by_ref<::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES>  lpSecurityAttributes) ;

/// @brief Method CreateFilePrivate, addr 0x1815c2230, size 0xe0, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateFilePrivate(::StringW  lpFileName, int32_t  dwDesiredAccess, ::System::IO::FileShare  dwShareMode, ::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES*  securityAttrs, ::System::IO::FileMode  dwCreationDisposition, int32_t  dwFlagsAndAttributes, ::System::IntPtr  hTemplateFile) ;

/// @brief Method CreateFile_IntPtr, addr 0x1815c2310, size 0xe0, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateFile_IntPtr(::StringW  lpFileName, int32_t  dwDesiredAccess, ::System::IO::FileShare  dwShareMode, ::System::IO::FileMode  dwCreationDisposition, int32_t  dwFlagsAndAttributes) ;

/// @brief Method DeleteFile, addr 0x1815c2490, size 0xa0, virtual false, abstract: false, final false
static inline bool DeleteFile(::StringW  path) ;

/// @brief Method DeleteFilePrivate, addr 0x1815c23f0, size 0xa0, virtual false, abstract: false, final false
static inline bool DeleteFilePrivate(::StringW  path) ;

/// @brief Method DeleteVolumeMountPoint, addr 0x1815c25d0, size 0xd0, virtual false, abstract: false, final false
static inline bool DeleteVolumeMountPoint(::StringW  mountPoint) ;

/// @brief Method DeleteVolumeMountPointPrivate, addr 0x1815c2530, size 0xa0, virtual false, abstract: false, final false
static inline bool DeleteVolumeMountPointPrivate(::StringW  mountPoint) ;

/// @brief Method FindFirstFile, addr 0x1815c27a0, size 0xe0, virtual false, abstract: false, final false
static inline ::Microsoft::Win32::SafeHandles::SafeFindHandle* FindFirstFile(::StringW  fileName, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>  data) ;

/// @brief Method FindFirstFileExPrivate, addr 0x1815c26a0, size 0x100, virtual false, abstract: false, final false
static inline ::Microsoft::Win32::SafeHandles::SafeFindHandle* FindFirstFileExPrivate(::StringW  lpFileName, ::GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS  fInfoLevelId, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>  lpFindFileData, ::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS  fSearchOp, ::System::IntPtr  lpSearchFilter, int32_t  dwAdditionalFlags) ;

/// @brief Method FindNextFile, addr 0x1815c2880, size 0xe0, virtual false, abstract: false, final false
static inline bool FindNextFile(::Microsoft::Win32::SafeHandles::SafeFindHandle*  hndFindFile, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>  lpFindFileData) ;

/// @brief Method FormatMessage, addr 0x1815c2960, size 0xf0, virtual false, abstract: false, final false
static inline int32_t FormatMessage(int32_t  dwFlags, ::System::IntPtr  lpSource, uint32_t  dwMessageId, int32_t  dwLanguageId, char16_t*  lpBuffer, int32_t  nSize, ::ArrayW<::System::IntPtr>  arguments) ;

/// @brief Method FreeLibrary, addr 0x1815c2a50, size 0x90, virtual false, abstract: false, final false
static inline bool FreeLibrary(::System::IntPtr  hModule) ;

/// @brief Method GetDynamicTimeZoneInformation, addr 0x1815c2ae0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t GetDynamicTimeZoneInformation(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION>  pTimeZoneInformation) ;

/// @brief Method GetFileAttributesEx, addr 0x1815c2c20, size 0xc0, virtual false, abstract: false, final false
static inline bool GetFileAttributesEx(::StringW  name, ::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS  fileInfoLevel, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>  lpFileInformation) ;

/// @brief Method GetFileAttributesExPrivate, addr 0x1815c2b70, size 0xb0, virtual false, abstract: false, final false
static inline bool GetFileAttributesExPrivate(::StringW  name, ::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS  fileInfoLevel, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>  lpFileInformation) ;

/// @brief Method GetFileInformationByHandleEx, addr 0x1815c2ce0, size 0xb0, virtual false, abstract: false, final false
static inline bool GetFileInformationByHandleEx(::System::IntPtr  hFile, ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS  FileInformationClass, ::System::IntPtr  lpFileInformation, uint32_t  dwBufferSize) ;

/// @brief Method GetFileMUIPath, addr 0x1815c2d90, size 0x140, virtual false, abstract: false, final false
static inline bool GetFileMUIPath(uint32_t  flags, ::StringW  filePath, ::by_ref<::System::Text::StringBuilder*>  language, ::by_ref<int32_t>  languageLength, ::by_ref<::System::Text::StringBuilder*>  fileMuiPath, ::by_ref<int32_t>  fileMuiPathLength, ::by_ref<int64_t>  enumerator) ;

/// @brief Method GetMessage, addr 0x1815c2fe0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW GetMessage(int32_t  errorCode) ;

/// @brief Method GetMessage, addr 0x1815c2ed0, size 0x110, virtual false, abstract: false, final false
static inline ::StringW GetMessage(::System::IntPtr  moduleHandle, int32_t  errorCode) ;

/// @brief Method GetTimeZoneInformation, addr 0x1815c2ff0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t GetTimeZoneInformation(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  lpTimeZoneInformation) ;

/// @brief Method LoadLibraryEx, addr 0x1815c3080, size 0xd0, virtual false, abstract: false, final false
static inline ::Microsoft::Win32::SafeHandles::SafeLibraryHandle* LoadLibraryEx(::StringW  libFilename, ::System::IntPtr  reserved, int32_t  flags) ;

/// @brief Method MoveFile, addr 0x1815c3210, size 0xd0, virtual false, abstract: false, final false
static inline bool MoveFile(::StringW  src, ::StringW  dst) ;

/// @brief Method MoveFileExPrivate, addr 0x1815c3150, size 0xc0, virtual false, abstract: false, final false
static inline bool MoveFileExPrivate(::StringW  src, ::StringW  dst, uint32_t  flags) ;

/// @brief Method RemoveDirectory, addr 0x1815c3380, size 0xa0, virtual false, abstract: false, final false
static inline bool RemoveDirectory(::StringW  path) ;

/// @brief Method RemoveDirectoryPrivate, addr 0x1815c32e0, size 0xa0, virtual false, abstract: false, final false
static inline bool RemoveDirectoryPrivate(::StringW  path) ;

/// @brief Method SetThreadErrorMode, addr 0x1815c3420, size 0xa0, virtual false, abstract: false, final false
static inline bool SetThreadErrorMode(uint32_t  dwNewMode, ::by_ref<uint32_t>  lpOldMode) ;

/// @brief Method TryGetErrorMessage, addr 0x1815c34c0, size 0x1e0, virtual false, abstract: false, final false
static inline bool TryGetErrorMessage(::System::IntPtr  moduleHandle, int32_t  errorCode, ::System::Span_1<char16_t>  buffer, ::by_ref<::StringW>  errorMsg) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Interop_Kernel32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Interop_Kernel32", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Interop_Kernel32(Interop_Kernel32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Interop_Kernel32", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Interop_Kernel32(Interop_Kernel32 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Interop_Kernel32) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/BCrypt/NTSTATUS
struct CORDL_TYPE BCrypt_Interop_NTSTATUS {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __BCrypt_Interop_NTSTATUS_Unwrapped
enum struct __BCrypt_Interop_NTSTATUS_Unwrapped : uint32_t {
__E_STATUS_SUCCESS = static_cast<uint32_t>(0x0u),
__E_STATUS_NOT_FOUND = static_cast<uint32_t>(0xc0000225u),
__E_STATUS_INVALID_PARAMETER = static_cast<uint32_t>(0xc000000du),
__E_STATUS_NO_MEMORY = static_cast<uint32_t>(0xc0000017u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BCrypt_Interop_NTSTATUS_Unwrapped () const noexcept {
return static_cast<__BCrypt_Interop_NTSTATUS_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BCrypt_Interop_NTSTATUS() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr BCrypt_Interop_NTSTATUS(uint32_t  value__) noexcept;

/// @brief Field STATUS_INVALID_PARAMETER value: U32(3221225485)
static ::GlobalNamespace::BCrypt_Interop_NTSTATUS const STATUS_INVALID_PARAMETER;

/// @brief Field STATUS_NOT_FOUND value: U32(3221226021)
static ::GlobalNamespace::BCrypt_Interop_NTSTATUS const STATUS_NOT_FOUND;

/// @brief Field STATUS_NO_MEMORY value: U32(3221225495)
static ::GlobalNamespace::BCrypt_Interop_NTSTATUS const STATUS_NO_MEMORY;

/// @brief Field STATUS_SUCCESS value: U32(0)
static ::GlobalNamespace::BCrypt_Interop_NTSTATUS const STATUS_SUCCESS;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BCrypt_Interop_NTSTATUS, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BCrypt_Interop_NTSTATUS) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Interop/BCrypt
class CORDL_TYPE Interop_BCrypt : public ::System::Object {
public:
// Declarations
using NTSTATUS = ::GlobalNamespace::BCrypt_Interop_NTSTATUS;

/// @brief Method BCryptGenRandom, addr 0x1815c1280, size 0xb0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BCrypt_Interop_NTSTATUS BCryptGenRandom(::System::IntPtr  hAlgorithm, uint8_t*  pbBuffer, int32_t  cbBuffer, int32_t  dwFlags) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Interop_BCrypt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Interop_BCrypt", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Interop_BCrypt(Interop_BCrypt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Interop_BCrypt", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Interop_BCrypt(Interop_BCrypt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Interop_BCrypt) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Interop/User32
class CORDL_TYPE Interop_User32 : public ::System::Object {
public:
// Declarations
/// @brief Method LoadString, addr 0x1815d26c0, size 0x130, virtual false, abstract: false, final false
static inline int32_t LoadString(::Microsoft::Win32::SafeHandles::SafeLibraryHandle*  handle, int32_t  id, ::by_ref<::System::Text::StringBuilder*>  buffer, int32_t  bufferLength) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Interop_User32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Interop_User32", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Interop_User32(Interop_User32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Interop_User32", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Interop_User32(Interop_User32 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Interop_User32) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/BOOLEAN
struct CORDL_TYPE Interop_BOOLEAN {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __Interop_BOOLEAN_Unwrapped
enum struct __Interop_BOOLEAN_Unwrapped : uint8_t {
__E_FALSE = static_cast<uint8_t>(0x0u),
__E_TRUE = static_cast<uint8_t>(0x1u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Interop_BOOLEAN_Unwrapped () const noexcept {
return static_cast<__Interop_BOOLEAN_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Interop_BOOLEAN() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Interop_BOOLEAN(uint8_t  value__) noexcept;

/// @brief Field FALSE value: U8(0)
static ::GlobalNamespace::Interop_BOOLEAN const FALSE;

/// @brief Field TRUE value: U8(1)
static ::GlobalNamespace::Interop_BOOLEAN const TRUE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Interop_BOOLEAN, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Interop_BOOLEAN) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/LongFileTime
struct CORDL_TYPE Interop_LongFileTime {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Interop_LongFileTime() ;

// Ctor Parameters [CppParam { name: "TicksSince1601", ty: "int64_t", modifiers: "", def_value: None }]
constexpr Interop_LongFileTime(int64_t  TicksSince1601) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field TicksSince1601, offset: 0x0, size: 0x8, def value: None
 int64_t  TicksSince1601;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Interop_LongFileTime, TicksSince1601) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Interop_LongFileTime) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/UNICODE_STRING
struct CORDL_TYPE Interop_UNICODE_STRING {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Interop_UNICODE_STRING() ;

// Ctor Parameters [CppParam { name: "Length", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "MaximumLength", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Buffer", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr Interop_UNICODE_STRING(uint16_t  Length, uint16_t  MaximumLength, ::System::IntPtr  Buffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Length, offset: 0x0, size: 0x2, def value: None
 uint16_t  Length;

/// @brief Field MaximumLength, offset: 0x2, size: 0x2, def value: None
 uint16_t  MaximumLength;

/// @brief Field Buffer, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  Buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Interop_UNICODE_STRING, Length) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Interop_UNICODE_STRING, MaximumLength) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Interop_UNICODE_STRING, Buffer) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Interop_UNICODE_STRING) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Interop::LongFileTime, System.IO.FileAttributes
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/NtDll/FILE_FULL_DIR_INFORMATION
struct CORDL_TYPE NtDll_Interop_FILE_FULL_DIR_INFORMATION {
public:
// Declarations
 __declspec(property(get=get_FileName)) ::System::ReadOnlySpan_1<char16_t>  FileName;

/// @brief Method GetNextInfo, addr 0x1815c1e50, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION* GetNextInfo(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*  info) ;

/// @brief Method get_FileName, addr 0x1815c1e70, size 0x80, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<char16_t> get_FileName() ;

// Ctor Parameters []
// @brief default ctor
constexpr NtDll_Interop_FILE_FULL_DIR_INFORMATION() ;

// Ctor Parameters [CppParam { name: "NextEntryOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "FileIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "CreationTime", ty: "::GlobalNamespace::Interop_LongFileTime", modifiers: "", def_value: None }, CppParam { name: "LastAccessTime", ty: "::GlobalNamespace::Interop_LongFileTime", modifiers: "", def_value: None }, CppParam { name: "LastWriteTime", ty: "::GlobalNamespace::Interop_LongFileTime", modifiers: "", def_value: None }, CppParam { name: "ChangeTime", ty: "::GlobalNamespace::Interop_LongFileTime", modifiers: "", def_value: None }, CppParam { name: "EndOfFile", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "AllocationSize", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "FileAttributes", ty: "::System::IO::FileAttributes", modifiers: "", def_value: None }, CppParam { name: "FileNameLength", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "EaSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_fileName", ty: "char16_t", modifiers: "", def_value: None }]
constexpr NtDll_Interop_FILE_FULL_DIR_INFORMATION(uint32_t  NextEntryOffset, uint32_t  FileIndex, ::GlobalNamespace::Interop_LongFileTime  CreationTime, ::GlobalNamespace::Interop_LongFileTime  LastAccessTime, ::GlobalNamespace::Interop_LongFileTime  LastWriteTime, ::GlobalNamespace::Interop_LongFileTime  ChangeTime, int64_t  EndOfFile, int64_t  AllocationSize, ::System::IO::FileAttributes  FileAttributes, uint32_t  FileNameLength, uint32_t  EaSize, char16_t  _fileName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field NextEntryOffset, offset: 0x0, size: 0x4, def value: None
 uint32_t  NextEntryOffset;

/// @brief Field FileIndex, offset: 0x4, size: 0x4, def value: None
 uint32_t  FileIndex;

/// @brief Field CreationTime, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::Interop_LongFileTime  CreationTime;

/// @brief Field LastAccessTime, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::Interop_LongFileTime  LastAccessTime;

/// @brief Field LastWriteTime, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::Interop_LongFileTime  LastWriteTime;

/// @brief Field ChangeTime, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::Interop_LongFileTime  ChangeTime;

/// @brief Field EndOfFile, offset: 0x28, size: 0x8, def value: None
 int64_t  EndOfFile;

/// @brief Field AllocationSize, offset: 0x30, size: 0x8, def value: None
 int64_t  AllocationSize;

/// @brief Field FileAttributes, offset: 0x38, size: 0x4, def value: None
 ::System::IO::FileAttributes  FileAttributes;

/// @brief Field FileNameLength, offset: 0x3c, size: 0x4, def value: None
 uint32_t  FileNameLength;

/// @brief Field EaSize, offset: 0x40, size: 0x4, def value: None
 uint32_t  EaSize;

/// @brief Field _fileName, offset: 0x44, size: 0x2, def value: None
 char16_t  _fileName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION, NextEntryOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION, FileIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION, CreationTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION, LastAccessTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION, LastWriteTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION, ChangeTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION, EndOfFile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION, AllocationSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION, FileAttributes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION, FileNameLength) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION, EaSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION, _fileName) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/NtDll/FILE_INFORMATION_CLASS
struct CORDL_TYPE NtDll_Interop_FILE_INFORMATION_CLASS {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __NtDll_Interop_FILE_INFORMATION_CLASS_Unwrapped
enum struct __NtDll_Interop_FILE_INFORMATION_CLASS_Unwrapped : uint32_t {
__E_FileDirectoryInformation = static_cast<uint32_t>(0x1u),
__E_FileFullDirectoryInformation = static_cast<uint32_t>(0x2u),
__E_FileBothDirectoryInformation = static_cast<uint32_t>(0x3u),
__E_FileBasicInformation = static_cast<uint32_t>(0x4u),
__E_FileStandardInformation = static_cast<uint32_t>(0x5u),
__E_FileInternalInformation = static_cast<uint32_t>(0x6u),
__E_FileEaInformation = static_cast<uint32_t>(0x7u),
__E_FileAccessInformation = static_cast<uint32_t>(0x8u),
__E_FileNameInformation = static_cast<uint32_t>(0x9u),
__E_FileRenameInformation = static_cast<uint32_t>(0xau),
__E_FileLinkInformation = static_cast<uint32_t>(0xbu),
__E_FileNamesInformation = static_cast<uint32_t>(0xcu),
__E_FileDispositionInformation = static_cast<uint32_t>(0xdu),
__E_FilePositionInformation = static_cast<uint32_t>(0xeu),
__E_FileFullEaInformation = static_cast<uint32_t>(0xfu),
__E_FileModeInformation = static_cast<uint32_t>(0x10u),
__E_FileAlignmentInformation = static_cast<uint32_t>(0x11u),
__E_FileAllInformation = static_cast<uint32_t>(0x12u),
__E_FileAllocationInformation = static_cast<uint32_t>(0x13u),
__E_FileEndOfFileInformation = static_cast<uint32_t>(0x14u),
__E_FileAlternateNameInformation = static_cast<uint32_t>(0x15u),
__E_FileStreamInformation = static_cast<uint32_t>(0x16u),
__E_FilePipeInformation = static_cast<uint32_t>(0x17u),
__E_FilePipeLocalInformation = static_cast<uint32_t>(0x18u),
__E_FilePipeRemoteInformation = static_cast<uint32_t>(0x19u),
__E_FileMailslotQueryInformation = static_cast<uint32_t>(0x1au),
__E_FileMailslotSetInformation = static_cast<uint32_t>(0x1bu),
__E_FileCompressionInformation = static_cast<uint32_t>(0x1cu),
__E_FileObjectIdInformation = static_cast<uint32_t>(0x1du),
__E_FileCompletionInformation = static_cast<uint32_t>(0x1eu),
__E_FileMoveClusterInformation = static_cast<uint32_t>(0x1fu),
__E_FileQuotaInformation = static_cast<uint32_t>(0x20u),
__E_FileReparsePointInformation = static_cast<uint32_t>(0x21u),
__E_FileNetworkOpenInformation = static_cast<uint32_t>(0x22u),
__E_FileAttributeTagInformation = static_cast<uint32_t>(0x23u),
__E_FileTrackingInformation = static_cast<uint32_t>(0x24u),
__E_FileIdBothDirectoryInformation = static_cast<uint32_t>(0x25u),
__E_FileIdFullDirectoryInformation = static_cast<uint32_t>(0x26u),
__E_FileValidDataLengthInformation = static_cast<uint32_t>(0x27u),
__E_FileShortNameInformation = static_cast<uint32_t>(0x28u),
__E_FileIoCompletionNotificationInformation = static_cast<uint32_t>(0x29u),
__E_FileIoStatusBlockRangeInformation = static_cast<uint32_t>(0x2au),
__E_FileIoPriorityHintInformation = static_cast<uint32_t>(0x2bu),
__E_FileSfioReserveInformation = static_cast<uint32_t>(0x2cu),
__E_FileSfioVolumeInformation = static_cast<uint32_t>(0x2du),
__E_FileHardLinkInformation = static_cast<uint32_t>(0x2eu),
__E_FileProcessIdsUsingFileInformation = static_cast<uint32_t>(0x2fu),
__E_FileNormalizedNameInformation = static_cast<uint32_t>(0x30u),
__E_FileNetworkPhysicalNameInformation = static_cast<uint32_t>(0x31u),
__E_FileIdGlobalTxDirectoryInformation = static_cast<uint32_t>(0x32u),
__E_FileIsRemoteDeviceInformation = static_cast<uint32_t>(0x33u),
__E_FileUnusedInformation = static_cast<uint32_t>(0x34u),
__E_FileNumaNodeInformation = static_cast<uint32_t>(0x35u),
__E_FileStandardLinkInformation = static_cast<uint32_t>(0x36u),
__E_FileRemoteProtocolInformation = static_cast<uint32_t>(0x37u),
__E_FileRenameInformationBypassAccessCheck = static_cast<uint32_t>(0x38u),
__E_FileLinkInformationBypassAccessCheck = static_cast<uint32_t>(0x39u),
__E_FileVolumeNameInformation = static_cast<uint32_t>(0x3au),
__E_FileIdInformation = static_cast<uint32_t>(0x3bu),
__E_FileIdExtdDirectoryInformation = static_cast<uint32_t>(0x3cu),
__E_FileReplaceCompletionInformation = static_cast<uint32_t>(0x3du),
__E_FileHardLinkFullIdInformation = static_cast<uint32_t>(0x3eu),
__E_FileIdExtdBothDirectoryInformation = static_cast<uint32_t>(0x3fu),
__E_FileDispositionInformationEx = static_cast<uint32_t>(0x40u),
__E_FileRenameInformationEx = static_cast<uint32_t>(0x41u),
__E_FileRenameInformationExBypassAccessCheck = static_cast<uint32_t>(0x42u),
__E_FileDesiredStorageClassInformation = static_cast<uint32_t>(0x43u),
__E_FileStatInformation = static_cast<uint32_t>(0x44u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NtDll_Interop_FILE_INFORMATION_CLASS_Unwrapped () const noexcept {
return static_cast<__NtDll_Interop_FILE_INFORMATION_CLASS_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NtDll_Interop_FILE_INFORMATION_CLASS() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr NtDll_Interop_FILE_INFORMATION_CLASS(uint32_t  value__) noexcept;

/// @brief Field FileAccessInformation value: U32(8)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileAccessInformation;

/// @brief Field FileAlignmentInformation value: U32(17)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileAlignmentInformation;

/// @brief Field FileAllInformation value: U32(18)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileAllInformation;

/// @brief Field FileAllocationInformation value: U32(19)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileAllocationInformation;

/// @brief Field FileAlternateNameInformation value: U32(21)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileAlternateNameInformation;

/// @brief Field FileAttributeTagInformation value: U32(35)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileAttributeTagInformation;

/// @brief Field FileBasicInformation value: U32(4)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileBasicInformation;

/// @brief Field FileBothDirectoryInformation value: U32(3)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileBothDirectoryInformation;

/// @brief Field FileCompletionInformation value: U32(30)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileCompletionInformation;

/// @brief Field FileCompressionInformation value: U32(28)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileCompressionInformation;

/// @brief Field FileDesiredStorageClassInformation value: U32(67)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileDesiredStorageClassInformation;

/// @brief Field FileDirectoryInformation value: U32(1)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileDirectoryInformation;

/// @brief Field FileDispositionInformation value: U32(13)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileDispositionInformation;

/// @brief Field FileDispositionInformationEx value: U32(64)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileDispositionInformationEx;

/// @brief Field FileEaInformation value: U32(7)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileEaInformation;

/// @brief Field FileEndOfFileInformation value: U32(20)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileEndOfFileInformation;

/// @brief Field FileFullDirectoryInformation value: U32(2)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileFullDirectoryInformation;

/// @brief Field FileFullEaInformation value: U32(15)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileFullEaInformation;

/// @brief Field FileHardLinkFullIdInformation value: U32(62)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileHardLinkFullIdInformation;

/// @brief Field FileHardLinkInformation value: U32(46)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileHardLinkInformation;

/// @brief Field FileIdBothDirectoryInformation value: U32(37)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileIdBothDirectoryInformation;

/// @brief Field FileIdExtdBothDirectoryInformation value: U32(63)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileIdExtdBothDirectoryInformation;

/// @brief Field FileIdExtdDirectoryInformation value: U32(60)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileIdExtdDirectoryInformation;

/// @brief Field FileIdFullDirectoryInformation value: U32(38)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileIdFullDirectoryInformation;

/// @brief Field FileIdGlobalTxDirectoryInformation value: U32(50)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileIdGlobalTxDirectoryInformation;

/// @brief Field FileIdInformation value: U32(59)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileIdInformation;

/// @brief Field FileInternalInformation value: U32(6)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileInternalInformation;

/// @brief Field FileIoCompletionNotificationInformation value: U32(41)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileIoCompletionNotificationInformation;

/// @brief Field FileIoPriorityHintInformation value: U32(43)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileIoPriorityHintInformation;

/// @brief Field FileIoStatusBlockRangeInformation value: U32(42)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileIoStatusBlockRangeInformation;

/// @brief Field FileIsRemoteDeviceInformation value: U32(51)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileIsRemoteDeviceInformation;

/// @brief Field FileLinkInformation value: U32(11)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileLinkInformation;

/// @brief Field FileLinkInformationBypassAccessCheck value: U32(57)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileLinkInformationBypassAccessCheck;

/// @brief Field FileMailslotQueryInformation value: U32(26)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileMailslotQueryInformation;

/// @brief Field FileMailslotSetInformation value: U32(27)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileMailslotSetInformation;

/// @brief Field FileModeInformation value: U32(16)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileModeInformation;

/// @brief Field FileMoveClusterInformation value: U32(31)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileMoveClusterInformation;

/// @brief Field FileNameInformation value: U32(9)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileNameInformation;

/// @brief Field FileNamesInformation value: U32(12)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileNamesInformation;

/// @brief Field FileNetworkOpenInformation value: U32(34)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileNetworkOpenInformation;

/// @brief Field FileNetworkPhysicalNameInformation value: U32(49)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileNetworkPhysicalNameInformation;

/// @brief Field FileNormalizedNameInformation value: U32(48)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileNormalizedNameInformation;

/// @brief Field FileNumaNodeInformation value: U32(53)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileNumaNodeInformation;

/// @brief Field FileObjectIdInformation value: U32(29)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileObjectIdInformation;

/// @brief Field FilePipeInformation value: U32(23)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FilePipeInformation;

/// @brief Field FilePipeLocalInformation value: U32(24)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FilePipeLocalInformation;

/// @brief Field FilePipeRemoteInformation value: U32(25)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FilePipeRemoteInformation;

/// @brief Field FilePositionInformation value: U32(14)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FilePositionInformation;

/// @brief Field FileProcessIdsUsingFileInformation value: U32(47)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileProcessIdsUsingFileInformation;

/// @brief Field FileQuotaInformation value: U32(32)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileQuotaInformation;

/// @brief Field FileRemoteProtocolInformation value: U32(55)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileRemoteProtocolInformation;

/// @brief Field FileRenameInformation value: U32(10)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileRenameInformation;

/// @brief Field FileRenameInformationBypassAccessCheck value: U32(56)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileRenameInformationBypassAccessCheck;

/// @brief Field FileRenameInformationEx value: U32(65)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileRenameInformationEx;

/// @brief Field FileRenameInformationExBypassAccessCheck value: U32(66)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileRenameInformationExBypassAccessCheck;

/// @brief Field FileReparsePointInformation value: U32(33)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileReparsePointInformation;

/// @brief Field FileReplaceCompletionInformation value: U32(61)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileReplaceCompletionInformation;

/// @brief Field FileSfioReserveInformation value: U32(44)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileSfioReserveInformation;

/// @brief Field FileSfioVolumeInformation value: U32(45)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileSfioVolumeInformation;

/// @brief Field FileShortNameInformation value: U32(40)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileShortNameInformation;

/// @brief Field FileStandardInformation value: U32(5)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileStandardInformation;

/// @brief Field FileStandardLinkInformation value: U32(54)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileStandardLinkInformation;

/// @brief Field FileStatInformation value: U32(68)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileStatInformation;

/// @brief Field FileStreamInformation value: U32(22)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileStreamInformation;

/// @brief Field FileTrackingInformation value: U32(36)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileTrackingInformation;

/// @brief Field FileUnusedInformation value: U32(52)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileUnusedInformation;

/// @brief Field FileValidDataLengthInformation value: U32(39)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileValidDataLengthInformation;

/// @brief Field FileVolumeNameInformation value: U32(58)
static ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS const FileVolumeNameInformation;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/NtDll/IO_STATUS_BLOCK/IO_STATUS
struct CORDL_TYPE IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS {
public:
// Declarations
/// @brief Field Pointer, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Pointer, put=__cordl_internal_set_Pointer)) ::System::IntPtr  Pointer;

/// @brief Field Status, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Status, put=__cordl_internal_set_Status)) uint32_t  Status;

constexpr ::System::IntPtr const& __cordl_internal_get_Pointer() const;

constexpr ::System::IntPtr& __cordl_internal_get_Pointer() ;

constexpr uint32_t const& __cordl_internal_get_Status() const;

constexpr uint32_t& __cordl_internal_get_Status() ;

constexpr void __cordl_internal_set_Pointer(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_Status(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS() ;

// Ctor Parameters [CppParam { name: "Status", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Pointer", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS(uint32_t  Status, ::System::IntPtr  Pointer) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Status_padding[0x0];
/// @brief Field Status, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___Status;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Status_padding_forAlignment[0x0];
/// @brief Field Status, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___Status_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Pointer_padding[0x0];
/// @brief Field Pointer, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___Pointer;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Pointer_padding_forAlignment[0x0];
/// @brief Field Pointer, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  ___Pointer_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Interop::NtDll::IO_STATUS_BLOCK::IO_STATUS, System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/NtDll/IO_STATUS_BLOCK
struct CORDL_TYPE NtDll_Interop_IO_STATUS_BLOCK {
public:
// Declarations
using IO_STATUS = ::GlobalNamespace::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS;

// Ctor Parameters []
// @brief default ctor
constexpr NtDll_Interop_IO_STATUS_BLOCK() ;

// Ctor Parameters [CppParam { name: "Status", ty: "::GlobalNamespace::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS", modifiers: "", def_value: None }, CppParam { name: "Information", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr NtDll_Interop_IO_STATUS_BLOCK(::GlobalNamespace::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS  Status, ::System::IntPtr  Information) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Status, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS  Status;

/// @brief Field Information, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  Information;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NtDll_Interop_IO_STATUS_BLOCK, Status) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NtDll_Interop_IO_STATUS_BLOCK, Information) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NtDll_Interop_IO_STATUS_BLOCK) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/NtDll/ObjectAttributes
struct CORDL_TYPE NtDll_Interop_ObjectAttributes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __NtDll_Interop_ObjectAttributes_Unwrapped
enum struct __NtDll_Interop_ObjectAttributes_Unwrapped : uint32_t {
__E_OBJ_INHERIT = static_cast<uint32_t>(0x2u),
__E_OBJ_PERMANENT = static_cast<uint32_t>(0x10u),
__E_OBJ_EXCLUSIVE = static_cast<uint32_t>(0x20u),
__E_OBJ_CASE_INSENSITIVE = static_cast<uint32_t>(0x40u),
__E_OBJ_OPENIF = static_cast<uint32_t>(0x80u),
__E_OBJ_OPENLINK = static_cast<uint32_t>(0x100u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NtDll_Interop_ObjectAttributes_Unwrapped () const noexcept {
return static_cast<__NtDll_Interop_ObjectAttributes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NtDll_Interop_ObjectAttributes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr NtDll_Interop_ObjectAttributes(uint32_t  value__) noexcept;

/// @brief Field OBJ_CASE_INSENSITIVE value: U32(64)
static ::GlobalNamespace::NtDll_Interop_ObjectAttributes const OBJ_CASE_INSENSITIVE;

/// @brief Field OBJ_EXCLUSIVE value: U32(32)
static ::GlobalNamespace::NtDll_Interop_ObjectAttributes const OBJ_EXCLUSIVE;

/// @brief Field OBJ_INHERIT value: U32(2)
static ::GlobalNamespace::NtDll_Interop_ObjectAttributes const OBJ_INHERIT;

/// @brief Field OBJ_OPENIF value: U32(128)
static ::GlobalNamespace::NtDll_Interop_ObjectAttributes const OBJ_OPENIF;

/// @brief Field OBJ_OPENLINK value: U32(256)
static ::GlobalNamespace::NtDll_Interop_ObjectAttributes const OBJ_OPENLINK;

/// @brief Field OBJ_PERMANENT value: U32(16)
static ::GlobalNamespace::NtDll_Interop_ObjectAttributes const OBJ_PERMANENT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NtDll_Interop_ObjectAttributes, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NtDll_Interop_ObjectAttributes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Interop::NtDll::ObjectAttributes, System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/NtDll/OBJECT_ATTRIBUTES
struct CORDL_TYPE NtDll_Interop_OBJECT_ATTRIBUTES {
public:
// Declarations
/// @brief Method .ctor, addr 0x1815c8cc0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Interop_UNICODE_STRING*  objectName, ::GlobalNamespace::NtDll_Interop_ObjectAttributes  attributes, ::System::IntPtr  rootDirectory) ;

// Ctor Parameters []
// @brief default ctor
constexpr NtDll_Interop_OBJECT_ATTRIBUTES() ;

// Ctor Parameters [CppParam { name: "Length", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "RootDirectory", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "ObjectName", ty: "::GlobalNamespace::Interop_UNICODE_STRING*", modifiers: "", def_value: None }, CppParam { name: "Attributes", ty: "::GlobalNamespace::NtDll_Interop_ObjectAttributes", modifiers: "", def_value: None }, CppParam { name: "SecurityDescriptor", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "SecurityQualityOfService", ty: "void*", modifiers: "", def_value: None }]
constexpr NtDll_Interop_OBJECT_ATTRIBUTES(uint32_t  Length, ::System::IntPtr  RootDirectory, ::GlobalNamespace::Interop_UNICODE_STRING*  ObjectName, ::GlobalNamespace::NtDll_Interop_ObjectAttributes  Attributes, void*  SecurityDescriptor, void*  SecurityQualityOfService) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Length, offset: 0x0, size: 0x4, def value: None
 uint32_t  Length;

/// @brief Field RootDirectory, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  RootDirectory;

/// @brief Field ObjectName, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::Interop_UNICODE_STRING*  ObjectName;

/// @brief Field Attributes, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::NtDll_Interop_ObjectAttributes  Attributes;

/// @brief Field SecurityDescriptor, offset: 0x20, size: 0x8, def value: None
 void*  SecurityDescriptor;

/// @brief Field SecurityQualityOfService, offset: 0x28, size: 0x8, def value: None
 void*  SecurityQualityOfService;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES, Length) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES, RootDirectory) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES, ObjectName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES, Attributes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES, SecurityDescriptor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES, SecurityQualityOfService) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/NtDll/CreateDisposition
struct CORDL_TYPE NtDll_Interop_CreateDisposition {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __NtDll_Interop_CreateDisposition_Unwrapped
enum struct __NtDll_Interop_CreateDisposition_Unwrapped : uint32_t {
__E_FILE_SUPERSEDE = static_cast<uint32_t>(0x0u),
__E_FILE_OPEN = static_cast<uint32_t>(0x1u),
__E_FILE_CREATE = static_cast<uint32_t>(0x2u),
__E_FILE_OPEN_IF = static_cast<uint32_t>(0x3u),
__E_FILE_OVERWRITE = static_cast<uint32_t>(0x4u),
__E_FILE_OVERWRITE_IF = static_cast<uint32_t>(0x5u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NtDll_Interop_CreateDisposition_Unwrapped () const noexcept {
return static_cast<__NtDll_Interop_CreateDisposition_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NtDll_Interop_CreateDisposition() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr NtDll_Interop_CreateDisposition(uint32_t  value__) noexcept;

/// @brief Field FILE_CREATE value: U32(2)
static ::GlobalNamespace::NtDll_Interop_CreateDisposition const FILE_CREATE;

/// @brief Field FILE_OPEN value: U32(1)
static ::GlobalNamespace::NtDll_Interop_CreateDisposition const FILE_OPEN;

/// @brief Field FILE_OPEN_IF value: U32(3)
static ::GlobalNamespace::NtDll_Interop_CreateDisposition const FILE_OPEN_IF;

/// @brief Field FILE_OVERWRITE value: U32(4)
static ::GlobalNamespace::NtDll_Interop_CreateDisposition const FILE_OVERWRITE;

/// @brief Field FILE_OVERWRITE_IF value: U32(5)
static ::GlobalNamespace::NtDll_Interop_CreateDisposition const FILE_OVERWRITE_IF;

/// @brief Field FILE_SUPERSEDE value: U32(0)
static ::GlobalNamespace::NtDll_Interop_CreateDisposition const FILE_SUPERSEDE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{34};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NtDll_Interop_CreateDisposition, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NtDll_Interop_CreateDisposition) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/NtDll/CreateOptions
struct CORDL_TYPE NtDll_Interop_CreateOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __NtDll_Interop_CreateOptions_Unwrapped
enum struct __NtDll_Interop_CreateOptions_Unwrapped : uint32_t {
__E_FILE_DIRECTORY_FILE = static_cast<uint32_t>(0x1u),
__E_FILE_WRITE_THROUGH = static_cast<uint32_t>(0x2u),
__E_FILE_SEQUENTIAL_ONLY = static_cast<uint32_t>(0x4u),
__E_FILE_NO_INTERMEDIATE_BUFFERING = static_cast<uint32_t>(0x8u),
__E_FILE_SYNCHRONOUS_IO_ALERT = static_cast<uint32_t>(0x10u),
__E_FILE_SYNCHRONOUS_IO_NONALERT = static_cast<uint32_t>(0x20u),
__E_FILE_NON_DIRECTORY_FILE = static_cast<uint32_t>(0x40u),
__E_FILE_CREATE_TREE_CONNECTION = static_cast<uint32_t>(0x80u),
__E_FILE_COMPLETE_IF_OPLOCKED = static_cast<uint32_t>(0x100u),
__E_FILE_NO_EA_KNOWLEDGE = static_cast<uint32_t>(0x200u),
__E_FILE_RANDOM_ACCESS = static_cast<uint32_t>(0x800u),
__E_FILE_DELETE_ON_CLOSE = static_cast<uint32_t>(0x1000u),
__E_FILE_OPEN_BY_FILE_ID = static_cast<uint32_t>(0x2000u),
__E_FILE_OPEN_FOR_BACKUP_INTENT = static_cast<uint32_t>(0x4000u),
__E_FILE_NO_COMPRESSION = static_cast<uint32_t>(0x8000u),
__E_FILE_OPEN_REQUIRING_OPLOCK = static_cast<uint32_t>(0x10000u),
__E_FILE_DISALLOW_EXCLUSIVE = static_cast<uint32_t>(0x20000u),
__E_FILE_SESSION_AWARE = static_cast<uint32_t>(0x40000u),
__E_FILE_RESERVE_OPFILTER = static_cast<uint32_t>(0x100000u),
__E_FILE_OPEN_REPARSE_POINT = static_cast<uint32_t>(0x200000u),
__E_FILE_OPEN_NO_RECALL = static_cast<uint32_t>(0x400000u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NtDll_Interop_CreateOptions_Unwrapped () const noexcept {
return static_cast<__NtDll_Interop_CreateOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NtDll_Interop_CreateOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr NtDll_Interop_CreateOptions(uint32_t  value__) noexcept;

/// @brief Field FILE_COMPLETE_IF_OPLOCKED value: U32(256)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_COMPLETE_IF_OPLOCKED;

/// @brief Field FILE_CREATE_TREE_CONNECTION value: U32(128)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_CREATE_TREE_CONNECTION;

/// @brief Field FILE_DELETE_ON_CLOSE value: U32(4096)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_DELETE_ON_CLOSE;

/// @brief Field FILE_DIRECTORY_FILE value: U32(1)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_DIRECTORY_FILE;

/// @brief Field FILE_DISALLOW_EXCLUSIVE value: U32(131072)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_DISALLOW_EXCLUSIVE;

/// @brief Field FILE_NON_DIRECTORY_FILE value: U32(64)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_NON_DIRECTORY_FILE;

/// @brief Field FILE_NO_COMPRESSION value: U32(32768)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_NO_COMPRESSION;

/// @brief Field FILE_NO_EA_KNOWLEDGE value: U32(512)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_NO_EA_KNOWLEDGE;

/// @brief Field FILE_NO_INTERMEDIATE_BUFFERING value: U32(8)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_NO_INTERMEDIATE_BUFFERING;

/// @brief Field FILE_OPEN_BY_FILE_ID value: U32(8192)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_OPEN_BY_FILE_ID;

/// @brief Field FILE_OPEN_FOR_BACKUP_INTENT value: U32(16384)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_OPEN_FOR_BACKUP_INTENT;

/// @brief Field FILE_OPEN_NO_RECALL value: U32(4194304)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_OPEN_NO_RECALL;

/// @brief Field FILE_OPEN_REPARSE_POINT value: U32(2097152)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_OPEN_REPARSE_POINT;

/// @brief Field FILE_OPEN_REQUIRING_OPLOCK value: U32(65536)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_OPEN_REQUIRING_OPLOCK;

/// @brief Field FILE_RANDOM_ACCESS value: U32(2048)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_RANDOM_ACCESS;

/// @brief Field FILE_RESERVE_OPFILTER value: U32(1048576)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_RESERVE_OPFILTER;

/// @brief Field FILE_SEQUENTIAL_ONLY value: U32(4)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_SEQUENTIAL_ONLY;

/// @brief Field FILE_SESSION_AWARE value: U32(262144)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_SESSION_AWARE;

/// @brief Field FILE_SYNCHRONOUS_IO_ALERT value: U32(16)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_SYNCHRONOUS_IO_ALERT;

/// @brief Field FILE_SYNCHRONOUS_IO_NONALERT value: U32(32)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_SYNCHRONOUS_IO_NONALERT;

/// @brief Field FILE_WRITE_THROUGH value: U32(2)
static ::GlobalNamespace::NtDll_Interop_CreateOptions const FILE_WRITE_THROUGH;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{35};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NtDll_Interop_CreateOptions, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NtDll_Interop_CreateOptions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/NtDll/DesiredAccess
struct CORDL_TYPE NtDll_Interop_DesiredAccess {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __NtDll_Interop_DesiredAccess_Unwrapped
enum struct __NtDll_Interop_DesiredAccess_Unwrapped : uint32_t {
__E_FILE_READ_DATA = static_cast<uint32_t>(0x1u),
__E_FILE_LIST_DIRECTORY = static_cast<uint32_t>(0x1u),
__E_FILE_WRITE_DATA = static_cast<uint32_t>(0x2u),
__E_FILE_ADD_FILE = static_cast<uint32_t>(0x2u),
__E_FILE_APPEND_DATA = static_cast<uint32_t>(0x4u),
__E_FILE_ADD_SUBDIRECTORY = static_cast<uint32_t>(0x4u),
__E_FILE_CREATE_PIPE_INSTANCE = static_cast<uint32_t>(0x4u),
__E_FILE_READ_EA = static_cast<uint32_t>(0x8u),
__E_FILE_WRITE_EA = static_cast<uint32_t>(0x10u),
__E_FILE_EXECUTE = static_cast<uint32_t>(0x20u),
__E_FILE_TRAVERSE = static_cast<uint32_t>(0x20u),
__E_FILE_DELETE_CHILD = static_cast<uint32_t>(0x40u),
__E_FILE_READ_ATTRIBUTES = static_cast<uint32_t>(0x80u),
__E_FILE_WRITE_ATTRIBUTES = static_cast<uint32_t>(0x100u),
__E_FILE_ALL_ACCESS = static_cast<uint32_t>(0xf01ffu),
__E_DELETE = static_cast<uint32_t>(0x10000u),
__E_READ_CONTROL = static_cast<uint32_t>(0x20000u),
__E_WRITE_DAC = static_cast<uint32_t>(0x40000u),
__E_WRITE_OWNER = static_cast<uint32_t>(0x80000u),
__E_SYNCHRONIZE = static_cast<uint32_t>(0x100000u),
__E_STANDARD_RIGHTS_READ = static_cast<uint32_t>(0x20000u),
__E_STANDARD_RIGHTS_WRITE = static_cast<uint32_t>(0x20000u),
__E_STANDARD_RIGHTS_EXECUTE = static_cast<uint32_t>(0x20000u),
__E_FILE_GENERIC_READ = static_cast<uint32_t>(0x80000000u),
__E_FILE_GENERIC_WRITE = static_cast<uint32_t>(0x40000000u),
__E_FILE_GENERIC_EXECUTE = static_cast<uint32_t>(0x20000000u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NtDll_Interop_DesiredAccess_Unwrapped () const noexcept {
return static_cast<__NtDll_Interop_DesiredAccess_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NtDll_Interop_DesiredAccess() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr NtDll_Interop_DesiredAccess(uint32_t  value__) noexcept;

/// @brief Field DELETE value: U32(65536)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const DELETE;

/// @brief Field FILE_ADD_FILE value: U32(2)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const FILE_ADD_FILE;

/// @brief Field FILE_ADD_SUBDIRECTORY value: U32(4)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const FILE_ADD_SUBDIRECTORY;

/// @brief Field FILE_ALL_ACCESS value: U32(983551)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const FILE_ALL_ACCESS;

/// @brief Field FILE_APPEND_DATA value: U32(4)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const FILE_APPEND_DATA;

/// @brief Field FILE_CREATE_PIPE_INSTANCE value: U32(4)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const FILE_CREATE_PIPE_INSTANCE;

/// @brief Field FILE_DELETE_CHILD value: U32(64)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const FILE_DELETE_CHILD;

/// @brief Field FILE_EXECUTE value: U32(32)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const FILE_EXECUTE;

/// @brief Field FILE_GENERIC_EXECUTE value: U32(536870912)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const FILE_GENERIC_EXECUTE;

/// @brief Field FILE_GENERIC_READ value: U32(2147483648)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const FILE_GENERIC_READ;

/// @brief Field FILE_GENERIC_WRITE value: U32(1073741824)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const FILE_GENERIC_WRITE;

/// @brief Field FILE_LIST_DIRECTORY value: U32(1)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const FILE_LIST_DIRECTORY;

/// @brief Field FILE_READ_ATTRIBUTES value: U32(128)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const FILE_READ_ATTRIBUTES;

/// @brief Field FILE_READ_DATA value: U32(1)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const FILE_READ_DATA;

/// @brief Field FILE_READ_EA value: U32(8)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const FILE_READ_EA;

/// @brief Field FILE_TRAVERSE value: U32(32)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const FILE_TRAVERSE;

/// @brief Field FILE_WRITE_ATTRIBUTES value: U32(256)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const FILE_WRITE_ATTRIBUTES;

/// @brief Field FILE_WRITE_DATA value: U32(2)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const FILE_WRITE_DATA;

/// @brief Field FILE_WRITE_EA value: U32(16)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const FILE_WRITE_EA;

/// @brief Field READ_CONTROL value: U32(131072)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const READ_CONTROL;

/// @brief Field STANDARD_RIGHTS_EXECUTE value: U32(131072)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const STANDARD_RIGHTS_EXECUTE;

/// @brief Field STANDARD_RIGHTS_READ value: U32(131072)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const STANDARD_RIGHTS_READ;

/// @brief Field STANDARD_RIGHTS_WRITE value: U32(131072)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const STANDARD_RIGHTS_WRITE;

/// @brief Field SYNCHRONIZE value: U32(1048576)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const SYNCHRONIZE;

/// @brief Field WRITE_DAC value: U32(262144)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const WRITE_DAC;

/// @brief Field WRITE_OWNER value: U32(524288)
static ::GlobalNamespace::NtDll_Interop_DesiredAccess const WRITE_OWNER;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{36};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NtDll_Interop_DesiredAccess, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NtDll_Interop_DesiredAccess) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Interop/NtDll
class CORDL_TYPE Interop_NtDll : public ::System::Object {
public:
// Declarations
using CreateDisposition = ::GlobalNamespace::NtDll_Interop_CreateDisposition;

using CreateOptions = ::GlobalNamespace::NtDll_Interop_CreateOptions;

using DesiredAccess = ::GlobalNamespace::NtDll_Interop_DesiredAccess;

using FILE_FULL_DIR_INFORMATION = ::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION;

using FILE_INFORMATION_CLASS = ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS;

using IO_STATUS_BLOCK = ::GlobalNamespace::NtDll_Interop_IO_STATUS_BLOCK;

using OBJECT_ATTRIBUTES = ::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES;

using ObjectAttributes = ::GlobalNamespace::NtDll_Interop_ObjectAttributes;

/// @brief Method CreateFile, addr 0x1815c8820, size 0x220, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<int32_t,::System::IntPtr> CreateFile(::System::ReadOnlySpan_1<char16_t>  path, ::System::IntPtr  rootDirectory, ::GlobalNamespace::NtDll_Interop_CreateDisposition  createDisposition, ::GlobalNamespace::NtDll_Interop_DesiredAccess  desiredAccess, ::System::IO::FileShare  shareAccess, ::System::IO::FileAttributes  fileAttributes, ::GlobalNamespace::NtDll_Interop_CreateOptions  createOptions, ::GlobalNamespace::NtDll_Interop_ObjectAttributes  objectAttributes) ;

/// @brief Method NtCreateFile, addr 0x1815c8a40, size 0x100, virtual false, abstract: false, final false
static inline int32_t NtCreateFile(::by_ref<::System::IntPtr>  FileHandle, ::GlobalNamespace::NtDll_Interop_DesiredAccess  DesiredAccess, ::by_ref<::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES>  ObjectAttributes, ::by_ref<::GlobalNamespace::NtDll_Interop_IO_STATUS_BLOCK>  IoStatusBlock, int64_t*  AllocationSize, ::System::IO::FileAttributes  FileAttributes, ::System::IO::FileShare  ShareAccess, ::GlobalNamespace::NtDll_Interop_CreateDisposition  CreateDisposition, ::GlobalNamespace::NtDll_Interop_CreateOptions  CreateOptions, void*  EaBuffer, uint32_t  EaLength) ;

/// @brief Method NtQueryDirectoryFile, addr 0x1815c8b40, size 0x100, virtual false, abstract: false, final false
static inline int32_t NtQueryDirectoryFile(::System::IntPtr  FileHandle, ::System::IntPtr  Event, ::System::IntPtr  ApcRoutine, ::System::IntPtr  ApcContext, ::by_ref<::GlobalNamespace::NtDll_Interop_IO_STATUS_BLOCK>  IoStatusBlock, ::System::IntPtr  FileInformation, uint32_t  Length, ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  FileInformationClass, ::GlobalNamespace::Interop_BOOLEAN  ReturnSingleEntry, ::GlobalNamespace::Interop_UNICODE_STRING*  FileName, ::GlobalNamespace::Interop_BOOLEAN  RestartScan) ;

/// @brief Method RtlNtStatusToDosError, addr 0x1815c8c40, size 0x80, virtual false, abstract: false, final false
static inline uint32_t RtlNtStatusToDosError(int32_t  Status) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Interop_NtDll() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Interop_NtDll", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Interop_NtDll(Interop_NtDll && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Interop_NtDll", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Interop_NtDll(Interop_NtDll const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{37};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Interop_NtDll) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Interop/Advapi32
class CORDL_TYPE Interop_Advapi32 : public ::System::Object {
public:
// Declarations
/// @brief Method RegCloseKey, addr 0x1815c0500, size 0x80, virtual false, abstract: false, final false
static inline int32_t RegCloseKey(::System::IntPtr  hKey) ;

/// @brief Method RegEnumKeyEx, addr 0x1815c0580, size 0x190, virtual false, abstract: false, final false
static inline int32_t RegEnumKeyEx(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  hKey, int32_t  dwIndex, ::ArrayW<char16_t>  lpName, ::by_ref<int32_t>  lpcbName, ::ArrayW<int32_t>  lpReserved, ::by_ref<::System::Text::StringBuilder*>  lpClass, ::ArrayW<int32_t>  lpcbClass, ::ArrayW<int64_t>  lpftLastWriteTime) ;

/// @brief Method RegOpenKeyEx, addr 0x1815c0710, size 0x150, virtual false, abstract: false, final false
static inline int32_t RegOpenKeyEx(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  hKey, ::StringW  lpSubKey, int32_t  ulOptions, int32_t  samDesired, ::by_ref<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>  hkResult) ;

/// @brief Method RegQueryInfoKey, addr 0x1815c0860, size 0x220, virtual false, abstract: false, final false
static inline int32_t RegQueryInfoKey(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  hKey, ::by_ref<::System::Text::StringBuilder*>  lpClass, ::ArrayW<int32_t>  lpcbClass, ::System::IntPtr  lpReserved_MustBeZero, ::by_ref<int32_t>  lpcSubKeys, ::ArrayW<int32_t>  lpcbMaxSubKeyLen, ::ArrayW<int32_t>  lpcbMaxClassLen, ::by_ref<int32_t>  lpcValues, ::ArrayW<int32_t>  lpcbMaxValueNameLen, ::ArrayW<int32_t>  lpcbMaxValueLen, ::ArrayW<int32_t>  lpcbSecurityDescriptor, ::ArrayW<int32_t>  lpftLastWriteTime) ;

/// @brief Method RegQueryValueEx, addr 0x1815c0e80, size 0x1b0, virtual false, abstract: false, final false
static inline int32_t RegQueryValueEx(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  hKey, ::StringW  lpValueName, ::ArrayW<int32_t>  lpReserved, ::by_ref<int32_t>  lpType, ::by_ref<::ArrayW<char16_t>>  lpData, ::by_ref<int32_t>  lpcbData) ;

/// @brief Method RegQueryValueEx, addr 0x1815c0ce0, size 0x1a0, virtual false, abstract: false, final false
static inline int32_t RegQueryValueEx(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  hKey, ::StringW  lpValueName, ::ArrayW<int32_t>  lpReserved, ::by_ref<int32_t>  lpType, ::by_ref<::ArrayW<uint8_t>>  lpData, ::by_ref<int32_t>  lpcbData) ;

/// @brief Method RegQueryValueEx, addr 0x1815c0a80, size 0x130, virtual false, abstract: false, final false
static inline int32_t RegQueryValueEx(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  hKey, ::StringW  lpValueName, ::ArrayW<int32_t>  lpReserved, ::by_ref<int32_t>  lpType, ::by_ref<int32_t>  lpData, ::by_ref<int32_t>  lpcbData) ;

/// @brief Method RegQueryValueEx, addr 0x1815c0bb0, size 0x130, virtual false, abstract: false, final false
static inline int32_t RegQueryValueEx(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  hKey, ::StringW  lpValueName, ::ArrayW<int32_t>  lpReserved, ::by_ref<int32_t>  lpType, ::by_ref<int64_t>  lpData, ::by_ref<int32_t>  lpcbData) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Interop_Advapi32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Interop_Advapi32", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Interop_Advapi32(Interop_Advapi32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Interop_Advapi32", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Interop_Advapi32(Interop_Advapi32 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{38};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Interop_Advapi32) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Interop
class CORDL_TYPE Interop : public ::System::Object {
public:
// Declarations
using Advapi32 = ::GlobalNamespace::Interop_Advapi32;

using BCrypt = ::GlobalNamespace::Interop_BCrypt;

using BOOL = ::GlobalNamespace::Interop_BOOL;

using BOOLEAN = ::GlobalNamespace::Interop_BOOLEAN;

using Kernel32 = ::GlobalNamespace::Interop_Kernel32;

using LongFileTime = ::GlobalNamespace::Interop_LongFileTime;

using NtDll = ::GlobalNamespace::Interop_NtDll;

using UNICODE_STRING = ::GlobalNamespace::Interop_UNICODE_STRING;

using User32 = ::GlobalNamespace::Interop_User32;

/// @brief Method GetRandomBytes, addr 0x1815c1f70, size 0xe0, virtual false, abstract: false, final false
static inline void GetRandomBytes(uint8_t*  buffer, int32_t  length) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Interop() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Interop", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Interop(Interop && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Interop", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Interop(Interop const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{39};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Interop) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
