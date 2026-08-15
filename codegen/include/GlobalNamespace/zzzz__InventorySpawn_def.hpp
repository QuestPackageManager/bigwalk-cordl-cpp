#pragma once
// IWYU pragma private; include "GlobalNamespace/InventorySpawn.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InventorySpawn)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class InventorySpawn;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::InventorySpawn*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InventorySpawn*, "", "InventorySpawn");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: InventorySpawn
class CORDL_TYPE InventorySpawn : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field spawnRadius, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnRadius, put=__cordl_internal_set_spawnRadius)) float_t  spawnRadius;

/// @brief Method Awake, addr 0x18037e170, size 0x40, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetNextSpawnPosition, addr 0x18037e1b0, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetNextSpawnPosition() ;

static inline ::GlobalNamespace::InventorySpawn* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x18037e270, size 0x70, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr float_t const& __cordl_internal_get_spawnRadius() const;

constexpr float_t& __cordl_internal_get_spawnRadius() ;

constexpr void __cordl_internal_set_spawnRadius(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InventorySpawn() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InventorySpawn", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InventorySpawn(InventorySpawn && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InventorySpawn", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InventorySpawn(InventorySpawn const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5589};

/// @brief Field spawnRadius, offset: 0x20, size: 0x4, def value: None
 float_t  ___spawnRadius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InventorySpawn, ___spawnRadius) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InventorySpawn) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
