#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/ContinuousEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ContinuousEvent)
// Forward declare root types
namespace UnityEngine::Analytics {
class ContinuousEvent;
}
// Write type traits
MARK_REF_T(::UnityEngine::Analytics::ContinuousEvent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Analytics::ContinuousEvent*, "UnityEngine.Analytics", "ContinuousEvent");
// Dependencies System.Object
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.ContinuousEvent
class CORDL_TYPE ContinuousEvent : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContinuousEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContinuousEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuousEvent(ContinuousEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuousEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuousEvent(ContinuousEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21438};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Analytics::ContinuousEvent) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Analytics
