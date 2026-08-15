#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/EnumerateModsOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Mods/zzzz__ModEnumerationType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(EnumerateModsOptions)
namespace Epic::OnlineServices::Mods {
struct ModEnumerationType;
}
namespace Epic::OnlineServices {
class EpicAccountId;
}
// Forward declare root types
namespace Epic::OnlineServices::Mods {
struct EnumerateModsOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Mods::EnumerateModsOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Mods::EnumerateModsOptions, "Epic.OnlineServices.Mods", "EnumerateModsOptions");
// Dependencies Epic.OnlineServices.Mods.ModEnumerationType
namespace Epic::OnlineServices::Mods {
// Is value type: true
// CS Name: Epic.OnlineServices.Mods.EnumerateModsOptions
struct CORDL_TYPE EnumerateModsOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

 __declspec(property(get=get_Type, put=set_Type)) ::Epic::OnlineServices::Mods::ModEnumerationType  Type;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method get_Type, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Mods::ModEnumerationType get_Type() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_Type, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_Type(::Epic::OnlineServices::Mods::ModEnumerationType  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr EnumerateModsOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_Type_k__BackingField", ty: "::Epic::OnlineServices::Mods::ModEnumerationType", modifiers: "", def_value: None }]
constexpr EnumerateModsOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Mods::ModEnumerationType  _Type_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8374};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <Type>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::Mods::ModEnumerationType  _Type_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Mods::EnumerateModsOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::EnumerateModsOptions, _Type_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Mods::EnumerateModsOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Mods
