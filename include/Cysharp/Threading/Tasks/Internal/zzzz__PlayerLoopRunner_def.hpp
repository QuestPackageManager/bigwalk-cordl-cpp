#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/PlayerLoopRunner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__IPlayerLoopItem_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerLoopRunner)
namespace Cysharp::Threading::Tasks::Internal {
template<typename T>
class MinimumQueue_1;
}
namespace Cysharp::Threading::Tasks::Internal {
class PlayerLoopRunner___c;
}
namespace Cysharp::Threading::Tasks {
class IPlayerLoopItem;
}
namespace Cysharp::Threading::Tasks {
struct PlayerLoopTiming;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
class PlayerLoopRunner;
}
namespace Cysharp::Threading::Tasks::Internal {
class PlayerLoopRunner___c;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*);
MARK_REF_T(::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*, "Cysharp.Threading.Tasks.Internal", "PlayerLoopRunner");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c*, "Cysharp.Threading.Tasks.Internal", "PlayerLoopRunner/<>c");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.PlayerLoopRunner/<>c
class CORDL_TYPE PlayerLoopRunner___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c*  __9;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Action_1<::System::Exception*>*  __9__9_0;

static inline ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c* New_ctor() ;

/// @brief Method <.ctor>b__9_0, addr 0x180e7de50, size 0x3090, virtual false, abstract: false, final false
inline void __ctor_b__9_0(::System::Exception*  ex) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c* getStaticF___9() ;

static inline ::System::Action_1<::System::Exception*>* getStaticF___9__9_0() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c*  value) ;

