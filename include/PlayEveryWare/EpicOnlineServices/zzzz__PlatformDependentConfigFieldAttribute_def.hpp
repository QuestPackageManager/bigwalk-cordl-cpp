#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/PlatformDependentConfigFieldAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__ConfigFieldType_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformDependentConfigFieldAttribute)
namespace PlayEveryWare::EpicOnlineServices {
struct ConfigFieldType;
}
namespace PlayEveryWare::EpicOnlineServices {
struct PlatformManager_Platform;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class PlatformDependentConfigFieldAttribute;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute*, "PlayEveryWare.EpicOnlineServices", "PlatformDependentConfigFieldAttribute");
// Dependencies PlayEveryWare.EpicOnlineServices.ConfigFieldType, System.Attribute
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.PlatformDependentConfigFieldAttribute
class CORDL_TYPE PlatformDependentConfigFieldAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_FieldType)) ::PlayEveryWare::EpicOnlineServices::ConfigFieldType  FieldType;

 __declspec(property(get=get_Group)) int32_t  Group;

 __declspec(property(get=get_Label)) ::StringW  Label;

 __declspec(property(get=get_ToolTip)) ::StringW  ToolTip;

/// @brief Field <FieldType>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__FieldType_k__BackingField, put=__cordl_internal_set__FieldType_k__BackingField)) ::PlayEveryWare::EpicOnlineServices::ConfigFieldType  _FieldType_k__BackingField;

/// @brief Field <Group>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Group_k__BackingField, put=__cordl_internal_set__Group_k__BackingField)) int32_t  _Group_k__BackingField;

/// @brief Field <Label>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Label_k__BackingField, put=__cordl_internal_set__Label_k__BackingField)) ::StringW  _Label_k__BackingField;

/// @brief Field <ToolTip>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ToolTip_k__BackingField, put=__cordl_internal_set__ToolTip_k__BackingField)) ::StringW  _ToolTip_k__BackingField;

static inline ::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute* New_ctor(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  supportedPlatforms, ::StringW  label, ::PlayEveryWare::EpicOnlineServices::ConfigFieldType  type, ::StringW  tooltip, int32_t  group) ;

constexpr ::PlayEveryWare::EpicOnlineServices::ConfigFieldType const& __cordl_internal_get__FieldType_k__BackingField() const;

constexpr ::PlayEveryWare::EpicOnlineServices::ConfigFieldType& __cordl_internal_get__FieldType_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Group_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Group_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Label_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Label_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ToolTip_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ToolTip_k__BackingField() ;

constexpr void __cordl_internal_set__FieldType_k__BackingField(::PlayEveryWare::EpicOnlineServices::ConfigFieldType  value) ;

constexpr void __cordl_internal_set__Group_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Label_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ToolTip_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x180543670, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform  supportedPlatforms, ::StringW  label, ::PlayEveryWare::EpicOnlineServices::ConfigFieldType  type, ::StringW  tooltip, int32_t  group) ;

/// @brief Method get_FieldType, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::ConfigFieldType get_FieldType() ;

/// @brief Method get_Group, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Group() ;

/// @brief Method get_Label, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Label() ;

/// @brief Method get_ToolTip, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_ToolTip() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformDependentConfigFieldAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformDependentConfigFieldAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformDependentConfigFieldAttribute(PlatformDependentConfigFieldAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformDependentConfigFieldAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformDependentConfigFieldAttribute(PlatformDependentConfigFieldAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18823};

/// @brief Field <Label>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Label_k__BackingField;

/// @brief Field <ToolTip>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____ToolTip_k__BackingField;

/// @brief Field <Group>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____Group_k__BackingField;

/// @brief Field <FieldType>k__BackingField, offset: 0x24, size: 0x4, def value: None
 ::PlayEveryWare::EpicOnlineServices::ConfigFieldType  ____FieldType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute, ____Label_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute, ____ToolTip_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute, ____Group_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute, ____FieldType_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::PlatformDependentConfigFieldAttribute) == 0x28, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
