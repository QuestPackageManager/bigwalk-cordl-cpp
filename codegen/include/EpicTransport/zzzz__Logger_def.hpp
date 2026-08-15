#pragma once
// IWYU pragma private; include "EpicTransport/Logger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Logger)
namespace Epic::OnlineServices::Logging {
struct LogMessage;
}
// Forward declare root types
namespace EpicTransport {
class Logger;
}
// Write type traits
MARK_REF_T(::EpicTransport::Logger*);
DEFINE_IL2CPP_CLASS(::EpicTransport::Logger*, "EpicTransport", "Logger");
// Dependencies System.Object
namespace EpicTransport {
// Is value type: false
// CS Name: EpicTransport.Logger
class CORDL_TYPE Logger : public ::System::Object {
public:
// Declarations
/// @brief Method EpicDebugLog, addr 0x181588320, size 0x150, virtual false, abstract: false, final false
static inline void EpicDebugLog(::Epic::OnlineServices::Logging::LogMessage  message) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19055};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::EpicTransport::Logger) == 0x10, "Size mismatch!");

} // namespace end def EpicTransport
