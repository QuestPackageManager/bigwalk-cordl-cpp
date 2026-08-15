#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/SystemDynamicLibrary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SystemDynamicLibrary)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class SystemDynamicLibrary;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*, "PlayEveryWare.EpicOnlineServices", "SystemDynamicLibrary");
// Dependencies System.IntPtr, System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.SystemDynamicLibrary
class CORDL_TYPE SystemDynamicLibrary : public ::System::Object {
public:
// Declarations
/// @brief Field DLLHContex, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_DLLHContex, put=__cordl_internal_set_DLLHContex)) ::System::IntPtr  DLLHContex;

/// @brief Field s_instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_instance, put=setStaticF_s_instance)) ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*  s_instance;

/// @brief Method DLLH_create_context, addr 0x180546c50, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr DLLH_create_context() ;

/// @brief Method DLLH_destroy_context, addr 0x180546cc0, size 0x80, virtual false, abstract: false, final false
static inline void DLLH_destroy_context(::System::IntPtr  context) ;

/// @brief Method DLLH_load_function_with_name, addr 0x180546d40, size 0xc0, virtual false, abstract: false, final false
static inline ::System::IntPtr DLLH_load_function_with_name(::System::IntPtr  ctx, ::System::IntPtr  library_handle, ::StringW  function) ;

/// @brief Method DLLH_load_library_at_path, addr 0x180546e00, size 0xb0, virtual false, abstract: false, final false
static inline ::System::IntPtr DLLH_load_library_at_path(::System::IntPtr  ctx, ::StringW  library_path) ;

/// @brief Method DLLH_unload_library_at_path, addr 0x180546eb0, size 0x90, virtual false, abstract: false, final false
static inline bool DLLH_unload_library_at_path(::System::IntPtr  ctx, ::System::IntPtr  library_handle) ;

/// @brief Method GetHandleForModule, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetHandleForModule(::StringW  moduleName) ;

/// @brief Method LoadFunctionWithName, addr 0x180546f40, size 0xc0, virtual false, abstract: false, final false
inline ::System::IntPtr LoadFunctionWithName(::System::IntPtr  libraryHandle, ::StringW  functionName) ;

/// @brief Method LoadLibraryAtPath, addr 0x180547000, size 0xb0, virtual false, abstract: false, final false
inline ::System::IntPtr LoadLibraryAtPath(::StringW  libraryPath) ;

static inline ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary* New_ctor() ;

/// @brief Method UnloadLibrary, addr 0x1805470b0, size 0x90, virtual false, abstract: false, final false
inline bool UnloadLibrary(::System::IntPtr  libraryHandle) ;

constexpr ::System::IntPtr const& __cordl_internal_get_DLLHContex() const;

constexpr ::System::IntPtr& __cordl_internal_get_DLLHContex() ;

constexpr void __cordl_internal_set_DLLHContex(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x180547140, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary* getStaticF_s_instance() ;

/// @brief Method get_Instance, addr 0x1805471b0, size 0xd0, virtual false, abstract: false, final false
static inline ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary* get_Instance() ;

static inline void setStaticF_s_instance(::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemDynamicLibrary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemDynamicLibrary", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemDynamicLibrary(SystemDynamicLibrary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemDynamicLibrary", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemDynamicLibrary(SystemDynamicLibrary const& ) = delete;

/// @brief Field DLLHBinaryName offset 0xffffffff size 0x8
static constexpr ::ConstString  DLLHBinaryName{u"DynamicLibraryLoaderHelper"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18911};

/// @brief Field DLLHContex, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___DLLHContex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary, ___DLLHContex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary) == 0x18, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
