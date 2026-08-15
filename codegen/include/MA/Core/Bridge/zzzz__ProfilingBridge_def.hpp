#pragma once
// IWYU pragma private; include "MA/Core/Bridge/ProfilingBridge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilingBridge)
namespace Unity::Profiling::LowLevel::Unsafe {
struct ProfilerRecorderHandle;
}
namespace Unity::Profiling {
struct ProfilerCategory;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace Unity::Profiling {
struct ProfilerRecorder;
}
// Forward declare root types
namespace MA::Core::Bridge {
class ProfilingBridge;
}
// Write type traits
MARK_REF_T(::MA::Core::Bridge::ProfilingBridge*);
DEFINE_IL2CPP_CLASS(::MA::Core::Bridge::ProfilingBridge*, "MA.Core.Bridge", "ProfilingBridge");
// Dependencies System.Object
namespace MA::Core::Bridge {
// Is value type: false
// CS Name: MA.Core.Bridge.ProfilingBridge
class CORDL_TYPE ProfilingBridge : public ::System::Object {
public:
// Declarations
/// @brief Method Custom, addr 0x181eccbf0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Profiling::ProfilerCategory Custom(uint16_t  category) ;

/// @brief Method GetAnyCategory, addr 0x181eccc20, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Profiling::ProfilerCategory GetAnyCategory() ;

/// @brief Method GetGPUCategory, addr 0x181eccc30, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Profiling::ProfilerCategory GetGPUCategory() ;

/// @brief Method GetHandle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
static inline uint64_t GetHandle(::by_ref<::Unity::Profiling::ProfilerRecorder>  recorder) ;

/// @brief Method GetName, addr 0x18146d2d0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetName(::by_ref<::Unity::Profiling::ProfilerMarker>  marker) ;

/// @brief Method GetRecorderHandle, addr 0x181eccc40, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle GetRecorderHandle(::Unity::Profiling::ProfilerCategory  category, ::StringW  name) ;

/// @brief Method GetRecorderHandle, addr 0x181eccc50, size 0x10, virtual false, abstract: false, final false
static inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle GetRecorderHandle(::Unity::Profiling::ProfilerMarker  marker) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProfilingBridge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProfilingBridge", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProfilingBridge(ProfilingBridge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProfilingBridge", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProfilingBridge(ProfilingBridge const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21109};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Core::Bridge::ProfilingBridge) == 0x10, "Size mismatch!");

} // namespace end def MA::Core::Bridge
