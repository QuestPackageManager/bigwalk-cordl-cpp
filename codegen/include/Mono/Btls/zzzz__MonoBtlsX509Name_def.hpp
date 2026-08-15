#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509Name.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Btls/zzzz__MonoBtlsObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsX509Name)
namespace Mono::Btls {
struct MonoBtlsX509NameEntryType;
}
namespace Mono::Btls {
class MonoBtlsX509Name_BoringX509NameHandle;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsX509Name;
}
namespace Mono::Btls {
class MonoBtlsX509Name_BoringX509NameHandle;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsX509Name*);
MARK_REF_T(::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509Name*, "Mono.Btls", "MonoBtlsX509Name");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle*, "Mono.Btls", "MonoBtlsX509Name/BoringX509NameHandle");
// Dependencies Mono.Btls.MonoBtlsObject::MonoBtlsHandle
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509Name/BoringX509NameHandle
class CORDL_TYPE MonoBtlsX509Name_BoringX509NameHandle : public ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle {
public:
// Declarations
/// @brief Field dontFree, offset 0x1e, size 0x1 
 __declspec(property(get=__cordl_internal_get_dontFree, put=__cordl_internal_set_dontFree)) bool  dontFree;

static inline ::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle* New_ctor(::System::IntPtr  handle, bool  ownsHandle) ;

/// @brief Method ReleaseHandle, addr 0x181dae7d0, size 0x90, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

constexpr bool const& __cordl_internal_get_dontFree() const;

constexpr bool& __cordl_internal_get_dontFree() ;

constexpr void __cordl_internal_set_dontFree(bool  value) ;

/// @brief Method .ctor, addr 0x181dae860, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  handle, bool  ownsHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509Name_BoringX509NameHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509Name_BoringX509NameHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509Name_BoringX509NameHandle(MonoBtlsX509Name_BoringX509NameHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509Name_BoringX509NameHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509Name_BoringX509NameHandle(MonoBtlsX509Name_BoringX509NameHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11494};

/// @brief Field dontFree, offset: 0x1e, size: 0x1, def value: None
 bool  ___dontFree;

/// @brief Size padding 0x28 - 0x20 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle, ___dontFree) == 0x1e, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle) == 0x28, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies Mono.Btls.MonoBtlsObject
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509Name
class CORDL_TYPE MonoBtlsX509Name : public ::Mono::Btls::MonoBtlsObject {
public:
// Declarations
using BoringX509NameHandle = ::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle;

 __declspec(property(get=get_Handle)) ::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle*  Handle;

/// @brief Method CreateFromData, addr 0x181db9930, size 0x150, virtual false, abstract: false, final false
static inline ::Mono::Btls::MonoBtlsX509Name* CreateFromData(::ArrayW<uint8_t>  data, bool  use_canon_enc) ;

/// @brief Method GetEntryCount, addr 0x181db9a80, size 0xe0, virtual false, abstract: false, final false
inline int32_t GetEntryCount() ;

/// @brief Method GetEntryOid, addr 0x181db9cb0, size 0x1c0, virtual false, abstract: false, final false
inline ::StringW GetEntryOid(int32_t  index) ;

/// @brief Method GetEntryOidData, addr 0x181db9b60, size 0x150, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetEntryOidData(int32_t  index) ;

/// @brief Method GetEntryType, addr 0x181db9e70, size 0x100, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509NameEntryType GetEntryType(int32_t  index) ;

/// @brief Method GetEntryValue, addr 0x181db9f70, size 0x1e0, virtual false, abstract: false, final false
inline ::StringW GetEntryValue(int32_t  index, ::by_ref<int32_t>  tag) ;

/// @brief Method GetHash, addr 0x181dba150, size 0xe0, virtual false, abstract: false, final false
inline int64_t GetHash() ;

static inline ::Mono::Btls::MonoBtlsX509Name* New_ctor(::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle*  handle) ;

/// @brief Method .ctor, addr 0x180544e30, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle*  handle) ;

/// @brief Method get_Handle, addr 0x181dba230, size 0x50, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle* get_Handle() ;

/// @brief Method mono_btls_x509_name_free, addr 0x181dba280, size 0x80, virtual false, abstract: false, final false
static inline void mono_btls_x509_name_free(::System::IntPtr  handle) ;

/// @brief Method mono_btls_x509_name_from_data, addr 0x181dba300, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_name_from_data(void*  data, int32_t  len, int32_t  use_canon_enc) ;

/// @brief Method mono_btls_x509_name_get_entry_count, addr 0x181dba3a0, size 0x80, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_name_get_entry_count(::System::IntPtr  handle) ;

/// @brief Method mono_btls_x509_name_get_entry_oid, addr 0x181dba4c0, size 0xa0, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_name_get_entry_oid(::System::IntPtr  name, int32_t  index, ::System::IntPtr  buffer, int32_t  size) ;

/// @brief Method mono_btls_x509_name_get_entry_oid_data, addr 0x181dba420, size 0xa0, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_name_get_entry_oid_data(::System::IntPtr  name, int32_t  index, ::by_ref<::System::IntPtr>  data) ;

/// @brief Method mono_btls_x509_name_get_entry_type, addr 0x181dba560, size 0x90, virtual false, abstract: false, final false
static inline ::Mono::Btls::MonoBtlsX509NameEntryType mono_btls_x509_name_get_entry_type(::System::IntPtr  name, int32_t  index) ;

/// @brief Method mono_btls_x509_name_get_entry_value, addr 0x181dba5f0, size 0xa0, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_name_get_entry_value(::System::IntPtr  name, int32_t  index, ::by_ref<int32_t>  tag, ::by_ref<::System::IntPtr>  str) ;

/// @brief Method mono_btls_x509_name_hash, addr 0x181dba690, size 0x80, virtual false, abstract: false, final false
static inline int64_t mono_btls_x509_name_hash(::System::IntPtr  handle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509Name() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509Name", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509Name(MonoBtlsX509Name && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509Name", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509Name(MonoBtlsX509Name const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11495};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsX509Name) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
