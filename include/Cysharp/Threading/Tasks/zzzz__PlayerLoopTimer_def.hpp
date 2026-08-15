#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/PlayerLoopTimer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlayerLoopTimer)
namespace Cysharp::Threading::Tasks {
struct DelayType;
}
namespace Cysharp::Threading::Tasks {
class IPlayerLoopItem;
}
namespace Cysharp::Threading::Tasks {
struct PlayerLoopTiming;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class PlayerLoopTimer;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::PlayerLoopTimer*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::PlayerLoopTimer*, "Cysharp.Threading.Tasks", "PlayerLoopTimer");
// Dependencies Cysharp.Threading.Tasks.PlayerLoopTiming, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.PlayerLoopTimer
class CORDL_TYPE PlayerLoopTimer : public ::System::Object {
public:
// Declarations
/// @brief Field cancellationToken, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field isDisposed, offset 0x2f, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDisposed, put=__cordl_internal_set_isDisposed)) bool  isDisposed;

/// @brief Field isRunning, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRunning, put=__cordl_internal_set_isRunning)) bool  isRunning;

/// @brief Field periodic, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_periodic, put=__cordl_internal_set_periodic)) bool  periodic;

/// @brief Field playerLoopTiming, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerLoopTiming, put=__cordl_internal_set_playerLoopTiming)) ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming;

/// @brief Field state, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::System::Object*  state;

/// @brief Field timerCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_timerCallback, put=__cordl_internal_set_timerCallback)) ::System::Action_1<::System::Object*>*  timerCallback;

/// @brief Field tryStop, offset 0x2e, size 0x1 
 __declspec(property(get=__cordl_internal_get_tryStop, put=__cordl_internal_set_tryStop)) bool  tryStop;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Create, addr 0x181e62a00, size 0xf0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::PlayerLoopTimer* Create(::System::TimeSpan  interval, bool  periodic, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  timerCallback, ::System::Object*  state) ;

/// @brief Method Cysharp.Threading.Tasks.IPlayerLoopItem.MoveNext, addr 0x181e62af0, size 0xa0, virtual true, abstract: false, final true
inline bool Cysharp_Threading_Tasks_IPlayerLoopItem_MoveNext() ;

/// @brief Method Dispose, addr 0x181e62b90, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNextCore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool MoveNextCore() ;

static inline ::Cysharp::Threading::Tasks::PlayerLoopTimer* New_ctor(bool  periodic, ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  timerCallback, ::System::Object*  state) ;

/// @brief Method ResetCore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ResetCore(::System::Nullable_1<::System::TimeSpan>  newInterval) ;

/// @brief Method Restart, addr 0x181e62ba0, size 0x90, virtual false, abstract: false, final false
inline void Restart() ;

/// @brief Method Restart, addr 0x181e62c30, size 0xa0, virtual false, abstract: false, final false
inline void Restart(::System::TimeSpan  interval) ;

/// @brief Method StartNew, addr 0x181e62cd0, size 0xd0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::PlayerLoopTimer* StartNew(::System::TimeSpan  interval, bool  periodic, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  timerCallback, ::System::Object*  state) ;

/// @brief Method Stop, addr 0x181e62da0, size 0x10, virtual false, abstract: false, final false
inline void Stop() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr bool const& __cordl_internal_get_isDisposed() const;

constexpr bool& __cordl_internal_get_isDisposed() ;

constexpr bool const& __cordl_internal_get_isRunning() const;

constexpr bool& __cordl_internal_get_isRunning() ;

constexpr bool const& __cordl_internal_get_periodic() const;

constexpr bool& __cordl_internal_get_periodic() ;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& __cordl_internal_get_playerLoopTiming() const;

constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& __cordl_internal_get_playerLoopTiming() ;

constexpr ::System::Object* const& __cordl_internal_get_state() const;

constexpr ::System::Object*& __cordl_internal_get_state() ;

constexpr ::System::Action_1<::System::Object*>* const& __cordl_internal_get_timerCallback() const;

constexpr ::System::Action_1<::System::Object*>*& __cordl_internal_get_timerCallback() ;

constexpr bool const& __cordl_internal_get_tryStop() const;

constexpr bool& __cordl_internal_get_tryStop() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_isDisposed(bool  value) ;

constexpr void __cordl_internal_set_isRunning(bool  value) ;

constexpr void __cordl_internal_set_periodic(bool  value) ;

constexpr void __cordl_internal_set_playerLoopTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming  value) ;

constexpr void __cordl_internal_set_state(::System::Object*  value) ;

constexpr void __cordl_internal_set_timerCallback(::System::Action_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_tryStop(bool  value) ;

/// @brief Method .ctor, addr 0x181e62db0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(bool  periodic, ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  timerCallback, ::System::Object*  state) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerLoopTimer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerLoopTimer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerLoopTimer(PlayerLoopTimer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLoopTimer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerLoopTimer(PlayerLoopTimer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14256};

/// @brief Field cancellationToken, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field timerCallback, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::System::Object*>*  ___timerCallback;

/// @brief Field state, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___state;

/// @brief Field playerLoopTiming, offset: 0x28, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  ___playerLoopTiming;

/// @brief Field periodic, offset: 0x2c, size: 0x1, def value: None
 bool  ___periodic;

/// @brief Field isRunning, offset: 0x2d, size: 0x1, def value: None
 bool  ___isRunning;

/// @brief Field tryStop, offset: 0x2e, size: 0x1, def value: None
 bool  ___tryStop;

/// @brief Field isDisposed, offset: 0x2f, size: 0x1, def value: None
 bool  ___isDisposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::PlayerLoopTimer, ___cancellationToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::PlayerLoopTimer, ___timerCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::PlayerLoopTimer, ___state) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::PlayerLoopTimer, ___playerLoopTiming) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::PlayerLoopTimer, ___periodic) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::PlayerLoopTimer, ___isRunning) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::PlayerLoopTimer, ___tryStop) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::PlayerLoopTimer, ___isDisposed) == 0x2f, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::PlayerLoopTimer) == 0x30, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
