#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/InjectPlayerLoopTimings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InjectPlayerLoopTimings)
// Forward declare root types
namespace Cysharp::Threading::Tasks {
struct InjectPlayerLoopTimings;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::InjectPlayerLoopTimings);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::InjectPlayerLoopTimings, "Cysharp.Threading.Tasks", "InjectPlayerLoopTimings");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.InjectPlayerLoopTimings
struct CORDL_TYPE InjectPlayerLoopTimings {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InjectPlayerLoopTimings_Unwrapped
enum struct __InjectPlayerLoopTimings_Unwrapped : int32_t {
__E_All = static_cast<int32_t>(0xffff),
__E_Standard = static_cast<int32_t>(0x7555),
__E_Minimum = static_cast<int32_t>(0x2110),
__E_Initialization = static_cast<int32_t>(0x1),
__E_LastInitialization = static_cast<int32_t>(0x2),
__E_EarlyUpdate = static_cast<int32_t>(0x4),
__E_LastEarlyUpdate = static_cast<int32_t>(0x8),
__E_FixedUpdate = static_cast<int32_t>(0x10),
__E_LastFixedUpdate = static_cast<int32_t>(0x20),
__E_PreUpdate = static_cast<int32_t>(0x40),
__E_LastPreUpdate = static_cast<int32_t>(0x80),
__E_Update = static_cast<int32_t>(0x100),
__E_LastUpdate = static_cast<int32_t>(0x200),
__E_PreLateUpdate = static_cast<int32_t>(0x400),
__E_LastPreLateUpdate = static_cast<int32_t>(0x800),
__E_PostLateUpdate = static_cast<int32_t>(0x1000),
__E_LastPostLateUpdate = static_cast<int32_t>(0x2000),
__E_TimeUpdate = static_cast<int32_t>(0x4000),
__E_LastTimeUpdate = static_cast<int32_t>(0x8000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InjectPlayerLoopTimings_Unwrapped () const noexcept {
return static_cast<__InjectPlayerLoopTimings_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InjectPlayerLoopTimings() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InjectPlayerLoopTimings(int32_t  value__) noexcept;

/// @brief Field All value: I32(65535)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const All;

/// @brief Field EarlyUpdate value: I32(4)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const EarlyUpdate;

/// @brief Field FixedUpdate value: I32(16)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const FixedUpdate;

/// @brief Field Initialization value: I32(1)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const Initialization;

/// @brief Field LastEarlyUpdate value: I32(8)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const LastEarlyUpdate;

/// @brief Field LastFixedUpdate value: I32(32)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const LastFixedUpdate;

/// @brief Field LastInitialization value: I32(2)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const LastInitialization;

/// @brief Field LastPostLateUpdate value: I32(8192)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const LastPostLateUpdate;

/// @brief Field LastPreLateUpdate value: I32(2048)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const LastPreLateUpdate;

/// @brief Field LastPreUpdate value: I32(128)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const LastPreUpdate;

/// @brief Field LastTimeUpdate value: I32(32768)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const LastTimeUpdate;

/// @brief Field LastUpdate value: I32(512)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const LastUpdate;

/// @brief Field Minimum value: I32(8464)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const Minimum;

/// @brief Field PostLateUpdate value: I32(4096)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const PostLateUpdate;

/// @brief Field PreLateUpdate value: I32(1024)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const PreLateUpdate;

/// @brief Field PreUpdate value: I32(64)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const PreUpdate;

/// @brief Field Standard value: I32(30037)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const Standard;

/// @brief Field TimeUpdate value: I32(16384)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const TimeUpdate;

/// @brief Field Update value: I32(256)
static ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings const Update;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14251};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::InjectPlayerLoopTimings, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::InjectPlayerLoopTimings) == 0x4, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
