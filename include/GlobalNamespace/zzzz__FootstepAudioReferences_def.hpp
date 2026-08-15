#pragma once
// IWYU pragma private; include "GlobalNamespace/FootstepAudioReferences.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioRandomContainer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FootstepAudioReferences)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioLayerContainer;
}
namespace GlobalNamespace {
class AudioRandomContainer;
}
namespace GlobalNamespace {
class FootstepAudioReferences_FootstepSoundData;
}
namespace GlobalNamespace {
class FootstepAudioReferences_PropSoundPair;
}
namespace GlobalNamespace {
class FootstepAudioReferences_TerrainDetailSoundData;
}
namespace GlobalNamespace {
struct FootstepAudioReferences_TerrainRegion;
}
namespace GlobalNamespace {
class FootstepAudioReferences_TerrainTreeSoundData;
}
namespace GlobalNamespace {
class FootstepAudioReferences_VegetationSoundMatch;
}
namespace GlobalNamespace {
struct FootstepAudioReferences_VegetationType;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace GlobalNamespace {
class WaterDepthSampleData;
}
namespace JBooth::MicroVerseCore {
class MaskTarget;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class PhysicsMaterial;
}
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct FootstepAudioReferences_TerrainRegion;
}
namespace GlobalNamespace {
struct FootstepAudioReferences_VegetationType;
}
namespace GlobalNamespace {
class FootstepAudioReferences;
}
namespace GlobalNamespace {
class FootstepAudioReferences_FootstepSoundData;
}
namespace GlobalNamespace {
class FootstepAudioReferences_PropSoundPair;
}
namespace GlobalNamespace {
class FootstepAudioReferences_TerrainDetailSoundData;
}
namespace GlobalNamespace {
class FootstepAudioReferences_TerrainTreeSoundData;
}
namespace GlobalNamespace {
class FootstepAudioReferences_VegetationSoundMatch;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FootstepAudioReferences_TerrainRegion);
MARK_VAL_T(::GlobalNamespace::FootstepAudioReferences_VegetationType);
MARK_REF_T(::GlobalNamespace::FootstepAudioReferences*);
MARK_REF_T(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*);
MARK_REF_T(::GlobalNamespace::FootstepAudioReferences_PropSoundPair*);
MARK_REF_T(::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*);
MARK_REF_T(::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*);
MARK_REF_T(::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FootstepAudioReferences_TerrainRegion, "", "FootstepAudioReferences/TerrainRegion");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FootstepAudioReferences_VegetationType, "", "FootstepAudioReferences/VegetationType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FootstepAudioReferences*, "", "FootstepAudioReferences");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*, "", "FootstepAudioReferences/FootstepSoundData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FootstepAudioReferences_PropSoundPair*, "", "FootstepAudioReferences/PropSoundPair");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*, "", "FootstepAudioReferences/TerrainDetailSoundData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*, "", "FootstepAudioReferences/TerrainTreeSoundData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch*, "", "FootstepAudioReferences/VegetationSoundMatch");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FootstepAudioReferences/FootstepSoundData
class CORDL_TYPE FootstepAudioReferences_FootstepSoundData : public ::System::Object {
public:
// Declarations
/// @brief Field HandSlideSound, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_HandSlideSound, put=__cordl_internal_set_HandSlideSound)) ::UnityW<::GlobalNamespace::SoundCue>  HandSlideSound;

/// @brief Field JumpSound, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_JumpSound, put=__cordl_internal_set_JumpSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  JumpSound;

/// @brief Field LandSound, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_LandSound, put=__cordl_internal_set_LandSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  LandSound;

/// @brief Field Material, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Material, put=__cordl_internal_set_Material)) ::UnityW<::UnityEngine::PhysicsMaterial>  Material;

/// @brief Field RunSound, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_RunSound, put=__cordl_internal_set_RunSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  RunSound;

/// @brief Field SitSound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_SitSound, put=__cordl_internal_set_SitSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  SitSound;

/// @brief Field SlidingSound, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_SlidingSound, put=__cordl_internal_set_SlidingSound)) ::UnityW<::GlobalNamespace::AudioLayerContainer>  SlidingSound;

/// @brief Field StandSound, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_StandSound, put=__cordl_internal_set_StandSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  StandSound;

/// @brief Field StopSound, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_StopSound, put=__cordl_internal_set_StopSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  StopSound;

/// @brief Field WalkSound, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_WalkSound, put=__cordl_internal_set_WalkSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  WalkSound;

static inline ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_HandSlideSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_HandSlideSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_JumpSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_JumpSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_LandSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_LandSound() ;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& __cordl_internal_get_Material() const;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& __cordl_internal_get_Material() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_RunSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_RunSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_SitSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_SitSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& __cordl_internal_get_SlidingSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& __cordl_internal_get_SlidingSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_StandSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_StandSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_StopSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_StopSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_WalkSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_WalkSound() ;

constexpr void __cordl_internal_set_HandSlideSound(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_JumpSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_LandSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_Material(::UnityW<::UnityEngine::PhysicsMaterial>  value) ;

constexpr void __cordl_internal_set_RunSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_SitSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_SlidingSound(::UnityW<::GlobalNamespace::AudioLayerContainer>  value) ;

constexpr void __cordl_internal_set_StandSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_StopSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_WalkSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FootstepAudioReferences_FootstepSoundData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FootstepAudioReferences_FootstepSoundData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FootstepAudioReferences_FootstepSoundData(FootstepAudioReferences_FootstepSoundData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FootstepAudioReferences_FootstepSoundData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FootstepAudioReferences_FootstepSoundData(FootstepAudioReferences_FootstepSoundData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4831};

/// @brief Field Material, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  ___Material;

/// @brief Field WalkSound, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___WalkSound;

/// @brief Field RunSound, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___RunSound;

/// @brief Field JumpSound, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___JumpSound;

/// @brief Field LandSound, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___LandSound;

/// @brief Field StopSound, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___StopSound;

/// @brief Field SitSound, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___SitSound;

/// @brief Field StandSound, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___StandSound;

/// @brief Field SlidingSound, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioLayerContainer>  ___SlidingSound;

/// @brief Field HandSlideSound, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___HandSlideSound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData, ___Material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData, ___WalkSound) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData, ___RunSound) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData, ___JumpSound) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData, ___LandSound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData, ___StopSound) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData, ___SitSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData, ___StandSound) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData, ___SlidingSound) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData, ___HandSlideSound) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FootstepAudioReferences/VegetationType
struct CORDL_TYPE FootstepAudioReferences_VegetationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FootstepAudioReferences_VegetationType_Unwrapped
enum struct __FootstepAudioReferences_VegetationType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Bush = static_cast<int32_t>(0x1),
__E_Fern = static_cast<int32_t>(0x2),
__E_GrassDry = static_cast<int32_t>(0x3),
__E_Grass = static_cast<int32_t>(0x4),
__E_Rush = static_cast<int32_t>(0x5),
__E_Stem = static_cast<int32_t>(0x6),
__E_Wiry = static_cast<int32_t>(0x7),
__E_Twig = static_cast<int32_t>(0x8),
__E_GrassSmall = static_cast<int32_t>(0x9),
__E_Sheoak = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FootstepAudioReferences_VegetationType_Unwrapped () const noexcept {
return static_cast<__FootstepAudioReferences_VegetationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FootstepAudioReferences_VegetationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FootstepAudioReferences_VegetationType(int32_t  value__) noexcept;

/// @brief Field Bush value: I32(1)
static ::GlobalNamespace::FootstepAudioReferences_VegetationType const Bush;

/// @brief Field Fern value: I32(2)
static ::GlobalNamespace::FootstepAudioReferences_VegetationType const Fern;

/// @brief Field Grass value: I32(4)
static ::GlobalNamespace::FootstepAudioReferences_VegetationType const Grass;

/// @brief Field GrassDry value: I32(3)
static ::GlobalNamespace::FootstepAudioReferences_VegetationType const GrassDry;

/// @brief Field GrassSmall value: I32(9)
static ::GlobalNamespace::FootstepAudioReferences_VegetationType const GrassSmall;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::FootstepAudioReferences_VegetationType const None;

/// @brief Field Rush value: I32(5)
static ::GlobalNamespace::FootstepAudioReferences_VegetationType const Rush;

/// @brief Field Sheoak value: I32(10)
static ::GlobalNamespace::FootstepAudioReferences_VegetationType const Sheoak;

/// @brief Field Stem value: I32(6)
static ::GlobalNamespace::FootstepAudioReferences_VegetationType const Stem;

/// @brief Field Twig value: I32(8)
static ::GlobalNamespace::FootstepAudioReferences_VegetationType const Twig;

/// @brief Field Wiry value: I32(7)
static ::GlobalNamespace::FootstepAudioReferences_VegetationType const Wiry;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4832};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_VegetationType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FootstepAudioReferences_VegetationType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FootstepAudioReferences/TerrainRegion
struct CORDL_TYPE FootstepAudioReferences_TerrainRegion {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FootstepAudioReferences_TerrainRegion_Unwrapped
enum struct __FootstepAudioReferences_TerrainRegion_Unwrapped : int32_t {
__E_NorthWest = static_cast<int32_t>(0x0),
__E_NorthEast = static_cast<int32_t>(0x1),
__E_SouthWest = static_cast<int32_t>(0x2),
__E_SouthEast = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FootstepAudioReferences_TerrainRegion_Unwrapped () const noexcept {
return static_cast<__FootstepAudioReferences_TerrainRegion_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FootstepAudioReferences_TerrainRegion() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FootstepAudioReferences_TerrainRegion(int32_t  value__) noexcept;

/// @brief Field NorthEast value: I32(1)
static ::GlobalNamespace::FootstepAudioReferences_TerrainRegion const NorthEast;

/// @brief Field NorthWest value: I32(0)
static ::GlobalNamespace::FootstepAudioReferences_TerrainRegion const NorthWest;

/// @brief Field SouthEast value: I32(3)
static ::GlobalNamespace::FootstepAudioReferences_TerrainRegion const SouthEast;

/// @brief Field SouthWest value: I32(2)
static ::GlobalNamespace::FootstepAudioReferences_TerrainRegion const SouthWest;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4833};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_TerrainRegion, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FootstepAudioReferences_TerrainRegion) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies FootstepAudioReferences::VegetationType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FootstepAudioReferences/TerrainDetailSoundData
class CORDL_TYPE FootstepAudioReferences_TerrainDetailSoundData : public ::System::Object {
public:
// Declarations
/// @brief Field BoundingSize, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_BoundingSize, put=__cordl_internal_set_BoundingSize)) float_t  BoundingSize;

/// @brief Field DetailObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_DetailObject, put=__cordl_internal_set_DetailObject)) ::UnityW<::UnityEngine::GameObject>  DetailObject;

/// @brief Field SoundType, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SoundType, put=__cordl_internal_set_SoundType)) ::GlobalNamespace::FootstepAudioReferences_VegetationType  SoundType;

static inline ::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData* New_ctor() ;

constexpr float_t const& __cordl_internal_get_BoundingSize() const;

constexpr float_t& __cordl_internal_get_BoundingSize() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_DetailObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_DetailObject() ;

constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType const& __cordl_internal_get_SoundType() const;

constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType& __cordl_internal_get_SoundType() ;

constexpr void __cordl_internal_set_BoundingSize(float_t  value) ;

constexpr void __cordl_internal_set_DetailObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_SoundType(::GlobalNamespace::FootstepAudioReferences_VegetationType  value) ;

/// @brief Method .ctor, addr 0x180346cb0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FootstepAudioReferences_TerrainDetailSoundData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FootstepAudioReferences_TerrainDetailSoundData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FootstepAudioReferences_TerrainDetailSoundData(FootstepAudioReferences_TerrainDetailSoundData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FootstepAudioReferences_TerrainDetailSoundData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FootstepAudioReferences_TerrainDetailSoundData(FootstepAudioReferences_TerrainDetailSoundData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4834};

/// @brief Field DetailObject, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___DetailObject;

/// @brief Field BoundingSize, offset: 0x18, size: 0x4, def value: None
 float_t  ___BoundingSize;

/// @brief Field SoundType, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::FootstepAudioReferences_VegetationType  ___SoundType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData, ___DetailObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData, ___BoundingSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData, ___SoundType) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies FootstepAudioReferences::VegetationType, System.Object, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: FootstepAudioReferences/TerrainTreeSoundData
class CORDL_TYPE FootstepAudioReferences_TerrainTreeSoundData : public ::System::Object {
public:
// Declarations
/// @brief Field BoundingSize, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_BoundingSize, put=__cordl_internal_set_BoundingSize)) float_t  BoundingSize;

/// @brief Field HeightOffset, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_HeightOffset, put=__cordl_internal_set_HeightOffset)) float_t  HeightOffset;

/// @brief Field HorizontalOffset, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_HorizontalOffset, put=__cordl_internal_set_HorizontalOffset)) ::UnityEngine::Vector2  HorizontalOffset;

/// @brief Field SoundType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_SoundType, put=__cordl_internal_set_SoundType)) ::GlobalNamespace::FootstepAudioReferences_VegetationType  SoundType;

/// @brief Field TreeObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_TreeObject, put=__cordl_internal_set_TreeObject)) ::UnityW<::UnityEngine::GameObject>  TreeObject;

static inline ::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData* New_ctor() ;

constexpr float_t const& __cordl_internal_get_BoundingSize() const;

constexpr float_t& __cordl_internal_get_BoundingSize() ;

constexpr float_t const& __cordl_internal_get_HeightOffset() const;

constexpr float_t& __cordl_internal_get_HeightOffset() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_HorizontalOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_HorizontalOffset() ;

constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType const& __cordl_internal_get_SoundType() const;

constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType& __cordl_internal_get_SoundType() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_TreeObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_TreeObject() ;

constexpr void __cordl_internal_set_BoundingSize(float_t  value) ;

constexpr void __cordl_internal_set_HeightOffset(float_t  value) ;

constexpr void __cordl_internal_set_HorizontalOffset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_SoundType(::GlobalNamespace::FootstepAudioReferences_VegetationType  value) ;

constexpr void __cordl_internal_set_TreeObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x180346cc0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FootstepAudioReferences_TerrainTreeSoundData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FootstepAudioReferences_TerrainTreeSoundData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FootstepAudioReferences_TerrainTreeSoundData(FootstepAudioReferences_TerrainTreeSoundData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FootstepAudioReferences_TerrainTreeSoundData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FootstepAudioReferences_TerrainTreeSoundData(FootstepAudioReferences_TerrainTreeSoundData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4835};

/// @brief Field TreeObject, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___TreeObject;

/// @brief Field BoundingSize, offset: 0x18, size: 0x4, def value: None
 float_t  ___BoundingSize;

/// @brief Field HeightOffset, offset: 0x1c, size: 0x4, def value: None
 float_t  ___HeightOffset;

/// @brief Field HorizontalOffset, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___HorizontalOffset;

/// @brief Field SoundType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::FootstepAudioReferences_VegetationType  ___SoundType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData, ___TreeObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData, ___BoundingSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData, ___HeightOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData, ___HorizontalOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData, ___SoundType) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies FootstepAudioReferences::VegetationType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FootstepAudioReferences/VegetationSoundMatch
class CORDL_TYPE FootstepAudioReferences_VegetationSoundMatch : public ::System::Object {
public:
// Declarations
/// @brief Field RustleSound, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_RustleSound, put=__cordl_internal_set_RustleSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  RustleSound;

/// @brief Field SoundType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_SoundType, put=__cordl_internal_set_SoundType)) ::GlobalNamespace::FootstepAudioReferences_VegetationType  SoundType;

/// @brief Field WindySound, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_WindySound, put=__cordl_internal_set_WindySound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  WindySound;

/// @brief Field WindyTimeScaler, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_WindyTimeScaler, put=__cordl_internal_set_WindyTimeScaler)) float_t  WindyTimeScaler;

static inline ::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_RustleSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_RustleSound() ;

constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType const& __cordl_internal_get_SoundType() const;

constexpr ::GlobalNamespace::FootstepAudioReferences_VegetationType& __cordl_internal_get_SoundType() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_WindySound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_WindySound() ;

constexpr float_t const& __cordl_internal_get_WindyTimeScaler() const;

constexpr float_t& __cordl_internal_get_WindyTimeScaler() ;

constexpr void __cordl_internal_set_RustleSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_SoundType(::GlobalNamespace::FootstepAudioReferences_VegetationType  value) ;

constexpr void __cordl_internal_set_WindySound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_WindyTimeScaler(float_t  value) ;

/// @brief Method .ctor, addr 0x180346ec0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FootstepAudioReferences_VegetationSoundMatch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FootstepAudioReferences_VegetationSoundMatch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FootstepAudioReferences_VegetationSoundMatch(FootstepAudioReferences_VegetationSoundMatch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FootstepAudioReferences_VegetationSoundMatch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FootstepAudioReferences_VegetationSoundMatch(FootstepAudioReferences_VegetationSoundMatch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4836};

/// @brief Field SoundType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::FootstepAudioReferences_VegetationType  ___SoundType;

/// @brief Field RustleSound, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___RustleSound;

/// @brief Field WindySound, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___WindySound;

/// @brief Field WindyTimeScaler, offset: 0x28, size: 0x4, def value: None
 float_t  ___WindyTimeScaler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch, ___SoundType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch, ___RustleSound) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch, ___WindySound) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch, ___WindyTimeScaler) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FootstepAudioReferences/PropSoundPair
class CORDL_TYPE FootstepAudioReferences_PropSoundPair : public ::System::Object {
public:
// Declarations
/// @brief Field Material, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Material, put=__cordl_internal_set_Material)) ::UnityW<::UnityEngine::PhysicsMaterial>  Material;

/// @brief Field Sound, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sound, put=__cordl_internal_set_Sound)) ::UnityW<::GlobalNamespace::AudioAsset>  Sound;

static inline ::GlobalNamespace::FootstepAudioReferences_PropSoundPair* New_ctor() ;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& __cordl_internal_get_Material() const;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& __cordl_internal_get_Material() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_Sound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_Sound() ;

constexpr void __cordl_internal_set_Material(::UnityW<::UnityEngine::PhysicsMaterial>  value) ;

constexpr void __cordl_internal_set_Sound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FootstepAudioReferences_PropSoundPair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FootstepAudioReferences_PropSoundPair", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FootstepAudioReferences_PropSoundPair(FootstepAudioReferences_PropSoundPair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FootstepAudioReferences_PropSoundPair", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FootstepAudioReferences_PropSoundPair(FootstepAudioReferences_PropSoundPair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4837};

/// @brief Field Material, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  ___Material;

/// @brief Field Sound, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___Sound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_PropSoundPair, ___Material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences_PropSoundPair, ___Sound) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FootstepAudioReferences_PropSoundPair) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AudioRandomContainer, FootstepAudioReferences::FootstepSoundData, FootstepAudioReferences::PropSoundPair, UnityEngine.LayerMask, UnityEngine.PhysicsMaterial, UnityEngine.ScriptableObject, UnityEngine.TerrainData
namespace GlobalNamespace {
// Is value type: false
// CS Name: FootstepAudioReferences
class CORDL_TYPE FootstepAudioReferences : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using FootstepSoundData = ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData;

using PropSoundPair = ::GlobalNamespace::FootstepAudioReferences_PropSoundPair;

using TerrainDetailSoundData = ::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData;

using TerrainRegion = ::GlobalNamespace::FootstepAudioReferences_TerrainRegion;

using TerrainTreeSoundData = ::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData;

using VegetationSoundMatch = ::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch;

using VegetationType = ::GlobalNamespace::FootstepAudioReferences_VegetationType;

/// @brief Field BAD_TREE_NAMES, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BAD_TREE_NAMES, put=setStaticF_BAD_TREE_NAMES)) ::ArrayW<::StringW>  BAD_TREE_NAMES;

/// @brief Field DefaultFootstepSounds, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_DefaultFootstepSounds, put=__cordl_internal_set_DefaultFootstepSounds)) ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  DefaultFootstepSounds;

/// @brief Field DetailData, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_DetailData, put=__cordl_internal_set_DetailData)) ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  DetailData;

 __declspec(property(get=get_DetailDataLookup, put=set_DetailDataLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  DetailDataLookup;

/// @brief Field FoleyWaterFadeCurve, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_FoleyWaterFadeCurve, put=__cordl_internal_set_FoleyWaterFadeCurve)) ::UnityEngine::AnimationCurve*  FoleyWaterFadeCurve;

/// @brief Field FootstepSounds, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_FootstepSounds, put=__cordl_internal_set_FootstepSounds)) ::ArrayW<::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>  FootstepSounds;

/// @brief Field FootstepWaterFadeCurve, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_FootstepWaterFadeCurve, put=__cordl_internal_set_FootstepWaterFadeCurve)) ::UnityEngine::AnimationCurve*  FootstepWaterFadeCurve;

/// @brief Field GlobalTintData, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_GlobalTintData, put=__cordl_internal_set_GlobalTintData)) ::UnityW<::JBooth::MicroVerseCore::MaskTarget>  GlobalTintData;

 __declspec(property(get=get_GlobalTintLookUp, put=set_GlobalTintLookUp)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::UnityW<::UnityEngine::Texture2D>>*  GlobalTintLookUp;

/// @brief Field LOG_NAMES, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LOG_NAMES, put=setStaticF_LOG_NAMES)) ::ArrayW<::StringW>  LOG_NAMES;

/// @brief Field Layers, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Layers, put=__cordl_internal_set_Layers)) ::UnityEngine::LayerMask  Layers;

/// @brief Field LogData, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_LogData, put=__cordl_internal_set_LogData)) ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  LogData;

 __declspec(property(get=get_LogDataLookup, put=set_LogDataLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  LogDataLookup;

/// @brief Field LogSounds, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_LogSounds, put=__cordl_internal_set_LogSounds)) ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  LogSounds;

 __declspec(property(get=get_PropSoundLookup, put=set_PropSoundLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::UnityW<::GlobalNamespace::AudioAsset>>*  PropSoundLookup;

/// @brief Field PropSounds, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_PropSounds, put=__cordl_internal_set_PropSounds)) ::ArrayW<::GlobalNamespace::FootstepAudioReferences_PropSoundPair*>  PropSounds;

 __declspec(property(get=get_RustleSoundLookup, put=set_RustleSoundLookup)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*  RustleSoundLookup;

/// @brief Field SqueakySandSounds, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_SqueakySandSounds, put=__cordl_internal_set_SqueakySandSounds)) ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  SqueakySandSounds;

/// @brief Field TERRAIN_NAMES, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TERRAIN_NAMES, put=setStaticF_TERRAIN_NAMES)) ::ArrayW<::StringW>  TERRAIN_NAMES;

/// @brief Field TerrainData, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_TerrainData, put=__cordl_internal_set_TerrainData)) ::ArrayW<::UnityW<::UnityEngine::TerrainData>>  TerrainData;

 __declspec(property(get=get_TerrainDataLookUp, put=set_TerrainDataLookUp)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_TerrainRegion,::UnityW<::UnityEngine::TerrainData>>*  TerrainDataLookUp;

/// @brief Field TerrainMaterials, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TerrainMaterials, put=__cordl_internal_set_TerrainMaterials)) ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  TerrainMaterials;

/// @brief Field TreeData, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_TreeData, put=__cordl_internal_set_TreeData)) ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*  TreeData;

 __declspec(property(get=get_TreeDataLookup, put=set_TreeDataLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*  TreeDataLookup;

/// @brief Field VegetationSoundMatches, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_VegetationSoundMatches, put=__cordl_internal_set_VegetationSoundMatches)) ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch*>*  VegetationSoundMatches;

/// @brief Field VegetationSoundPriority, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_VegetationSoundPriority, put=__cordl_internal_set_VegetationSoundPriority)) ::ArrayW<::UnityW<::GlobalNamespace::AudioRandomContainer>>  VegetationSoundPriority;

/// @brief Field WaterBobSound, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterBobSound, put=__cordl_internal_set_WaterBobSound)) ::UnityW<::GlobalNamespace::AudioAsset>  WaterBobSound;

/// @brief Field WaterDepthData, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterDepthData, put=__cordl_internal_set_WaterDepthData)) ::UnityW<::GlobalNamespace::WaterDepthSampleData>  WaterDepthData;

/// @brief Field WaterJumpSound, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterJumpSound, put=__cordl_internal_set_WaterJumpSound)) ::UnityW<::GlobalNamespace::AudioAsset>  WaterJumpSound;

/// @brief Field WaterLandSound, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterLandSound, put=__cordl_internal_set_WaterLandSound)) ::UnityW<::GlobalNamespace::AudioAsset>  WaterLandSound;

/// @brief Field WaterMoveBodySound, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterMoveBodySound, put=__cordl_internal_set_WaterMoveBodySound)) ::UnityW<::GlobalNamespace::AudioAsset>  WaterMoveBodySound;

/// @brief Field WaterMoveSound, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterMoveSound, put=__cordl_internal_set_WaterMoveSound)) ::UnityW<::GlobalNamespace::AudioAsset>  WaterMoveSound;

/// @brief Field WaterRunSound, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterRunSound, put=__cordl_internal_set_WaterRunSound)) ::UnityW<::GlobalNamespace::AudioAsset>  WaterRunSound;

/// @brief Field WaterSitSound, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterSitSound, put=__cordl_internal_set_WaterSitSound)) ::UnityW<::GlobalNamespace::AudioAsset>  WaterSitSound;

/// @brief Field WaterSlapSound, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterSlapSound, put=__cordl_internal_set_WaterSlapSound)) ::UnityW<::GlobalNamespace::AudioAsset>  WaterSlapSound;

/// @brief Field WaterStandSound, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterStandSound, put=__cordl_internal_set_WaterStandSound)) ::UnityW<::GlobalNamespace::AudioAsset>  WaterStandSound;

/// @brief Field WaterVolCurve, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterVolCurve, put=__cordl_internal_set_WaterVolCurve)) ::UnityEngine::AnimationCurve*  WaterVolCurve;

/// @brief Field WaterWalkSound, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterWalkSound, put=__cordl_internal_set_WaterWalkSound)) ::UnityW<::GlobalNamespace::AudioAsset>  WaterWalkSound;

 __declspec(property(get=get_WindySoundLookup, put=set_WindySoundLookup)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*  WindySoundLookup;

 __declspec(property(get=get_WindySoundLookupReversed, put=set_WindySoundLookupReversed)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,::GlobalNamespace::FootstepAudioReferences_VegetationType>*  WindySoundLookupReversed;

/// @brief Field <DetailDataLookup>k__BackingField, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__DetailDataLookup_k__BackingField, put=__cordl_internal_set__DetailDataLookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  _DetailDataLookup_k__BackingField;

/// @brief Field <GlobalTintLookUp>k__BackingField, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__GlobalTintLookUp_k__BackingField, put=__cordl_internal_set__GlobalTintLookUp_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::UnityW<::UnityEngine::Texture2D>>*  _GlobalTintLookUp_k__BackingField;

/// @brief Field <LogDataLookup>k__BackingField, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__LogDataLookup_k__BackingField, put=__cordl_internal_set__LogDataLookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  _LogDataLookup_k__BackingField;

/// @brief Field <PropSoundLookup>k__BackingField, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__PropSoundLookup_k__BackingField, put=__cordl_internal_set__PropSoundLookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::UnityW<::GlobalNamespace::AudioAsset>>*  _PropSoundLookup_k__BackingField;

/// @brief Field <RustleSoundLookup>k__BackingField, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__RustleSoundLookup_k__BackingField, put=__cordl_internal_set__RustleSoundLookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*  _RustleSoundLookup_k__BackingField;

/// @brief Field <TerrainDataLookUp>k__BackingField, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__TerrainDataLookUp_k__BackingField, put=__cordl_internal_set__TerrainDataLookUp_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_TerrainRegion,::UnityW<::UnityEngine::TerrainData>>*  _TerrainDataLookUp_k__BackingField;

/// @brief Field <TreeDataLookup>k__BackingField, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__TreeDataLookup_k__BackingField, put=__cordl_internal_set__TreeDataLookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*  _TreeDataLookup_k__BackingField;

/// @brief Field <WindySoundLookupReversed>k__BackingField, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__WindySoundLookupReversed_k__BackingField, put=__cordl_internal_set__WindySoundLookupReversed_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,::GlobalNamespace::FootstepAudioReferences_VegetationType>*  _WindySoundLookupReversed_k__BackingField;

/// @brief Field <WindySoundLookup>k__BackingField, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__WindySoundLookup_k__BackingField, put=__cordl_internal_set__WindySoundLookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*  _WindySoundLookup_k__BackingField;

/// @brief Field _footstepSoundLookup, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__footstepSoundLookup, put=__cordl_internal_set__footstepSoundLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>*  _footstepSoundLookup;

/// @brief Method GetDetailRustleSound, addr 0x180334de0, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioRandomContainer> GetDetailRustleSound(::UnityEngine::GameObject*  prototype) ;

/// @brief Method GetDetailWindySound, addr 0x180334e70, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioRandomContainer> GetDetailWindySound(::UnityEngine::GameObject*  prototype) ;

/// @brief Method GetFootstepSound, addr 0x180334fc0, size 0xf0, virtual false, abstract: false, final false
inline ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData* GetFootstepSound(::UnityEngine::PhysicsMaterial*  material, ::by_ref<::GlobalNamespace::AudioAsset*>  propLayer) ;

/// @brief Method GetFootstepSound, addr 0x180334f00, size 0xc0, virtual false, abstract: false, final false
inline ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData* GetFootstepSound(int32_t  terrainTexture) ;

/// @brief Method GetTreeRustleSound, addr 0x1803350b0, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioRandomContainer> GetTreeRustleSound(::UnityEngine::GameObject*  prototype) ;

/// @brief Method GetTreeWindySound, addr 0x180335140, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioRandomContainer> GetTreeWindySound(::UnityEngine::GameObject*  prototype) ;

/// @brief Method GetTreeness, addr 0x1803351d0, size 0x70, virtual false, abstract: false, final false
inline float_t GetTreeness(::UnityEngine::GameObject*  prototype) ;

/// @brief Method GetWaterVol, addr 0x180335240, size 0x90, virtual false, abstract: false, final false
inline float_t GetWaterVol(float_t  depth, ::by_ref<float_t>  footstepFadeVol, ::by_ref<float_t>  foleyFadeVol) ;

static inline ::GlobalNamespace::FootstepAudioReferences* New_ctor() ;

/// @brief Method OnEnable, addr 0x1803352d0, size 0xcd0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x180335fa0, size 0xa40, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData* const& __cordl_internal_get_DefaultFootstepSounds() const;

constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*& __cordl_internal_get_DefaultFootstepSounds() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>* const& __cordl_internal_get_DetailData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*& __cordl_internal_get_DetailData() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_FoleyWaterFadeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_FoleyWaterFadeCurve() ;

constexpr ::ArrayW<::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*> const& __cordl_internal_get_FootstepSounds() const;

constexpr ::ArrayW<::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>& __cordl_internal_get_FootstepSounds() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_FootstepWaterFadeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_FootstepWaterFadeCurve() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::MaskTarget> const& __cordl_internal_get_GlobalTintData() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::MaskTarget>& __cordl_internal_get_GlobalTintData() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_Layers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_Layers() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>* const& __cordl_internal_get_LogData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*& __cordl_internal_get_LogData() ;

constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData* const& __cordl_internal_get_LogSounds() const;

constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*& __cordl_internal_get_LogSounds() ;

constexpr ::ArrayW<::GlobalNamespace::FootstepAudioReferences_PropSoundPair*> const& __cordl_internal_get_PropSounds() const;

constexpr ::ArrayW<::GlobalNamespace::FootstepAudioReferences_PropSoundPair*>& __cordl_internal_get_PropSounds() ;

constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData* const& __cordl_internal_get_SqueakySandSounds() const;

constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*& __cordl_internal_get_SqueakySandSounds() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::TerrainData>> const& __cordl_internal_get_TerrainData() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::TerrainData>>& __cordl_internal_get_TerrainData() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>> const& __cordl_internal_get_TerrainMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>& __cordl_internal_get_TerrainMaterials() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>* const& __cordl_internal_get_TreeData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*& __cordl_internal_get_TreeData() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch*>* const& __cordl_internal_get_VegetationSoundMatches() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch*>*& __cordl_internal_get_VegetationSoundMatches() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioRandomContainer>> const& __cordl_internal_get_VegetationSoundPriority() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioRandomContainer>>& __cordl_internal_get_VegetationSoundPriority() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_WaterBobSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_WaterBobSound() ;

constexpr ::UnityW<::GlobalNamespace::WaterDepthSampleData> const& __cordl_internal_get_WaterDepthData() const;

constexpr ::UnityW<::GlobalNamespace::WaterDepthSampleData>& __cordl_internal_get_WaterDepthData() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_WaterJumpSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_WaterJumpSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_WaterLandSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_WaterLandSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_WaterMoveBodySound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_WaterMoveBodySound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_WaterMoveSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_WaterMoveSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_WaterRunSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_WaterRunSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_WaterSitSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_WaterSitSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_WaterSlapSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_WaterSlapSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_WaterStandSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_WaterStandSound() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_WaterVolCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_WaterVolCurve() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_WaterWalkSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_WaterWalkSound() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>* const& __cordl_internal_get__DetailDataLookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*& __cordl_internal_get__DetailDataLookup_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get__GlobalTintLookUp_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get__GlobalTintLookUp_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>* const& __cordl_internal_get__LogDataLookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*& __cordl_internal_get__LogDataLookup_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::UnityW<::GlobalNamespace::AudioAsset>>* const& __cordl_internal_get__PropSoundLookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::UnityW<::GlobalNamespace::AudioAsset>>*& __cordl_internal_get__PropSoundLookup_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>* const& __cordl_internal_get__RustleSoundLookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*& __cordl_internal_get__RustleSoundLookup_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_TerrainRegion,::UnityW<::UnityEngine::TerrainData>>* const& __cordl_internal_get__TerrainDataLookUp_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_TerrainRegion,::UnityW<::UnityEngine::TerrainData>>*& __cordl_internal_get__TerrainDataLookUp_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>* const& __cordl_internal_get__TreeDataLookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*& __cordl_internal_get__TreeDataLookup_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,::GlobalNamespace::FootstepAudioReferences_VegetationType>* const& __cordl_internal_get__WindySoundLookupReversed_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,::GlobalNamespace::FootstepAudioReferences_VegetationType>*& __cordl_internal_get__WindySoundLookupReversed_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>* const& __cordl_internal_get__WindySoundLookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*& __cordl_internal_get__WindySoundLookup_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>* const& __cordl_internal_get__footstepSoundLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>*& __cordl_internal_get__footstepSoundLookup() ;

constexpr void __cordl_internal_set_DefaultFootstepSounds(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  value) ;

constexpr void __cordl_internal_set_DetailData(::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  value) ;

constexpr void __cordl_internal_set_FoleyWaterFadeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_FootstepSounds(::ArrayW<::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>  value) ;

constexpr void __cordl_internal_set_FootstepWaterFadeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_GlobalTintData(::UnityW<::JBooth::MicroVerseCore::MaskTarget>  value) ;

constexpr void __cordl_internal_set_Layers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_LogData(::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  value) ;

constexpr void __cordl_internal_set_LogSounds(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  value) ;

constexpr void __cordl_internal_set_PropSounds(::ArrayW<::GlobalNamespace::FootstepAudioReferences_PropSoundPair*>  value) ;

constexpr void __cordl_internal_set_SqueakySandSounds(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  value) ;

constexpr void __cordl_internal_set_TerrainData(::ArrayW<::UnityW<::UnityEngine::TerrainData>>  value) ;

constexpr void __cordl_internal_set_TerrainMaterials(::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  value) ;

constexpr void __cordl_internal_set_TreeData(::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*  value) ;

constexpr void __cordl_internal_set_VegetationSoundMatches(::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch*>*  value) ;

constexpr void __cordl_internal_set_VegetationSoundPriority(::ArrayW<::UnityW<::GlobalNamespace::AudioRandomContainer>>  value) ;

constexpr void __cordl_internal_set_WaterBobSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_WaterDepthData(::UnityW<::GlobalNamespace::WaterDepthSampleData>  value) ;

constexpr void __cordl_internal_set_WaterJumpSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_WaterLandSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_WaterMoveBodySound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_WaterMoveSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_WaterRunSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_WaterSitSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_WaterSlapSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_WaterStandSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_WaterVolCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_WaterWalkSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set__DetailDataLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  value) ;

constexpr void __cordl_internal_set__GlobalTintLookUp_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set__LogDataLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  value) ;

constexpr void __cordl_internal_set__PropSoundLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::UnityW<::GlobalNamespace::AudioAsset>>*  value) ;

constexpr void __cordl_internal_set__RustleSoundLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*  value) ;

constexpr void __cordl_internal_set__TerrainDataLookUp_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_TerrainRegion,::UnityW<::UnityEngine::TerrainData>>*  value) ;

constexpr void __cordl_internal_set__TreeDataLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*  value) ;

constexpr void __cordl_internal_set__WindySoundLookupReversed_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,::GlobalNamespace::FootstepAudioReferences_VegetationType>*  value) ;

constexpr void __cordl_internal_set__WindySoundLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*  value) ;

constexpr void __cordl_internal_set__footstepSoundLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>*  value) ;

/// @brief Method .ctor, addr 0x180336c20, size 0x480, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::StringW> getStaticF_BAD_TREE_NAMES() ;

static inline ::ArrayW<::StringW> getStaticF_LOG_NAMES() ;

static inline ::ArrayW<::StringW> getStaticF_TERRAIN_NAMES() ;

/// @brief Method get_DetailDataLookup, addr 0x1803370a0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>* get_DetailDataLookup() ;

/// @brief Method get_GlobalTintLookUp, addr 0x1803370b0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::UnityW<::UnityEngine::Texture2D>>* get_GlobalTintLookUp() ;

/// @brief Method get_LogDataLookup, addr 0x1803370c0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>* get_LogDataLookup() ;

/// @brief Method get_PropSoundLookup, addr 0x1803370d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::UnityW<::GlobalNamespace::AudioAsset>>* get_PropSoundLookup() ;

/// @brief Method get_RustleSoundLookup, addr 0x1803370e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>* get_RustleSoundLookup() ;

/// @brief Method get_TerrainDataLookUp, addr 0x1803370f0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_TerrainRegion,::UnityW<::UnityEngine::TerrainData>>* get_TerrainDataLookUp() ;

/// @brief Method get_TreeDataLookup, addr 0x180337100, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>* get_TreeDataLookup() ;

/// @brief Method get_WindySoundLookup, addr 0x180337120, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>* get_WindySoundLookup() ;

/// @brief Method get_WindySoundLookupReversed, addr 0x180337110, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,::GlobalNamespace::FootstepAudioReferences_VegetationType>* get_WindySoundLookupReversed() ;

static inline void setStaticF_BAD_TREE_NAMES(::ArrayW<::StringW>  value) ;

static inline void setStaticF_LOG_NAMES(::ArrayW<::StringW>  value) ;

static inline void setStaticF_TERRAIN_NAMES(::ArrayW<::StringW>  value) ;

/// @brief Method set_DetailDataLookup, addr 0x180337130, size 0x20, virtual false, abstract: false, final false
inline void set_DetailDataLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  value) ;

/// @brief Method set_GlobalTintLookUp, addr 0x180337150, size 0x20, virtual false, abstract: false, final false
inline void set_GlobalTintLookUp(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::UnityW<::UnityEngine::Texture2D>>*  value) ;

/// @brief Method set_LogDataLookup, addr 0x180337170, size 0x20, virtual false, abstract: false, final false
inline void set_LogDataLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  value) ;

/// @brief Method set_PropSoundLookup, addr 0x180337190, size 0x20, virtual false, abstract: false, final false
inline void set_PropSoundLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::UnityW<::GlobalNamespace::AudioAsset>>*  value) ;

/// @brief Method set_RustleSoundLookup, addr 0x1803371b0, size 0x20, virtual false, abstract: false, final false
inline void set_RustleSoundLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*  value) ;

/// @brief Method set_TerrainDataLookUp, addr 0x1803371d0, size 0x20, virtual false, abstract: false, final false
inline void set_TerrainDataLookUp(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_TerrainRegion,::UnityW<::UnityEngine::TerrainData>>*  value) ;

/// @brief Method set_TreeDataLookup, addr 0x1803371f0, size 0x20, virtual false, abstract: false, final false
inline void set_TreeDataLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*  value) ;

/// @brief Method set_WindySoundLookup, addr 0x180337230, size 0x20, virtual false, abstract: false, final false
inline void set_WindySoundLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*  value) ;

/// @brief Method set_WindySoundLookupReversed, addr 0x180337210, size 0x20, virtual false, abstract: false, final false
inline void set_WindySoundLookupReversed(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,::GlobalNamespace::FootstepAudioReferences_VegetationType>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FootstepAudioReferences() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FootstepAudioReferences", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FootstepAudioReferences(FootstepAudioReferences && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FootstepAudioReferences", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FootstepAudioReferences(FootstepAudioReferences const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4838};

/// @brief Field Layers, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___Layers;

/// @brief Field TerrainMaterials, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  ___TerrainMaterials;

/// @brief Field FootstepSounds, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>  ___FootstepSounds;

/// @brief Field SqueakySandSounds, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  ___SqueakySandSounds;

/// @brief Field DefaultFootstepSounds, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  ___DefaultFootstepSounds;

/// @brief Field LogSounds, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  ___LogSounds;

/// @brief Field PropSounds, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::FootstepAudioReferences_PropSoundPair*>  ___PropSounds;

/// @brief Field TerrainData, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::TerrainData>>  ___TerrainData;

/// @brief Field GlobalTintData, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::MaskTarget>  ___GlobalTintData;

/// @brief Field WaterDepthData, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::WaterDepthSampleData>  ___WaterDepthData;

/// @brief Field VegetationSoundPriority, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::AudioRandomContainer>>  ___VegetationSoundPriority;

/// @brief Field DetailData, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  ___DetailData;

/// @brief Field TreeData, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*  ___TreeData;

/// @brief Field LogData, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  ___LogData;

/// @brief Field VegetationSoundMatches, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::FootstepAudioReferences_VegetationSoundMatch*>*  ___VegetationSoundMatches;

/// @brief Field WaterWalkSound, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___WaterWalkSound;

/// @brief Field WaterRunSound, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___WaterRunSound;

/// @brief Field WaterJumpSound, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___WaterJumpSound;

/// @brief Field WaterLandSound, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___WaterLandSound;

/// @brief Field WaterSitSound, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___WaterSitSound;

/// @brief Field WaterStandSound, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___WaterStandSound;

/// @brief Field WaterBobSound, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___WaterBobSound;

/// @brief Field WaterSlapSound, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___WaterSlapSound;

/// @brief Field WaterMoveSound, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___WaterMoveSound;

/// @brief Field WaterMoveBodySound, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___WaterMoveBodySound;

/// @brief Field WaterVolCurve, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___WaterVolCurve;

/// @brief Field FootstepWaterFadeCurve, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___FootstepWaterFadeCurve;

/// @brief Field FoleyWaterFadeCurve, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___FoleyWaterFadeCurve;

/// @brief Field <TreeDataLookup>k__BackingField, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainTreeSoundData*>*  ____TreeDataLookup_k__BackingField;

/// @brief Field <DetailDataLookup>k__BackingField, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  ____DetailDataLookup_k__BackingField;

/// @brief Field <LogDataLookup>k__BackingField, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  ____LogDataLookup_k__BackingField;

/// @brief Field <PropSoundLookup>k__BackingField, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::UnityW<::GlobalNamespace::AudioAsset>>*  ____PropSoundLookup_k__BackingField;

/// @brief Field <RustleSoundLookup>k__BackingField, offset: 0x118, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*  ____RustleSoundLookup_k__BackingField;

/// @brief Field <WindySoundLookup>k__BackingField, offset: 0x120, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::UnityW<::GlobalNamespace::AudioRandomContainer>>*  ____WindySoundLookup_k__BackingField;

/// @brief Field <WindySoundLookupReversed>k__BackingField, offset: 0x128, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,::GlobalNamespace::FootstepAudioReferences_VegetationType>*  ____WindySoundLookupReversed_k__BackingField;

/// @brief Field <GlobalTintLookUp>k__BackingField, offset: 0x130, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::TerrainData>,::UnityW<::UnityEngine::Texture2D>>*  ____GlobalTintLookUp_k__BackingField;

/// @brief Field <TerrainDataLookUp>k__BackingField, offset: 0x138, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_TerrainRegion,::UnityW<::UnityEngine::TerrainData>>*  ____TerrainDataLookUp_k__BackingField;

/// @brief Field _footstepSoundLookup, offset: 0x140, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::PhysicsMaterial>,::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*>*  ____footstepSoundLookup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___Layers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___TerrainMaterials) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___FootstepSounds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___SqueakySandSounds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___DefaultFootstepSounds) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___LogSounds) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___PropSounds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___TerrainData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___GlobalTintData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___WaterDepthData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___VegetationSoundPriority) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___DetailData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___TreeData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___LogData) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___VegetationSoundMatches) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___WaterWalkSound) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___WaterRunSound) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___WaterJumpSound) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___WaterLandSound) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___WaterSitSound) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___WaterStandSound) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___WaterBobSound) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___WaterSlapSound) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___WaterMoveSound) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___WaterMoveBodySound) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___WaterVolCurve) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___FootstepWaterFadeCurve) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ___FoleyWaterFadeCurve) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ____TreeDataLookup_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ____DetailDataLookup_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ____LogDataLookup_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ____PropSoundLookup_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ____RustleSoundLookup_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ____WindySoundLookup_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ____WindySoundLookupReversed_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ____GlobalTintLookUp_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ____TerrainDataLookUp_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepAudioReferences, ____footstepSoundLookup) == 0x140, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FootstepAudioReferences) == 0x148, "Size mismatch!");

} // namespace end def GlobalNamespace
