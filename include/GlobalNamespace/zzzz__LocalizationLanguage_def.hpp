#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizationLanguage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalizationLanguage)
// Forward declare root types
namespace GlobalNamespace {
struct LocalizationLanguage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LocalizationLanguage);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalizationLanguage, "", "LocalizationLanguage");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LocalizationLanguage
struct CORDL_TYPE LocalizationLanguage {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LocalizationLanguage_Unwrapped
enum struct __LocalizationLanguage_Unwrapped : int32_t {
__E_English = static_cast<int32_t>(0x1),
__E_French = static_cast<int32_t>(0x2),
__E_Italian = static_cast<int32_t>(0x3),
__E_German = static_cast<int32_t>(0x4),
__E_EuropeanSpanish = static_cast<int32_t>(0x5),
__E_SimplifiedChinese = static_cast<int32_t>(0x6),
__E_Japanese = static_cast<int32_t>(0x7),
__E_Russian = static_cast<int32_t>(0x8),
__E_Korean = static_cast<int32_t>(0x9),
__E_BrazilianPortuguese = static_cast<int32_t>(0xa),
__E_Polish = static_cast<int32_t>(0xb),
__E_Turkish = static_cast<int32_t>(0xc),
__E_Czech = static_cast<int32_t>(0xd),
__E_LatinAmericanSpanish = static_cast<int32_t>(0xe),
__E_TraditionalChinese = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LocalizationLanguage_Unwrapped () const noexcept {
return static_cast<__LocalizationLanguage_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LocalizationLanguage() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LocalizationLanguage(int32_t  value__) noexcept;

/// @brief Field BrazilianPortuguese value: I32(10)
static ::GlobalNamespace::LocalizationLanguage const BrazilianPortuguese;

/// @brief Field Czech value: I32(13)
static ::GlobalNamespace::LocalizationLanguage const Czech;

/// @brief Field English value: I32(1)
static ::GlobalNamespace::LocalizationLanguage const English;

/// @brief Field EuropeanSpanish value: I32(5)
static ::GlobalNamespace::LocalizationLanguage const EuropeanSpanish;

/// @brief Field French value: I32(2)
static ::GlobalNamespace::LocalizationLanguage const French;

/// @brief Field German value: I32(4)
static ::GlobalNamespace::LocalizationLanguage const German;

/// @brief Field Italian value: I32(3)
static ::GlobalNamespace::LocalizationLanguage const Italian;

/// @brief Field Japanese value: I32(7)
static ::GlobalNamespace::LocalizationLanguage const Japanese;

/// @brief Field Korean value: I32(9)
static ::GlobalNamespace::LocalizationLanguage const Korean;

/// @brief Field LatinAmericanSpanish value: I32(14)
static ::GlobalNamespace::LocalizationLanguage const LatinAmericanSpanish;

/// @brief Field Polish value: I32(11)
static ::GlobalNamespace::LocalizationLanguage const Polish;

/// @brief Field Russian value: I32(8)
static ::GlobalNamespace::LocalizationLanguage const Russian;

/// @brief Field SimplifiedChinese value: I32(6)
static ::GlobalNamespace::LocalizationLanguage const SimplifiedChinese;

/// @brief Field TraditionalChinese value: I32(15)
static ::GlobalNamespace::LocalizationLanguage const TraditionalChinese;

/// @brief Field Turkish value: I32(12)
static ::GlobalNamespace::LocalizationLanguage const Turkish;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5011};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizationLanguage, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalizationLanguage) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
