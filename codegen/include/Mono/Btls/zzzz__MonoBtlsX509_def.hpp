#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Btls/zzzz__MonoBtlsObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsX509)
namespace Mono::Btls {
struct MonoBtlsX509Format;
}
namespace Mono::Btls {
class MonoBtlsX509Name;
}
namespace Mono::Btls {
struct MonoBtlsX509TrustKind;
}
namespace Mono::Btls {
class MonoBtlsX509_BoringX509Handle;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsX509;
}
namespace Mono::Btls {
class MonoBtlsX509_BoringX509Handle;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsX509*);
MARK_REF_T(::Mono::Btls::MonoBtlsX509_BoringX509Handle*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509*, "Mono.Btls", "MonoBtlsX509");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509_BoringX509Handle*, "Mono.Btls", "MonoBtlsX509/BoringX509Handle");
// Dependencies Mono.Btls.MonoBtlsObject::MonoBtlsHandle
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509/BoringX509Handle
class CORDL_TYPE MonoBtlsX509_BoringX509Handle : public ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle {
public:
// Declarations
static inline ::Mono::Btls::MonoBtlsX509_BoringX509Handle* New_ctor(::System::IntPtr  handle) ;

/// @brief Method ReleaseHandle, addr 0x181dae630, size 0x90, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method StealHandle, addr 0x181dae6c0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr StealHandle() ;

/// @brief Method .ctor, addr 0x181dae510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  handle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509_BoringX509Handle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509_BoringX509Handle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509_BoringX509Handle(MonoBtlsX509_BoringX509Handle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509_BoringX509Handle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509_BoringX509Handle(MonoBtlsX509_BoringX509Handle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11480};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsX509_BoringX509Handle) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies Mono.Btls.MonoBtlsObject
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509
class CORDL_TYPE MonoBtlsX509 : public ::Mono::Btls::MonoBtlsObject {
public:
// Declarations
using BoringX509Handle = ::Mono::Btls::MonoBtlsX509_BoringX509Handle;

 __declspec(property(get=get_Handle)) ::Mono::Btls::MonoBtlsX509_BoringX509Handle*  Handle;

/// @brief Method AddExplicitTrust, addr 0x181dbd470, size 0x110, virtual false, abstract: false, final false
inline void AddExplicitTrust(::Mono::Btls::MonoBtlsX509TrustKind  kind) ;

/// @brief Method Compare, addr 0x181dbd580, size 0x150, virtual false, abstract: false, final false
static inline int32_t Compare(::Mono::Btls::MonoBtlsX509*  a, ::Mono::Btls::MonoBtlsX509*  b) ;

/// @brief Method Copy, addr 0x181dbd6d0, size 0x140, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509* Copy() ;

/// @brief Method GetRawData, addr 0x181dbd810, size 0x1f0, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetRawData(::Mono::Btls::MonoBtlsX509Format  format) ;

/// @brief Method GetSubjectName, addr 0x181dbdbf0, size 0x140, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509Name* GetSubjectName() ;

/// @brief Method GetSubjectNameHash, addr 0x181dbda00, size 0x1f0, virtual false, abstract: false, final false
inline int64_t GetSubjectNameHash() ;

/// @brief Method LoadFromData, addr 0x181dbdd30, size 0x210, virtual false, abstract: false, final false
static inline ::Mono::Btls::MonoBtlsX509* LoadFromData(::ArrayW<uint8_t>  buffer, ::Mono::Btls::MonoBtlsX509Format  format) ;

static inline ::Mono::Btls::MonoBtlsX509* New_ctor(::Mono::Btls::MonoBtlsX509_BoringX509Handle*  handle) ;

/// @brief Method .ctor, addr 0x180544e30, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Mono::Btls::MonoBtlsX509_BoringX509Handle*  handle) ;

/// @brief Method get_Handle, addr 0x181dbdf40, size 0x50, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509_BoringX509Handle* get_Handle() ;

/// @brief Method mono_btls_x509_add_explicit_trust, addr 0x181dbdf90, size 0x90, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_add_explicit_trust(::System::IntPtr  handle, ::Mono::Btls::MonoBtlsX509TrustKind  kind) ;

/// @brief Method mono_btls_x509_cmp, addr 0x181dbe020, size 0x90, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_cmp(::System::IntPtr  a, ::System::IntPtr  b) ;

/// @brief Method mono_btls_x509_free, addr 0x181dbe0b0, size 0x80, virtual false, abstract: false, final false
static inline void mono_btls_x509_free(::System::IntPtr  handle) ;

/// @brief Method mono_btls_x509_from_data, addr 0x181dbe130, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_from_data(::System::IntPtr  data, int32_t  len, ::Mono::Btls::MonoBtlsX509Format  format) ;

/// @brief Method mono_btls_x509_get_raw_data, addr 0x181dbe1d0, size 0xa0, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_get_raw_data(::System::IntPtr  handle, ::System::IntPtr  bio, ::Mono::Btls::MonoBtlsX509Format  format) ;

/// @brief Method mono_btls_x509_get_subject_name, addr 0x181dbe270, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_get_subject_name(::System::IntPtr  handle) ;

/// @brief Method mono_btls_x509_up_ref, addr 0x181dbe2f0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_up_ref(::System::IntPtr  handle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509(MonoBtlsX509 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509(MonoBtlsX509 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11481};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsX509) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
