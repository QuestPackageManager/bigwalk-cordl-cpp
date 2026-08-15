#pragma once
// IWYU pragma private; include "GlobalNamespace/CreditsScroller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CreditsScroller)
namespace GlobalNamespace {
class PeckEffectTimerNetworked;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class CreditsScroller;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreditsScroller*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreditsScroller*, "", "CreditsScroller");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreditsScroller
class CORDL_TYPE CreditsScroller : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field logVerbose, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field rectTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rectTransform, put=__cordl_internal_set_rectTransform)) ::UnityW<::UnityEngine::RectTransform>  rectTransform;

/// @brief Field timer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_timer, put=__cordl_internal_set_timer)) ::UnityW<::GlobalNamespace::PeckEffectTimerNetworked>  timer;

/// @brief Field warmupDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_warmupDuration, put=__cordl_internal_set_warmupDuration)) float_t  warmupDuration;

static inline ::GlobalNamespace::CreditsScroller* New_ctor() ;

/// @brief Method OnEnable, addr 0x1803fbdc0, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetTransform, addr 0x1803fbe10, size 0x60, virtual false, abstract: false, final false
static inline void SetTransform(::UnityEngine::RectTransform*  rectTransform, float_t  normalizedTime) ;

/// @brief Method Update, addr 0x1803fbe70, size 0x100, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_rectTransform() ;

constexpr ::UnityW<::GlobalNamespace::PeckEffectTimerNetworked> const& __cordl_internal_get_timer() const;

constexpr ::UnityW<::GlobalNamespace::PeckEffectTimerNetworked>& __cordl_internal_get_timer() ;

constexpr float_t const& __cordl_internal_get_warmupDuration() const;

constexpr float_t& __cordl_internal_get_warmupDuration() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_timer(::UnityW<::GlobalNamespace::PeckEffectTimerNetworked>  value) ;

constexpr void __cordl_internal_set_warmupDuration(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreditsScroller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreditsScroller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CreditsScroller(CreditsScroller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreditsScroller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreditsScroller(CreditsScroller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5043};

/// @brief Field warmupDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ___warmupDuration;

/// @brief Field rectTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___rectTransform;

/// @brief Field timer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckEffectTimerNetworked>  ___timer;

/// @brief Field logVerbose, offset: 0x38, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreditsScroller, ___warmupDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsScroller, ___rectTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsScroller, ___timer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsScroller, ___logVerbose) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreditsScroller) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
