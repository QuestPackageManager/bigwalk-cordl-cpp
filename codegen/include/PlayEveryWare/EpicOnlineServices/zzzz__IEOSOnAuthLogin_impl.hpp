#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/IEOSOnAuthLogin.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IEOSOnAuthLogin_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginCallbackInfo_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin.OnAuthLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin::*)(::Epic::OnlineServices::Auth::LoginCallbackInfo)>(&::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin::OnAuthLogin)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin::OnAuthLogin(::Epic::OnlineServices::Auth::LoginCallbackInfo  loginCallbackInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loginCallbackInfo);
}
