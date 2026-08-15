#pragma once
// IWYU pragma private; include "GlobalNamespace/TimerDialDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TimerDialDisplay)
namespace GlobalNamespace {
class TimerDialController;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TimerDialDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TimerDialDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimerDialDisplay*, "", "TimerDialDisplay");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimerDialDisplay
class CORDL_TYPE TimerDialDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field dialTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_dialTransform, put=__cordl_internal_set_dialTransform)) ::UnityW<::UnityEngine::Transform>  dialTransform;

/// @brief Field timerDialController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_timerDialController, put=__cordl_internal_set_timerDialController)) ::UnityW<::GlobalNamespace::TimerDialController>  timerDialController;

static inline ::GlobalNamespace::TimerDialDisplay* New_ctor() ;

/// @brief Method Update, addr 0x180419480, size 0xa0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_dialTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_dialTransform() ;

constexpr ::UnityW<::GlobalNamespace::TimerDialController> const& __cordl_internal_get_timerDialController() const;

constexpr ::UnityW<::GlobalNamespace::TimerDialController>& __cordl_internal_get_timerDialController() ;

constexpr void __cordl_internal_set_dialTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_timerDialController(::UnityW<::GlobalNamespace::TimerDialController>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimerDialDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimerDialDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimerDialDisplay(TimerDialDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimerDialDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimerDialDisplay(TimerDialDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5132};

/// @brief Field dialTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___dialTransform;

/// @brief Field timerDialController, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TimerDialController>  ___timerDialController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimerDialDisplay, ___dialTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerDialDisplay, ___timerDialController) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimerDialDisplay) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
