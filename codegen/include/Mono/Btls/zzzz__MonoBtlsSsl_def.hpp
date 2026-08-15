#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsSsl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Btls/zzzz__MonoBtlsObject_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsSsl)
namespace Mono::Btls {
class MonoBtlsBio;
}
namespace Mono::Btls {
class MonoBtlsKey;
}
namespace Mono::Btls {
class MonoBtlsSslCtx;
}
namespace Mono::Btls {
struct MonoBtlsSslError;
}
namespace Mono::Btls {
struct MonoBtlsSslRenegotiateMode;
}
namespace Mono::Btls {
class MonoBtlsSsl_BoringSslHandle;
}
namespace Mono::Btls {
class MonoBtlsSsl_PrintErrorsCallbackFunc;
}
namespace Mono::Btls {
class MonoBtlsX509;
}
namespace System {
class Exception;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsSsl;
}
namespace Mono::Btls {
class MonoBtlsSsl_BoringSslHandle;
}
namespace Mono::Btls {
class MonoBtlsSsl_PrintErrorsCallbackFunc;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsSsl*);
MARK_REF_T(::Mono::Btls::MonoBtlsSsl_BoringSslHandle*);
MARK_REF_T(::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsSsl*, "Mono.Btls", "MonoBtlsSsl");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsSsl_BoringSslHandle*, "Mono.Btls", "MonoBtlsSsl/BoringSslHandle");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc*, "Mono.Btls", "MonoBtlsSsl/PrintErrorsCallbackFunc");
// Dependencies Mono.Btls.MonoBtlsObject::MonoBtlsHandle
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsSsl/BoringSslHandle
class CORDL_TYPE MonoBtlsSsl_BoringSslHandle : public ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle {
public:
// Declarations
static inline ::Mono::Btls::MonoBtlsSsl_BoringSslHandle* New_ctor(::System::IntPtr  handle) ;

/// @brief Method ReleaseHandle, addr 0x181dae520, size 0x90, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method .ctor, addr 0x181dae510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  handle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsSsl_BoringSslHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsSsl_BoringSslHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsSsl_BoringSslHandle(MonoBtlsSsl_BoringSslHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsSsl_BoringSslHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsSsl_BoringSslHandle(MonoBtlsSsl_BoringSslHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11468};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsSsl_BoringSslHandle) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies System.MulticastDelegate
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsSsl/PrintErrorsCallbackFunc
class CORDL_TYPE MonoBtlsSsl_PrintErrorsCallbackFunc : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline int32_t Invoke(::System::IntPtr  str, ::System::IntPtr  len, ::System::IntPtr  ctx) ;

static inline ::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181a47440, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsSsl_PrintErrorsCallbackFunc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsSsl_PrintErrorsCallbackFunc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsSsl_PrintErrorsCallbackFunc(MonoBtlsSsl_PrintErrorsCallbackFunc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsSsl_PrintErrorsCallbackFunc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsSsl_PrintErrorsCallbackFunc(MonoBtlsSsl_PrintErrorsCallbackFunc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11469};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc) == 0x80, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies Mono.Btls.MonoBtlsObject, System.IntPtr
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsSsl
class CORDL_TYPE MonoBtlsSsl : public ::Mono::Btls::MonoBtlsObject {
public:
// Declarations
using BoringSslHandle = ::Mono::Btls::MonoBtlsSsl_BoringSslHandle;

using PrintErrorsCallbackFunc = ::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc;

