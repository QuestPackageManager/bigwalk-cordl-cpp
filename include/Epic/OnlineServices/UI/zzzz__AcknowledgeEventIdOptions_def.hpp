#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/AcknowledgeEventIdOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AcknowledgeEventIdOptions)
namespace Epic::OnlineServices {
struct Result;
}
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct AcknowledgeEventIdOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::AcknowledgeEventIdOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::AcknowledgeEventIdOptions, "Epic.OnlineServices.UI", "AcknowledgeEventIdOptions");
// Dependencies Epic.OnlineServices.Result
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.AcknowledgeEventIdOptions
struct CORDL_TYPE AcknowledgeEventIdOptions {
public:
// Declarations
 __declspec(property(get=get_Result, put=set_Result)) ::Epic::OnlineServices::Result  Result;

 __declspec(property(get=get_UiEventId, put=set_UiEventId)) uint64_t  UiEventId;

/// @brief Method get_Result, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result get_Result() ;

/// @brief Method get_UiEventId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_UiEventId() ;

/// @brief Method set_Result, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_Result(::Epic::OnlineServices::Result  value) ;

/// @brief Method set_UiEventId, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_UiEventId(uint64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AcknowledgeEventIdOptions() ;

// Ctor Parameters [CppParam { name: "_UiEventId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_Result_k__BackingField", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }]
constexpr AcknowledgeEventIdOptions(uint64_t  _UiEventId_k__BackingField, ::Epic::OnlineServices::Result  _Result_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7501};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <UiEventId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 uint64_t  _UiEventId_k__BackingField;

/// @brief Field <Result>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  _Result_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::AcknowledgeEventIdOptions, _UiEventId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::AcknowledgeEventIdOptions, _Result_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::AcknowledgeEventIdOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
