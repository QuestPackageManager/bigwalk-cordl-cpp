#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/RealtimePlayerLoopTimer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Internal/zzzz__ValueStopwatch_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTimer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RealtimePlayerLoopTimer)
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
class RealtimePlayerLoopTimer;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer*, "Cysharp.Threading.Tasks", "RealtimePlayerLoopTimer");
// Dependencies Cysharp.Threading.Tasks.Internal.ValueStopwatch, Cysharp.Threading.Tasks.PlayerLoopTimer
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.RealtimePlayerLoopTimer
class CORDL_TYPE RealtimePlayerLoopTimer : public ::Cysharp::Threading::Tasks::PlayerLoopTimer {
public:
// Declarations
/// @brief Field intervalTicks, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_intervalTicks, put=__cordl_internal_set_intervalTicks)) int64_t  intervalTicks;

/// @brief Field stopwatch, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_stopwatch, put=__cordl_internal_set_stopwatch)) ::Cysharp::Threading::Tasks::Internal::ValueStopwatch  stopwatch;

/// @brief Method MoveNextCore, addr 0x181e62e00, size 0x30, virtual true, abstract: false, final false
inline bool MoveNextCore() ;

static inline ::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer* New_ctor(::System::TimeSpan  interval, bool  periodic, ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  timerCallback, ::System::Object*  state) ;

/// @brief Method ResetCore, addr 0x181e62e30, size 0x40, virtual true, abstract: false, final false
inline void ResetCore(::System::Nullable_1<::System::TimeSpan>  interval) ;

constexpr int64_t const& __cordl_internal_get_intervalTicks() const;

constexpr int64_t& __cordl_internal_get_intervalTicks() ;

constexpr ::Cysharp::Threading::Tasks::Internal::ValueStopwatch const& __cordl_internal_get_stopwatch() const;

constexpr ::Cysharp::Threading::Tasks::Internal::ValueStopwatch& __cordl_internal_get_stopwatch() ;

constexpr void __cordl_internal_set_intervalTicks(int64_t  value) ;

constexpr void __cordl_internal_set_stopwatch(::Cysharp::Threading::Tasks::Internal::ValueStopwatch  value) ;

/// @brief Method .ctor, addr 0x181e5fad0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::TimeSpan  interval, bool  periodic, ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  timerCallback, ::System::Object*  state) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RealtimePlayerLoopTimer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RealtimePlayerLoopTimer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RealtimePlayerLoopTimer(RealtimePlayerLoopTimer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RealtimePlayerLoopTimer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RealtimePlayerLoopTimer(RealtimePlayerLoopTimer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14259};

/// @brief Field stopwatch, offset: 0x30, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Internal::ValueStopwatch  ___stopwatch;

/// @brief Field intervalTicks, offset: 0x38, size: 0x8, def value: None
 int64_t  ___intervalTicks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer, ___stopwatch) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer, ___intervalTicks) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::RealtimePlayerLoopTimer) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
