#pragma once
// IWYU pragma private; include "Mirror/LogEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LogEntry)
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace Mirror {
struct LogEntry;
}
// Write type traits
MARK_VAL_T(::Mirror::LogEntry);
DEFINE_IL2CPP_CLASS(::Mirror::LogEntry, "Mirror", "LogEntry");
// Dependencies UnityEngine.LogType
namespace Mirror {
// Is value type: true
// CS Name: Mirror.LogEntry
struct CORDL_TYPE LogEntry {
public:
// Declarations
/// @brief Method .ctor, addr 0x1802f17c0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::UnityEngine::LogType  type) ;

// Ctor Parameters []
// @brief default ctor
constexpr LogEntry() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::UnityEngine::LogType", modifiers: "", def_value: None }]
constexpr LogEntry(::StringW  message, ::UnityEngine::LogType  type) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19223};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field message, offset: 0x0, size: 0x8, def value: None
 ::StringW  message;

/// @brief Field type, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::LogType  type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::LogEntry, message) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::LogEntry, type) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Mirror::LogEntry) == 0x10, "Size mismatch!");

} // namespace end def Mirror
