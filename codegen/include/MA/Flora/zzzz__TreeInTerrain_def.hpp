#pragma once
// IWYU pragma private; include "MA/Flora/TreeInTerrain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TreeInTerrain)
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace MA::Flora {
struct TreeInTerrain;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TreeInTerrain);
DEFINE_IL2CPP_CLASS(::MA::Flora::TreeInTerrain, "MA.Flora", "TreeInTerrain");
// Dependencies UnityEngine.EntityId
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TreeInTerrain
struct CORDL_TYPE TreeInTerrain {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::TreeInTerrain>"
constexpr operator  ::System::IComparable_1<::MA::Flora::TreeInTerrain>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::TreeInTerrain>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::TreeInTerrain>*() ;

/// @brief Method CompareTo, addr 0x1814822e0, size 0x50, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::TreeInTerrain  other) ;

/// @brief Method Equals, addr 0x181482330, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::TreeInTerrain  other) ;

/// @brief Method GetHashCode, addr 0x18147c820, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x181498b10, size 0xb0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_None, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::TreeInTerrain get_None() ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::TreeInTerrain>"
constexpr ::System::IComparable_1<::MA::Flora::TreeInTerrain>* i___System__IComparable_1___MA__Flora__TreeInTerrain_() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::TreeInTerrain>"
constexpr ::System::IEquatable_1<::MA::Flora::TreeInTerrain>* i___System__IEquatable_1___MA__Flora__TreeInTerrain_() ;

// Ctor Parameters []
// @brief default ctor
constexpr TreeInTerrain() ;

// Ctor Parameters [CppParam { name: "TerrainEntity", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "IndexInTreeInstances", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TreeInTerrain(::UnityEngine::EntityId  TerrainEntity, int32_t  IndexInTreeInstances) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13029};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field TerrainEntity, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::EntityId  TerrainEntity;

/// @brief Field IndexInTreeInstances, offset: 0x4, size: 0x4, def value: None
 int32_t  IndexInTreeInstances;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TreeInTerrain, TerrainEntity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TreeInTerrain, IndexInTreeInstances) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TreeInTerrain) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
