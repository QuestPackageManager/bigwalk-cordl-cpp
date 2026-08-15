#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbienceSound.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AmbienceVegetationScalerConfig_def.hpp"
#include "GlobalNamespace/zzzz__AudioScatterContainer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AmbienceSound)
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
class AudioLayerContainer;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class AudioVolume;
}
namespace GlobalNamespace {
template<typename T,typename U,typename V>
class FuncOneOut_3;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class AmbienceSound;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AmbienceSound*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AmbienceSound*, "", "AmbienceSound");
// Dependencies AmbienceVegetationScalerConfig, AudioScatterContainer, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AmbienceSound
class CORDL_TYPE AmbienceSound : public ::System::Object {
public:
// Declarations
/// @brief Field BiomeName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_BiomeName, put=__cordl_internal_set_BiomeName)) ::StringW  BiomeName;

/// @brief Field Center, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Center, put=__cordl_internal_set_Center)) ::UnityW<::GlobalNamespace::AudioLayerContainer>  Center;

/// @brief Field MaxVegetationIntensity, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxVegetationIntensity, put=__cordl_internal_set_MaxVegetationIntensity)) float_t  MaxVegetationIntensity;

/// @brief Field ScatterSounds, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScatterSounds, put=__cordl_internal_set_ScatterSounds)) ::ArrayW<::UnityW<::GlobalNamespace::AudioScatterContainer>>  ScatterSounds;

/// @brief Field Side1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Side1, put=__cordl_internal_set_Side1)) ::UnityW<::GlobalNamespace::AudioLayerContainer>  Side1;

/// @brief Field Side2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Side2, put=__cordl_internal_set_Side2)) ::UnityW<::GlobalNamespace::AudioLayerContainer>  Side2;

/// @brief Field VegetationScalers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_VegetationScalers, put=__cordl_internal_set_VegetationScalers)) ::ArrayW<::GlobalNamespace::AmbienceVegetationScalerConfig>  VegetationScalers;

static inline ::GlobalNamespace::AmbienceSound* New_ctor() ;

/// @brief Method PlayCenter, addr 0x1803227b0, size 0x140, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioEvent* PlayCenter(::UnityEngine::Transform*  followTransform, ::UnityEngine::Object*  owner, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc, ::GlobalNamespace::AudioVolume*  occVol, ::GlobalNamespace::AudioVolume*  vegeVol) ;

/// @brief Method PlaySide1, addr 0x1803228f0, size 0x140, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioEvent* PlaySide1(::UnityEngine::Transform*  followTransform, ::UnityEngine::Object*  owner, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc, ::GlobalNamespace::AudioVolume*  occVol, ::GlobalNamespace::AudioVolume*  vegeVol) ;

/// @brief Method PlaySide2, addr 0x180322a30, size 0x140, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioEvent* PlaySide2(::UnityEngine::Transform*  followTransform, ::UnityEngine::Object*  owner, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc, ::GlobalNamespace::AudioVolume*  occVol, ::GlobalNamespace::AudioVolume*  vegeVol) ;

constexpr ::StringW const& __cordl_internal_get_BiomeName() const;

constexpr ::StringW& __cordl_internal_get_BiomeName() ;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& __cordl_internal_get_Center() const;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& __cordl_internal_get_Center() ;

constexpr float_t const& __cordl_internal_get_MaxVegetationIntensity() const;

constexpr float_t& __cordl_internal_get_MaxVegetationIntensity() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioScatterContainer>> const& __cordl_internal_get_ScatterSounds() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioScatterContainer>>& __cordl_internal_get_ScatterSounds() ;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& __cordl_internal_get_Side1() const;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& __cordl_internal_get_Side1() ;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& __cordl_internal_get_Side2() const;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& __cordl_internal_get_Side2() ;

constexpr ::ArrayW<::GlobalNamespace::AmbienceVegetationScalerConfig> const& __cordl_internal_get_VegetationScalers() const;

constexpr ::ArrayW<::GlobalNamespace::AmbienceVegetationScalerConfig>& __cordl_internal_get_VegetationScalers() ;

constexpr void __cordl_internal_set_BiomeName(::StringW  value) ;

constexpr void __cordl_internal_set_Center(::UnityW<::GlobalNamespace::AudioLayerContainer>  value) ;

constexpr void __cordl_internal_set_MaxVegetationIntensity(float_t  value) ;

constexpr void __cordl_internal_set_ScatterSounds(::ArrayW<::UnityW<::GlobalNamespace::AudioScatterContainer>>  value) ;

constexpr void __cordl_internal_set_Side1(::UnityW<::GlobalNamespace::AudioLayerContainer>  value) ;

constexpr void __cordl_internal_set_Side2(::UnityW<::GlobalNamespace::AudioLayerContainer>  value) ;

constexpr void __cordl_internal_set_VegetationScalers(::ArrayW<::GlobalNamespace::AmbienceVegetationScalerConfig>  value) ;

/// @brief Method .ctor, addr 0x180322b70, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AmbienceSound() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AmbienceSound", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AmbienceSound(AmbienceSound && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AmbienceSound", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AmbienceSound(AmbienceSound const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4797};

/// @brief Field BiomeName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___BiomeName;

/// @brief Field Center, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioLayerContainer>  ___Center;

/// @brief Field Side1, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioLayerContainer>  ___Side1;

/// @brief Field Side2, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioLayerContainer>  ___Side2;

/// @brief Field ScatterSounds, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::AudioScatterContainer>>  ___ScatterSounds;

/// @brief Field VegetationScalers, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AmbienceVegetationScalerConfig>  ___VegetationScalers;

/// @brief Field MaxVegetationIntensity, offset: 0x40, size: 0x4, def value: None
 float_t  ___MaxVegetationIntensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AmbienceSound, ___BiomeName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSound, ___Center) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSound, ___Side1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSound, ___Side2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSound, ___ScatterSounds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSound, ___VegetationScalers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSound, ___MaxVegetationIntensity) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AmbienceSound) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
