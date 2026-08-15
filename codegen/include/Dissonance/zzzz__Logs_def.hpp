#pragma once
// IWYU pragma private; include "Dissonance/Logs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__LogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Logs)
namespace Dissonance::Datastructures {
template<typename T>
class TransferBuffer_1;
}
namespace Dissonance {
struct LogCategory;
}
namespace Dissonance {
struct LogLevel;
}
namespace Dissonance {
class Log;
}
namespace Dissonance {
struct Logs_LogMessage;
}
namespace System::Threading {
class Thread;
}
// Forward declare root types
namespace Dissonance {
class Logs;
}
namespace Dissonance {
struct Logs_LogMessage;
}
// Write type traits
MARK_REF_T(::Dissonance::Logs*);
MARK_VAL_T(::Dissonance::Logs_LogMessage);
DEFINE_IL2CPP_CLASS(::Dissonance::Logs*, "Dissonance", "Logs");
DEFINE_IL2CPP_CLASS(::Dissonance::Logs_LogMessage, "Dissonance", "Logs/LogMessage");
// Dependencies Dissonance.LogLevel
namespace Dissonance {
// Is value type: true
// CS Name: Dissonance.Logs/LogMessage
struct CORDL_TYPE Logs_LogMessage {
public:
// Declarations
/// @brief Method Log, addr 0x1805cb5e0, size 0x70, virtual false, abstract: false, final false
inline void Log() ;

/// @brief Method .ctor, addr 0x1805cb650, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::Dissonance::LogLevel  level) ;

// Ctor Parameters []
// @brief default ctor
constexpr Logs_LogMessage() ;

// Ctor Parameters [CppParam { name: "_level", ty: "::Dissonance::LogLevel", modifiers: "", def_value: None }, CppParam { name: "_message", ty: "::StringW", modifiers: "", def_value: None }]
constexpr Logs_LogMessage(::Dissonance::LogLevel  _level, ::StringW  _message) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16808};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _level, offset: 0x0, size: 0x4, def value: None
 ::Dissonance::LogLevel  _level;

/// @brief Field _message, offset: 0x8, size: 0x8, def value: None
 ::StringW  _message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Logs_LogMessage, _level) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Logs_LogMessage, _message) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Logs_LogMessage) == 0x10, "Size mismatch!");

} // namespace end def Dissonance
// Dependencies System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.Logs
class CORDL_TYPE Logs : public ::System::Object {
public:
// Declarations
using LogMessage = ::Dissonance::Logs_LogMessage;

/// @brief Field LogsFromOtherThreads, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogsFromOtherThreads, put=setStaticF_LogsFromOtherThreads)) ::Dissonance::Datastructures::TransferBuffer_1<::Dissonance::Logs_LogMessage>*  LogsFromOtherThreads;

/// @brief Field <Disable>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__Disable_k__BackingField, put=setStaticF__Disable_k__BackingField)) bool  _Disable_k__BackingField;

/// @brief Field _main, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__main, put=setStaticF__main)) ::System::Threading::Thread*  _main;

/// @brief Method Create, addr 0x1805cbec0, size 0x150, virtual false, abstract: false, final false
static inline ::Dissonance::Log* Create(::Dissonance::LogCategory  category, ::StringW  name) ;

/// @brief Method Create, addr 0x1805cbec0, size 0x150, virtual false, abstract: false, final false
static inline ::Dissonance::Log* Create(int32_t  category, ::StringW  name) ;

/// @brief Method GetLogLevel, addr 0x1805cc010, size 0x30, virtual false, abstract: false, final false
static inline ::Dissonance::LogLevel GetLogLevel(::Dissonance::LogCategory  category) ;

/// @brief Method GetLogLevel, addr 0x1805cc010, size 0x30, virtual false, abstract: false, final false
static inline ::Dissonance::LogLevel GetLogLevel(int32_t  category) ;

/// @brief Method SendLogMessage, addr 0x1805cc040, size 0x110, virtual false, abstract: false, final false
static inline void SendLogMessage(::StringW  message, ::Dissonance::LogLevel  level) ;

/// @brief Method SetLogLevel, addr 0x1805cc150, size 0x40, virtual false, abstract: false, final false
static inline void SetLogLevel(::Dissonance::LogCategory  category, ::Dissonance::LogLevel  level) ;

/// @brief Method SetLogLevel, addr 0x1805cc150, size 0x40, virtual false, abstract: false, final false
static inline void SetLogLevel(int32_t  category, ::Dissonance::LogLevel  level) ;

/// @brief Method WriteMultithreadedLogs, addr 0x1805cc190, size 0x110, virtual false, abstract: false, final false
static inline void WriteMultithreadedLogs() ;

static inline ::Dissonance::Datastructures::TransferBuffer_1<::Dissonance::Logs_LogMessage>* getStaticF_LogsFromOtherThreads() ;

static inline bool getStaticF__Disable_k__BackingField() ;

static inline ::System::Threading::Thread* getStaticF__main() ;

/// @brief Method get_Disable, addr 0x1805cc300, size 0x40, virtual false, abstract: false, final false
static inline bool get_Disable() ;

static inline void setStaticF_LogsFromOtherThreads(::Dissonance::Datastructures::TransferBuffer_1<::Dissonance::Logs_LogMessage>*  value) ;

static inline void setStaticF__Disable_k__BackingField(bool  value) ;

static inline void setStaticF__main(::System::Threading::Thread*  value) ;

/// @brief Method set_Disable, addr 0x1805cc340, size 0x50, virtual false, abstract: false, final false
static inline void set_Disable(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Logs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Logs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Logs(Logs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Logs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Logs(Logs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16809};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Logs) == 0x10, "Size mismatch!");

} // namespace end def Dissonance