 __declspec(property(get=get_Handle)) ::Mono::Btls::MonoBtlsSsl_BoringSslHandle*  Handle;

/// @brief Field bio, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_bio, put=__cordl_internal_set_bio)) ::Mono::Btls::MonoBtlsBio*  bio;

/// @brief Field printErrorsFunc, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_printErrorsFunc, put=__cordl_internal_set_printErrorsFunc)) ::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc*  printErrorsFunc;

/// @brief Field printErrorsFuncPtr, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_printErrorsFuncPtr, put=__cordl_internal_set_printErrorsFuncPtr)) ::System::IntPtr  printErrorsFuncPtr;

/// @brief Method Accept, addr 0x181db4300, size 0x100, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsSslError Accept() ;

/// @brief Method AddIntermediateCertificate, addr 0x181db4400, size 0x180, virtual false, abstract: false, final false
inline void AddIntermediateCertificate(::Mono::Btls::MonoBtlsX509*  x509) ;

/// @brief Method Close, addr 0x181db4580, size 0x140, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Connect, addr 0x181db46c0, size 0x100, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsSslError Connect() ;

/// @brief Method Create_internal, addr 0x181db47c0, size 0x140, virtual false, abstract: false, final false
static inline ::Mono::Btls::MonoBtlsSsl_BoringSslHandle* Create_internal(::Mono::Btls::MonoBtlsSslCtx*  ctx) ;

/// @brief Method GetCipher, addr 0x181db4900, size 0x110, virtual false, abstract: false, final false
inline int32_t GetCipher() ;

/// @brief Method GetError, addr 0x181db4a10, size 0xa0, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsSslError GetError(int32_t  ret_code) ;

/// @brief Method GetErrors, addr 0x181db4ab0, size 0x170, virtual false, abstract: false, final false
inline ::StringW GetErrors() ;

/// @brief Method GetPeerCertificate, addr 0x181db4c20, size 0x140, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509* GetPeerCertificate() ;

/// @brief Method GetServerName, addr 0x181db4d60, size 0xf0, virtual false, abstract: false, final false
inline ::StringW GetServerName() ;

/// @brief Method GetVersion, addr 0x181db4e50, size 0xe0, virtual false, abstract: false, final false
inline int32_t GetVersion() ;

/// @brief Method Handshake, addr 0x181db4f30, size 0x100, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsSslError Handshake() ;

static inline ::Mono::Btls::MonoBtlsSsl* New_ctor(::Mono::Btls::MonoBtlsSslCtx*  ctx) ;

/// @brief Method PrintErrors, addr 0x181db50e0, size 0x90, virtual false, abstract: false, final false
inline void PrintErrors() ;

/// @brief Method PrintErrorsCallback, addr 0x181db5030, size 0xb0, virtual false, abstract: false, final false
static inline int32_t PrintErrorsCallback(::System::IntPtr  str, ::System::IntPtr  len, ::System::IntPtr  ctx) ;

/// @brief Method Read, addr 0x181db5170, size 0x140, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsSslError Read(::System::IntPtr  data, ::by_ref<int32_t>  dataSize) ;

/// @brief Method RenegotiatePending, addr 0x181db52b0, size 0xe0, virtual false, abstract: false, final false
inline bool RenegotiatePending() ;

/// @brief Method SetBio, addr 0x181db5390, size 0x130, virtual false, abstract: false, final false
inline void SetBio(::Mono::Btls::MonoBtlsBio*  bio) ;

/// @brief Method SetCertificate, addr 0x181db54c0, size 0x180, virtual false, abstract: false, final false
inline void SetCertificate(::Mono::Btls::MonoBtlsX509*  x509) ;

/// @brief Method SetPrivateKey, addr 0x181db5640, size 0x140, virtual false, abstract: false, final false
inline void SetPrivateKey(::Mono::Btls::MonoBtlsKey*  key) ;

/// @brief Method SetQuietShutdown, addr 0x181db5780, size 0xe0, virtual false, abstract: false, final false
inline void SetQuietShutdown() ;

/// @brief Method SetRenegotiateMode, addr 0x181db5860, size 0xf0, virtual false, abstract: false, final false
inline void SetRenegotiateMode(::Mono::Btls::MonoBtlsSslRenegotiateMode  mode) ;

/// @brief Method SetServerName, addr 0x181db5950, size 0x190, virtual false, abstract: false, final false
inline void SetServerName(::StringW  name) ;

/// @brief Method Shutdown, addr 0x181db5ae0, size 0x110, virtual false, abstract: false, final false
inline void Shutdown() ;

/// @brief Method ThrowError, addr 0x181db5bf0, size 0x160, virtual false, abstract: false, final false
inline ::System::Exception* ThrowError(::StringW  callerName) ;

/// @brief Method Write, addr 0x181db5d50, size 0x180, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsSslError Write(::System::IntPtr  data, ::by_ref<int32_t>  dataSize) ;

constexpr ::Mono::Btls::MonoBtlsBio* const& __cordl_internal_get_bio() const;

constexpr ::Mono::Btls::MonoBtlsBio*& __cordl_internal_get_bio() ;

constexpr ::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc* const& __cordl_internal_get_printErrorsFunc() const;

constexpr ::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc*& __cordl_internal_get_printErrorsFunc() ;

constexpr ::System::IntPtr const& __cordl_internal_get_printErrorsFuncPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_printErrorsFuncPtr() ;

constexpr void __cordl_internal_set_bio(::Mono::Btls::MonoBtlsBio*  value) ;

constexpr void __cordl_internal_set_printErrorsFunc(::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc*  value) ;

constexpr void __cordl_internal_set_printErrorsFuncPtr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x181db5ed0, size 0x220, virtual false, abstract: false, final false
inline void _ctor(::Mono::Btls::MonoBtlsSslCtx*  ctx) ;

/// @brief Method get_Handle, addr 0x181db60f0, size 0x50, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsSsl_BoringSslHandle* get_Handle() ;

/// @brief Method mono_btls_ssl_accept, addr 0x181db6140, size 0x80, virtual false, abstract: false, final false
static inline int32_t mono_btls_ssl_accept(::System::IntPtr  handle) ;

/// @brief Method mono_btls_ssl_add_chain_certificate, addr 0x181db61c0, size 0x90, virtual false, abstract: false, final false
static inline int32_t mono_btls_ssl_add_chain_certificate(::System::IntPtr  handle, ::System::IntPtr  x509) ;

/// @brief Method mono_btls_ssl_close, addr 0x181db6250, size 0x80, virtual false, abstract: false, final false
static inline void mono_btls_ssl_close(::System::IntPtr  handle) ;

/// @brief Method mono_btls_ssl_connect, addr 0x181db62d0, size 0x80, virtual false, abstract: false, final false
static inline int32_t mono_btls_ssl_connect(::System::IntPtr  handle) ;

/// @brief Method mono_btls_ssl_destroy, addr 0x181db6350, size 0x80, virtual false, abstract: false, final false
static inline void mono_btls_ssl_destroy(::System::IntPtr  handle) ;

/// @brief Method mono_btls_ssl_get_cipher, addr 0x181db63d0, size 0x80, virtual false, abstract: false, final false
static inline int32_t mono_btls_ssl_get_cipher(::System::IntPtr  handle) ;

/// @brief Method mono_btls_ssl_get_error, addr 0x181db6450, size 0x90, virtual false, abstract: false, final false
static inline int32_t mono_btls_ssl_get_error(::System::IntPtr  handle, int32_t  ret_code) ;

/// @brief Method mono_btls_ssl_get_peer_certificate, addr 0x181db64e0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_ssl_get_peer_certificate(::System::IntPtr  handle) ;

/// @brief Method mono_btls_ssl_get_server_name, addr 0x181db6560, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_ssl_get_server_name(::System::IntPtr  handle) ;

/// @brief Method mono_btls_ssl_get_version, addr 0x181db65e0, size 0x80, virtual false, abstract: false, final false
static inline int32_t mono_btls_ssl_get_version(::System::IntPtr  handle) ;

/// @brief Method mono_btls_ssl_handshake, addr 0x181db6660, size 0x80, virtual false, abstract: false, final false
static inline int32_t mono_btls_ssl_handshake(::System::IntPtr  handle) ;

/// @brief Method mono_btls_ssl_new, addr 0x181db66e0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_ssl_new(::System::IntPtr  handle) ;

/// @brief Method mono_btls_ssl_print_errors_cb, addr 0x181db6760, size 0x90, virtual false, abstract: false, final false
static inline void mono_btls_ssl_print_errors_cb(::System::IntPtr  func, ::System::IntPtr  ctx) ;

/// @brief Method mono_btls_ssl_read, addr 0x181db67f0, size 0xa0, virtual false, abstract: false, final false
static inline int32_t mono_btls_ssl_read(::System::IntPtr  handle, ::System::IntPtr  data, int32_t  len) ;

/// @brief Method mono_btls_ssl_renegotiate_pending, addr 0x181db6890, size 0x80, virtual false, abstract: false, final false
static inline int32_t mono_btls_ssl_renegotiate_pending(::System::IntPtr  handle) ;

/// @brief Method mono_btls_ssl_set_bio, addr 0x181db6910, size 0x90, virtual false, abstract: false, final false
static inline void mono_btls_ssl_set_bio(::System::IntPtr  handle, ::System::IntPtr  bio) ;

/// @brief Method mono_btls_ssl_set_quiet_shutdown, addr 0x181db69a0, size 0x90, virtual false, abstract: false, final false
static inline void mono_btls_ssl_set_quiet_shutdown(::System::IntPtr  handle, int32_t  mode) ;

/// @brief Method mono_btls_ssl_set_renegotiate_mode, addr 0x181db6a30, size 0x90, virtual false, abstract: false, final false
static inline void mono_btls_ssl_set_renegotiate_mode(::System::IntPtr  handle, int32_t  mode) ;

/// @brief Method mono_btls_ssl_set_server_name, addr 0x181db6ac0, size 0x90, virtual false, abstract: false, final false
static inline int32_t mono_btls_ssl_set_server_name(::System::IntPtr  handle, ::System::IntPtr  name) ;

/// @brief Method mono_btls_ssl_shutdown, addr 0x181db6b50, size 0x80, virtual false, abstract: false, final false
static inline int32_t mono_btls_ssl_shutdown(::System::IntPtr  handle) ;

/// @brief Method mono_btls_ssl_use_certificate, addr 0x181db6bd0, size 0x90, virtual false, abstract: false, final false
static inline int32_t mono_btls_ssl_use_certificate(::System::IntPtr  handle, ::System::IntPtr  x509) ;

/// @brief Method mono_btls_ssl_use_private_key, addr 0x181db6c60, size 0x90, virtual false, abstract: false, final false
static inline int32_t mono_btls_ssl_use_private_key(::System::IntPtr  handle, ::System::IntPtr  key) ;

/// @brief Method mono_btls_ssl_write, addr 0x181db6cf0, size 0xa0, virtual false, abstract: false, final false
static inline int32_t mono_btls_ssl_write(::System::IntPtr  handle, ::System::IntPtr  data, int32_t  len) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsSsl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsSsl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsSsl(MonoBtlsSsl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsSsl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsSsl(MonoBtlsSsl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11470};

/// @brief Field bio, offset: 0x20, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsBio*  ___bio;

/// @brief Field printErrorsFunc, offset: 0x28, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc*  ___printErrorsFunc;

/// @brief Field printErrorsFuncPtr, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  ___printErrorsFuncPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsSsl, ___bio) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsSsl, ___printErrorsFunc) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsSsl, ___printErrorsFuncPtr) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsSsl) == 0x38, "Size mismatch!");

} // namespace end def Mono::Btls
