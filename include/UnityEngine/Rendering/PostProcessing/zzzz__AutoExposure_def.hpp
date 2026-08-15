#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/AutoExposure.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_def.hpp"
CORDL_MODULE_EXPORT(AutoExposure)
namespace UnityEngine::Rendering::PostProcessing {
class EyeAdaptationParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class FloatParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine::Rendering::PostProcessing {
class Vector2Parameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class AutoExposure;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::AutoExposure*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::AutoExposure*, "UnityEngine.Rendering.PostProcessing", "AutoExposure");
// Dependencies UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.AutoExposure
class CORDL_TYPE AutoExposure : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings {
public:
// Declarations
/// @brief Field eyeAdaptation, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_eyeAdaptation, put=__cordl_internal_set_eyeAdaptation)) ::UnityEngine::Rendering::PostProcessing::EyeAdaptationParameter*  eyeAdaptation;

/// @brief Field filtering, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_filtering, put=__cordl_internal_set_filtering)) ::UnityEngine::Rendering::PostProcessing::Vector2Parameter*  filtering;

/// @brief Field keyValue, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyValue, put=__cordl_internal_set_keyValue)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  keyValue;

/// @brief Field maxLuminance, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxLuminance, put=__cordl_internal_set_maxLuminance)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  maxLuminance;

/// @brief Field minLuminance, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_minLuminance, put=__cordl_internal_set_minLuminance)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  minLuminance;

/// @brief Field speedDown, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_speedDown, put=__cordl_internal_set_speedDown)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  speedDown;

/// @brief Field speedUp, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_speedUp, put=__cordl_internal_set_speedUp)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  speedUp;

/// @brief Method IsEnabledAndSupported, addr 0x181fb14b0, size 0x90, virtual true, abstract: false, final false
inline bool IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

static inline ::UnityEngine::Rendering::PostProcessing::AutoExposure* New_ctor() ;

constexpr ::UnityEngine::Rendering::PostProcessing::EyeAdaptationParameter* const& __cordl_internal_get_eyeAdaptation() const;

constexpr ::UnityEngine::Rendering::PostProcessing::EyeAdaptationParameter*& __cordl_internal_get_eyeAdaptation() ;

constexpr ::UnityEngine::Rendering::PostProcessing::Vector2Parameter* const& __cordl_internal_get_filtering() const;

constexpr ::UnityEngine::Rendering::PostProcessing::Vector2Parameter*& __cordl_internal_get_filtering() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_keyValue() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_keyValue() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_maxLuminance() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_maxLuminance() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_minLuminance() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_minLuminance() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_speedDown() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_speedDown() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_speedUp() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_speedUp() ;

constexpr void __cordl_internal_set_eyeAdaptation(::UnityEngine::Rendering::PostProcessing::EyeAdaptationParameter*  value) ;

constexpr void __cordl_internal_set_filtering(::UnityEngine::Rendering::PostProcessing::Vector2Parameter*  value) ;

constexpr void __cordl_internal_set_keyValue(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_maxLuminance(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_minLuminance(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_speedDown(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_speedUp(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

/// @brief Method .ctor, addr 0x181fb1540, size 0x180, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutoExposure() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutoExposure", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoExposure(AutoExposure && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoExposure", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoExposure(AutoExposure const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18547};

/// @brief Field filtering, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::Vector2Parameter*  ___filtering;

/// @brief Field minLuminance, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___minLuminance;

/// @brief Field maxLuminance, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___maxLuminance;

/// @brief Field keyValue, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___keyValue;

/// @brief Field eyeAdaptation, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::EyeAdaptationParameter*  ___eyeAdaptation;

/// @brief Field speedUp, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___speedUp;

/// @brief Field speedDown, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___speedDown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AutoExposure, ___filtering) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AutoExposure, ___minLuminance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AutoExposure, ___maxLuminance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AutoExposure, ___keyValue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AutoExposure, ___eyeAdaptation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AutoExposure, ___speedUp) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AutoExposure, ___speedDown) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::AutoExposure) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
