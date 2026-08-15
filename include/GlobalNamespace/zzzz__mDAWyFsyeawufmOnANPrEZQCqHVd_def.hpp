#pragma once
// IWYU pragma private; include "GlobalNamespace/mDAWyFsyeawufmOnANPrEZQCqHVd.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(mDAWyFsyeawufmOnANPrEZQCqHVd)
// Forward declare root types
namespace GlobalNamespace {
struct mDAWyFsyeawufmOnANPrEZQCqHVd;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::mDAWyFsyeawufmOnANPrEZQCqHVd);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::mDAWyFsyeawufmOnANPrEZQCqHVd, "", "mDAWyFsyeawufmOnANPrEZQCqHVd");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: mDAWyFsyeawufmOnANPrEZQCqHVd
struct CORDL_TYPE mDAWyFsyeawufmOnANPrEZQCqHVd {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __mDAWyFsyeawufmOnANPrEZQCqHVd_Unwrapped
enum struct __mDAWyFsyeawufmOnANPrEZQCqHVd_Unwrapped : int32_t {
__E_ConstantBuffer = static_cast<int32_t>(0x0),
__E_TextureBuffer = static_cast<int32_t>(0x1),
__E_Texture = static_cast<int32_t>(0x2),
__E_Sampler = static_cast<int32_t>(0x3),
__E_UnorderedAccessViewRWTyped = static_cast<int32_t>(0x4),
__E_Structured = static_cast<int32_t>(0x5),
__E_UnorderedAccessViewRWStructured = static_cast<int32_t>(0x6),
__E_ByteAddress = static_cast<int32_t>(0x7),
__E_UnorderedAccessViewRWByteAddress = static_cast<int32_t>(0x8),
__E_UnorderedAccessViewAppendStructured = static_cast<int32_t>(0x9),
__E_UnorderedAccessViewConsumeStructured = static_cast<int32_t>(0xa),
__E_UnorderedAccessViewRWStructuredWithCounter = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __mDAWyFsyeawufmOnANPrEZQCqHVd_Unwrapped () const noexcept {
return static_cast<__mDAWyFsyeawufmOnANPrEZQCqHVd_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr mDAWyFsyeawufmOnANPrEZQCqHVd() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr mDAWyFsyeawufmOnANPrEZQCqHVd(int32_t  value__) noexcept;

/// @brief Field ByteAddress value: I32(7)
static ::GlobalNamespace::mDAWyFsyeawufmOnANPrEZQCqHVd const ByteAddress;

/// @brief Field ConstantBuffer value: I32(0)
static ::GlobalNamespace::mDAWyFsyeawufmOnANPrEZQCqHVd const ConstantBuffer;

/// @brief Field Sampler value: I32(3)
static ::GlobalNamespace::mDAWyFsyeawufmOnANPrEZQCqHVd const Sampler;

/// @brief Field Structured value: I32(5)
static ::GlobalNamespace::mDAWyFsyeawufmOnANPrEZQCqHVd const Structured;

/// @brief Field Texture value: I32(2)
static ::GlobalNamespace::mDAWyFsyeawufmOnANPrEZQCqHVd const Texture;

/// @brief Field TextureBuffer value: I32(1)
static ::GlobalNamespace::mDAWyFsyeawufmOnANPrEZQCqHVd const TextureBuffer;

/// @brief Field UnorderedAccessViewAppendStructured value: I32(9)
static ::GlobalNamespace::mDAWyFsyeawufmOnANPrEZQCqHVd const UnorderedAccessViewAppendStructured;

/// @brief Field UnorderedAccessViewConsumeStructured value: I32(10)
static ::GlobalNamespace::mDAWyFsyeawufmOnANPrEZQCqHVd const UnorderedAccessViewConsumeStructured;

/// @brief Field UnorderedAccessViewRWByteAddress value: I32(8)
static ::GlobalNamespace::mDAWyFsyeawufmOnANPrEZQCqHVd const UnorderedAccessViewRWByteAddress;

/// @brief Field UnorderedAccessViewRWStructured value: I32(6)
static ::GlobalNamespace::mDAWyFsyeawufmOnANPrEZQCqHVd const UnorderedAccessViewRWStructured;

/// @brief Field UnorderedAccessViewRWStructuredWithCounter value: I32(11)
static ::GlobalNamespace::mDAWyFsyeawufmOnANPrEZQCqHVd const UnorderedAccessViewRWStructuredWithCounter;

/// @brief Field UnorderedAccessViewRWTyped value: I32(4)
static ::GlobalNamespace::mDAWyFsyeawufmOnANPrEZQCqHVd const UnorderedAccessViewRWTyped;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6211};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::mDAWyFsyeawufmOnANPrEZQCqHVd, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::mDAWyFsyeawufmOnANPrEZQCqHVd) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
