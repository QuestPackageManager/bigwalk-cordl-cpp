#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509VerifyParam.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Btls/zzzz__MonoBtlsObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsX509VerifyParam)
namespace Mono::Btls {
class MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle;
}
namespace System {
struct DateTime;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsX509VerifyParam;
}
namespace Mono::Btls {
class MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsX509VerifyParam*);
MARK_REF_T(::Mono::Btls::MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509VerifyParam*, "Mono.Btls", "MonoBtlsX509VerifyParam");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle*, "Mono.Btls", "MonoBtlsX509VerifyParam/BoringX509VerifyParamHandle");
// Dependencies Mono.Btls.MonoBtlsObject::MonoBtlsHandle
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509VerifyParam/BoringX509VerifyParamHandle
class CORDL_TYPE MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle : public ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle {
public:
// Declarations
static inline ::Mono::Btls::MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle* New_ctor(::System::IntPtr  handle) ;

/// @brief Method ReleaseHandle, addr 0x181dae9a0, size 0x80, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method .ctor, addr 0x181dae510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  handle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle(MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle(MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11504};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies Mono.Btls.MonoBtlsObject
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509VerifyParam
class CORDL_TYPE MonoBtlsX509VerifyParam : public ::Mono::Btls::MonoBtlsObject {
public:
// Declarations
using BoringX509VerifyParamHandle = ::Mono::Btls::MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle;

 __declspec(property(get=get_CanModify)) bool  CanModify;

 __declspec(property(get=get_Handle)) ::Mono::Btls::MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle*  Handle;

/// @brief Method Copy, addr 0x181dbc860, size 0x140, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509VerifyParam* Copy() ;

/// @brief Method GetSslClient, addr 0x181dbc9a0, size 0x20, virtual false, abstract: false, final false
static inline ::Mono::Btls::MonoBtlsX509VerifyParam* GetSslClient() ;

/// @brief Method GetSslServer, addr 0x181dbc9c0, size 0x20, virtual false, abstract: false, final false
static inline ::Mono::Btls::MonoBtlsX509VerifyParam* GetSslServer() ;

/// @brief Method Lookup, addr 0x181dbc9e0, size 0x1e0, virtual false, abstract: false, final false
static inline ::Mono::Btls::MonoBtlsX509VerifyParam* Lookup(::StringW  name, bool  fail) ;

static inline ::Mono::Btls::MonoBtlsX509VerifyParam* New_ctor(::Mono::Btls::MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle*  handle) ;

/// @brief Method SetHost, addr 0x181dbcbc0, size 0x1a0, virtual false, abstract: false, final false
inline void SetHost(::StringW  name) ;

/// @brief Method SetTime, addr 0x181dbcd60, size 0x190, virtual false, abstract: false, final false
inline void SetTime(::System::DateTime  time) ;

/// @brief Method WantToModify, addr 0x181dbcef0, size 0x120, virtual false, abstract: false, final false
inline void WantToModify() ;

/// @brief Method .ctor, addr 0x180544e30, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Mono::Btls::MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle*  handle) ;

/// @brief Method get_CanModify, addr 0x181dbd010, size 0xe0, virtual false, abstract: false, final false
inline bool get_CanModify() ;

/// @brief Method get_Handle, addr 0x181dbd0f0, size 0x50, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509VerifyParam_BoringX509VerifyParamHandle* get_Handle() ;

/// @brief Method mono_btls_x509_verify_param_can_modify, addr 0x181dbd140, size 0x80, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_verify_param_can_modify(::System::IntPtr  param) ;

/// @brief Method mono_btls_x509_verify_param_copy, addr 0x181dbd1c0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_verify_param_copy(::System::IntPtr  handle) ;

/// @brief Method mono_btls_x509_verify_param_free, addr 0x181dbd240, size 0x80, virtual false, abstract: false, final false
static inline void mono_btls_x509_verify_param_free(::System::IntPtr  handle) ;

/// @brief Method mono_btls_x509_verify_param_lookup, addr 0x181dbd2c0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_verify_param_lookup(::System::IntPtr  name) ;

/// @brief Method mono_btls_x509_verify_param_set_host, addr 0x181dbd340, size 0xa0, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_verify_param_set_host(::System::IntPtr  handle, ::System::IntPtr  name, int32_t  namelen) ;

/// @brief Method mono_btls_x509_verify_param_set_time, addr 0x181dbd3e0, size 0x90, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_verify_param_set_time(::System::IntPtr  handle, int64_t  time) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509VerifyParam() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509VerifyParam", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509VerifyParam(MonoBtlsX509VerifyParam && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509VerifyParam", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509VerifyParam(MonoBtlsX509VerifyParam const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11505};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsX509VerifyParam) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
