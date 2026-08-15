#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/StampData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StampData)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class StampData;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::StampData*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::StampData*, "JBooth.MicroVerseCore", "StampData");
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.StampData
class CORDL_TYPE StampData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_RealHeight)) float_t  RealHeight;

 __declspec(property(get=get_RealSize)) ::UnityEngine::Vector2  RealSize;

 __declspec(property(get=get_WorldToTerrainMatrix)) ::UnityEngine::Matrix4x4  WorldToTerrainMatrix;

/// @brief Field terrain, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrain, put=__cordl_internal_set_terrain)) ::UnityW<::UnityEngine::Terrain>  terrain;

static inline ::JBooth::MicroVerseCore::StampData* New_ctor(::UnityEngine::Terrain*  terrain) ;

constexpr ::UnityW<::UnityEngine::Terrain> const& __cordl_internal_get_terrain() const;

constexpr ::UnityW<::UnityEngine::Terrain>& __cordl_internal_get_terrain() ;

constexpr void __cordl_internal_set_terrain(::UnityW<::UnityEngine::Terrain>  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Terrain*  terrain) ;

/// @brief Method get_RealHeight, addr 0x181449630, size 0x40, virtual false, abstract: false, final false
inline float_t get_RealHeight() ;

/// @brief Method get_RealSize, addr 0x181449670, size 0x110, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_RealSize() ;

/// @brief Method get_WorldToTerrainMatrix, addr 0x181449780, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_WorldToTerrainMatrix() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StampData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StampData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StampData(StampData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StampData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StampData(StampData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18050};

/// @brief Field terrain, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Terrain>  ___terrain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::StampData, ___terrain) == 0x10, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::StampData) == 0x18, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
