#pragma once
// IWYU pragma private; include "Shipmates/Utils/BaseLogInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BaseLogInstance)
namespace Shipmates::Utils {
class OpenObserveContext;
}
// Forward declare root types
namespace Shipmates::Utils {
class BaseLogInstance;
}
// Write type traits
MARK_REF_T(::Shipmates::Utils::BaseLogInstance*);
DEFINE_IL2CPP_CLASS(::Shipmates::Utils::BaseLogInstance*, "Shipmates.Utils", "BaseLogInstance");
// Dependencies System.Object
namespace Shipmates::Utils {
// Is value type: false
// CS Name: Shipmates.Utils.BaseLogInstance
class CORDL_TYPE BaseLogInstance : public ::System::Object {
public:
// Declarations
/// @brief Field gameVersion, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameVersion, put=__cordl_internal_set_gameVersion)) ::StringW  gameVersion;

/// @brief Field logLevel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_logLevel, put=__cordl_internal_set_logLevel)) ::StringW  logLevel;

/// @brief Field message, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_message, put=__cordl_internal_set_message)) ::StringW  message;

/// @brief Field platform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_platform, put=__cordl_internal_set_platform)) ::StringW  platform;

/// @brief Field sessionId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

/// @brief Field stackTrace, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_stackTrace, put=__cordl_internal_set_stackTrace)) ::StringW  stackTrace;

/// @brief Field userName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_userName, put=__cordl_internal_set_userName)) ::StringW  userName;

/// @brief Method InjectContextMetadata, addr 0x181acad30, size 0x70, virtual true, abstract: false, final false
inline void InjectContextMetadata(::Shipmates::Utils::OpenObserveContext*  context) ;

static inline ::Shipmates::Utils::BaseLogInstance* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_gameVersion() const;

constexpr ::StringW& __cordl_internal_get_gameVersion() ;

constexpr ::StringW const& __cordl_internal_get_logLevel() const;

constexpr ::StringW& __cordl_internal_get_logLevel() ;

constexpr ::StringW const& __cordl_internal_get_message() const;

constexpr ::StringW& __cordl_internal_get_message() ;

constexpr ::StringW const& __cordl_internal_get_platform() const;

constexpr ::StringW& __cordl_internal_get_platform() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr ::StringW const& __cordl_internal_get_stackTrace() const;

constexpr ::StringW& __cordl_internal_get_stackTrace() ;

constexpr ::StringW const& __cordl_internal_get_userName() const;

constexpr ::StringW& __cordl_internal_get_userName() ;

constexpr void __cordl_internal_set_gameVersion(::StringW  value) ;

constexpr void __cordl_internal_set_logLevel(::StringW  value) ;

constexpr void __cordl_internal_set_message(::StringW  value) ;

constexpr void __cordl_internal_set_platform(::StringW  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

constexpr void __cordl_internal_set_stackTrace(::StringW  value) ;

constexpr void __cordl_internal_set_userName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseLogInstance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseLogInstance", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseLogInstance(BaseLogInstance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseLogInstance", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseLogInstance(BaseLogInstance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21062};

/// @brief Field sessionId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field userName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___userName;

/// @brief Field logLevel, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___logLevel;

/// @brief Field gameVersion, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___gameVersion;

/// @brief Field platform, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___platform;

/// @brief Field message, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___message;

/// @brief Field stackTrace, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___stackTrace;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::Utils::BaseLogInstance, ___sessionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::BaseLogInstance, ___userName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::BaseLogInstance, ___logLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::BaseLogInstance, ___gameVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::BaseLogInstance, ___platform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::BaseLogInstance, ___message) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::BaseLogInstance, ___stackTrace) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Shipmates::Utils::BaseLogInstance) == 0x48, "Size mismatch!");

} // namespace end def Shipmates::Utils
