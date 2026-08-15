#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationTemplateType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PresenceModificationTemplateType)
// Forward declare root types
namespace Epic::OnlineServices::Presence {
struct PresenceModificationTemplateType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::PresenceModificationTemplateType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::PresenceModificationTemplateType, "Epic.OnlineServices.Presence", "PresenceModificationTemplateType");
// Dependencies 
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.PresenceModificationTemplateType
struct CORDL_TYPE PresenceModificationTemplateType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PresenceModificationTemplateType_Unwrapped
enum struct __PresenceModificationTemplateType_Unwrapped : int32_t {
__E_Int = static_cast<int32_t>(0x1),
__E_String = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PresenceModificationTemplateType_Unwrapped () const noexcept {
return static_cast<__PresenceModificationTemplateType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PresenceModificationTemplateType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PresenceModificationTemplateType(int32_t  value__) noexcept;

/// @brief Field Int value: I32(1)
static ::Epic::OnlineServices::Presence::PresenceModificationTemplateType const Int;

/// @brief Field String value: I32(2)
static ::Epic::OnlineServices::Presence::PresenceModificationTemplateType const String;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8252};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationTemplateType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::PresenceModificationTemplateType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
