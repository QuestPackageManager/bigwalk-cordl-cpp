#pragma once
// IWYU pragma private; include "MA/Flora/FloraDensitySettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
CORDL_MODULE_EXPORT(FloraDensitySettings)
namespace MA::Flora {
struct FloraDensityMode;
}
namespace MA::Flora {
class FloraScreenRangeParameter;
}
namespace UnityEngine::Rendering {
class BoolParameter;
}
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
namespace UnityEngine::Rendering {
template<typename T>
class EnumParameter_1;
}
namespace UnityEngine::Rendering {
class LayerMaskParameter;
}
namespace UnityEngine::Rendering {
class MinFloatParameter;
}
// Forward declare root types
namespace MA::Flora {
class FloraDensitySettings;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraDensitySettings*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraDensitySettings*, "MA.Flora", "FloraDensitySettings");
// Dependencies UnityEngine.Rendering.VolumeComponent
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraDensitySettings
class CORDL_TYPE FloraDensitySettings : public ::UnityEngine::Rendering::VolumeComponent {
public:
// Declarations
/// @brief Field GlobalDensity, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_GlobalDensity, put=__cordl_internal_set_GlobalDensity)) ::UnityEngine::Rendering::ClampedFloatParameter*  GlobalDensity;

/// @brief Field GlobalDensityEnabled, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_GlobalDensityEnabled, put=__cordl_internal_set_GlobalDensityEnabled)) ::UnityEngine::Rendering::BoolParameter*  GlobalDensityEnabled;

/// @brief Field GlobalDensityMask, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_GlobalDensityMask, put=__cordl_internal_set_GlobalDensityMask)) ::UnityEngine::Rendering::LayerMaskParameter*  GlobalDensityMask;

/// @brief Field GlobalDensityMode, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_GlobalDensityMode, put=__cordl_internal_set_GlobalDensityMode)) ::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraDensityMode>*  GlobalDensityMode;

/// @brief Field GlobalDensitySizeThreshold, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_GlobalDensitySizeThreshold, put=__cordl_internal_set_GlobalDensitySizeThreshold)) ::UnityEngine::Rendering::MinFloatParameter*  GlobalDensitySizeThreshold;

/// @brief Field RangeDensity, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_RangeDensity, put=__cordl_internal_set_RangeDensity)) ::UnityEngine::Rendering::ClampedFloatParameter*  RangeDensity;

/// @brief Field RangeDensityAffectsLODGroups, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_RangeDensityAffectsLODGroups, put=__cordl_internal_set_RangeDensityAffectsLODGroups)) ::UnityEngine::Rendering::BoolParameter*  RangeDensityAffectsLODGroups;

/// @brief Field RangeDensityEnabled, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_RangeDensityEnabled, put=__cordl_internal_set_RangeDensityEnabled)) ::UnityEngine::Rendering::BoolParameter*  RangeDensityEnabled;

/// @brief Field RangeDensityFalloff, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_RangeDensityFalloff, put=__cordl_internal_set_RangeDensityFalloff)) ::UnityEngine::Rendering::ClampedFloatParameter*  RangeDensityFalloff;

/// @brief Field RangeDensityFalloffPower, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_RangeDensityFalloffPower, put=__cordl_internal_set_RangeDensityFalloffPower)) ::UnityEngine::Rendering::ClampedFloatParameter*  RangeDensityFalloffPower;

/// @brief Field RangeDensityMask, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_RangeDensityMask, put=__cordl_internal_set_RangeDensityMask)) ::UnityEngine::Rendering::LayerMaskParameter*  RangeDensityMask;

/// @brief Field RangeDensityMode, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_RangeDensityMode, put=__cordl_internal_set_RangeDensityMode)) ::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraDensityMode>*  RangeDensityMode;

/// @brief Field RangeDensityScreenPercentage, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_RangeDensityScreenPercentage, put=__cordl_internal_set_RangeDensityScreenPercentage)) ::MA::Flora::FloraScreenRangeParameter*  RangeDensityScreenPercentage;

/// @brief Method Awake, addr 0x1814c5fc0, size 0x1f0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::MA::Flora::FloraDensitySettings* New_ctor() ;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_GlobalDensity() const;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_GlobalDensity() ;

constexpr ::UnityEngine::Rendering::BoolParameter* const& __cordl_internal_get_GlobalDensityEnabled() const;

constexpr ::UnityEngine::Rendering::BoolParameter*& __cordl_internal_get_GlobalDensityEnabled() ;

constexpr ::UnityEngine::Rendering::LayerMaskParameter* const& __cordl_internal_get_GlobalDensityMask() const;

constexpr ::UnityEngine::Rendering::LayerMaskParameter*& __cordl_internal_get_GlobalDensityMask() ;

constexpr ::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraDensityMode>* const& __cordl_internal_get_GlobalDensityMode() const;

constexpr ::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraDensityMode>*& __cordl_internal_get_GlobalDensityMode() ;

constexpr ::UnityEngine::Rendering::MinFloatParameter* const& __cordl_internal_get_GlobalDensitySizeThreshold() const;

constexpr ::UnityEngine::Rendering::MinFloatParameter*& __cordl_internal_get_GlobalDensitySizeThreshold() ;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_RangeDensity() const;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_RangeDensity() ;

constexpr ::UnityEngine::Rendering::BoolParameter* const& __cordl_internal_get_RangeDensityAffectsLODGroups() const;

constexpr ::UnityEngine::Rendering::BoolParameter*& __cordl_internal_get_RangeDensityAffectsLODGroups() ;

constexpr ::UnityEngine::Rendering::BoolParameter* const& __cordl_internal_get_RangeDensityEnabled() const;

constexpr ::UnityEngine::Rendering::BoolParameter*& __cordl_internal_get_RangeDensityEnabled() ;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_RangeDensityFalloff() const;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_RangeDensityFalloff() ;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_RangeDensityFalloffPower() const;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_RangeDensityFalloffPower() ;

constexpr ::UnityEngine::Rendering::LayerMaskParameter* const& __cordl_internal_get_RangeDensityMask() const;

constexpr ::UnityEngine::Rendering::LayerMaskParameter*& __cordl_internal_get_RangeDensityMask() ;

constexpr ::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraDensityMode>* const& __cordl_internal_get_RangeDensityMode() const;

constexpr ::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraDensityMode>*& __cordl_internal_get_RangeDensityMode() ;

constexpr ::MA::Flora::FloraScreenRangeParameter* const& __cordl_internal_get_RangeDensityScreenPercentage() const;

constexpr ::MA::Flora::FloraScreenRangeParameter*& __cordl_internal_get_RangeDensityScreenPercentage() ;

constexpr void __cordl_internal_set_GlobalDensity(::UnityEngine::Rendering::ClampedFloatParameter*  value) ;

constexpr void __cordl_internal_set_GlobalDensityEnabled(::UnityEngine::Rendering::BoolParameter*  value) ;

constexpr void __cordl_internal_set_GlobalDensityMask(::UnityEngine::Rendering::LayerMaskParameter*  value) ;

constexpr void __cordl_internal_set_GlobalDensityMode(::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraDensityMode>*  value) ;

constexpr void __cordl_internal_set_GlobalDensitySizeThreshold(::UnityEngine::Rendering::MinFloatParameter*  value) ;

constexpr void __cordl_internal_set_RangeDensity(::UnityEngine::Rendering::ClampedFloatParameter*  value) ;

constexpr void __cordl_internal_set_RangeDensityAffectsLODGroups(::UnityEngine::Rendering::BoolParameter*  value) ;

constexpr void __cordl_internal_set_RangeDensityEnabled(::UnityEngine::Rendering::BoolParameter*  value) ;

constexpr void __cordl_internal_set_RangeDensityFalloff(::UnityEngine::Rendering::ClampedFloatParameter*  value) ;

constexpr void __cordl_internal_set_RangeDensityFalloffPower(::UnityEngine::Rendering::ClampedFloatParameter*  value) ;

constexpr void __cordl_internal_set_RangeDensityMask(::UnityEngine::Rendering::LayerMaskParameter*  value) ;

constexpr void __cordl_internal_set_RangeDensityMode(::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraDensityMode>*  value) ;

constexpr void __cordl_internal_set_RangeDensityScreenPercentage(::MA::Flora::FloraScreenRangeParameter*  value) ;

/// @brief Method .ctor, addr 0x1814c61b0, size 0x360, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraDensitySettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraDensitySettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraDensitySettings(FloraDensitySettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraDensitySettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraDensitySettings(FloraDensitySettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13272};

/// @brief Field GlobalDensityMode, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraDensityMode>*  ___GlobalDensityMode;

/// @brief Field GlobalDensityMask, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::LayerMaskParameter*  ___GlobalDensityMask;

/// @brief Field GlobalDensity, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedFloatParameter*  ___GlobalDensity;

/// @brief Field GlobalDensitySizeThreshold, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Rendering::MinFloatParameter*  ___GlobalDensitySizeThreshold;

/// @brief Field RangeDensityMode, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Rendering::EnumParameter_1<::MA::Flora::FloraDensityMode>*  ___RangeDensityMode;

/// @brief Field RangeDensityMask, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Rendering::LayerMaskParameter*  ___RangeDensityMask;

/// @brief Field RangeDensity, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedFloatParameter*  ___RangeDensity;

/// @brief Field RangeDensityFalloff, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedFloatParameter*  ___RangeDensityFalloff;

/// @brief Field RangeDensityScreenPercentage, offset: 0x78, size: 0x8, def value: None
 ::MA::Flora::FloraScreenRangeParameter*  ___RangeDensityScreenPercentage;

/// @brief Field GlobalDensityEnabled, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Rendering::BoolParameter*  ___GlobalDensityEnabled;

/// @brief Field RangeDensityEnabled, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Rendering::BoolParameter*  ___RangeDensityEnabled;

/// @brief Field RangeDensityAffectsLODGroups, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Rendering::BoolParameter*  ___RangeDensityAffectsLODGroups;

/// @brief Field RangeDensityFalloffPower, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedFloatParameter*  ___RangeDensityFalloffPower;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraDensitySettings, ___GlobalDensityMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDensitySettings, ___GlobalDensityMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDensitySettings, ___GlobalDensity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDensitySettings, ___GlobalDensitySizeThreshold) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDensitySettings, ___RangeDensityMode) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDensitySettings, ___RangeDensityMask) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDensitySettings, ___RangeDensity) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDensitySettings, ___RangeDensityFalloff) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDensitySettings, ___RangeDensityScreenPercentage) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDensitySettings, ___GlobalDensityEnabled) == 0x80, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDensitySettings, ___RangeDensityEnabled) == 0x88, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDensitySettings, ___RangeDensityAffectsLODGroups) == 0x90, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDensitySettings, ___RangeDensityFalloffPower) == 0x98, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraDensitySettings) == 0xa0, "Size mismatch!");

} // namespace end def MA::Flora
