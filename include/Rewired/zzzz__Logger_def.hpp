#pragma once
// IWYU pragma private; include "Rewired/Logger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Logger)
namespace Rewired::Config {
struct LogLevelFlags;
}
namespace Rewired::Config {
struct LogLevel;
}
namespace Rewired::Internal {
class GUIText;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired {
class Logger;
}
// Write type traits
MARK_REF_T(::Rewired::Logger*);
DEFINE_IL2CPP_CLASS(::Rewired::Logger*, "Rewired", "Logger");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Logger
class CORDL_TYPE Logger : public ::System::Object {
public:
// Declarations
/// @brief Field __screenLog, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___screenLog, put=setStaticF___screenLog)) ::System::Collections::Generic::List_1<::StringW>*  __screenLog;

/// @brief Field _guiText, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__guiText, put=setStaticF__guiText)) ::UnityW<::Rewired::Internal::GUIText>  _guiText;

/// @brief Field _logToScreen, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__logToScreen, put=setStaticF__logToScreen)) bool  _logToScreen;

/// @brief Method FormatMessage, addr 0x1819612f0, size 0x90, virtual false, abstract: false, final false
static inline ::System::Object* FormatMessage(::System::Object*  o) ;

/// @brief Method IsLoggingAllowed, addr 0x181961380, size 0x60, virtual false, abstract: false, final false
static inline bool IsLoggingAllowed(::Rewired::Config::LogLevel  logLevel) ;

/// @brief Method Log, addr 0x181962d50, size 0x60, virtual false, abstract: false, final false
static inline void Log(::System::Object*  msg) ;

/// @brief Method Log, addr 0x181962db0, size 0x70, virtual false, abstract: false, final false
static inline void Log(::System::Object*  msg, bool  requiredThreadSafety) ;

/// @brief Method LogEditor, addr 0x181961480, size 0x90, virtual false, abstract: false, final false
static inline void LogEditor(::System::Object*  msg) ;

/// @brief Method LogEditor, addr 0x1819613e0, size 0xa0, virtual false, abstract: false, final false
static inline void LogEditor(::System::Object*  msg, bool  requiredThreadSafety) ;

/// @brief Method LogError, addr 0x181961c00, size 0x10, virtual false, abstract: false, final false
static inline void LogError(::System::Object*  msg) ;

/// @brief Method LogError, addr 0x181961760, size 0x4a0, virtual false, abstract: false, final false
static inline void LogError(::System::Object*  msg, bool  requiredThreadSafety) ;

/// @brief Method LogErrorEditor, addr 0x181961570, size 0x50, virtual false, abstract: false, final false
static inline void LogErrorEditor(::System::Object*  msg) ;

/// @brief Method LogErrorEditor, addr 0x181961510, size 0x60, virtual false, abstract: false, final false
static inline void LogErrorEditor(::System::Object*  msg, bool  requiredThreadSafety) ;

/// @brief Method LogErrorNow, addr 0x1819615c0, size 0x1a0, virtual false, abstract: false, final false
static inline void LogErrorNow(::System::Object*  msg, bool  requireThreadSafety) ;

/// @brief Method LogException, addr 0x181962300, size 0x10, virtual false, abstract: false, final false
static inline void LogException(::System::Exception*  exception, ::System::Object*  msg) ;

/// @brief Method LogException, addr 0x181961e40, size 0x4c0, virtual false, abstract: false, final false
static inline void LogException(::System::Exception*  exception, ::System::Object*  msg, bool  requiredThreadSafety) ;

/// @brief Method LogExceptionNow, addr 0x181961c10, size 0x230, virtual false, abstract: false, final false
static inline void LogExceptionNow(::System::Exception*  exception, ::System::Object*  msg, bool  requireThreadSafety) ;

/// @brief Method LogInit, addr 0x181962330, size 0xd0, virtual false, abstract: false, final false
static inline void LogInit(::System::Object*  o) ;

/// @brief Method LogInitError, addr 0x181962310, size 0x10, virtual false, abstract: false, final false
static inline void LogInitError(::System::Object*  o) ;

/// @brief Method LogInitWarning, addr 0x181962320, size 0x10, virtual false, abstract: false, final false
static inline void LogInitWarning(::System::Object*  o) ;

/// @brief Method LogNow, addr 0x181962400, size 0x1a0, virtual false, abstract: false, final false
static inline void LogNow(::System::Object*  msg, bool  requireThreadSafety) ;

/// @brief Method LogToScreen, addr 0x1819625a0, size 0x450, virtual false, abstract: false, final false
static inline void LogToScreen(::System::Object*  msg) ;

/// @brief Method LogUpdate, addr 0x181962330, size 0xd0, virtual false, abstract: false, final false
static inline void LogUpdate(::System::Object*  o) ;

/// @brief Method LogWarning, addr 0x181962d40, size 0x10, virtual false, abstract: false, final false
static inline void LogWarning(::System::Object*  msg) ;

/// @brief Method LogWarning, addr 0x181962c40, size 0x100, virtual false, abstract: false, final false
static inline void LogWarning(::System::Object*  msg, bool  requiredThreadSafety) ;

/// @brief Method LogWarningEditor, addr 0x181962a50, size 0x50, virtual false, abstract: false, final false
static inline void LogWarningEditor(::System::Object*  msg) ;

/// @brief Method LogWarningEditor, addr 0x1819629f0, size 0x60, virtual false, abstract: false, final false
static inline void LogWarningEditor(::System::Object*  msg, bool  requiredThreadSafety) ;

/// @brief Method LogWarningNow, addr 0x181962aa0, size 0x1a0, virtual false, abstract: false, final false
static inline void LogWarningNow(::System::Object*  msg, bool  requireThreadSafety) ;

/// @brief Method Log_VCTest, addr 0x181962d50, size 0x60, virtual false, abstract: false, final false
static inline void Log_VCTest(::System::Object*  o) ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF___screenLog() ;

static inline ::UnityW<::Rewired::Internal::GUIText> getStaticF__guiText() ;

static inline bool getStaticF__logToScreen() ;

/// @brief Method get_logLevel, addr 0x181962e20, size 0xb0, virtual false, abstract: false, final false
static inline ::Rewired::Config::LogLevelFlags get_logLevel() ;

/// @brief Method get_logToScreen, addr 0x181962ed0, size 0x20, virtual false, abstract: false, final false
static inline bool get_logToScreen() ;

/// @brief Method get_screenLog, addr 0x181962ef0, size 0x80, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::StringW>* get_screenLog() ;

static inline void setStaticF___screenLog(::System::Collections::Generic::List_1<::StringW>*  value) ;

static inline void setStaticF__guiText(::UnityW<::Rewired::Internal::GUIText>  value) ;

static inline void setStaticF__logToScreen(bool  value) ;

/// @brief Method set_logToScreen, addr 0x181962f70, size 0x120, virtual false, abstract: false, final false
static inline void set_logToScreen(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Logger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Logger(Logger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Logger(Logger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1934};

/// @brief Field screenLogLength offset 0xffffffff size 0x4
static constexpr int32_t  screenLogLength{static_cast<int32_t>(0x32)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Logger) == 0x10, "Size mismatch!");

} // namespace end def Rewired
