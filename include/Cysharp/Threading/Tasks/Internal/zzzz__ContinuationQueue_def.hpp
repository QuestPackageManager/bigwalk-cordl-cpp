#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/ContinuationQueue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/Threading/zzzz__SpinLock_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContinuationQueue)
namespace Cysharp::Threading::Tasks {
struct PlayerLoopTiming;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
class ContinuationQueue;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Internal::ContinuationQueue*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Internal::ContinuationQueue*, "Cysharp.Threading.Tasks.Internal", "ContinuationQueue");
// Dependencies Cysharp.Threading.Tasks.PlayerLoopTiming, System.Action, System.Object, System.Threading.SpinLock
namespace Cysharp::Threading::Tasks::Internal {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.ContinuationQueue
class CORDL_TYPE ContinuationQueue : public ::System::Object {
public:
// Declarations
/// @brief Field actionList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_actionList, put=__cordl_internal_set_actionList)) ::ArrayW<::System::Action*>  actionList;

/// @brief Field actionListCount, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_actionListCount, put=__cordl_internal_set_actionListCount)) int32_t  actionListCount;

/// @brief Field dequing, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_dequing, put=__cordl_internal_set_dequing)) bool  dequing;

/// @brief Field gate, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_gate, put=__cordl_internal_set_gate)) ::System::Threading::SpinLock  gate;

/// @brief Field timing, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_timing, put=__cordl_internal_set_timing)) ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing;

/// @brief Field waitingList, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_waitingList, put=__cordl_internal_set_waitingList)) ::ArrayW<::System::Action*>  waitingList;

/// @brief Field waitingListCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_waitingListCount, put=__cordl_internal_set_waitingListCount)) int32_t  waitingListCount;

/// @brief Method Clear, addr 0x181e7cd10, size 0x80, virtual false, abstract: false, final false
inline int32_t Clear() ;

/// @brief Method EarlyUpdate, addr 0x181e7cd90, size 0x10, virtual false, abstract: false, final false
inline void EarlyUpdate() ;

/// @brief Method Enqueue, addr 0x181e7cda0, size 0x210, virtual false, abstract: false, final false
inline void Enqueue(::System::Action*  continuation) ;

/// @brief Method FixedUpdate, addr 0x181e7cd90, size 0x10, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method Initialization, addr 0x181e7cd90, size 0x10, virtual false, abstract: false, final false
inline void Initialization() ;

/// @brief Method LastEarlyUpdate, addr 0x181e7cd90, size 0x10, virtual false, abstract: false, final false
inline void LastEarlyUpdate() ;

/// @brief Method LastFixedUpdate, addr 0x181e7cd90, size 0x10, virtual false, abstract: false, final false
inline void LastFixedUpdate() ;

/// @brief Method LastInitialization, addr 0x181e7cd90, size 0x10, virtual false, abstract: false, final false
inline void LastInitialization() ;

/// @brief Method LastPostLateUpdate, addr 0x181e7cd90, size 0x10, virtual false, abstract: false, final false
inline void LastPostLateUpdate() ;

/// @brief Method LastPreLateUpdate, addr 0x181e7cd90, size 0x10, virtual false, abstract: false, final false
inline void LastPreLateUpdate() ;

/// @brief Method LastPreUpdate, addr 0x181e7cd90, size 0x10, virtual false, abstract: false, final false
inline void LastPreUpdate() ;

/// @brief Method LastTimeUpdate, addr 0x181e7cd90, size 0x10, virtual false, abstract: false, final false
inline void LastTimeUpdate() ;

/// @brief Method LastUpdate, addr 0x181e7cd90, size 0x10, virtual false, abstract: false, final false
inline void LastUpdate() ;

static inline ::Cysharp::Threading::Tasks::Internal::ContinuationQueue* New_ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing) ;

/// @brief Method PostLateUpdate, addr 0x181e7cd90, size 0x10, virtual false, abstract: false, final false
inline void PostLateUpdate() ;

/// @brief Method PreLateUpdate, addr 0x181e7cd90, size 0x10, virtual false, abstract: false, final false
inline void PreLateUpdate() ;

/// @brief Method PreUpdate, addr 0x181e7cd90, size 0x10, virtual false, abstract: false, final false
inline void PreUpdate() ;

/// @brief Method Run, addr 0x181e7cd90, size 0x10, virtual false, abstract: false, final false
inline void Run() ;

/// @brief Method RunCore, addr 0x181e7cfb0, size 0x270, virtual false, abstract: false, final false
inline void RunCore() ;

/// @brief Method TimeUpdate, addr 0x181e7cd90, size 0x10, virtual false, abstract: false, final false
inline void TimeUpdate() ;

/// @brief Method Update, addr 0x181e7cd90, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::System::Action*> const& __cordl_internal_get_actionList() const;

constexpr ::ArrayW<::System::Action*>& __cordl_internal_get_actionList() ;

constexpr int32_t const& __cordl_internal_get_actionListCount() const;

constexpr int32_t& __cordl_internal_get_actionListCount() ;

constexpr bool const& __cordl_internal_get_dequing() const;

constexpr bool& __cordl_internal_get_dequing() ;

constexpr ::System::Threading::SpinLock const& __cordl_internal_get_gate() const;

constexpr ::System::Threading::SpinLock& __cordl_internal_get_gate() ;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& __cordl_internal_get_timing() const;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& __cordl_internal_get_timing() ;

constexpr ::ArrayW<::System::Action*> const& __cordl_internal_get_waitingList() const;

constexpr ::ArrayW<::System::Action*>& __cordl_internal_get_waitingList() ;

constexpr int32_t const& __cordl_internal_get_waitingListCount() const;

constexpr int32_t& __cordl_internal_get_waitingListCount() ;

constexpr void __cordl_internal_set_actionList(::ArrayW<::System::Action*>  value) ;

constexpr void __cordl_internal_set_actionListCount(int32_t  value) ;

constexpr void __cordl_internal_set_dequing(bool  value) ;

constexpr void __cordl_internal_set_gate(::System::Threading::SpinLock  value) ;

constexpr void __cordl_internal_set_timing(::Cysharp::Threading::Tasks::PlayerLoopTiming  value) ;

constexpr void __cordl_internal_set_waitingList(::ArrayW<::System::Action*>  value) ;

constexpr void __cordl_internal_set_waitingListCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x181e7d220, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContinuationQueue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContinuationQueue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuationQueue(ContinuationQueue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationQueue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuationQueue(ContinuationQueue const& ) = delete;

/// @brief Field InitialSize offset 0xffffffff size 0x4
static constexpr int32_t  InitialSize{static_cast<int32_t>(0x10)};

/// @brief Field MaxArrayLength offset 0xffffffff size 0x4
static constexpr int32_t  MaxArrayLength{static_cast<int32_t>(0x7fefffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14713};

/// @brief Field timing, offset: 0x10, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  ___timing;

/// @brief Field gate, offset: 0x14, size: 0x4, def value: None
 ::System::Threading::SpinLock  ___gate;

/// @brief Field dequing, offset: 0x18, size: 0x1, def value: None
 bool  ___dequing;

/// @brief Field actionListCount, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___actionListCount;

/// @brief Field actionList, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::System::Action*>  ___actionList;

/// @brief Field waitingListCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ___waitingListCount;

/// @brief Field waitingList, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::System::Action*>  ___waitingList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::ContinuationQueue, ___timing) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::ContinuationQueue, ___gate) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::ContinuationQueue, ___dequing) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::ContinuationQueue, ___actionListCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::ContinuationQueue, ___actionList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::ContinuationQueue, ___waitingListCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::ContinuationQueue, ___waitingList) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::Internal::ContinuationQueue) == 0x38, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Internal
