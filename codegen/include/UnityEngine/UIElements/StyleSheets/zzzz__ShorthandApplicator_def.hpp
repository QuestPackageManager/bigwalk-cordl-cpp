#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/ShorthandApplicator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ShorthandApplicator)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyReader;
}
namespace UnityEngine::UIElements {
struct BackgroundPositionKeyword;
}
namespace UnityEngine::UIElements {
struct BackgroundPosition;
}
namespace UnityEngine::UIElements {
struct BackgroundRepeat;
}
namespace UnityEngine::UIElements {
struct BackgroundSize;
}
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
namespace UnityEngine::UIElements {
struct EasingFunction;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class ShorthandApplicator;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::StyleSheets::ShorthandApplicator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleSheets::ShorthandApplicator*, "UnityEngine.UIElements.StyleSheets", "ShorthandApplicator");
// Dependencies System.Object
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheets.ShorthandApplicator
class CORDL_TYPE ShorthandApplicator : public ::System::Object {
public:
// Declarations
/// @brief Field s_TransitionDelayList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TransitionDelayList, put=setStaticF_s_TransitionDelayList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*  s_TransitionDelayList;

/// @brief Field s_TransitionDurationList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TransitionDurationList, put=setStaticF_s_TransitionDurationList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*  s_TransitionDurationList;

/// @brief Field s_TransitionPropertyList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TransitionPropertyList, put=setStaticF_s_TransitionPropertyList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*  s_TransitionPropertyList;

/// @brief Field s_TransitionTimingFunctionList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TransitionTimingFunctionList, put=setStaticF_s_TransitionTimingFunctionList)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>*  s_TransitionTimingFunctionList;

/// @brief Method ApplyBackgroundPosition, addr 0x182455780, size 0x80, virtual false, abstract: false, final false
static inline void ApplyBackgroundPosition(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<::UnityEngine::UIElements::ComputedStyle>  computedStyle) ;

/// @brief Method ApplyBorderColor, addr 0x182455800, size 0xc0, virtual false, abstract: false, final false
static inline void ApplyBorderColor(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<::UnityEngine::UIElements::ComputedStyle>  computedStyle) ;

/// @brief Method ApplyBorderRadius, addr 0x1824558c0, size 0x270, virtual false, abstract: false, final false
static inline void ApplyBorderRadius(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<::UnityEngine::UIElements::ComputedStyle>  computedStyle) ;

/// @brief Method ApplyBorderWidth, addr 0x182455b30, size 0x1c0, virtual false, abstract: false, final false
static inline void ApplyBorderWidth(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<::UnityEngine::UIElements::ComputedStyle>  computedStyle) ;

/// @brief Method ApplyFlex, addr 0x182455cf0, size 0x90, virtual false, abstract: false, final false
static inline void ApplyFlex(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<::UnityEngine::UIElements::ComputedStyle>  computedStyle) ;

/// @brief Method ApplyMargin, addr 0x182455d80, size 0x1a0, virtual false, abstract: false, final false
static inline void ApplyMargin(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<::UnityEngine::UIElements::ComputedStyle>  computedStyle) ;

/// @brief Method ApplyPadding, addr 0x182455f20, size 0x1b0, virtual false, abstract: false, final false
static inline void ApplyPadding(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<::UnityEngine::UIElements::ComputedStyle>  computedStyle) ;

/// @brief Method ApplyTransition, addr 0x1824560d0, size 0xe0, virtual false, abstract: false, final false
static inline void ApplyTransition(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<::UnityEngine::UIElements::ComputedStyle>  computedStyle) ;

/// @brief Method ApplyUnityBackgroundScaleMode, addr 0x1824561b0, size 0x110, virtual false, abstract: false, final false
static inline void ApplyUnityBackgroundScaleMode(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<::UnityEngine::UIElements::ComputedStyle>  computedStyle) ;

/// @brief Method ApplyUnityTextOutline, addr 0x1824562c0, size 0xd0, virtual false, abstract: false, final false
static inline void ApplyUnityTextOutline(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<::UnityEngine::UIElements::ComputedStyle>  computedStyle) ;

/// @brief Method CompileBackgroundPosition, addr 0x182456390, size 0x670, virtual false, abstract: false, final false
static inline void CompileBackgroundPosition(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<::UnityEngine::UIElements::BackgroundPosition>  backgroundPositionX, ::by_ref<::UnityEngine::UIElements::BackgroundPosition>  backgroundPositionY) ;

/// @brief Method CompileBorderRadius, addr 0x182456a00, size 0xf0, virtual false, abstract: false, final false
static inline void CompileBorderRadius(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<::UnityEngine::UIElements::Length>  top, ::by_ref<::UnityEngine::UIElements::Length>  right, ::by_ref<::UnityEngine::UIElements::Length>  bottom, ::by_ref<::UnityEngine::UIElements::Length>  left) ;

/// @brief Method CompileBoxArea, addr 0x182456af0, size 0x1a0, virtual false, abstract: false, final false
static inline void CompileBoxArea(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<::UnityEngine::Color>  top, ::by_ref<::UnityEngine::Color>  right, ::by_ref<::UnityEngine::Color>  bottom, ::by_ref<::UnityEngine::Color>  left) ;

/// @brief Method CompileBoxArea, addr 0x182456e10, size 0x160, virtual false, abstract: false, final false
static inline void CompileBoxArea(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<::UnityEngine::UIElements::Length>  top, ::by_ref<::UnityEngine::UIElements::Length>  right, ::by_ref<::UnityEngine::UIElements::Length>  bottom, ::by_ref<::UnityEngine::UIElements::Length>  left) ;

/// @brief Method CompileBoxArea, addr 0x182456c90, size 0x180, virtual false, abstract: false, final false
static inline void CompileBoxArea(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<float_t>  top, ::by_ref<float_t>  right, ::by_ref<float_t>  bottom, ::by_ref<float_t>  left) ;

/// @brief Method CompileFlexShorthand, addr 0x182456f70, size 0x200, virtual false, abstract: false, final false
static inline bool CompileFlexShorthand(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<float_t>  grow, ::by_ref<float_t>  shrink, ::by_ref<::UnityEngine::UIElements::Length>  basis) ;

/// @brief Method CompileTextOutline, addr 0x182457170, size 0xb0, virtual false, abstract: false, final false
static inline void CompileTextOutline(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<::UnityEngine::Color>  outlineColor, ::by_ref<float_t>  outlineWidth) ;

/// @brief Method CompileTransition, addr 0x182457220, size 0x6f0, virtual false, abstract: false, final false
static inline void CompileTransition(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*>  outDelay, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*>  outDuration, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*>  outProperty, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>*>  outTimingFunction) ;

/// @brief Method CompileUnityBackgroundScaleMode, addr 0x182457910, size 0xb0, virtual false, abstract: false, final false
static inline void CompileUnityBackgroundScaleMode(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*  reader, ::by_ref<::UnityEngine::UIElements::BackgroundPosition>  backgroundPositionX, ::by_ref<::UnityEngine::UIElements::BackgroundPosition>  backgroundPositionY, ::by_ref<::UnityEngine::UIElements::BackgroundRepeat>  backgroundRepeat, ::by_ref<::UnityEngine::UIElements::BackgroundSize>  backgroundSize) ;

/// @brief Method <CompileBackgroundPosition>g__SwapKeyword|16_0, addr 0x1824579c0, size 0x10, virtual false, abstract: false, final false
static inline void _CompileBackgroundPosition_g__SwapKeyword_16_0(::by_ref<::UnityEngine::UIElements::BackgroundPositionKeyword>  a, ::by_ref<::UnityEngine::UIElements::BackgroundPositionKeyword>  b) ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* getStaticF_s_TransitionDelayList() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* getStaticF_s_TransitionDurationList() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* getStaticF_s_TransitionPropertyList() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* getStaticF_s_TransitionTimingFunctionList() ;

static inline void setStaticF_s_TransitionDelayList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*  value) ;

static inline void setStaticF_s_TransitionDurationList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*  value) ;

static inline void setStaticF_s_TransitionPropertyList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*  value) ;

static inline void setStaticF_s_TransitionTimingFunctionList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShorthandApplicator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShorthandApplicator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShorthandApplicator(ShorthandApplicator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShorthandApplicator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShorthandApplicator(ShorthandApplicator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4683};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StyleSheets::ShorthandApplicator) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
