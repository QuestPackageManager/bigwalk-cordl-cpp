#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509LookupMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Btls/zzzz__MonoBtlsObject_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsX509LookupMono)
namespace Mono::Btls {
class MonoBtlsX509LookupMono_BoringX509LookupMonoHandle;
}
namespace Mono::Btls {
class MonoBtlsX509LookupMono_BySubjectFunc;
}
namespace Mono::Btls {
class MonoBtlsX509Lookup;
}
namespace Mono::Btls {
class MonoBtlsX509Name;
}
namespace Mono::Btls {
class MonoBtlsX509;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsX509LookupMono;
}
namespace Mono::Btls {
class MonoBtlsX509LookupMono_BoringX509LookupMonoHandle;
}
namespace Mono::Btls {
class MonoBtlsX509LookupMono_BySubjectFunc;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsX509LookupMono*);
MARK_REF_T(::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle*);
MARK_REF_T(::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509LookupMono*, "Mono.Btls", "MonoBtlsX509LookupMono");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle*, "Mono.Btls", "MonoBtlsX509LookupMono/BoringX509LookupMonoHandle");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc*, "Mono.Btls", "MonoBtlsX509LookupMono/BySubjectFunc");
// Dependencies Mono.Btls.MonoBtlsObject::MonoBtlsHandle
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509LookupMono/BoringX509LookupMonoHandle
class CORDL_TYPE MonoBtlsX509LookupMono_BoringX509LookupMonoHandle : public ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle {
public:
// Declarations
static inline ::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle* New_ctor(::System::IntPtr  handle) ;

/// @brief Method ReleaseHandle, addr 0x181dae750, size 0x80, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method .ctor, addr 0x181dae510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  handle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509LookupMono_BoringX509LookupMonoHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509LookupMono_BoringX509LookupMonoHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509LookupMono_BoringX509LookupMonoHandle(MonoBtlsX509LookupMono_BoringX509LookupMonoHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509LookupMono_BoringX509LookupMonoHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509LookupMono_BoringX509LookupMonoHandle(MonoBtlsX509LookupMono_BoringX509LookupMonoHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11489};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies System.MulticastDelegate
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509LookupMono/BySubjectFunc
class CORDL_TYPE MonoBtlsX509LookupMono_BySubjectFunc : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline int32_t Invoke(::System::IntPtr  instance, ::System::IntPtr  name, ::by_ref<::System::IntPtr>  x509_ptr) ;

static inline ::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181a47440, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509LookupMono_BySubjectFunc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509LookupMono_BySubjectFunc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509LookupMono_BySubjectFunc(MonoBtlsX509LookupMono_BySubjectFunc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509LookupMono_BySubjectFunc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509LookupMono_BySubjectFunc(MonoBtlsX509LookupMono_BySubjectFunc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11490};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc) == 0x80, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies Mono.Btls.MonoBtlsObject, System.IntPtr, System.Runtime.InteropServices.GCHandle
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509LookupMono
class CORDL_TYPE MonoBtlsX509LookupMono : public ::Mono::Btls::MonoBtlsObject {
public:
// Declarations
using BoringX509LookupMonoHandle = ::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle;

using BySubjectFunc = ::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc;

