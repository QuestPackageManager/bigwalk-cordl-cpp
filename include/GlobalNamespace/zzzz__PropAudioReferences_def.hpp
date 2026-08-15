#pragma once
// IWYU pragma private; include "GlobalNamespace/PropAudioReferences.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioVolumeStruct_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PropAudioReferences)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioLayerContainer;
}
namespace GlobalNamespace {
class SoundCue;
}
// Forward declare root types
namespace GlobalNamespace {
class PropAudioReferences;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropAudioReferences*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropAudioReferences*, "", "PropAudioReferences");
// Dependencies AudioVolumeStruct, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropAudioReferences
class CORDL_TYPE PropAudioReferences : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field IsMusicTile, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsMusicTile, put=__cordl_internal_set_IsMusicTile)) bool  IsMusicTile;

/// @brief Field MusicTileBackPackVol, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MusicTileBackPackVol, put=setStaticF_MusicTileBackPackVol)) ::GlobalNamespace::AudioVolumeStruct  MusicTileBackPackVol;

/// @brief Field dudSound, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_dudSound, put=__cordl_internal_set_dudSound)) ::UnityW<::GlobalNamespace::AudioAsset>  dudSound;

/// @brief Field eraseSound, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_eraseSound, put=__cordl_internal_set_eraseSound)) ::UnityW<::GlobalNamespace::AudioAsset>  eraseSound;

/// @brief Field grabSound, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabSound, put=__cordl_internal_set_grabSound)) ::UnityW<::GlobalNamespace::AudioAsset>  grabSound;

/// @brief Field impactHardSound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_impactHardSound, put=__cordl_internal_set_impactHardSound)) ::UnityW<::GlobalNamespace::AudioAsset>  impactHardSound;

/// @brief Field impactKickSound, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_impactKickSound, put=__cordl_internal_set_impactKickSound)) ::UnityW<::GlobalNamespace::AudioAsset>  impactKickSound;

/// @brief Field impactSoftSound, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_impactSoftSound, put=__cordl_internal_set_impactSoftSound)) ::UnityW<::GlobalNamespace::AudioAsset>  impactSoftSound;

/// @brief Field looseLoop, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_looseLoop, put=__cordl_internal_set_looseLoop)) ::UnityW<::GlobalNamespace::SoundCue>  looseLoop;

/// @brief Field offSound, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_offSound, put=__cordl_internal_set_offSound)) ::UnityW<::GlobalNamespace::AudioAsset>  offSound;

/// @brief Field onSound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSound, put=__cordl_internal_set_onSound)) ::UnityW<::GlobalNamespace::AudioAsset>  onSound;

/// @brief Field placeSound, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_placeSound, put=__cordl_internal_set_placeSound)) ::UnityW<::GlobalNamespace::AudioAsset>  placeSound;

/// @brief Field releaseSound, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_releaseSound, put=__cordl_internal_set_releaseSound)) ::UnityW<::GlobalNamespace::AudioAsset>  releaseSound;

/// @brief Field removeSound, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_removeSound, put=__cordl_internal_set_removeSound)) ::UnityW<::GlobalNamespace::AudioAsset>  removeSound;

/// @brief Field rollHardLoop, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_rollHardLoop, put=__cordl_internal_set_rollHardLoop)) ::UnityW<::GlobalNamespace::SoundCue>  rollHardLoop;

/// @brief Field rollSoftLoop, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_rollSoftLoop, put=__cordl_internal_set_rollSoftLoop)) ::UnityW<::GlobalNamespace::SoundCue>  rollSoftLoop;

/// @brief Field writeSound, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_writeSound, put=__cordl_internal_set_writeSound)) ::UnityW<::GlobalNamespace::AudioAsset>  writeSound;

/// @brief Method GetImpactHard, addr 0x1803dccd0, size 0xc0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioLayerContainer> GetImpactHard(int32_t  state) ;

/// @brief Method GetImpactKick, addr 0x1803dcd90, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioAsset> GetImpactKick(int32_t  state) ;

/// @brief Method GetImpactSoft, addr 0x1803dcda0, size 0xc0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioLayerContainer> GetImpactSoft(int32_t  state) ;

static inline ::GlobalNamespace::PropAudioReferences* New_ctor() ;

constexpr bool const& __cordl_internal_get_IsMusicTile() const;

constexpr bool& __cordl_internal_get_IsMusicTile() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_dudSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_dudSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_eraseSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_eraseSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_grabSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_grabSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_impactHardSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_impactHardSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_impactKickSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_impactKickSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_impactSoftSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_impactSoftSound() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_looseLoop() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_looseLoop() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_offSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_offSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_onSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_onSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_placeSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_placeSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_releaseSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_releaseSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_removeSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_removeSound() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_rollHardLoop() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_rollHardLoop() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_rollSoftLoop() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_rollSoftLoop() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_writeSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_writeSound() ;

constexpr void __cordl_internal_set_IsMusicTile(bool  value) ;

constexpr void __cordl_internal_set_dudSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_eraseSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_grabSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_impactHardSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_impactKickSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_impactSoftSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_looseLoop(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_offSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_onSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_placeSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_releaseSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_removeSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_rollHardLoop(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_rollSoftLoop(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_writeSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::AudioVolumeStruct getStaticF_MusicTileBackPackVol() ;

static inline void setStaticF_MusicTileBackPackVol(::GlobalNamespace::AudioVolumeStruct  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropAudioReferences() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropAudioReferences", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropAudioReferences(PropAudioReferences && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropAudioReferences", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropAudioReferences(PropAudioReferences const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4865};

/// @brief Field grabSound, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___grabSound;

/// @brief Field releaseSound, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___releaseSound;

/// @brief Field placeSound, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___placeSound;

/// @brief Field removeSound, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___removeSound;

/// @brief Field impactSoftSound, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___impactSoftSound;

/// @brief Field impactHardSound, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___impactHardSound;

/// @brief Field impactKickSound, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___impactKickSound;

/// @brief Field rollSoftLoop, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___rollSoftLoop;

/// @brief Field rollHardLoop, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___rollHardLoop;

/// @brief Field onSound, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___onSound;

/// @brief Field offSound, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___offSound;

/// @brief Field writeSound, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___writeSound;

/// @brief Field eraseSound, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___eraseSound;

/// @brief Field dudSound, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___dudSound;

/// @brief Field looseLoop, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___looseLoop;

/// @brief Field IsMusicTile, offset: 0x90, size: 0x1, def value: None
 bool  ___IsMusicTile;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropAudioReferences, ___grabSound) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropAudioReferences, ___releaseSound) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropAudioReferences, ___placeSound) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropAudioReferences, ___removeSound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropAudioReferences, ___impactSoftSound) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropAudioReferences, ___impactHardSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropAudioReferences, ___impactKickSound) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropAudioReferences, ___rollSoftLoop) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropAudioReferences, ___rollHardLoop) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropAudioReferences, ___onSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropAudioReferences, ___offSound) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropAudioReferences, ___writeSound) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropAudioReferences, ___eraseSound) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropAudioReferences, ___dudSound) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropAudioReferences, ___looseLoop) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropAudioReferences, ___IsMusicTile) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropAudioReferences) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
