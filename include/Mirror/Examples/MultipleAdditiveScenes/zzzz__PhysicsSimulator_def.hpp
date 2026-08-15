#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleAdditiveScenes/PhysicsSimulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene2D_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
CORDL_MODULE_EXPORT(PhysicsSimulator)
// Forward declare root types
namespace Mirror::Examples::MultipleAdditiveScenes {
class PhysicsSimulator;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::MultipleAdditiveScenes::PhysicsSimulator*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleAdditiveScenes::PhysicsSimulator*, "Mirror.Examples.MultipleAdditiveScenes", "PhysicsSimulator");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.PhysicsScene, UnityEngine.PhysicsScene2D
namespace Mirror::Examples::MultipleAdditiveScenes {
// Is value type: false
// CS Name: Mirror.Examples.MultipleAdditiveScenes.PhysicsSimulator
class CORDL_TYPE PhysicsSimulator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field physicsScene, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_physicsScene, put=__cordl_internal_set_physicsScene)) ::UnityEngine::PhysicsScene  physicsScene;

/// @brief Field physicsScene2D, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_physicsScene2D, put=__cordl_internal_set_physicsScene2D)) ::UnityEngine::PhysicsScene2D  physicsScene2D;

/// @brief Field simulatePhysicsScene, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_simulatePhysicsScene, put=__cordl_internal_set_simulatePhysicsScene)) bool  simulatePhysicsScene;

/// @brief Field simulatePhysicsScene2D, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_simulatePhysicsScene2D, put=__cordl_internal_set_simulatePhysicsScene2D)) bool  simulatePhysicsScene2D;

/// @brief Method Awake, addr 0x18155e870, size 0x110, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x18155e980, size 0x80, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::Mirror::Examples::MultipleAdditiveScenes::PhysicsSimulator* New_ctor() ;

constexpr ::UnityEngine::PhysicsScene const& __cordl_internal_get_physicsScene() const;

constexpr ::UnityEngine::PhysicsScene& __cordl_internal_get_physicsScene() ;

constexpr ::UnityEngine::PhysicsScene2D const& __cordl_internal_get_physicsScene2D() const;

constexpr ::UnityEngine::PhysicsScene2D& __cordl_internal_get_physicsScene2D() ;

constexpr bool const& __cordl_internal_get_simulatePhysicsScene() const;

constexpr bool& __cordl_internal_get_simulatePhysicsScene() ;

constexpr bool const& __cordl_internal_get_simulatePhysicsScene2D() const;

constexpr bool& __cordl_internal_get_simulatePhysicsScene2D() ;

constexpr void __cordl_internal_set_physicsScene(::UnityEngine::PhysicsScene  value) ;

constexpr void __cordl_internal_set_physicsScene2D(::UnityEngine::PhysicsScene2D  value) ;

constexpr void __cordl_internal_set_simulatePhysicsScene(bool  value) ;

constexpr void __cordl_internal_set_simulatePhysicsScene2D(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhysicsSimulator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhysicsSimulator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhysicsSimulator(PhysicsSimulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsSimulator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhysicsSimulator(PhysicsSimulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19320};

/// @brief Field physicsScene, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::PhysicsScene  ___physicsScene;

/// @brief Field physicsScene2D, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::PhysicsScene2D  ___physicsScene2D;

/// @brief Field simulatePhysicsScene, offset: 0x2c, size: 0x1, def value: None
 bool  ___simulatePhysicsScene;

/// @brief Field simulatePhysicsScene2D, offset: 0x2d, size: 0x1, def value: None
 bool  ___simulatePhysicsScene2D;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::PhysicsSimulator, ___physicsScene) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::PhysicsSimulator, ___physicsScene2D) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::PhysicsSimulator, ___simulatePhysicsScene) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleAdditiveScenes::PhysicsSimulator, ___simulatePhysicsScene2D) == 0x2d, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleAdditiveScenes::PhysicsSimulator) == 0x30, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleAdditiveScenes
