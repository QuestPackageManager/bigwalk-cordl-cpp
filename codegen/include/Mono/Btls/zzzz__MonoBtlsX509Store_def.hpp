#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509Store.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Btls/zzzz__MonoBtlsObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsX509Store)
namespace Mono::Btls {
class MonoBtlsSslCtx_BoringSslCtxHandle;
}
namespace Mono::Btls {
struct MonoBtlsX509FileType;
}
namespace Mono::Btls {
struct MonoBtlsX509LookupType;
}
namespace Mono::Btls {
class MonoBtlsX509Lookup;
}
namespace Mono::Btls {
class MonoBtlsX509Store_BoringX509StoreHandle;
}
namespace Mono::Btls {
struct MonoBtlsX509TrustKind;
}
namespace Mono::Btls {
class MonoBtlsX509;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsX509Store;
}
namespace Mono::Btls {
class MonoBtlsX509Store_BoringX509StoreHandle;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsX509Store*);
MARK_REF_T(::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509Store*, "Mono.Btls", "MonoBtlsX509Store");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle*, "Mono.Btls", "MonoBtlsX509Store/BoringX509StoreHandle");
// Dependencies Mono.Btls.MonoBtlsObject::MonoBtlsHandle
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509Store/BoringX509StoreHandle
class CORDL_TYPE MonoBtlsX509Store_BoringX509StoreHandle : public ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle {
public:
// Declarations
static inline ::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle* New_ctor(::System::IntPtr  handle) ;

/// @brief Method ReleaseHandle, addr 0x181dae920, size 0x80, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method .ctor, addr 0x181dae510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  handle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509Store_BoringX509StoreHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509Store_BoringX509StoreHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509Store_BoringX509StoreHandle(MonoBtlsX509Store_BoringX509StoreHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509Store_BoringX509StoreHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509Store_BoringX509StoreHandle(MonoBtlsX509Store_BoringX509StoreHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11497};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies Mono.Btls.MonoBtlsObject
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509Store
class CORDL_TYPE MonoBtlsX509Store : public ::Mono::Btls::MonoBtlsObject {
public:
// Declarations
using BoringX509StoreHandle = ::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle;

 __declspec(property(get=get_Handle)) ::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle*  Handle;

/// @brief Field lookupHash, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookupHash, put=__cordl_internal_set_lookupHash)) ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Mono::Btls::MonoBtlsX509Lookup*>*  lookupHash;

/// @brief Method AddCertificate, addr 0x181dbbdd0, size 0x160, virtual false, abstract: false, final false
inline void AddCertificate(::Mono::Btls::MonoBtlsX509*  x509) ;

/// @brief Method AddCollection, addr 0x181dbbf30, size 0x90, virtual false, abstract: false, final false
inline void AddCollection(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  collection, ::Mono::Btls::MonoBtlsX509TrustKind  trust) ;

/// @brief Method AddDirectoryLookup, addr 0x181dbbfc0, size 0x50, virtual false, abstract: false, final false
inline void AddDirectoryLookup(::StringW  dir, ::Mono::Btls::MonoBtlsX509FileType  type) ;

/// @brief Method AddLookup, addr 0x181dbc010, size 0x1b0, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509Lookup* AddLookup(::Mono::Btls::MonoBtlsX509LookupType  type) ;

/// @brief Method Close, addr 0x181dbc1c0, size 0xb0, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Create_internal, addr 0x181dbc360, size 0xd0, virtual false, abstract: false, final false
static inline ::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle* Create_internal() ;

/// @brief Method Create_internal, addr 0x181dbc270, size 0xf0, virtual false, abstract: false, final false
static inline ::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle* Create_internal(::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*  ctx) ;

static inline ::Mono::Btls::MonoBtlsX509Store* New_ctor() ;

static inline ::Mono::Btls::MonoBtlsX509Store* New_ctor(::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*  ctx) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Mono::Btls::MonoBtlsX509Lookup*>* const& __cordl_internal_get_lookupHash() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Mono::Btls::MonoBtlsX509Lookup*>*& __cordl_internal_get_lookupHash() ;

constexpr void __cordl_internal_set_lookupHash(::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Mono::Btls::MonoBtlsX509Lookup*>*  value) ;

/// @brief Method .ctor, addr 0x181dbc430, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181dbc510, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*  ctx) ;

/// @brief Method get_Handle, addr 0x181dbc610, size 0x50, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle* get_Handle() ;

/// @brief Method mono_btls_x509_store_add_cert, addr 0x181dbc660, size 0x90, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_store_add_cert(::System::IntPtr  handle, ::System::IntPtr  x509) ;

/// @brief Method mono_btls_x509_store_free, addr 0x181dbc6f0, size 0x80, virtual false, abstract: false, final false
static inline void mono_btls_x509_store_free(::System::IntPtr  handle) ;

/// @brief Method mono_btls_x509_store_from_ssl_ctx, addr 0x181dbc770, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_store_from_ssl_ctx(::System::IntPtr  handle) ;

/// @brief Method mono_btls_x509_store_new, addr 0x181dbc7f0, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_store_new() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509Store() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509Store", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509Store(MonoBtlsX509Store && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509Store", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509Store(MonoBtlsX509Store const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11498};

/// @brief Field lookupHash, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Mono::Btls::MonoBtlsX509Lookup*>*  ___lookupHash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsX509Store, ___lookupHash) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsX509Store) == 0x28, "Size mismatch!");

} // namespace end def Mono::Btls
