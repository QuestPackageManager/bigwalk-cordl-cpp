#pragma once
// IWYU pragma private; include "Shipmate/Porting/Logs/IPlatformLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IPlatformLogger)
namespace Shipmate::Porting::Logs {
struct PlatformLogLevel;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Shipmate::Porting::Logs {
class IPlatformLogger;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::Logs::IPlatformLogger*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Logs::IPlatformLogger*, "Shipmate.Porting.Logs", "IPlatformLogger");
// Dependencies 
namespace Shipmate::Porting::Logs {
// Is value type: false
// CS Name: Shipmate.Porting.Logs.IPlatformLogger
class CORDL_TYPE IPlatformLogger {
public:
// Declarations
/// @brief Method Debug, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Debug(::StringW  aMessage) ;

/// @brief Method Error, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Error(::StringW  aMessage) ;

/// @brief Method Exception, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Exception(::StringW  aMessage, ::System::Exception*  aException) ;

/// @brief Method Info, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Info(::StringW  aMessage) ;

/// @brief Method SetLogLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetLogLevel(::Shipmate::Porting::Logs::PlatformLogLevel  aLevel) ;

/// @brief Method Warn, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Warn(::StringW  aMessage) ;

// Ctor Parameters [CppParam { name: "", ty: "IPlatformLogger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPlatformLogger(IPlatformLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21582};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Shipmate::Porting::Logs
