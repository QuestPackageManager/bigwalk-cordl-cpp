#pragma once
// IWYU pragma private; include "UnityEngine/Debug.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Debug)
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ILogger;
}
namespace UnityEngine {
struct LogOption;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Debug;
}
// Write type traits
MARK_REF_T(::UnityEngine::Debug*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Debug*, "UnityEngine", "Debug");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Debug
class CORDL_TYPE Debug : public ::System::Object {
public:
// Declarations
/// @brief Field s_DefaultLogger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DefaultLogger, put=setStaticF_s_DefaultLogger)) ::UnityEngine::ILogger*  s_DefaultLogger;

/// @brief Field s_Logger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Logger, put=setStaticF_s_Logger)) ::UnityEngine::ILogger*  s_Logger;

/// @brief Method AssertFormat, addr 0x182243a80, size 0x70, virtual false, abstract: false, final false
static inline void AssertFormat(bool  condition, ::StringW  format, ::ArrayW<::System::Object*>  args) ;

/// @brief Method Break, addr 0x182243bb0, size 0x10, virtual false, abstract: false, final false
static inline void Break() ;

/// @brief Method CallOverridenDebugHandler, addr 0x182243bc0, size 0x180, virtual false, abstract: false, final false
static inline bool CallOverridenDebugHandler(::System::Exception*  exception, ::UnityEngine::Object*  obj) ;

/// @brief Method DrawLine, addr 0x182243e20, size 0x60, virtual false, abstract: false, final false
static inline void DrawLine(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end) ;

/// @brief Method DrawLine, addr 0x182243dc0, size 0x60, virtual false, abstract: false, final false
static inline void DrawLine(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color) ;

/// @brief Method DrawLine, addr 0x182243d70, size 0x50, virtual false, abstract: false, final false
static inline void DrawLine(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color, float_t  duration) ;

/// @brief Method DrawLine, addr 0x182243d50, size 0x20, virtual false, abstract: false, final false
static inline void DrawLine(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color, float_t  duration, bool  depthTest) ;

/// @brief Method DrawLine_Injected, addr 0x182243d40, size 0x10, virtual false, abstract: false, final false
static inline void DrawLine_Injected(::by_ref<::UnityEngine::Vector3>  start, ::by_ref<::UnityEngine::Vector3>  end, ::by_ref<::UnityEngine::Color>  color, float_t  duration, bool  depthTest) ;

/// @brief Method DrawRay, addr 0x182243fa0, size 0x90, virtual false, abstract: false, final false
static inline void DrawRay(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  dir, ::UnityEngine::Color  color) ;

/// @brief Method DrawRay, addr 0x182243e80, size 0x90, virtual false, abstract: false, final false
static inline void DrawRay(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  dir, ::UnityEngine::Color  color, float_t  duration) ;

/// @brief Method DrawRay, addr 0x182243f10, size 0x90, virtual false, abstract: false, final false
static inline void DrawRay(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  dir, ::UnityEngine::Color  color, float_t  duration, bool  depthTest) ;

/// @brief Method ExtractStackTraceNoAlloc, addr 0x182244040, size 0x120, virtual false, abstract: false, final false
static inline int32_t ExtractStackTraceNoAlloc(uint8_t*  buffer, int32_t  bufferMax, ::StringW  projectFolder) ;

/// @brief Method ExtractStackTraceNoAlloc_Injected, addr 0x182244030, size 0x10, virtual false, abstract: false, final false
static inline int32_t ExtractStackTraceNoAlloc_Injected(uint8_t*  buffer, int32_t  bufferMax, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  projectFolder) ;

/// @brief Method IsLoggingEnabled, addr 0x182244160, size 0xd0, virtual false, abstract: false, final false
static inline bool IsLoggingEnabled() ;

/// @brief Method Log, addr 0x1822449e0, size 0x60, virtual false, abstract: false, final false
static inline void Log(::System::Object*  message) ;

/// @brief Method Log, addr 0x182244970, size 0x70, virtual false, abstract: false, final false
static inline void Log(::System::Object*  message, ::UnityEngine::Object*  context) ;

/// @brief Method LogAssertion, addr 0x1822442a0, size 0x60, virtual false, abstract: false, final false
static inline void LogAssertion(::System::Object*  message) ;

/// @brief Method LogAssertionFormat, addr 0x182244230, size 0x70, virtual false, abstract: false, final false
static inline void LogAssertionFormat(::StringW  format, ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogError, addr 0x182244460, size 0x60, virtual false, abstract: false, final false
static inline void LogError(::System::Object*  message) ;

/// @brief Method LogError, addr 0x1822443f0, size 0x70, virtual false, abstract: false, final false
static inline void LogError(::System::Object*  message, ::UnityEngine::Object*  context) ;

/// @brief Method LogErrorFormat, addr 0x182244300, size 0x80, virtual false, abstract: false, final false
static inline void LogErrorFormat(::UnityEngine::Object*  context, ::StringW  format, ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogErrorFormat, addr 0x182244380, size 0x70, virtual false, abstract: false, final false
static inline void LogErrorFormat(::StringW  format, ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogException, addr 0x1822444c0, size 0x60, virtual false, abstract: false, final false
static inline void LogException(::System::Exception*  exception) ;

/// @brief Method LogException, addr 0x182244520, size 0x60, virtual false, abstract: false, final false
static inline void LogException(::System::Exception*  exception, ::UnityEngine::Object*  context) ;

/// @brief Method LogFormat, addr 0x182244740, size 0x70, virtual false, abstract: false, final false
static inline void LogFormat(::StringW  format, ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogFormat, addr 0x182244580, size 0x1c0, virtual false, abstract: false, final false
static inline void LogFormat(::UnityEngine::LogType  logType, ::UnityEngine::LogOption  logOptions, ::UnityEngine::Object*  context, ::StringW  format, ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogWarning, addr 0x182244910, size 0x60, virtual false, abstract: false, final false
static inline void LogWarning(::System::Object*  message) ;

/// @brief Method LogWarning, addr 0x1822448a0, size 0x70, virtual false, abstract: false, final false
static inline void LogWarning(::System::Object*  message, ::UnityEngine::Object*  context) ;

/// @brief Method LogWarningFormat, addr 0x182244820, size 0x80, virtual false, abstract: false, final false
static inline void LogWarningFormat(::UnityEngine::Object*  context, ::StringW  format, ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogWarningFormat, addr 0x1822447b0, size 0x70, virtual false, abstract: false, final false
static inline void LogWarningFormat(::StringW  format, ::ArrayW<::System::Object*>  args) ;

/// @brief Method Assert, addr 0x182243af0, size 0x60, virtual false, abstract: false, final false
static inline void _cordl_Assert(bool  condition) ;

/// @brief Method Assert, addr 0x182243b50, size 0x60, virtual false, abstract: false, final false
static inline void _cordl_Assert(bool  condition, ::StringW  message) ;

static inline ::UnityEngine::ILogger* getStaticF_s_DefaultLogger() ;

static inline ::UnityEngine::ILogger* getStaticF_s_Logger() ;

/// @brief Method get_isDebugBuild, addr 0x182244b10, size 0x80, virtual false, abstract: false, final false
static inline bool get_isDebugBuild() ;

/// @brief Method get_unityLogger, addr 0x18195b9a0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::ILogger* get_unityLogger() ;

static inline void setStaticF_s_DefaultLogger(::UnityEngine::ILogger*  value) ;

static inline void setStaticF_s_Logger(::UnityEngine::ILogger*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Debug() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Debug(Debug && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Debug(Debug const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10456};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Debug) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
