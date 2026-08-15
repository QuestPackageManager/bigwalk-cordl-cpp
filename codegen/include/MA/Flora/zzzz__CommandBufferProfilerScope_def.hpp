#pragma once
// IWYU pragma private; include "MA/Flora/CommandBufferProfilerScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CommandBufferProfilerScope)
namespace System {
class IDisposable;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
// Forward declare root types
namespace MA::Flora {
struct CommandBufferProfilerScope;
}
// Write type traits
MARK_VAL_T(::MA::Flora::CommandBufferProfilerScope);
DEFINE_IL2CPP_CLASS(::MA::Flora::CommandBufferProfilerScope, "MA.Flora", "CommandBufferProfilerScope");
// Dependencies Unity.Profiling.ProfilerMarker
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CommandBufferProfilerScope
struct CORDL_TYPE CommandBufferProfilerScope {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x1809c0120, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::CommandBuffer*  cmd, ::Unity::Profiling::ProfilerMarker  marker) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CommandBufferProfilerScope() ;

// Ctor Parameters [CppParam { name: "m_CommandBuffer", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: None }, CppParam { name: "m_Marker", ty: "::Unity::Profiling::ProfilerMarker", modifiers: "", def_value: None }]
constexpr CommandBufferProfilerScope(::UnityEngine::Rendering::CommandBuffer*  m_CommandBuffer, ::Unity::Profiling::ProfilerMarker  m_Marker) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13320};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_CommandBuffer, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  m_CommandBuffer;

/// @brief Field m_Marker, offset: 0x8, size: 0x8, def value: None
 ::Unity::Profiling::ProfilerMarker  m_Marker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CommandBufferProfilerScope, m_CommandBuffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CommandBufferProfilerScope, m_Marker) == 0x8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CommandBufferProfilerScope) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
