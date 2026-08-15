#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/RequestToJoinResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RequestToJoinResponse)
// Forward declare root types
namespace Epic::OnlineServices::CustomInvites {
struct RequestToJoinResponse;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::CustomInvites::RequestToJoinResponse);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::RequestToJoinResponse, "Epic.OnlineServices.CustomInvites", "RequestToJoinResponse");
// Dependencies 
namespace Epic::OnlineServices::CustomInvites {
// Is value type: true
// CS Name: Epic.OnlineServices.CustomInvites.RequestToJoinResponse
struct CORDL_TYPE RequestToJoinResponse {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RequestToJoinResponse_Unwrapped
enum struct __RequestToJoinResponse_Unwrapped : int32_t {
__E_Accepted = static_cast<int32_t>(0x0),
__E_Rejected = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RequestToJoinResponse_Unwrapped () const noexcept {
return static_cast<__RequestToJoinResponse_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RequestToJoinResponse() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RequestToJoinResponse(int32_t  value__) noexcept;

/// @brief Field Accepted value: I32(0)
static ::Epic::OnlineServices::CustomInvites::RequestToJoinResponse const Accepted;

/// @brief Field Rejected value: I32(1)
static ::Epic::OnlineServices::CustomInvites::RequestToJoinResponse const Rejected;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9092};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::CustomInvites::RequestToJoinResponse, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::CustomInvites::RequestToJoinResponse) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
