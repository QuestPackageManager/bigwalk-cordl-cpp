#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceBottleneckChangeHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(PerformanceBottleneckChangeHandler)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::AdaptivePerformance {
struct PerformanceBottleneckChangeEventArgs;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class PerformanceBottleneckChangeHandler;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler*, "UnityEngine.AdaptivePerformance", "PerformanceBottleneckChangeHandler");
// Dependencies System.MulticastDelegate
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.PerformanceBottleneckChangeHandler
class CORDL_TYPE PerformanceBottleneckChangeHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeEventArgs  bottleneckEventArgs) ;

static inline ::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180eb2c00, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PerformanceBottleneckChangeHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PerformanceBottleneckChangeHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PerformanceBottleneckChangeHandler(PerformanceBottleneckChangeHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerformanceBottleneckChangeHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerformanceBottleneckChangeHandler(PerformanceBottleneckChangeHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19412};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::PerformanceBottleneckChangeHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
