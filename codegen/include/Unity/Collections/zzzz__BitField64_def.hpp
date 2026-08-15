#pragma once
// IWYU pragma private; include "Unity/Collections/BitField64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitField64)
// Forward declare root types
namespace Unity::Collections {
struct BitField64;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::BitField64);
DEFINE_IL2CPP_CLASS(::Unity::Collections::BitField64, "Unity.Collections", "BitField64");
// Dependencies 
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.BitField64
struct CORDL_TYPE BitField64 {
public:
// Declarations
/// @brief Method CheckArgs, addr 0x181ea9220, size 0x90, virtual false, abstract: false, final false
static inline void CheckArgs(int32_t  pos, int32_t  numBits) ;

/// @brief Method Clear, addr 0x18035d7d0, size 0x20, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CountBits, addr 0x181ea92b0, size 0x80, virtual false, abstract: false, final false
inline int32_t CountBits() ;

/// @brief Method CountLeadingZeros, addr 0x181ea9330, size 0x20, virtual false, abstract: false, final false
inline int32_t CountLeadingZeros() ;

/// @brief Method CountTrailingZeros, addr 0x181ea9350, size 0x20, virtual false, abstract: false, final false
inline int32_t CountTrailingZeros() ;

/// @brief Method GetBits, addr 0x181ea9370, size 0x40, virtual false, abstract: false, final false
inline uint64_t GetBits(int32_t  pos, int32_t  numBits) ;

/// @brief Method IsSet, addr 0x181ea93b0, size 0x20, virtual false, abstract: false, final false
inline bool IsSet(int32_t  pos) ;

/// @brief Method SetBits, addr 0x181ea93d0, size 0x40, virtual false, abstract: false, final false
inline void SetBits(int32_t  pos, bool  value) ;

/// @brief Method SetBits, addr 0x181ea9410, size 0x60, virtual false, abstract: false, final false
inline void SetBits(int32_t  pos, bool  value, int32_t  numBits) ;

/// @brief Method TestAll, addr 0x181ea9470, size 0x40, virtual false, abstract: false, final false
inline bool TestAll(int32_t  pos, int32_t  numBits) ;

/// @brief Method TestAny, addr 0x181ea94b0, size 0x40, virtual false, abstract: false, final false
inline bool TestAny(int32_t  pos, int32_t  numBits) ;

/// @brief Method TestNone, addr 0x181ea94f0, size 0x40, virtual false, abstract: false, final false
inline bool TestNone(int32_t  pos, int32_t  numBits) ;

/// @brief Method .ctor, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint64_t  initialValue) ;

// Ctor Parameters []
// @brief default ctor
constexpr BitField64() ;

// Ctor Parameters [CppParam { name: "Value", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr BitField64(uint64_t  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14833};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Value, offset: 0x0, size: 0x8, def value: None
 uint64_t  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::BitField64, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::BitField64) == 0x8, "Size mismatch!");

} // namespace end def Unity::Collections
