#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/LensDistortion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_def.hpp"
CORDL_MODULE_EXPORT(LensDistortion)
namespace UnityEngine::Rendering::PostProcessing {
class FloatParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class LensDistortion;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::LensDistortion*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::LensDistortion*, "UnityEngine.Rendering.PostProcessing", "LensDistortion");
// Dependencies UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.LensDistortion
class CORDL_TYPE LensDistortion : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings {
public:
// Declarations
/// @brief Field centerX, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_centerX, put=__cordl_internal_set_centerX)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  centerX;

/// @brief Field centerY, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_centerY, put=__cordl_internal_set_centerY)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  centerY;

/// @brief Field intensity, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_intensity, put=__cordl_internal_set_intensity)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  intensity;

/// @brief Field intensityX, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_intensityX, put=__cordl_internal_set_intensityX)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  intensityX;

/// @brief Field intensityY, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_intensityY, put=__cordl_internal_set_intensityY)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  intensityY;

/// @brief Field scale, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  scale;

/// @brief Method IsEnabledAndSupported, addr 0x181fb7720, size 0x90, virtual true, abstract: false, final false
inline bool IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

static inline ::UnityEngine::Rendering::PostProcessing::LensDistortion* New_ctor() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_centerX() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_centerX() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_centerY() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_centerY() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_intensity() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_intensity() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_intensityX() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_intensityX() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_intensityY() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_intensityY() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_scale() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_scale() ;

constexpr void __cordl_internal_set_centerX(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_centerY(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_intensity(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_intensityX(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_intensityY(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_scale(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

/// @brief Method .ctor, addr 0x181fb77b0, size 0x150, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LensDistortion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LensDistortion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LensDistortion(LensDistortion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LensDistortion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LensDistortion(LensDistortion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18572};

/// @brief Field intensity, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___intensity;

/// @brief Field intensityX, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___intensityX;

/// @brief Field intensityY, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___intensityY;

/// @brief Field centerX, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___centerX;

/// @brief Field centerY, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___centerY;

/// @brief Field scale, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::LensDistortion, ___intensity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::LensDistortion, ___intensityX) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::LensDistortion, ___intensityY) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::LensDistortion, ___centerX) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::LensDistortion, ___centerY) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::LensDistortion, ___scale) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::LensDistortion) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
