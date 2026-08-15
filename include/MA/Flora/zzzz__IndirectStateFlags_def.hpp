#pragma once
// IWYU pragma private; include "MA/Flora/IndirectStateFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectStateFlags)
// Forward declare root types
namespace MA::Flora {
struct IndirectStateFlags;
}
// Write type traits
MARK_VAL_T(::MA::Flora::IndirectStateFlags);
DEFINE_IL2CPP_CLASS(::MA::Flora::IndirectStateFlags, "MA.Flora", "IndirectStateFlags");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.IndirectStateFlags
struct CORDL_TYPE IndirectStateFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __IndirectStateFlags_Unwrapped
enum struct __IndirectStateFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_HasFadeKeyword = static_cast<int32_t>(0x1),
__E_HasMotion = static_cast<int32_t>(0x2),
__E_HasFlippedWinding = static_cast<int32_t>(0x4),
__E_Count = static_cast<int32_t>(0x3),
__E_All = static_cast<int32_t>(0x7),
__E_KeyCount = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __IndirectStateFlags_Unwrapped () const noexcept {
return static_cast<__IndirectStateFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr IndirectStateFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IndirectStateFlags(int32_t  value__) noexcept;

/// @brief Field All value: I32(7)
static ::MA::Flora::IndirectStateFlags const All;

/// @brief Field Count value: I32(3)
static ::MA::Flora::IndirectStateFlags const Count;

/// @brief Field HasFadeKeyword value: I32(1)
static ::MA::Flora::IndirectStateFlags const HasFadeKeyword;

/// @brief Field HasFlippedWinding value: I32(4)
static ::MA::Flora::IndirectStateFlags const HasFlippedWinding;

/// @brief Field HasMotion value: I32(2)
static ::MA::Flora::IndirectStateFlags const HasMotion;

/// @brief Field KeyCount value: I32(8)
static ::MA::Flora::IndirectStateFlags const KeyCount;

/// @brief Field None value: I32(0)
static ::MA::Flora::IndirectStateFlags const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13193};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::IndirectStateFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::IndirectStateFlags) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
