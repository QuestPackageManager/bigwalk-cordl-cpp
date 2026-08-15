#pragma once
// IWYU pragma private; include "GlobalNamespace/BPMData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(BPMData)
// Forward declare root types
namespace GlobalNamespace {
struct BPMData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BPMData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BPMData, "", "BPMData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BPMData
struct CORDL_TYPE BPMData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BPMData() ;

// Ctor Parameters [CppParam { name: "Time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "BPM", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LinearTransitionToNext", ty: "bool", modifiers: "", def_value: None }]
constexpr BPMData(float_t  Time, float_t  BPM, bool  LinearTransitionToNext) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4852};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Time, offset: 0x0, size: 0x4, def value: None
 float_t  Time;

/// @brief Field BPM, offset: 0x4, size: 0x4, def value: None
 float_t  BPM;

/// @brief Field LinearTransitionToNext, offset: 0x8, size: 0x1, def value: None
 bool  LinearTransitionToNext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BPMData, Time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BPMData, BPM) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BPMData, LinearTransitionToNext) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BPMData) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
