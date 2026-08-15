#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/DesktopCrossplayStatusInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Platform/zzzz__DesktopCrossplayStatus_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DesktopCrossplayStatusInfoInternal)
namespace Epic::OnlineServices::Platform {
struct DesktopCrossplayStatusInfo;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Platform {
struct DesktopCrossplayStatusInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfoInternal, "Epic.OnlineServices.Platform", "DesktopCrossplayStatusInfoInternal");
// Dependencies Epic.OnlineServices.Platform.DesktopCrossplayStatus
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.DesktopCrossplayStatusInfoInternal
struct CORDL_TYPE DesktopCrossplayStatusInfoInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>*() ;

/// @brief Method Get, addr 0x1804f73d0, size 0x20, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Platform__DesktopCrossplayStatusInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr DesktopCrossplayStatusInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_Status", ty: "::Epic::OnlineServices::Platform::DesktopCrossplayStatus", modifiers: "", def_value: None }, CppParam { name: "m_ServiceInitResult", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DesktopCrossplayStatusInfoInternal(::Epic::OnlineServices::Platform::DesktopCrossplayStatus  m_Status, int32_t  m_ServiceInitResult) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8347};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Status, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Platform::DesktopCrossplayStatus  m_Status;

/// @brief Field m_ServiceInitResult, offset: 0x4, size: 0x4, def value: None
 int32_t  m_ServiceInitResult;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfoInternal, m_Status) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfoInternal, m_ServiceInitResult) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfoInternal) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
