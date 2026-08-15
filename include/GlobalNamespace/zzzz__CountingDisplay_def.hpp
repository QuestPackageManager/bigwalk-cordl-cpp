#pragma once
// IWYU pragma private; include "GlobalNamespace/CountingDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CountingDisplay)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class IOccasional;
}
namespace GlobalNamespace {
class OccasionalPartner;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CountingDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CountingDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CountingDisplay*, "", "CountingDisplay");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CountingDisplay
class CORDL_TYPE CountingDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioTransform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioTransform, put=__cordl_internal_set_audioTransform)) ::UnityW<::UnityEngine::Transform>  audioTransform;

/// @brief Field changeSound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_changeSound, put=__cordl_internal_set_changeSound)) ::UnityW<::GlobalNamespace::AudioAsset>  changeSound;

/// @brief Field currentValue, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentValue, put=__cordl_internal_set_currentValue)) float_t  currentValue;

/// @brief Field displayedValue, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_displayedValue, put=__cordl_internal_set_displayedValue)) float_t  displayedValue;

/// @brief Field drumOnes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_drumOnes, put=__cordl_internal_set_drumOnes)) ::UnityW<::UnityEngine::Transform>  drumOnes;

/// @brief Field drumTens, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_drumTens, put=__cordl_internal_set_drumTens)) ::UnityW<::UnityEngine::Transform>  drumTens;

/// @brief Field logVerbose, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field occasionalPartner, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_occasionalPartner, put=__cordl_internal_set_occasionalPartner)) ::UnityW<::GlobalNamespace::OccasionalPartner>  occasionalPartner;

/// @brief Field onValueChange, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onValueChange, put=__cordl_internal_set_onValueChange)) ::System::Action_1<int32_t>*  onValueChange;

/// @brief Field parentDisplay, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentDisplay, put=__cordl_internal_set_parentDisplay)) ::UnityW<::GlobalNamespace::CountingDisplay>  parentDisplay;

/// @brief Field timeAtLastChange, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeAtLastChange, put=__cordl_internal_set_timeAtLastChange)) float_t  timeAtLastChange;

/// @brief Field valueAtLastChange, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_valueAtLastChange, put=__cordl_internal_set_valueAtLastChange)) float_t  valueAtLastChange;

/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr operator  ::GlobalNamespace::IOccasional*() noexcept;

/// @brief Method Awake, addr 0x1803fb390, size 0x110, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetDrumAngle, addr 0x1803fb4a0, size 0x20, virtual false, abstract: false, final false
inline float_t GetDrumAngle(float_t  digit) ;

static inline ::GlobalNamespace::CountingDisplay* New_ctor() ;

/// @brief Method OccasionalUpdate, addr 0x1803fb4c0, size 0x2a0, virtual true, abstract: false, final true
inline void OccasionalUpdate() ;

/// @brief Method SetNumerals, addr 0x1803fb760, size 0x170, virtual false, abstract: false, final false
inline void SetNumerals(float_t  displayedNumber) ;

/// @brief Method SetValue, addr 0x1803fb8d0, size 0x1a0, virtual false, abstract: false, final false
inline void SetValue(int32_t  newValue) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_audioTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_audioTransform() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_changeSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_changeSound() ;

constexpr float_t const& __cordl_internal_get_currentValue() const;

constexpr float_t& __cordl_internal_get_currentValue() ;

constexpr float_t const& __cordl_internal_get_displayedValue() const;

constexpr float_t& __cordl_internal_get_displayedValue() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_drumOnes() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_drumOnes() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_drumTens() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_drumTens() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& __cordl_internal_get_occasionalPartner() const;

constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& __cordl_internal_get_occasionalPartner() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_onValueChange() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_onValueChange() ;

constexpr ::UnityW<::GlobalNamespace::CountingDisplay> const& __cordl_internal_get_parentDisplay() const;

constexpr ::UnityW<::GlobalNamespace::CountingDisplay>& __cordl_internal_get_parentDisplay() ;

constexpr float_t const& __cordl_internal_get_timeAtLastChange() const;

constexpr float_t& __cordl_internal_get_timeAtLastChange() ;

constexpr float_t const& __cordl_internal_get_valueAtLastChange() const;

constexpr float_t& __cordl_internal_get_valueAtLastChange() ;

constexpr void __cordl_internal_set_audioTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_changeSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_currentValue(float_t  value) ;

constexpr void __cordl_internal_set_displayedValue(float_t  value) ;

constexpr void __cordl_internal_set_drumOnes(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_drumTens(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value) ;

constexpr void __cordl_internal_set_onValueChange(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_parentDisplay(::UnityW<::GlobalNamespace::CountingDisplay>  value) ;

constexpr void __cordl_internal_set_timeAtLastChange(float_t  value) ;

constexpr void __cordl_internal_set_valueAtLastChange(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* i___GlobalNamespace__IOccasional() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CountingDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CountingDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CountingDisplay(CountingDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CountingDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CountingDisplay(CountingDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5038};

/// @brief Field drumOnes, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___drumOnes;

/// @brief Field drumTens, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___drumTens;

/// @brief Field parentDisplay, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CountingDisplay>  ___parentDisplay;

/// @brief Field occasionalPartner, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OccasionalPartner>  ___occasionalPartner;

/// @brief Field changeSound, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___changeSound;

/// @brief Field audioTransform, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___audioTransform;

/// @brief Field logVerbose, offset: 0x50, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field currentValue, offset: 0x54, size: 0x4, def value: None
 float_t  ___currentValue;

/// @brief Field onValueChange, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___onValueChange;

/// @brief Field timeAtLastChange, offset: 0x60, size: 0x4, def value: None
 float_t  ___timeAtLastChange;

/// @brief Field valueAtLastChange, offset: 0x64, size: 0x4, def value: None
 float_t  ___valueAtLastChange;

/// @brief Field displayedValue, offset: 0x68, size: 0x4, def value: None
 float_t  ___displayedValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CountingDisplay, ___drumOnes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingDisplay, ___drumTens) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingDisplay, ___parentDisplay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingDisplay, ___occasionalPartner) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingDisplay, ___changeSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingDisplay, ___audioTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingDisplay, ___logVerbose) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingDisplay, ___currentValue) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingDisplay, ___onValueChange) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingDisplay, ___timeAtLastChange) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingDisplay, ___valueAtLastChange) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingDisplay, ___displayedValue) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CountingDisplay) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
