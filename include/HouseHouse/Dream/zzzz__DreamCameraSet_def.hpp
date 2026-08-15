#pragma once
// IWYU pragma private; include "HouseHouse/Dream/DreamCameraSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(DreamCameraSet)
// Forward declare root types
namespace HouseHouse::Dream {
class DreamCameraSet;
}
// Write type traits
MARK_REF_T(::HouseHouse::Dream::DreamCameraSet*);
DEFINE_IL2CPP_CLASS(::HouseHouse::Dream::DreamCameraSet*, "HouseHouse.Dream", "DreamCameraSet");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace HouseHouse::Dream {
// Is value type: false
// CS Name: HouseHouse.Dream.DreamCameraSet
class CORDL_TYPE DreamCameraSet : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field cameraGuides, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraGuides, put=__cordl_internal_set_cameraGuides)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  cameraGuides;

static inline ::HouseHouse::Dream::DreamCameraSet* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_cameraGuides() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_cameraGuides() ;

constexpr void __cordl_internal_set_cameraGuides(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DreamCameraSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DreamCameraSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DreamCameraSet(DreamCameraSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DreamCameraSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DreamCameraSet(DreamCameraSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5776};

/// @brief Field cameraGuides, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___cameraGuides;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HouseHouse::Dream::DreamCameraSet, ___cameraGuides) == 0x20, "Offset mismatch!");

static_assert(sizeof(::HouseHouse::Dream::DreamCameraSet) == 0x28, "Size mismatch!");

} // namespace end def HouseHouse::Dream
