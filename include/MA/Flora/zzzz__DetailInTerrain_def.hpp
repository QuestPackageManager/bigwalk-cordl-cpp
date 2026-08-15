#pragma once
// IWYU pragma private; include "MA/Flora/DetailInTerrain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DetailInTerrain)
namespace MA::Flora {
template<typename T>
struct EntityObjectRef_1;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace MA::Flora {
struct DetailInTerrain;
}
// Write type traits
MARK_VAL_T(::MA::Flora::DetailInTerrain);
DEFINE_IL2CPP_CLASS(::MA::Flora::DetailInTerrain, "MA.Flora", "DetailInTerrain");
// Dependencies UnityEngine.EntityId
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DetailInTerrain
struct CORDL_TYPE DetailInTerrain {
public:
// Declarations
 __declspec(property(get=get_Terrain)) ::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>>  Terrain;

/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::DetailInTerrain>"
constexpr operator  ::System::IComparable_1<::MA::Flora::DetailInTerrain>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::DetailInTerrain>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::DetailInTerrain>*() ;

/// @brief Method CompareTo, addr 0x18147c780, size 0x50, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::DetailInTerrain  other) ;

/// @brief Method Equals, addr 0x18147c7d0, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::DetailInTerrain  other) ;

/// @brief Method GetHashCode, addr 0x18147c820, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x18147c840, size 0xb0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_None, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::DetailInTerrain get_None() ;

/// @brief Method get_Terrain, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>> get_Terrain() ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::DetailInTerrain>"
constexpr ::System::IComparable_1<::MA::Flora::DetailInTerrain>* i___System__IComparable_1___MA__Flora__DetailInTerrain_() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::DetailInTerrain>"
constexpr ::System::IEquatable_1<::MA::Flora::DetailInTerrain>* i___System__IEquatable_1___MA__Flora__DetailInTerrain_() ;

// Ctor Parameters []
// @brief default ctor
constexpr DetailInTerrain() ;

// Ctor Parameters [CppParam { name: "TerrainEntity", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "LayerIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DetailInTerrain(::UnityEngine::EntityId  TerrainEntity, int32_t  LayerIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13030};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field TerrainEntity, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::EntityId  TerrainEntity;

/// @brief Field LayerIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  LayerIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DetailInTerrain, TerrainEntity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DetailInTerrain, LayerIndex) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DetailInTerrain) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
