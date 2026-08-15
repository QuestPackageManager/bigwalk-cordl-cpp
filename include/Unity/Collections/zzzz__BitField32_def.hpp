#pragma once
// IWYU pragma private; include "Unity/Collections/BitField32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitField32)
// Forward declare root types
namespace Unity::Collections {
struct BitField32;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::BitField32);
DEFINE_IL2CPP_CLASS(::Unity::Collections::BitField32, "Unity.Collections", "BitField32");
// Dependencies 
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.BitField32
struct CORDL_TYPE BitField32 {
public:
// Declarations
/// @brief Method CheckArgs, addr 0x181ea8ef0, size 0x90, virtual false, abstract: false, final false
static inline void CheckArgs(int32_t  pos, int32_t  numBits) ;

/// @brief Method Clear, addr 0x1805d77b0, size 0x20, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CountBits, addr 0x181ea8f80, size 0x50, virtual false, abstract: false, final false
inline int32_t CountBits() ;

/// @brief Method CountLeadingZeros, addr 0x181ea8fd0, size 0x20, virtual false, abstract: false, final false
inline int32_t CountLeadingZeros() ;

/// @brief Method CountTrailingZeros, addr 0x181ea8ff0, size 0x20, virtual false, abstract: false, final false
inline int32_t CountTrailingZeros() ;

/// @brief Method GetBits, addr 0x181ea9010, size 0x30, virtual false, abstract: false, final false
inline uint32_t GetBits(int32_t  pos, int32_t  numBits) ;

/// @brief Method IsSet, addr 0x181ea9040, size 0x20, virtual false, abstract: false, final false
inline bool IsSet(int32_t  pos) ;

/// @brief Method SetBits, addr 0x181ea9060, size 0x40, virtual false, abstract: false, final false
inline void SetBits(int32_t  pos, bool  value) ;

/// @brief Method SetBits, addr 0x181ea90a0, size 0x50, virtual false, abstract: false, final false
inline void SetBits(int32_t  pos, bool  value, int32_t  numBits) ;

/// @brief Method TestAll, addr 0x181ea90f0, size 0x40, virtual false, abstract: false, final false
inline bool TestAll(int32_t  pos, int32_t  numBits) ;

/// @brief Method TestAny, addr 0x181ea9130, size 0x40, virtual false, abstract: false, final false
inline bool TestAny(int32_t  pos, int32_t  numBits) ;

/// @brief Method TestNone, addr 0x181ea9170, size 0x40, virtual false, abstract: false, final false
inline bool TestNone(int32_t  pos, int32_t  numBits) ;

/// @brief Method .ctor, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  initialValue) ;

// Ctor Parameters []
// @brief default ctor
constexpr BitField32() ;

// Ctor Parameters [CppParam { name: "Value", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr BitField32(uint32_t  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14831};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Value, offset: 0x0, size: 0x4, def value: None
 uint32_t  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::BitField32, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::BitField32) == 0x4, "Size mismatch!");

} // namespace end def Unity::Collections
