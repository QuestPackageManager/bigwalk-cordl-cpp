#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ConfigFieldAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__ConfigFieldType_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__PlatformManager_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConfigFieldAttribute)
namespace PlayEveryWare::EpicOnlineServices {
struct ConfigFieldType;
}
namespace PlayEveryWare::EpicOnlineServices {
struct PlatformManager_Platform;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class ConfigFieldAttribute;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::ConfigFieldAttribute*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::ConfigFieldAttribute*, "PlayEveryWare.EpicOnlineServices", "ConfigFieldAttribute");
// Dependencies PlayEveryWare.EpicOnlineServices.ConfigFieldType, PlayEveryWare.EpicOnlineServices.PlatformManager::Platform, System.Attribute
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.ConfigFieldAttribute
class CORDL_TYPE ConfigFieldAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_FieldType)) ::PlayEveryWare::EpicOnlineServices::ConfigFieldType  FieldType;

 __declspec(property(get=get_Group)) int32_t  Group;

 __declspec(property(get=get_HelpURL)) ::StringW  HelpURL;

 __declspec(property(get=get_Label)) ::StringW  Label;

 __declspec(property(get=get_PlatformsEnabledOn)) ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  PlatformsEnabledOn;

 __declspec(property(get=get_ToolTip, put=set_ToolTip)) ::StringW  ToolTip;

/// @brief Field <FieldType>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__FieldType_k__BackingField, put=__cordl_internal_set__FieldType_k__BackingField)) ::PlayEveryWare::EpicOnlineServices::ConfigFieldType  _FieldType_k__BackingField;

/// @brief Field <Group>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Group_k__BackingField, put=__cordl_internal_set__Group_k__BackingField)) int32_t  _Group_k__BackingField;

/// @brief Field <HelpURL>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__HelpURL_k__BackingField, put=__cordl_internal_set__HelpURL_k__BackingField)) ::StringW  _HelpURL_k__BackingField;

/// @brief Field <Label>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Label_k__BackingField, put=__cordl_internal_set__Label_k__BackingField)) ::StringW  _Label_k__BackingField;

/// @brief Field <PlatformsEnabledOn>k__BackingField, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__PlatformsEnabledOn_k__BackingField, put=__cordl_internal_set__PlatformsEnabledOn_k__BackingField)) ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  _PlatformsEnabledOn_k__BackingField;

/// @brief Field <ToolTip>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ToolTip_k__BackingField, put=__cordl_internal_set__ToolTip_k__BackingField)) ::StringW  _ToolTip_k__BackingField;

static inline ::PlayEveryWare::EpicOnlineServices::ConfigFieldAttribute* New_ctor(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  enabledOn, ::StringW  label, ::PlayEveryWare::EpicOnlineServices::ConfigFieldType  type, ::StringW  tooltip, int32_t  group, ::StringW  helpUrl) ;

static inline ::PlayEveryWare::EpicOnlineServices::ConfigFieldAttribute* New_ctor(::StringW  label, ::PlayEveryWare::EpicOnlineServices::ConfigFieldType  type, ::StringW  tooltip, int32_t  group, ::StringW  helpUrl) ;

constexpr ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const& __cordl_internal_get__FieldType_k__BackingField() const;

constexpr ::PlayEveryWare::EpicOnlineServices::ConfigFieldType& __cordl_internal_get__FieldType_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Group_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Group_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__HelpURL_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__HelpURL_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Label_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Label_k__BackingField() ;

constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform const& __cordl_internal_get__PlatformsEnabledOn_k__BackingField() const;

constexpr ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform& __cordl_internal_get__PlatformsEnabledOn_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ToolTip_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ToolTip_k__BackingField() ;

constexpr void __cordl_internal_set__FieldType_k__BackingField(::PlayEveryWare::EpicOnlineServices::ConfigFieldType  value) ;

constexpr void __cordl_internal_set__Group_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__HelpURL_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Label_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__PlatformsEnabledOn_k__BackingField(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  value) ;

constexpr void __cordl_internal_set__ToolTip_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x180535880, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  enabledOn, ::StringW  label, ::PlayEveryWare::EpicOnlineServices::ConfigFieldType  type, ::StringW  tooltip, int32_t  group, ::StringW  helpUrl) ;

/// @brief Method .ctor, addr 0x180535900, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  label, ::PlayEveryWare::EpicOnlineServices::ConfigFieldType  type, ::StringW  tooltip, int32_t  group, ::StringW  helpUrl) ;

/// @brief Method get_FieldType, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::ConfigFieldType get_FieldType() ;

/// @brief Method get_Group, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Group() ;

/// @brief Method get_HelpURL, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_HelpURL() ;

/// @brief Method get_Label, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Label() ;

/// @brief Method get_PlatformsEnabledOn, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform get_PlatformsEnabledOn() ;

/// @brief Method get_ToolTip, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_ToolTip() ;

/// @brief Method set_ToolTip, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_ToolTip(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigFieldAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigFieldAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigFieldAttribute(ConfigFieldAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigFieldAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigFieldAttribute(ConfigFieldAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18812};

/// @brief Field <Label>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Label_k__BackingField;

/// @brief Field <ToolTip>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____ToolTip_k__BackingField;

/// @brief Field <Group>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____Group_k__BackingField;

/// @brief Field <HelpURL>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____HelpURL_k__BackingField;

/// @brief Field <FieldType>k__BackingField, offset: 0x30, size: 0x4, def value: None
 ::PlayEveryWare::EpicOnlineServices::ConfigFieldType  ____FieldType_k__BackingField;

/// @brief Field <PlatformsEnabledOn>k__BackingField, offset: 0x34, size: 0x4, def value: None
 ::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  ____PlatformsEnabledOn_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ConfigFieldAttribute, ____Label_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ConfigFieldAttribute, ____ToolTip_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ConfigFieldAttribute, ____Group_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ConfigFieldAttribute, ____HelpURL_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ConfigFieldAttribute, ____FieldType_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ConfigFieldAttribute, ____PlatformsEnabledOn_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::ConfigFieldAttribute) == 0x38, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
