#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/Info.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Presence/zzzz__DataRecord_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__Status_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Info)
namespace Epic::OnlineServices::Presence {
struct DataRecord;
}
namespace Epic::OnlineServices::Presence {
struct Status;
}
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Presence {
struct Info;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::Info);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::Info, "Epic.OnlineServices.Presence", "Info");
// Dependencies Epic.OnlineServices.Presence.DataRecord, Epic.OnlineServices.Presence.Status
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.Info
struct CORDL_TYPE Info {
public:
// Declarations
 __declspec(property(get=get_IntegratedPlatform, put=set_IntegratedPlatform)) ::Epic::OnlineServices::Utf8String*  IntegratedPlatform;

 __declspec(property(get=get_Platform, put=set_Platform)) ::Epic::OnlineServices::Utf8String*  Platform;

 __declspec(property(get=get_ProductId, put=set_ProductId)) ::Epic::OnlineServices::Utf8String*  ProductId;

 __declspec(property(get=get_ProductName, put=set_ProductName)) ::Epic::OnlineServices::Utf8String*  ProductName;

 __declspec(property(get=get_ProductVersion, put=set_ProductVersion)) ::Epic::OnlineServices::Utf8String*  ProductVersion;

 __declspec(property(get=get_Records, put=set_Records)) ::ArrayW<::Epic::OnlineServices::Presence::DataRecord>  Records;

 __declspec(property(get=get_RichText, put=set_RichText)) ::Epic::OnlineServices::Utf8String*  RichText;

 __declspec(property(get=get_Status, put=set_Status)) ::Epic::OnlineServices::Presence::Status  Status;

 __declspec(property(get=get_UserId, put=set_UserId)) ::Epic::OnlineServices::EpicAccountId*  UserId;

/// @brief Method get_IntegratedPlatform, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_IntegratedPlatform() ;

/// @brief Method get_Platform, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Platform() ;

/// @brief Method get_ProductId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ProductId() ;

/// @brief Method get_ProductName, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ProductName() ;

/// @brief Method get_ProductVersion, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ProductVersion() ;

/// @brief Method get_Records, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::Presence::DataRecord> get_Records() ;

/// @brief Method get_RichText, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_RichText() ;

/// @brief Method get_Status, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Presence::Status get_Status() ;

/// @brief Method get_UserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_UserId() ;

/// @brief Method set_IntegratedPlatform, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_IntegratedPlatform(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Platform, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_Platform(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ProductId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_ProductId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ProductName, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_ProductName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ProductVersion, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_ProductVersion(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Records, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_Records(::ArrayW<::Epic::OnlineServices::Presence::DataRecord>  value) ;

/// @brief Method set_RichText, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_RichText(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Status, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_Status(::Epic::OnlineServices::Presence::Status  value) ;

/// @brief Method set_UserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_UserId(::Epic::OnlineServices::EpicAccountId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Info() ;

// Ctor Parameters [CppParam { name: "_Status_k__BackingField", ty: "::Epic::OnlineServices::Presence::Status", modifiers: "", def_value: None }, CppParam { name: "_UserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_ProductId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ProductVersion_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Platform_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_RichText_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Records_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Presence::DataRecord>", modifiers: "", def_value: None }, CppParam { name: "_ProductName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_IntegratedPlatform_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr Info(::Epic::OnlineServices::Presence::Status  _Status_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _UserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ProductId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ProductVersion_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Platform_k__BackingField, ::Epic::OnlineServices::Utf8String*  _RichText_k__BackingField, ::ArrayW<::Epic::OnlineServices::Presence::DataRecord>  _Records_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ProductName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _IntegratedPlatform_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8217};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <Status>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Presence::Status  _Status_k__BackingField;

/// @brief Field <UserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _UserId_k__BackingField;

/// @brief Field <ProductId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ProductId_k__BackingField;

/// @brief Field <ProductVersion>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ProductVersion_k__BackingField;

/// @brief Field <Platform>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Platform_k__BackingField;

/// @brief Field <RichText>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _RichText_k__BackingField;

/// @brief Field <Records>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::Presence::DataRecord>  _Records_k__BackingField;

/// @brief Field <ProductName>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ProductName_k__BackingField;

/// @brief Field <IntegratedPlatform>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _IntegratedPlatform_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::Info, _Status_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::Info, _UserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::Info, _ProductId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::Info, _ProductVersion_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::Info, _Platform_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::Info, _RichText_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::Info, _Records_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::Info, _ProductName_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::Info, _IntegratedPlatform_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::Info) == 0x48, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
