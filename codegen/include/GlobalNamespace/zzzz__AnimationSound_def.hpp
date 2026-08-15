#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimationSound.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AnimationSound)
namespace GlobalNamespace {
struct AnimationSound_AnimationSoundControls;
}
namespace GlobalNamespace {
class AnimationSound___c__DisplayClass10_0;
}
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimationSound;
}
namespace GlobalNamespace {
class AnimationSound___c__DisplayClass10_0;
}
namespace GlobalNamespace {
struct AnimationSound_AnimationSoundControls;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnimationSound*);
MARK_REF_T(::GlobalNamespace::AnimationSound___c__DisplayClass10_0*);
MARK_VAL_T(::GlobalNamespace::AnimationSound_AnimationSoundControls);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimationSound*, "", "AnimationSound");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimationSound___c__DisplayClass10_0*, "", "AnimationSound/<>c__DisplayClass10_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimationSound_AnimationSoundControls, "", "AnimationSound/AnimationSoundControls");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AnimationSound/AnimationSoundControls
struct CORDL_TYPE AnimationSound_AnimationSoundControls {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AnimationSound_AnimationSoundControls() ;

// Ctor Parameters [CppParam { name: "Asset", ty: "::UnityW<::GlobalNamespace::AudioAsset>", modifiers: "", def_value: None }, CppParam { name: "AssetSwap", ty: "::UnityW<::GlobalNamespace::AudioAsset>", modifiers: "", def_value: None }, CppParam { name: "StopTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "SoundOnStop", ty: "::UnityW<::GlobalNamespace::AudioAsset>", modifiers: "", def_value: None }]
constexpr AnimationSound_AnimationSoundControls(::UnityW<::GlobalNamespace::AudioAsset>  Asset, ::UnityW<::GlobalNamespace::AudioAsset>  AssetSwap, float_t  StopTime, ::UnityW<::GlobalNamespace::AudioAsset>  SoundOnStop) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4801};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Asset, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  Asset;

/// @brief Field AssetSwap, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  AssetSwap;

/// @brief Field StopTime, offset: 0x10, size: 0x4, def value: None
 float_t  StopTime;

/// @brief Field SoundOnStop, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  SoundOnStop;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimationSound_AnimationSoundControls, Asset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationSound_AnimationSoundControls, AssetSwap) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationSound_AnimationSoundControls, StopTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationSound_AnimationSoundControls, SoundOnStop) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimationSound_AnimationSoundControls) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AnimationSound::AnimationSoundControls, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimationSound/<>c__DisplayClass10_0
class CORDL_TYPE AnimationSound___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::AnimationSound>  __4__this;

/// @brief Field asc, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_asc, put=__cordl_internal_set_asc)) ::UnityW<::GlobalNamespace::AudioSourceController>  asc;

/// @brief Field control, offset 0x18, size 0x20 
 __declspec(property(get=__cordl_internal_get_control, put=__cordl_internal_set_control)) ::GlobalNamespace::AnimationSound_AnimationSoundControls  control;

static inline ::GlobalNamespace::AnimationSound___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <PlayAnimationSound>b__0, addr 0x180329ad0, size 0x20, virtual false, abstract: false, final false
inline void _PlayAnimationSound_b__0(double_t  _) ;

/// @brief Method <PlayAnimationSound>b__1, addr 0x180329af0, size 0x30, virtual false, abstract: false, final false
inline void _PlayAnimationSound_b__1(double_t  _) ;

/// @brief Method <PlayAnimationSound>b__2, addr 0x180329b20, size 0x110, virtual false, abstract: false, final false
inline void _PlayAnimationSound_b__2(double_t  _) ;

constexpr ::UnityW<::GlobalNamespace::AnimationSound> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::AnimationSound>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get_asc() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get_asc() ;

constexpr ::GlobalNamespace::AnimationSound_AnimationSoundControls const& __cordl_internal_get_control() const;

constexpr ::GlobalNamespace::AnimationSound_AnimationSoundControls& __cordl_internal_get_control() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AnimationSound>  value) ;

constexpr void __cordl_internal_set_asc(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set_control(::GlobalNamespace::AnimationSound_AnimationSoundControls  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationSound___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationSound___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationSound___c__DisplayClass10_0(AnimationSound___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationSound___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationSound___c__DisplayClass10_0(AnimationSound___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4802};

/// @brief Field asc, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ___asc;

/// @brief Field control, offset: 0x18, size: 0x20, def value: None
 ::GlobalNamespace::AnimationSound_AnimationSoundControls  ___control;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AnimationSound>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimationSound___c__DisplayClass10_0, ___asc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationSound___c__DisplayClass10_0, ___control) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationSound___c__DisplayClass10_0, _____4__this) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimationSound___c__DisplayClass10_0) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AnimationSound::AnimationSoundControls, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimationSound
