#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/MotionBlur.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_def.hpp"
CORDL_MODULE_EXPORT(MotionBlur)
namespace UnityEngine::Rendering::PostProcessing {
class FloatParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class IntParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class MotionBlur;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::MotionBlur*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::MotionBlur*, "UnityEngine.Rendering.PostProcessing", "MotionBlur");
// Dependencies UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.MotionBlur
class CORDL_TYPE MotionBlur : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings {
public:
// Declarations
/// @brief Field sampleCount, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_sampleCount, put=__cordl_internal_set_sampleCount)) ::UnityEngine::Rendering::PostProcessing::IntParameter*  sampleCount;

/// @brief Field shutterAngle, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_shutterAngle, put=__cordl_internal_set_shutterAngle)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  shutterAngle;

/// @brief Method IsEnabledAndSupported, addr 0x181fb8320, size 0x70, virtual true, abstract: false, final false
inline bool IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

static inline ::UnityEngine::Rendering::PostProcessing::MotionBlur* New_ctor() ;

constexpr ::UnityEngine::Rendering::PostProcessing::IntParameter* const& __cordl_internal_get_sampleCount() const;

constexpr ::UnityEngine::Rendering::PostProcessing::IntParameter*& __cordl_internal_get_sampleCount() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_shutterAngle() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_shutterAngle() ;

constexpr void __cordl_internal_set_sampleCount(::UnityEngine::Rendering::PostProcessing::IntParameter*  value) ;

constexpr void __cordl_internal_set_shutterAngle(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

/// @brief Method .ctor, addr 0x181fb8390, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MotionBlur() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MotionBlur", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MotionBlur(MotionBlur && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MotionBlur", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MotionBlur(MotionBlur const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18574};

/// @brief Field shutterAngle, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___shutterAngle;

/// @brief Field sampleCount, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::IntParameter*  ___sampleCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MotionBlur, ___shutterAngle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::MotionBlur, ___sampleCount) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::MotionBlur) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
