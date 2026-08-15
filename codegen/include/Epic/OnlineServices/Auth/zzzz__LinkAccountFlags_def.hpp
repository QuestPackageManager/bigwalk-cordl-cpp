#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LinkAccountFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LinkAccountFlags)
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct LinkAccountFlags;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::LinkAccountFlags);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::LinkAccountFlags, "Epic.OnlineServices.Auth", "LinkAccountFlags");
// Dependencies 
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.LinkAccountFlags
struct CORDL_TYPE LinkAccountFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LinkAccountFlags_Unwrapped
enum struct __LinkAccountFlags_Unwrapped : int32_t {
__E_NoFlags = static_cast<int32_t>(0x0),
__E_NintendoNsaId = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LinkAccountFlags_Unwrapped () const noexcept {
return static_cast<__LinkAccountFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LinkAccountFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LinkAccountFlags(int32_t  value__) noexcept;

/// @brief Field NintendoNsaId value: I32(1)
static ::Epic::OnlineServices::Auth::LinkAccountFlags const NintendoNsaId;

/// @brief Field NoFlags value: I32(0)
static ::Epic::OnlineServices::Auth::LinkAccountFlags const NoFlags;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9244};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::LinkAccountFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::LinkAccountFlags) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
