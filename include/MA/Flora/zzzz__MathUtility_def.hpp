#pragma once
// IWYU pragma private; include "MA/Flora/MathUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MathUtility)
namespace Unity::Mathematics {
struct bool2;
}
namespace Unity::Mathematics {
struct bool3;
}
namespace Unity::Mathematics {
struct bool4;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
// Forward declare root types
namespace MA::Flora {
class MathUtility;
}
// Write type traits
MARK_REF_T(::MA::Flora::MathUtility*);
DEFINE_IL2CPP_CLASS(::MA::Flora::MathUtility*, "MA.Flora", "MathUtility");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.MathUtility
class CORDL_TYPE MathUtility : public ::System::Object {
public:
// Declarations
/// @brief Method CeilLogTwo, addr 0x18150bef0, size 0xd0, virtual false, abstract: false, final false
static inline int32_t CeilLogTwo(uint64_t  x) ;

/// @brief Method DivideAndRoundDown, addr 0x18150bfc0, size 0x10, virtual false, abstract: false, final false
static inline int32_t DivideAndRoundDown(int32_t  dividend, int32_t  divisor) ;

/// @brief Method DivideAndRoundNearest, addr 0x18150bfd0, size 0x20, virtual false, abstract: false, final false
static inline int32_t DivideAndRoundNearest(int32_t  dividend, int32_t  divisor) ;

/// @brief Method DivideAndRoundUp, addr 0x18150bff0, size 0x10, virtual false, abstract: false, final false
static inline int32_t DivideAndRoundUp(int32_t  dividend, int32_t  divisor) ;

/// @brief Method GridSnap, addr 0x18150c000, size 0x50, virtual false, abstract: false, final false
static inline float_t GridSnap(float_t  value, float_t  grid) ;

/// @brief Method IsNegative, addr 0x18150c050, size 0x10, virtual false, abstract: false, final false
static inline bool IsNegative(float_t  a) ;

/// @brief Method Nearly, addr 0x18150c0a0, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool2 Nearly(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, float_t  tolerance) ;

/// @brief Method Nearly, addr 0x18150c100, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool3 Nearly(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, float_t  tolerance) ;

/// @brief Method Nearly, addr 0x18150c060, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::bool4 Nearly(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b, float_t  tolerance) ;

/// @brief Method NearlyEquals, addr 0x18150b760, size 0x70, virtual false, abstract: false, final false
static inline bool NearlyEquals(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, float_t  tolerance) ;

/// @brief Method NearlyEquals, addr 0x18150b5e0, size 0x80, virtual false, abstract: false, final false
static inline bool NearlyEquals(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, float_t  tolerance) ;

/// @brief Method NearlyEquals, addr 0x18150b980, size 0x40, virtual false, abstract: false, final false
static inline bool NearlyEquals(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b, float_t  tolerance) ;

/// @brief Method NearlyEquals, addr 0x18150b960, size 0x20, virtual false, abstract: false, final false
static inline bool NearlyEquals(float_t  a, float_t  b, float_t  tolerance) ;

/// @brief Method NextMultipleOf, addr 0x181459030, size 0x10, virtual false, abstract: false, final false
static inline int32_t NextMultipleOf(int32_t  input, int32_t  alignPow2) ;

/// @brief Method NextMultipleOf, addr 0x18150c1f0, size 0x10, virtual false, abstract: false, final false
static inline int64_t NextMultipleOf(int64_t  input, int64_t  alignPow2) ;

/// @brief Method NextMultipleOf, addr 0x18150c1f0, size 0x10, virtual false, abstract: false, final false
static inline uint64_t NextMultipleOf(uint64_t  input, uint64_t  alignPow2) ;

/// @brief Method NextMultipleOfNonPow2, addr 0x18150c1d0, size 0x20, virtual false, abstract: false, final false
static inline int32_t NextMultipleOfNonPow2(int32_t  input, int32_t  alignment) ;

/// @brief Method NextMultipleOfNonPow2, addr 0x18150c1b0, size 0x20, virtual false, abstract: false, final false
static inline int64_t NextMultipleOfNonPow2(int64_t  input, int64_t  alignment) ;

/// @brief Method NextMultipleOfNonPow2, addr 0x18150c190, size 0x20, virtual false, abstract: false, final false
static inline uint64_t NextMultipleOfNonPow2(uint64_t  input, uint64_t  alignment) ;

/// @brief Method Repeat, addr 0x18150c200, size 0x90, virtual false, abstract: false, final false
static inline float_t Repeat(float_t  t, float_t  length) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MathUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MathUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MathUtility(MathUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MathUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MathUtility(MathUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13400};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::MathUtility) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
