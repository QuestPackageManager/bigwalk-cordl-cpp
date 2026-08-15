#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/PlayerLoopHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Internal/zzzz__ContinuationQueue_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__PlayerLoopRunner_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerLoopHelper)
namespace Cysharp::Threading::Tasks::Internal {
class ContinuationQueue;
}
namespace Cysharp::Threading::Tasks::Internal {
class PlayerLoopRunner;
}
namespace Cysharp::Threading::Tasks {
class IPlayerLoopItem;
}
namespace Cysharp::Threading::Tasks {
struct InjectPlayerLoopTimings;
}
namespace Cysharp::Threading::Tasks {
class PlayerLoopHelper___c;
}
namespace Cysharp::Threading::Tasks {
class PlayerLoopHelper___c__DisplayClass20_0;
}
namespace Cysharp::Threading::Tasks {
struct PlayerLoopTiming;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
class Type;
}
namespace UnityEngine::LowLevel {
struct PlayerLoopSystem;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class PlayerLoopHelper;
}
namespace Cysharp::Threading::Tasks {
class PlayerLoopHelper___c;
}
namespace Cysharp::Threading::Tasks {
class PlayerLoopHelper___c__DisplayClass20_0;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::PlayerLoopHelper*);
MARK_REF_T(::Cysharp::Threading::Tasks::PlayerLoopHelper___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::PlayerLoopHelper*, "Cysharp.Threading.Tasks", "PlayerLoopHelper");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::PlayerLoopHelper___c*, "Cysharp.Threading.Tasks", "PlayerLoopHelper/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0*, "Cysharp.Threading.Tasks", "PlayerLoopHelper/<>c__DisplayClass20_0");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.PlayerLoopHelper/<>c
class CORDL_TYPE PlayerLoopHelper___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::PlayerLoopHelper___c*  __9;

/// @brief Field <>9__21_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_0, put=setStaticF___9__21_0)) ::System::Func_2<::UnityEngine::LowLevel::PlayerLoopSystem,bool>*  __9__21_0;

/// @brief Field <>9__21_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_1, put=setStaticF___9__21_1)) ::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>*  __9__21_1;

/// @brief Field <>9__21_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_2, put=setStaticF___9__21_2)) ::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>*  __9__21_2;

static inline ::Cysharp::Threading::Tasks::PlayerLoopHelper___c* New_ctor() ;

/// @brief Method <InsertUniTaskSynchronizationContext>b__21_0, addr 0x181e68280, size 0x30, virtual false, abstract: false, final false
inline bool _InsertUniTaskSynchronizationContext_b__21_0(::UnityEngine::LowLevel::PlayerLoopSystem  ls) ;

/// @brief Method <InsertUniTaskSynchronizationContext>b__21_1, addr 0x181e682b0, size 0x40, virtual false, abstract: false, final false
inline bool _InsertUniTaskSynchronizationContext_b__21_1(::UnityEngine::LowLevel::PlayerLoopSystem  x) ;

/// @brief Method <InsertUniTaskSynchronizationContext>b__21_2, addr 0x181e682f0, size 0x40, virtual false, abstract: false, final false
inline bool _InsertUniTaskSynchronizationContext_b__21_2(::UnityEngine::LowLevel::PlayerLoopSystem  x) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::PlayerLoopHelper___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::LowLevel::PlayerLoopSystem,bool>* getStaticF___9__21_0() ;

static inline ::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>* getStaticF___9__21_1() ;

static inline ::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>* getStaticF___9__21_2() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::PlayerLoopHelper___c*  value) ;

static inline void setStaticF___9__21_0(::System::Func_2<::UnityEngine::LowLevel::PlayerLoopSystem,bool>*  value) ;

static inline void setStaticF___9__21_1(::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>*  value) ;

