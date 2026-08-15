#pragma once
// IWYU pragma private; include "MA/Flora/UnsafeBitArrayExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeBitArrayExtensions)
namespace MA::Flora {
template<typename TIndexType>
struct SetBitEnumerator_1;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeBitArray;
}
// Forward declare root types
namespace MA::Flora {
class UnsafeBitArrayExtensions;
}
// Write type traits
MARK_REF_T(::MA::Flora::UnsafeBitArrayExtensions*);
DEFINE_IL2CPP_CLASS(::MA::Flora::UnsafeBitArrayExtensions*, "MA.Flora", "UnsafeBitArrayExtensions");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.UnsafeBitArrayExtensions
class CORDL_TYPE UnsafeBitArrayExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method CheckArgs, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void CheckArgs(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray  bitArray, int32_t  pos, int32_t  numBits) ;

/// @brief Method FindFirst, addr 0x1814623d0, size 0x30, virtual false, abstract: false, final false
static inline int32_t FindFirst(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray  bitArray, bool  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method FindFirstSetBit, addr 0x1814551e0, size 0x190, virtual false, abstract: false, final false
static inline int32_t FindFirstSetBit(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray  bitArray, int32_t  startIndex, int32_t  count) ;

/// @brief Method FindFirstZeroBit, addr 0x181455370, size 0x1c0, virtual false, abstract: false, final false
static inline int32_t FindFirstZeroBit(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray  bitArray, int32_t  startIndex, int32_t  count) ;

/// @brief Method FindLast, addr 0x181462580, size 0x30, virtual false, abstract: false, final false
static inline int32_t FindLast(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray  bitArray, bool  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method FindLastSetBit, addr 0x181455530, size 0x170, virtual false, abstract: false, final false
static inline int32_t FindLastSetBit(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray  bitArray, int32_t  startIndex, int32_t  count) ;

/// @brief Method FindLastZeroBit, addr 0x181462400, size 0x180, virtual false, abstract: false, final false
static inline int32_t FindLastZeroBit(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray  bitArray, int32_t  startIndex, int32_t  count) ;

/// @brief Method SetBitEnumerator, addr 0x181462650, size 0xb0, virtual false, abstract: false, final false
static inline ::MA::Flora::SetBitEnumerator_1<int32_t> SetBitEnumerator(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray  bitArray) ;

/// @brief Method SetBitEnumerator, addr 0x1814625b0, size 0xa0, virtual false, abstract: false, final false
static inline ::MA::Flora::SetBitEnumerator_1<int32_t> SetBitEnumerator(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray  bitArray, int32_t  pos, int32_t  numBits) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnsafeBitArrayExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnsafeBitArrayExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsafeBitArrayExtensions(UnsafeBitArrayExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeBitArrayExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsafeBitArrayExtensions(UnsafeBitArrayExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12868};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::UnsafeBitArrayExtensions) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
