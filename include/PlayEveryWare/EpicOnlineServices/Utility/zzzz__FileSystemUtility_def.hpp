#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Utility/FileSystemUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileSystemUtility)
namespace PlayEveryWare::EpicOnlineServices::Utility {
struct FileSystemUtility__DirectoryExistsAsync_d__13;
}
namespace PlayEveryWare::EpicOnlineServices::Utility {
struct FileSystemUtility__ExistsInternalAsync_d__15;
}
namespace PlayEveryWare::EpicOnlineServices::Utility {
struct FileSystemUtility__FileExistsAsync_d__14;
}
namespace PlayEveryWare::EpicOnlineServices::Utility {
struct FileSystemUtility__ReadAllTextAsync_d__1;
}
namespace PlayEveryWare::EpicOnlineServices::Utility {
struct FileSystemUtility__TryReadAllTextAsync_d__0;
}
namespace PlayEveryWare::EpicOnlineServices::Utility {
struct FileSystemUtility__WriteFileAsync_d__8;
}
namespace PlayEveryWare::EpicOnlineServices::Utility {
class FileSystemUtility___c__DisplayClass7_0;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::IO {
class DirectoryInfo;
}
namespace System::IO {
class FileStream;
}
namespace System::IO {
class StreamReader;
}
namespace System::IO {
class StreamWriter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices::Utility {
class FileSystemUtility;
}
namespace PlayEveryWare::EpicOnlineServices::Utility {
class FileSystemUtility___c__DisplayClass7_0;
}
namespace PlayEveryWare::EpicOnlineServices::Utility {
struct FileSystemUtility__DirectoryExistsAsync_d__13;
}
namespace PlayEveryWare::EpicOnlineServices::Utility {
struct FileSystemUtility__ExistsInternalAsync_d__15;
}
namespace PlayEveryWare::EpicOnlineServices::Utility {
struct FileSystemUtility__FileExistsAsync_d__14;
}
namespace PlayEveryWare::EpicOnlineServices::Utility {
struct FileSystemUtility__ReadAllTextAsync_d__1;
}
namespace PlayEveryWare::EpicOnlineServices::Utility {
struct FileSystemUtility__TryReadAllTextAsync_d__0;
}
namespace PlayEveryWare::EpicOnlineServices::Utility {
struct FileSystemUtility__WriteFileAsync_d__8;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0*);
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13);
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15);
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14);
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1);
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0);
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility*, "PlayEveryWare.EpicOnlineServices.Utility", "FileSystemUtility");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0*, "PlayEveryWare.EpicOnlineServices.Utility", "FileSystemUtility/<>c__DisplayClass7_0");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13, "PlayEveryWare.EpicOnlineServices.Utility", "FileSystemUtility/<DirectoryExistsAsync>d__13");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15, "PlayEveryWare.EpicOnlineServices.Utility", "FileSystemUtility/<ExistsInternalAsync>d__15");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14, "PlayEveryWare.EpicOnlineServices.Utility", "FileSystemUtility/<FileExistsAsync>d__14");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1, "PlayEveryWare.EpicOnlineServices.Utility", "FileSystemUtility/<ReadAllTextAsync>d__1");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0, "PlayEveryWare.EpicOnlineServices.Utility", "FileSystemUtility/<TryReadAllTextAsync>d__0");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8, "PlayEveryWare.EpicOnlineServices.Utility", "FileSystemUtility/<WriteFileAsync>d__8");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices::Utility {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Utility.FileSystemUtility/<>c__DisplayClass7_0
class CORDL_TYPE FileSystemUtility___c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
/// @brief Field content, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_content, put=__cordl_internal_set_content)) ::StringW  content;

/// @brief Field createDirectory, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_createDirectory, put=__cordl_internal_set_createDirectory)) bool  createDirectory;

/// @brief Field filePath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_filePath, put=__cordl_internal_set_filePath)) ::StringW  filePath;

static inline ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0* New_ctor() ;

/// @brief Method <WriteFile>b__0, addr 0x180549d50, size 0xe0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _WriteFile_b__0() ;

constexpr ::StringW const& __cordl_internal_get_content() const;

constexpr ::StringW& __cordl_internal_get_content() ;

constexpr bool const& __cordl_internal_get_createDirectory() const;

constexpr bool& __cordl_internal_get_createDirectory() ;

constexpr ::StringW const& __cordl_internal_get_filePath() const;

constexpr ::StringW& __cordl_internal_get_filePath() ;

constexpr void __cordl_internal_set_content(::StringW  value) ;

constexpr void __cordl_internal_set_createDirectory(bool  value) ;

constexpr void __cordl_internal_set_filePath(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileSystemUtility___c__DisplayClass7_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileSystemUtility___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileSystemUtility___c__DisplayClass7_0(FileSystemUtility___c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemUtility___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileSystemUtility___c__DisplayClass7_0(FileSystemUtility___c__DisplayClass7_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18942};

/// @brief Field filePath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___filePath;

/// @brief Field content, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___content;

/// @brief Field createDirectory, offset: 0x20, size: 0x1, def value: None
 bool  ___createDirectory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0, ___filePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0, ___content) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0, ___createDirectory) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0) == 0x28, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices::Utility
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace PlayEveryWare::EpicOnlineServices::Utility {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.Utility.FileSystemUtility/<DirectoryExistsAsync>d__13
struct CORDL_TYPE FileSystemUtility__DirectoryExistsAsync_d__13 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180547640, size 0x120, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038b190, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileSystemUtility__DirectoryExistsAsync_d__13() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr FileSystemUtility__DirectoryExistsAsync_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::StringW  path, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18943};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field path, offset: 0x20, size: 0x8, def value: None
 ::StringW  path;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13, path) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13) == 0x30, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices::Utility
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace PlayEveryWare::EpicOnlineServices::Utility {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.Utility.FileSystemUtility/<ExistsInternalAsync>d__15
struct CORDL_TYPE FileSystemUtility__ExistsInternalAsync_d__15 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180547910, size 0x130, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038b190, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileSystemUtility__ExistsInternalAsync_d__15() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "isDirectory", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr FileSystemUtility__ExistsInternalAsync_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, bool  isDirectory, ::StringW  path, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18944};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field isDirectory, offset: 0x20, size: 0x1, def value: None
 bool  isDirectory;

