#pragma once
// IWYU pragma private; include "Steamworks/EItemUpdateStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EItemUpdateStatus)
// Forward declare root types
namespace Steamworks {
struct EItemUpdateStatus;
}
// Write type traits
MARK_VAL_T(::Steamworks::EItemUpdateStatus);
DEFINE_IL2CPP_CLASS(::Steamworks::EItemUpdateStatus, "Steamworks", "EItemUpdateStatus");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EItemUpdateStatus
struct CORDL_TYPE EItemUpdateStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EItemUpdateStatus_Unwrapped
enum struct __EItemUpdateStatus_Unwrapped : int32_t {
__E_k_EItemUpdateStatusInvalid = static_cast<int32_t>(0x0),
__E_k_EItemUpdateStatusPreparingConfig = static_cast<int32_t>(0x1),
__E_k_EItemUpdateStatusPreparingContent = static_cast<int32_t>(0x2),
__E_k_EItemUpdateStatusUploadingContent = static_cast<int32_t>(0x3),
__E_k_EItemUpdateStatusUploadingPreviewFile = static_cast<int32_t>(0x4),
__E_k_EItemUpdateStatusCommittingChanges = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EItemUpdateStatus_Unwrapped () const noexcept {
return static_cast<__EItemUpdateStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EItemUpdateStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EItemUpdateStatus(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16293};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EItemUpdateStatusCommittingChanges value: I32(5)
static ::Steamworks::EItemUpdateStatus const k_EItemUpdateStatusCommittingChanges;

/// @brief Field k_EItemUpdateStatusInvalid value: I32(0)
static ::Steamworks::EItemUpdateStatus const k_EItemUpdateStatusInvalid;

/// @brief Field k_EItemUpdateStatusPreparingConfig value: I32(1)
static ::Steamworks::EItemUpdateStatus const k_EItemUpdateStatusPreparingConfig;

/// @brief Field k_EItemUpdateStatusPreparingContent value: I32(2)
static ::Steamworks::EItemUpdateStatus const k_EItemUpdateStatusPreparingContent;

/// @brief Field k_EItemUpdateStatusUploadingContent value: I32(3)
static ::Steamworks::EItemUpdateStatus const k_EItemUpdateStatusUploadingContent;

/// @brief Field k_EItemUpdateStatusUploadingPreviewFile value: I32(4)
static ::Steamworks::EItemUpdateStatus const k_EItemUpdateStatusUploadingPreviewFile;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EItemUpdateStatus, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EItemUpdateStatus) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
