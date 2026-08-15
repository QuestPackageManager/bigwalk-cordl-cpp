#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/IEOSOnAuthLogout.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IEOSOnAuthLogout_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LogoutCallbackInfo_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout.OnAuthLogout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout::*)(::Epic::OnlineServices::Auth::LogoutCallbackInfo)>(&::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout::OnAuthLogout)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout::OnAuthLogout(::Epic::OnlineServices::Auth::LogoutCallbackInfo  logoutCallbackInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logoutCallbackInfo);
}
