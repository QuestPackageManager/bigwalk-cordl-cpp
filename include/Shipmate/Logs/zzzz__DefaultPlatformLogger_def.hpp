#pragma once
// IWYU pragma private; include "Shipmate/Logs/DefaultPlatformLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmate/Porting/Logs/zzzz__PlatformLogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DefaultPlatformLogger)
namespace Shipmate::Porting::Logs {
class IPlatformLogger;
}
namespace Shipmate::Porting::Logs {
struct PlatformLogLevel;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Shipmate::Logs {
class DefaultPlatformLogger;
}
// Write type traits
MARK_REF_T(::Shipmate::Logs::DefaultPlatformLogger*);
DEFINE_IL2CPP_CLASS(::Shipmate::Logs::DefaultPlatformLogger*, "Shipmate.Logs", "DefaultPlatformLogger");
// Dependencies Shipmate.Porting.Logs.PlatformLogLevel, System.Object
namespace Shipmate::Logs {
// Is value type: false
// CS Name: Shipmate.Logs.DefaultPlatformLogger
class CORDL_TYPE DefaultPlatformLogger : public ::System::Object {
public:
// Declarations
/// @brief Field mLogLevel, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_mLogLevel, put=__cordl_internal_set_mLogLevel)) ::Shipmate::Porting::Logs::PlatformLogLevel  mLogLevel;

/// @brief Convert operator to "::Shipmate::Porting::Logs::IPlatformLogger"
constexpr operator  ::Shipmate::Porting::Logs::IPlatformLogger*() noexcept;

/// @brief Method Debug, addr 0x181ac9190, size 0x20, virtual true, abstract: false, final true
inline void Debug(::StringW  aMessage) ;

/// @brief Method Error, addr 0x181ac91b0, size 0x20, virtual true, abstract: false, final true
inline void Error(::StringW  aMessage) ;

/// @brief Method Exception, addr 0x181ac91d0, size 0x50, virtual true, abstract: false, final true
inline void Exception(::StringW  aMessage, ::System::Exception*  aException) ;

/// @brief Method Info, addr 0x181ac9220, size 0x20, virtual true, abstract: false, final true
inline void Info(::StringW  aMessage) ;

static inline ::Shipmate::Logs::DefaultPlatformLogger* New_ctor() ;

/// @brief Method SetLogLevel, addr 0x180378ff0, size 0x10, virtual true, abstract: false, final true
inline void SetLogLevel(::Shipmate::Porting::Logs::PlatformLogLevel  aLevel) ;

/// @brief Method Warn, addr 0x181ac9240, size 0x20, virtual true, abstract: false, final true
inline void Warn(::StringW  aMessage) ;

constexpr ::Shipmate::Porting::Logs::PlatformLogLevel const& __cordl_internal_get_mLogLevel() const;

constexpr ::Shipmate::Porting::Logs::PlatformLogLevel& __cordl_internal_get_mLogLevel() ;

constexpr void __cordl_internal_set_mLogLevel(::Shipmate::Porting::Logs::PlatformLogLevel  value) ;

/// @brief Method .ctor, addr 0x181ac9260, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Shipmate::Porting::Logs::IPlatformLogger"
constexpr ::Shipmate::Porting::Logs::IPlatformLogger* i___Shipmate__Porting__Logs__IPlatformLogger() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultPlatformLogger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultPlatformLogger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultPlatformLogger(DefaultPlatformLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultPlatformLogger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultPlatformLogger(DefaultPlatformLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21585};

/// @brief Field mLogLevel, offset: 0x10, size: 0x4, def value: None
 ::Shipmate::Porting::Logs::PlatformLogLevel  ___mLogLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Logs::DefaultPlatformLogger, ___mLogLevel) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Logs::DefaultPlatformLogger) == 0x18, "Size mismatch!");

} // namespace end def Shipmate::Logs
