#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IgnoreTimeScalePlayerLoopTimer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTimer_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoreTimeScalePlayerLoopTimer)
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
class IgnoreTimeScalePlayerLoopTimer;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::IgnoreTimeScalePlayerLoopTimer*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::IgnoreTimeScalePlayerLoopTimer*, "Cysharp.Threading.Tasks", "IgnoreTimeScalePlayerLoopTimer");
// Dependencies Cysharp.Threading.Tasks.PlayerLoopTimer
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.IgnoreTimeScalePlayerLoopTimer
class CORDL_TYPE IgnoreTimeScalePlayerLoopTimer : public ::Cysharp::Threading::Tasks::PlayerLoopTimer {
public:
// Declarations
/// @brief Field elapsed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_elapsed, put=__cordl_internal_set_elapsed)) float_t  elapsed;

/// @brief Field initialFrame, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialFrame, put=__cordl_internal_set_initialFrame)) int32_t  initialFrame;

/// @brief Field interval, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_interval, put=__cordl_internal_set_interval)) float_t  interval;

/// @brief Method MoveNextCore, addr 0x181e60550, size 0x70, virtual true, abstract: false, final false
inline bool MoveNextCore() ;

static inline ::Cysharp::Threading::Tasks::IgnoreTimeScalePlayerLoopTimer* New_ctor(::System::TimeSpan  interval, bool  periodic, ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  timerCallback, ::System::Object*  state) ;

/// @brief Method ResetCore, addr 0x181e5fa10, size 0xc0, virtual true, abstract: false, final false
inline void ResetCore(::System::Nullable_1<::System::TimeSpan>  interval) ;

constexpr float_t const& __cordl_internal_get_elapsed() const;

constexpr float_t& __cordl_internal_get_elapsed() ;

constexpr int32_t const& __cordl_internal_get_initialFrame() const;

constexpr int32_t& __cordl_internal_get_initialFrame() ;

constexpr float_t const& __cordl_internal_get_interval() const;

constexpr float_t& __cordl_internal_get_interval() ;

constexpr void __cordl_internal_set_elapsed(float_t  value) ;

constexpr void __cordl_internal_set_initialFrame(int32_t  value) ;

constexpr void __cordl_internal_set_interval(float_t  value) ;

/// @brief Method .ctor, addr 0x181e5fad0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::TimeSpan  interval, bool  periodic, ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  timerCallback, ::System::Object*  state) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IgnoreTimeScalePlayerLoopTimer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IgnoreTimeScalePlayerLoopTimer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IgnoreTimeScalePlayerLoopTimer(IgnoreTimeScalePlayerLoopTimer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IgnoreTimeScalePlayerLoopTimer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IgnoreTimeScalePlayerLoopTimer(IgnoreTimeScalePlayerLoopTimer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14258};

/// @brief Field initialFrame, offset: 0x30, size: 0x4, def value: None
 int32_t  ___initialFrame;

/// @brief Field elapsed, offset: 0x34, size: 0x4, def value: None
 float_t  ___elapsed;

/// @brief Field interval, offset: 0x38, size: 0x4, def value: None
 float_t  ___interval;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::IgnoreTimeScalePlayerLoopTimer, ___initialFrame) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::IgnoreTimeScalePlayerLoopTimer, ___elapsed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::IgnoreTimeScalePlayerLoopTimer, ___interval) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::IgnoreTimeScalePlayerLoopTimer) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
