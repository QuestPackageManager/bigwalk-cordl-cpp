#pragma once
// IWYU pragma private; include "GlobalNamespace/CenterOfMass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(CenterOfMass)
// Forward declare root types
namespace GlobalNamespace {
class CenterOfMass;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CenterOfMass*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CenterOfMass*, "", "CenterOfMass");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CenterOfMass
class CORDL_TYPE CenterOfMass : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field centerOfMass, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_centerOfMass, put=__cordl_internal_set_centerOfMass)) ::UnityEngine::Vector3  centerOfMass;

/// @brief Method Awake, addr 0x1803e40f0, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::CenterOfMass* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1803e4140, size 0x1f0, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_centerOfMass() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_centerOfMass() ;

constexpr void __cordl_internal_set_centerOfMass(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CenterOfMass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CenterOfMass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CenterOfMass(CenterOfMass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CenterOfMass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CenterOfMass(CenterOfMass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4937};

/// @brief Field centerOfMass, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___centerOfMass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CenterOfMass, ___centerOfMass) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CenterOfMass) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
