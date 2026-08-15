#pragma once
// IWYU pragma private; include "Dissonance/Demo/AudioProcessingGainsDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioProcessingGainsDisplay)
namespace Dissonance::Demo {
class AudioProcessingTestSetup;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Dissonance::Demo {
class AudioProcessingGainsDisplay;
}
// Write type traits
MARK_REF_T(::Dissonance::Demo::AudioProcessingGainsDisplay*);
DEFINE_IL2CPP_CLASS(::Dissonance::Demo::AudioProcessingGainsDisplay*, "Dissonance.Demo", "AudioProcessingGainsDisplay");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.RectTransform
namespace Dissonance::Demo {
// Is value type: false
// CS Name: Dissonance.Demo.AudioProcessingGainsDisplay
class CORDL_TYPE AudioProcessingGainsDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Bars, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Bars, put=__cordl_internal_set_Bars)) ::ArrayW<::UnityW<::UnityEngine::RectTransform>>  Bars;

/// @brief Field _gains, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__gains, put=__cordl_internal_set__gains)) ::ArrayW<float_t>  _gains;

/// @brief Field _processor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__processor, put=__cordl_internal_set__processor)) ::UnityW<::Dissonance::Demo::AudioProcessingTestSetup>  _processor;

/// @brief Field _self, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__self, put=__cordl_internal_set__self)) ::UnityW<::UnityEngine::RectTransform>  _self;

static inline ::Dissonance::Demo::AudioProcessingGainsDisplay* New_ctor() ;

/// @brief Method Start, addr 0x1805c32a0, size 0x50, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1805c32f0, size 0x140, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::RectTransform>> const& __cordl_internal_get_Bars() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::RectTransform>>& __cordl_internal_get_Bars() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__gains() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__gains() ;

constexpr ::UnityW<::Dissonance::Demo::AudioProcessingTestSetup> const& __cordl_internal_get__processor() const;

constexpr ::UnityW<::Dissonance::Demo::AudioProcessingTestSetup>& __cordl_internal_get__processor() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__self() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__self() ;

constexpr void __cordl_internal_set_Bars(::ArrayW<::UnityW<::UnityEngine::RectTransform>>  value) ;

constexpr void __cordl_internal_set__gains(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__processor(::UnityW<::Dissonance::Demo::AudioProcessingTestSetup>  value) ;

constexpr void __cordl_internal_set__self(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x1805c3430, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioProcessingGainsDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioProcessingGainsDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioProcessingGainsDisplay(AudioProcessingGainsDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioProcessingGainsDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioProcessingGainsDisplay(AudioProcessingGainsDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16841};

/// @brief Field _gains, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<float_t>  ____gains;

/// @brief Field _processor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Dissonance::Demo::AudioProcessingTestSetup>  ____processor;

/// @brief Field Bars, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::RectTransform>>  ___Bars;

/// @brief Field _self, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____self;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Demo::AudioProcessingGainsDisplay, ____gains) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingGainsDisplay, ____processor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingGainsDisplay, ___Bars) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Demo::AudioProcessingGainsDisplay, ____self) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Demo::AudioProcessingGainsDisplay) == 0x40, "Size mismatch!");

} // namespace end def Dissonance::Demo
