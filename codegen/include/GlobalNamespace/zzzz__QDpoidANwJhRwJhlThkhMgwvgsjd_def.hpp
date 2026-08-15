#pragma once
// IWYU pragma private; include "GlobalNamespace/QDpoidANwJhRwJhlThkhMgwvgsjd.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QDpoidANwJhRwJhlThkhMgwvgsjd)
// Forward declare root types
namespace GlobalNamespace {
struct QDpoidANwJhRwJhlThkhMgwvgsjd;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::QDpoidANwJhRwJhlThkhMgwvgsjd);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QDpoidANwJhRwJhlThkhMgwvgsjd, "", "QDpoidANwJhRwJhlThkhMgwvgsjd");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: QDpoidANwJhRwJhlThkhMgwvgsjd
struct CORDL_TYPE QDpoidANwJhRwJhlThkhMgwvgsjd {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __QDpoidANwJhRwJhlThkhMgwvgsjd_Unwrapped
enum struct __QDpoidANwJhRwJhlThkhMgwvgsjd_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_UInt32 = static_cast<int32_t>(0x1),
__E_SInt32 = static_cast<int32_t>(0x2),
__E_Float32 = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __QDpoidANwJhRwJhlThkhMgwvgsjd_Unwrapped () const noexcept {
return static_cast<__QDpoidANwJhRwJhlThkhMgwvgsjd_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr QDpoidANwJhRwJhlThkhMgwvgsjd() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr QDpoidANwJhRwJhlThkhMgwvgsjd(int32_t  value__) noexcept;

/// @brief Field Float32 value: I32(3)
static ::GlobalNamespace::QDpoidANwJhRwJhlThkhMgwvgsjd const Float32;

/// @brief Field SInt32 value: I32(2)
static ::GlobalNamespace::QDpoidANwJhRwJhlThkhMgwvgsjd const SInt32;

/// @brief Field UInt32 value: I32(1)
static ::GlobalNamespace::QDpoidANwJhRwJhlThkhMgwvgsjd const UInt32;

/// @brief Field Unknown value: I32(0)
static ::GlobalNamespace::QDpoidANwJhRwJhlThkhMgwvgsjd const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6208};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QDpoidANwJhRwJhlThkhMgwvgsjd, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::QDpoidANwJhRwJhlThkhMgwvgsjd) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
