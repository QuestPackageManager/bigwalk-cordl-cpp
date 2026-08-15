#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/ThermalEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ThermalEventHandler)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::AdaptivePerformance {
struct ThermalMetrics;
}
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
class ThermalEventHandler;
}
// Write type traits
MARK_REF_T(::UnityEngine::AdaptivePerformance::ThermalEventHandler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::ThermalEventHandler*, "UnityEngine.AdaptivePerformance", "ThermalEventHandler");
// Dependencies System.MulticastDelegate
namespace UnityEngine::AdaptivePerformance {
// Is value type: false
// CS Name: UnityEngine.AdaptivePerformance.ThermalEventHandler
class CORDL_TYPE ThermalEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x180ccc4b0, size 0x120, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::AdaptivePerformance::ThermalMetrics  thermalMetrics) ;

static inline ::UnityEngine::AdaptivePerformance::ThermalEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1812852e0, size 0xdbf0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThermalEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThermalEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThermalEventHandler(ThermalEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThermalEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThermalEventHandler(ThermalEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19423};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AdaptivePerformance::ThermalEventHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
