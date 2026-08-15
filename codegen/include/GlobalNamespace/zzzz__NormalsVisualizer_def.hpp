#pragma once
// IWYU pragma private; include "GlobalNamespace/NormalsVisualizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NormalsVisualizer)
// Forward declare root types
namespace GlobalNamespace {
class NormalsVisualizer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NormalsVisualizer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NormalsVisualizer*, "", "NormalsVisualizer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NormalsVisualizer
class CORDL_TYPE NormalsVisualizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field showNormals, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_showNormals, put=__cordl_internal_set_showNormals)) bool  showNormals;

static inline ::GlobalNamespace::NormalsVisualizer* New_ctor() ;

constexpr bool const& __cordl_internal_get_showNormals() const;

constexpr bool& __cordl_internal_get_showNormals() ;

constexpr void __cordl_internal_set_showNormals(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NormalsVisualizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NormalsVisualizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NormalsVisualizer(NormalsVisualizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NormalsVisualizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NormalsVisualizer(NormalsVisualizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4952};

/// @brief Field showNormals, offset: 0x20, size: 0x1, def value: None
 bool  ___showNormals;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NormalsVisualizer, ___showNormals) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NormalsVisualizer) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
