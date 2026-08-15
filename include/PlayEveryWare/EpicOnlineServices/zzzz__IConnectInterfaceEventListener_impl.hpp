#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/IConnectInterfaceEventListener.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IConnectInterfaceEventListener_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IEOSOnConnectLogin_def.hpp"
/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin"
constexpr  PlayEveryWare::EpicOnlineServices::IConnectInterfaceEventListener::operator ::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin"
constexpr ::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin* PlayEveryWare::EpicOnlineServices::IConnectInterfaceEventListener::i___PlayEveryWare__EpicOnlineServices__IEOSOnConnectLogin() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*>(static_cast<void*>(this));
}
