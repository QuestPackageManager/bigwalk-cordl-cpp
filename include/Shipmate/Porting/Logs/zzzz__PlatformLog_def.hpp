#pragma once
// IWYU pragma private; include "Shipmate/Porting/Logs/PlatformLog.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlatformLog)
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
namespace Shipmate::Porting::Logs {
class PlatformLog;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::Logs::PlatformLog*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Logs::PlatformLog*, "Shipmate.Porting.Logs", "PlatformLog");
// Dependencies System.Object
namespace Shipmate::Porting::Logs {
// Is value type: false
// CS Name: Shipmate.Porting.Logs.PlatformLog
class CORDL_TYPE PlatformLog : public ::System::Object {
public:
// Declarations
/// @brief Field mLogger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mLogger, put=setStaticF_mLogger)) ::Shipmate::Porting::Logs::IPlatformLogger*  mLogger;

/// @brief Field mPrefix, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mPrefix, put=__cordl_internal_set_mPrefix)) ::StringW  mPrefix;

/// @brief Method Debug, addr 0x181ac9270, size 0x90, virtual false, abstract: false, final false
inline void Debug(::StringW  aMessage) ;

/// @brief Method Error, addr 0x181ac9300, size 0x90, virtual false, abstract: false, final false
inline void Error(::StringW  aMessage) ;

/// @brief Method Exception, addr 0x181ac9390, size 0x110, virtual false, abstract: false, final false
inline void Exception(::StringW  aMessage, ::System::Exception*  aException) ;

/// @brief Method GetLogger, addr 0x181ac94a0, size 0x40, virtual false, abstract: false, final false
static inline ::Shipmate::Porting::Logs::PlatformLog* GetLogger(::StringW  aPrefix) ;

/// @brief Method Info, addr 0x181ac94e0, size 0x90, virtual false, abstract: false, final false
inline void Info(::StringW  aMessage) ;

static inline ::Shipmate::Porting::Logs::PlatformLog* New_ctor(::StringW  aPrefix) ;

/// @brief Method SetLogLevel, addr 0x181ac9570, size 0xd0, virtual false, abstract: false, final false
static inline void SetLogLevel(::Shipmate::Porting::Logs::PlatformLogLevel  aLevel) ;

/// @brief Method SetLogger, addr 0x181ac9640, size 0x50, virtual false, abstract: false, final false
static inline void SetLogger(::Shipmate::Porting::Logs::IPlatformLogger*  aLogger) ;

/// @brief Method Warn, addr 0x181ac9690, size 0x90, virtual false, abstract: false, final false
inline void Warn(::StringW  aMessage) ;

constexpr ::StringW const& __cordl_internal_get_mPrefix() const;

constexpr ::StringW& __cordl_internal_get_mPrefix() ;

constexpr void __cordl_internal_set_mPrefix(::StringW  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  aPrefix) ;

static inline ::Shipmate::Porting::Logs::IPlatformLogger* getStaticF_mLogger() ;

static inline void setStaticF_mLogger(::Shipmate::Porting::Logs::IPlatformLogger*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformLog() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformLog", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformLog(PlatformLog && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformLog", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformLog(PlatformLog const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21584};

/// @brief Field mPrefix, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___mPrefix;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::Logs::PlatformLog, ___mPrefix) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::Logs::PlatformLog) == 0x18, "Size mismatch!");

} // namespace end def Shipmate::Porting::Logs
