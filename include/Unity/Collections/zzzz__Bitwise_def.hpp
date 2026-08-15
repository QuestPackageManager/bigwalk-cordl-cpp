#pragma once
// IWYU pragma private; include "Unity/Collections/Bitwise.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bitwise)
// Forward declare root types
namespace Unity::Collections {
struct Bitwise;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::Bitwise);
DEFINE_IL2CPP_CLASS(::Unity::Collections::Bitwise, "Unity.Collections", "Bitwise");
// Dependencies 
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.Bitwise
#pragma pack(push, 0)
struct CORDL_TYPE Bitwise {
public:
// Declarations
/// @brief Method AlignDown, addr 0x181459010, size 0x10, virtual false, abstract: false, final false
static inline int32_t AlignDown(int32_t  value, int32_t  alignPow2) ;

/// @brief Method AlignDown, addr 0x181ea9530, size 0x10, virtual false, abstract: false, final false
static inline int64_t AlignDown(int64_t  value, int32_t  alignPow2) ;

/// @brief Method AlignUp, addr 0x181459030, size 0x10, virtual false, abstract: false, final false
static inline int32_t AlignUp(int32_t  value, int32_t  alignPow2) ;

/// @brief Method AlignUp, addr 0x181ea9540, size 0x20, virtual false, abstract: false, final false
static inline int64_t AlignUp(int64_t  value, int32_t  alignPow2) ;

/// @brief Method CountBits, addr 0x181ea9560, size 0x200, virtual false, abstract: false, final false
static inline int32_t CountBits(uint64_t*  ptr, int32_t  length, int32_t  pos, int32_t  numBits) ;

/// @brief Method ExtractBits, addr 0x181ea9770, size 0x10, virtual false, abstract: false, final false
static inline uint32_t ExtractBits(uint32_t  input, int32_t  pos, uint32_t  mask) ;

/// @brief Method ExtractBits, addr 0x181ea9760, size 0x10, virtual false, abstract: false, final false
static inline uint64_t ExtractBits(uint64_t  input, int32_t  pos, uint64_t  mask) ;

/// @brief Method Find, addr 0x181eaa750, size 0x20, virtual false, abstract: false, final false
static inline int32_t Find(uint64_t*  ptr, int32_t  pos, int32_t  count, int32_t  numBits) ;

/// @brief Method FindByte, addr 0x181ea9780, size 0x160, virtual false, abstract: false, final false
static inline int32_t FindByte(uint64_t*  ptr, int32_t  beginBit, int32_t  endBit, int32_t  numBits) ;

/// @brief Method FindUint, addr 0x181ea98e0, size 0x150, virtual false, abstract: false, final false
static inline int32_t FindUint(uint64_t*  ptr, int32_t  beginBit, int32_t  endBit, int32_t  numBits) ;

/// @brief Method FindUlong, addr 0x181ea9a30, size 0x150, virtual false, abstract: false, final false
static inline int32_t FindUlong(uint64_t*  ptr, int32_t  beginBit, int32_t  endBit, int32_t  numBits) ;

/// @brief Method FindUpto14bits, addr 0x181ea9b80, size 0x140, virtual false, abstract: false, final false
static inline int32_t FindUpto14bits(uint64_t*  ptr, int32_t  beginBit, int32_t  endBit, int32_t  numBits) ;

/// @brief Method FindUpto6bits, addr 0x181ea9cc0, size 0x190, virtual false, abstract: false, final false
static inline int32_t FindUpto6bits(uint64_t*  ptr, int32_t  beginBit, int32_t  endBit, int32_t  numBits) ;

/// @brief Method FindUshort, addr 0x181ea9e50, size 0x160, virtual false, abstract: false, final false
static inline int32_t FindUshort(uint64_t*  ptr, int32_t  beginBit, int32_t  endBit, int32_t  numBits) ;

/// @brief Method FindWithBeginEnd, addr 0x181ea9fb0, size 0x7a0, virtual false, abstract: false, final false
static inline int32_t FindWithBeginEnd(uint64_t*  ptr, int32_t  beginBit, int32_t  endBit, int32_t  numBits) ;

/// @brief Method FromBool, addr 0x18145a560, size 0x10, virtual false, abstract: false, final false
static inline int32_t FromBool(bool  value) ;

/// @brief Method GetBits, addr 0x181eaa770, size 0x90, virtual false, abstract: false, final false
static inline uint64_t GetBits(uint64_t*  ptr, int32_t  length, int32_t  pos, int32_t  numBits) ;

/// @brief Method IsSet, addr 0x18145a570, size 0x20, virtual false, abstract: false, final false
static inline bool IsSet(uint64_t*  ptr, int32_t  pos) ;

/// @brief Method ReplaceBits, addr 0x181eaa830, size 0x20, virtual false, abstract: false, final false
static inline uint32_t ReplaceBits(uint32_t  input, int32_t  pos, uint32_t  mask, uint32_t  value) ;

/// @brief Method ReplaceBits, addr 0x181eaa800, size 0x30, virtual false, abstract: false, final false
static inline uint64_t ReplaceBits(uint64_t  input, int32_t  pos, uint64_t  mask, uint64_t  value) ;

/// @brief Method SetBits, addr 0x181eaa850, size 0x30, virtual false, abstract: false, final false
static inline uint32_t SetBits(uint32_t  input, int32_t  pos, uint32_t  mask, bool  value) ;

/// @brief Method SetBits, addr 0x181eaa880, size 0x30, virtual false, abstract: false, final false
static inline uint64_t SetBits(uint64_t  input, int32_t  pos, uint64_t  mask, bool  value) ;

/// @brief Method TestAll, addr 0x181eaa8b0, size 0xc0, virtual false, abstract: false, final false
static inline bool TestAll(uint64_t*  ptr, int32_t  length, int32_t  pos, int32_t  numBits) ;

/// @brief Method TestAny, addr 0x181eaa970, size 0xb0, virtual false, abstract: false, final false
static inline bool TestAny(uint64_t*  ptr, int32_t  length, int32_t  pos, int32_t  numBits) ;

/// @brief Method TestNone, addr 0x181eaaa20, size 0xb0, virtual false, abstract: false, final false
static inline bool TestNone(uint64_t*  ptr, int32_t  length, int32_t  pos, int32_t  numBits) ;

/// @brief Method lzcnt, addr 0x181eaaaf0, size 0x20, virtual false, abstract: false, final false
static inline int32_t lzcnt(uint16_t  value) ;

/// @brief Method lzcnt, addr 0x181eaaad0, size 0x20, virtual false, abstract: false, final false
static inline int32_t lzcnt(uint8_t  value) ;

/// @brief Method sar, addr 0x181eaab10, size 0x10, virtual false, abstract: false, final false
static inline uint16_t sar(uint16_t  val, int32_t  shift) ;

/// @brief Method tzcnt, addr 0x181eaab40, size 0x20, virtual false, abstract: false, final false
static inline int32_t tzcnt(uint16_t  value) ;

/// @brief Method tzcnt, addr 0x181eaab20, size 0x20, virtual false, abstract: false, final false
static inline int32_t tzcnt(uint8_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Bitwise() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14830};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Unity::Collections::Bitwise) == 0x1, "Size mismatch!");

} // namespace end def Unity::Collections
