#pragma once
// IWYU pragma private; include "Boxophobic/Utility/NPCController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NPCController)
// Forward declare root types
namespace Boxophobic::Utility {
class NPCController;
}
// Write type traits
MARK_REF_T(::Boxophobic::Utility::NPCController*);
DEFINE_IL2CPP_CLASS(::Boxophobic::Utility::NPCController*, "Boxophobic.Utility", "NPCController");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Boxophobic::Utility {
// Is value type: false
// CS Name: Boxophobic.Utility.NPCController
class CORDL_TYPE NPCController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field direction, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_direction, put=__cordl_internal_set_direction)) ::UnityEngine::Vector3  direction;

/// @brief Field timeToChangeDirection, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeToChangeDirection, put=__cordl_internal_set_timeToChangeDirection)) float_t  timeToChangeDirection;

/// @brief Method ChangeDirection, addr 0x1804bc810, size 0xc0, virtual false, abstract: false, final false
inline void ChangeDirection() ;

static inline ::Boxophobic::Utility::NPCController* New_ctor() ;

/// @brief Method Start, addr 0x1804bc8d0, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1804bc8e0, size 0x80, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_direction() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_direction() ;

constexpr float_t const& __cordl_internal_get_timeToChangeDirection() const;

constexpr float_t& __cordl_internal_get_timeToChangeDirection() ;

constexpr void __cordl_internal_set_direction(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_timeToChangeDirection(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NPCController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NPCController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NPCController(NPCController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NPCController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NPCController(NPCController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21192};

/// @brief Field timeToChangeDirection, offset: 0x20, size: 0x4, def value: None
 float_t  ___timeToChangeDirection;

/// @brief Field direction, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___direction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Boxophobic::Utility::NPCController, ___timeToChangeDirection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::NPCController, ___direction) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Boxophobic::Utility::NPCController) == 0x30, "Size mismatch!");

} // namespace end def Boxophobic::Utility
