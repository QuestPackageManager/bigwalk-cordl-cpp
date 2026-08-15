#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509Lookup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Btls/zzzz__MonoBtlsObject_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509LookupType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsX509Lookup)
namespace Mono::Btls {
struct MonoBtlsX509FileType;
}
namespace Mono::Btls {
class MonoBtlsX509LookupMono;
}
namespace Mono::Btls {
struct MonoBtlsX509LookupType;
}
namespace Mono::Btls {
class MonoBtlsX509Lookup_BoringX509LookupHandle;
}
namespace Mono::Btls {
class MonoBtlsX509Store;
}
namespace Mono::Btls {
class MonoBtlsX509;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsX509Lookup;
}
namespace Mono::Btls {
class MonoBtlsX509Lookup_BoringX509LookupHandle;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsX509Lookup*);
MARK_REF_T(::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509Lookup*, "Mono.Btls", "MonoBtlsX509Lookup");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle*, "Mono.Btls", "MonoBtlsX509Lookup/BoringX509LookupHandle");
// Dependencies Mono.Btls.MonoBtlsObject::MonoBtlsHandle
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509Lookup/BoringX509LookupHandle
class CORDL_TYPE MonoBtlsX509Lookup_BoringX509LookupHandle : public ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle {
public:
// Declarations
static inline ::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle* New_ctor(::System::IntPtr  handle) ;

/// @brief Method ReleaseHandle, addr 0x181dae6d0, size 0x80, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method .ctor, addr 0x181dae510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  handle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509Lookup_BoringX509LookupHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509Lookup_BoringX509LookupHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509Lookup_BoringX509LookupHandle(MonoBtlsX509Lookup_BoringX509LookupHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509Lookup_BoringX509LookupHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509Lookup_BoringX509LookupHandle(MonoBtlsX509Lookup_BoringX509LookupHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11487};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies Mono.Btls.MonoBtlsObject, Mono.Btls.MonoBtlsX509LookupType
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509Lookup
class CORDL_TYPE MonoBtlsX509Lookup : public ::Mono::Btls::MonoBtlsObject {
public:
// Declarations
using BoringX509LookupHandle = ::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle;

 __declspec(property(get=get_Handle)) ::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle*  Handle;

/// @brief Field monoLookups, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_monoLookups, put=__cordl_internal_set_monoLookups)) ::System::Collections::Generic::List_1<::Mono::Btls::MonoBtlsX509LookupMono*>*  monoLookups;

/// @brief Field store, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_store, put=__cordl_internal_set_store)) ::Mono::Btls::MonoBtlsX509Store*  store;

/// @brief Field type, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::Mono::Btls::MonoBtlsX509LookupType  type;

/// @brief Method AddCertificate, addr 0x181db8c90, size 0x170, virtual false, abstract: false, final false
inline void AddCertificate(::Mono::Btls::MonoBtlsX509*  certificate) ;

/// @brief Method AddDirectory, addr 0x181db8e00, size 0x190, virtual false, abstract: false, final false
inline void AddDirectory(::StringW  dir, ::Mono::Btls::MonoBtlsX509FileType  type) ;

/// @brief Method AddMono, addr 0x181db8f90, size 0x240, virtual false, abstract: false, final false
inline void AddMono(::Mono::Btls::MonoBtlsX509LookupMono*  monoLookup) ;

/// @brief Method Close, addr 0x181db91d0, size 0xa0, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Create_internal, addr 0x181db9270, size 0x140, virtual false, abstract: false, final false
static inline ::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle* Create_internal(::Mono::Btls::MonoBtlsX509Store*  store, ::Mono::Btls::MonoBtlsX509LookupType  type) ;

/// @brief Method GetNativeLookup, addr 0x181db93b0, size 0xe0, virtual false, abstract: false, final false
inline ::System::IntPtr GetNativeLookup() ;

static inline ::Mono::Btls::MonoBtlsX509Lookup* New_ctor(::Mono::Btls::MonoBtlsX509Store*  store, ::Mono::Btls::MonoBtlsX509LookupType  type) ;

constexpr ::System::Collections::Generic::List_1<::Mono::Btls::MonoBtlsX509LookupMono*>* const& __cordl_internal_get_monoLookups() const;

constexpr ::System::Collections::Generic::List_1<::Mono::Btls::MonoBtlsX509LookupMono*>*& __cordl_internal_get_monoLookups() ;

constexpr ::Mono::Btls::MonoBtlsX509Store* const& __cordl_internal_get_store() const;

constexpr ::Mono::Btls::MonoBtlsX509Store*& __cordl_internal_get_store() ;

constexpr ::Mono::Btls::MonoBtlsX509LookupType const& __cordl_internal_get_type() const;

constexpr ::Mono::Btls::MonoBtlsX509LookupType& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_monoLookups(::System::Collections::Generic::List_1<::Mono::Btls::MonoBtlsX509LookupMono*>*  value) ;

constexpr void __cordl_internal_set_store(::Mono::Btls::MonoBtlsX509Store*  value) ;

constexpr void __cordl_internal_set_type(::Mono::Btls::MonoBtlsX509LookupType  value) ;

/// @brief Method .ctor, addr 0x181db9490, size 0x190, virtual false, abstract: false, final false
inline void _ctor(::Mono::Btls::MonoBtlsX509Store*  store, ::Mono::Btls::MonoBtlsX509LookupType  type) ;

/// @brief Method get_Handle, addr 0x181db9620, size 0x50, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle* get_Handle() ;

/// @brief Method mono_btls_x509_lookup_add_dir, addr 0x181db9670, size 0xa0, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_lookup_add_dir(::System::IntPtr  handle, ::System::IntPtr  dir, ::Mono::Btls::MonoBtlsX509FileType  type) ;

/// @brief Method mono_btls_x509_lookup_add_mono, addr 0x181db9710, size 0x90, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_lookup_add_mono(::System::IntPtr  handle, ::System::IntPtr  monoLookup) ;

/// @brief Method mono_btls_x509_lookup_free, addr 0x181db97a0, size 0x80, virtual false, abstract: false, final false
static inline void mono_btls_x509_lookup_free(::System::IntPtr  handle) ;

/// @brief Method mono_btls_x509_lookup_new, addr 0x181db9820, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_lookup_new(::System::IntPtr  store, ::Mono::Btls::MonoBtlsX509LookupType  type) ;

/// @brief Method mono_btls_x509_lookup_peek_lookup, addr 0x181db98b0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_lookup_peek_lookup(::System::IntPtr  handle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509Lookup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509Lookup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509Lookup(MonoBtlsX509Lookup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509Lookup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509Lookup(MonoBtlsX509Lookup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11488};

/// @brief Field store, offset: 0x20, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsX509Store*  ___store;

/// @brief Field type, offset: 0x28, size: 0x4, def value: None
 ::Mono::Btls::MonoBtlsX509LookupType  ___type;

/// @brief Field monoLookups, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Mono::Btls::MonoBtlsX509LookupMono*>*  ___monoLookups;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsX509Lookup, ___store) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsX509Lookup, ___type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsX509Lookup, ___monoLookups) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsX509Lookup) == 0x38, "Size mismatch!");

} // namespace end def Mono::Btls
