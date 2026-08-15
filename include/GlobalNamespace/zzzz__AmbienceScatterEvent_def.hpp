#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbienceScatterEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AmbienceScatterEvent)
namespace System {
template<typename T>
class IComparable_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct AmbienceScatterEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AmbienceScatterEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AmbienceScatterEvent, "", "AmbienceScatterEvent");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: AmbienceScatterEvent
struct CORDL_TYPE AmbienceScatterEvent {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::AmbienceScatterEvent>"
constexpr operator  ::System::IComparable_1<::GlobalNamespace::AmbienceScatterEvent>*() ;

/// @brief Method CompareTo, addr 0x180322420, size 0x30, virtual true, abstract: false, final true
inline int32_t CompareTo(::GlobalNamespace::AmbienceScatterEvent  other) ;

/// @brief Method .ctor, addr 0x180322450, size 0x50, virtual false, abstract: false, final false
inline void _ctor(float_t  time, ::UnityEngine::Vector3  pos) ;

/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::AmbienceScatterEvent>"
constexpr ::System::IComparable_1<::GlobalNamespace::AmbienceScatterEvent>* i___System__IComparable_1___GlobalNamespace__AmbienceScatterEvent_() ;

// Ctor Parameters []
// @brief default ctor
constexpr AmbienceScatterEvent() ;

// Ctor Parameters [CppParam { name: "Time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr AmbienceScatterEvent(float_t  Time, ::UnityEngine::Vector3  Position) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4794};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Time, offset: 0x0, size: 0x4, def value: None
 float_t  Time;

/// @brief Field Position, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  Position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AmbienceScatterEvent, Time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceScatterEvent, Position) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AmbienceScatterEvent) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
