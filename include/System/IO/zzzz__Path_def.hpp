#pragma once
// IWYU pragma private; include "System/IO/Path.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Path)
namespace System::Buffers {
template<typename T,typename TArg>
class SpanAction_2;
}
namespace System::IO {
class Path___c;
}
namespace System::Text {
class StringBuilder;
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
template<typename T1>
struct ValueTuple_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
struct ValueTuple_5;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TRest>
struct ValueTuple_8;
}
// Forward declare root types
namespace System::IO {
class Path;
}
namespace System::IO {
class Path___c;
}
// Write type traits
MARK_REF_T(::System::IO::Path*);
MARK_REF_T(::System::IO::Path___c*);
DEFINE_IL2CPP_CLASS(::System::IO::Path*, "System.IO", "Path");
DEFINE_IL2CPP_CLASS(::System::IO::Path___c*, "System.IO", "Path/<>c");
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.Path/<>c
class CORDL_TYPE Path___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::IO::Path___c*  __9;

/// @brief Field <>9__59_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__59_0, put=setStaticF___9__59_0)) ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>*  __9__59_0;

/// @brief Field <>9__60_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__60_0, put=setStaticF___9__60_0)) ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>*  __9__60_0;

static inline ::System::IO::Path___c* New_ctor() ;

/// @brief Method <JoinInternal>b__59_0, addr 0x1816f4610, size 0x120, virtual false, abstract: false, final false
inline void _JoinInternal_b__59_0(::System::Span_1<char16_t>  destination, ::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>  state) ;

/// @brief Method <JoinInternal>b__60_0, addr 0x1816f4730, size 0x1a0, virtual false, abstract: false, final false
inline void _JoinInternal_b__60_0(::System::Span_1<char16_t>  destination, ::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>  state) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::IO::Path___c* getStaticF___9() ;

static inline ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>* getStaticF___9__59_0() ;

static inline ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>* getStaticF___9__60_0() ;

static inline void setStaticF___9(::System::IO::Path___c*  value) ;

static inline void setStaticF___9__59_0(::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>*  value) ;

