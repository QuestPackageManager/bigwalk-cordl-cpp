#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceModeEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(PerformanceModeEventHandler)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::AdaptivePerformance {
struct PerformanceMode;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class PerformanceModeEventHandler;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler*, "UnityEngine.AdaptivePerformance", "PerformanceModeEventHandler");
// Dependencies System.MulticastDelegate
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.PerformanceModeEventHandler
class CORDL_TYPE PerformanceModeEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::AdaptivePerformance::PerformanceMode  performanceMode) ;

static inline ::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180539220, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PerformanceModeEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PerformanceModeEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PerformanceModeEventHandler(PerformanceModeEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerformanceModeEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerformanceModeEventHandler(PerformanceModeEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19409};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::PerformanceModeEventHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
