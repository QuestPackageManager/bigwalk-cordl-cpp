#pragma once
// IWYU pragma private; include "Steamworks/EAccountType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EAccountType)
// Forward declare root types
namespace Steamworks {
struct EAccountType;
}
// Write type traits
MARK_VAL_T(::Steamworks::EAccountType);
DEFINE_IL2CPP_CLASS(::Steamworks::EAccountType, "Steamworks", "EAccountType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EAccountType
struct CORDL_TYPE EAccountType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EAccountType_Unwrapped
enum struct __EAccountType_Unwrapped : int32_t {
__E_k_EAccountTypeInvalid = static_cast<int32_t>(0x0),
__E_k_EAccountTypeIndividual = static_cast<int32_t>(0x1),
__E_k_EAccountTypeMultiseat = static_cast<int32_t>(0x2),
__E_k_EAccountTypeGameServer = static_cast<int32_t>(0x3),
__E_k_EAccountTypeAnonGameServer = static_cast<int32_t>(0x4),
__E_k_EAccountTypePending = static_cast<int32_t>(0x5),
__E_k_EAccountTypeContentServer = static_cast<int32_t>(0x6),
__E_k_EAccountTypeClan = static_cast<int32_t>(0x7),
__E_k_EAccountTypeChat = static_cast<int32_t>(0x8),
__E_k_EAccountTypeConsoleUser = static_cast<int32_t>(0x9),
__E_k_EAccountTypeAnonUser = static_cast<int32_t>(0xa),
__E_k_EAccountTypeMax = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EAccountType_Unwrapped () const noexcept {
return static_cast<__EAccountType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EAccountType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EAccountType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16316};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EAccountTypeAnonGameServer value: I32(4)
static ::Steamworks::EAccountType const k_EAccountTypeAnonGameServer;

/// @brief Field k_EAccountTypeAnonUser value: I32(10)
static ::Steamworks::EAccountType const k_EAccountTypeAnonUser;

/// @brief Field k_EAccountTypeChat value: I32(8)
static ::Steamworks::EAccountType const k_EAccountTypeChat;

/// @brief Field k_EAccountTypeClan value: I32(7)
static ::Steamworks::EAccountType const k_EAccountTypeClan;

/// @brief Field k_EAccountTypeConsoleUser value: I32(9)
static ::Steamworks::EAccountType const k_EAccountTypeConsoleUser;

/// @brief Field k_EAccountTypeContentServer value: I32(6)
static ::Steamworks::EAccountType const k_EAccountTypeContentServer;

/// @brief Field k_EAccountTypeGameServer value: I32(3)
static ::Steamworks::EAccountType const k_EAccountTypeGameServer;

/// @brief Field k_EAccountTypeIndividual value: I32(1)
static ::Steamworks::EAccountType const k_EAccountTypeIndividual;

/// @brief Field k_EAccountTypeInvalid value: I32(0)
static ::Steamworks::EAccountType const k_EAccountTypeInvalid;

/// @brief Field k_EAccountTypeMax value: I32(11)
static ::Steamworks::EAccountType const k_EAccountTypeMax;

/// @brief Field k_EAccountTypeMultiseat value: I32(2)
static ::Steamworks::EAccountType const k_EAccountTypeMultiseat;

/// @brief Field k_EAccountTypePending value: I32(5)
static ::Steamworks::EAccountType const k_EAccountTypePending;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EAccountType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EAccountType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
