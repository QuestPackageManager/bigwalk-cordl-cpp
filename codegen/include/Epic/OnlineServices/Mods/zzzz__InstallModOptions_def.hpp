#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/InstallModOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Mods/zzzz__ModIdentifier_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InstallModOptions)
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
struct InstallModOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Mods::InstallModOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Mods::InstallModOptions, "Epic.OnlineServices.Mods", "InstallModOptions");
// Dependencies Epic.OnlineServices.Mods.ModIdentifier, System.Nullable`1<T>
namespace Epic::OnlineServices::Mods {
// Is value type: true
// CS Name: Epic.OnlineServices.Mods.InstallModOptions
struct CORDL_TYPE InstallModOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

 __declspec(property(get=get_Mod, put=set_Mod)) ::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>  Mod;

 __declspec(property(get=get_RemoveAfterExit, put=set_RemoveAfterExit)) bool  RemoveAfterExit;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method get_Mod, addr 0x180503c50, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier> get_Mod() ;

/// @brief Method get_RemoveAfterExit, addr 0x1803023c0, size 0x10, virtual false, abstract: false, final false
inline bool get_RemoveAfterExit() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_Mod, addr 0x180503c70, size 0x30, virtual false, abstract: false, final false
inline void set_Mod(::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>  value) ;

/// @brief Method set_RemoveAfterExit, addr 0x180323260, size 0x10, virtual false, abstract: false, final false
inline void set_RemoveAfterExit(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InstallModOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_Mod_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>", modifiers: "", def_value: None }, CppParam { name: "_RemoveAfterExit_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr InstallModOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>  _Mod_k__BackingField, bool  _RemoveAfterExit_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8378};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <Mod>k__BackingField, offset: 0x8, size: 0x30, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Mods::ModIdentifier>  _Mod_k__BackingField;

/// @brief Field <RemoveAfterExit>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  _RemoveAfterExit_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Mods::InstallModOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::InstallModOptions, _Mod_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::InstallModOptions, _RemoveAfterExit_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Mods::InstallModOptions) == 0x40, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Mods