/// @brief Field path, offset: 0x28, size: 0x8, def value: None
 ::StringW  path;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15, isDirectory) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15, path) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15) == 0x38, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices::Utility
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace PlayEveryWare::EpicOnlineServices::Utility {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.Utility.FileSystemUtility/<FileExistsAsync>d__14
struct CORDL_TYPE FileSystemUtility__FileExistsAsync_d__14 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180547a40, size 0x120, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038b190, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileSystemUtility__FileExistsAsync_d__14() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr FileSystemUtility__FileExistsAsync_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::StringW  path, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18945};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field path, offset: 0x20, size: 0x8, def value: None
 ::StringW  path;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14, path) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14) == 0x30, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices::Utility
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Runtime.CompilerServices.ValueTaskAwaiter
namespace PlayEveryWare::EpicOnlineServices::Utility {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.Utility.FileSystemUtility/<ReadAllTextAsync>d__1
struct CORDL_TYPE FileSystemUtility__ReadAllTextAsync_d__1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180547c10, size 0x600, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038b190, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileSystemUtility__ReadAllTextAsync_d__1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_fileStream_5__2", ty: "::System::IO::FileStream*", modifiers: "", def_value: None }, CppParam { name: "_reader_5__3", ty: "::System::IO::StreamReader*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__7__wrap5", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None }]
constexpr FileSystemUtility__ReadAllTextAsync_d__1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::StringW  path, ::System::IO::FileStream*  _fileStream_5__2, ::System::IO::StreamReader*  _reader_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::StringW  __7__wrap5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18946};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field path, offset: 0x20, size: 0x8, def value: None
 ::StringW  path;

/// @brief Field <fileStream>5__2, offset: 0x28, size: 0x8, def value: None
 ::System::IO::FileStream*  _fileStream_5__2;

/// @brief Field <reader>5__3, offset: 0x30, size: 0x8, def value: None
 ::System::IO::StreamReader*  _reader_5__3;

/// @brief Field <>7__wrap3, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x40, size: 0x4, def value: None
 int32_t  __7__wrap4;

/// @brief Field <>7__wrap5, offset: 0x48, size: 0x8, def value: None
 ::StringW  __7__wrap5;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

/// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1, path) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1, _fileStream_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1, _reader_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1, __7__wrap3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1, __7__wrap4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1, __7__wrap5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1, __u__2) == 0x58, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1) == 0x68, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices::Utility
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace PlayEveryWare::EpicOnlineServices::Utility {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.Utility.FileSystemUtility/<TryReadAllTextAsync>d__0
struct CORDL_TYPE FileSystemUtility__TryReadAllTextAsync_d__0 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180548990, size 0x220, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038b190, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileSystemUtility__TryReadAllTextAsync_d__0() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,::StringW>>", modifiers: "", def_value: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
constexpr FileSystemUtility__TryReadAllTextAsync_d__0(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,::StringW>>  __t__builder, ::StringW  filePath, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18947};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,::StringW>>  __t__builder;

/// @brief Field filePath, offset: 0x20, size: 0x8, def value: None
 ::StringW  filePath;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0, filePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0, __u__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0) == 0x38, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices::Utility
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.ValueTaskAwaiter
namespace PlayEveryWare::EpicOnlineServices::Utility {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.Utility.FileSystemUtility/<WriteFileAsync>d__8
struct CORDL_TYPE FileSystemUtility__WriteFileAsync_d__8 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18054a230, size 0x390, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1804428d0, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileSystemUtility__WriteFileAsync_d__8() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "createDirectory", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "content", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_writer_5__2", ty: "::System::IO::StreamWriter*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None }]
constexpr FileSystemUtility__WriteFileAsync_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  filePath, bool  createDirectory, ::StringW  content, ::System::IO::StreamWriter*  _writer_5__2, ::System::Object*  __7__wrap2, int32_t  __7__wrap3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18948};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field filePath, offset: 0x20, size: 0x8, def value: None
 ::StringW  filePath;

