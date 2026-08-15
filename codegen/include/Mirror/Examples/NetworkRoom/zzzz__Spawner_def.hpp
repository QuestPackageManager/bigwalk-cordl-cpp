#pragma once
// IWYU pragma private; include "Mirror/Examples/NetworkRoom/Spawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Spawner)
// Forward declare root types
namespace Mirror::Examples::NetworkRoom {
class Spawner;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::NetworkRoom::Spawner*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::NetworkRoom::Spawner*, "Mirror.Examples.NetworkRoom", "Spawner");
// Dependencies System.Object
namespace Mirror::Examples::NetworkRoom {
// Is value type: false
// CS Name: Mirror.Examples.NetworkRoom.Spawner
class CORDL_TYPE Spawner : public ::System::Object {
public:
// Declarations
/// @brief Method InitialSpawn, addr 0x181563eb0, size 0x60, virtual false, abstract: false, final false
static inline void InitialSpawn() ;

static inline ::Mirror::Examples::NetworkRoom::Spawner* New_ctor() ;

/// @brief Method SpawnReward, addr 0x181563f10, size 0xf0, virtual false, abstract: false, final false
static inline void SpawnReward() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Spawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Spawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Spawner(Spawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Spawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Spawner(Spawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19288};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::Examples::NetworkRoom::Spawner) == 0x10, "Size mismatch!");

} // namespace end def Mirror::Examples::NetworkRoom
