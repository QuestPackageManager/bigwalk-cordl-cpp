#pragma once
// IWYU pragma private; include "GlobalNamespace/eAPFRkAeAEdkPbMkiCsKhgxiYamqB.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(eAPFRkAeAEdkPbMkiCsKhgxiYamqB)
// Forward declare root types
namespace GlobalNamespace {
struct eAPFRkAeAEdkPbMkiCsKhgxiYamqB;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::eAPFRkAeAEdkPbMkiCsKhgxiYamqB);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::eAPFRkAeAEdkPbMkiCsKhgxiYamqB, "", "eAPFRkAeAEdkPbMkiCsKhgxiYamqB");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: eAPFRkAeAEdkPbMkiCsKhgxiYamqB
struct CORDL_TYPE eAPFRkAeAEdkPbMkiCsKhgxiYamqB {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __eAPFRkAeAEdkPbMkiCsKhgxiYamqB_Unwrapped
enum struct __eAPFRkAeAEdkPbMkiCsKhgxiYamqB_Unwrapped : uint8_t {
__E_Empty = static_cast<uint8_t>(0x0u),
__E_Low = static_cast<uint8_t>(0x1u),
__E_Medium = static_cast<uint8_t>(0x2u),
__E_Full = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __eAPFRkAeAEdkPbMkiCsKhgxiYamqB_Unwrapped () const noexcept {
return static_cast<__eAPFRkAeAEdkPbMkiCsKhgxiYamqB_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr eAPFRkAeAEdkPbMkiCsKhgxiYamqB() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr eAPFRkAeAEdkPbMkiCsKhgxiYamqB(uint8_t  value__) noexcept;

/// @brief Field Empty value: U8(0)
static ::GlobalNamespace::eAPFRkAeAEdkPbMkiCsKhgxiYamqB const Empty;

/// @brief Field Full value: U8(3)
static ::GlobalNamespace::eAPFRkAeAEdkPbMkiCsKhgxiYamqB const Full;

/// @brief Field Low value: U8(1)
static ::GlobalNamespace::eAPFRkAeAEdkPbMkiCsKhgxiYamqB const Low;

/// @brief Field Medium value: U8(2)
static ::GlobalNamespace::eAPFRkAeAEdkPbMkiCsKhgxiYamqB const Medium;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6121};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::eAPFRkAeAEdkPbMkiCsKhgxiYamqB, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::eAPFRkAeAEdkPbMkiCsKhgxiYamqB) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
