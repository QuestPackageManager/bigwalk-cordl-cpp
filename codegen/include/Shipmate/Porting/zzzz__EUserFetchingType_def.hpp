#pragma once
// IWYU pragma private; include "Shipmate/Porting/EUserFetchingType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EUserFetchingType)
// Forward declare root types
namespace Shipmate::Porting {
struct EUserFetchingType;
}
// Write type traits
MARK_VAL_T(::Shipmate::Porting::EUserFetchingType);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::EUserFetchingType, "Shipmate.Porting", "EUserFetchingType");
// Dependencies 
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.EUserFetchingType
struct CORDL_TYPE EUserFetchingType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EUserFetchingType_Unwrapped
enum struct __EUserFetchingType_Unwrapped : int32_t {
__E_Persistent = static_cast<int32_t>(0x0),
__E_First = static_cast<int32_t>(0x1),
__E_Prompt = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EUserFetchingType_Unwrapped () const noexcept {
return static_cast<__EUserFetchingType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EUserFetchingType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EUserFetchingType(int32_t  value__) noexcept;

/// @brief Field First value: I32(1)
static ::Shipmate::Porting::EUserFetchingType const First;

/// @brief Field Persistent value: I32(0)
static ::Shipmate::Porting::EUserFetchingType const Persistent;

/// @brief Field Prompt value: I32(2)
static ::Shipmate::Porting::EUserFetchingType const Prompt;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20631};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::EUserFetchingType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::EUserFetchingType) == 0x4, "Size mismatch!");

} // namespace end def Shipmate::Porting
