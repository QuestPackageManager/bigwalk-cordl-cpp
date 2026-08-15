#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/Grain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_def.hpp"
CORDL_MODULE_EXPORT(Grain)
namespace UnityEngine::Rendering::PostProcessing {
class BoolParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class FloatParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class Grain;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::Grain*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::Grain*, "UnityEngine.Rendering.PostProcessing", "Grain");
// Dependencies UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.Grain
class CORDL_TYPE Grain : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings {
public:
// Declarations
/// @brief Field colored, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_colored, put=__cordl_internal_set_colored)) ::UnityEngine::Rendering::PostProcessing::BoolParameter*  colored;

/// @brief Field intensity, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_intensity, put=__cordl_internal_set_intensity)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  intensity;

/// @brief Field lumContrib, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_lumContrib, put=__cordl_internal_set_lumContrib)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  lumContrib;

/// @brief Field size, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  size;

/// @brief Method IsEnabledAndSupported, addr 0x181fb2690, size 0x20, virtual true, abstract: false, final false
inline bool IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

static inline ::UnityEngine::Rendering::PostProcessing::Grain* New_ctor() ;

constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter* const& __cordl_internal_get_colored() const;

constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter*& __cordl_internal_get_colored() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_intensity() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_intensity() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_lumContrib() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_lumContrib() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_size() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_size() ;

constexpr void __cordl_internal_set_colored(::UnityEngine::Rendering::PostProcessing::BoolParameter*  value) ;

constexpr void __cordl_internal_set_intensity(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_lumContrib(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_size(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

/// @brief Method .ctor, addr 0x181fb7450, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Grain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Grain", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Grain(Grain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Grain", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Grain(Grain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18570};

/// @brief Field colored, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::BoolParameter*  ___colored;

/// @brief Field intensity, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___intensity;

/// @brief Field size, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___size;

/// @brief Field lumContrib, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___lumContrib;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Grain, ___colored) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Grain, ___intensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Grain, ___size) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Grain, ___lumContrib) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::Grain) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
