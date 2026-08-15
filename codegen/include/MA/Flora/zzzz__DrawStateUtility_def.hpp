#pragma once
// IWYU pragma private; include "MA/Flora/DrawStateUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DrawStateUtility)
namespace MA::Flora {
struct IndirectStateFlags;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
// Forward declare root types
namespace MA::Flora {
class DrawStateUtility;
}
// Write type traits
MARK_REF_T(::MA::Flora::DrawStateUtility*);
DEFINE_IL2CPP_CLASS(::MA::Flora::DrawStateUtility*, "MA.Flora", "DrawStateUtility");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.DrawStateUtility
class CORDL_TYPE DrawStateUtility : public ::System::Object {
public:
// Declarations
/// @brief Method ComputeBinIndex, addr 0x1814bce50, size 0x20, virtual false, abstract: false, final false
static inline int32_t ComputeBinIndex(int32_t  baseOffset, int32_t  splitIndex, int32_t  slotsPerLod, int32_t  lodCount, int32_t  stateSlot, int32_t  lodIndex) ;

/// @brief Method ComputePartitionBinStride, addr 0x1814bce70, size 0x10, virtual false, abstract: false, final false
static inline int32_t ComputePartitionBinStride(int32_t  splitCount, int32_t  slotsPerLod, int32_t  lodCount) ;

/// @brief Method ComputePartitionedBinIndex, addr 0x1814bce80, size 0x20, virtual false, abstract: false, final false
static inline int32_t ComputePartitionedBinIndex(int32_t  baseOffset, int32_t  partitionIndex, int32_t  splitIndex, int32_t  splitCount, int32_t  slotsPerLod, int32_t  lodCount, int32_t  stateSlot, int32_t  lodIndex) ;

/// @brief Method ComputePartitionedCommandCount, addr 0x1814bcea0, size 0x10, virtual false, abstract: false, final false
static inline int32_t ComputePartitionedCommandCount(int32_t  totalCommandCount, int32_t  partitionCount) ;

/// @brief Method ComputeTemplateLodStateIndex, addr 0x1814bceb0, size 0x10, virtual false, abstract: false, final false
static inline int32_t ComputeTemplateLodStateIndex(int32_t  templateIndex, int32_t  lodIndex, int32_t  stateKey) ;

/// @brief Method CreateStateIndices, addr 0x1814bcec0, size 0xe0, virtual false, abstract: false, final false
static inline uint32_t CreateStateIndices(uint32_t  mask) ;

/// @brief Method CreateStateMask, addr 0x1814bcfa0, size 0x60, virtual false, abstract: false, final false
static inline uint8_t CreateStateMask(::MA::Flora::IndirectStateFlags  supported) ;

/// @brief Method FindSortedLightmapPartitionIndex, addr 0x1814bd000, size 0x50, virtual false, abstract: false, final false
static inline int32_t FindSortedLightmapPartitionIndex(::Unity::Collections::NativeList_1<int32_t>  sortedLightmapIndices, int32_t  lightmapIndex) ;

/// @brief Method InsertSortedUniqueLightmapIndex, addr 0x1814bd050, size 0xa0, virtual false, abstract: false, final false
static inline void InsertSortedUniqueLightmapIndex(::Unity::Collections::NativeList_1<int32_t>  sortedLightmapIndices, int32_t  lightmapIndex) ;

/// @brief Method IsDefaultSingleLightmapPartition, addr 0x1814bd0f0, size 0x10, virtual false, abstract: false, final false
static inline bool IsDefaultSingleLightmapPartition(int32_t  partitionCount, int32_t  lightmapIndex) ;

/// @brief Method StateMaskContainsKey, addr 0x1814bd100, size 0x10, virtual false, abstract: false, final false
static inline bool StateMaskContainsKey(uint32_t  mask, int32_t  key) ;

/// @brief Method StateMaskFindSlot, addr 0x1814bd110, size 0x70, virtual false, abstract: false, final false
static inline int32_t StateMaskFindSlot(uint32_t  state, int32_t  key) ;

/// @brief Method StateMaskHasFlags, addr 0x1814bd180, size 0xb0, virtual false, abstract: false, final false
static inline bool StateMaskHasFlags(uint32_t  state, ::MA::Flora::IndirectStateFlags  flags) ;

/// @brief Method StateSlotFromKey, addr 0x1814bd230, size 0x20, virtual false, abstract: false, final false
static inline int32_t StateSlotFromKey(uint32_t  indices, int32_t  key) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawStateUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawStateUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawStateUtility(DrawStateUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawStateUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawStateUtility(DrawStateUtility const& ) = delete;

/// @brief Field MaxLodCount offset 0xffffffff size 0x4
static constexpr int32_t  MaxLodCount{static_cast<int32_t>(0x8)};

/// @brief Field MaxSplitCount offset 0xffffffff size 0x4
static constexpr int32_t  MaxSplitCount{static_cast<int32_t>(0x4)};

/// @brief Field StateBitCount offset 0xffffffff size 0x4
static constexpr int32_t  StateBitCount{static_cast<int32_t>(0x3)};

/// @brief Field StateKeyCount offset 0xffffffff size 0x4
static constexpr int32_t  StateKeyCount{static_cast<int32_t>(0x8)};

/// @brief Field StateLodStride offset 0xffffffff size 0x4
static constexpr int32_t  StateLodStride{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13160};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::DrawStateUtility) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
