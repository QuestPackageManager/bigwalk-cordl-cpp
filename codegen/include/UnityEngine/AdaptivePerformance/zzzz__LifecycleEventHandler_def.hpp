#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/LifecycleEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(LifecycleEventHandler)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::AdaptivePerformance {
class IAdaptivePerformance;
}
namespace UnityEngine::AdaptivePerformance {
struct LifecycleChangeType;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class LifecycleEventHandler;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::LifecycleEventHandler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::LifecycleEventHandler*, "UnityEngine.AdaptivePerformance", "LifecycleEventHandler");
// Dependencies System.MulticastDelegate
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.LifecycleEventHandler
class CORDL_TYPE LifecycleEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::AdaptivePerformance::IAdaptivePerformance*  instance, ::UnityEngine::AdaptivePerformance::LifecycleChangeType  changeType) ;

static inline ::UnityEngine::AdaptivePerformance::LifecycleEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x182222020, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LifecycleEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LifecycleEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LifecycleEventHandler(LifecycleEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LifecycleEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LifecycleEventHandler(LifecycleEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19395};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::LifecycleEventHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
