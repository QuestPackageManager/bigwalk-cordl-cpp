#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509StoreManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MonoBtlsX509StoreManager)
namespace Mono::Btls {
struct MonoBtlsX509StoreType;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsX509StoreManager;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsX509StoreManager*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509StoreManager*, "Mono.Btls", "MonoBtlsX509StoreManager");
// Dependencies System.Object
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsX509StoreManager
class CORDL_TYPE MonoBtlsX509StoreManager : public ::System::Object {
public:
// Declarations
/// @brief Field initialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_initialized, put=setStaticF_initialized)) bool  initialized;

/// @brief Field machineIntermediateCAPath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_machineIntermediateCAPath, put=setStaticF_machineIntermediateCAPath)) ::StringW  machineIntermediateCAPath;

/// @brief Field machineTrustedRootPath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_machineTrustedRootPath, put=setStaticF_machineTrustedRootPath)) ::StringW  machineTrustedRootPath;

/// @brief Field machineUntrustedPath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_machineUntrustedPath, put=setStaticF_machineUntrustedPath)) ::StringW  machineUntrustedPath;

/// @brief Field userIntermediateCAPath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_userIntermediateCAPath, put=setStaticF_userIntermediateCAPath)) ::StringW  userIntermediateCAPath;

/// @brief Field userTrustedRootPath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_userTrustedRootPath, put=setStaticF_userTrustedRootPath)) ::StringW  userTrustedRootPath;

/// @brief Field userUntrustedPath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_userUntrustedPath, put=setStaticF_userUntrustedPath)) ::StringW  userUntrustedPath;

/// @brief Method DoInitialize, addr 0x181dbb8b0, size 0x1b0, virtual false, abstract: false, final false
static inline void DoInitialize() ;

/// @brief Method GetStorePath, addr 0x181dbba60, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW GetStorePath(::Mono::Btls::MonoBtlsX509StoreType  type) ;

/// @brief Method Initialize, addr 0x181dbbb50, size 0x280, virtual false, abstract: false, final false
static inline void Initialize() ;

static inline bool getStaticF_initialized() ;

static inline ::StringW getStaticF_machineIntermediateCAPath() ;

static inline ::StringW getStaticF_machineTrustedRootPath() ;

static inline ::StringW getStaticF_machineUntrustedPath() ;

static inline ::StringW getStaticF_userIntermediateCAPath() ;

static inline ::StringW getStaticF_userTrustedRootPath() ;

static inline ::StringW getStaticF_userUntrustedPath() ;

static inline void setStaticF_initialized(bool  value) ;

static inline void setStaticF_machineIntermediateCAPath(::StringW  value) ;

static inline void setStaticF_machineTrustedRootPath(::StringW  value) ;

static inline void setStaticF_machineUntrustedPath(::StringW  value) ;

static inline void setStaticF_userIntermediateCAPath(::StringW  value) ;

static inline void setStaticF_userTrustedRootPath(::StringW  value) ;

static inline void setStaticF_userUntrustedPath(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509StoreManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509StoreManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsX509StoreManager(MonoBtlsX509StoreManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsX509StoreManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsX509StoreManager(MonoBtlsX509StoreManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11501};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsX509StoreManager) == 0x10, "Size mismatch!");

} // namespace end def Mono::Btls
