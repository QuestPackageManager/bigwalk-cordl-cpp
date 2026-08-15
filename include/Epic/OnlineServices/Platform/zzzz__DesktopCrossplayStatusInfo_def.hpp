#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/DesktopCrossplayStatusInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Platform/zzzz__DesktopCrossplayStatus_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DesktopCrossplayStatusInfo)
namespace Epic::OnlineServices::Platform {
struct DesktopCrossplayStatus;
}
// Forward declare root types
namespace Epic::OnlineServices::Platform {
struct DesktopCrossplayStatusInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo, "Epic.OnlineServices.Platform", "DesktopCrossplayStatusInfo");
// Dependencies Epic.OnlineServices.Platform.DesktopCrossplayStatus
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.DesktopCrossplayStatusInfo
struct CORDL_TYPE DesktopCrossplayStatusInfo {
public:
// Declarations
 __declspec(property(get=get_ServiceInitResult, put=set_ServiceInitResult)) int32_t  ServiceInitResult;

 __declspec(property(get=get_Status, put=set_Status)) ::Epic::OnlineServices::Platform::DesktopCrossplayStatus  Status;

/// @brief Method get_ServiceInitResult, addr 0x18038fe90, size 0x10, virtual false, abstract: false, final false
inline int32_t get_ServiceInitResult() ;

/// @brief Method get_Status, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Platform::DesktopCrossplayStatus get_Status() ;

/// @brief Method set_ServiceInitResult, addr 0x1803bda60, size 0x10, virtual false, abstract: false, final false
inline void set_ServiceInitResult(int32_t  value) ;

/// @brief Method set_Status, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_Status(::Epic::OnlineServices::Platform::DesktopCrossplayStatus  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DesktopCrossplayStatusInfo() ;

// Ctor Parameters [CppParam { name: "_Status_k__BackingField", ty: "::Epic::OnlineServices::Platform::DesktopCrossplayStatus", modifiers: "", def_value: None }, CppParam { name: "_ServiceInitResult_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DesktopCrossplayStatusInfo(::Epic::OnlineServices::Platform::DesktopCrossplayStatus  _Status_k__BackingField, int32_t  _ServiceInitResult_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8346};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <Status>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Platform::DesktopCrossplayStatus  _Status_k__BackingField;

/// @brief Field <ServiceInitResult>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _ServiceInitResult_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo, _Status_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo, _ServiceInitResult_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
