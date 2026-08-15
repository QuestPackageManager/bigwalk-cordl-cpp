#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Btls/zzzz__MonoBtlsObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsKey)
namespace Mono::Btls {
class MonoBtlsKey_BoringKeyHandle;
}
namespace System::Security::Cryptography {
class RSA;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsKey;
}
namespace Mono::Btls {
class MonoBtlsKey_BoringKeyHandle;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsKey*);
MARK_REF_T(::Mono::Btls::MonoBtlsKey_BoringKeyHandle*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsKey*, "Mono.Btls", "MonoBtlsKey");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsKey_BoringKeyHandle*, "Mono.Btls", "MonoBtlsKey/BoringKeyHandle");
// Dependencies Mono.Btls.MonoBtlsObject::MonoBtlsHandle
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsKey/BoringKeyHandle
class CORDL_TYPE MonoBtlsKey_BoringKeyHandle : public ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle {
public:
// Declarations
static inline ::Mono::Btls::MonoBtlsKey_BoringKeyHandle* New_ctor(::System::IntPtr  handle) ;

/// @brief Method ReleaseHandle, addr 0x181b3ddb0, size 0x80, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method .ctor, addr 0x181b3dda0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  handle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsKey_BoringKeyHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsKey_BoringKeyHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsKey_BoringKeyHandle(MonoBtlsKey_BoringKeyHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsKey_BoringKeyHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsKey_BoringKeyHandle(MonoBtlsKey_BoringKeyHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11458};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsKey_BoringKeyHandle) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies Mono.Btls.MonoBtlsObject
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsKey
class CORDL_TYPE MonoBtlsKey : public ::Mono::Btls::MonoBtlsObject {
public:
// Declarations
using BoringKeyHandle = ::Mono::Btls::MonoBtlsKey_BoringKeyHandle;

 __declspec(property(get=get_Handle)) ::Mono::Btls::MonoBtlsKey_BoringKeyHandle*  Handle;

/// @brief Method Copy, addr 0x181b45610, size 0x150, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsKey* Copy() ;

/// @brief Method CreateFromRSAPrivateKey, addr 0x181b45760, size 0x200, virtual false, abstract: false, final false
static inline ::Mono::Btls::MonoBtlsKey* CreateFromRSAPrivateKey(::System::Security::Cryptography::RSA*  privateKey) ;

/// @brief Method GetBytes, addr 0x181b45960, size 0x1b0, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetBytes(bool  include_private_bits) ;

static inline ::Mono::Btls::MonoBtlsKey* New_ctor(::Mono::Btls::MonoBtlsKey_BoringKeyHandle*  handle) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Mono::Btls::MonoBtlsKey_BoringKeyHandle*  handle) ;

/// @brief Method get_Handle, addr 0x181b45b10, size 0x60, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsKey_BoringKeyHandle* get_Handle() ;

/// @brief Method mono_btls_key_assign_rsa_private_key, addr 0x181b45b70, size 0xb0, virtual false, abstract: false, final false
static inline int32_t mono_btls_key_assign_rsa_private_key(::System::IntPtr  handle, ::ArrayW<uint8_t>  der, int32_t  der_length) ;

/// @brief Method mono_btls_key_free, addr 0x181b45c20, size 0x80, virtual false, abstract: false, final false
static inline void mono_btls_key_free(::System::IntPtr  handle) ;

/// @brief Method mono_btls_key_get_bytes, addr 0x181b45ca0, size 0xb0, virtual false, abstract: false, final false
static inline int32_t mono_btls_key_get_bytes(::System::IntPtr  handle, ::by_ref<::System::IntPtr>  data, ::by_ref<int32_t>  size, int32_t  include_private_bits) ;

/// @brief Method mono_btls_key_new, addr 0x181b45d50, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_key_new() ;

/// @brief Method mono_btls_key_up_ref, addr 0x181b45dc0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_key_up_ref(::System::IntPtr  handle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsKey", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsKey(MonoBtlsKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsKey", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsKey(MonoBtlsKey const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11459};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsKey) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
