#pragma once
// IWYU pragma private; include "Mirror/Examples/Benchmark/MonsterMovement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MonsterMovement)
// Forward declare root types
namespace Mirror::Examples::Benchmark {
class MonsterMovement;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Benchmark::MonsterMovement*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Benchmark::MonsterMovement*, "Mirror.Examples.Benchmark", "MonsterMovement");
// Dependencies Mirror.NetworkBehaviour, UnityEngine.Vector3
namespace Mirror::Examples::Benchmark {
// Is value type: false
// CS Name: Mirror.Examples.Benchmark.MonsterMovement
class CORDL_TYPE MonsterMovement : public ::Mirror::NetworkBehaviour {
public:
// Declarations
/// @brief Field destination, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get_destination, put=__cordl_internal_set_destination)) ::UnityEngine::Vector3  destination;

/// @brief Field movementDistance, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_movementDistance, put=__cordl_internal_set_movementDistance)) float_t  movementDistance;

/// @brief Field movementProbability, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_movementProbability, put=__cordl_internal_set_movementProbability)) float_t  movementProbability;

/// @brief Field moving, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_moving, put=__cordl_internal_set_moving)) bool  moving;

/// @brief Field speed, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Field start, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get_start, put=__cordl_internal_set_start)) ::UnityEngine::Vector3  start;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::Benchmark::MonsterMovement* New_ctor() ;

/// @brief Method OnStartServer, addr 0x18155d500, size 0x50, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method Update, addr 0x18155d550, size 0x390, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_destination() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_destination() ;

constexpr float_t const& __cordl_internal_get_movementDistance() const;

constexpr float_t& __cordl_internal_get_movementDistance() ;

constexpr float_t const& __cordl_internal_get_movementProbability() const;

constexpr float_t& __cordl_internal_get_movementProbability() ;

constexpr bool const& __cordl_internal_get_moving() const;

constexpr bool& __cordl_internal_get_moving() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_start() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_start() ;

constexpr void __cordl_internal_set_destination(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_movementDistance(float_t  value) ;

constexpr void __cordl_internal_set_movementProbability(float_t  value) ;

constexpr void __cordl_internal_set_moving(bool  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

constexpr void __cordl_internal_set_start(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x18155d8e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonsterMovement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonsterMovement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonsterMovement(MonsterMovement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonsterMovement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonsterMovement(MonsterMovement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19343};

/// @brief Field speed, offset: 0x68, size: 0x4, def value: None
 float_t  ___speed;

/// @brief Field movementProbability, offset: 0x6c, size: 0x4, def value: None
 float_t  ___movementProbability;

/// @brief Field movementDistance, offset: 0x70, size: 0x4, def value: None
 float_t  ___movementDistance;

/// @brief Field moving, offset: 0x74, size: 0x1, def value: None
 bool  ___moving;

/// @brief Field start, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___start;

/// @brief Field destination, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___destination;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Benchmark::MonsterMovement, ___speed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Benchmark::MonsterMovement, ___movementProbability) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Benchmark::MonsterMovement, ___movementDistance) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Benchmark::MonsterMovement, ___moving) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Benchmark::MonsterMovement, ___start) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Benchmark::MonsterMovement, ___destination) == 0x84, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Benchmark::MonsterMovement) == 0x90, "Size mismatch!");

} // namespace end def Mirror::Examples::Benchmark
