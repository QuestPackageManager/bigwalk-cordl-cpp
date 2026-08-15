#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509StoreCtx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Btls/zzzz__MonoBtlsObject_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsX509StoreCtx)
namespace Mono::Btls {
class MonoBtlsX509Chain;
}
namespace Mono::Btls {
struct MonoBtlsX509Error;
}
namespace Mono::Btls {
class MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle;
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
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsX509StoreCtx;
}
namespace Mono::Btls {
class MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsX509StoreCtx*);
MARK_REF_T(::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509StoreCtx*, "Mono.Btls", "MonoBtlsX509StoreCtx");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle*, "Mono.Btls", "MonoBtlsX509StoreCtx/BoringX509StoreCtxHandle");
// Dependencies Mono.Btls.MonoBtlsObject::MonoBtlsHandle
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509StoreCtx/BoringX509StoreCtxHandle
class CORDL_TYPE MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle : public ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle {
public:
// Declarations
/// @brief Field dontFree, offset 0x1e, size 0x1 
 __declspec(property(get=__cordl_internal_get_dontFree, put=__cordl_internal_set_dontFree)) bool  dontFree;

static inline ::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle* New_ctor(::System::IntPtr  handle, bool  ownsHandle) ;

/// @brief Method ReleaseHandle, addr 0x181dae890, size 0x90, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

constexpr bool const& __cordl_internal_get_dontFree() const;

constexpr bool& __cordl_internal_get_dontFree() ;

constexpr void __cordl_internal_set_dontFree(bool  value) ;

/// @brief Method .ctor, addr 0x181dae860, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  handle, bool  ownsHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle(MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle(MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11499};

/// @brief Field dontFree, offset: 0x1e, size: 0x1, def value: None
 bool  ___dontFree;

/// @brief Size padding 0x28 - 0x20 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle, ___dontFree) == 0x1e, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle) == 0x28, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies Mono.Btls.MonoBtlsObject, System.Nullable`1<T>
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509StoreCtx
class CORDL_TYPE MonoBtlsX509StoreCtx : public ::Mono::Btls::MonoBtlsObject {
public:
// Declarations
using BoringX509StoreCtxHandle = ::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle;

 __declspec(property(get=get_Handle)) ::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle*  Handle;

 __declspec(property(get=get_VerifyResult)) int32_t  VerifyResult;

/// @brief Field verifyResult, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_verifyResult, put=__cordl_internal_set_verifyResult)) ::System::Nullable_1<int32_t>  verifyResult;

/// @brief Method Copy, addr 0x181dba710, size 0x150, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509StoreCtx* Copy() ;

/// @brief Method Create_internal, addr 0x181dba860, size 0xe0, virtual false, abstract: false, final false
static inline ::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle* Create_internal(::System::IntPtr  store_ctx) ;

/// @brief Method GetChain, addr 0x181dba940, size 0x140, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509Chain* GetChain() ;

/// @brief Method GetError, addr 0x181dbaa80, size 0xf0, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509Error GetError() ;

/// @brief Method GetUntrusted, addr 0x181dbab70, size 0x140, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509Chain* GetUntrusted() ;

/// @brief Method Initialize, addr 0x181dbacb0, size 0x1e0, virtual false, abstract: false, final false
inline void Initialize(::Mono::Btls::MonoBtlsX509Store*  store, ::Mono::Btls::MonoBtlsX509Chain*  chain) ;

static inline ::Mono::Btls::MonoBtlsX509StoreCtx* New_ctor() ;

static inline ::Mono::Btls::MonoBtlsX509StoreCtx* New_ctor(int32_t  preverify_ok, ::System::IntPtr  store_ctx) ;

static inline ::Mono::Btls::MonoBtlsX509StoreCtx* New_ctor(::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle*  ptr, ::System::Nullable_1<int32_t>  verifyResult) ;

/// @brief Method SetVerifyParam, addr 0x181dbae90, size 0x160, virtual false, abstract: false, final false
inline void SetVerifyParam(::Mono::Btls::MonoBtlsX509VerifyParam*  param) ;

/// @brief Method Verify, addr 0x181dbaff0, size 0x110, virtual false, abstract: false, final false
inline int32_t Verify() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_verifyResult() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_verifyResult() ;

constexpr void __cordl_internal_set_verifyResult(::System::Nullable_1<int32_t>  value) ;

/// @brief Method .ctor, addr 0x181dbb220, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181dbb100, size 0x120, virtual false, abstract: false, final false
inline void _ctor(int32_t  preverify_ok, ::System::IntPtr  store_ctx) ;

/// @brief Method .ctor, addr 0x181dbb2d0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle*  ptr, ::System::Nullable_1<int32_t>  verifyResult) ;

/// @brief Method get_Handle, addr 0x181dbb300, size 0x50, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle* get_Handle() ;

/// @brief Method get_VerifyResult, addr 0x181dbb350, size 0x30, virtual false, abstract: false, final false
inline int32_t get_VerifyResult() ;

/// @brief Method mono_btls_x509_store_ctx_free, addr 0x181dbb380, size 0x80, virtual false, abstract: false, final false
static inline void mono_btls_x509_store_ctx_free(::System::IntPtr  handle) ;

/// @brief Method mono_btls_x509_store_ctx_from_ptr, addr 0x181dbb400, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_store_ctx_from_ptr(::System::IntPtr  ctx) ;

/// @brief Method mono_btls_x509_store_ctx_get_chain, addr 0x181dbb480, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_store_ctx_get_chain(::System::IntPtr  handle) ;

/// @brief Method mono_btls_x509_store_ctx_get_error, addr 0x181dbb500, size 0x90, virtual false, abstract: false, final false
static inline ::Mono::Btls::MonoBtlsX509Error mono_btls_x509_store_ctx_get_error(::System::IntPtr  handle, ::by_ref<::System::IntPtr>  error_string) ;

/// @brief Method mono_btls_x509_store_ctx_get_untrusted, addr 0x181dbb590, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_store_ctx_get_untrusted(::System::IntPtr  handle) ;

/// @brief Method mono_btls_x509_store_ctx_init, addr 0x181dbb610, size 0xa0, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_store_ctx_init(::System::IntPtr  handle, ::System::IntPtr  store, ::System::IntPtr  chain) ;

/// @brief Method mono_btls_x509_store_ctx_new, addr 0x181dbb6b0, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_store_ctx_new() ;

/// @brief Method mono_btls_x509_store_ctx_set_param, addr 0x181dbb720, size 0x90, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_store_ctx_set_param(::System::IntPtr  handle, ::System::IntPtr  param) ;

/// @brief Method mono_btls_x509_store_ctx_up_ref, addr 0x181dbb7b0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_store_ctx_up_ref(::System::IntPtr  handle) ;

/// @brief Method mono_btls_x509_store_ctx_verify_cert, addr 0x181dbb830, size 0x80, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_store_ctx_verify_cert(::System::IntPtr  handle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509StoreCtx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509StoreCtx", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509StoreCtx(MonoBtlsX509StoreCtx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509StoreCtx", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509StoreCtx(MonoBtlsX509StoreCtx const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11500};

/// @brief Field verifyResult, offset: 0x20, size: 0x8, def value: None
 ::System::Nullable_1<int32_t>  ___verifyResult;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsX509StoreCtx, ___verifyResult) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsX509StoreCtx) == 0x28, "Size mismatch!");

} // namespace end def Mono::Btls
