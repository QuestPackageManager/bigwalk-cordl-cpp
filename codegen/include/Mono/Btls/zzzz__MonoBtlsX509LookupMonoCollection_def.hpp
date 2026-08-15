#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509LookupMonoCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Btls/zzzz__MonoBtlsX509LookupMono_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509TrustKind_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsX509LookupMonoCollection)
namespace Mono::Btls {
class MonoBtlsX509Name;
}
namespace Mono::Btls {
struct MonoBtlsX509TrustKind;
}
namespace Mono::Btls {
class MonoBtlsX509;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsX509LookupMonoCollection;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsX509LookupMonoCollection*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509LookupMonoCollection*, "Mono.Btls", "MonoBtlsX509LookupMonoCollection");
// Dependencies Mono.Btls.MonoBtlsX509, Mono.Btls.MonoBtlsX509LookupMono, Mono.Btls.MonoBtlsX509TrustKind
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509LookupMonoCollection
class CORDL_TYPE MonoBtlsX509LookupMonoCollection : public ::Mono::Btls::MonoBtlsX509LookupMono {
public:
// Declarations
/// @brief Field certificates, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_certificates, put=__cordl_internal_set_certificates)) ::ArrayW<::Mono::Btls::MonoBtlsX509*>  certificates;

/// @brief Field collection, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_collection, put=__cordl_internal_set_collection)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  collection;

/// @brief Field hashes, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_hashes, put=__cordl_internal_set_hashes)) ::ArrayW<int64_t>  hashes;

/// @brief Field trust, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_trust, put=__cordl_internal_set_trust)) ::Mono::Btls::MonoBtlsX509TrustKind  trust;

/// @brief Method Close, addr 0x181db7ea0, size 0x140, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Initialize, addr 0x181db7fe0, size 0x2b0, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::Mono::Btls::MonoBtlsX509LookupMonoCollection* New_ctor(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  collection, ::Mono::Btls::MonoBtlsX509TrustKind  trust) ;

/// @brief Method OnGetBySubject, addr 0x181db8290, size 0xc0, virtual true, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509* OnGetBySubject(::Mono::Btls::MonoBtlsX509Name*  name) ;

constexpr ::ArrayW<::Mono::Btls::MonoBtlsX509*> const& __cordl_internal_get_certificates() const;

constexpr ::ArrayW<::Mono::Btls::MonoBtlsX509*>& __cordl_internal_get_certificates() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const& __cordl_internal_get_collection() const;

constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& __cordl_internal_get_collection() ;

constexpr ::ArrayW<int64_t> const& __cordl_internal_get_hashes() const;

constexpr ::ArrayW<int64_t>& __cordl_internal_get_hashes() ;

constexpr ::Mono::Btls::MonoBtlsX509TrustKind const& __cordl_internal_get_trust() const;

constexpr ::Mono::Btls::MonoBtlsX509TrustKind& __cordl_internal_get_trust() ;

constexpr void __cordl_internal_set_certificates(::ArrayW<::Mono::Btls::MonoBtlsX509*>  value) ;

constexpr void __cordl_internal_set_collection(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  value) ;

constexpr void __cordl_internal_set_hashes(::ArrayW<int64_t>  value) ;

constexpr void __cordl_internal_set_trust(::Mono::Btls::MonoBtlsX509TrustKind  value) ;

/// @brief Method .ctor, addr 0x181db8350, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  collection, ::Mono::Btls::MonoBtlsX509TrustKind  trust) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509LookupMonoCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509LookupMonoCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509LookupMonoCollection(MonoBtlsX509LookupMonoCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509LookupMonoCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509LookupMonoCollection(MonoBtlsX509LookupMonoCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11492};

/// @brief Field hashes, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<int64_t>  ___hashes;

/// @brief Field certificates, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::Mono::Btls::MonoBtlsX509*>  ___certificates;

/// @brief Field collection, offset: 0x58, size: 0x8, def value: None
 ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  ___collection;

/// @brief Field trust, offset: 0x60, size: 0x4, def value: None
 ::Mono::Btls::MonoBtlsX509TrustKind  ___trust;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsX509LookupMonoCollection, ___hashes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsX509LookupMonoCollection, ___certificates) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsX509LookupMonoCollection, ___collection) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsX509LookupMonoCollection, ___trust) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsX509LookupMonoCollection) == 0x68, "Size mismatch!");

} // namespace end def Mono::Btls
