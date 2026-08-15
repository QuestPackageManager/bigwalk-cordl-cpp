#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlatformStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLogic_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractPlatformStorage)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Shipmate::Porting::Logs {
class PlatformLog;
}
namespace Shipmate::Porting {
struct AbstractPlatformStorage__DeleteFile_d__2;
}
namespace Shipmate::Porting {
struct AbstractPlatformStorage__FileExists_d__1;
}
namespace Shipmate::Porting {
struct AbstractPlatformStorage__LoadData_d__4;
}
namespace Shipmate::Porting {
struct AbstractPlatformStorage__SaveData_d__5;
}
namespace Shipmate::Porting {
class DirectoryFileInfo;
}
namespace Shipmate::Porting {
struct EStorageType;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace Shipmate::Porting {
class AbstractPlatformStorage;
}
namespace Shipmate::Porting {
struct AbstractPlatformStorage__DeleteFile_d__2;
}
namespace Shipmate::Porting {
struct AbstractPlatformStorage__FileExists_d__1;
}
namespace Shipmate::Porting {
struct AbstractPlatformStorage__LoadData_d__4;
}
namespace Shipmate::Porting {
struct AbstractPlatformStorage__SaveData_d__5;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::AbstractPlatformStorage*);
MARK_VAL_T(::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2);
MARK_VAL_T(::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1);
MARK_VAL_T(::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4);
MARK_VAL_T(::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformStorage*, "Shipmate.Porting", "AbstractPlatformStorage");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2, "Shipmate.Porting", "AbstractPlatformStorage/<DeleteFile>d__2");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1, "Shipmate.Porting", "AbstractPlatformStorage/<FileExists>d__1");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4, "Shipmate.Porting", "AbstractPlatformStorage/<LoadData>d__4");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5, "Shipmate.Porting", "AbstractPlatformStorage/<SaveData>d__5");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlatformStorage/<DeleteFile>d__2
struct CORDL_TYPE AbstractPlatformStorage__DeleteFile_d__2 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac78f0, size 0x170, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformStorage__DeleteFile_d__2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "aFileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformStorage*", modifiers: "", def_value: None }, CppParam { name: "aSubFolder", ty: "::StringW", modifiers: "", def_value: None }]
constexpr AbstractPlatformStorage__DeleteFile_d__2(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::StringW  aFileName, ::Shipmate::Porting::AbstractPlatformStorage*  __4__this, ::StringW  aSubFolder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20622};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field aFileName, offset: 0x18, size: 0x8, def value: None
 ::StringW  aFileName;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformStorage*  __4__this;

/// @brief Field aSubFolder, offset: 0x28, size: 0x8, def value: None
 ::StringW  aSubFolder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2, aFileName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2, aSubFolder) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2) == 0x30, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlatformStorage/<FileExists>d__1
struct CORDL_TYPE AbstractPlatformStorage__FileExists_d__1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac7d10, size 0x150, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformStorage__FileExists_d__1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "aFileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformStorage*", modifiers: "", def_value: None }, CppParam { name: "aSubFolder", ty: "::StringW", modifiers: "", def_value: None }]
constexpr AbstractPlatformStorage__FileExists_d__1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>  __t__builder, ::StringW  aFileName, ::Shipmate::Porting::AbstractPlatformStorage*  __4__this, ::StringW  aSubFolder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20623};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field aFileName, offset: 0x20, size: 0x8, def value: None
 ::StringW  aFileName;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformStorage*  __4__this;

/// @brief Field aSubFolder, offset: 0x30, size: 0x8, def value: None
 ::StringW  aSubFolder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1, aFileName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1, aSubFolder) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1) == 0x38, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlatformStorage/<LoadData>d__4
struct CORDL_TYPE AbstractPlatformStorage__LoadData_d__4 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac8220, size 0x150, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformStorage__LoadData_d__4() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::ArrayW<uint8_t>>", modifiers: "", def_value: None }, CppParam { name: "aFileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformStorage*", modifiers: "", def_value: None }, CppParam { name: "aSubFolder", ty: "::StringW", modifiers: "", def_value: None }]
constexpr AbstractPlatformStorage__LoadData_d__4(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::ArrayW<uint8_t>>  __t__builder, ::StringW  aFileName, ::Shipmate::Porting::AbstractPlatformStorage*  __4__this, ::StringW  aSubFolder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20624};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::ArrayW<uint8_t>>  __t__builder;

