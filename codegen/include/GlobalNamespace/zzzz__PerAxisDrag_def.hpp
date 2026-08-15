#pragma once
// IWYU pragma private; include "GlobalNamespace/PerAxisDrag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PerAxisDrag)
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class PerAxisDrag;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PerAxisDrag*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerAxisDrag*, "", "PerAxisDrag");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerAxisDrag
class CORDL_TYPE PerAxisDrag : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field correctionSpin, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_correctionSpin, put=__cordl_internal_set_correctionSpin)) float_t  correctionSpin;

/// @brief Field drag, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_drag, put=__cordl_internal_set_drag)) ::UnityEngine::Vector3  drag;

/// @brief Field rb, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Method Awake, addr 0x1803ee2f0, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x1803ee320, size 0x3d0, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::PerAxisDrag* New_ctor() ;

constexpr float_t const& __cordl_internal_get_correctionSpin() const;

constexpr float_t& __cordl_internal_get_correctionSpin() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_drag() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_drag() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr void __cordl_internal_set_correctionSpin(float_t  value) ;

constexpr void __cordl_internal_set_drag(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x1803ee6f0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PerAxisDrag() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PerAxisDrag", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PerAxisDrag(PerAxisDrag && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerAxisDrag", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerAxisDrag(PerAxisDrag const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4956};

/// @brief Field drag, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___drag;

/// @brief Field correctionSpin, offset: 0x2c, size: 0x4, def value: None
 float_t  ___correctionSpin;

/// @brief Field rb, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerAxisDrag, ___drag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerAxisDrag, ___correctionSpin) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerAxisDrag, ___rb) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PerAxisDrag) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
