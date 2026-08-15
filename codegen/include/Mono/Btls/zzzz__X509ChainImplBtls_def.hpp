#pragma once
// IWYU pragma private; include "Mono/Btls/X509ChainImplBtls.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainImpl_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(X509ChainImplBtls)
namespace Mono::Btls {
class MonoBtlsX509Chain;
}
namespace Mono::Btls {
class MonoBtlsX509StoreCtx;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Collection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElementCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainPolicy;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
// Forward declare root types
namespace Mono::Btls {
class X509ChainImplBtls;
}
// Write type traits
MARK_REF_T(::Mono::Btls::X509ChainImplBtls*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::X509ChainImplBtls*, "Mono.Btls", "X509ChainImplBtls");
// Dependencies System.Security.Cryptography.X509Certificates.X509Certificate2, System.Security.Cryptography.X509Certificates.X509ChainImpl
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.X509ChainImplBtls
class CORDL_TYPE X509ChainImplBtls : public ::System::Security::Cryptography::X509Certificates::X509ChainImpl {
public:
// Declarations
 __declspec(property(get=get_ChainElements)) ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*  ChainElements;

 __declspec(property(get=get_ChainPolicy)) ::System::Security::Cryptography::X509Certificates::X509ChainPolicy*  ChainPolicy;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_StoreCtx)) ::Mono::Btls::MonoBtlsX509StoreCtx*  StoreCtx;

/// @brief Field certificates, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_certificates, put=__cordl_internal_set_certificates)) ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*>  certificates;

/// @brief Field chain, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_chain, put=__cordl_internal_set_chain)) ::Mono::Btls::MonoBtlsX509Chain*  chain;

/// @brief Field chainStatusList, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_chainStatusList, put=__cordl_internal_set_chainStatusList)) ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*  chainStatusList;

/// @brief Field elements, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_elements, put=__cordl_internal_set_elements)) ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*  elements;

/// @brief Field policy, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_policy, put=__cordl_internal_set_policy)) ::System::Security::Cryptography::X509Certificates::X509ChainPolicy*  policy;

/// @brief Field storeCtx, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_storeCtx, put=__cordl_internal_set_storeCtx)) ::Mono::Btls::MonoBtlsX509StoreCtx*  storeCtx;

/// @brief Field untrusted, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_untrusted, put=__cordl_internal_set_untrusted)) ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*  untrusted;

/// @brief Field untrustedChain, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_untrustedChain, put=__cordl_internal_set_untrustedChain)) ::Mono::Btls::MonoBtlsX509Chain*  untrustedChain;

/// @brief Method AddStatus, addr 0x181dc4ca0, size 0x100, virtual true, abstract: false, final false
inline void AddStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  errorCode) ;

/// @brief Method Build, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool Build(::System::Security::Cryptography::X509Certificates::X509Certificate2*  certificate) ;

/// @brief Method Dispose, addr 0x181dc4da0, size 0x140, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::Mono::Btls::X509ChainImplBtls* New_ctor(::Mono::Btls::MonoBtlsX509Chain*  chain) ;

static inline ::Mono::Btls::X509ChainImplBtls* New_ctor(::Mono::Btls::MonoBtlsX509StoreCtx*  storeCtx) ;

/// @brief Method Reset, addr 0x181dc4ee0, size 0xa0, virtual true, abstract: false, final false
inline void Reset() ;

constexpr ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*> const& __cordl_internal_get_certificates() const;

constexpr ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*>& __cordl_internal_get_certificates() ;

constexpr ::Mono::Btls::MonoBtlsX509Chain* const& __cordl_internal_get_chain() const;

constexpr ::Mono::Btls::MonoBtlsX509Chain*& __cordl_internal_get_chain() ;

constexpr ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>* const& __cordl_internal_get_chainStatusList() const;

constexpr ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*& __cordl_internal_get_chainStatusList() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* const& __cordl_internal_get_elements() const;

constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*& __cordl_internal_get_elements() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* const& __cordl_internal_get_policy() const;

constexpr ::System::Security::Cryptography::X509Certificates::X509ChainPolicy*& __cordl_internal_get_policy() ;

constexpr ::Mono::Btls::MonoBtlsX509StoreCtx* const& __cordl_internal_get_storeCtx() const;

constexpr ::Mono::Btls::MonoBtlsX509StoreCtx*& __cordl_internal_get_storeCtx() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* const& __cordl_internal_get_untrusted() const;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& __cordl_internal_get_untrusted() ;

constexpr ::Mono::Btls::MonoBtlsX509Chain* const& __cordl_internal_get_untrustedChain() const;

constexpr ::Mono::Btls::MonoBtlsX509Chain*& __cordl_internal_get_untrustedChain() ;

constexpr void __cordl_internal_set_certificates(::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*>  value) ;

constexpr void __cordl_internal_set_chain(::Mono::Btls::MonoBtlsX509Chain*  value) ;

constexpr void __cordl_internal_set_chainStatusList(::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*  value) ;

constexpr void __cordl_internal_set_elements(::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*  value) ;

constexpr void __cordl_internal_set_policy(::System::Security::Cryptography::X509Certificates::X509ChainPolicy*  value) ;

constexpr void __cordl_internal_set_storeCtx(::Mono::Btls::MonoBtlsX509StoreCtx*  value) ;

constexpr void __cordl_internal_set_untrusted(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*  value) ;

constexpr void __cordl_internal_set_untrustedChain(::Mono::Btls::MonoBtlsX509Chain*  value) ;

/// @brief Method .ctor, addr 0x181dc54e0, size 0x190, virtual false, abstract: false, final false
inline void _ctor(::Mono::Btls::MonoBtlsX509Chain*  chain) ;

/// @brief Method .ctor, addr 0x181dc4f80, size 0x560, virtual false, abstract: false, final false
inline void _ctor(::Mono::Btls::MonoBtlsX509StoreCtx*  storeCtx) ;

/// @brief Method get_ChainElements, addr 0x181dc5670, size 0x210, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements() ;

/// @brief Method get_ChainPolicy, addr 0x1802e5850, size 0x10, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* get_ChainPolicy() ;

/// @brief Method get_IsValid, addr 0x181dc5880, size 0x20, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_StoreCtx, addr 0x181dc58a0, size 0x20, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509StoreCtx* get_StoreCtx() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X509ChainImplBtls() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X509ChainImplBtls", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509ChainImplBtls(X509ChainImplBtls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainImplBtls", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509ChainImplBtls(X509ChainImplBtls const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11507};

/// @brief Field storeCtx, offset: 0x10, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsX509StoreCtx*  ___storeCtx;

/// @brief Field chain, offset: 0x18, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsX509Chain*  ___chain;

/// @brief Field untrustedChain, offset: 0x20, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsX509Chain*  ___untrustedChain;

/// @brief Field elements, offset: 0x28, size: 0x8, def value: None
 ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*  ___elements;

/// @brief Field untrusted, offset: 0x30, size: 0x8, def value: None
 ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*  ___untrusted;

/// @brief Field certificates, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*>  ___certificates;

/// @brief Field policy, offset: 0x40, size: 0x8, def value: None
 ::System::Security::Cryptography::X509Certificates::X509ChainPolicy*  ___policy;

/// @brief Field chainStatusList, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*  ___chainStatusList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::X509ChainImplBtls, ___storeCtx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::X509ChainImplBtls, ___chain) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::X509ChainImplBtls, ___untrustedChain) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::X509ChainImplBtls, ___elements) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::X509ChainImplBtls, ___untrusted) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::X509ChainImplBtls, ___certificates) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::X509ChainImplBtls, ___policy) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::X509ChainImplBtls, ___chainStatusList) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::X509ChainImplBtls) == 0x50, "Size mismatch!");

} // namespace end def Mono::Btls
