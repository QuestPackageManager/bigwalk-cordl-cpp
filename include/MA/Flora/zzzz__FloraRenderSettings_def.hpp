#pragma once
// IWYU pragma private; include "MA/Flora/FloraRenderSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(FloraRenderSettings)
namespace MA::Flora {
struct FloraMinimumScreenSizeMode;
}
namespace MA::Flora {
class FloraScreenSizeParameter;
}
namespace UnityEngine::Rendering {
class BoolParameter;
}
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
namespace UnityEngine::Rendering {
class ClampedIntParameter;
}
namespace UnityEngine::Rendering {
template<typename T>
class EnumParameter_1;
}
namespace UnityEngine::Rendering {
class MinFloatParameter;
}
// Forward declare root types
namespace MA::Flora {
class FloraRenderSettings;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraRenderSettings*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraRenderSettings*, "MA.Flora", "FloraRenderSettings");
// Dependencies UnityEngine.Rendering.VolumeComponent
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraRenderSettings
class CORDL_TYPE FloraRenderSettings : public ::UnityEngine::Rendering::VolumeComponent {
public:
// Declarations
/// @brief Field CrossFadeDuration, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_CrossFadeDuration, put=__cordl_internal_set_CrossFadeDuration)) ::UnityEngine::Rendering::ClampedFloatParameter*  CrossFadeDuration;

/// @brief Field MaxRenderDistance, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxRenderDistance, put=__cordl_internal_set_MaxRenderDistance)) ::UnityEngine::Rendering::MinFloatParameter*  MaxRenderDistance;

/// @brief Field MaxShadowDistance, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxShadowDistance, put=__cordl_internal_set_MaxShadowDistance)) ::UnityEngine::Rendering::MinFloatParameter*  MaxShadowDistance;

/// @brief Field MinScreenSize, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinScreenSize, put=__cordl_internal_set_MinScreenSize)) ::MA::Flora::FloraScreenSizeParameter*  MinScreenSize;

/// @brief Field MinScreenSizeAffectsLODGroups, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinScreenSizeAffectsLODGroups, put=__cordl_internal_set_MinScreenSizeAffectsLODGroups)) ::UnityEngine::Rendering::BoolParameter*  MinScreenSizeAffectsLODGroups;

/// @brief Field MinScreenSizeMode, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinScreenSizeMode, put=__cordl_internal_set_MinScreenSizeMode)) ::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraMinimumScreenSizeMode>*  MinScreenSizeMode;

/// @brief Field MinShadowLOD, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinShadowLOD, put=__cordl_internal_set_MinShadowLOD)) ::UnityEngine::Rendering::ClampedIntParameter*  MinShadowLOD;

/// @brief Field RandomizeLODTransition, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_RandomizeLODTransition, put=__cordl_internal_set_RandomizeLODTransition)) ::UnityEngine::Rendering::ClampedFloatParameter*  RandomizeLODTransition;

/// @brief Method Awake, addr 0x1814e7480, size 0xd0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::MA::Flora::FloraRenderSettings* New_ctor() ;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_CrossFadeDuration() const;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_CrossFadeDuration() ;

constexpr ::UnityEngine::Rendering::MinFloatParameter* const& __cordl_internal_get_MaxRenderDistance() const;

constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_MaxRenderDistance() ;

constexpr ::UnityEngine::Rendering::MinFloatParameter* const& __cordl_internal_get_MaxShadowDistance() const;

constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_MaxShadowDistance() ;

constexpr ::MA::Flora::FloraScreenSizeParameter* const& __cordl_internal_get_MinScreenSize() const;

constexpr ::MA::Flora::FloraScreenSizeParameter*& __cordl_internal_get_MinScreenSize() ;

constexpr ::UnityEngine::Rendering::BoolParameter* const& __cordl_internal_get_MinScreenSizeAffectsLODGroups() const;

constexpr ::UnityEngine::Rendering::BoolParameter*& __cordl_internal_get_MinScreenSizeAffectsLODGroups() ;

constexpr ::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraMinimumScreenSizeMode>* const& __cordl_internal_get_MinScreenSizeMode() const;

constexpr ::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraMinimumScreenSizeMode>*& __cordl_internal_get_MinScreenSizeMode() ;

constexpr ::UnityEngine::Rendering::ClampedIntParameter* const& __cordl_internal_get_MinShadowLOD() const;

constexpr ::UnityEngine::Rendering::ClampedIntParameter*& __cordl_internal_get_MinShadowLOD() ;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_RandomizeLODTransition() const;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_RandomizeLODTransition() ;

constexpr void __cordl_internal_set_CrossFadeDuration(::UnityEngine::Rendering::ClampedFloatParameter*  value) ;

constexpr void __cordl_internal_set_MaxRenderDistance(::UnityEngine::Rendering::MinFloatParameter*  value) ;

constexpr void __cordl_internal_set_MaxShadowDistance(::UnityEngine::Rendering::MinFloatParameter*  value) ;

constexpr void __cordl_internal_set_MinScreenSize(::MA::Flora::FloraScreenSizeParameter*  value) ;

constexpr void __cordl_internal_set_MinScreenSizeAffectsLODGroups(::UnityEngine::Rendering::BoolParameter*  value) ;

constexpr void __cordl_internal_set_MinScreenSizeMode(::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraMinimumScreenSizeMode>*  value) ;

constexpr void __cordl_internal_set_MinShadowLOD(::UnityEngine::Rendering::ClampedIntParameter*  value) ;

constexpr void __cordl_internal_set_RandomizeLODTransition(::UnityEngine::Rendering::ClampedFloatParameter*  value) ;

/// @brief Method .ctor, addr 0x1814e7550, size 0x200, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraRenderSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraRenderSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraRenderSettings(FloraRenderSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraRenderSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraRenderSettings(FloraRenderSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13291};

/// @brief Field MaxRenderDistance, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::MinFloatParameter*  ___MaxRenderDistance;

/// @brief Field MaxShadowDistance, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::MinFloatParameter*  ___MaxShadowDistance;

/// @brief Field MinScreenSizeMode, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraMinimumScreenSizeMode>*  ___MinScreenSizeMode;

/// @brief Field MinScreenSize, offset: 0x50, size: 0x8, def value: None
 ::MA::Flora::FloraScreenSizeParameter*  ___MinScreenSize;

/// @brief Field MinShadowLOD, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedIntParameter*  ___MinShadowLOD;

/// @brief Field RandomizeLODTransition, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedFloatParameter*  ___RandomizeLODTransition;

/// @brief Field CrossFadeDuration, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedFloatParameter*  ___CrossFadeDuration;

/// @brief Field MinScreenSizeAffectsLODGroups, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Rendering::BoolParameter*  ___MinScreenSizeAffectsLODGroups;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraRenderSettings, ___MaxRenderDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRenderSettings, ___MaxShadowDistance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRenderSettings, ___MinScreenSizeMode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRenderSettings, ___MinScreenSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRenderSettings, ___MinShadowLOD) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRenderSettings, ___RandomizeLODTransition) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRenderSettings, ___CrossFadeDuration) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRenderSettings, ___MinScreenSizeAffectsLODGroups) == 0x70, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraRenderSettings) == 0x78, "Size mismatch!");

} // namespace end def MA::Flora
