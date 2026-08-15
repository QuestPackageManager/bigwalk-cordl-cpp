#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Reports/ReportsInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReportsInterface)
namespace Epic::OnlineServices::Reports {
class OnSendPlayerBehaviorReportCompleteCallback;
}
namespace Epic::OnlineServices::Reports {
struct SendPlayerBehaviorReportOptions;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::Reports {
class ReportsInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Reports::ReportsInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Reports::ReportsInterface*, "Epic.OnlineServices.Reports", "ReportsInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Reports {
// Is value type: false
// CS Name: Epic.OnlineServices.Reports.ReportsInterface
class CORDL_TYPE ReportsInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
static inline ::Epic::OnlineServices::Reports::ReportsInterface* New_ctor() ;

static inline ::Epic::OnlineServices::Reports::ReportsInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method SendPlayerBehaviorReport, addr 0x1804f1210, size 0x280, virtual false, abstract: false, final false
inline void SendPlayerBehaviorReport(::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallback*  completionDelegate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReportsInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReportsInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReportsInterface(ReportsInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReportsInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReportsInterface(ReportsInterface const& ) = delete;

/// @brief Field REPORTCONTEXT_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  REPORTCONTEXT_MAX_LENGTH{static_cast<int32_t>(0x1000)};

/// @brief Field REPORTMESSAGE_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  REPORTMESSAGE_MAX_LENGTH{static_cast<int32_t>(0x200)};

/// @brief Field SENDPLAYERBEHAVIORREPORT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SENDPLAYERBEHAVIORREPORT_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7898};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Reports::ReportsInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Reports
