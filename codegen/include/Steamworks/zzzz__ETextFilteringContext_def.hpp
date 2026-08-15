#pragma once
// IWYU pragma private; include "Steamworks/ETextFilteringContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ETextFilteringContext)
// Forward declare root types
namespace Steamworks {
struct ETextFilteringContext;
}
// Write type traits
MARK_VAL_T(::Steamworks::ETextFilteringContext);
DEFINE_IL2CPP_CLASS(::Steamworks::ETextFilteringContext, "Steamworks", "ETextFilteringContext");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ETextFilteringContext
struct CORDL_TYPE ETextFilteringContext {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ETextFilteringContext_Unwrapped
enum struct __ETextFilteringContext_Unwrapped : int32_t {
__E_k_ETextFilteringContextUnknown = static_cast<int32_t>(0x0),
__E_k_ETextFilteringContextGameContent = static_cast<int32_t>(0x1),
__E_k_ETextFilteringContextChat = static_cast<int32_t>(0x2),
__E_k_ETextFilteringContextName = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ETextFilteringContext_Unwrapped () const noexcept {
return static_cast<__ETextFilteringContext_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ETextFilteringContext() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ETextFilteringContext(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16306};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ETextFilteringContextChat value: I32(2)
static ::Steamworks::ETextFilteringContext const k_ETextFilteringContextChat;

/// @brief Field k_ETextFilteringContextGameContent value: I32(1)
static ::Steamworks::ETextFilteringContext const k_ETextFilteringContextGameContent;

/// @brief Field k_ETextFilteringContextName value: I32(3)
static ::Steamworks::ETextFilteringContext const k_ETextFilteringContextName;

/// @brief Field k_ETextFilteringContextUnknown value: I32(0)
static ::Steamworks::ETextFilteringContext const k_ETextFilteringContextUnknown;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ETextFilteringContext, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ETextFilteringContext) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
