#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsBioMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Btls/zzzz__MonoBtlsBio_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsBioMono)
namespace Mono::Btls {
class IMonoBtlsBioMono;
}
namespace Mono::Btls {
class MonoBtlsBioMono_BioControlFunc;
}
namespace Mono::Btls {
class MonoBtlsBioMono_BioReadFunc;
}
namespace Mono::Btls {
class MonoBtlsBioMono_BioWriteFunc;
}
namespace Mono::Btls {
struct MonoBtlsBioMono_ControlCommand;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Btls {
struct MonoBtlsBioMono_ControlCommand;
}
namespace Mono::Btls {
class MonoBtlsBioMono;
}
namespace Mono::Btls {
class MonoBtlsBioMono_BioControlFunc;
}
namespace Mono::Btls {
class MonoBtlsBioMono_BioReadFunc;
}
namespace Mono::Btls {
class MonoBtlsBioMono_BioWriteFunc;
}
// Write type traits
MARK_VAL_T(::Mono::Btls::MonoBtlsBioMono_ControlCommand);
MARK_REF_T(::Mono::Btls::MonoBtlsBioMono*);
MARK_REF_T(::Mono::Btls::MonoBtlsBioMono_BioControlFunc*);
MARK_REF_T(::Mono::Btls::MonoBtlsBioMono_BioReadFunc*);
MARK_REF_T(::Mono::Btls::MonoBtlsBioMono_BioWriteFunc*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsBioMono_ControlCommand, "Mono.Btls", "MonoBtlsBioMono/ControlCommand");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsBioMono*, "Mono.Btls", "MonoBtlsBioMono");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsBioMono_BioControlFunc*, "Mono.Btls", "MonoBtlsBioMono/BioControlFunc");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsBioMono_BioReadFunc*, "Mono.Btls", "MonoBtlsBioMono/BioReadFunc");
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsBioMono_BioWriteFunc*, "Mono.Btls", "MonoBtlsBioMono/BioWriteFunc");
// Dependencies 
namespace Mono::Btls {
// Is value type: true
// CS Name: Mono.Btls.MonoBtlsBioMono/ControlCommand
struct CORDL_TYPE MonoBtlsBioMono_ControlCommand {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MonoBtlsBioMono_ControlCommand_Unwrapped
enum struct __MonoBtlsBioMono_ControlCommand_Unwrapped : int32_t {
__E_Flush = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MonoBtlsBioMono_ControlCommand_Unwrapped () const noexcept {
return static_cast<__MonoBtlsBioMono_ControlCommand_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsBioMono_ControlCommand() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MonoBtlsBioMono_ControlCommand(int32_t  value__) noexcept;

/// @brief Field Flush value: I32(1)
static ::Mono::Btls::MonoBtlsBioMono_ControlCommand const Flush;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11450};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsBioMono_ControlCommand, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsBioMono_ControlCommand) == 0x4, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies System.MulticastDelegate
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsBioMono/BioReadFunc
class CORDL_TYPE MonoBtlsBioMono_BioReadFunc : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline int32_t Invoke(::System::IntPtr  bio, ::System::IntPtr  data, int32_t  dataLength, ::by_ref<int32_t>  wantMore) ;

static inline ::Mono::Btls::MonoBtlsBioMono_BioReadFunc* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181b3db10, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsBioMono_BioReadFunc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsBioMono_BioReadFunc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsBioMono_BioReadFunc(MonoBtlsBioMono_BioReadFunc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsBioMono_BioReadFunc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsBioMono_BioReadFunc(MonoBtlsBioMono_BioReadFunc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11451};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsBioMono_BioReadFunc) == 0x80, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies System.MulticastDelegate
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsBioMono/BioWriteFunc
class CORDL_TYPE MonoBtlsBioMono_BioWriteFunc : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline int32_t Invoke(::System::IntPtr  bio, ::System::IntPtr  data, int32_t  dataLength) ;

static inline ::Mono::Btls::MonoBtlsBioMono_BioWriteFunc* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181b3dc50, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsBioMono_BioWriteFunc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsBioMono_BioWriteFunc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsBioMono_BioWriteFunc(MonoBtlsBioMono_BioWriteFunc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsBioMono_BioWriteFunc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsBioMono_BioWriteFunc(MonoBtlsBioMono_BioWriteFunc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11452};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsBioMono_BioWriteFunc) == 0x80, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies System.MulticastDelegate
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsBioMono/BioControlFunc
class CORDL_TYPE MonoBtlsBioMono_BioControlFunc : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline int64_t Invoke(::System::IntPtr  bio, ::Mono::Btls::MonoBtlsBioMono_ControlCommand  command, int64_t  arg) ;

static inline ::Mono::Btls::MonoBtlsBioMono_BioControlFunc* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181b3d9c0, size 0x150, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsBioMono_BioControlFunc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsBioMono_BioControlFunc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsBioMono_BioControlFunc(MonoBtlsBioMono_BioControlFunc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsBioMono_BioControlFunc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsBioMono_BioControlFunc(MonoBtlsBioMono_BioControlFunc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11453};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsBioMono_BioControlFunc) == 0x80, "Size mismatch!");

} // namespace end def Mono::Btls
// Dependencies Mono.Btls.MonoBtlsBio, System.IntPtr, System.Runtime.InteropServices.GCHandle
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsBioMono
class CORDL_TYPE MonoBtlsBioMono : public ::Mono::Btls::MonoBtlsBio {
public:
// Declarations
using BioControlFunc = ::Mono::Btls::MonoBtlsBioMono_BioControlFunc;

using BioReadFunc = ::Mono::Btls::MonoBtlsBioMono_BioReadFunc;

using BioWriteFunc = ::Mono::Btls::MonoBtlsBioMono_BioWriteFunc;

using ControlCommand = ::Mono::Btls::MonoBtlsBioMono_ControlCommand;

/// @brief Field backend, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_backend, put=__cordl_internal_set_backend)) ::Mono::Btls::IMonoBtlsBioMono*  backend;

/// @brief Field controlFunc, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlFunc, put=__cordl_internal_set_controlFunc)) ::Mono::Btls::MonoBtlsBioMono_BioControlFunc*  controlFunc;

/// @brief Field controlFuncPtr, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlFuncPtr, put=__cordl_internal_set_controlFuncPtr)) ::System::IntPtr  controlFuncPtr;

/// @brief Field handle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_handle, put=__cordl_internal_set_handle)) ::System::Runtime::InteropServices::GCHandle  handle;

/// @brief Field instance, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_instance, put=__cordl_internal_set_instance)) ::System::IntPtr  instance;

/// @brief Field readFunc, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_readFunc, put=__cordl_internal_set_readFunc)) ::Mono::Btls::MonoBtlsBioMono_BioReadFunc*  readFunc;

/// @brief Field readFuncPtr, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_readFuncPtr, put=__cordl_internal_set_readFuncPtr)) ::System::IntPtr  readFuncPtr;

/// @brief Field writeFunc, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_writeFunc, put=__cordl_internal_set_writeFunc)) ::Mono::Btls::MonoBtlsBioMono_BioWriteFunc*  writeFunc;

/// @brief Field writeFuncPtr, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_writeFuncPtr, put=__cordl_internal_set_writeFuncPtr)) ::System::IntPtr  writeFuncPtr;

/// @brief Method Close, addr 0x181b42640, size 0x50, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Control, addr 0x181b42790, size 0x40, virtual false, abstract: false, final false
inline int64_t Control(::Mono::Btls::MonoBtlsBioMono_ControlCommand  command, int64_t  arg) ;

/// @brief Method Control, addr 0x181b42690, size 0x100, virtual false, abstract: false, final false
static inline int64_t Control(::System::IntPtr  instance, ::Mono::Btls::MonoBtlsBioMono_ControlCommand  command, int64_t  arg) ;

static inline ::Mono::Btls::MonoBtlsBioMono* New_ctor(::Mono::Btls::IMonoBtlsBioMono*  backend) ;

/// @brief Method OnRead, addr 0x181b429c0, size 0x120, virtual false, abstract: false, final false
inline int32_t OnRead(::System::IntPtr  data, int32_t  dataLength, ::by_ref<int32_t>  wantMore) ;

/// @brief Method OnRead, addr 0x181b427d0, size 0x1f0, virtual false, abstract: false, final false
static inline int32_t OnRead(::System::IntPtr  instance, ::System::IntPtr  data, int32_t  dataLength, ::by_ref<int32_t>  wantMore) ;

/// @brief Method OnWrite, addr 0x181b42ae0, size 0x110, virtual false, abstract: false, final false
inline int32_t OnWrite(::System::IntPtr  data, int32_t  dataLength) ;

/// @brief Method OnWrite, addr 0x181b42bf0, size 0x1d0, virtual false, abstract: false, final false
static inline int32_t OnWrite(::System::IntPtr  instance, ::System::IntPtr  data, int32_t  dataLength) ;

constexpr ::Mono::Btls::IMonoBtlsBioMono* const& __cordl_internal_get_backend() const;

constexpr ::Mono::Btls::IMonoBtlsBioMono*& __cordl_internal_get_backend() ;

constexpr ::Mono::Btls::MonoBtlsBioMono_BioControlFunc* const& __cordl_internal_get_controlFunc() const;

constexpr ::Mono::Btls::MonoBtlsBioMono_BioControlFunc*& __cordl_internal_get_controlFunc() ;

constexpr ::System::IntPtr const& __cordl_internal_get_controlFuncPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_controlFuncPtr() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_handle() const;

constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_handle() ;

constexpr ::System::IntPtr const& __cordl_internal_get_instance() const;

constexpr ::System::IntPtr& __cordl_internal_get_instance() ;

constexpr ::Mono::Btls::MonoBtlsBioMono_BioReadFunc* const& __cordl_internal_get_readFunc() const;

constexpr ::Mono::Btls::MonoBtlsBioMono_BioReadFunc*& __cordl_internal_get_readFunc() ;

constexpr ::System::IntPtr const& __cordl_internal_get_readFuncPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_readFuncPtr() ;

constexpr ::Mono::Btls::MonoBtlsBioMono_BioWriteFunc* const& __cordl_internal_get_writeFunc() const;

constexpr ::Mono::Btls::MonoBtlsBioMono_BioWriteFunc*& __cordl_internal_get_writeFunc() ;

constexpr ::System::IntPtr const& __cordl_internal_get_writeFuncPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_writeFuncPtr() ;

constexpr void __cordl_internal_set_backend(::Mono::Btls::IMonoBtlsBioMono*  value) ;

constexpr void __cordl_internal_set_controlFunc(::Mono::Btls::MonoBtlsBioMono_BioControlFunc*  value) ;

constexpr void __cordl_internal_set_controlFuncPtr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_handle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr void __cordl_internal_set_instance(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_readFunc(::Mono::Btls::MonoBtlsBioMono_BioReadFunc*  value) ;

constexpr void __cordl_internal_set_readFuncPtr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_writeFunc(::Mono::Btls::MonoBtlsBioMono_BioWriteFunc*  value) ;

constexpr void __cordl_internal_set_writeFuncPtr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x181b42dc0, size 0x3f0, virtual false, abstract: false, final false
inline void _ctor(::Mono::Btls::IMonoBtlsBioMono*  backend) ;

/// @brief Method mono_btls_bio_mono_initialize, addr 0x181b431b0, size 0xc0, virtual false, abstract: false, final false
static inline void mono_btls_bio_mono_initialize(::System::IntPtr  handle, ::System::IntPtr  instance, ::System::IntPtr  readFunc, ::System::IntPtr  writeFunc, ::System::IntPtr  controlFunc) ;

/// @brief Method mono_btls_bio_mono_new, addr 0x181b43270, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_bio_mono_new() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsBioMono() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsBioMono", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsBioMono(MonoBtlsBioMono && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsBioMono", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsBioMono(MonoBtlsBioMono const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11454};

/// @brief Field handle, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  ___handle;

/// @brief Field instance, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  ___instance;

/// @brief Field readFunc, offset: 0x30, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsBioMono_BioReadFunc*  ___readFunc;

/// @brief Field writeFunc, offset: 0x38, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsBioMono_BioWriteFunc*  ___writeFunc;

/// @brief Field controlFunc, offset: 0x40, size: 0x8, def value: None
 ::Mono::Btls::MonoBtlsBioMono_BioControlFunc*  ___controlFunc;

/// @brief Field readFuncPtr, offset: 0x48, size: 0x8, def value: None
 ::System::IntPtr  ___readFuncPtr;

/// @brief Field writeFuncPtr, offset: 0x50, size: 0x8, def value: None
 ::System::IntPtr  ___writeFuncPtr;

/// @brief Field controlFuncPtr, offset: 0x58, size: 0x8, def value: None
 ::System::IntPtr  ___controlFuncPtr;

/// @brief Field backend, offset: 0x60, size: 0x8, def value: None
 ::Mono::Btls::IMonoBtlsBioMono*  ___backend;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsBioMono, ___handle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsBioMono, ___instance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsBioMono, ___readFunc) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsBioMono, ___writeFunc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsBioMono, ___controlFunc) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsBioMono, ___readFuncPtr) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsBioMono, ___writeFuncPtr) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsBioMono, ___controlFuncPtr) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Btls::MonoBtlsBioMono, ___backend) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsBioMono) == 0x68, "Size mismatch!");

} // namespace end def Mono::Btls
