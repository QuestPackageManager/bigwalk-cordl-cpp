#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsAABB.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PhysicsAABB)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsAABB;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsAABB);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsAABB, "UnityEngine.LowLevelPhysics2D", "PhysicsAABB");
// Dependencies UnityEngine.Vector2
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsAABB
struct CORDL_TYPE PhysicsAABB {
public:
// Declarations
 __declspec(property(get=get_isValid)) bool  isValid;

 __declspec(property(get=get_lowerBound, put=set_lowerBound)) ::UnityEngine::Vector2  lowerBound;

 __declspec(property(get=get_upperBound, put=set_upperBound)) ::UnityEngine::Vector2  upperBound;

/// @brief Method ToString, addr 0x1822f3470, size 0xb0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_isValid, addr 0x1822f3520, size 0x30, virtual false, abstract: false, final false
inline bool get_isValid() ;

/// @brief Method get_lowerBound, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_lowerBound() ;

/// @brief Method get_upperBound, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_upperBound() ;

/// @brief Method set_lowerBound, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_lowerBound(::UnityEngine::Vector2  value) ;

/// @brief Method set_upperBound, addr 0x1804bda50, size 0x10, virtual false, abstract: false, final false
inline void set_upperBound(::UnityEngine::Vector2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PhysicsAABB() ;

// Ctor Parameters [CppParam { name: "m_LowerBound", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_UpperBound", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr PhysicsAABB(::UnityEngine::Vector2  m_LowerBound, ::UnityEngine::Vector2  m_UpperBound) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19812};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_LowerBound, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_LowerBound;

/// @brief Field m_UpperBound, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_UpperBound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsAABB, m_LowerBound) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsAABB, m_UpperBound) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsAABB) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::LowLevelPhysics2D
