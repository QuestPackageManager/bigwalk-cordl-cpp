#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/PlayerLoopTiming.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerLoopTiming)
// Forward declare root types
namespace Cysharp::Threading::Tasks {
struct PlayerLoopTiming;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::PlayerLoopTiming);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::PlayerLoopTiming, "Cysharp.Threading.Tasks", "PlayerLoopTiming");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.PlayerLoopTiming
struct CORDL_TYPE PlayerLoopTiming {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerLoopTiming_Unwrapped
enum struct __PlayerLoopTiming_Unwrapped : int32_t {
__E_Initialization = static_cast<int32_t>(0x0),
__E_LastInitialization = static_cast<int32_t>(0x1),
__E_EarlyUpdate = static_cast<int32_t>(0x2),
__E_LastEarlyUpdate = static_cast<int32_t>(0x3),
__E_FixedUpdate = static_cast<int32_t>(0x4),
__E_LastFixedUpdate = static_cast<int32_t>(0x5),
__E_PreUpdate = static_cast<int32_t>(0x6),
__E_LastPreUpdate = static_cast<int32_t>(0x7),
__E_Update = static_cast<int32_t>(0x8),
__E_LastUpdate = static_cast<int32_t>(0x9),
__E_PreLateUpdate = static_cast<int32_t>(0xa),
__E_LastPreLateUpdate = static_cast<int32_t>(0xb),
__E_PostLateUpdate = static_cast<int32_t>(0xc),
__E_LastPostLateUpdate = static_cast<int32_t>(0xd),
__E_TimeUpdate = static_cast<int32_t>(0xe),
__E_LastTimeUpdate = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerLoopTiming_Unwrapped () const noexcept {
return static_cast<__PlayerLoopTiming_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerLoopTiming() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerLoopTiming(int32_t  value__) noexcept;

/// @brief Field EarlyUpdate value: I32(2)
static ::Cysharp::Threading::Tasks::PlayerLoopTiming const EarlyUpdate;

/// @brief Field FixedUpdate value: I32(4)
static ::Cysharp::Threading::Tasks::PlayerLoopTiming const FixedUpdate;

/// @brief Field Initialization value: I32(0)
static ::Cysharp::Threading::Tasks::PlayerLoopTiming const Initialization;

/// @brief Field LastEarlyUpdate value: I32(3)
static ::Cysharp::Threading::Tasks::PlayerLoopTiming const LastEarlyUpdate;

/// @brief Field LastFixedUpdate value: I32(5)
static ::Cysharp::Threading::Tasks::PlayerLoopTiming const LastFixedUpdate;

/// @brief Field LastInitialization value: I32(1)
static ::Cysharp::Threading::Tasks::PlayerLoopTiming const LastInitialization;

/// @brief Field LastPostLateUpdate value: I32(13)
static ::Cysharp::Threading::Tasks::PlayerLoopTiming const LastPostLateUpdate;

/// @brief Field LastPreLateUpdate value: I32(11)
static ::Cysharp::Threading::Tasks::PlayerLoopTiming const LastPreLateUpdate;

/// @brief Field LastPreUpdate value: I32(7)
static ::Cysharp::Threading::Tasks::PlayerLoopTiming const LastPreUpdate;

/// @brief Field LastTimeUpdate value: I32(15)
static ::Cysharp::Threading::Tasks::PlayerLoopTiming const LastTimeUpdate;

/// @brief Field LastUpdate value: I32(9)
static ::Cysharp::Threading::Tasks::PlayerLoopTiming const LastUpdate;

/// @brief Field PostLateUpdate value: I32(12)
static ::Cysharp::Threading::Tasks::PlayerLoopTiming const PostLateUpdate;

/// @brief Field PreLateUpdate value: I32(10)
static ::Cysharp::Threading::Tasks::PlayerLoopTiming const PreLateUpdate;

/// @brief Field PreUpdate value: I32(6)
static ::Cysharp::Threading::Tasks::PlayerLoopTiming const PreUpdate;

/// @brief Field TimeUpdate value: I32(14)
static ::Cysharp::Threading::Tasks::PlayerLoopTiming const TimeUpdate;

/// @brief Field Update value: I32(8)
static ::Cysharp::Threading::Tasks::PlayerLoopTiming const Update;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14250};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::PlayerLoopTiming, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::PlayerLoopTiming) == 0x4, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
