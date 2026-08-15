#pragma once
// IWYU pragma private; include "Mirror/SnapshotInterpolationSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SnapshotInterpolationSettings)
// Forward declare root types
namespace Mirror {
class SnapshotInterpolationSettings;
}
// Write type traits
MARK_REF_T(::Mirror::SnapshotInterpolationSettings*);
DEFINE_IL2CPP_CLASS(::Mirror::SnapshotInterpolationSettings*, "Mirror", "SnapshotInterpolationSettings");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.SnapshotInterpolationSettings
class CORDL_TYPE SnapshotInterpolationSettings : public ::System::Object {
public:
// Declarations
/// @brief Field bufferTimeMultiplier, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_bufferTimeMultiplier, put=__cordl_internal_set_bufferTimeMultiplier)) double_t  bufferTimeMultiplier;

/// @brief Field catchupNegativeThreshold, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_catchupNegativeThreshold, put=__cordl_internal_set_catchupNegativeThreshold)) float_t  catchupNegativeThreshold;

/// @brief Field catchupPositiveThreshold, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_catchupPositiveThreshold, put=__cordl_internal_set_catchupPositiveThreshold)) float_t  catchupPositiveThreshold;

/// @brief Field catchupSpeed, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_catchupSpeed, put=__cordl_internal_set_catchupSpeed)) double_t  catchupSpeed;

/// @brief Field deliveryTimeEmaDuration, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_deliveryTimeEmaDuration, put=__cordl_internal_set_deliveryTimeEmaDuration)) int32_t  deliveryTimeEmaDuration;

/// @brief Field driftEmaDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_driftEmaDuration, put=__cordl_internal_set_driftEmaDuration)) int32_t  driftEmaDuration;

/// @brief Field dynamicAdjustment, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_dynamicAdjustment, put=__cordl_internal_set_dynamicAdjustment)) bool  dynamicAdjustment;

/// @brief Field dynamicAdjustmentTolerance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_dynamicAdjustmentTolerance, put=__cordl_internal_set_dynamicAdjustmentTolerance)) float_t  dynamicAdjustmentTolerance;

/// @brief Field slowdownSpeed, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_slowdownSpeed, put=__cordl_internal_set_slowdownSpeed)) double_t  slowdownSpeed;

static inline ::Mirror::SnapshotInterpolationSettings* New_ctor() ;

constexpr double_t const& __cordl_internal_get_bufferTimeMultiplier() const;

constexpr double_t& __cordl_internal_get_bufferTimeMultiplier() ;

constexpr float_t const& __cordl_internal_get_catchupNegativeThreshold() const;

constexpr float_t& __cordl_internal_get_catchupNegativeThreshold() ;

constexpr float_t const& __cordl_internal_get_catchupPositiveThreshold() const;

constexpr float_t& __cordl_internal_get_catchupPositiveThreshold() ;

constexpr double_t const& __cordl_internal_get_catchupSpeed() const;

constexpr double_t& __cordl_internal_get_catchupSpeed() ;

constexpr int32_t const& __cordl_internal_get_deliveryTimeEmaDuration() const;

constexpr int32_t& __cordl_internal_get_deliveryTimeEmaDuration() ;

constexpr int32_t const& __cordl_internal_get_driftEmaDuration() const;

constexpr int32_t& __cordl_internal_get_driftEmaDuration() ;

constexpr bool const& __cordl_internal_get_dynamicAdjustment() const;

constexpr bool& __cordl_internal_get_dynamicAdjustment() ;

constexpr float_t const& __cordl_internal_get_dynamicAdjustmentTolerance() const;

constexpr float_t& __cordl_internal_get_dynamicAdjustmentTolerance() ;

constexpr double_t const& __cordl_internal_get_slowdownSpeed() const;

constexpr double_t& __cordl_internal_get_slowdownSpeed() ;

constexpr void __cordl_internal_set_bufferTimeMultiplier(double_t  value) ;

constexpr void __cordl_internal_set_catchupNegativeThreshold(float_t  value) ;

constexpr void __cordl_internal_set_catchupPositiveThreshold(float_t  value) ;

constexpr void __cordl_internal_set_catchupSpeed(double_t  value) ;

constexpr void __cordl_internal_set_deliveryTimeEmaDuration(int32_t  value) ;

constexpr void __cordl_internal_set_driftEmaDuration(int32_t  value) ;

constexpr void __cordl_internal_set_dynamicAdjustment(bool  value) ;

constexpr void __cordl_internal_set_dynamicAdjustmentTolerance(float_t  value) ;

constexpr void __cordl_internal_set_slowdownSpeed(double_t  value) ;

/// @brief Method .ctor, addr 0x181597f90, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnapshotInterpolationSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnapshotInterpolationSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SnapshotInterpolationSettings(SnapshotInterpolationSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnapshotInterpolationSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnapshotInterpolationSettings(SnapshotInterpolationSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18355};

/// @brief Field bufferTimeMultiplier, offset: 0x10, size: 0x8, def value: None
 double_t  ___bufferTimeMultiplier;

/// @brief Field catchupNegativeThreshold, offset: 0x18, size: 0x4, def value: None
 float_t  ___catchupNegativeThreshold;

/// @brief Field catchupPositiveThreshold, offset: 0x1c, size: 0x4, def value: None
 float_t  ___catchupPositiveThreshold;

/// @brief Field catchupSpeed, offset: 0x20, size: 0x8, def value: None
 double_t  ___catchupSpeed;

/// @brief Field slowdownSpeed, offset: 0x28, size: 0x8, def value: None
 double_t  ___slowdownSpeed;

/// @brief Field driftEmaDuration, offset: 0x30, size: 0x4, def value: None
 int32_t  ___driftEmaDuration;

/// @brief Field dynamicAdjustment, offset: 0x34, size: 0x1, def value: None
 bool  ___dynamicAdjustment;

/// @brief Field dynamicAdjustmentTolerance, offset: 0x38, size: 0x4, def value: None
 float_t  ___dynamicAdjustmentTolerance;

/// @brief Field deliveryTimeEmaDuration, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___deliveryTimeEmaDuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SnapshotInterpolationSettings, ___bufferTimeMultiplier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::SnapshotInterpolationSettings, ___catchupNegativeThreshold) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::SnapshotInterpolationSettings, ___catchupPositiveThreshold) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Mirror::SnapshotInterpolationSettings, ___catchupSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::SnapshotInterpolationSettings, ___slowdownSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::SnapshotInterpolationSettings, ___driftEmaDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::SnapshotInterpolationSettings, ___dynamicAdjustment) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Mirror::SnapshotInterpolationSettings, ___dynamicAdjustmentTolerance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::SnapshotInterpolationSettings, ___deliveryTimeEmaDuration) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Mirror::SnapshotInterpolationSettings) == 0x40, "Size mismatch!");

} // namespace end def Mirror
