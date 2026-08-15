#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/TileBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(TileBase)
namespace UnityEngine::Tilemaps {
class ITilemap;
}
namespace UnityEngine::Tilemaps {
struct TileAnimationData;
}
namespace UnityEngine::Tilemaps {
struct TileData;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
class TileBase;
}
// Write type traits
MARK_REF_T(::UnityEngine::Tilemaps::TileBase*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Tilemaps::TileBase*, "UnityEngine.Tilemaps", "TileBase");
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::Tilemaps {
// Is value type: false
// CS Name: UnityEngine.Tilemaps.TileBase
class CORDL_TYPE TileBase : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Method GetTileAnimationData, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool GetTileAnimationData(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap, ::by_ref<::UnityEngine::Tilemaps::TileAnimationData>  tileAnimationData) ;

/// @brief Method GetTileAnimationDataNoRef, addr 0x18235b8a0, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Tilemaps::TileAnimationData GetTileAnimationDataNoRef(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap) ;

/// @brief Method GetTileAnimationDataRef, addr 0x18235b920, size 0x40, virtual false, abstract: false, final false
inline void GetTileAnimationDataRef(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap, ::by_ref<::UnityEngine::Tilemaps::TileAnimationData>  tileAnimationData, ::by_ref<bool>  hasAnimation) ;

/// @brief Method GetTileData, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void GetTileData(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap, ::by_ref<::UnityEngine::Tilemaps::TileData>  tileData) ;

/// @brief Method GetTileDataNoRef, addr 0x18235b960, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Tilemaps::TileData GetTileDataNoRef(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap) ;

static inline ::UnityEngine::Tilemaps::TileBase* New_ctor() ;

/// @brief Method RefreshTile, addr 0x18235b9e0, size 0x110, virtual true, abstract: false, final false
inline void RefreshTile(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap) ;

/// @brief Method StartUp, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool StartUp(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap, ::UnityEngine::GameObject*  go) ;

/// @brief Method StartUpRef, addr 0x18235baf0, size 0x140, virtual false, abstract: false, final false
inline void StartUpRef(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap, ::UnityEngine::GameObject*  go, ::by_ref<bool>  startUpInvokedByUser) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TileBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TileBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TileBase(TileBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TileBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TileBase(TileBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21205};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Tilemaps::TileBase) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Tilemaps
