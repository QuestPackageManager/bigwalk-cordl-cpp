#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsStream.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsStream_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsContext_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsStream::*)(::System::IO::Stream*, bool, ::System::Net::Security::SslStream*, ::Mono::Security::Interface::MonoTlsSettings*, ::Mono::Net::Security::MobileTlsProvider*)>(&::Mono::Btls::MonoBtlsStream::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181db6de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Net::Security::SslStream*>(), ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>(), ::i2c::type_of<::Mono::Net::Security::MobileTlsProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsStream.CreateContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Net::Security::MobileTlsContext* (::Mono::Btls::MonoBtlsStream::*)(::Mono::Net::Security::MonoSslAuthenticationOptions*)>(&::Mono::Btls::MonoBtlsStream::CreateContext)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181db6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsStream*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsStream*>(), 43}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsStream::_ctor(::System::IO::Stream*  innerStream, bool  leaveInnerStreamOpen, ::System::Net::Security::SslStream*  owner, ::Mono::Security::Interface::MonoTlsSettings*  settings, ::Mono::Net::Security::MobileTlsProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Net::Security::SslStream*>(), ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>(), ::i2c::type_of<::Mono::Net::Security::MobileTlsProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerStream, leaveInnerStreamOpen, owner, settings, provider);
}
inline ::Mono::Net::Security::MobileTlsContext* Mono::Btls::MonoBtlsStream::CreateContext(::Mono::Net::Security::MonoSslAuthenticationOptions*  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsStream*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileTlsContext*>(this, ___internal_method, options);
}
inline ::Mono::Btls::MonoBtlsStream* Mono::Btls::MonoBtlsStream::New_ctor(::System::IO::Stream*  innerStream, bool  leaveInnerStreamOpen, ::System::Net::Security::SslStream*  owner, ::Mono::Security::Interface::MonoTlsSettings*  settings, ::Mono::Net::Security::MobileTlsProvider*  provider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsStream*>(innerStream, leaveInnerStreamOpen, owner, settings, provider));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsStream::MonoBtlsStream()   {
}
