#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/DLLHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DLLHandle)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Diagnostics {
class FileVersionInfo;
}
namespace System {
class Delegate;
}
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class DLLHandle;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::DLLHandle*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::DLLHandle*, "PlayEveryWare.EpicOnlineServices", "DLLHandle");
// Dependencies System.Runtime.InteropServices.SafeHandle
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.DLLHandle
class CORDL_TYPE DLLHandle : public ::System::Runtime::InteropServices::SafeHandle {
public:
// Declarations
 __declspec(property(get=get_IsInvalid)) bool  IsInvalid;

/// @brief Method ConfigureFromLibraryDelegateFieldOnClassWithFunctionName, addr 0x1805368d0, size 0x70, virtual false, abstract: false, final false
inline void ConfigureFromLibraryDelegateFieldOnClassWithFunctionName(::System::Type*  clazz, ::System::Type*  delegateType, ::StringW  functionName) ;

/// @brief Method ConfigureFromLibraryDelegateFieldOnClassWithFunctionName, addr 0x180536940, size 0x70, virtual false, abstract: false, final false
static inline void ConfigureFromLibraryDelegateFieldOnClassWithFunctionName(::System::IntPtr  libraryHandle, ::System::Type*  clazz, ::System::Type*  delegateType, ::StringW  functionName) ;

/// @brief Method GetLibraryVersionInfo, addr 0x1805369b0, size 0x30, virtual false, abstract: false, final false
static inline ::System::Diagnostics::FileVersionInfo* GetLibraryVersionInfo(::StringW  libraryName) ;

/// @brief Method GetPathForLibrary, addr 0x1805369e0, size 0x210, virtual false, abstract: false, final false
static inline ::StringW GetPathForLibrary(::StringW  libraryName) ;

/// @brief Method GetPathsToPlugins, addr 0x180536bf0, size 0x300, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::StringW>* GetPathsToPlugins() ;

/// @brief Method GetProductVersionForLibrary, addr 0x180536ef0, size 0x30, virtual false, abstract: false, final false
static inline ::StringW GetProductVersionForLibrary(::StringW  libraryName) ;

/// @brief Method GetVersionForLibrary, addr 0x180536f20, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW GetVersionForLibrary(::StringW  libraryName) ;

/// @brief Method LoadDynamicLibrary, addr 0x180536ff0, size 0x170, virtual false, abstract: false, final false
static inline ::PlayEveryWare::EpicOnlineServices::DLLHandle* LoadDynamicLibrary(::StringW  libraryName) ;

/// @brief Method LoadFunctionAsDelegate, addr 0x180537160, size 0x10, virtual false, abstract: false, final false
inline ::System::Delegate* LoadFunctionAsDelegate(::System::Type*  functionType, ::StringW  functionName) ;

/// @brief Method LoadFunctionAsDelegate, addr 0x180537170, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Delegate* LoadFunctionAsDelegate(::System::IntPtr  libraryHandle, ::System::Type*  functionType, ::StringW  functionName) ;

/// @brief Method LoadFunctionAsIntPtr, addr 0x180537230, size 0x40, virtual false, abstract: false, final false
inline ::System::IntPtr LoadFunctionAsIntPtr(::StringW  functionName) ;

/// @brief Method Log, addr 0x180537270, size 0x10, virtual false, abstract: false, final false
static inline void Log(::StringW  toPrint) ;

static inline ::PlayEveryWare::EpicOnlineServices::DLLHandle* New_ctor(::System::IntPtr  intPtr) ;

/// @brief Method ReleaseHandle, addr 0x180537280, size 0xd0, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method .ctor, addr 0x180537350, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  intPtr) ;

/// @brief Method get_IsInvalid, addr 0x180537380, size 0x60, virtual true, abstract: false, final false
inline bool get_IsInvalid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DLLHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DLLHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DLLHandle(DLLHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DLLHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DLLHandle(DLLHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18859};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::DLLHandle) == 0x20, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
