#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/IAuthInterfaceEventListener.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IAuthInterfaceEventListener_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IEOSOnAuthLogin_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IEOSOnAuthLogout_def.hpp"
/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin"
constexpr  PlayEveryWare::EpicOnlineServices::IAuthInterfaceEventListener::operator ::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin"
constexpr ::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin* PlayEveryWare::EpicOnlineServices::IAuthInterfaceEventListener::i___PlayEveryWare__EpicOnlineServices__IEOSOnAuthLogin() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout"
constexpr  PlayEveryWare::EpicOnlineServices::IAuthInterfaceEventListener::operator ::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout"
constexpr ::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout* PlayEveryWare::EpicOnlineServices::IAuthInterfaceEventListener::i___PlayEveryWare__EpicOnlineServices__IEOSOnAuthLogout() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*>(static_cast<void*>(this));
}
