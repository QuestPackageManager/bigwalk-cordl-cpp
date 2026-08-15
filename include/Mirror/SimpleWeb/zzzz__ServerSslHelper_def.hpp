#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/ServerSslHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/SimpleWeb/zzzz__SslConfig_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ServerSslHelper)
namespace Mirror::SimpleWeb {
class Connection;
}
namespace Mirror::SimpleWeb {
struct SslConfig;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System::Net::Sockets {
class NetworkStream;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class ServerSslHelper;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::ServerSslHelper*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::ServerSslHelper*, "Mirror.SimpleWeb", "ServerSslHelper");
// Dependencies Mirror.SimpleWeb.SslConfig, System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.ServerSslHelper
class CORDL_TYPE ServerSslHelper : public ::System::Object {
public:
// Declarations
/// @brief Field certificate, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_certificate, put=__cordl_internal_set_certificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate2*  certificate;

/// @brief Field config, offset 0x10, size 0x20 
 __declspec(property(get=__cordl_internal_get_config, put=__cordl_internal_set_config)) ::Mirror::SimpleWeb::SslConfig  config;

/// @brief Method CreateStream, addr 0x181ad4760, size 0xb0, virtual false, abstract: false, final false
inline ::System::IO::Stream* CreateStream(::System::Net::Sockets::NetworkStream*  stream) ;

static inline ::Mirror::SimpleWeb::ServerSslHelper* New_ctor(::Mirror::SimpleWeb::SslConfig  sslConfig) ;

/// @brief Method TryCreateStream, addr 0x181ad4810, size 0x180, virtual false, abstract: false, final false
inline bool TryCreateStream(::Mirror::SimpleWeb::Connection*  conn) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2* const& __cordl_internal_get_certificate() const;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2*& __cordl_internal_get_certificate() ;

constexpr ::Mirror::SimpleWeb::SslConfig const& __cordl_internal_get_config() const;

constexpr ::Mirror::SimpleWeb::SslConfig& __cordl_internal_get_config() ;

constexpr void __cordl_internal_set_certificate(::System::Security::Cryptography::X509Certificates::X509Certificate2*  value) ;

constexpr void __cordl_internal_set_config(::Mirror::SimpleWeb::SslConfig  value) ;

/// @brief Method .ctor, addr 0x181ad4990, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::Mirror::SimpleWeb::SslConfig  sslConfig) ;

/// @brief Method acceptClient, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
inline bool acceptClient(::System::Object*  sender, ::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::System::Security::Cryptography::X509Certificates::X509Chain*  chain, ::System::Net::Security::SslPolicyErrors  sslPolicyErrors) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerSslHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerSslHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerSslHelper(ServerSslHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerSslHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerSslHelper(ServerSslHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20543};

/// @brief Field config, offset: 0x10, size: 0x20, def value: None
 ::Mirror::SimpleWeb::SslConfig  ___config;

/// @brief Field certificate, offset: 0x30, size: 0x8, def value: None
 ::System::Security::Cryptography::X509Certificates::X509Certificate2*  ___certificate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::ServerSslHelper, ___config) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::ServerSslHelper, ___certificate) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::ServerSslHelper) == 0x38, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
