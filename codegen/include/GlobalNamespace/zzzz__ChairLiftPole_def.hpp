#pragma once
// IWYU pragma private; include "GlobalNamespace/ChairLiftPole.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ChairLiftPole)
namespace GlobalNamespace {
struct ChairLiftWireMinder_TravelDirection;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ChairLiftPole;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ChairLiftPole*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ChairLiftPole*, "", "ChairLiftPole");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ChairLiftPole
class CORDL_TYPE ChairLiftPole : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field froPoint, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_froPoint, put=__cordl_internal_set_froPoint)) ::UnityW<::UnityEngine::Transform>  froPoint;

/// @brief Field noAutoRotate, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_noAutoRotate, put=__cordl_internal_set_noAutoRotate)) bool  noAutoRotate;

/// @brief Field toPoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_toPoint, put=__cordl_internal_set_toPoint)) ::UnityW<::UnityEngine::Transform>  toPoint;

/// @brief Method GetPosition, addr 0x180409380, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPosition(::GlobalNamespace::ChairLiftWireMinder_TravelDirection  travelDirection) ;

static inline ::GlobalNamespace::ChairLiftPole* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_froPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_froPoint() ;

constexpr bool const& __cordl_internal_get_noAutoRotate() const;

constexpr bool& __cordl_internal_get_noAutoRotate() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_toPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_toPoint() ;

constexpr void __cordl_internal_set_froPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_noAutoRotate(bool  value) ;

constexpr void __cordl_internal_set_toPoint(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChairLiftPole() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChairLiftPole", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChairLiftPole(ChairLiftPole && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChairLiftPole", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChairLiftPole(ChairLiftPole const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5133};

/// @brief Field toPoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___toPoint;

/// @brief Field froPoint, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___froPoint;

/// @brief Field noAutoRotate, offset: 0x30, size: 0x1, def value: None
 bool  ___noAutoRotate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ChairLiftPole, ___toPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChairLiftPole, ___froPoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChairLiftPole, ___noAutoRotate) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ChairLiftPole) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
