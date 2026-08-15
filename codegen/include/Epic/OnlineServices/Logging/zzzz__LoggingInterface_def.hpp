#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Logging/LoggingInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LoggingInterface)
namespace Epic::OnlineServices::Logging {
struct LogCategory;
}
namespace Epic::OnlineServices::Logging {
struct LogLevel;
}
namespace Epic::OnlineServices::Logging {
class LogMessageFunc;
}
namespace Epic::OnlineServices {
struct Result;
}
// Forward declare root types
namespace Epic::OnlineServices::Logging {
class LoggingInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Logging::LoggingInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Logging::LoggingInterface*, "Epic.OnlineServices.Logging", "LoggingInterface");
// Dependencies System.Object
namespace Epic::OnlineServices::Logging {
// Is value type: false
// CS Name: Epic.OnlineServices.Logging.LoggingInterface
class CORDL_TYPE LoggingInterface : public ::System::Object {
public:
// Declarations
static inline ::Epic::OnlineServices::Logging::LoggingInterface* New_ctor() ;

/// @brief Method SetCallback, addr 0x18050c0f0, size 0x170, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result SetCallback(::Epic::OnlineServices::Logging::LogMessageFunc*  callback) ;

/// @brief Method SetLogLevel, addr 0x18050c260, size 0x10, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result SetLogLevel(::Epic::OnlineServices::Logging::LogCategory  logCategory, ::Epic::OnlineServices::Logging::LogLevel  logLevel) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoggingInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoggingInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoggingInterface(LoggingInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoggingInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoggingInterface(LoggingInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8424};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Logging::LoggingInterface) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Logging
