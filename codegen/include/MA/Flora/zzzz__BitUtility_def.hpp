#pragma once
// IWYU pragma private; include "MA/Flora/BitUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitUtility)
// Forward declare root types
namespace MA::Flora {
class BitUtility;
}
// Write type traits
MARK_REF_T(::MA::Flora::BitUtility*);
DEFINE_IL2CPP_CLASS(::MA::Flora::BitUtility*, "MA.Flora", "BitUtility");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.BitUtility
class CORDL_TYPE BitUtility : public ::System::Object {
public:
// Declarations
/// @brief Method AlignDown, addr 0x181459010, size 0x10, virtual false, abstract: false, final false
static inline int32_t AlignDown(int32_t  value, int32_t  alignPow2) ;

/// @brief Method AlignUp, addr 0x181459030, size 0x10, virtual false, abstract: false, final false
static inline int32_t AlignUp(int32_t  value, int32_t  alignPow2) ;

/// @brief Method AlignUp64, addr 0x181459020, size 0x10, virtual false, abstract: false, final false
static inline int32_t AlignUp64(int32_t  index) ;

/// @brief Method AndBits, addr 0x181459040, size 0x230, virtual false, abstract: false, final false
static inline void AndBits(uint64_t*  dst, int32_t  dstOffset, uint64_t*  src, int32_t  srcOffset, int32_t  bitCount) ;

/// @brief Method AndNotBits, addr 0x181459270, size 0x250, virtual false, abstract: false, final false
static inline void AndNotBits(uint64_t*  dst, int32_t  dstOffset, uint64_t*  src, int32_t  srcOffset, int32_t  bitCount) ;

/// @brief Method AndNotWords, addr 0x1814594c0, size 0x5c0, virtual false, abstract: false, final false
static inline void AndNotWords(uint64_t*  dst, uint64_t*  src, int32_t  wordCount) ;

/// @brief Method AndWords, addr 0x181459a80, size 0x5f0, virtual false, abstract: false, final false
static inline void AndWords(uint64_t*  dst, uint64_t*  src, int32_t  wordCount) ;

/// @brief Method CountBits, addr 0x18145a070, size 0x1f0, virtual false, abstract: false, final false
static inline int32_t CountBits(uint64_t*  ptr, int32_t  pos, int32_t  numBits) ;

/// @brief Method FindFirst, addr 0x18145a260, size 0x180, virtual false, abstract: false, final false
static inline int32_t FindFirst(bool  value, uint64_t*  bits, int32_t  offset, int32_t  count) ;

/// @brief Method FindLast, addr 0x18145a3e0, size 0x180, virtual false, abstract: false, final false
static inline int32_t FindLast(bool  value, uint64_t*  bits, int32_t  offset, int32_t  count) ;

/// @brief Method FromBool, addr 0x18145a560, size 0x10, virtual false, abstract: false, final false
static inline int32_t FromBool(bool  value) ;

/// @brief Method IsSet, addr 0x18145a570, size 0x20, virtual false, abstract: false, final false
static inline bool IsSet(uint64_t*  ptr, int32_t  pos) ;

/// @brief Method IsWordAligned, addr 0x18145a590, size 0x20, virtual false, abstract: false, final false
static inline bool IsWordAligned(int32_t  dstOffset, int32_t  srcOffset, int32_t  bitCount) ;

/// @brief Method LoadAlignedBits, addr 0x18145a5b0, size 0x60, virtual false, abstract: false, final false
static inline uint64_t LoadAlignedBits(uint64_t*  src, int32_t  srcWord, int32_t  shiftDelta) ;

/// @brief Method OrBits, addr 0x18145a610, size 0x230, virtual false, abstract: false, final false
static inline void OrBits(uint64_t*  dst, int32_t  dstOffset, uint64_t*  src, int32_t  srcOffset, int32_t  bitCount) ;

/// @brief Method OrWords, addr 0x18145a840, size 0x5b0, virtual false, abstract: false, final false
static inline void OrWords(uint64_t*  dst, uint64_t*  src, int32_t  wordCount) ;

/// @brief Method Set, addr 0x18145aee0, size 0x40, virtual false, abstract: false, final false
static inline void Set(uint64_t*  ptr, int32_t  pos, bool  value) ;

/// @brief Method SetBits, addr 0x18145adf0, size 0xf0, virtual false, abstract: false, final false
static inline void SetBits(uint64_t*  ptr, int32_t  pos, bool  value, int32_t  numBits) ;

/// @brief Method TestAny, addr 0x18145af20, size 0x90, virtual false, abstract: false, final false
static inline bool TestAny(uint64_t*  ptr, int32_t  pos, int32_t  numBits) ;

/// @brief Method XorBits, addr 0x18145afb0, size 0x230, virtual false, abstract: false, final false
static inline void XorBits(uint64_t*  dst, int32_t  dstOffset, uint64_t*  src, int32_t  srcOffset, int32_t  bitCount) ;

/// @brief Method XorWords, addr 0x18145b1e0, size 0x5b0, virtual false, abstract: false, final false
static inline void XorWords(uint64_t*  dst, uint64_t*  src, int32_t  wordCount) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BitUtility(BitUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitUtility(BitUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12864};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::BitUtility) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
