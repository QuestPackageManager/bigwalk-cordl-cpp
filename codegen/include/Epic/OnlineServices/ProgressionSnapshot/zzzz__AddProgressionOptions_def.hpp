#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ProgressionSnapshot/AddProgressionOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddProgressionOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::ProgressionSnapshot {
struct AddProgressionOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions, "Epic.OnlineServices.ProgressionSnapshot", "AddProgressionOptions");
// Dependencies 
namespace Epic::OnlineServices::ProgressionSnapshot {
// Is value type: true
// CS Name: Epic.OnlineServices.ProgressionSnapshot.AddProgressionOptions
struct CORDL_TYPE AddProgressionOptions {
public:
// Declarations
 __declspec(property(get=get_Key, put=set_Key)) ::Epic::OnlineServices::Utf8String*  Key;

 __declspec(property(get=get_SnapshotId, put=set_SnapshotId)) uint32_t  SnapshotId;

 __declspec(property(get=get_Value, put=set_Value)) ::Epic::OnlineServices::Utf8String*  Value;

/// @brief Method get_Key, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Key() ;

/// @brief Method get_SnapshotId, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_SnapshotId() ;

/// @brief Method get_Value, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Value() ;

/// @brief Method set_Key, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_Key(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_SnapshotId, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_SnapshotId(uint32_t  value) ;

/// @brief Method set_Value, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_Value(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AddProgressionOptions() ;

// Ctor Parameters [CppParam { name: "_SnapshotId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_Key_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Value_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr AddProgressionOptions(uint32_t  _SnapshotId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Key_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Value_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8182};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <SnapshotId>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _SnapshotId_k__BackingField;

/// @brief Field <Key>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Key_k__BackingField;

/// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Value_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions, _SnapshotId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions, _Key_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions, _Value_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::ProgressionSnapshot
