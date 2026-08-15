#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/IngestStatOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Stats/zzzz__IngestData_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(IngestStatOptions)
namespace Epic::OnlineServices::Stats {
struct IngestData;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
// Forward declare root types
namespace Epic::OnlineServices::Stats {
struct IngestStatOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Stats::IngestStatOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Stats::IngestStatOptions, "Epic.OnlineServices.Stats", "IngestStatOptions");
// Dependencies Epic.OnlineServices.Stats.IngestData
namespace Epic::OnlineServices::Stats {
// Is value type: true
// CS Name: Epic.OnlineServices.Stats.IngestStatOptions
struct CORDL_TYPE IngestStatOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_Stats, put=set_Stats)) ::ArrayW<::Epic::OnlineServices::Stats::IngestData>  Stats;

 __declspec(property(get=get_TargetUserId, put=set_TargetUserId)) ::Epic::OnlineServices::ProductUserId*  TargetUserId;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_Stats, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::Stats::IngestData> get_Stats() ;

/// @brief Method get_TargetUserId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_TargetUserId() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_Stats, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_Stats(::ArrayW<::Epic::OnlineServices::Stats::IngestData>  value) ;

/// @brief Method set_TargetUserId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr IngestStatOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_Stats_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Stats::IngestData>", modifiers: "", def_value: None }, CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }]
constexpr IngestStatOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::ArrayW<::Epic::OnlineServices::Stats::IngestData>  _Stats_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7650};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <Stats>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::Stats::IngestData>  _Stats_k__BackingField;

/// @brief Field <TargetUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Stats::IngestStatOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::IngestStatOptions, _Stats_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::IngestStatOptions, _TargetUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Stats::IngestStatOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Stats
