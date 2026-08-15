#pragma once
// IWYU pragma private; include "Steamworks/DurationControl_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__EDurationControlNotification_def.hpp"
#include "Steamworks/zzzz__EDurationControlProgress_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DurationControl_t)
// Forward declare root types
namespace Steamworks {
struct DurationControl_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::DurationControl_t);
DEFINE_IL2CPP_CLASS(::Steamworks::DurationControl_t, "Steamworks", "DurationControl_t");
// Dependencies Steamworks.AppId_t, Steamworks.EDurationControlNotification, Steamworks.EDurationControlProgress, Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.DurationControl_t
#pragma pack(push, 8)
struct CORDL_TYPE DurationControl_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DurationControl_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_appid", ty: "::Steamworks::AppId_t", modifiers: "", def_value: None }, CppParam { name: "m_bApplicable", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_csecsLast5h", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_progress", ty: "::Steamworks::EDurationControlProgress", modifiers: "", def_value: None }, CppParam { name: "m_notification", ty: "::Steamworks::EDurationControlNotification", modifiers: "", def_value: None }, CppParam { name: "m_csecsToday", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_csecsRemaining", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DurationControl_t(::Steamworks::EResult  m_eResult, ::Steamworks::AppId_t  m_appid, bool  m_bApplicable, int32_t  m_csecsLast5h, ::Steamworks::EDurationControlProgress  m_progress, ::Steamworks::EDurationControlNotification  m_notification, int32_t  m_csecsToday, int32_t  m_csecsRemaining) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16214};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xa7)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_appid, offset: 0x4, size: 0x4, def value: None
 ::Steamworks::AppId_t  m_appid;

/// @brief Field m_bApplicable, offset: 0x8, size: 0x1, def value: None
 bool  m_bApplicable;

/// @brief Field m_csecsLast5h, offset: 0xc, size: 0x4, def value: None
 int32_t  m_csecsLast5h;

/// @brief Field m_progress, offset: 0x10, size: 0x4, def value: None
 ::Steamworks::EDurationControlProgress  m_progress;

/// @brief Field m_notification, offset: 0x14, size: 0x4, def value: None
 ::Steamworks::EDurationControlNotification  m_notification;

/// @brief Field m_csecsToday, offset: 0x18, size: 0x4, def value: None
 int32_t  m_csecsToday;

/// @brief Field m_csecsRemaining, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_csecsRemaining;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::DurationControl_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::DurationControl_t, m_appid) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::DurationControl_t, m_bApplicable) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::DurationControl_t, m_csecsLast5h) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::DurationControl_t, m_progress) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::DurationControl_t, m_notification) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Steamworks::DurationControl_t, m_csecsToday) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::DurationControl_t, m_csecsRemaining) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Steamworks::DurationControl_t) == 0x20, "Size mismatch!");

} // namespace end def Steamworks
