#pragma once
// IWYU pragma private; include "UnityEngine/TerrainTools/PaintContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PaintContext)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::TerrainTools {
struct PaintContext_PaintedTerrain;
}
namespace UnityEngine::TerrainTools {
struct PaintContext_ToolAction;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace UnityEngine::TerrainTools {
struct PaintContext_ToolAction;
}
namespace UnityEngine::TerrainTools {
class PaintContext;
}
namespace UnityEngine::TerrainTools {
struct PaintContext_PaintedTerrain;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TerrainTools::PaintContext_ToolAction);
MARK_REF_T(::UnityEngine::TerrainTools::PaintContext*);
MARK_VAL_T(::UnityEngine::TerrainTools::PaintContext_PaintedTerrain);
DEFINE_IL2CPP_CLASS(::UnityEngine::TerrainTools::PaintContext_ToolAction, "UnityEngine.TerrainTools", "PaintContext/ToolAction");
DEFINE_IL2CPP_CLASS(::UnityEngine::TerrainTools::PaintContext*, "UnityEngine.TerrainTools", "PaintContext");
DEFINE_IL2CPP_CLASS(::UnityEngine::TerrainTools::PaintContext_PaintedTerrain, "UnityEngine.TerrainTools", "PaintContext/PaintedTerrain");
// Dependencies 
namespace UnityEngine::TerrainTools {
// Is value type: true
// CS Name: UnityEngine.TerrainTools.PaintContext/ToolAction
struct CORDL_TYPE PaintContext_ToolAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PaintContext_ToolAction_Unwrapped
enum struct __PaintContext_ToolAction_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PaintHeightmap = static_cast<int32_t>(0x1),
__E_PaintTexture = static_cast<int32_t>(0x2),
__E_PaintHoles = static_cast<int32_t>(0x4),
__E_AddTerrainLayer = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PaintContext_ToolAction_Unwrapped () const noexcept {
return static_cast<__PaintContext_ToolAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PaintContext_ToolAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PaintContext_ToolAction(int32_t  value__) noexcept;

/// @brief Field AddTerrainLayer value: I32(8)
static ::UnityEngine::TerrainTools::PaintContext_ToolAction const AddTerrainLayer;

/// @brief Field None value: I32(0)
static ::UnityEngine::TerrainTools::PaintContext_ToolAction const None;

/// @brief Field PaintHeightmap value: I32(1)
static ::UnityEngine::TerrainTools::PaintContext_ToolAction const PaintHeightmap;

/// @brief Field PaintHoles value: I32(4)
static ::UnityEngine::TerrainTools::PaintContext_ToolAction const PaintHoles;

/// @brief Field PaintTexture value: I32(2)
static ::UnityEngine::TerrainTools::PaintContext_ToolAction const PaintTexture;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20342};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TerrainTools::PaintContext_ToolAction, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TerrainTools::PaintContext_ToolAction) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::TerrainTools
// Dependencies UnityEngine.TerrainTools.PaintContext::ToolAction
namespace UnityEngine::TerrainTools {
// Is value type: true
// CS Name: UnityEngine.TerrainTools.PaintContext/PaintedTerrain
struct CORDL_TYPE PaintContext_PaintedTerrain {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PaintContext_PaintedTerrain() ;

// Ctor Parameters [CppParam { name: "terrain", ty: "::UnityW<::UnityEngine::Terrain>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::UnityEngine::TerrainTools::PaintContext_ToolAction", modifiers: "", def_value: None }]
constexpr PaintContext_PaintedTerrain(::UnityW<::UnityEngine::Terrain>  terrain, ::UnityEngine::TerrainTools::PaintContext_ToolAction  action) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20343};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field terrain, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Terrain>  terrain;

/// @brief Field action, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::TerrainTools::PaintContext_ToolAction  action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TerrainTools::PaintContext_PaintedTerrain, terrain) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TerrainTools::PaintContext_PaintedTerrain, action) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TerrainTools::PaintContext_PaintedTerrain) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::TerrainTools
// Dependencies System.Object
namespace UnityEngine::TerrainTools {
// Is value type: false
// CS Name: UnityEngine.TerrainTools.PaintContext
class CORDL_TYPE PaintContext : public ::System::Object {
public:
// Declarations
using PaintedTerrain = ::UnityEngine::TerrainTools::PaintContext_PaintedTerrain;

using ToolAction = ::UnityEngine::TerrainTools::PaintContext_ToolAction;

/// @brief Field s_PaintedTerrain, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PaintedTerrain, put=setStaticF_s_PaintedTerrain)) ::System::Collections::Generic::List_1<::UnityEngine::TerrainTools::PaintContext_PaintedTerrain>*  s_PaintedTerrain;

static inline ::System::Collections::Generic::List_1<::UnityEngine::TerrainTools::PaintContext_PaintedTerrain>* getStaticF_s_PaintedTerrain() ;

/// @brief Method get_kNormalizedHeightScale, addr 0x18230eea0, size 0x40, virtual false, abstract: false, final false
static inline float_t get_kNormalizedHeightScale() ;

static inline void setStaticF_s_PaintedTerrain(::System::Collections::Generic::List_1<::UnityEngine::TerrainTools::PaintContext_PaintedTerrain>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PaintContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PaintContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PaintContext(PaintContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PaintContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PaintContext(PaintContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20344};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TerrainTools::PaintContext) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::TerrainTools
