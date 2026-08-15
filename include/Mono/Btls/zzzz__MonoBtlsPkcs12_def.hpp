#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsPkcs12.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Btls/zzzz__MonoBtlsObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsPkcs12)
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
namespace Mono::Btls {
class MonoBtlsKey;
}
namespace Mono::Btls {
class MonoBtlsPkcs12_BoringPkcs12Handle;
}
namespace Mono::Btls {
class MonoBtlsX509;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsPkcs12;
}
namespace Mono::Btls {
class MonoBtlsPkcs12_BoringPkcs12Handle;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsPkcs12*);
MARK_REF_T(::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsPkcs12*, "Mono.Btls", "MonoBtlsPkcs12");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle*, "Mono.Btls", "MonoBtlsPkcs12/BoringPkcs12Handle");
// Dependencies Mono.Btls.MonoBtlsObject::MonoBtlsHandle
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsPkcs12/BoringPkcs12Handle
class CORDL_TYPE MonoBtlsPkcs12_BoringPkcs12Handle : public ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle {
public:
// Declarations
static inline ::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle* New_ctor(::System::IntPtr  handle) ;

/// @brief Method ReleaseHandle, addr 0x181b3de30, size 0x80, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method .ctor, addr 0x181b3dda0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  handle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsPkcs12_BoringPkcs12Handle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsPkcs12_BoringPkcs12Handle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsPkcs12_BoringPkcs12Handle(MonoBtlsPkcs12_BoringPkcs12Handle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsPkcs12_BoringPkcs12Handle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsPkcs12_BoringPkcs12Handle(MonoBtlsPkcs12_BoringPkcs12Handle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11462};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies Mono.Btls.MonoBtlsObject
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsPkcs12
class CORDL_TYPE MonoBtlsPkcs12 : public ::Mono::Btls::MonoBtlsObject {
public:
// Declarations
using BoringPkcs12Handle = ::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Handle)) ::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle*  Handle;

 __declspec(property(get=get_HasPrivateKey)) bool  HasPrivateKey;

/// @brief Field privateKey, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_privateKey, put=__cordl_internal_set_privateKey)) ::Mono::Btls::MonoBtlsKey*  privateKey;

/// @brief Method GetCertificate, addr 0x181b464d0, size 0x220, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509* GetCertificate(int32_t  index) ;

/// @brief Method GetPrivateKey, addr 0x181b466f0, size 0x230, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsKey* GetPrivateKey() ;

/// @brief Method Import, addr 0x181b46920, size 0x180, virtual false, abstract: false, final false
inline void Import(::ArrayW<uint8_t>  buffer, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*  password) ;

static inline ::Mono::Btls::MonoBtlsPkcs12* New_ctor() ;

constexpr ::Mono::Btls::MonoBtlsKey* const& __cordl_internal_get_privateKey() const;

constexpr ::Mono::Btls::MonoBtlsKey*& __cordl_internal_get_privateKey() ;

constexpr void __cordl_internal_set_privateKey(::Mono::Btls::MonoBtlsKey*  value) ;

/// @brief Method .ctor, addr 0x181b46aa0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x181b46b50, size 0xd0, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Handle, addr 0x181b46c20, size 0x60, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle* get_Handle() ;

/// @brief Method get_HasPrivateKey, addr 0x181b46c80, size 0xe0, virtual false, abstract: false, final false
inline bool get_HasPrivateKey() ;

/// @brief Method mono_btls_pkcs12_free, addr 0x181b46d60, size 0x80, virtual false, abstract: false, final false
static inline void mono_btls_pkcs12_free(::System::IntPtr  handle) ;

/// @brief Method mono_btls_pkcs12_get_cert, addr 0x181b46de0, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_pkcs12_get_cert(::System::IntPtr  Handle, int32_t  index) ;

/// @brief Method mono_btls_pkcs12_get_count, addr 0x181b46e70, size 0x80, virtual false, abstract: false, final false
static inline int32_t mono_btls_pkcs12_get_count(::System::IntPtr  handle) ;

/// @brief Method mono_btls_pkcs12_get_private_key, addr 0x181b46ef0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_pkcs12_get_private_key(::System::IntPtr  pkcs12) ;

/// @brief Method mono_btls_pkcs12_has_private_key, addr 0x181b46f70, size 0x80, virtual false, abstract: false, final false
static inline int32_t mono_btls_pkcs12_has_private_key(::System::IntPtr  pkcs12) ;

/// @brief Method mono_btls_pkcs12_import, addr 0x181b46ff0, size 0xf0, virtual false, abstract: false, final false
static inline int32_t mono_btls_pkcs12_import(::System::IntPtr  chain, void*  data, int32_t  len, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*  password) ;

/// @brief Method mono_btls_pkcs12_new, addr 0x181b470e0, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_pkcs12_new() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsPkcs12() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsPkcs12", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsPkcs12(MonoBtlsPkcs12 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsPkcs12", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsPkcs12(MonoBtlsPkcs12 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11463};

/// @brief Field privateKey, offset: 0x20, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsKey*  ___privateKey;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsPkcs12, ___privateKey) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsPkcs12) == 0x28, "Size mismatch!");

} // namespace end def Mono::Btls
