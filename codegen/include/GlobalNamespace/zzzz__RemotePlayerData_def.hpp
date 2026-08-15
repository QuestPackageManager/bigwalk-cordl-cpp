#pragma once
// IWYU pragma private; include "GlobalNamespace/RemotePlayerData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemotePlayerData)
// Forward declare root types
namespace GlobalNamespace {
struct RemotePlayerData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RemotePlayerData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RemotePlayerData, "", "RemotePlayerData");
// Dependencies Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: RemotePlayerData
struct CORDL_TYPE RemotePlayerData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RemotePlayerData() ;

// Ctor Parameters [CppParam { name: "PlayerIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
constexpr RemotePlayerData(int32_t  PlayerIndex, ::Unity::Mathematics::float3  Position) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4886};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field PlayerIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  PlayerIndex;

/// @brief Field Position, offset: 0x4, size: 0xc, def value: None
 ::Unity::Mathematics::float3  Position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RemotePlayerData, PlayerIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RemotePlayerData, Position) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RemotePlayerData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
