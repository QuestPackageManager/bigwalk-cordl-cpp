#pragma once
// IWYU pragma private; include "HouseHouse/Dream/DreamCameraGuide.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DreamCameraGuide)
// Forward declare root types
namespace HouseHouse::Dream {
class DreamCameraGuide;
}
// Write type traits
MARK_REF_T(::HouseHouse::Dream::DreamCameraGuide*);
DEFINE_IL2CPP_CLASS(::HouseHouse::Dream::DreamCameraGuide*, "HouseHouse.Dream", "DreamCameraGuide");
// Dependencies UnityEngine.MonoBehaviour
namespace HouseHouse::Dream {
// Is value type: false
// CS Name: HouseHouse.Dream.DreamCameraGuide
class CORDL_TYPE DreamCameraGuide : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::HouseHouse::Dream::DreamCameraGuide* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DreamCameraGuide() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DreamCameraGuide", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DreamCameraGuide(DreamCameraGuide && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DreamCameraGuide", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DreamCameraGuide(DreamCameraGuide const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5775};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HouseHouse::Dream::DreamCameraGuide) == 0x20, "Size mismatch!");

} // namespace end def HouseHouse::Dream
