#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/DepthOfField.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_def.hpp"
CORDL_MODULE_EXPORT(DepthOfField)
namespace UnityEngine::Rendering::PostProcessing {
class FloatParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class KernelSizeParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class DepthOfField;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::DepthOfField*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::DepthOfField*, "UnityEngine.Rendering.PostProcessing", "DepthOfField");
// Dependencies UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.DepthOfField
class CORDL_TYPE DepthOfField : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings {
public:
// Declarations
/// @brief Field aperture, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_aperture, put=__cordl_internal_set_aperture)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  aperture;

/// @brief Field focalLength, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_focalLength, put=__cordl_internal_set_focalLength)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  focalLength;

/// @brief Field focusDistance, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_focusDistance, put=__cordl_internal_set_focusDistance)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  focusDistance;

/// @brief Field kernelSize, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_kernelSize, put=__cordl_internal_set_kernelSize)) ::UnityEngine::Rendering::PostProcessing::KernelSizeParameter*  kernelSize;

/// @brief Method IsEnabledAndSupported, addr 0x181fb69b0, size 0x30, virtual true, abstract: false, final false
inline bool IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

static inline ::UnityEngine::Rendering::PostProcessing::DepthOfField* New_ctor() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_aperture() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_aperture() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_focalLength() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_focalLength() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_focusDistance() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_focusDistance() ;

constexpr ::UnityEngine::Rendering::PostProcessing::KernelSizeParameter* const& __cordl_internal_get_kernelSize() const;

constexpr ::UnityEngine::Rendering::PostProcessing::KernelSizeParameter*& __cordl_internal_get_kernelSize() ;

constexpr void __cordl_internal_set_aperture(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_focalLength(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_focusDistance(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_kernelSize(::UnityEngine::Rendering::PostProcessing::KernelSizeParameter*  value) ;

/// @brief Method .ctor, addr 0x181fb69e0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DepthOfField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DepthOfField", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DepthOfField(DepthOfField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DepthOfField", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DepthOfField(DepthOfField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18564};

/// @brief Field focusDistance, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___focusDistance;

/// @brief Field aperture, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___aperture;

/// @brief Field focalLength, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___focalLength;

/// @brief Field kernelSize, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::KernelSizeParameter*  ___kernelSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::DepthOfField, ___focusDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::DepthOfField, ___aperture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::DepthOfField, ___focalLength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::DepthOfField, ___kernelSize) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::DepthOfField) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