static inline void setStaticF___9__21_2(::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerLoopHelper___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerLoopHelper___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerLoopHelper___c(PlayerLoopHelper___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLoopHelper___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerLoopHelper___c(PlayerLoopHelper___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14253};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::PlayerLoopHelper___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.PlayerLoopHelper/<>c__DisplayClass20_0
class CORDL_TYPE PlayerLoopHelper___c__DisplayClass20_0 : public ::System::Object {
public:
// Declarations
/// @brief Field loopRunnerType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopRunnerType, put=__cordl_internal_set_loopRunnerType)) ::System::Type*  loopRunnerType;

/// @brief Field loopRunnerYieldType, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopRunnerYieldType, put=__cordl_internal_set_loopRunnerYieldType)) ::System::Type*  loopRunnerYieldType;

static inline ::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0* New_ctor() ;

/// @brief Method <RemoveRunner>b__0, addr 0x181e68850, size 0x50, virtual false, abstract: false, final false
inline bool _RemoveRunner_b__0(::UnityEngine::LowLevel::PlayerLoopSystem  ls) ;

constexpr ::System::Type* const& __cordl_internal_get_loopRunnerType() const;

constexpr ::System::Type*& __cordl_internal_get_loopRunnerType() ;

constexpr ::System::Type* const& __cordl_internal_get_loopRunnerYieldType() const;

constexpr ::System::Type*& __cordl_internal_get_loopRunnerYieldType() ;

constexpr void __cordl_internal_set_loopRunnerType(::System::Type*  value) ;

constexpr void __cordl_internal_set_loopRunnerYieldType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerLoopHelper___c__DisplayClass20_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerLoopHelper___c__DisplayClass20_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerLoopHelper___c__DisplayClass20_0(PlayerLoopHelper___c__DisplayClass20_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLoopHelper___c__DisplayClass20_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerLoopHelper___c__DisplayClass20_0(PlayerLoopHelper___c__DisplayClass20_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14254};

/// @brief Field loopRunnerYieldType, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___loopRunnerYieldType;

/// @brief Field loopRunnerType, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ___loopRunnerType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0, ___loopRunnerYieldType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0, ___loopRunnerType) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0) == 0x20, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.Internal.ContinuationQueue, Cysharp.Threading.Tasks.Internal.PlayerLoopRunner, System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.PlayerLoopHelper
class CORDL_TYPE PlayerLoopHelper : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::PlayerLoopHelper___c;

using __c__DisplayClass20_0 = ::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0;

/// @brief Field ThrowMarkerContinuationQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ThrowMarkerContinuationQueue, put=setStaticF_ThrowMarkerContinuationQueue)) ::Cysharp::Threading::Tasks::Internal::ContinuationQueue*  ThrowMarkerContinuationQueue;

/// @brief Field ThrowMarkerPlayerLoopRunner, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ThrowMarkerPlayerLoopRunner, put=setStaticF_ThrowMarkerPlayerLoopRunner)) ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*  ThrowMarkerPlayerLoopRunner;

/// @brief Field <IsEditorApplicationQuitting>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__IsEditorApplicationQuitting_k__BackingField, put=setStaticF__IsEditorApplicationQuitting_k__BackingField)) bool  _IsEditorApplicationQuitting_k__BackingField;

/// @brief Field applicationDataPath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_applicationDataPath, put=setStaticF_applicationDataPath)) ::StringW  applicationDataPath;

/// @brief Field mainThreadId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_mainThreadId, put=setStaticF_mainThreadId)) int32_t  mainThreadId;

/// @brief Field runners, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_runners, put=setStaticF_runners)) ::ArrayW<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>  runners;

/// @brief Field unitySynchronizationContext, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_unitySynchronizationContext, put=setStaticF_unitySynchronizationContext)) ::System::Threading::SynchronizationContext*  unitySynchronizationContext;

/// @brief Field yielders, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_yielders, put=setStaticF_yielders)) ::ArrayW<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>  yielders;

/// @brief Method AddAction, addr 0x181e60f70, size 0x70, virtual false, abstract: false, final false
static inline void AddAction(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::Cysharp::Threading::Tasks::IPlayerLoopItem*  action) ;

/// @brief Method AddContinuation, addr 0x181e60fe0, size 0x70, virtual false, abstract: false, final false
static inline void AddContinuation(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Action*  continuation) ;

/// @brief Method DumpCurrentPlayerLoop, addr 0x181e61050, size 0x250, virtual false, abstract: false, final false
static inline void DumpCurrentPlayerLoop() ;

/// @brief Method FindLoopSystemIndex, addr 0x181e612a0, size 0xb0, virtual false, abstract: false, final false
static inline int32_t FindLoopSystemIndex(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>  playerLoopList, ::System::Type*  systemType) ;

/// @brief Method Init, addr 0x181e61350, size 0x170, virtual false, abstract: false, final false
static inline void Init() ;

/// @brief Method Initialize, addr 0x181e614c0, size 0x870, virtual false, abstract: false, final false
static inline void Initialize(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  playerLoop, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  injectTimings) ;

/// @brief Method InsertLoop, addr 0x181e61d30, size 0x2e0, virtual false, abstract: false, final false
static inline void InsertLoop(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>  copyList, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  injectTimings, ::System::Type*  loopType, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  targetTimings, int32_t  index, bool  injectOnFirst, ::System::Type*  loopRunnerYieldType, ::System::Type*  loopRunnerType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming) ;

/// @brief Method InsertRunner, addr 0x181e62010, size 0x2e0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> InsertRunner(::UnityEngine::LowLevel::PlayerLoopSystem  loopSystem, bool  injectOnFirst, ::System::Type*  loopRunnerYieldType, ::Cysharp::Threading::Tasks::Internal::ContinuationQueue*  cq, ::System::Type*  loopRunnerType, ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*  runner) ;

/// @brief Method InsertUniTaskSynchronizationContext, addr 0x181e622f0, size 0x2c0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> InsertUniTaskSynchronizationContext(::UnityEngine::LowLevel::PlayerLoopSystem  loopSystem) ;

/// @brief Method IsInjectedUniTaskPlayerLoop, addr 0x181e625b0, size 0xf0, virtual false, abstract: false, final false
static inline bool IsInjectedUniTaskPlayerLoop() ;

/// @brief Method RemoveRunner, addr 0x181e626a0, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> RemoveRunner(::UnityEngine::LowLevel::PlayerLoopSystem  loopSystem, ::System::Type*  loopRunnerYieldType, ::System::Type*  loopRunnerType) ;

/// @brief Method ThrowInvalidLoopTiming, addr 0x181e62750, size 0x60, virtual false, abstract: false, final false
static inline void ThrowInvalidLoopTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming) ;

static inline ::Cysharp::Threading::Tasks::Internal::ContinuationQueue* getStaticF_ThrowMarkerContinuationQueue() ;

static inline ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner* getStaticF_ThrowMarkerPlayerLoopRunner() ;

static inline bool getStaticF__IsEditorApplicationQuitting_k__BackingField() ;

static inline ::StringW getStaticF_applicationDataPath() ;

static inline int32_t getStaticF_mainThreadId() ;

static inline ::ArrayW<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*> getStaticF_runners() ;

static inline ::System::Threading::SynchronizationContext* getStaticF_unitySynchronizationContext() ;

static inline ::ArrayW<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*> getStaticF_yielders() ;

/// @brief Method get_ApplicationDataPath, addr 0x181e62850, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ApplicationDataPath() ;

/// @brief Method get_IsEditorApplicationQuitting, addr 0x181e62890, size 0x40, virtual false, abstract: false, final false
static inline bool get_IsEditorApplicationQuitting() ;

/// @brief Method get_IsMainThread, addr 0x181e628d0, size 0x60, virtual false, abstract: false, final false
static inline bool get_IsMainThread() ;

/// @brief Method get_MainThreadId, addr 0x181e62930, size 0x40, virtual false, abstract: false, final false
static inline int32_t get_MainThreadId() ;

/// @brief Method get_UnitySynchronizationContext, addr 0x181e62970, size 0x40, virtual false, abstract: false, final false
static inline ::System::Threading::SynchronizationContext* get_UnitySynchronizationContext() ;

static inline void setStaticF_ThrowMarkerContinuationQueue(::Cysharp::Threading::Tasks::Internal::ContinuationQueue*  value) ;

static inline void setStaticF_ThrowMarkerPlayerLoopRunner(::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*  value) ;

static inline void setStaticF__IsEditorApplicationQuitting_k__BackingField(bool  value) ;

static inline void setStaticF_applicationDataPath(::StringW  value) ;

static inline void setStaticF_mainThreadId(int32_t  value) ;

static inline void setStaticF_runners(::ArrayW<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>  value) ;

static inline void setStaticF_unitySynchronizationContext(::System::Threading::SynchronizationContext*  value) ;

static inline void setStaticF_yielders(::ArrayW<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>  value) ;

/// @brief Method set_IsEditorApplicationQuitting, addr 0x181e629b0, size 0x50, virtual false, abstract: false, final false
static inline void set_IsEditorApplicationQuitting(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerLoopHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerLoopHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerLoopHelper(PlayerLoopHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLoopHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerLoopHelper(PlayerLoopHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14255};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::PlayerLoopHelper) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
