#pragma once
// IWYU pragma private; include "Steamworks/EGameSearchErrorCode_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EGameSearchErrorCode_t)
// Forward declare root types
namespace Steamworks {
struct EGameSearchErrorCode_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::EGameSearchErrorCode_t);
DEFINE_IL2CPP_CLASS(::Steamworks::EGameSearchErrorCode_t, "Steamworks", "EGameSearchErrorCode_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EGameSearchErrorCode_t
struct CORDL_TYPE EGameSearchErrorCode_t {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EGameSearchErrorCode_t_Unwrapped
enum struct __EGameSearchErrorCode_t_Unwrapped : int32_t {
__E_k_EGameSearchErrorCode_OK = static_cast<int32_t>(0x1),
__E_k_EGameSearchErrorCode_Failed_Search_Already_In_Progress = static_cast<int32_t>(0x2),
__E_k_EGameSearchErrorCode_Failed_No_Search_In_Progress = static_cast<int32_t>(0x3),
__E_k_EGameSearchErrorCode_Failed_Not_Lobby_Leader = static_cast<int32_t>(0x4),
__E_k_EGameSearchErrorCode_Failed_No_Host_Available = static_cast<int32_t>(0x5),
__E_k_EGameSearchErrorCode_Failed_Search_Params_Invalid = static_cast<int32_t>(0x6),
__E_k_EGameSearchErrorCode_Failed_Offline = static_cast<int32_t>(0x7),
__E_k_EGameSearchErrorCode_Failed_NotAuthorized = static_cast<int32_t>(0x8),
__E_k_EGameSearchErrorCode_Failed_Unknown_Error = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EGameSearchErrorCode_t_Unwrapped () const noexcept {
return static_cast<__EGameSearchErrorCode_t_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EGameSearchErrorCode_t() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EGameSearchErrorCode_t(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16326};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EGameSearchErrorCode_Failed_No_Host_Available value: I32(5)
static ::Steamworks::EGameSearchErrorCode_t const k_EGameSearchErrorCode_Failed_No_Host_Available;

/// @brief Field k_EGameSearchErrorCode_Failed_No_Search_In_Progress value: I32(3)
static ::Steamworks::EGameSearchErrorCode_t const k_EGameSearchErrorCode_Failed_No_Search_In_Progress;

/// @brief Field k_EGameSearchErrorCode_Failed_NotAuthorized value: I32(8)
static ::Steamworks::EGameSearchErrorCode_t const k_EGameSearchErrorCode_Failed_NotAuthorized;

/// @brief Field k_EGameSearchErrorCode_Failed_Not_Lobby_Leader value: I32(4)
static ::Steamworks::EGameSearchErrorCode_t const k_EGameSearchErrorCode_Failed_Not_Lobby_Leader;

/// @brief Field k_EGameSearchErrorCode_Failed_Offline value: I32(7)
static ::Steamworks::EGameSearchErrorCode_t const k_EGameSearchErrorCode_Failed_Offline;

/// @brief Field k_EGameSearchErrorCode_Failed_Search_Already_In_Progress value: I32(2)
static ::Steamworks::EGameSearchErrorCode_t const k_EGameSearchErrorCode_Failed_Search_Already_In_Progress;

/// @brief Field k_EGameSearchErrorCode_Failed_Search_Params_Invalid value: I32(6)
static ::Steamworks::EGameSearchErrorCode_t const k_EGameSearchErrorCode_Failed_Search_Params_Invalid;

/// @brief Field k_EGameSearchErrorCode_Failed_Unknown_Error value: I32(9)
static ::Steamworks::EGameSearchErrorCode_t const k_EGameSearchErrorCode_Failed_Unknown_Error;

/// @brief Field k_EGameSearchErrorCode_OK value: I32(1)
static ::Steamworks::EGameSearchErrorCode_t const k_EGameSearchErrorCode_OK;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EGameSearchErrorCode_t, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EGameSearchErrorCode_t) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
