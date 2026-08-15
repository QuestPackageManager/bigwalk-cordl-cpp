#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/UpdateModOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Mods/zzzz__ModIdentifier_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UpdateModOptions)
namespace Epic::OnlineServices::Mods {
struct ModIdentifier;
}
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Mods {
struct UpdateModOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Mods::UpdateModOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Mods::UpdateModOptions, "Epic.OnlineServices.Mods", "UpdateModOptions");
// Dependencies Epic.OnlineServices.Mods.ModIdentifier, System.Nullable`1<T>
namespace Epic::OnlineServices::Mods {
// Is value type: true
// CS Name: Epic.OnlineServices.Mods.UpdateModOptions
struct CORDL_TYPE UpdateModOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

 __declspec(property(get=get_Mod, put=set_Mod)) ::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>  Mod;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method get_Mod, addr 0x180503c50, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier> get_Mod() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_Mod, addr 0x180503c70, size 0x30, virtual false, abstract: false, final false
inline void set_Mod(::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UpdateModOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_Mod_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>", modifiers: "", def_value: None }]
constexpr UpdateModOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>  _Mod_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8404};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <Mod>k__BackingField, offset: 0x8, size: 0x30, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>  _Mod_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Mods::UpdateModOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::UpdateModOptions, _Mod_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Mods::UpdateModOptions) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Mods
