#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ConfigGroupAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConfigGroupAttribute)
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class ConfigGroupAttribute;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute*, "PlayEveryWare.EpicOnlineServices", "ConfigGroupAttribute");
// Dependencies System.Attribute
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.ConfigGroupAttribute
class CORDL_TYPE ConfigGroupAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Collapsible)) bool  Collapsible;

 __declspec(property(get=get_GroupLabels)) ::ArrayW<::StringW>  GroupLabels;

 __declspec(property(get=get_Label)) ::StringW  Label;

/// @brief Field <Collapsible>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__Collapsible_k__BackingField, put=__cordl_internal_set__Collapsible_k__BackingField)) bool  _Collapsible_k__BackingField;

/// @brief Field <GroupLabels>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__GroupLabels_k__BackingField, put=__cordl_internal_set__GroupLabels_k__BackingField)) ::ArrayW<::StringW>  _GroupLabels_k__BackingField;

/// @brief Field <Label>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Label_k__BackingField, put=__cordl_internal_set__Label_k__BackingField)) ::StringW  _Label_k__BackingField;

static inline ::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute* New_ctor(::StringW  label, bool  collapsible) ;

static inline ::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute* New_ctor(::StringW  label, ::ArrayW<::StringW>  groupLabels, bool  collapsible) ;

constexpr bool const& __cordl_internal_get__Collapsible_k__BackingField() const;

constexpr bool& __cordl_internal_get__Collapsible_k__BackingField() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__GroupLabels_k__BackingField() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__GroupLabels_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Label_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Label_k__BackingField() ;

constexpr void __cordl_internal_set__Collapsible_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__GroupLabels_k__BackingField(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__Label_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x180535980, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  label, bool  collapsible) ;

/// @brief Method .ctor, addr 0x1805359b0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::StringW  label, ::ArrayW<::StringW>  groupLabels, bool  collapsible) ;

/// @brief Method get_Collapsible, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_Collapsible() ;

/// @brief Method get_GroupLabels, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_GroupLabels() ;

/// @brief Method get_Label, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Label() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigGroupAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigGroupAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigGroupAttribute(ConfigGroupAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigGroupAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigGroupAttribute(ConfigGroupAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18814};

/// @brief Field <Label>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Label_k__BackingField;

/// @brief Field <Collapsible>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____Collapsible_k__BackingField;

/// @brief Field <GroupLabels>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____GroupLabels_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute, ____Label_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute, ____Collapsible_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute, ____GroupLabels_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::ConfigGroupAttribute) == 0x28, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
