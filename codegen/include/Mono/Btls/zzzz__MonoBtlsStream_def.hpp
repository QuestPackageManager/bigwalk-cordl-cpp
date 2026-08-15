#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
CORDL_MODULE_EXPORT(MonoBtlsStream)
namespace Mono::Net::Security {
class MobileTlsContext;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace Mono::Net::Security {
class MonoSslAuthenticationOptions;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
class SslStream;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsStream;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsStream*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsStream*, "Mono.Btls", "MonoBtlsStream");
// Dependencies Mono.Net.Security.MobileAuthenticatedStream
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsStream
class CORDL_TYPE MonoBtlsStream : public ::Mono::Net::Security::MobileAuthenticatedStream {
public:
// Declarations
/// @brief Method CreateContext, addr 0x181db6d90, size 0x50, virtual true, abstract: false, final false
inline ::Mono::Net::Security::MobileTlsContext* CreateContext(::Mono::Net::Security::MonoSslAuthenticationOptions*  options) ;

static inline ::Mono::Btls::MonoBtlsStream* New_ctor(::System::IO::Stream*  innerStream, bool  leaveInnerStreamOpen, ::System::Net::Security::SslStream*  owner, ::Mono::Security::Interface::MonoTlsSettings*  settings, ::Mono::Net::Security::MobileTlsProvider*  provider) ;

/// @brief Method .ctor, addr 0x181db6de0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  innerStream, bool  leaveInnerStreamOpen, ::System::Net::Security::SslStream*  owner, ::Mono::Security::Interface::MonoTlsSettings*  settings, ::Mono::Net::Security::MobileTlsProvider*  provider) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsStream(MonoBtlsStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsStream(MonoBtlsStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11478};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsStream) == 0xb0, "Size mismatch!");

} // namespace end def Mono::Btls
