#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsSslCtx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Btls/zzzz__MonoBtlsObject_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsSslCtx)
namespace Mono::Btls {
class MonoBtlsSelectCallback;
}
namespace Mono::Btls {
class MonoBtlsServerNameCallback;
}
namespace Mono::Btls {
class MonoBtlsSslCtx_BoringSslCtxHandle;
}
namespace Mono::Btls {
class MonoBtlsSslCtx_NativeSelectFunc;
}
namespace Mono::Btls {
class MonoBtlsSslCtx_NativeServerNameFunc;
}
namespace Mono::Btls {
class MonoBtlsSslCtx_NativeVerifyFunc;
}
namespace Mono::Btls {
class MonoBtlsVerifyCallback;
}
namespace Mono::Btls {
class MonoBtlsX509StoreCtx;
}
namespace Mono::Btls {
class MonoBtlsX509Store;
}
namespace Mono::Btls {
class MonoBtlsX509VerifyParam;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsSslCtx;
}
namespace Mono::Btls {
class MonoBtlsSslCtx_BoringSslCtxHandle;
}
namespace Mono::Btls {
class MonoBtlsSslCtx_NativeSelectFunc;
}
namespace Mono::Btls {
class MonoBtlsSslCtx_NativeServerNameFunc;
}
namespace Mono::Btls {
class MonoBtlsSslCtx_NativeVerifyFunc;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsSslCtx*);
MARK_REF_T(::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*);
MARK_REF_T(::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc*);
MARK_REF_T(::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc*);
MARK_REF_T(::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsSslCtx*, "Mono.Btls", "MonoBtlsSslCtx");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*, "Mono.Btls", "MonoBtlsSslCtx/BoringSslCtxHandle");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc*, "Mono.Btls", "MonoBtlsSslCtx/NativeSelectFunc");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc*, "Mono.Btls", "MonoBtlsSslCtx/NativeServerNameFunc");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc*, "Mono.Btls", "MonoBtlsSslCtx/NativeVerifyFunc");
// Dependencies Mono.Btls.MonoBtlsObject::MonoBtlsHandle
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsSslCtx/BoringSslCtxHandle
class CORDL_TYPE MonoBtlsSslCtx_BoringSslCtxHandle : public ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle {
public:
// Declarations
static inline ::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle* New_ctor(::System::IntPtr  handle) ;

/// @brief Method ReleaseHandle, addr 0x181dae490, size 0x80, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method .ctor, addr 0x181dae510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  handle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsSslCtx_BoringSslCtxHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsSslCtx_BoringSslCtxHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsSslCtx_BoringSslCtxHandle(MonoBtlsSslCtx_BoringSslCtxHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsSslCtx_BoringSslCtxHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsSslCtx_BoringSslCtxHandle(MonoBtlsSslCtx_BoringSslCtxHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11471};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies System.MulticastDelegate
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsSslCtx/NativeVerifyFunc
class CORDL_TYPE MonoBtlsSslCtx_NativeVerifyFunc : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline int32_t Invoke(::System::IntPtr  instance, int32_t  preverify_ok, ::System::IntPtr  ctx) ;

static inline ::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181dbe6b0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsSslCtx_NativeVerifyFunc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsSslCtx_NativeVerifyFunc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsSslCtx_NativeVerifyFunc(MonoBtlsSslCtx_NativeVerifyFunc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsSslCtx_NativeVerifyFunc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsSslCtx_NativeVerifyFunc(MonoBtlsSslCtx_NativeVerifyFunc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11472};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc) == 0x80, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies System.MulticastDelegate
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsSslCtx/NativeSelectFunc
class CORDL_TYPE MonoBtlsSslCtx_NativeSelectFunc : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline int32_t Invoke(::System::IntPtr  instance, int32_t  count, ::System::IntPtr  sizes, ::System::IntPtr  data) ;

static inline ::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181dbe600, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsSslCtx_NativeSelectFunc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsSslCtx_NativeSelectFunc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsSslCtx_NativeSelectFunc(MonoBtlsSslCtx_NativeSelectFunc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsSslCtx_NativeSelectFunc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsSslCtx_NativeSelectFunc(MonoBtlsSslCtx_NativeSelectFunc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11473};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc) == 0x80, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies System.MulticastDelegate
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsSslCtx/NativeServerNameFunc
class CORDL_TYPE MonoBtlsSslCtx_NativeServerNameFunc : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline int32_t Invoke(::System::IntPtr  instance) ;

static inline ::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1813c5a60, size 0x6880, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsSslCtx_NativeServerNameFunc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsSslCtx_NativeServerNameFunc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsSslCtx_NativeServerNameFunc(MonoBtlsSslCtx_NativeServerNameFunc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsSslCtx_NativeServerNameFunc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsSslCtx_NativeServerNameFunc(MonoBtlsSslCtx_NativeServerNameFunc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11474};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc) == 0x80, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies Mono.Btls.MonoBtlsObject, System.IntPtr, System.Runtime.InteropServices.GCHandle
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsSslCtx
class CORDL_TYPE MonoBtlsSslCtx : public ::Mono::Btls::MonoBtlsObject {
public:
// Declarations
using BoringSslCtxHandle = ::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle;

using NativeSelectFunc = ::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc;

using NativeServerNameFunc = ::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc;

using NativeVerifyFunc = ::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc;

