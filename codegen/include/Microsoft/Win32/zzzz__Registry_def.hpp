#pragma once
// IWYU pragma private; include "Microsoft/Win32/Registry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Registry)
namespace Microsoft::Win32 {
class RegistryKey;
}
// Forward declare root types
namespace Microsoft::Win32 {
class Registry;
}
// Write type traits
MARK_REF_T(::Microsoft::Win32::Registry*);
DEFINE_IL2CPP_CLASS(::Microsoft::Win32::Registry*, "Microsoft.Win32", "Registry");
// Dependencies System.Object
namespace Microsoft::Win32 {
// Is value type: false
// CS Name: Microsoft.Win32.Registry
class CORDL_TYPE Registry : public ::System::Object {
public:
// Declarations
/// @brief Field ClassesRoot, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ClassesRoot, put=setStaticF_ClassesRoot)) ::Microsoft::Win32::RegistryKey*  ClassesRoot;

/// @brief Field CurrentConfig, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CurrentConfig, put=setStaticF_CurrentConfig)) ::Microsoft::Win32::RegistryKey*  CurrentConfig;

/// @brief Field CurrentUser, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CurrentUser, put=setStaticF_CurrentUser)) ::Microsoft::Win32::RegistryKey*  CurrentUser;

/// @brief Field DynData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DynData, put=setStaticF_DynData)) ::Microsoft::Win32::RegistryKey*  DynData;

/// @brief Field LocalMachine, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LocalMachine, put=setStaticF_LocalMachine)) ::Microsoft::Win32::RegistryKey*  LocalMachine;

/// @brief Field PerformanceData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PerformanceData, put=setStaticF_PerformanceData)) ::Microsoft::Win32::RegistryKey*  PerformanceData;

/// @brief Field Users, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Users, put=setStaticF_Users)) ::Microsoft::Win32::RegistryKey*  Users;

static inline ::Microsoft::Win32::RegistryKey* getStaticF_ClassesRoot() ;

static inline ::Microsoft::Win32::RegistryKey* getStaticF_CurrentConfig() ;

static inline ::Microsoft::Win32::RegistryKey* getStaticF_CurrentUser() ;

static inline ::Microsoft::Win32::RegistryKey* getStaticF_DynData() ;

static inline ::Microsoft::Win32::RegistryKey* getStaticF_LocalMachine() ;

static inline ::Microsoft::Win32::RegistryKey* getStaticF_PerformanceData() ;

static inline ::Microsoft::Win32::RegistryKey* getStaticF_Users() ;

static inline void setStaticF_ClassesRoot(::Microsoft::Win32::RegistryKey*  value) ;

static inline void setStaticF_CurrentConfig(::Microsoft::Win32::RegistryKey*  value) ;

static inline void setStaticF_CurrentUser(::Microsoft::Win32::RegistryKey*  value) ;

static inline void setStaticF_DynData(::Microsoft::Win32::RegistryKey*  value) ;

static inline void setStaticF_LocalMachine(::Microsoft::Win32::RegistryKey*  value) ;

static inline void setStaticF_PerformanceData(::Microsoft::Win32::RegistryKey*  value) ;

static inline void setStaticF_Users(::Microsoft::Win32::RegistryKey*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Registry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Registry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Registry(Registry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Registry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Registry(Registry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{115};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Microsoft::Win32::Registry) == 0x10, "Size mismatch!");

} // namespace end def Microsoft::Win32
