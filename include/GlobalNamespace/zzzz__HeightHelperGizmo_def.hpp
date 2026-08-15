#pragma once
// IWYU pragma private; include "GlobalNamespace/HeightHelperGizmo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(HeightHelperGizmo)
// Forward declare root types
namespace GlobalNamespace {
class HeightHelperGizmo;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HeightHelperGizmo*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HeightHelperGizmo*, "", "HeightHelperGizmo");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: HeightHelperGizmo
class CORDL_TYPE HeightHelperGizmo : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field offset, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) ::UnityEngine::Vector3  offset;

static inline ::GlobalNamespace::HeightHelperGizmo* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1803e9cd0, size 0x1b0, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset() ;

constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HeightHelperGizmo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HeightHelperGizmo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HeightHelperGizmo(HeightHelperGizmo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HeightHelperGizmo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HeightHelperGizmo(HeightHelperGizmo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4906};

/// @brief Field offset, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HeightHelperGizmo, ___offset) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HeightHelperGizmo) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
