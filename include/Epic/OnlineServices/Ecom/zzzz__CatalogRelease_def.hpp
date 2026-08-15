#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CatalogRelease.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CatalogRelease)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct CatalogRelease;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CatalogRelease);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CatalogRelease, "Epic.OnlineServices.Ecom", "CatalogRelease");
// Dependencies Epic.OnlineServices.Utf8String
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CatalogRelease
struct CORDL_TYPE CatalogRelease {
public:
// Declarations
 __declspec(property(get=get_CompatibleAppIds, put=set_CompatibleAppIds)) ::ArrayW<::Epic::OnlineServices::Utf8String*>  CompatibleAppIds;

 __declspec(property(get=get_CompatiblePlatforms, put=set_CompatiblePlatforms)) ::ArrayW<::Epic::OnlineServices::Utf8String*>  CompatiblePlatforms;

 __declspec(property(get=get_ReleaseNote, put=set_ReleaseNote)) ::Epic::OnlineServices::Utf8String*  ReleaseNote;

/// @brief Method get_CompatibleAppIds, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::Utf8String*> get_CompatibleAppIds() ;

/// @brief Method get_CompatiblePlatforms, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::Utf8String*> get_CompatiblePlatforms() ;

/// @brief Method get_ReleaseNote, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ReleaseNote() ;

/// @brief Method set_CompatibleAppIds, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_CompatibleAppIds(::ArrayW<::Epic::OnlineServices::Utf8String*>  value) ;

/// @brief Method set_CompatiblePlatforms, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_CompatiblePlatforms(::ArrayW<::Epic::OnlineServices::Utf8String*>  value) ;

/// @brief Method set_ReleaseNote, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_ReleaseNote(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CatalogRelease() ;

// Ctor Parameters [CppParam { name: "_CompatibleAppIds_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Utf8String*>", modifiers: "", def_value: None }, CppParam { name: "_CompatiblePlatforms_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Utf8String*>", modifiers: "", def_value: None }, CppParam { name: "_ReleaseNote_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr CatalogRelease(::ArrayW<::Epic::OnlineServices::Utf8String*>  _CompatibleAppIds_k__BackingField, ::ArrayW<::Epic::OnlineServices::Utf8String*>  _CompatiblePlatforms_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ReleaseNote_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8891};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <CompatibleAppIds>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::Utf8String*>  _CompatibleAppIds_k__BackingField;

/// @brief Field <CompatiblePlatforms>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::Utf8String*>  _CompatiblePlatforms_k__BackingField;

/// @brief Field <ReleaseNote>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ReleaseNote_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogRelease, _CompatibleAppIds_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogRelease, _CompatiblePlatforms_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogRelease, _ReleaseNote_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CatalogRelease) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
