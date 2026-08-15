#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/ReadResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadResult)
// Forward declare root types
namespace Epic::OnlineServices::TitleStorage {
struct ReadResult;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::TitleStorage::ReadResult);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::TitleStorage::ReadResult, "Epic.OnlineServices.TitleStorage", "ReadResult");
// Dependencies 
namespace Epic::OnlineServices::TitleStorage {
// Is value type: true
// CS Name: Epic.OnlineServices.TitleStorage.ReadResult
struct CORDL_TYPE ReadResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ReadResult_Unwrapped
enum struct __ReadResult_Unwrapped : int32_t {
__E_RrContinueReading = static_cast<int32_t>(0x1),
__E_RrFailRequest = static_cast<int32_t>(0x2),
__E_RrCancelRequest = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReadResult_Unwrapped () const noexcept {
return static_cast<__ReadResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ReadResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadResult(int32_t  value__) noexcept;

/// @brief Field RrCancelRequest value: I32(3)
static ::Epic::OnlineServices::TitleStorage::ReadResult const RrCancelRequest;

/// @brief Field RrContinueReading value: I32(1)
static ::Epic::OnlineServices::TitleStorage::ReadResult const RrContinueReading;

/// @brief Field RrFailRequest value: I32(2)
static ::Epic::OnlineServices::TitleStorage::ReadResult const RrFailRequest;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7637};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::TitleStorage::ReadResult, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::TitleStorage::ReadResult) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::TitleStorage
