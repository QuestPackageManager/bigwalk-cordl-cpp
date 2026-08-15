#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/ServerHandshake.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServerHandshake)
namespace Mirror::SimpleWeb {
class BufferPool;
}
namespace Mirror::SimpleWeb {
class Connection;
}
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
class SHA1;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class ServerHandshake;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::ServerHandshake*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::ServerHandshake*, "Mirror.SimpleWeb", "ServerHandshake");
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.ServerHandshake
class CORDL_TYPE ServerHandshake : public ::System::Object {
public:
// Declarations
/// @brief Field bufferPool, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_bufferPool, put=__cordl_internal_set_bufferPool)) ::Mirror::SimpleWeb::BufferPool*  bufferPool;

/// @brief Field maxHttpHeaderSize, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHttpHeaderSize, put=__cordl_internal_set_maxHttpHeaderSize)) int32_t  maxHttpHeaderSize;

/// @brief Field sha1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sha1, put=__cordl_internal_set_sha1)) ::System::Security::Cryptography::SHA1*  sha1;

/// @brief Method AcceptHandshake, addr 0x181ad3e10, size 0x380, virtual false, abstract: false, final false
inline void AcceptHandshake(::System::IO::Stream*  stream, ::StringW  msg) ;

/// @brief Method AppendGuid, addr 0x181ad4190, size 0x60, virtual false, abstract: false, final false
static inline void AppendGuid(::ArrayW<uint8_t>  keyBuffer) ;

/// @brief Method CreateHash, addr 0x181ad41f0, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> CreateHash(::ArrayW<uint8_t>  keyBuffer) ;

/// @brief Method CreateResponse, addr 0x181ad4220, size 0x80, virtual false, abstract: false, final false
static inline void CreateResponse(::ArrayW<uint8_t>  keyHash, ::ArrayW<uint8_t>  responseBuffer) ;

/// @brief Method Finalize, addr 0x181ad42a0, size 0x20, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetKey, addr 0x181ad42c0, size 0xa0, virtual false, abstract: false, final false
static inline void GetKey(::StringW  msg, ::ArrayW<uint8_t>  keyBuffer) ;

/// @brief Method IsGet, addr 0x181ad4360, size 0x30, virtual false, abstract: false, final false
static inline bool IsGet(::ArrayW<uint8_t>  getHeader) ;

static inline ::Mirror::SimpleWeb::ServerHandshake* New_ctor(::Mirror::SimpleWeb::BufferPool*  bufferPool, int32_t  handshakeMaxSize) ;

/// @brief Method ReadToEndForHandshake, addr 0x181ad4390, size 0x1b0, virtual false, abstract: false, final false
inline ::StringW ReadToEndForHandshake(::System::IO::Stream*  stream) ;

/// @brief Method TryHandshake, addr 0x181ad4540, size 0x1c0, virtual false, abstract: false, final false
inline bool TryHandshake(::Mirror::SimpleWeb::Connection*  conn) ;

constexpr ::Mirror::SimpleWeb::BufferPool* const& __cordl_internal_get_bufferPool() const;

constexpr ::Mirror::SimpleWeb::BufferPool*& __cordl_internal_get_bufferPool() ;

constexpr int32_t const& __cordl_internal_get_maxHttpHeaderSize() const;

constexpr int32_t& __cordl_internal_get_maxHttpHeaderSize() ;

constexpr ::System::Security::Cryptography::SHA1* const& __cordl_internal_get_sha1() const;

constexpr ::System::Security::Cryptography::SHA1*& __cordl_internal_get_sha1() ;

constexpr void __cordl_internal_set_bufferPool(::Mirror::SimpleWeb::BufferPool*  value) ;

constexpr void __cordl_internal_set_maxHttpHeaderSize(int32_t  value) ;

constexpr void __cordl_internal_set_sha1(::System::Security::Cryptography::SHA1*  value) ;

/// @brief Method .ctor, addr 0x181ad4700, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Mirror::SimpleWeb::BufferPool*  bufferPool, int32_t  handshakeMaxSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerHandshake() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerHandshake", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerHandshake(ServerHandshake && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerHandshake", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerHandshake(ServerHandshake const& ) = delete;

/// @brief Field GetSize offset 0xffffffff size 0x4
static constexpr int32_t  GetSize{static_cast<int32_t>(0x3)};

/// @brief Field KeyHeaderString offset 0xffffffff size 0x8
static constexpr ::ConstString  KeyHeaderString{u"\r\nSec-WebSocket-Key: "};

/// @brief Field KeyLength offset 0xffffffff size 0x4
static constexpr int32_t  KeyLength{static_cast<int32_t>(0x18)};

/// @brief Field MergedKeyLength offset 0xffffffff size 0x4
static constexpr int32_t  MergedKeyLength{static_cast<int32_t>(0x3c)};

/// @brief Field ResponseLength offset 0xffffffff size 0x4
static constexpr int32_t  ResponseLength{static_cast<int32_t>(0x81)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20541};

/// @brief Field maxHttpHeaderSize, offset: 0x10, size: 0x4, def value: None
 int32_t  ___maxHttpHeaderSize;

/// @brief Field sha1, offset: 0x18, size: 0x8, def value: None
 ::System::Security::Cryptography::SHA1*  ___sha1;

/// @brief Field bufferPool, offset: 0x20, size: 0x8, def value: None
 ::Mirror::SimpleWeb::BufferPool*  ___bufferPool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::ServerHandshake, ___maxHttpHeaderSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::ServerHandshake, ___sha1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::ServerHandshake, ___bufferPool) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::ServerHandshake) == 0x28, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
