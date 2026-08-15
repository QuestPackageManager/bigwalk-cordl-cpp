#pragma once
// IWYU pragma private; include "GlobalNamespace/BlurVolumeComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(BlurVolumeComponent)
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
// Forward declare root types
namespace GlobalNamespace {
class BlurVolumeComponent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BlurVolumeComponent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BlurVolumeComponent*, "", "BlurVolumeComponent");
// Dependencies UnityEngine.Rendering.VolumeComponent
namespace GlobalNamespace {
// Is value type: false
// CS Name: BlurVolumeComponent
class CORDL_TYPE BlurVolumeComponent : public ::UnityEngine::Rendering::VolumeComponent {
public:
// Declarations
/// @brief Field horizontalBlur, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_horizontalBlur, put=__cordl_internal_set_horizontalBlur)) ::UnityEngine::Rendering::ClampedFloatParameter*  horizontalBlur;

/// @brief Field verticalBlur, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_verticalBlur, put=__cordl_internal_set_verticalBlur)) ::UnityEngine::Rendering::ClampedFloatParameter*  verticalBlur;

static inline ::GlobalNamespace::BlurVolumeComponent* New_ctor() ;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_horizontalBlur() const;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_horizontalBlur() ;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_verticalBlur() const;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_verticalBlur() ;

constexpr void __cordl_internal_set_horizontalBlur(::UnityEngine::Rendering::ClampedFloatParameter*  value) ;

constexpr void __cordl_internal_set_verticalBlur(::UnityEngine::Rendering::ClampedFloatParameter*  value) ;

/// @brief Method .ctor, addr 0x180324480, size 0x160, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BlurVolumeComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BlurVolumeComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BlurVolumeComponent(BlurVolumeComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlurVolumeComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlurVolumeComponent(BlurVolumeComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4768};

/// @brief Field horizontalBlur, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedFloatParameter*  ___horizontalBlur;

/// @brief Field verticalBlur, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedFloatParameter*  ___verticalBlur;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BlurVolumeComponent, ___horizontalBlur) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurVolumeComponent, ___verticalBlur) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BlurVolumeComponent) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
