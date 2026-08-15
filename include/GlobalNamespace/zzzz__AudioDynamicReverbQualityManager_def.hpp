#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioDynamicReverbQualityManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioDynamicReverbQualityManager)
namespace GlobalNamespace {
class AudioDynamicReverb;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioDynamicReverbQualityManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioDynamicReverbQualityManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioDynamicReverbQualityManager*, "", "AudioDynamicReverbQualityManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioDynamicReverbQualityManager
class CORDL_TYPE AudioDynamicReverbQualityManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _audioDynamicReverb, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioDynamicReverb, put=__cordl_internal_set__audioDynamicReverb)) ::UnityW<::GlobalNamespace::AudioDynamicReverb>  _audioDynamicReverb;

/// @brief Method ApplyQualityEffects, addr 0x18041c6b0, size 0x50, virtual false, abstract: false, final false
inline void ApplyQualityEffects(int32_t  qualityLevel) ;

static inline ::GlobalNamespace::AudioDynamicReverbQualityManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x18041c700, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18041c7f0, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x18041c8e0, size 0x70, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb> const& __cordl_internal_get__audioDynamicReverb() const;

constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb>& __cordl_internal_get__audioDynamicReverb() ;

constexpr void __cordl_internal_set__audioDynamicReverb(::UnityW<::GlobalNamespace::AudioDynamicReverb>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioDynamicReverbQualityManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioDynamicReverbQualityManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioDynamicReverbQualityManager(AudioDynamicReverbQualityManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioDynamicReverbQualityManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioDynamicReverbQualityManager(AudioDynamicReverbQualityManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5176};

/// @brief Field _audioDynamicReverb, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioDynamicReverb>  ____audioDynamicReverb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioDynamicReverbQualityManager, ____audioDynamicReverb) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioDynamicReverbQualityManager) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