class CORDL_TYPE AnimationSound : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AnimationSoundControls = ::GlobalNamespace::AnimationSound_AnimationSoundControls;

using __c__DisplayClass10_0 = ::GlobalNamespace::AnimationSound___c__DisplayClass10_0;

 __declspec(property(get=get_ControlLookup, put=set_ControlLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::GlobalNamespace::AnimationSound_AnimationSoundControls>*  ControlLookup;

/// @brief Field Controls, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Controls, put=__cordl_internal_set_Controls)) ::ArrayW<::GlobalNamespace::AnimationSound_AnimationSoundControls>  Controls;

/// @brief Field CustomTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomTransform, put=__cordl_internal_set_CustomTransform)) ::UnityW<::UnityEngine::Transform>  CustomTransform;

/// @brief Field LoopDuration, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_LoopDuration, put=__cordl_internal_set_LoopDuration)) float_t  LoopDuration;

/// @brief Field StopAttenuationTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_StopAttenuationTime, put=__cordl_internal_set_StopAttenuationTime)) float_t  StopAttenuationTime;

/// @brief Field <ControlLookup>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ControlLookup_k__BackingField, put=__cordl_internal_set__ControlLookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::GlobalNamespace::AnimationSound_AnimationSoundControls>*  _ControlLookup_k__BackingField;

/// @brief Method Awake, addr 0x180322be0, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::AnimationSound* New_ctor() ;

/// @brief Method PlayAnimationSound, addr 0x180322c80, size 0x280, virtual true, abstract: false, final false
inline void PlayAnimationSound(::GlobalNamespace::AudioAsset*  audioAsset) ;

constexpr ::ArrayW<::GlobalNamespace::AnimationSound_AnimationSoundControls> const& __cordl_internal_get_Controls() const;

constexpr ::ArrayW<::GlobalNamespace::AnimationSound_AnimationSoundControls>& __cordl_internal_get_Controls() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_CustomTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_CustomTransform() ;

constexpr float_t const& __cordl_internal_get_LoopDuration() const;

constexpr float_t& __cordl_internal_get_LoopDuration() ;

constexpr float_t const& __cordl_internal_get_StopAttenuationTime() const;

constexpr float_t& __cordl_internal_get_StopAttenuationTime() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::GlobalNamespace::AnimationSound_AnimationSoundControls>* const& __cordl_internal_get__ControlLookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::GlobalNamespace::AnimationSound_AnimationSoundControls>*& __cordl_internal_get__ControlLookup_k__BackingField() ;

constexpr void __cordl_internal_set_Controls(::ArrayW<::GlobalNamespace::AnimationSound_AnimationSoundControls>  value) ;

constexpr void __cordl_internal_set_CustomTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_LoopDuration(float_t  value) ;

constexpr void __cordl_internal_set_StopAttenuationTime(float_t  value) ;

constexpr void __cordl_internal_set__ControlLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::GlobalNamespace::AnimationSound_AnimationSoundControls>*  value) ;

/// @brief Method .ctor, addr 0x180322f00, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ControlLookup, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::GlobalNamespace::AnimationSound_AnimationSoundControls>* get_ControlLookup() ;

/// @brief Method set_ControlLookup, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_ControlLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::GlobalNamespace::AnimationSound_AnimationSoundControls>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationSound() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationSound", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationSound(AnimationSound && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationSound", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationSound(AnimationSound const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4803};

/// @brief Field CustomTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___CustomTransform;

/// @brief Field StopAttenuationTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___StopAttenuationTime;

/// @brief Field LoopDuration, offset: 0x2c, size: 0x4, def value: None
 float_t  ___LoopDuration;

/// @brief Field Controls, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AnimationSound_AnimationSoundControls>  ___Controls;

/// @brief Field <ControlLookup>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::GlobalNamespace::AnimationSound_AnimationSoundControls>*  ____ControlLookup_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimationSound, ___CustomTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationSound, ___StopAttenuationTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationSound, ___LoopDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationSound, ___Controls) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationSound, ____ControlLookup_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimationSound) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
