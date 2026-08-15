#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/SslConfigLoader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__SslConfigLoader_def.hpp"
#include "Mirror/SimpleWeb/zzzz__SslConfigLoader_def.hpp"
#include "Mirror/SimpleWeb/zzzz__SslConfig_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::SimpleWeb::SslConfigLoader_Cert::SslConfigLoader_Cert(::StringW  path, ::StringW  password) noexcept  {
this->path = path;
this->password = password;
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::SslConfigLoader_Cert::SslConfigLoader_Cert()   {
}
//  Writing Method size for method: ::Mirror::SimpleWeb::SslConfigLoader.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::SimpleWeb::SslConfig (*)(bool, ::StringW, ::System::Security::Authentication::SslProtocols)>(&::Mirror::SimpleWeb::SslConfigLoader::Load)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181ad5e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SslConfigLoader*>(),
                        {"Load", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Authentication::SslProtocols>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SslConfigLoader.LoadCertJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::SimpleWeb::SslConfigLoader_Cert (*)(::StringW)>(&::Mirror::SimpleWeb::SslConfigLoader::LoadCertJson)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181ad5dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SslConfigLoader*>(),
                        {"LoadCertJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SslConfigLoader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SslConfigLoader::*)()>(&::Mirror::SimpleWeb::SslConfigLoader::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SslConfigLoader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Mirror::SimpleWeb::SslConfig Mirror::SimpleWeb::SslConfigLoader::Load(bool  sslEnabled, ::StringW  sslCertJson, ::System::Security::Authentication::SslProtocols  sslProtocols)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SslConfigLoader*>(),
                        {"Load", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Authentication::SslProtocols>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::SimpleWeb::SslConfig>(nullptr, ___internal_method, sslEnabled, sslCertJson, sslProtocols);
}
inline ::Mirror::SimpleWeb::SslConfigLoader_Cert Mirror::SimpleWeb::SslConfigLoader::LoadCertJson(::StringW  certJsonPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SslConfigLoader*>(),
                        {"LoadCertJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::SimpleWeb::SslConfigLoader_Cert>(nullptr, ___internal_method, certJsonPath);
}
inline void Mirror::SimpleWeb::SslConfigLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SslConfigLoader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::SimpleWeb::SslConfigLoader* Mirror::SimpleWeb::SslConfigLoader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::SslConfigLoader*>());
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::SslConfigLoader::SslConfigLoader()   {
}
