#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformInit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmate/Porting/zzzz__DirectoryFileInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformInit)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
struct PlatformInit__AsyncAwake_d__7;
}
namespace GlobalNamespace {
struct PlatformInit__CheckRebindVersion_d__8;
}
namespace GlobalNamespace {
struct PlatformInit__InitializePlatformManager_d__9;
}
namespace GlobalNamespace {
struct PlatformInit__InitializeSave_d__6;
}
namespace GlobalNamespace {
struct PlatformInit__PreloadAllData_d__10;
}
namespace GlobalNamespace {
class PlatformInit___c;
}
namespace Shipmate::Porting::Addon {
class SaveDataCache;
}
namespace Shipmate::Porting {
class DirectoryFileInfo;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformInit;
}
namespace GlobalNamespace {
class PlatformInit___c;
}
namespace GlobalNamespace {
struct PlatformInit__AsyncAwake_d__7;
}
namespace GlobalNamespace {
struct PlatformInit__CheckRebindVersion_d__8;
}
namespace GlobalNamespace {
struct PlatformInit__InitializePlatformManager_d__9;
}
namespace GlobalNamespace {
struct PlatformInit__InitializeSave_d__6;
}
namespace GlobalNamespace {
struct PlatformInit__PreloadAllData_d__10;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlatformInit*);
MARK_REF_T(::GlobalNamespace::PlatformInit___c*);
MARK_VAL_T(::GlobalNamespace::PlatformInit__AsyncAwake_d__7);
MARK_VAL_T(::GlobalNamespace::PlatformInit__CheckRebindVersion_d__8);
MARK_VAL_T(::GlobalNamespace::PlatformInit__InitializePlatformManager_d__9);
MARK_VAL_T(::GlobalNamespace::PlatformInit__InitializeSave_d__6);
MARK_VAL_T(::GlobalNamespace::PlatformInit__PreloadAllData_d__10);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformInit*, "", "PlatformInit");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformInit___c*, "", "PlatformInit/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformInit__AsyncAwake_d__7, "", "PlatformInit/<AsyncAwake>d__7");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformInit__CheckRebindVersion_d__8, "", "PlatformInit/<CheckRebindVersion>d__8");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformInit__InitializePlatformManager_d__9, "", "PlatformInit/<InitializePlatformManager>d__9");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformInit__InitializeSave_d__6, "", "PlatformInit/<InitializeSave>d__6");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformInit__PreloadAllData_d__10, "", "PlatformInit/<PreloadAllData>d__10");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformInit/<>c
class CORDL_TYPE PlatformInit___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::PlatformInit___c*  __9;

/// @brief Field <>9__6_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_0, put=setStaticF___9__6_0)) ::System::Func_1<bool>*  __9__6_0;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_1<bool>*  __9__7_0;

static inline ::GlobalNamespace::PlatformInit___c* New_ctor() ;

/// @brief Method <AsyncAwake>b__7_0, addr 0x18038e180, size 0x40, virtual false, abstract: false, final false
inline bool _AsyncAwake_b__7_0() ;

/// @brief Method <InitializeSave>b__6_0, addr 0x18038e230, size 0x20, virtual false, abstract: false, final false
inline bool _InitializeSave_b__6_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::PlatformInit___c* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__6_0() ;

static inline ::System::Func_1<bool>* getStaticF___9__7_0() ;

static inline void setStaticF___9(::GlobalNamespace::PlatformInit___c*  value) ;

static inline void setStaticF___9__6_0(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__7_0(::System::Func_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformInit___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformInit___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformInit___c(PlatformInit___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformInit___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformInit___c(PlatformInit___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5554};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PlatformInit___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformInit/<AsyncAwake>d__7
struct CORDL_TYPE PlatformInit__AsyncAwake_d__7 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1803899c0, size 0x5c0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlatformInit__AsyncAwake_d__7() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlatformInit>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr PlatformInit__AsyncAwake_d__7(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::PlatformInit>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5555};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlatformInit>  __4__this;

/// @brief Field <>u__1, offset: 0x18, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformInit__AsyncAwake_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit__AsyncAwake_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit__AsyncAwake_d__7, __4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit__AsyncAwake_d__7, __u__1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformInit__AsyncAwake_d__7) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformInit/<CheckRebindVersion>d__8
struct CORDL_TYPE PlatformInit__CheckRebindVersion_d__8 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18038a7a0, size 0x80, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038a820, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlatformInit__CheckRebindVersion_d__8() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }]
constexpr PlatformInit__CheckRebindVersion_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5556};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformInit__CheckRebindVersion_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit__CheckRebindVersion_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformInit__CheckRebindVersion_d__8) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformInit/<InitializePlatformManager>d__9
struct CORDL_TYPE PlatformInit__InitializePlatformManager_d__9 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18038bc00, size 0x310, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlatformInit__InitializePlatformManager_d__9() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr PlatformInit__InitializePlatformManager_d__9(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5557};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset: 0x18, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformInit__InitializePlatformManager_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit__InitializePlatformManager_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit__InitializePlatformManager_d__9, __u__1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformInit__InitializePlatformManager_d__9) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformInit/<InitializeSave>d__6
struct CORDL_TYPE PlatformInit__InitializeSave_d__6 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18038bf10, size 0x610, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlatformInit__InitializeSave_d__6() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlatformInit>", modifiers: "", def_value: None }, CppParam { name: "_failed_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr PlatformInit__InitializeSave_d__6(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::PlatformInit>  __4__this, bool  _failed_5__2, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5558};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlatformInit>  __4__this;

