#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceBoostChangeHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(PerformanceBoostChangeHandler)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::AdaptivePerformance {
struct PerformanceBoostChangeEventArgs;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class PerformanceBoostChangeHandler;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler*, "UnityEngine.AdaptivePerformance", "PerformanceBoostChangeHandler");
// Dependencies System.MulticastDelegate
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.PerformanceBoostChangeHandler
class CORDL_TYPE PerformanceBoostChangeHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeEventArgs  boostEventArgs) ;

static inline ::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1822221d0, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PerformanceBoostChangeHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PerformanceBoostChangeHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PerformanceBoostChangeHandler(PerformanceBoostChangeHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerformanceBoostChangeHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerformanceBoostChangeHandler(PerformanceBoostChangeHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19414};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::PerformanceBoostChangeHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
