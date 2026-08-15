#pragma once
// IWYU pragma private; include "UnityEngine/TerrainCollider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
CORDL_MODULE_EXPORT(TerrainCollider)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class TerrainData;
}
// Forward declare root types
namespace UnityEngine {
class TerrainCollider;
}
// Write type traits
MARK_REF_T(::UnityEngine::TerrainCollider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TerrainCollider*, "UnityEngine", "TerrainCollider");
// Dependencies UnityEngine.Collider
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TerrainCollider
class CORDL_TYPE TerrainCollider : public ::UnityEngine::Collider {
public:
// Declarations
 __declspec(property(get=get_terrainData)) ::UnityW<::UnityEngine::TerrainData>  terrainData;

/// @brief Method get_terrainData, addr 0x182313bc0, size 0x8b0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::TerrainData> get_terrainData() ;

/// @brief Method get_terrainData_Injected, addr 0x182313bb0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_terrainData_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainCollider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainCollider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainCollider(TerrainCollider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainCollider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainCollider(TerrainCollider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21487};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TerrainCollider) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