/// @brief Field createDirectory, offset: 0x28, size: 0x1, def value: None
 bool  createDirectory;

/// @brief Field content, offset: 0x30, size: 0x8, def value: None
 ::StringW  content;

/// @brief Field <writer>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::IO::StreamWriter*  _writer_5__2;

/// @brief Field <>7__wrap2, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  __7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x48, size: 0x4, def value: None
 int32_t  __7__wrap3;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8, filePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8, createDirectory) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8, content) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8, _writer_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8, __7__wrap2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8, __7__wrap3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8, __u__2) == 0x58, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8) == 0x68, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices::Utility
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices::Utility {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Utility.FileSystemUtility
class CORDL_TYPE FileSystemUtility : public ::System::Object {
public:
// Declarations
using _DirectoryExistsAsync_d__13 = ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__DirectoryExistsAsync_d__13;

using _ExistsInternalAsync_d__15 = ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ExistsInternalAsync_d__15;

using _FileExistsAsync_d__14 = ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__FileExistsAsync_d__14;

using _ReadAllTextAsync_d__1 = ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__ReadAllTextAsync_d__1;

using _TryReadAllTextAsync_d__0 = ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__TryReadAllTextAsync_d__0;

using _WriteFileAsync_d__8 = ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility__WriteFileAsync_d__8;

using __c__DisplayClass7_0 = ::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility___c__DisplayClass7_0;

/// @brief Method CombinePaths, addr 0x18053fd50, size 0x30, virtual false, abstract: false, final false
static inline ::StringW CombinePaths(::ArrayW<::StringW>  paths) ;

/// @brief Method CreateDirectory, addr 0x18053fd80, size 0x30, virtual false, abstract: false, final false
static inline void CreateDirectory(::System::IO::DirectoryInfo*  dInfo) ;

/// @brief Method DirectoryExists, addr 0x18053fe40, size 0x10, virtual false, abstract: false, final false
static inline bool DirectoryExists(::StringW  path) ;

/// @brief Method DirectoryExistsAsync, addr 0x18053fdb0, size 0x90, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* DirectoryExistsAsync(::StringW  path) ;

/// @brief Method ExistsInternal, addr 0x18053ff00, size 0x20, virtual false, abstract: false, final false
static inline bool ExistsInternal(::StringW  path, bool  isDirectory) ;

/// @brief Method ExistsInternalAsync, addr 0x18053fe50, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* ExistsInternalAsync(::StringW  path, bool  isDirectory) ;

/// @brief Method FileExists, addr 0x18053ffb0, size 0x10, virtual false, abstract: false, final false
static inline bool FileExists(::StringW  path) ;

/// @brief Method FileExistsAsync, addr 0x18053ff20, size 0x90, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* FileExistsAsync(::StringW  path) ;

/// @brief Method GetFileName, addr 0x18053ffc0, size 0x30, virtual false, abstract: false, final false
static inline ::StringW GetFileName(::StringW  path) ;

/// @brief Method GetFileSystemEntries, addr 0x18053fff0, size 0x10, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetFileSystemEntries(::StringW  path, ::StringW  pattern, bool  recursive) ;

/// @brief Method GetFullPath, addr 0x180540000, size 0x30, virtual false, abstract: false, final false
static inline ::StringW GetFullPath(::StringW  path) ;

/// @brief Method GetProjectPath, addr 0x180540030, size 0x150, virtual false, abstract: false, final false
static inline ::StringW GetProjectPath() ;

/// @brief Method NormalizePath, addr 0x180540180, size 0x70, virtual false, abstract: false, final false
static inline void NormalizePath(::by_ref<::StringW>  path) ;

/// @brief Method ReadAllText, addr 0x1805402a0, size 0x170, virtual false, abstract: false, final false
static inline ::StringW ReadAllText(::StringW  path) ;

/// @brief Method ReadAllTextAsync, addr 0x1805401f0, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::StringW>* ReadAllTextAsync(::StringW  path) ;

/// @brief Method TryReadAllTextAsync, addr 0x180540410, size 0xa0, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::StringW>>* TryReadAllTextAsync(::StringW  filePath) ;

/// @brief Method WriteFile, addr 0x180540590, size 0xd0, virtual false, abstract: false, final false
static inline void WriteFile(::StringW  filePath, ::StringW  content, bool  createDirectory) ;

/// @brief Method WriteFileAsync, addr 0x1805404b0, size 0xe0, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* WriteFileAsync(::StringW  filePath, ::StringW  content, bool  createDirectory) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileSystemUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileSystemUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileSystemUtility(FileSystemUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileSystemUtility(FileSystemUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18949};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Utility::FileSystemUtility) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices::Utility
