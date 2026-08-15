#pragma once
// IWYU pragma private; include "Mirror/Stats.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Stats)
// Forward declare root types
namespace Mirror {
struct Stats;
}
// Write type traits
MARK_VAL_T(::Mirror::Stats);
DEFINE_IL2CPP_CLASS(::Mirror::Stats, "Mirror", "Stats");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.Stats
struct CORDL_TYPE Stats {
public:
// Declarations
/// @brief Method .ctor, addr 0x18152f060, size 0x100, virtual false, abstract: false, final false
inline void _ctor(int32_t  connections, double_t  uptime, int32_t  configuredTickRate, int32_t  actualTickRate, int64_t  sentBytesPerSecond, int64_t  receiveBytesPerSecond, float_t  serverTickInterval, double_t  fullUpdateAvg, double_t  serverEarlyAvg, double_t  serverLateAvg, double_t  transportEarlyAvg, double_t  transportLateAvg) ;

// Ctor Parameters []
// @brief default ctor
constexpr Stats() ;

// Ctor Parameters [CppParam { name: "connections", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "uptime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "configuredTickRate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "actualTickRate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sentBytesPerSecond", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "receiveBytesPerSecond", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "serverTickInterval", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fullUpdateAvg", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "serverEarlyAvg", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "serverLateAvg", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "transportEarlyAvg", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "transportLateAvg", ty: "double_t", modifiers: "", def_value: None }]
constexpr Stats(int32_t  connections, double_t  uptime, int32_t  configuredTickRate, int32_t  actualTickRate, int64_t  sentBytesPerSecond, int64_t  receiveBytesPerSecond, float_t  serverTickInterval, double_t  fullUpdateAvg, double_t  serverEarlyAvg, double_t  serverLateAvg, double_t  transportEarlyAvg, double_t  transportLateAvg) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19249};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field connections, offset: 0x0, size: 0x4, def value: None
 int32_t  connections;

/// @brief Field uptime, offset: 0x8, size: 0x8, def value: None
 double_t  uptime;

/// @brief Field configuredTickRate, offset: 0x10, size: 0x4, def value: None
 int32_t  configuredTickRate;

/// @brief Field actualTickRate, offset: 0x14, size: 0x4, def value: None
 int32_t  actualTickRate;

/// @brief Field sentBytesPerSecond, offset: 0x18, size: 0x8, def value: None
 int64_t  sentBytesPerSecond;

/// @brief Field receiveBytesPerSecond, offset: 0x20, size: 0x8, def value: None
 int64_t  receiveBytesPerSecond;

/// @brief Field serverTickInterval, offset: 0x28, size: 0x4, def value: None
 float_t  serverTickInterval;

/// @brief Field fullUpdateAvg, offset: 0x30, size: 0x8, def value: None
 double_t  fullUpdateAvg;

/// @brief Field serverEarlyAvg, offset: 0x38, size: 0x8, def value: None
 double_t  serverEarlyAvg;

/// @brief Field serverLateAvg, offset: 0x40, size: 0x8, def value: None
 double_t  serverLateAvg;

/// @brief Field transportEarlyAvg, offset: 0x48, size: 0x8, def value: None
 double_t  transportEarlyAvg;

/// @brief Field transportLateAvg, offset: 0x50, size: 0x8, def value: None
 double_t  transportLateAvg;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Stats, connections) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Stats, uptime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::Stats, configuredTickRate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Stats, actualTickRate) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Mirror::Stats, sentBytesPerSecond) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Stats, receiveBytesPerSecond) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Stats, serverTickInterval) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Stats, fullUpdateAvg) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::Stats, serverEarlyAvg) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::Stats, serverLateAvg) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::Stats, transportEarlyAvg) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::Stats, transportLateAvg) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Mirror::Stats) == 0x58, "Size mismatch!");

} // namespace end def Mirror
