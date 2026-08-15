#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/WriteResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WriteResult)
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
struct WriteResult;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::PlayerDataStorage::WriteResult);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::WriteResult, "Epic.OnlineServices.PlayerDataStorage", "WriteResult");
// Dependencies 
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: true
// CS Name: Epic.OnlineServices.PlayerDataStorage.WriteResult
struct CORDL_TYPE WriteResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WriteResult_Unwrapped
enum struct __WriteResult_Unwrapped : int32_t {
__E_ContinueWriting = static_cast<int32_t>(0x1),
__E_CompleteRequest = static_cast<int32_t>(0x2),
__E_FailRequest = static_cast<int32_t>(0x3),
__E_CancelRequest = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WriteResult_Unwrapped () const noexcept {
return static_cast<__WriteResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WriteResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WriteResult(int32_t  value__) noexcept;

/// @brief Field CancelRequest value: I32(4)
static ::Epic::OnlineServices::PlayerDataStorage::WriteResult const CancelRequest;

/// @brief Field CompleteRequest value: I32(2)
static ::Epic::OnlineServices::PlayerDataStorage::WriteResult const CompleteRequest;

/// @brief Field ContinueWriting value: I32(1)
static ::Epic::OnlineServices::PlayerDataStorage::WriteResult const ContinueWriting;

/// @brief Field FailRequest value: I32(3)
static ::Epic::OnlineServices::PlayerDataStorage::WriteResult const FailRequest;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8340};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::PlayerDataStorage::WriteResult, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::WriteResult) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage
