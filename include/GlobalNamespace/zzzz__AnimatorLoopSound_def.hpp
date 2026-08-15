#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimatorLoopSound.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AnimatorLoopSound)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimatorLoopSound;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnimatorLoopSound*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimatorLoopSound*, "", "AnimatorLoopSound");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimatorLoopSound
class CORDL_TYPE AnimatorLoopSound : public ::System::Object {
public:
// Declarations
/// @brief Field Asc, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Asc, put=__cordl_internal_set_Asc)) ::UnityW<::GlobalNamespace::AudioSourceController>  Asc;

/// @brief Field AudioTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AudioTransform, put=__cordl_internal_set_AudioTransform)) ::UnityW<::UnityEngine::Transform>  AudioTransform;

/// @brief Field AudioTransformName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AudioTransformName, put=__cordl_internal_set_AudioTransformName)) ::StringW  AudioTransformName;

/// @brief Field Sound, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sound, put=__cordl_internal_set_Sound)) ::UnityW<::GlobalNamespace::AudioAsset>  Sound;

static inline ::GlobalNamespace::AnimatorLoopSound* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get_Asc() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get_Asc() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_AudioTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_AudioTransform() ;

constexpr ::StringW const& __cordl_internal_get_AudioTransformName() const;

constexpr ::StringW& __cordl_internal_get_AudioTransformName() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_Sound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_Sound() ;

constexpr void __cordl_internal_set_Asc(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set_AudioTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_AudioTransformName(::StringW  value) ;

constexpr void __cordl_internal_set_Sound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatorLoopSound() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatorLoopSound", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatorLoopSound(AnimatorLoopSound && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorLoopSound", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatorLoopSound(AnimatorLoopSound const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17479};

/// @brief Field Sound, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___Sound;

/// @brief Field AudioTransformName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___AudioTransformName;

/// @brief Field AudioTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___AudioTransform;

/// @brief Field Asc, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ___Asc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimatorLoopSound, ___Sound) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatorLoopSound, ___AudioTransformName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatorLoopSound, ___AudioTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatorLoopSound, ___Asc) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimatorLoopSound) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
