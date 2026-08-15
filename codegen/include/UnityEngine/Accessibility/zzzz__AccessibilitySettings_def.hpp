#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilitySettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AccessibilitySettings)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine::Accessibility {
class AccessibilitySettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Accessibility::AccessibilitySettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilitySettings*, "UnityEngine.Accessibility", "AccessibilitySettings");
// Dependencies System.Object
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AccessibilitySettings
class CORDL_TYPE AccessibilitySettings : public ::System::Object {
public:
// Declarations
/// @brief Field boldTextStatusChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_boldTextStatusChanged, put=setStaticF_boldTextStatusChanged)) ::System::Action_1<bool>*  boldTextStatusChanged;

/// @brief Field closedCaptioningStatusChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_closedCaptioningStatusChanged, put=setStaticF_closedCaptioningStatusChanged)) ::System::Action_1<bool>*  closedCaptioningStatusChanged;

/// @brief Field fontScaleChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_fontScaleChanged, put=setStaticF_fontScaleChanged)) ::System::Action_1<float_t>*  fontScaleChanged;

/// @brief Method Internal_OnBoldTextStatusChanged, addr 0x182215710, size 0x60, virtual false, abstract: false, final false
static inline void Internal_OnBoldTextStatusChanged(bool  enabled) ;

/// @brief Method Internal_OnClosedCaptioningStatusChanged, addr 0x182215770, size 0x60, virtual false, abstract: false, final false
static inline void Internal_OnClosedCaptioningStatusChanged(bool  enabled) ;

/// @brief Method Internal_OnFontScaleChanged, addr 0x1822157d0, size 0x60, virtual false, abstract: false, final false
static inline void Internal_OnFontScaleChanged(float_t  newFontScale) ;

/// @brief Method InvokeBoldTextStatusChanged, addr 0x182215830, size 0x30, virtual false, abstract: false, final false
static inline void InvokeBoldTextStatusChanged(bool  enabled) ;

/// @brief Method InvokeClosedCaptionStatusChanged, addr 0x182215860, size 0x30, virtual false, abstract: false, final false
static inline void InvokeClosedCaptionStatusChanged(bool  enabled) ;

/// @brief Method InvokeFontScaleChanged, addr 0x182215890, size 0x30, virtual false, abstract: false, final false
static inline void InvokeFontScaleChanged(float_t  newFontScale) ;

static inline ::System::Action_1<bool>* getStaticF_boldTextStatusChanged() ;

static inline ::System::Action_1<bool>* getStaticF_closedCaptioningStatusChanged() ;

static inline ::System::Action_1<float_t>* getStaticF_fontScaleChanged() ;

static inline void setStaticF_boldTextStatusChanged(::System::Action_1<bool>*  value) ;

static inline void setStaticF_closedCaptioningStatusChanged(::System::Action_1<bool>*  value) ;

static inline void setStaticF_fontScaleChanged(::System::Action_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessibilitySettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessibilitySettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessibilitySettings(AccessibilitySettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessibilitySettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessibilitySettings(AccessibilitySettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21228};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Accessibility::AccessibilitySettings) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
