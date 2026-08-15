#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/ClientSslHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ClientSslHelper)
namespace Mirror::SimpleWeb {
class Connection;
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
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class ClientSslHelper;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::ClientSslHelper*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::ClientSslHelper*, "Mirror.SimpleWeb", "ClientSslHelper");
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.ClientSslHelper
class CORDL_TYPE ClientSslHelper : public ::System::Object {
public:
// Declarations
/// @brief Method CreateStream, addr 0x181ad00b0, size 0xb0, virtual false, abstract: false, final false
inline ::System::IO::Stream* CreateStream(::System::Net::Sockets::NetworkStream*  stream, ::System::Uri*  uri) ;

static inline ::Mirror::SimpleWeb::ClientSslHelper* New_ctor() ;

/// @brief Method TryCreateStream, addr 0x181ad0160, size 0x130, virtual false, abstract: false, final false
inline bool TryCreateStream(::Mirror::SimpleWeb::Connection*  conn, ::System::Uri*  uri) ;

/// @brief Method ValidateServerCertificate, addr 0x181ad0290, size 0x10, virtual false, abstract: false, final false
static inline bool ValidateServerCertificate(::System::Object*  sender, ::System::Security::Cryptography::X509Certificates::X509Certificate*  certificate, ::System::Security::Cryptography::X509Certificates::X509Chain*  chain, ::System::Net::Security::SslPolicyErrors  sslPolicyErrors) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientSslHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientSslHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientSslHelper(ClientSslHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientSslHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientSslHelper(ClientSslHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20513};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SimpleWeb::ClientSslHelper) == 0x10, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
