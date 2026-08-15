#pragma once
// IWYU pragma private; include "MA/Flora/TerrainDetailPlaceholder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TerrainDetailPlaceholder)
namespace UnityEngine {
class BillboardRenderer;
}
// Forward declare root types
namespace MA::Flora {
class TerrainDetailPlaceholder;
}
// Write type traits
MARK_REF_T(::MA::Flora::TerrainDetailPlaceholder*);
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainDetailPlaceholder*, "MA.Flora", "TerrainDetailPlaceholder");
// Dependencies UnityEngine.MonoBehaviour
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.TerrainDetailPlaceholder
class CORDL_TYPE TerrainDetailPlaceholder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_BillboardRenderer)) ::UnityW<::UnityEngine::BillboardRenderer>  BillboardRenderer;

/// @brief Field m_BillboardRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BillboardRenderer, put=__cordl_internal_set_m_BillboardRenderer)) ::UnityW<::UnityEngine::BillboardRenderer>  m_BillboardRenderer;

static inline ::MA::Flora::TerrainDetailPlaceholder* New_ctor() ;

constexpr ::UnityW<::UnityEngine::BillboardRenderer> const& __cordl_internal_get_m_BillboardRenderer() const;

constexpr ::UnityW<::UnityEngine::BillboardRenderer>& __cordl_internal_get_m_BillboardRenderer() ;

constexpr void __cordl_internal_set_m_BillboardRenderer(::UnityW<::UnityEngine::BillboardRenderer>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BillboardRenderer, addr 0x18150e7e0, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::BillboardRenderer> get_BillboardRenderer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainDetailPlaceholder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainDetailPlaceholder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainDetailPlaceholder(TerrainDetailPlaceholder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainDetailPlaceholder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainDetailPlaceholder(TerrainDetailPlaceholder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13384};

/// @brief Field m_BillboardRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BillboardRenderer>  ___m_BillboardRenderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainDetailPlaceholder, ___m_BillboardRenderer) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainDetailPlaceholder) == 0x28, "Size mismatch!");

} // namespace end def MA::Flora