static inline void setStaticF___9__9_0(::System::Action_1<::System::Exception*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerLoopRunner___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerLoopRunner___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerLoopRunner___c(PlayerLoopRunner___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLoopRunner___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerLoopRunner___c(PlayerLoopRunner___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14718};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Internal
// Dependencies Cysharp.Threading.Tasks.IPlayerLoopItem, Cysharp.Threading.Tasks.PlayerLoopTiming, System.Object
namespace Cysharp::Threading::Tasks::Internal {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.PlayerLoopRunner
class CORDL_TYPE PlayerLoopRunner : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c;

/// @brief Field arrayLock, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_arrayLock, put=__cordl_internal_set_arrayLock)) ::System::Object*  arrayLock;

/// @brief Field loopItems, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopItems, put=__cordl_internal_set_loopItems)) ::ArrayW<::Cysharp::Threading::Tasks::IPlayerLoopItem*>  loopItems;

/// @brief Field running, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_running, put=__cordl_internal_set_running)) bool  running;

/// @brief Field runningAndQueueLock, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_runningAndQueueLock, put=__cordl_internal_set_runningAndQueueLock)) ::System::Object*  runningAndQueueLock;

/// @brief Field tail, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_tail, put=__cordl_internal_set_tail)) int32_t  tail;

/// @brief Field timing, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_timing, put=__cordl_internal_set_timing)) ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing;

/// @brief Field unhandledExceptionCallback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_unhandledExceptionCallback, put=__cordl_internal_set_unhandledExceptionCallback)) ::System::Action_1<::System::Exception*>*  unhandledExceptionCallback;

/// @brief Field waitQueue, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_waitQueue, put=__cordl_internal_set_waitQueue)) ::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::Cysharp::Threading::Tasks::IPlayerLoopItem*>*  waitQueue;

/// @brief Method AddAction, addr 0x181e7eb40, size 0x270, virtual false, abstract: false, final false
inline void AddAction(::Cysharp::Threading::Tasks::IPlayerLoopItem*  item) ;

/// @brief Method Clear, addr 0x181e7edb0, size 0x130, virtual false, abstract: false, final false
inline int32_t Clear() ;

/// @brief Method EarlyUpdate, addr 0x181e7eee0, size 0x10, virtual false, abstract: false, final false
inline void EarlyUpdate() ;

/// @brief Method FixedUpdate, addr 0x181e7eee0, size 0x10, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method Initialization, addr 0x181e7eee0, size 0x10, virtual false, abstract: false, final false
inline void Initialization() ;

/// @brief Method LastEarlyUpdate, addr 0x181e7eee0, size 0x10, virtual false, abstract: false, final false
inline void LastEarlyUpdate() ;

/// @brief Method LastFixedUpdate, addr 0x181e7eee0, size 0x10, virtual false, abstract: false, final false
inline void LastFixedUpdate() ;

/// @brief Method LastInitialization, addr 0x181e7eee0, size 0x10, virtual false, abstract: false, final false
inline void LastInitialization() ;

/// @brief Method LastPostLateUpdate, addr 0x181e7eee0, size 0x10, virtual false, abstract: false, final false
inline void LastPostLateUpdate() ;

/// @brief Method LastPreLateUpdate, addr 0x181e7eee0, size 0x10, virtual false, abstract: false, final false
inline void LastPreLateUpdate() ;

/// @brief Method LastPreUpdate, addr 0x181e7eee0, size 0x10, virtual false, abstract: false, final false
inline void LastPreUpdate() ;

/// @brief Method LastTimeUpdate, addr 0x181e7eee0, size 0x10, virtual false, abstract: false, final false
inline void LastTimeUpdate() ;

/// @brief Method LastUpdate, addr 0x181e7eee0, size 0x10, virtual false, abstract: false, final false
inline void LastUpdate() ;

static inline ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner* New_ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing) ;

/// @brief Method PostLateUpdate, addr 0x181e7eee0, size 0x10, virtual false, abstract: false, final false
inline void PostLateUpdate() ;

/// @brief Method PreLateUpdate, addr 0x181e7eee0, size 0x10, virtual false, abstract: false, final false
inline void PreLateUpdate() ;

/// @brief Method PreUpdate, addr 0x181e7eee0, size 0x10, virtual false, abstract: false, final false
inline void PreUpdate() ;

/// @brief Method Run, addr 0x181e7eee0, size 0x10, virtual false, abstract: false, final false
inline void Run() ;

/// @brief Method RunCore, addr 0x181e7eef0, size 0x580, virtual false, abstract: false, final false
inline void RunCore() ;

/// @brief Method TimeUpdate, addr 0x181e7eee0, size 0x10, virtual false, abstract: false, final false
inline void TimeUpdate() ;

/// @brief Method Update, addr 0x181e7eee0, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Object* const& __cordl_internal_get_arrayLock() const;

constexpr ::System::Object*& __cordl_internal_get_arrayLock() ;

constexpr ::ArrayW<::Cysharp::Threading::Tasks::IPlayerLoopItem*> const& __cordl_internal_get_loopItems() const;

constexpr ::ArrayW<::Cysharp::Threading::Tasks::IPlayerLoopItem*>& __cordl_internal_get_loopItems() ;

constexpr bool const& __cordl_internal_get_running() const;

constexpr bool& __cordl_internal_get_running() ;

constexpr ::System::Object* const& __cordl_internal_get_runningAndQueueLock() const;

constexpr ::System::Object*& __cordl_internal_get_runningAndQueueLock() ;

constexpr int32_t const& __cordl_internal_get_tail() const;

constexpr int32_t& __cordl_internal_get_tail() ;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& __cordl_internal_get_timing() const;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& __cordl_internal_get_timing() ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get_unhandledExceptionCallback() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get_unhandledExceptionCallback() ;

constexpr ::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::Cysharp::Threading::Tasks::IPlayerLoopItem*>* const& __cordl_internal_get_waitQueue() const;

constexpr ::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::Cysharp::Threading::Tasks::IPlayerLoopItem*>*& __cordl_internal_get_waitQueue() ;

constexpr void __cordl_internal_set_arrayLock(::System::Object*  value) ;

constexpr void __cordl_internal_set_loopItems(::ArrayW<::Cysharp::Threading::Tasks::IPlayerLoopItem*>  value) ;

constexpr void __cordl_internal_set_running(bool  value) ;

constexpr void __cordl_internal_set_runningAndQueueLock(::System::Object*  value) ;

constexpr void __cordl_internal_set_tail(int32_t  value) ;

constexpr void __cordl_internal_set_timing(::Cysharp::Threading::Tasks::PlayerLoopTiming  value) ;

constexpr void __cordl_internal_set_unhandledExceptionCallback(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_waitQueue(::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::Cysharp::Threading::Tasks::IPlayerLoopItem*>*  value) ;

/// @brief Method .ctor, addr 0x181e7f470, size 0x240, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerLoopRunner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerLoopRunner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerLoopRunner(PlayerLoopRunner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLoopRunner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerLoopRunner(PlayerLoopRunner const& ) = delete;

/// @brief Field InitialSize offset 0xffffffff size 0x4
static constexpr int32_t  InitialSize{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14719};

/// @brief Field timing, offset: 0x10, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  ___timing;

/// @brief Field runningAndQueueLock, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___runningAndQueueLock;

/// @brief Field arrayLock, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___arrayLock;

/// @brief Field unhandledExceptionCallback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  ___unhandledExceptionCallback;

/// @brief Field tail, offset: 0x30, size: 0x4, def value: None
 int32_t  ___tail;

/// @brief Field running, offset: 0x34, size: 0x1, def value: None
 bool  ___running;

/// @brief Field loopItems, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::Cysharp::Threading::Tasks::IPlayerLoopItem*>  ___loopItems;

/// @brief Field waitQueue, offset: 0x40, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::Cysharp::Threading::Tasks::IPlayerLoopItem*>*  ___waitQueue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner, ___timing) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner, ___runningAndQueueLock) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner, ___arrayLock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner, ___unhandledExceptionCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner, ___tail) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner, ___running) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner, ___loopItems) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner, ___waitQueue) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Internal
