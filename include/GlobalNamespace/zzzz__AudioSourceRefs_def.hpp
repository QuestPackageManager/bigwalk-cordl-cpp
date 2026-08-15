#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSourceRefs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AudioSourceRefs)
namespace UnityEngine {
class AudioChorusFilter;
}
namespace UnityEngine {
class AudioDistortionFilter;
}
namespace UnityEngine {
class AudioEchoFilter;
}
namespace UnityEngine {
class AudioHighPassFilter;
}
namespace UnityEngine {
class AudioLowPassFilter;
}
namespace UnityEngine {
class AudioReverbFilter;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioSourceRefs;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioSourceRefs*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioSourceRefs*, "", "AudioSourceRefs");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioSourceRefs
class CORDL_TYPE AudioSourceRefs : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Chorus, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Chorus, put=__cordl_internal_set_Chorus)) ::UnityW<::UnityEngine::AudioChorusFilter>  Chorus;

/// @brief Field Distortion, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Distortion, put=__cordl_internal_set_Distortion)) ::UnityW<::UnityEngine::AudioDistortionFilter>  Distortion;

/// @brief Field Echo, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Echo, put=__cordl_internal_set_Echo)) ::UnityW<::UnityEngine::AudioEchoFilter>  Echo;

/// @brief Field HP, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_HP, put=__cordl_internal_set_HP)) ::UnityW<::UnityEngine::AudioHighPassFilter>  HP;

/// @brief Field LP, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_LP, put=__cordl_internal_set_LP)) ::UnityW<::UnityEngine::AudioLowPassFilter>  LP;

/// @brief Field Reverb, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Reverb, put=__cordl_internal_set_Reverb)) ::UnityW<::UnityEngine::AudioReverbFilter>  Reverb;

/// @brief Field Source, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Source, put=__cordl_internal_set_Source)) ::UnityW<::UnityEngine::AudioSource>  Source;

/// @brief Method DisableAll, addr 0x18049a6e0, size 0x90, virtual false, abstract: false, final false
inline void DisableAll() ;

static inline ::GlobalNamespace::AudioSourceRefs* New_ctor() ;

constexpr ::UnityW<::UnityEngine::AudioChorusFilter> const& __cordl_internal_get_Chorus() const;

constexpr ::UnityW<::UnityEngine::AudioChorusFilter>& __cordl_internal_get_Chorus() ;

constexpr ::UnityW<::UnityEngine::AudioDistortionFilter> const& __cordl_internal_get_Distortion() const;

constexpr ::UnityW<::UnityEngine::AudioDistortionFilter>& __cordl_internal_get_Distortion() ;

constexpr ::UnityW<::UnityEngine::AudioEchoFilter> const& __cordl_internal_get_Echo() const;

constexpr ::UnityW<::UnityEngine::AudioEchoFilter>& __cordl_internal_get_Echo() ;

constexpr ::UnityW<::UnityEngine::AudioHighPassFilter> const& __cordl_internal_get_HP() const;

constexpr ::UnityW<::UnityEngine::AudioHighPassFilter>& __cordl_internal_get_HP() ;

constexpr ::UnityW<::UnityEngine::AudioLowPassFilter> const& __cordl_internal_get_LP() const;

constexpr ::UnityW<::UnityEngine::AudioLowPassFilter>& __cordl_internal_get_LP() ;

constexpr ::UnityW<::UnityEngine::AudioReverbFilter> const& __cordl_internal_get_Reverb() const;

constexpr ::UnityW<::UnityEngine::AudioReverbFilter>& __cordl_internal_get_Reverb() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_Source() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_Source() ;

constexpr void __cordl_internal_set_Chorus(::UnityW<::UnityEngine::AudioChorusFilter>  value) ;

constexpr void __cordl_internal_set_Distortion(::UnityW<::UnityEngine::AudioDistortionFilter>  value) ;

constexpr void __cordl_internal_set_Echo(::UnityW<::UnityEngine::AudioEchoFilter>  value) ;

constexpr void __cordl_internal_set_HP(::UnityW<::UnityEngine::AudioHighPassFilter>  value) ;

constexpr void __cordl_internal_set_LP(::UnityW<::UnityEngine::AudioLowPassFilter>  value) ;

constexpr void __cordl_internal_set_Reverb(::UnityW<::UnityEngine::AudioReverbFilter>  value) ;

constexpr void __cordl_internal_set_Source(::UnityW<::UnityEngine::AudioSource>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSourceRefs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSourceRefs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSourceRefs(AudioSourceRefs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSourceRefs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSourceRefs(AudioSourceRefs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17582};

/// @brief Field Source, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___Source;

/// @brief Field LP, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioLowPassFilter>  ___LP;

/// @brief Field HP, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioHighPassFilter>  ___HP;

/// @brief Field Echo, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioEchoFilter>  ___Echo;

/// @brief Field Chorus, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioChorusFilter>  ___Chorus;

/// @brief Field Reverb, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioReverbFilter>  ___Reverb;

/// @brief Field Distortion, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioDistortionFilter>  ___Distortion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioSourceRefs, ___Source) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceRefs, ___LP) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceRefs, ___HP) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceRefs, ___Echo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceRefs, ___Chorus) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceRefs, ___Reverb) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSourceRefs, ___Distortion) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioSourceRefs) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