/// @brief Field aFileName, offset: 0x20, size: 0x8, def value: None
 ::StringW  aFileName;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformStorage*  __4__this;

/// @brief Field aSubFolder, offset: 0x30, size: 0x8, def value: None
 ::StringW  aSubFolder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4, aFileName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4, aSubFolder) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4) == 0x38, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AbstractPlatformStorage/<SaveData>d__5
struct CORDL_TYPE AbstractPlatformStorage__SaveData_d__5 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac8cd0, size 0x1c0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformStorage__SaveData_d__5() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "aFileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformStorage*", modifiers: "", def_value: None }, CppParam { name: "aSubFolder", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "aData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr AbstractPlatformStorage__SaveData_d__5(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::StringW  aFileName, ::Shipmate::Porting::AbstractPlatformStorage*  __4__this, ::StringW  aSubFolder, ::ArrayW<uint8_t>  aData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20625};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field aFileName, offset: 0x18, size: 0x8, def value: None
 ::StringW  aFileName;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformStorage*  __4__this;

/// @brief Field aSubFolder, offset: 0x28, size: 0x8, def value: None
 ::StringW  aSubFolder;

/// @brief Field aData, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  aData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5, aFileName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5, aSubFolder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5, aData) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5) == 0x38, "Size mismatch!");

} // namespace end def Shipmate::Porting
// Dependencies Shipmate.Porting.AbstractPlatformLogic
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.AbstractPlatformStorage
class CORDL_TYPE AbstractPlatformStorage : public ::Shipmate::Porting::AbstractPlatformLogic {
public:
// Declarations
using _DeleteFile_d__2 = ::Shipmate::Porting::AbstractPlatformStorage__DeleteFile_d__2;

using _FileExists_d__1 = ::Shipmate::Porting::AbstractPlatformStorage__FileExists_d__1;

using _LoadData_d__4 = ::Shipmate::Porting::AbstractPlatformStorage__LoadData_d__4;

using _SaveData_d__5 = ::Shipmate::Porting::AbstractPlatformStorage__SaveData_d__5;

 __declspec(property(get=get_BaseAppStoragePath)) ::StringW  BaseAppStoragePath;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Shipmate::Porting::Logs::PlatformLog*  Log;

/// @brief Method DeleteFile, addr 0x181ac5910, size 0xc0, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask DeleteFile(::StringW  aFileName, ::StringW  aSubFolder, ::Shipmate::Porting::EStorageType  aStorageType) ;

/// @brief Method FileExists, addr 0x181ac59d0, size 0xd0, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> FileExists(::StringW  aFileName, ::StringW  aSubFolder, ::Shipmate::Porting::EStorageType  aStorageType) ;

/// @brief Method ListFilesInDirectory, addr 0x181ac5aa0, size 0x460, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>> ListFilesInDirectory(::StringW  aDirectory, ::Shipmate::Porting::EStorageType  aStorageType) ;

/// @brief Method LoadData, addr 0x181ac5f00, size 0xd0, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<uint8_t>> LoadData(::StringW  aFileName, ::StringW  aSubFolder, ::Shipmate::Porting::EStorageType  aStorageType) ;

static inline ::Shipmate::Porting::AbstractPlatformStorage* New_ctor() ;

/// @brief Method SaveData, addr 0x181ac5fd0, size 0xe0, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask SaveData(::StringW  aFileName, ::ArrayW<uint8_t>  aData, ::StringW  aSubFolder, ::Shipmate::Porting::EStorageType  aStorageType) ;

/// @brief Method .ctor, addr 0x181ac5230, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Shipmate::Porting::Logs::PlatformLog* getStaticF_Log() ;

/// @brief Method get_BaseAppStoragePath, addr 0x181ac6100, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_BaseAppStoragePath() ;

static inline void setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbstractPlatformStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformStorage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractPlatformStorage(AbstractPlatformStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractPlatformStorage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractPlatformStorage(AbstractPlatformStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20626};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Porting::AbstractPlatformStorage) == 0x18, "Size mismatch!");

} // namespace end def Shipmate::Porting
