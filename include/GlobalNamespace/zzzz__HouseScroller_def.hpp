#pragma once
// IWYU pragma private; include "GlobalNamespace/HouseScroller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HouseScroller)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class HouseScroller;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HouseScroller*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseScroller*, "", "HouseScroller");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HouseScroller
class CORDL_TYPE HouseScroller : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _currentStep, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentStep, put=__cordl_internal_set__currentStep)) int32_t  _currentStep;

/// @brief Field containerTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_containerTransform, put=__cordl_internal_set_containerTransform)) ::UnityW<::UnityEngine::RectTransform>  containerTransform;

 __declspec(property(get=get_currentStep)) int32_t  currentStep;

/// @brief Field downThreshold, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_downThreshold, put=__cordl_internal_set_downThreshold)) float_t  downThreshold;

/// @brief Field hoverRepeatInterval, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverRepeatInterval, put=__cordl_internal_set_hoverRepeatInterval)) float_t  hoverRepeatInterval;

/// @brief Field logVerbose, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field maxSteps, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSteps, put=__cordl_internal_set_maxSteps)) int32_t  maxSteps;

/// @brief Field rectTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rectTransform, put=__cordl_internal_set_rectTransform)) ::UnityW<::UnityEngine::RectTransform>  rectTransform;

/// @brief Field stepDistance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_stepDistance, put=__cordl_internal_set_stepDistance)) float_t  stepDistance;

/// @brief Field timeLastHoverScroll, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeLastHoverScroll, put=__cordl_internal_set_timeLastHoverScroll)) float_t  timeLastHoverScroll;

/// @brief Field upThreshold, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_upThreshold, put=__cordl_internal_set_upThreshold)) float_t  upThreshold;

/// @brief Method DeselectIfRequired, addr 0x180422710, size 0x90, virtual false, abstract: false, final false
inline void DeselectIfRequired() ;

static inline ::GlobalNamespace::HouseScroller* New_ctor() ;

/// @brief Method OnEnable, addr 0x1804227a0, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RecordSelectionScroll, addr 0x1804227b0, size 0x30, virtual false, abstract: false, final false
inline void RecordSelectionScroll() ;

/// @brief Method Reset, addr 0x1804227a0, size 0x10, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Scroll, addr 0x1804227e0, size 0xc0, virtual false, abstract: false, final false
inline void Scroll(int32_t  steps) ;

/// @brief Method Update, addr 0x1804228a0, size 0x2c0, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get__currentStep() const;

constexpr int32_t& __cordl_internal_get__currentStep() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_containerTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_containerTransform() ;

constexpr float_t const& __cordl_internal_get_downThreshold() const;

constexpr float_t& __cordl_internal_get_downThreshold() ;

constexpr float_t const& __cordl_internal_get_hoverRepeatInterval() const;

constexpr float_t& __cordl_internal_get_hoverRepeatInterval() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr int32_t const& __cordl_internal_get_maxSteps() const;

constexpr int32_t& __cordl_internal_get_maxSteps() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_rectTransform() ;

constexpr float_t const& __cordl_internal_get_stepDistance() const;

constexpr float_t& __cordl_internal_get_stepDistance() ;

constexpr float_t const& __cordl_internal_get_timeLastHoverScroll() const;

constexpr float_t& __cordl_internal_get_timeLastHoverScroll() ;

constexpr float_t const& __cordl_internal_get_upThreshold() const;

constexpr float_t& __cordl_internal_get_upThreshold() ;

constexpr void __cordl_internal_set__currentStep(int32_t  value) ;

constexpr void __cordl_internal_set_containerTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_downThreshold(float_t  value) ;

constexpr void __cordl_internal_set_hoverRepeatInterval(float_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_maxSteps(int32_t  value) ;

constexpr void __cordl_internal_set_rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_stepDistance(float_t  value) ;

constexpr void __cordl_internal_set_timeLastHoverScroll(float_t  value) ;

constexpr void __cordl_internal_set_upThreshold(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_currentStep, addr 0x1803d4dd0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_currentStep() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseScroller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseScroller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseScroller(HouseScroller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseScroller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseScroller(HouseScroller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5226};

/// @brief Field rectTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___rectTransform;

/// @brief Field containerTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___containerTransform;

/// @brief Field stepDistance, offset: 0x30, size: 0x4, def value: None
 float_t  ___stepDistance;

/// @brief Field maxSteps, offset: 0x34, size: 0x4, def value: None
 int32_t  ___maxSteps;

/// @brief Field upThreshold, offset: 0x38, size: 0x4, def value: None
 float_t  ___upThreshold;

/// @brief Field downThreshold, offset: 0x3c, size: 0x4, def value: None
 float_t  ___downThreshold;

/// @brief Field hoverRepeatInterval, offset: 0x40, size: 0x4, def value: None
 float_t  ___hoverRepeatInterval;

/// @brief Field logVerbose, offset: 0x44, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _currentStep, offset: 0x48, size: 0x4, def value: None
 int32_t  ____currentStep;

/// @brief Field timeLastHoverScroll, offset: 0x4c, size: 0x4, def value: None
 float_t  ___timeLastHoverScroll;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HouseScroller, ___rectTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseScroller, ___containerTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseScroller, ___stepDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseScroller, ___maxSteps) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseScroller, ___upThreshold) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseScroller, ___downThreshold) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseScroller, ___hoverRepeatInterval) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseScroller, ___logVerbose) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseScroller, ____currentStep) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseScroller, ___timeLastHoverScroll) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HouseScroller) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
