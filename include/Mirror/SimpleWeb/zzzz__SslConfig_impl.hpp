#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/SslConfig.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__SslConfig_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::SslConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SslConfig::*)(bool, ::StringW, ::StringW, ::System::Security::Authentication::SslProtocols)>(&::Mirror::SimpleWeb::SslConfig::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181ad5fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SslConfig>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Authentication::SslProtocols>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::SimpleWeb::SslConfig::_ctor(bool  enabled, ::StringW  certPath, ::StringW  certPassword, ::System::Security::Authentication::SslProtocols  sslProtocols)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SslConfig>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Authentication::SslProtocols>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enabled, certPath, certPassword, sslProtocols);
}
// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "certPath", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "certPassword", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "sslProtocols", ty: "::System::Security::Authentication::SslProtocols", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::SimpleWeb::SslConfig::SslConfig(bool  enabled, ::StringW  certPath, ::StringW  certPassword, ::System::Security::Authentication::SslProtocols  sslProtocols) noexcept  {
this->enabled = enabled;
this->certPath = certPath;
this->certPassword = certPassword;
this->sslProtocols = sslProtocols;
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::SslConfig::SslConfig()   {
}
