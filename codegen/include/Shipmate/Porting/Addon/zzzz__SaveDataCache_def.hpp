#pragma once
// IWYU pragma private; include "Shipmate/Porting/Addon/SaveDataCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SaveDataCache)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Shipmate::Porting::Addon {
struct SaveDataCache_OperationType;
}
namespace Shipmate::Porting::Addon {
struct SaveDataCache__DoDeleteData_d__13;
}
namespace Shipmate::Porting::Addon {
struct SaveDataCache__DoSaveData_d__12;
}
namespace Shipmate::Porting::Addon {
struct SaveDataCache__PreloadData_d__7;
}
namespace Shipmate::Porting::Addon {
class SaveDataCache___c;
}
namespace Shipmate::Porting::Logs {
class PlatformLog;
}
namespace Shipmate::Porting {
template<typename T>
class AbstractPlatformManager_1;
}
namespace Shipmate::Porting {
class AbstractPlatformStorage;
}
namespace Shipmate::Porting {
class IPlatformAddon;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Shipmate::Porting::Addon {
struct SaveDataCache_OperationType;
}
namespace Shipmate::Porting::Addon {
class SaveDataCache;
}
namespace Shipmate::Porting::Addon {
class SaveDataCache___c;
}
namespace Shipmate::Porting::Addon {
struct SaveDataCache__DoDeleteData_d__13;
}
namespace Shipmate::Porting::Addon {
struct SaveDataCache__DoSaveData_d__12;
}
namespace Shipmate::Porting::Addon {
struct SaveDataCache__PreloadData_d__7;
}
// Write type traits
MARK_VAL_T(::Shipmate::Porting::Addon::SaveDataCache_OperationType);
MARK_REF_T(::Shipmate::Porting::Addon::SaveDataCache*);
MARK_REF_T(::Shipmate::Porting::Addon::SaveDataCache___c*);
MARK_VAL_T(::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13);
MARK_VAL_T(::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12);
MARK_VAL_T(::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Addon::SaveDataCache_OperationType, "Shipmate.Porting.Addon", "SaveDataCache/OperationType");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Addon::SaveDataCache*, "Shipmate.Porting.Addon", "SaveDataCache");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Addon::SaveDataCache___c*, "Shipmate.Porting.Addon", "SaveDataCache/<>c");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13, "Shipmate.Porting.Addon", "SaveDataCache/<DoDeleteData>d__13");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12, "Shipmate.Porting.Addon", "SaveDataCache/<DoSaveData>d__12");
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7, "Shipmate.Porting.Addon", "SaveDataCache/<PreloadData>d__7");
// Dependencies 
namespace Shipmate::Porting::Addon {
// Is value type: true
// CS Name: Shipmate.Porting.Addon.SaveDataCache/OperationType
struct CORDL_TYPE SaveDataCache_OperationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SaveDataCache_OperationType_Unwrapped
enum struct __SaveDataCache_OperationType_Unwrapped : int32_t {
__E_Save = static_cast<int32_t>(0x0),
__E_Delete = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SaveDataCache_OperationType_Unwrapped () const noexcept {
return static_cast<__SaveDataCache_OperationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SaveDataCache_OperationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SaveDataCache_OperationType(int32_t  value__) noexcept;

/// @brief Field Delete value: I32(1)
static ::Shipmate::Porting::Addon::SaveDataCache_OperationType const Delete;

/// @brief Field Save value: I32(0)
static ::Shipmate::Porting::Addon::SaveDataCache_OperationType const Save;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21505};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache_OperationType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::Addon::SaveDataCache_OperationType) == 0x4, "Size mismatch!");

} // namespace end def Shipmate::Porting::Addon
// Dependencies System.Object
namespace Shipmate::Porting::Addon {
// Is value type: false
// CS Name: Shipmate.Porting.Addon.SaveDataCache/<>c
class CORDL_TYPE SaveDataCache___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Shipmate::Porting::Addon::SaveDataCache___c*  __9;

/// @brief Field <>9__10_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_0, put=setStaticF___9__10_0)) ::System::Func_3<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>,::StringW,bool>*  __9__10_0;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Func_3<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>,::StringW,bool>*  __9__11_0;

static inline ::Shipmate::Porting::Addon::SaveDataCache___c* New_ctor() ;

/// @brief Method <DeleteData>b__11_0, addr 0x181ac48a0, size 0x20, virtual false, abstract: false, final false
inline bool _DeleteData_b__11_0(::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>  tuple, ::StringW  file) ;

/// @brief Method <SaveData>b__10_0, addr 0x181ac48a0, size 0x20, virtual false, abstract: false, final false
inline bool _SaveData_b__10_0(::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>  tuple, ::StringW  file) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Shipmate::Porting::Addon::SaveDataCache___c* getStaticF___9() ;

static inline ::System::Func_3<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>,::StringW,bool>* getStaticF___9__10_0() ;

static inline ::System::Func_3<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>,::StringW,bool>* getStaticF___9__11_0() ;

static inline void setStaticF___9(::Shipmate::Porting::Addon::SaveDataCache___c*  value) ;

static inline void setStaticF___9__10_0(::System::Func_3<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>,::StringW,bool>*  value) ;

static inline void setStaticF___9__11_0(::System::Func_3<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>,::StringW,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveDataCache___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveDataCache___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveDataCache___c(SaveDataCache___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveDataCache___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveDataCache___c(SaveDataCache___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21506};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Porting::Addon::SaveDataCache___c) == 0x10, "Size mismatch!");

} // namespace end def Shipmate::Porting::Addon
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace Shipmate::Porting::Addon {
// Is value type: true
// CS Name: Shipmate.Porting.Addon.SaveDataCache/<DoDeleteData>d__13
struct CORDL_TYPE SaveDataCache__DoDeleteData_d__13 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac38f0, size 0x430, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SaveDataCache__DoDeleteData_d__13() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "subFolder", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::Addon::SaveDataCache*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr SaveDataCache__DoDeleteData_d__13(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::StringW  subFolder, ::StringW  fileName, ::Shipmate::Porting::Addon::SaveDataCache*  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21507};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field subFolder, offset: 0x10, size: 0x8, def value: None
 ::StringW  subFolder;

/// @brief Field fileName, offset: 0x18, size: 0x8, def value: None
 ::StringW  fileName;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Shipmate::Porting::Addon::SaveDataCache*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13, subFolder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13, fileName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13) == 0x38, "Size mismatch!");

} // namespace end def Shipmate::Porting::Addon
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace Shipmate::Porting::Addon {
// Is value type: true
// CS Name: Shipmate.Porting.Addon.SaveDataCache/<DoSaveData>d__12
struct CORDL_TYPE SaveDataCache__DoSaveData_d__12 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac3d20, size 0x470, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SaveDataCache__DoSaveData_d__12() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "subFolder", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::Addon::SaveDataCache*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr SaveDataCache__DoSaveData_d__12(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::StringW  subFolder, ::StringW  fileName, ::Shipmate::Porting::Addon::SaveDataCache*  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21508};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field subFolder, offset: 0x10, size: 0x8, def value: None
 ::StringW  subFolder;

/// @brief Field fileName, offset: 0x18, size: 0x8, def value: None
 ::StringW  fileName;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Shipmate::Porting::Addon::SaveDataCache*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12, subFolder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12, fileName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12) == 0x38, "Size mismatch!");

} // namespace end def Shipmate::Porting::Addon
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>
namespace Shipmate::Porting::Addon {
// Is value type: true
// CS Name: Shipmate.Porting.Addon.SaveDataCache/<PreloadData>d__7
struct CORDL_TYPE SaveDataCache__PreloadData_d__7 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ac4190, size 0x5e0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SaveDataCache__PreloadData_d__7() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "subFolder", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::Addon::SaveDataCache*", modifiers: "", def_value: None }, CppParam { name: "_filePath_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::ArrayW<uint8_t>>", modifiers: "", def_value: None }]
constexpr SaveDataCache__PreloadData_d__7(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::StringW  subFolder, ::StringW  fileName, ::Shipmate::Porting::Addon::SaveDataCache*  __4__this, ::StringW  _filePath_5__2, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::ArrayW<uint8_t>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21509};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field subFolder, offset: 0x18, size: 0x8, def value: None
 ::StringW  subFolder;

/// @brief Field fileName, offset: 0x20, size: 0x8, def value: None
 ::StringW  fileName;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Shipmate::Porting::Addon::SaveDataCache*  __4__this;

/// @brief Field <filePath>5__2, offset: 0x30, size: 0x8, def value: None
 ::StringW  _filePath_5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::ArrayW<uint8_t>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7, subFolder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7, fileName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7, _filePath_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7) == 0x50, "Size mismatch!");

} // namespace end def Shipmate::Porting::Addon
// Dependencies System.Object
namespace Shipmate::Porting::Addon {
// Is value type: false
// CS Name: Shipmate.Porting.Addon.SaveDataCache
class CORDL_TYPE SaveDataCache : public ::System::Object {
public:
// Declarations
using OperationType = ::Shipmate::Porting::Addon::SaveDataCache_OperationType;

using _DoDeleteData_d__13 = ::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13;

using _DoSaveData_d__12 = ::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12;

using _PreloadData_d__7 = ::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7;

using __c = ::Shipmate::Porting::Addon::SaveDataCache___c;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Shipmate::Porting::Logs::PlatformLog*  Log;

/// @brief Field busy, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_busy, put=__cordl_internal_set_busy)) bool  busy;

/// @brief Field dataCache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_dataCache, put=__cordl_internal_set_dataCache)) ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<uint8_t>>*  dataCache;

/// @brief Field operationQueue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_operationQueue, put=__cordl_internal_set_operationQueue)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>>*  operationQueue;

/// @brief Field storage, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_storage, put=__cordl_internal_set_storage)) ::Shipmate::Porting::AbstractPlatformStorage*  storage;

/// @brief Convert operator to "::Shipmate::Porting::IPlatformAddon"
constexpr operator  ::Shipmate::Porting::IPlatformAddon*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method DeleteData, addr 0x181ac2b30, size 0x2b0, virtual false, abstract: false, final false
inline void DeleteData(::StringW  fileName, ::StringW  subFolder) ;

/// @brief Method DequeueNextOp, addr 0x181ac2de0, size 0xa0, virtual false, abstract: false, final false
inline void DequeueNextOp() ;

/// @brief Method Dispose, addr 0x181ac2e80, size 0xe0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method DoDeleteData, addr 0x181ac2f60, size 0xb0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid DoDeleteData(::StringW  fileName, ::StringW  subFolder) ;

/// @brief Method DoSaveData, addr 0x181ac3010, size 0xb0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid DoSaveData(::StringW  fileName, ::StringW  subFolder) ;

/// @brief Method GetAllEntriesInFolder, addr 0x181ac30c0, size 0x190, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::ArrayW<uint8_t>>>* GetAllEntriesInFolder(::StringW  subFolder) ;

/// @brief Method GetData, addr 0x181ac3250, size 0x150, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetData(::StringW  fileName, ::StringW  subFolder) ;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void Initialize(::Shipmate::Porting::AbstractPlatformManager_1<T>*  aManager) ;

static inline ::Shipmate::Porting::Addon::SaveDataCache* New_ctor() ;

/// @brief Method PreloadData, addr 0x181ac33a0, size 0x1a0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask PreloadData(::StringW  fileName, ::StringW  subFolder) ;

/// @brief Method SaveData, addr 0x181ac3540, size 0x2e0, virtual false, abstract: false, final false
inline void SaveData(::StringW  fileName, ::ArrayW<uint8_t>  data, ::StringW  subFolder) ;

constexpr bool const& __cordl_internal_get_busy() const;

constexpr bool& __cordl_internal_get_busy() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<uint8_t>>* const& __cordl_internal_get_dataCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<uint8_t>>*& __cordl_internal_get_dataCache() ;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>>* const& __cordl_internal_get_operationQueue() const;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>>*& __cordl_internal_get_operationQueue() ;

constexpr ::Shipmate::Porting::AbstractPlatformStorage* const& __cordl_internal_get_storage() const;

constexpr ::Shipmate::Porting::AbstractPlatformStorage*& __cordl_internal_get_storage() ;

constexpr void __cordl_internal_set_busy(bool  value) ;

constexpr void __cordl_internal_set_dataCache(::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<uint8_t>>*  value) ;

constexpr void __cordl_internal_set_operationQueue(::System::Collections::Generic::List_1<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>>*  value) ;

constexpr void __cordl_internal_set_storage(::Shipmate::Porting::AbstractPlatformStorage*  value) ;

/// @brief Method .ctor, addr 0x181ac3870, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Shipmate::Porting::Logs::PlatformLog* getStaticF_Log() ;

/// @brief Convert to "::Shipmate::Porting::IPlatformAddon"
constexpr ::Shipmate::Porting::IPlatformAddon* i___Shipmate__Porting__IPlatformAddon() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveDataCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveDataCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveDataCache(SaveDataCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveDataCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveDataCache(SaveDataCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21510};

/// @brief Field dataCache, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<uint8_t>>*  ___dataCache;

/// @brief Field busy, offset: 0x18, size: 0x1, def value: None
 bool  ___busy;

/// @brief Field operationQueue, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>>*  ___operationQueue;

/// @brief Field storage, offset: 0x28, size: 0x8, def value: None
 ::Shipmate::Porting::AbstractPlatformStorage*  ___storage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache, ___dataCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache, ___busy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache, ___operationQueue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::Addon::SaveDataCache, ___storage) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::Addon::SaveDataCache) == 0x30, "Size mismatch!");

} // namespace end def Shipmate::Porting::Addon
