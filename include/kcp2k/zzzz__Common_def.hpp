#pragma once
// IWYU pragma private; include "kcp2k/Common.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Common)
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class EndPoint;
}
namespace System::Net {
class IPAddress;
}
namespace System::Security::Cryptography {
class RNGCryptoServiceProvider;
}
// Forward declare root types
namespace kcp2k {
class Common;
}
// Write type traits
MARK_REF_T(::kcp2k::Common*);
DEFINE_IL2CPP_CLASS(::kcp2k::Common*, "kcp2k", "Common");
// Dependencies System.Object
namespace kcp2k {
// Is value type: false
// CS Name: kcp2k.Common
class CORDL_TYPE Common : public ::System::Object {
public:
// Declarations
/// @brief Field cryptoRandom, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cryptoRandom, put=setStaticF_cryptoRandom)) ::System::Security::Cryptography::RNGCryptoServiceProvider*  cryptoRandom;

/// @brief Field cryptoRandomBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cryptoRandomBuffer, put=setStaticF_cryptoRandomBuffer)) ::ArrayW<uint8_t>  cryptoRandomBuffer;

/// @brief Method ConfigureSocketBuffers, addr 0x18144cdf0, size 0x2d0, virtual false, abstract: false, final false
static inline void ConfigureSocketBuffers(::System::Net::Sockets::Socket*  socket, int32_t  recvBufferSize, int32_t  sendBufferSize) ;

/// @brief Method ConnectionHash, addr 0x18144d0c0, size 0x30, virtual false, abstract: false, final false
static inline int32_t ConnectionHash(::System::Net::EndPoint*  endPoint) ;

/// @brief Method GenerateCookie, addr 0x18144d0f0, size 0x70, virtual false, abstract: false, final false
static inline uint32_t GenerateCookie() ;

/// @brief Method ResolveHostname, addr 0x18144d160, size 0xb0, virtual false, abstract: false, final false
static inline bool ResolveHostname(::StringW  hostname, ::by_ref<::ArrayW<::System::Net::IPAddress*>>  addresses) ;

static inline ::System::Security::Cryptography::RNGCryptoServiceProvider* getStaticF_cryptoRandom() ;

static inline ::ArrayW<uint8_t> getStaticF_cryptoRandomBuffer() ;

static inline void setStaticF_cryptoRandom(::System::Security::Cryptography::RNGCryptoServiceProvider*  value) ;

static inline void setStaticF_cryptoRandomBuffer(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Common() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Common", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Common(Common && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Common", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Common(Common const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20865};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::kcp2k::Common) == 0x10, "Size mismatch!");

} // namespace end def kcp2k
