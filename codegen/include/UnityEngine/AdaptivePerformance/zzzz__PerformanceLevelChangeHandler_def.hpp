#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceLevelChangeHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(PerformanceLevelChangeHandler)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::AdaptivePerformance {
struct PerformanceLevelChangeEventArgs;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class PerformanceLevelChangeHandler;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler*, "UnityEngine.AdaptivePerformance", "PerformanceLevelChangeHandler");
// Dependencies System.MulticastDelegate
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.PerformanceLevelChangeHandler
class CORDL_TYPE PerformanceLevelChangeHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x180541ff0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs  levelChangeEventArgs) ;

static inline ::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805420d0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PerformanceLevelChangeHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PerformanceLevelChangeHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PerformanceLevelChangeHandler(PerformanceLevelChangeHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerformanceLevelChangeHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerformanceLevelChangeHandler(PerformanceLevelChangeHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19416};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::PerformanceLevelChangeHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
