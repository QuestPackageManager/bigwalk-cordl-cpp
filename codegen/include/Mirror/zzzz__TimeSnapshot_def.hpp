#pragma once
// IWYU pragma private; include "Mirror/TimeSnapshot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TimeSnapshot)
namespace Mirror {
class Snapshot;
}
// Forward declare root types
namespace Mirror {
struct TimeSnapshot;
}
// Write type traits
MARK_VAL_T(::Mirror::TimeSnapshot);
DEFINE_IL2CPP_CLASS(::Mirror::TimeSnapshot, "Mirror", "TimeSnapshot");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.TimeSnapshot
struct CORDL_TYPE TimeSnapshot {
public:
// Declarations
 __declspec(property(get=get_localTime, put=set_localTime)) double_t  localTime;

 __declspec(property(get=get_remoteTime, put=set_remoteTime)) double_t  remoteTime;

/// @brief Convert operator to "::Mirror::Snapshot"
constexpr operator  ::Mirror::Snapshot*() ;

/// @brief Method .ctor, addr 0x1815987a0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(double_t  remoteTime, double_t  localTime) ;

/// @brief Method get_localTime, addr 0x18052ca20, size 0x10, virtual true, abstract: false, final true
inline double_t get_localTime() ;

/// @brief Method get_remoteTime, addr 0x180862f00, size 0x16430, virtual true, abstract: false, final true
inline double_t get_remoteTime() ;

/// @brief Convert to "::Mirror::Snapshot"
constexpr ::Mirror::Snapshot* i___Mirror__Snapshot() ;

/// @brief Method set_localTime, addr 0x18052ca30, size 0x10, virtual true, abstract: false, final true
inline void set_localTime(double_t  value) ;

/// @brief Method set_remoteTime, addr 0x181517da0, size 0x10, virtual true, abstract: false, final true
inline void set_remoteTime(double_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TimeSnapshot() ;

// Ctor Parameters [CppParam { name: "_remoteTime_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_localTime_k__BackingField", ty: "double_t", modifiers: "", def_value: None }]
constexpr TimeSnapshot(double_t  _remoteTime_k__BackingField, double_t  _localTime_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18356};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <remoteTime>k__BackingField, offset: 0x0, size: 0x8, def value: None
 double_t  _remoteTime_k__BackingField;

/// @brief Field <localTime>k__BackingField, offset: 0x8, size: 0x8, def value: None
 double_t  _localTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::TimeSnapshot, _remoteTime_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::TimeSnapshot, _localTime_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Mirror::TimeSnapshot) == 0x10, "Size mismatch!");

} // namespace end def Mirror
