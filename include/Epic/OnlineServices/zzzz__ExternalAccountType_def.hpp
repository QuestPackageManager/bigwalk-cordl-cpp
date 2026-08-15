#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ExternalAccountType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExternalAccountType)
// Forward declare root types
namespace Epic::OnlineServices {
struct ExternalAccountType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::ExternalAccountType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::ExternalAccountType, "Epic.OnlineServices", "ExternalAccountType");
// Dependencies 
namespace Epic::OnlineServices {
// Is value type: true
// CS Name: Epic.OnlineServices.ExternalAccountType
struct CORDL_TYPE ExternalAccountType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ExternalAccountType_Unwrapped
enum struct __ExternalAccountType_Unwrapped : int32_t {
__E_Epic = static_cast<int32_t>(0x0),
__E_Steam = static_cast<int32_t>(0x1),
__E_Psn = static_cast<int32_t>(0x2),
__E_Xbl = static_cast<int32_t>(0x3),
__E_Discord = static_cast<int32_t>(0x4),
__E_Gog = static_cast<int32_t>(0x5),
__E_Nintendo = static_cast<int32_t>(0x6),
__E_Uplay = static_cast<int32_t>(0x7),
__E_Openid = static_cast<int32_t>(0x8),
__E_Apple = static_cast<int32_t>(0x9),
__E_Google = static_cast<int32_t>(0xa),
__E_Oculus = static_cast<int32_t>(0xb),
__E_Itchio = static_cast<int32_t>(0xc),
__E_Amazon = static_cast<int32_t>(0xd),
__E_Viveport = static_cast<int32_t>(0xe),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExternalAccountType_Unwrapped () const noexcept {
return static_cast<__ExternalAccountType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ExternalAccountType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExternalAccountType(int32_t  value__) noexcept;

/// @brief Field Amazon value: I32(13)
static ::Epic::OnlineServices::ExternalAccountType const Amazon;

/// @brief Field Apple value: I32(9)
static ::Epic::OnlineServices::ExternalAccountType const Apple;

/// @brief Field Discord value: I32(4)
static ::Epic::OnlineServices::ExternalAccountType const Discord;

/// @brief Field Epic value: I32(0)
static ::Epic::OnlineServices::ExternalAccountType const Epic;

/// @brief Field Gog value: I32(5)
static ::Epic::OnlineServices::ExternalAccountType const Gog;

/// @brief Field Google value: I32(10)
static ::Epic::OnlineServices::ExternalAccountType const Google;

/// @brief Field Itchio value: I32(12)
static ::Epic::OnlineServices::ExternalAccountType const Itchio;

/// @brief Field Nintendo value: I32(6)
static ::Epic::OnlineServices::ExternalAccountType const Nintendo;

/// @brief Field Oculus value: I32(11)
static ::Epic::OnlineServices::ExternalAccountType const Oculus;

/// @brief Field Openid value: I32(8)
static ::Epic::OnlineServices::ExternalAccountType const Openid;

/// @brief Field Psn value: I32(2)
static ::Epic::OnlineServices::ExternalAccountType const Psn;

/// @brief Field Steam value: I32(1)
static ::Epic::OnlineServices::ExternalAccountType const Steam;

/// @brief Field Uplay value: I32(7)
static ::Epic::OnlineServices::ExternalAccountType const Uplay;

/// @brief Field Viveport value: I32(14)
static ::Epic::OnlineServices::ExternalAccountType const Viveport;

/// @brief Field Xbl value: I32(3)
static ::Epic::OnlineServices::ExternalAccountType const Xbl;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7449};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::ExternalAccountType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::ExternalAccountType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices
