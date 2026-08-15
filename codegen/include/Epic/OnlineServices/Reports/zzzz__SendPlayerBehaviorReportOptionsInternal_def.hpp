#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Reports/SendPlayerBehaviorReportOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Reports/zzzz__PlayerReportsCategory_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendPlayerBehaviorReportOptionsInternal)
namespace Epic::OnlineServices::Reports {
struct SendPlayerBehaviorReportOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Reports {
struct SendPlayerBehaviorReportOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal, "Epic.OnlineServices.Reports", "SendPlayerBehaviorReportOptionsInternal");
// Dependencies Epic.OnlineServices.Reports.PlayerReportsCategory, System.IntPtr
namespace Epic::OnlineServices::Reports {
// Is value type: true
// CS Name: Epic.OnlineServices.Reports.SendPlayerBehaviorReportOptionsInternal
struct CORDL_TYPE SendPlayerBehaviorReportOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804f1c60, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f1cb0, size 0xd0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Reports__SendPlayerBehaviorReportOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SendPlayerBehaviorReportOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ReporterUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ReportedUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Category", ty: "::Epic::OnlineServices::Reports::PlayerReportsCategory", modifiers: "", def_value: None }, CppParam { name: "m_Message", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Context", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr SendPlayerBehaviorReportOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_ReporterUserId, ::System::IntPtr  m_ReportedUserId, ::Epic::OnlineServices::Reports::PlayerReportsCategory  m_Category, ::System::IntPtr  m_Message, ::System::IntPtr  m_Context) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7902};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_ReporterUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ReporterUserId;

/// @brief Field m_ReportedUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_ReportedUserId;

/// @brief Field m_Category, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::Reports::PlayerReportsCategory  m_Category;

/// @brief Field m_Message, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_Message;

/// @brief Field m_Context, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_Context;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal, m_ReporterUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal, m_ReportedUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal, m_Category) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal, m_Message) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal, m_Context) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Reports
