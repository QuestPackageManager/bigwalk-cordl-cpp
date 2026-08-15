#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsBio.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Btls/zzzz__MonoBtlsObject_def.hpp"
CORDL_MODULE_EXPORT(MonoBtlsBio)
namespace Mono::Btls {
class MonoBtlsBio_BoringBioHandle;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsBio;
}
namespace Mono::Btls {
class MonoBtlsBio_BoringBioHandle;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsBio*);
MARK_REF_T(::Mono::Btls::MonoBtlsBio_BoringBioHandle*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsBio*, "Mono.Btls", "MonoBtlsBio");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsBio_BoringBioHandle*, "Mono.Btls", "MonoBtlsBio/BoringBioHandle");
// Dependencies Mono.Btls.MonoBtlsObject::MonoBtlsHandle
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsBio/BoringBioHandle
class CORDL_TYPE MonoBtlsBio_BoringBioHandle : public ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle {
public:
// Declarations
static inline ::Mono::Btls::MonoBtlsBio_BoringBioHandle* New_ctor(::System::IntPtr  handle) ;

/// @brief Method ReleaseHandle, addr 0x181b3dd00, size 0xa0, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method .ctor, addr 0x181b3dda0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  handle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsBio_BoringBioHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsBio_BoringBioHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsBio_BoringBioHandle(MonoBtlsBio_BoringBioHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsBio_BoringBioHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsBio_BoringBioHandle(MonoBtlsBio_BoringBioHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11446};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsBio_BoringBioHandle) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies Mono.Btls.MonoBtlsObject
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsBio
class CORDL_TYPE MonoBtlsBio : public ::Mono::Btls::MonoBtlsObject {
public:
// Declarations
using BoringBioHandle = ::Mono::Btls::MonoBtlsBio_BoringBioHandle;

 __declspec(property(get=get_Handle)) ::Mono::Btls::MonoBtlsBio_BoringBioHandle*  Handle;

static inline ::Mono::Btls::MonoBtlsBio* New_ctor(::Mono::Btls::MonoBtlsBio_BoringBioHandle*  handle) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Mono::Btls::MonoBtlsBio_BoringBioHandle*  handle) ;

/// @brief Method get_Handle, addr 0x181b432e0, size 0x60, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsBio_BoringBioHandle* get_Handle() ;

/// @brief Method mono_btls_bio_free, addr 0x181b43340, size 0x80, virtual false, abstract: false, final false
static inline void mono_btls_bio_free(::System::IntPtr  handle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsBio() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsBio", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsBio(MonoBtlsBio && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsBio", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsBio(MonoBtlsBio const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11447};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsBio) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
