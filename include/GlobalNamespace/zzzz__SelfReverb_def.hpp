#pragma once
// IWYU pragma private; include "GlobalNamespace/SelfReverb.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SelfReverb)
namespace GlobalNamespace {
class AudioDynamicReverb;
}
namespace UnityEngine::Audio {
class AudioMixer;
}
// Forward declare root types
namespace GlobalNamespace {
class SelfReverb;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SelfReverb*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SelfReverb*, "", "SelfReverb");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SelfReverb
class CORDL_TYPE SelfReverb : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _mixer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__mixer, put=__cordl_internal_set__mixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  _mixer;

/// @brief Field _reverb, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__reverb, put=__cordl_internal_set__reverb)) ::UnityW<::GlobalNamespace::AudioDynamicReverb>  _reverb;

static inline ::GlobalNamespace::SelfReverb* New_ctor() ;

/// @brief Method Start, addr 0x1803de5c0, size 0x70, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1803de630, size 0x470, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get__mixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get__mixer() ;

constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb> const& __cordl_internal_get__reverb() const;

constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb>& __cordl_internal_get__reverb() ;

constexpr void __cordl_internal_set__mixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set__reverb(::UnityW<::GlobalNamespace::AudioDynamicReverb>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelfReverb() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelfReverb", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelfReverb(SelfReverb && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelfReverb", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelfReverb(SelfReverb const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4869};

/// @brief Field _mixer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ____mixer;

/// @brief Field _reverb, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioDynamicReverb>  ____reverb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SelfReverb, ____mixer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfReverb, ____reverb) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SelfReverb) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