/// @brief Field <failed>5__2, offset: 0x20, size: 0x1, def value: None
 bool  _failed_5__2;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformInit__InitializeSave_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit__InitializeSave_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit__InitializeSave_d__6, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit__InitializeSave_d__6, _failed_5__2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit__InitializeSave_d__6, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformInit__InitializeSave_d__6) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, Shipmate.Porting.DirectoryFileInfo
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformInit/<PreloadAllData>d__10
struct CORDL_TYPE PlatformInit__PreloadAllData_d__10 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18038c520, size 0x7d0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlatformInit__PreloadAllData_d__10() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "_saveGames_5__2", ty: "::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>", modifiers: "", def_value: None }, CppParam { name: "_controlBindings_5__3", ty: "::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>", modifiers: "", def_value: None }, CppParam { name: "_saveCache_5__4", ty: "::Shipmate::Porting::Addon::SaveDataCache*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap5", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr PlatformInit__PreloadAllData_d__10(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>  _saveGames_5__2, ::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>  _controlBindings_5__3, ::Shipmate::Porting::Addon::SaveDataCache*  _saveCache_5__4, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>>  __u__1, ::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>  __7__wrap4, int32_t  __7__wrap5, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5559};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <saveGames>5__2, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>  _saveGames_5__2;

/// @brief Field <controlBindings>5__3, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>  _controlBindings_5__3;

/// @brief Field <saveCache>5__4, offset: 0x28, size: 0x8, def value: None
 ::Shipmate::Porting::Addon::SaveDataCache*  _saveCache_5__4;

/// @brief Field <>u__1, offset: 0x30, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>>  __u__1;

/// @brief Field <>7__wrap4, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::Shipmate::Porting::DirectoryFileInfo*>  __7__wrap4;

/// @brief Field <>7__wrap5, offset: 0x50, size: 0x4, def value: None
 int32_t  __7__wrap5;

/// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformInit__PreloadAllData_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit__PreloadAllData_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit__PreloadAllData_d__10, _saveGames_5__2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit__PreloadAllData_d__10, _controlBindings_5__3) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit__PreloadAllData_d__10, _saveCache_5__4) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit__PreloadAllData_d__10, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit__PreloadAllData_d__10, __7__wrap4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit__PreloadAllData_d__10, __7__wrap5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit__PreloadAllData_d__10, __u__2) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformInit__PreloadAllData_d__10) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformInit
class CORDL_TYPE PlatformInit : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _AsyncAwake_d__7 = ::GlobalNamespace::PlatformInit__AsyncAwake_d__7;

using _CheckRebindVersion_d__8 = ::GlobalNamespace::PlatformInit__CheckRebindVersion_d__8;

using _InitializePlatformManager_d__9 = ::GlobalNamespace::PlatformInit__InitializePlatformManager_d__9;

using _InitializeSave_d__6 = ::GlobalNamespace::PlatformInit__InitializeSave_d__6;

using _PreloadAllData_d__10 = ::GlobalNamespace::PlatformInit__PreloadAllData_d__10;

using __c = ::GlobalNamespace::PlatformInit___c;

/// @brief Field RetrySave, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_RetrySave, put=setStaticF_RetrySave)) bool  RetrySave;

/// @brief Field graphy, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphy, put=__cordl_internal_set_graphy)) ::UnityW<::UnityEngine::GameObject>  graphy;

/// @brief Field isInitComplete, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInitComplete, put=__cordl_internal_set_isInitComplete)) bool  isInitComplete;

/// @brief Field sceneToLoad, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneToLoad, put=__cordl_internal_set_sceneToLoad)) ::StringW  sceneToLoad;

/// @brief Method AsyncAwake, addr 0x18037fc20, size 0x70, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid AsyncAwake() ;

/// @brief Method Awake, addr 0x18037fc90, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckRebindVersion, addr 0x18037fd00, size 0x60, virtual false, abstract: false, final false
inline void CheckRebindVersion() ;

/// @brief Method InitializePlatformManager, addr 0x18037fd60, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask InitializePlatformManager() ;

/// @brief Method InitializeSave, addr 0x18037fdc0, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask InitializeSave() ;

static inline ::GlobalNamespace::PlatformInit* New_ctor() ;

/// @brief Method PreloadAllData, addr 0x18037fe40, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask PreloadAllData() ;

/// @brief Method Start, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_graphy() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_graphy() ;

constexpr bool const& __cordl_internal_get_isInitComplete() const;

constexpr bool& __cordl_internal_get_isInitComplete() ;

constexpr ::StringW const& __cordl_internal_get_sceneToLoad() const;

constexpr ::StringW& __cordl_internal_get_sceneToLoad() ;

constexpr void __cordl_internal_set_graphy(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_isInitComplete(bool  value) ;

constexpr void __cordl_internal_set_sceneToLoad(::StringW  value) ;

/// @brief Method .ctor, addr 0x18037fec0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_RetrySave() ;

static inline void setStaticF_RetrySave(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformInit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformInit", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformInit(PlatformInit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformInit", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformInit(PlatformInit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5560};

/// @brief Field graphy, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___graphy;

/// @brief Field isInitComplete, offset: 0x28, size: 0x1, def value: None
 bool  ___isInitComplete;

/// @brief Field sceneToLoad, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___sceneToLoad;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformInit, ___graphy) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit, ___isInitComplete) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInit, ___sceneToLoad) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformInit) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
