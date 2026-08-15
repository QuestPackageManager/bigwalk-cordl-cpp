#pragma once
// IWYU pragma private; include "Steamworks/EWorkshopVideoProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EWorkshopVideoProvider)
// Forward declare root types
namespace Steamworks {
struct EWorkshopVideoProvider;
}
// Write type traits
MARK_VAL_T(::Steamworks::EWorkshopVideoProvider);
DEFINE_IL2CPP_CLASS(::Steamworks::EWorkshopVideoProvider, "Steamworks", "EWorkshopVideoProvider");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EWorkshopVideoProvider
struct CORDL_TYPE EWorkshopVideoProvider {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EWorkshopVideoProvider_Unwrapped
enum struct __EWorkshopVideoProvider_Unwrapped : int32_t {
__E_k_EWorkshopVideoProviderNone = static_cast<int32_t>(0x0),
__E_k_EWorkshopVideoProviderYoutube = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EWorkshopVideoProvider_Unwrapped () const noexcept {
return static_cast<__EWorkshopVideoProvider_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EWorkshopVideoProvider() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EWorkshopVideoProvider(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16284};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EWorkshopVideoProviderNone value: I32(0)
static ::Steamworks::EWorkshopVideoProvider const k_EWorkshopVideoProviderNone;

/// @brief Field k_EWorkshopVideoProviderYoutube value: I32(1)
static ::Steamworks::EWorkshopVideoProvider const k_EWorkshopVideoProviderYoutube;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EWorkshopVideoProvider, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EWorkshopVideoProvider) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
