#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbienceSamplePosition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AmbienceSamplePosition)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct AmbienceSamplePosition;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AmbienceSamplePosition);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AmbienceSamplePosition, "", "AmbienceSamplePosition");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: AmbienceSamplePosition
struct CORDL_TYPE AmbienceSamplePosition {
public:
// Declarations
/// @brief Method .ctor, addr 0x1803223e0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  position, int32_t  dataIndex) ;

// Ctor Parameters []
// @brief default ctor
constexpr AmbienceSamplePosition() ;

// Ctor Parameters [CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "DataIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AmbienceSamplePosition(::UnityEngine::Vector3  Position, int32_t  DataIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4792};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Position;

/// @brief Field DataIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  DataIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AmbienceSamplePosition, Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSamplePosition, DataIndex) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AmbienceSamplePosition) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
