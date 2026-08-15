#pragma once
// IWYU pragma private; include "GlobalNamespace/TriggerSound.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TriggerSound)
namespace GlobalNamespace {
class AudioAsset;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class TriggerSound;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TriggerSound*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TriggerSound*, "", "TriggerSound");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TriggerSound
class CORDL_TYPE TriggerSound : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Sound, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sound, put=__cordl_internal_set_Sound)) ::UnityW<::GlobalNamespace::AudioAsset>  Sound;

/// @brief Field Tag, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tag, put=__cordl_internal_set_Tag)) ::StringW  Tag;

static inline ::GlobalNamespace::TriggerSound* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x1803e1f90, size 0x100, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_Sound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_Sound() ;

constexpr ::StringW const& __cordl_internal_get_Tag() const;

constexpr ::StringW& __cordl_internal_get_Tag() ;

constexpr void __cordl_internal_set_Sound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_Tag(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriggerSound() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriggerSound", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TriggerSound(TriggerSound && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriggerSound", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriggerSound(TriggerSound const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4879};

/// @brief Field Sound, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___Sound;

/// @brief Field Tag, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Tag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TriggerSound, ___Sound) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerSound, ___Tag) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TriggerSound) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
