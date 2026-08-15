#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509Chain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Btls/zzzz__MonoBtlsObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsX509Chain)
namespace Mono::Btls {
class MonoBtlsX509Chain_BoringX509ChainHandle;
}
namespace Mono::Btls {
class MonoBtlsX509;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsX509Chain;
}
namespace Mono::Btls {
class MonoBtlsX509Chain_BoringX509ChainHandle;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsX509Chain*);
MARK_REF_T(::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509Chain*, "Mono.Btls", "MonoBtlsX509Chain");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle*, "Mono.Btls", "MonoBtlsX509Chain/BoringX509ChainHandle");
// Dependencies Mono.Btls.MonoBtlsObject::MonoBtlsHandle
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509Chain/BoringX509ChainHandle
class CORDL_TYPE MonoBtlsX509Chain_BoringX509ChainHandle : public ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle {
public:
// Declarations
static inline ::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle* New_ctor(::System::IntPtr  handle) ;

/// @brief Method ReleaseHandle, addr 0x181dae5b0, size 0x80, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method .ctor, addr 0x181dae510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  handle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509Chain_BoringX509ChainHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509Chain_BoringX509ChainHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509Chain_BoringX509ChainHandle(MonoBtlsX509Chain_BoringX509ChainHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509Chain_BoringX509ChainHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509Chain_BoringX509ChainHandle(MonoBtlsX509Chain_BoringX509ChainHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11482};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies Mono.Btls.MonoBtlsObject
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509Chain
class CORDL_TYPE MonoBtlsX509Chain : public ::Mono::Btls::MonoBtlsObject {
public:
// Declarations
using BoringX509ChainHandle = ::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Handle)) ::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle*  Handle;

/// @brief Method AddCertificate, addr 0x181db75d0, size 0x140, virtual false, abstract: false, final false
inline void AddCertificate(::Mono::Btls::MonoBtlsX509*  x509) ;

/// @brief Method Copy, addr 0x181db7710, size 0x140, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509Chain* Copy() ;

/// @brief Method GetCertificate, addr 0x181db7850, size 0x160, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509* GetCertificate(int32_t  index) ;

static inline ::Mono::Btls::MonoBtlsX509Chain* New_ctor() ;

static inline ::Mono::Btls::MonoBtlsX509Chain* New_ctor(::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle*  handle) ;

/// @brief Method .ctor, addr 0x181db79b0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x180544e30, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle*  handle) ;

/// @brief Method get_Count, addr 0x181db7a60, size 0xe0, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Handle, addr 0x181db7b40, size 0x50, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle* get_Handle() ;

/// @brief Method mono_btls_x509_chain_add_cert, addr 0x181db7b90, size 0x90, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_chain_add_cert(::System::IntPtr  chain, ::System::IntPtr  x509) ;

/// @brief Method mono_btls_x509_chain_free, addr 0x181db7c20, size 0x80, virtual false, abstract: false, final false
static inline void mono_btls_x509_chain_free(::System::IntPtr  handle) ;

/// @brief Method mono_btls_x509_chain_get_cert, addr 0x181db7ca0, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_chain_get_cert(::System::IntPtr  Handle, int32_t  index) ;

/// @brief Method mono_btls_x509_chain_get_count, addr 0x181db7d30, size 0x80, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_chain_get_count(::System::IntPtr  handle) ;

/// @brief Method mono_btls_x509_chain_new, addr 0x181db7db0, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_chain_new() ;

/// @brief Method mono_btls_x509_chain_up_ref, addr 0x181db7e20, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_chain_up_ref(::System::IntPtr  handle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509Chain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509Chain", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509Chain(MonoBtlsX509Chain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509Chain", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509Chain(MonoBtlsX509Chain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11483};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsX509Chain) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
