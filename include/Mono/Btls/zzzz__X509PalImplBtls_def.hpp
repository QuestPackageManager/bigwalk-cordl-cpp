#pragma once
// IWYU pragma private; include "Mono/Btls/X509PalImplBtls.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/zzzz__X509PalImpl_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509PalImplBtls)
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
namespace Mono::Btls {
class MonoBtlsProvider;
}
namespace Mono::Security::Interface {
class MonoTlsProvider;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Impl;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
// Forward declare root types
namespace Mono::Btls {
class X509PalImplBtls;
}
// Write type traits
MARK_REF_T(::Mono::Btls::X509PalImplBtls*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::X509PalImplBtls*, "Mono.Btls", "X509PalImplBtls");
// Dependencies Mono.X509PalImpl
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.X509PalImplBtls
class CORDL_TYPE X509PalImplBtls : public ::Mono::X509PalImpl {
public:
// Declarations
 __declspec(property(get=get_Provider)) ::Mono::Btls::MonoBtlsProvider*  Provider;

/// @brief Field <Provider>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Provider_k__BackingField, put=__cordl_internal_set__Provider_k__BackingField)) ::Mono::Btls::MonoBtlsProvider*  _Provider_k__BackingField;

/// @brief Method Import, addr 0x181dc58f0, size 0x20, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::System::Security::Cryptography::X509Certificates::X509Certificate*  cert) ;

/// @brief Method Import, addr 0x181dc58c0, size 0x30, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::ArrayW<uint8_t>  data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*  password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  keyStorageFlags) ;

/// @brief Method Import, addr 0x181dc5910, size 0x30, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::ArrayW<uint8_t>  data) ;

static inline ::Mono::Btls::X509PalImplBtls* New_ctor(::Mono::Security::Interface::MonoTlsProvider*  provider) ;

constexpr ::Mono::Btls::MonoBtlsProvider* const& __cordl_internal_get__Provider_k__BackingField() const;

constexpr ::Mono::Btls::MonoBtlsProvider*& __cordl_internal_get__Provider_k__BackingField() ;

constexpr void __cordl_internal_set__Provider_k__BackingField(::Mono::Btls::MonoBtlsProvider*  value) ;

/// @brief Method .ctor, addr 0x181dc5940, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::Mono::Security::Interface::MonoTlsProvider*  provider) ;

/// @brief Method get_Provider, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsProvider* get_Provider() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X509PalImplBtls() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X509PalImplBtls", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509PalImplBtls(X509PalImplBtls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509PalImplBtls", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509PalImplBtls(X509PalImplBtls const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11508};

/// @brief Field <Provider>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsProvider*  ____Provider_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::X509PalImplBtls, ____Provider_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::X509PalImplBtls) == 0x18, "Size mismatch!");

} // namespace end def Mono::Btls