 __declspec(property(get=get_Handle)) ::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle*  Handle;

/// @brief Field bySubjectFunc, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bySubjectFunc, put=__cordl_internal_set_bySubjectFunc)) ::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc*  bySubjectFunc;

/// @brief Field bySubjectFuncPtr, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_bySubjectFuncPtr, put=__cordl_internal_set_bySubjectFuncPtr)) ::System::IntPtr  bySubjectFuncPtr;

/// @brief Field gch, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gch, put=__cordl_internal_set_gch)) ::System::Runtime::InteropServices::GCHandle  gch;

/// @brief Field instance, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_instance, put=__cordl_internal_set_instance)) ::System::IntPtr  instance;

/// @brief Field lookup, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookup, put=__cordl_internal_set_lookup)) ::Mono::Btls::MonoBtlsX509Lookup*  lookup;

/// @brief Method AddCertificate, addr 0x181db83a0, size 0x180, virtual false, abstract: false, final false
inline void AddCertificate(::Mono::Btls::MonoBtlsX509*  certificate) ;

/// @brief Method Close, addr 0x181db8520, size 0x80, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Install, addr 0x181db85a0, size 0x30, virtual false, abstract: false, final false
inline void Install(::Mono::Btls::MonoBtlsX509Lookup*  lookup) ;

static inline ::Mono::Btls::MonoBtlsX509LookupMono* New_ctor() ;

/// @brief Method OnGetBySubject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509* OnGetBySubject(::Mono::Btls::MonoBtlsX509Name*  name) ;

/// @brief Method OnGetBySubject, addr 0x181db85d0, size 0x280, virtual false, abstract: false, final false
static inline int32_t OnGetBySubject(::System::IntPtr  instance, ::System::IntPtr  name_ptr, ::by_ref<::System::IntPtr>  x509_ptr) ;

constexpr ::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc* const& __cordl_internal_get_bySubjectFunc() const;

constexpr ::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc*& __cordl_internal_get_bySubjectFunc() ;

constexpr ::System::IntPtr const& __cordl_internal_get_bySubjectFuncPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_bySubjectFuncPtr() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_gch() const;

constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_gch() ;

constexpr ::System::IntPtr const& __cordl_internal_get_instance() const;

constexpr ::System::IntPtr& __cordl_internal_get_instance() ;

constexpr ::Mono::Btls::MonoBtlsX509Lookup* const& __cordl_internal_get_lookup() const;

constexpr ::Mono::Btls::MonoBtlsX509Lookup*& __cordl_internal_get_lookup() ;

constexpr void __cordl_internal_set_bySubjectFunc(::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc*  value) ;

constexpr void __cordl_internal_set_bySubjectFuncPtr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_gch(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr void __cordl_internal_set_instance(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_lookup(::Mono::Btls::MonoBtlsX509Lookup*  value) ;

/// @brief Method .ctor, addr 0x181db8850, size 0x260, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Handle, addr 0x181db8ab0, size 0x50, virtual false, abstract: false, final false
inline ::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle* get_Handle() ;

/// @brief Method mono_btls_x509_lookup_mono_free, addr 0x181db8b00, size 0x80, virtual false, abstract: false, final false
static inline int32_t mono_btls_x509_lookup_mono_free(::System::IntPtr  handle) ;

/// @brief Method mono_btls_x509_lookup_mono_init, addr 0x181db8b80, size 0xa0, virtual false, abstract: false, final false
static inline void mono_btls_x509_lookup_mono_init(::System::IntPtr  handle, ::System::IntPtr  instance, ::System::IntPtr  by_subject_func) ;

/// @brief Method mono_btls_x509_lookup_mono_new, addr 0x181db8c20, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_x509_lookup_mono_new() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509LookupMono() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509LookupMono", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509LookupMono(MonoBtlsX509LookupMono && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509LookupMono", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509LookupMono(MonoBtlsX509LookupMono const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11491};

/// @brief Field gch, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  ___gch;

/// @brief Field instance, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  ___instance;

/// @brief Field bySubjectFunc, offset: 0x30, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc*  ___bySubjectFunc;

/// @brief Field bySubjectFuncPtr, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  ___bySubjectFuncPtr;

/// @brief Field lookup, offset: 0x40, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsX509Lookup*  ___lookup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsX509LookupMono, ___gch) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsX509LookupMono, ___instance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsX509LookupMono, ___bySubjectFunc) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsX509LookupMono, ___bySubjectFuncPtr) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsX509LookupMono, ___lookup) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsX509LookupMono) == 0x48, "Size mismatch!");

} // namespace end def Mono::Btls
