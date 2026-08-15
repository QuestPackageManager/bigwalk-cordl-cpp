#pragma once
// IWYU pragma private; include "Steamworks/DurationControl_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__EDurationControlNotification_impl.hpp"
#include "Steamworks/zzzz__EDurationControlProgress_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__DurationControl_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_appid", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bApplicable", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_csecsLast5h", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_progress", ty: "::Steamworks::EDurationControlProgress", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_notification", ty: "::Steamworks::EDurationControlNotification", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_csecsToday", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_csecsRemaining", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::DurationControl_t::DurationControl_t(::Steamworks::EResult  m_eResult, ::Steamworks::AppId_t  m_appid, bool  m_bApplicable, int32_t  m_csecsLast5h, ::Steamworks::EDurationControlProgress  m_progress, ::Steamworks::EDurationControlNotification  m_notification, int32_t  m_csecsToday, int32_t  m_csecsRemaining) noexcept  {
this->m_eResult = m_eResult;
this->m_appid = m_appid;
this->m_bApplicable = m_bApplicable;
this->m_csecsLast5h = m_csecsLast5h;
this->m_progress = m_progress;
this->m_notification = m_notification;
this->m_csecsToday = m_csecsToday;
this->m_csecsRemaining = m_csecsRemaining;
}
// Ctor Parameters []
constexpr ::Steamworks::DurationControl_t::DurationControl_t()   {
}
