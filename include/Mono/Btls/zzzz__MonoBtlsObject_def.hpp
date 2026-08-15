#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsObject)
namespace Mono::Btls {
class MonoBtlsObject_MonoBtlsHandle;
}
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsObject;
}
namespace Mono::Btls {
class MonoBtlsObject_MonoBtlsHandle;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsObject*);
MARK_REF_T(::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsObject*, "Mono.Btls", "MonoBtlsObject");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*, "Mono.Btls", "MonoBtlsObject/MonoBtlsHandle");
// Dependencies System.Runtime.InteropServices.SafeHandle
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsObject/MonoBtlsHandle
class CORDL_TYPE MonoBtlsObject_MonoBtlsHandle : public ::System::Runtime::InteropServices::SafeHandle {
public:
// Declarations
 __declspec(property(get=get_IsInvalid)) bool  IsInvalid;

static inline ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle* New_ctor(::System::IntPtr  handle, bool  ownsHandle) ;

/// @brief Method .ctor, addr 0x181b45600, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  handle, bool  ownsHandle) ;

/// @brief Method get_IsInvalid, addr 0x180537380, size 0x60, virtual true, abstract: false, final false
inline bool get_IsInvalid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsObject_MonoBtlsHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsObject_MonoBtlsHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsObject_MonoBtlsHandle(MonoBtlsObject_MonoBtlsHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsObject_MonoBtlsHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsObject_MonoBtlsHandle(MonoBtlsObject_MonoBtlsHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11460};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsObject_MonoBtlsHandle) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies System.Object
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsObject
class CORDL_TYPE MonoBtlsObject : public ::System::Object {
public:
// Declarations
using MonoBtlsHandle = ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle;

 __declspec(property(get=get_Handle)) ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*  Handle;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field handle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_handle, put=__cordl_internal_set_handle)) ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*  handle;

/// @brief Field lastError, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastError, put=__cordl_internal_set_lastError)) ::System::Exception*  lastError;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CheckError, addr 0x181b45e40, size 0x170, virtual false, abstract: false, final false
inline void CheckError(bool  ok, ::StringW  callerName) ;

/// @brief Method CheckError, addr 0x181b45fb0, size 0x10, virtual false, abstract: false, final false
inline void CheckError(int32_t  ret, ::StringW  callerName) ;

/// @brief Method CheckLastError, addr 0x181b45fc0, size 0x1e0, virtual false, abstract: false, final false
inline void CheckLastError(::StringW  callerName) ;

/// @brief Method CheckThrow, addr 0x181b461a0, size 0x90, virtual false, abstract: false, final false
inline void CheckThrow() ;

/// @brief Method Close, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Dispose, addr 0x181b462f0, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x181b46230, size 0xc0, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x181b46320, size 0x20, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method FreeDataPtr, addr 0x181b46340, size 0x80, virtual false, abstract: false, final false
inline void FreeDataPtr(::System::IntPtr  data) ;

static inline ::Mono::Btls::MonoBtlsObject* New_ctor(::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*  handle) ;

/// @brief Method SetException, addr 0x181b463c0, size 0x30, virtual false, abstract: false, final false
inline ::System::Exception* SetException(::System::Exception*  ex) ;

constexpr ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle* const& __cordl_internal_get_handle() const;

constexpr ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*& __cordl_internal_get_handle() ;

constexpr ::System::Exception* const& __cordl_internal_get_lastError() const;

constexpr ::System::Exception*& __cordl_internal_get_lastError() ;

constexpr void __cordl_internal_set_handle(::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*  value) ;

constexpr void __cordl_internal_set_lastError(::System::Exception*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*  handle) ;

/// @brief Method get_Handle, addr 0x181b463f0, size 0x20, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle* get_Handle() ;

/// @brief Method get_IsValid, addr 0x181b46410, size 0x40, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method mono_btls_free, addr 0x181b46450, size 0x80, virtual false, abstract: false, final false
static inline void mono_btls_free(::System::IntPtr  data) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsObject(MonoBtlsObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsObject(MonoBtlsObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11461};

/// @brief Field handle, offset: 0x10, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*  ___handle;

/// @brief Field lastError, offset: 0x18, size: 0x8, def value: None
 ::System::Exception*  ___lastError;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsObject, ___handle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsObject, ___lastError) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsObject) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
