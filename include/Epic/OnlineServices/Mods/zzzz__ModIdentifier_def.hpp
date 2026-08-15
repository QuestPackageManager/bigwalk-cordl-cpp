#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/ModIdentifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ModIdentifier)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Mods {
struct ModIdentifier;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Mods::ModIdentifier);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Mods::ModIdentifier, "Epic.OnlineServices.Mods", "ModIdentifier");
// Dependencies 
namespace Epic::OnlineServices::Mods {
// Is value type: true
// CS Name: Epic.OnlineServices.Mods.ModIdentifier
struct CORDL_TYPE ModIdentifier {
public:
// Declarations
 __declspec(property(get=get_ArtifactId, put=set_ArtifactId)) ::Epic::OnlineServices::Utf8String*  ArtifactId;

 __declspec(property(get=get_ItemId, put=set_ItemId)) ::Epic::OnlineServices::Utf8String*  ItemId;

 __declspec(property(get=get_NamespaceId, put=set_NamespaceId)) ::Epic::OnlineServices::Utf8String*  NamespaceId;

 __declspec(property(get=get_Title, put=set_Title)) ::Epic::OnlineServices::Utf8String*  Title;

 __declspec(property(get=get_Version, put=set_Version)) ::Epic::OnlineServices::Utf8String*  Version;

/// @brief Method get_ArtifactId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ArtifactId() ;

/// @brief Method get_ItemId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ItemId() ;

/// @brief Method get_NamespaceId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_NamespaceId() ;

/// @brief Method get_Title, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Title() ;

/// @brief Method get_Version, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Version() ;

/// @brief Method set_ArtifactId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_ArtifactId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ItemId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_ItemId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_NamespaceId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_NamespaceId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Title, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_Title(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Version, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_Version(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ModIdentifier() ;

// Ctor Parameters [CppParam { name: "_NamespaceId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ItemId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ArtifactId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Title_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Version_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr ModIdentifier(::Epic::OnlineServices::Utf8String*  _NamespaceId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ItemId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ArtifactId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Title_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Version_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8381};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <NamespaceId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _NamespaceId_k__BackingField;

/// @brief Field <ItemId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ItemId_k__BackingField;

/// @brief Field <ArtifactId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ArtifactId_k__BackingField;

/// @brief Field <Title>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Title_k__BackingField;

/// @brief Field <Version>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Version_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Mods::ModIdentifier, _NamespaceId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::ModIdentifier, _ItemId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::ModIdentifier, _ArtifactId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::ModIdentifier, _Title_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::ModIdentifier, _Version_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Mods::ModIdentifier) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Mods