 __declspec(property(get=get_CertificateStore)) ::Mono::Btls::MonoBtlsX509Store*  CertificateStore;

 __declspec(property(get=get_Handle)) ::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*  Handle;

/// @brief Field instance, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_instance, put=__cordl_internal_set_instance)) ::System::Runtime::InteropServices::GCHandle  instance;

/// @brief Field instancePtr, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_instancePtr, put=__cordl_internal_set_instancePtr)) ::System::IntPtr  instancePtr;

/// @brief Field selectCallback, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectCallback, put=__cordl_internal_set_selectCallback)) ::Mono::Btls::MonoBtlsSelectCallback*  selectCallback;

/// @brief Field selectFunc, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectFunc, put=__cordl_internal_set_selectFunc)) ::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc*  selectFunc;

/// @brief Field selectFuncPtr, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectFuncPtr, put=__cordl_internal_set_selectFuncPtr)) ::System::IntPtr  selectFuncPtr;

/// @brief Field serverNameCallback, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverNameCallback, put=__cordl_internal_set_serverNameCallback)) ::Mono::Btls::MonoBtlsServerNameCallback*  serverNameCallback;

/// @brief Field serverNameFunc, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverNameFunc, put=__cordl_internal_set_serverNameFunc)) ::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc*  serverNameFunc;

/// @brief Field serverNameFuncPtr, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverNameFuncPtr, put=__cordl_internal_set_serverNameFuncPtr)) ::System::IntPtr  serverNameFuncPtr;

/// @brief Field store, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_store, put=__cordl_internal_set_store)) ::Mono::Btls::MonoBtlsX509Store*  store;

/// @brief Field verifyCallback, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_verifyCallback, put=__cordl_internal_set_verifyCallback)) ::Mono::Btls::MonoBtlsVerifyCallback*  verifyCallback;

/// @brief Field verifyFunc, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_verifyFunc, put=__cordl_internal_set_verifyFunc)) ::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc*  verifyFunc;

/// @brief Field verifyFuncPtr, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_verifyFuncPtr, put=__cordl_internal_set_verifyFuncPtr)) ::System::IntPtr  verifyFuncPtr;

/// @brief Method Close, addr 0x181db2360, size 0x50, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method CopyIssuers, addr 0x181db23b0, size 0x390, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> CopyIssuers(int32_t  count, ::System::IntPtr  sizesPtr, ::System::IntPtr  dataPtr) ;

/// @brief Method NativeSelectCallback, addr 0x181db2740, size 0x120, virtual false, abstract: false, final false
static inline int32_t NativeSelectCallback(::System::IntPtr  instance, int32_t  count, ::System::IntPtr  sizes, ::System::IntPtr  data) ;

/// @brief Method NativeServerNameCallback, addr 0x181db2860, size 0xd0, virtual false, abstract: false, final false
static inline int32_t NativeServerNameCallback(::System::IntPtr  instance) ;

/// @brief Method NativeVerifyCallback, addr 0x181db2930, size 0x290, virtual false, abstract: false, final false
static inline int32_t NativeVerifyCallback(::System::IntPtr  instance, int32_t  preverify_ok, ::System::IntPtr  store_ctx) ;

static inline ::Mono::Btls::MonoBtlsSslCtx* New_ctor() ;

static inline ::Mono::Btls::MonoBtlsSslCtx* New_ctor(::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*  handle) ;

/// @brief Method SetCiphers, addr 0x181db2bc0, size 0x1c0, virtual false, abstract: false, final false
inline void SetCiphers(::ArrayW<int16_t>  ciphers, bool  allow_unsupported) ;

/// @brief Method SetClientCertificateIssuers, addr 0x181db2d80, size 0x370, virtual false, abstract: false, final false
inline void SetClientCertificateIssuers(::ArrayW<::StringW>  acceptableIssuers) ;

/// @brief Method SetMaxVersion, addr 0x181db30f0, size 0xf0, virtual false, abstract: false, final false
inline void SetMaxVersion(int32_t  version) ;

/// @brief Method SetMinVersion, addr 0x181db31e0, size 0xf0, virtual false, abstract: false, final false
inline void SetMinVersion(int32_t  version) ;

/// @brief Method SetSelectCallback, addr 0x181db32d0, size 0x100, virtual false, abstract: false, final false
inline void SetSelectCallback(::Mono::Btls::MonoBtlsSelectCallback*  callback) ;

/// @brief Method SetServerNameCallback, addr 0x181db33d0, size 0x100, virtual false, abstract: false, final false
inline void SetServerNameCallback(::Mono::Btls::MonoBtlsServerNameCallback*  callback) ;

/// @brief Method SetVerifyCallback, addr 0x181db34d0, size 0x120, virtual false, abstract: false, final false
inline void SetVerifyCallback(::Mono::Btls::MonoBtlsVerifyCallback*  callback, bool  client_cert_required) ;

/// @brief Method SetVerifyParam, addr 0x181db35f0, size 0x170, virtual false, abstract: false, final false
inline void SetVerifyParam(::Mono::Btls::MonoBtlsX509VerifyParam*  param) ;

/// @brief Method VerifyCallback, addr 0x181db3760, size 0x30, virtual false, abstract: false, final false
inline int32_t VerifyCallback(bool  preverify_ok, ::Mono::Btls::MonoBtlsX509StoreCtx*  ctx) ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_instance() const;

constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_instance() ;

constexpr ::System::IntPtr const& __cordl_internal_get_instancePtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_instancePtr() ;

constexpr ::Mono::Btls::MonoBtlsSelectCallback* const& __cordl_internal_get_selectCallback() const;

constexpr ::Mono::Btls::MonoBtlsSelectCallback*& __cordl_internal_get_selectCallback() ;

constexpr ::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc* const& __cordl_internal_get_selectFunc() const;

constexpr ::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc*& __cordl_internal_get_selectFunc() ;

constexpr ::System::IntPtr const& __cordl_internal_get_selectFuncPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_selectFuncPtr() ;

constexpr ::Mono::Btls::MonoBtlsServerNameCallback* const& __cordl_internal_get_serverNameCallback() const;

constexpr ::Mono::Btls::MonoBtlsServerNameCallback*& __cordl_internal_get_serverNameCallback() ;

constexpr ::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc* const& __cordl_internal_get_serverNameFunc() const;

constexpr ::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc*& __cordl_internal_get_serverNameFunc() ;

constexpr ::System::IntPtr const& __cordl_internal_get_serverNameFuncPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_serverNameFuncPtr() ;

constexpr ::Mono::Btls::MonoBtlsX509Store* const& __cordl_internal_get_store() const;

constexpr ::Mono::Btls::MonoBtlsX509Store*& __cordl_internal_get_store() ;

constexpr ::Mono::Btls::MonoBtlsVerifyCallback* const& __cordl_internal_get_verifyCallback() const;

constexpr ::Mono::Btls::MonoBtlsVerifyCallback*& __cordl_internal_get_verifyCallback() ;

constexpr ::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc* const& __cordl_internal_get_verifyFunc() const;

constexpr ::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc*& __cordl_internal_get_verifyFunc() ;

constexpr ::System::IntPtr const& __cordl_internal_get_verifyFuncPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_verifyFuncPtr() ;

constexpr void __cordl_internal_set_instance(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr void __cordl_internal_set_instancePtr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_selectCallback(::Mono::Btls::MonoBtlsSelectCallback*  value) ;

constexpr void __cordl_internal_set_selectFunc(::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc*  value) ;

constexpr void __cordl_internal_set_selectFuncPtr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_serverNameCallback(::Mono::Btls::MonoBtlsServerNameCallback*  value) ;

constexpr void __cordl_internal_set_serverNameFunc(::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc*  value) ;

constexpr void __cordl_internal_set_serverNameFuncPtr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_store(::Mono::Btls::MonoBtlsX509Store*  value) ;

constexpr void __cordl_internal_set_verifyCallback(::Mono::Btls::MonoBtlsVerifyCallback*  value) ;

constexpr void __cordl_internal_set_verifyFunc(::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc*  value) ;

constexpr void __cordl_internal_set_verifyFuncPtr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x181db3790, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181db3840, size 0x440, virtual false, abstract: false, final false
inline void _ctor(::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*  handle) ;

/// @brief Method get_CertificateStore, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509Store* get_CertificateStore() ;

/// @brief Method get_Handle, addr 0x181db3c80, size 0x50, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle* get_Handle() ;

/// @brief Method mono_btls_ssl_ctx_free, addr 0x181db3cd0, size 0x80, virtual false, abstract: false, final false
static inline int32_t mono_btls_ssl_ctx_free(::System::IntPtr  handle) ;

/// @brief Method mono_btls_ssl_ctx_initialize, addr 0x181db3d50, size 0x90, virtual false, abstract: false, final false
static inline void mono_btls_ssl_ctx_initialize(::System::IntPtr  handle, ::System::IntPtr  instance) ;

/// @brief Method mono_btls_ssl_ctx_new, addr 0x181db3de0, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_ssl_ctx_new() ;

/// @brief Method mono_btls_ssl_ctx_set_cert_select_callback, addr 0x181db3e50, size 0x90, virtual false, abstract: false, final false
static inline void mono_btls_ssl_ctx_set_cert_select_callback(::System::IntPtr  handle, ::System::IntPtr  func) ;

/// @brief Method mono_btls_ssl_ctx_set_cert_verify_callback, addr 0x181db3ee0, size 0xa0, virtual false, abstract: false, final false
static inline void mono_btls_ssl_ctx_set_cert_verify_callback(::System::IntPtr  handle, ::System::IntPtr  func, int32_t  cert_required) ;

/// @brief Method mono_btls_ssl_ctx_set_ciphers, addr 0x181db3f80, size 0xa0, virtual false, abstract: false, final false
static inline int32_t mono_btls_ssl_ctx_set_ciphers(::System::IntPtr  handle, int32_t  count, ::System::IntPtr  data, int32_t  allow_unsupported) ;

/// @brief Method mono_btls_ssl_ctx_set_client_ca_list, addr 0x181db4020, size 0xa0, virtual false, abstract: false, final false
static inline int32_t mono_btls_ssl_ctx_set_client_ca_list(::System::IntPtr  handle, int32_t  count, ::System::IntPtr  sizes, ::System::IntPtr  data) ;

/// @brief Method mono_btls_ssl_ctx_set_max_version, addr 0x181db40c0, size 0x90, virtual false, abstract: false, final false
static inline void mono_btls_ssl_ctx_set_max_version(::System::IntPtr  handle, int32_t  version) ;

/// @brief Method mono_btls_ssl_ctx_set_min_version, addr 0x181db4150, size 0x90, virtual false, abstract: false, final false
static inline void mono_btls_ssl_ctx_set_min_version(::System::IntPtr  handle, int32_t  version) ;

/// @brief Method mono_btls_ssl_ctx_set_server_name_callback, addr 0x181db41e0, size 0x90, virtual false, abstract: false, final false
static inline void mono_btls_ssl_ctx_set_server_name_callback(::System::IntPtr  handle, ::System::IntPtr  func) ;

/// @brief Method mono_btls_ssl_ctx_set_verify_param, addr 0x181db4270, size 0x90, virtual false, abstract: false, final false
static inline int32_t mono_btls_ssl_ctx_set_verify_param(::System::IntPtr  handle, ::System::IntPtr  param) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsSslCtx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsSslCtx", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsSslCtx(MonoBtlsSslCtx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsSslCtx", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsSslCtx(MonoBtlsSslCtx const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11475};

/// @brief Field verifyFunc, offset: 0x20, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc*  ___verifyFunc;

/// @brief Field selectFunc, offset: 0x28, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc*  ___selectFunc;

/// @brief Field serverNameFunc, offset: 0x30, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc*  ___serverNameFunc;

/// @brief Field verifyFuncPtr, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  ___verifyFuncPtr;

/// @brief Field selectFuncPtr, offset: 0x40, size: 0x8, def value: None
 ::System::IntPtr  ___selectFuncPtr;

/// @brief Field serverNameFuncPtr, offset: 0x48, size: 0x8, def value: None
 ::System::IntPtr  ___serverNameFuncPtr;

/// @brief Field verifyCallback, offset: 0x50, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsVerifyCallback*  ___verifyCallback;

/// @brief Field selectCallback, offset: 0x58, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsSelectCallback*  ___selectCallback;

/// @brief Field serverNameCallback, offset: 0x60, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsServerNameCallback*  ___serverNameCallback;

/// @brief Field store, offset: 0x68, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsX509Store*  ___store;

/// @brief Field instance, offset: 0x70, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  ___instance;

/// @brief Field instancePtr, offset: 0x78, size: 0x8, def value: None
 ::System::IntPtr  ___instancePtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsSslCtx, ___verifyFunc) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsSslCtx, ___selectFunc) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsSslCtx, ___serverNameFunc) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsSslCtx, ___verifyFuncPtr) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsSslCtx, ___selectFuncPtr) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsSslCtx, ___serverNameFuncPtr) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsSslCtx, ___verifyCallback) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsSslCtx, ___selectCallback) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsSslCtx, ___serverNameCallback) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsSslCtx, ___store) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsSslCtx, ___instance) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsSslCtx, ___instancePtr) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsSslCtx) == 0x80, "Size mismatch!");

} // namespace end def Mono::Btls
