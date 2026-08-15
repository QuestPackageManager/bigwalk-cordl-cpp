#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Reports/SendPlayerBehaviorReportOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Reports/zzzz__PlayerReportsCategory_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SendPlayerBehaviorReportOptions)
namespace Epic::OnlineServices::Reports {
struct PlayerReportsCategory;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Reports {
struct SendPlayerBehaviorReportOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions, "Epic.OnlineServices.Reports", "SendPlayerBehaviorReportOptions");
// Dependencies Epic.OnlineServices.Reports.PlayerReportsCategory
namespace Epic::OnlineServices::Reports {
// Is value type: true
// CS Name: Epic.OnlineServices.Reports.SendPlayerBehaviorReportOptions
struct CORDL_TYPE SendPlayerBehaviorReportOptions {
public:
// Declarations
 __declspec(property(get=get_Category, put=set_Category)) ::Epic::OnlineServices::Reports::PlayerReportsCategory  Category;

 __declspec(property(get=get_Context, put=set_Context)) ::Epic::OnlineServices::Utf8String*  Context;

 __declspec(property(get=get_Message, put=set_Message)) ::Epic::OnlineServices::Utf8String*  Message;

 __declspec(property(get=get_ReportedUserId, put=set_ReportedUserId)) ::Epic::OnlineServices::ProductUserId*  ReportedUserId;

 __declspec(property(get=get_ReporterUserId, put=set_ReporterUserId)) ::Epic::OnlineServices::ProductUserId*  ReporterUserId;

/// @brief Method get_Category, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Reports::PlayerReportsCategory get_Category() ;

/// @brief Method get_Context, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Context() ;

/// @brief Method get_Message, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Message() ;

/// @brief Method get_ReportedUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_ReportedUserId() ;

/// @brief Method get_ReporterUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_ReporterUserId() ;

/// @brief Method set_Category, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_Category(::Epic::OnlineServices::Reports::PlayerReportsCategory  value) ;

/// @brief Method set_Context, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_Context(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Message, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_Message(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ReportedUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_ReportedUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_ReporterUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ReporterUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SendPlayerBehaviorReportOptions() ;

// Ctor Parameters [CppParam { name: "_ReporterUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_ReportedUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_Category_k__BackingField", ty: "::Epic::OnlineServices::Reports::PlayerReportsCategory", modifiers: "", def_value: None }, CppParam { name: "_Message_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Context_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr SendPlayerBehaviorReportOptions(::Epic::OnlineServices::ProductUserId*  _ReporterUserId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _ReportedUserId_k__BackingField, ::Epic::OnlineServices::Reports::PlayerReportsCategory  _Category_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Message_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Context_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7901};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <ReporterUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _ReporterUserId_k__BackingField;

/// @brief Field <ReportedUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _ReportedUserId_k__BackingField;

/// @brief Field <Category>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Reports::PlayerReportsCategory  _Category_k__BackingField;

/// @brief Field <Message>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Message_k__BackingField;

/// @brief Field <Context>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Context_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions, _ReporterUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions, _ReportedUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions, _Category_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions, _Message_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions, _Context_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Reports
