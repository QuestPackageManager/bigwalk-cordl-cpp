#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ProgressionSnapshot/SubmitSnapshotOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SubmitSnapshotOptions)
// Forward declare root types
namespace Epic::OnlineServices::ProgressionSnapshot {
struct SubmitSnapshotOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions, "Epic.OnlineServices.ProgressionSnapshot", "SubmitSnapshotOptions");
// Dependencies 
namespace Epic::OnlineServices::ProgressionSnapshot {
// Is value type: true
// CS Name: Epic.OnlineServices.ProgressionSnapshot.SubmitSnapshotOptions
struct CORDL_TYPE SubmitSnapshotOptions {
public:
// Declarations
 __declspec(property(get=get_SnapshotId, put=set_SnapshotId)) uint32_t  SnapshotId;

/// @brief Method get_SnapshotId, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_SnapshotId() ;

/// @brief Method set_SnapshotId, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_SnapshotId(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SubmitSnapshotOptions() ;

// Ctor Parameters [CppParam { name: "_SnapshotId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr SubmitSnapshotOptions(uint32_t  _SnapshotId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8201};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <SnapshotId>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _SnapshotId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions, _SnapshotId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::ProgressionSnapshot
