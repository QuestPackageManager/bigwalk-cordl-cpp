#pragma once
// IWYU pragma private; include "Mirror/Examples/Benchmark/PlayerMovement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerMovement)
// Forward declare root types
namespace Mirror::Examples::Benchmark {
class PlayerMovement;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Benchmark::PlayerMovement*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Benchmark::PlayerMovement*, "Mirror.Examples.Benchmark", "PlayerMovement");
// Dependencies Mirror.NetworkBehaviour
namespace Mirror::Examples::Benchmark {
// Is value type: false
// CS Name: Mirror.Examples.Benchmark.PlayerMovement
class CORDL_TYPE PlayerMovement : public ::Mirror::NetworkBehaviour {
public:
// Declarations
/// @brief Field speed, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::Benchmark::PlayerMovement* New_ctor() ;

/// @brief Method Update, addr 0x18155f8a0, size 0x170, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

/// @brief Method .ctor, addr 0x18155fa10, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerMovement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerMovement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerMovement(PlayerMovement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerMovement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerMovement(PlayerMovement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19344};

/// @brief Field speed, offset: 0x68, size: 0x4, def value: None
 float_t  ___speed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Benchmark::PlayerMovement, ___speed) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Benchmark::PlayerMovement) == 0x70, "Size mismatch!");

} // namespace end def Mirror::Examples::Benchmark
