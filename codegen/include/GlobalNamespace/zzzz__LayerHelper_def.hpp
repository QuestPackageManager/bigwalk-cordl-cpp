#pragma once
// IWYU pragma private; include "GlobalNamespace/LayerHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LayerHelper)
// Forward declare root types
namespace GlobalNamespace {
class LayerHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LayerHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LayerHelper*, "", "LayerHelper");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LayerHelper
class CORDL_TYPE LayerHelper : public ::System::Object {
public:
// Declarations
/// @brief Method get_BlocksPlayerCastLayer, addr 0x1803ec4d0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_BlocksPlayerCastLayer() ;

/// @brief Method get_GhostPlayerLayer, addr 0x1803ec4e0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_GhostPlayerLayer() ;

/// @brief Method get_GlassLayer, addr 0x1803ec4f0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_GlassLayer() ;

/// @brief Method get_PlayerLayer, addr 0x1803ec500, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_PlayerLayer() ;

/// @brief Method get_PlayerSegmentLayer, addr 0x1803ec510, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_PlayerSegmentLayer() ;

/// @brief Method get_PlayerZoneLayer, addr 0x1803ec520, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_PlayerZoneLayer() ;

/// @brief Method get_PropHeldLayer, addr 0x1803ec530, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_PropHeldLayer() ;

/// @brief Method get_PropLayer, addr 0x1803ec540, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_PropLayer() ;

/// @brief Method get_VegetationLayer, addr 0x1803ec550, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_VegetationLayer() ;

/// @brief Method get_WaterLayer, addr 0x1803ec560, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_WaterLayer() ;

/// @brief Method get_WorldLayer, addr 0x1803ec570, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_WorldLayer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayerHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayerHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LayerHelper(LayerHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayerHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayerHelper(LayerHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4946};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LayerHelper) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