static inline void setStaticF___9__60_0(::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Path___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Path___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Path___c(Path___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Path___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Path___c(Path___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1667};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::IO::Path___c) == 0x10, "Size mismatch!");

} // namespace end def System::IO
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.Path
class CORDL_TYPE Path : public ::System::Object {
public:
// Declarations
using __c = ::System::IO::Path___c;

/// @brief Field AltDirectorySeparatorChar, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_AltDirectorySeparatorChar, put=setStaticF_AltDirectorySeparatorChar)) char16_t  AltDirectorySeparatorChar;

/// @brief Field DirectorySeparatorChar, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_DirectorySeparatorChar, put=setStaticF_DirectorySeparatorChar)) char16_t  DirectorySeparatorChar;

/// @brief Field DirectorySeparatorStr, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DirectorySeparatorStr, put=setStaticF_DirectorySeparatorStr)) ::StringW  DirectorySeparatorStr;

/// @brief Field InvalidPathChars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InvalidPathChars, put=setStaticF_InvalidPathChars)) ::ArrayW<char16_t>  InvalidPathChars;

/// @brief Field PathSeparator, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_PathSeparator, put=setStaticF_PathSeparator)) char16_t  PathSeparator;

/// @brief Field PathSeparatorChars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PathSeparatorChars, put=setStaticF_PathSeparatorChars)) ::ArrayW<char16_t>  PathSeparatorChars;

/// @brief Field VolumeSeparatorChar, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_VolumeSeparatorChar, put=setStaticF_VolumeSeparatorChar)) char16_t  VolumeSeparatorChar;

/// @brief Field dirEqualsVolume, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_dirEqualsVolume, put=setStaticF_dirEqualsVolume)) bool  dirEqualsVolume;

/// @brief Field trimEndCharsUnix, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_trimEndCharsUnix, put=setStaticF_trimEndCharsUnix)) ::ArrayW<char16_t>  trimEndCharsUnix;

/// @brief Field trimEndCharsWindows, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_trimEndCharsWindows, put=setStaticF_trimEndCharsWindows)) ::ArrayW<char16_t>  trimEndCharsWindows;

/// @brief Method CanonicalizePath, addr 0x1816eda00, size 0x5d0, virtual false, abstract: false, final false
static inline ::StringW CanonicalizePath(::StringW  path) ;

/// @brief Method ChangeExtension, addr 0x1816edfd0, size 0x1f0, virtual false, abstract: false, final false
static inline ::StringW ChangeExtension(::StringW  path, ::StringW  extension) ;

/// @brief Method CleanPath, addr 0x1816ee1c0, size 0x280, virtual false, abstract: false, final false
static inline ::StringW CleanPath(::StringW  s) ;

/// @brief Method Combine, addr 0x1816ee440, size 0x160, virtual false, abstract: false, final false
static inline ::StringW Combine(::StringW  path1, ::StringW  path2) ;

/// @brief Method Combine, addr 0x1816ee5a0, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW Combine(::StringW  path1, ::StringW  path2, ::StringW  path3) ;

/// @brief Method Combine, addr 0x1816ee690, size 0x1e0, virtual false, abstract: false, final false
static inline ::StringW Combine(::ArrayW<::StringW>  paths) ;

/// @brief Method GetDirectoryName, addr 0x1816ee900, size 0x210, virtual false, abstract: false, final false
static inline ::StringW GetDirectoryName(::StringW  path) ;

/// @brief Method GetDirectoryName, addr 0x1816ee870, size 0x90, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<char16_t> GetDirectoryName(::System::ReadOnlySpan_1<char16_t>  path) ;

/// @brief Method GetExtension, addr 0x1816eeb10, size 0x100, virtual false, abstract: false, final false
static inline ::StringW GetExtension(::StringW  path) ;

/// @brief Method GetFileName, addr 0x1816eee70, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW GetFileName(::StringW  path) ;

/// @brief Method GetFileName, addr 0x1816eed80, size 0xf0, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<char16_t> GetFileName(::System::ReadOnlySpan_1<char16_t>  path) ;

/// @brief Method GetFileNameWithoutExtension, addr 0x1816eec10, size 0x170, virtual false, abstract: false, final false
static inline ::StringW GetFileNameWithoutExtension(::StringW  path) ;

/// @brief Method GetFullPath, addr 0x1816eef10, size 0x30, virtual false, abstract: false, final false
static inline ::StringW GetFullPath(::StringW  path) ;

/// @brief Method GetFullPathInternal, addr 0x1816eef10, size 0x30, virtual false, abstract: false, final false
static inline ::StringW GetFullPathInternal(::StringW  path) ;

/// @brief Method GetFullPathName, addr 0x1816eef40, size 0x1e0, virtual false, abstract: false, final false
static inline ::StringW GetFullPathName(::StringW  path) ;

/// @brief Method GetFullPathName, addr 0x1816ef120, size 0xe0, virtual false, abstract: false, final false
static inline int32_t GetFullPathName(::StringW  path, int32_t  numBufferChars, ::System::Text::StringBuilder*  buffer, ::by_ref<::System::IntPtr>  lpFilePartOrNull) ;

/// @brief Method GetInvalidFileNameChars, addr 0x1816ef200, size 0x60, virtual false, abstract: false, final false
static inline ::ArrayW<char16_t> GetInvalidFileNameChars() ;

/// @brief Method GetInvalidPathChars, addr 0x1816ef260, size 0x60, virtual false, abstract: false, final false
static inline ::ArrayW<char16_t> GetInvalidPathChars() ;

/// @brief Method GetPathRoot, addr 0x1816ef2c0, size 0x420, virtual false, abstract: false, final false
static inline ::StringW GetPathRoot(::StringW  path) ;

/// @brief Method GetServerAndShare, addr 0x1816ef6e0, size 0x150, virtual false, abstract: false, final false
static inline ::StringW GetServerAndShare(::StringW  path) ;

/// @brief Method GetTempPath, addr 0x1816ef830, size 0x80, virtual false, abstract: false, final false
static inline ::StringW GetTempPath() ;

/// @brief Method InsecureGetFullPath, addr 0x1816ef8b0, size 0x4c0, virtual false, abstract: false, final false
static inline ::StringW InsecureGetFullPath(::StringW  path) ;

/// @brief Method IsDirectorySeparator, addr 0x1816efd70, size 0x50, virtual false, abstract: false, final false
static inline bool IsDirectorySeparator(char16_t  c) ;

/// @brief Method IsPathRooted, addr 0x1816efdc0, size 0x110, virtual false, abstract: false, final false
static inline bool IsPathRooted(::StringW  path) ;

/// @brief Method IsPathRooted, addr 0x1816efed0, size 0x90, virtual false, abstract: false, final false
static inline bool IsPathRooted(::System::ReadOnlySpan_1<char16_t>  path) ;

/// @brief Method Join, addr 0x1816f0340, size 0x1f0, virtual false, abstract: false, final false
static inline ::StringW Join(::System::ReadOnlySpan_1<char16_t>  path1, ::System::ReadOnlySpan_1<char16_t>  path2) ;

/// @brief Method Join, addr 0x1816f0530, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW Join(::System::ReadOnlySpan_1<char16_t>  path1, ::System::ReadOnlySpan_1<char16_t>  path2, ::System::ReadOnlySpan_1<char16_t>  path3) ;

/// @brief Method JoinInternal, addr 0x1816f01b0, size 0x190, virtual false, abstract: false, final false
static inline ::StringW JoinInternal(::System::ReadOnlySpan_1<char16_t>  first, ::System::ReadOnlySpan_1<char16_t>  second) ;

/// @brief Method JoinInternal, addr 0x1816eff60, size 0x250, virtual false, abstract: false, final false
static inline ::StringW JoinInternal(::System::ReadOnlySpan_1<char16_t>  first, ::System::ReadOnlySpan_1<char16_t>  second, ::System::ReadOnlySpan_1<char16_t>  third) ;

/// @brief Method SameRoot, addr 0x1816f0620, size 0x2d0, virtual false, abstract: false, final false
static inline bool SameRoot(::StringW  root, ::StringW  path) ;

/// @brief Method WindowsDriveAdjustment, addr 0x1816f08f0, size 0x330, virtual false, abstract: false, final false
static inline ::StringW WindowsDriveAdjustment(::StringW  path) ;

/// @brief Method findExtension, addr 0x1816f0e70, size 0x80, virtual false, abstract: false, final false
static inline int32_t findExtension(::StringW  path) ;

static inline char16_t getStaticF_AltDirectorySeparatorChar() ;

static inline char16_t getStaticF_DirectorySeparatorChar() ;

static inline ::StringW getStaticF_DirectorySeparatorStr() ;

static inline ::ArrayW<char16_t> getStaticF_InvalidPathChars() ;

static inline char16_t getStaticF_PathSeparator() ;

static inline ::ArrayW<char16_t> getStaticF_PathSeparatorChars() ;

static inline char16_t getStaticF_VolumeSeparatorChar() ;

static inline bool getStaticF_dirEqualsVolume() ;

static inline ::ArrayW<char16_t> getStaticF_trimEndCharsUnix() ;

static inline ::ArrayW<char16_t> getStaticF_trimEndCharsWindows() ;

/// @brief Method get_temp_path, addr 0x1816f0ef0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_temp_path() ;

static inline void setStaticF_AltDirectorySeparatorChar(char16_t  value) ;

static inline void setStaticF_DirectorySeparatorChar(char16_t  value) ;

static inline void setStaticF_DirectorySeparatorStr(::StringW  value) ;

static inline void setStaticF_InvalidPathChars(::ArrayW<char16_t>  value) ;

static inline void setStaticF_PathSeparator(char16_t  value) ;

static inline void setStaticF_PathSeparatorChars(::ArrayW<char16_t>  value) ;

static inline void setStaticF_VolumeSeparatorChar(char16_t  value) ;

static inline void setStaticF_dirEqualsVolume(bool  value) ;

static inline void setStaticF_trimEndCharsUnix(::ArrayW<char16_t>  value) ;

static inline void setStaticF_trimEndCharsWindows(::ArrayW<char16_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Path() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Path", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Path(Path && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Path", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Path(Path const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1668};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::IO::Path) == 0x10, "Size mismatch!");

} // namespace end def System::IO
