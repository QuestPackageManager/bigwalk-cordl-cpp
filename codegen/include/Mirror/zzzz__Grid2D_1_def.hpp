#pragma once
// IWYU pragma private; include "Mirror/Grid2D_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Grid2D_1)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace Mirror {
template<typename T>
struct Grid2D_1;
}
// Write type traits
MARK_GEN_VAL_T(::Mirror::Grid2D_1);
DEFINE_IL2CPP_GEN_CLASS(::Mirror::Grid2D_1, "Mirror", "Grid2D`1");
// Dependencies UnityEngine.Vector2Int
namespace Mirror {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Mirror.Grid2D`1<T>
struct CORDL_TYPE Grid2D_1 {
public:
// Declarations
/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(::UnityEngine::Vector2Int  position, T  value) ;

/// @brief Method ClearNonAlloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ClearNonAlloc() ;

/// @brief Method GetAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void GetAt(::UnityEngine::Vector2Int  position, ::System::Collections::Generic::HashSet_1<T>*  result) ;

/// @brief Method GetWithNeighbours, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void GetWithNeighbours(::UnityEngine::Vector2Int  position, ::System::Collections::Generic::HashSet_1<T>*  result) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  initialCapacity) ;

// Ctor Parameters []
// @brief default ctor
constexpr Grid2D_1() ;

// Ctor Parameters [CppParam { name: "grid", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int,::System::Collections::Generic::HashSet_1<T>*>*", modifiers: "", def_value: None }, CppParam { name: "neighbourOffsets", ty: "::ArrayW<::UnityEngine::Vector2Int>", modifiers: "", def_value: None }]
constexpr Grid2D_1(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int,::System::Collections::Generic::HashSet_1<T>*>*  grid, ::ArrayW<::UnityEngine::Vector2Int>  neighbourOffsets) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19230};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field grid, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int,::System::Collections::Generic::HashSet_1<T>*>*  grid;

/// @brief Field neighbourOffsets, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2Int>  neighbourOffsets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mirror
