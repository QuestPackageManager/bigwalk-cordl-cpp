#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/IngestData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IngestData)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Stats {
struct IngestData;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Stats::IngestData);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Stats::IngestData, "Epic.OnlineServices.Stats", "IngestData");
// Dependencies 
namespace Epic::OnlineServices::Stats {
// Is value type: true
// CS Name: Epic.OnlineServices.Stats.IngestData
struct CORDL_TYPE IngestData {
public:
// Declarations
 __declspec(property(get=get_IngestAmount, put=set_IngestAmount)) int32_t  IngestAmount;

 __declspec(property(get=get_StatName, put=set_StatName)) ::Epic::OnlineServices::Utf8String*  StatName;

/// @brief Method get_IngestAmount, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline int32_t get_IngestAmount() ;

/// @brief Method get_StatName, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_StatName() ;

/// @brief Method set_IngestAmount, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_IngestAmount(int32_t  value) ;

/// @brief Method set_StatName, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_StatName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr IngestData() ;

// Ctor Parameters [CppParam { name: "_StatName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_IngestAmount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IngestData(::Epic::OnlineServices::Utf8String*  _StatName_k__BackingField, int32_t  _IngestAmount_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7646};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <StatName>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _StatName_k__BackingField;

/// @brief Field <IngestAmount>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _IngestAmount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Stats::IngestData, _StatName_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::IngestData, _IngestAmount_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Stats::IngestData) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Stats
