#pragma once
// IWYU pragma private; include "GlobalNamespace/SpeechlessSound.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpeechlessSound)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SpeechlessSound;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpeechlessSound*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpeechlessSound*, "", "SpeechlessSound");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpeechlessSound
class CORDL_TYPE SpeechlessSound : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field BaseLoop, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_BaseLoop, put=__cordl_internal_set_BaseLoop)) ::UnityW<::GlobalNamespace::AudioAsset>  BaseLoop;

/// @brief Field BellRoomLoop, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_BellRoomLoop, put=__cordl_internal_set_BellRoomLoop)) ::UnityW<::GlobalNamespace::AudioAsset>  BellRoomLoop;

/// @brief Field EmitterLoop, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_EmitterLoop, put=__cordl_internal_set_EmitterLoop)) ::UnityW<::GlobalNamespace::AudioAsset>  EmitterLoop;

/// @brief Field EmitterPos, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_EmitterPos, put=__cordl_internal_set_EmitterPos)) ::UnityW<::UnityEngine::Transform>  EmitterPos;

/// @brief Field OffLoop, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OffLoop, put=__cordl_internal_set_OffLoop)) ::UnityW<::GlobalNamespace::AudioAsset>  OffLoop;

/// @brief Field OffSound, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OffSound, put=__cordl_internal_set_OffSound)) ::UnityW<::GlobalNamespace::AudioAsset>  OffSound;

/// @brief Field OnLoop, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLoop, put=__cordl_internal_set_OnLoop)) ::UnityW<::GlobalNamespace::AudioAsset>  OnLoop;

/// @brief Field OrbSpotLoop, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OrbSpotLoop, put=__cordl_internal_set_OrbSpotLoop)) ::UnityW<::GlobalNamespace::AudioAsset>  OrbSpotLoop;

/// @brief Field OrbSpotPos, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OrbSpotPos, put=__cordl_internal_set_OrbSpotPos)) ::UnityW<::UnityEngine::Transform>  OrbSpotPos;

/// @brief Field _baseLoopASC, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseLoopASC, put=__cordl_internal_set__baseLoopASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  _baseLoopASC;

/// @brief Field _bellRoomLoopASC, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__bellRoomLoopASC, put=__cordl_internal_set__bellRoomLoopASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  _bellRoomLoopASC;

/// @brief Field _emitterLoopASC, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__emitterLoopASC, put=__cordl_internal_set__emitterLoopASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  _emitterLoopASC;

/// @brief Field _offLoopASC, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__offLoopASC, put=__cordl_internal_set__offLoopASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  _offLoopASC;

/// @brief Field _onLoopASC, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__onLoopASC, put=__cordl_internal_set__onLoopASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  _onLoopASC;

/// @brief Field _orbSpotLoopASC, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__orbSpotLoopASC, put=__cordl_internal_set__orbSpotLoopASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  _orbSpotLoopASC;

/// @brief Field _speechlessness, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__speechlessness, put=__cordl_internal_set__speechlessness)) float_t  _speechlessness;

/// @brief Method GetX, addr 0x1803ded40, size 0x90, virtual false, abstract: false, final false
inline bool GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

static inline ::GlobalNamespace::SpeechlessSound* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803dedd0, size 0x390, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803df160, size 0x580, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x1803df7a0, size 0x150, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method <OnDisable>g___clearRef|17_0, addr 0x18031db50, size 0x60, virtual false, abstract: false, final false
static inline void _OnDisable_g___clearRef_17_0(::GlobalNamespace::SpeechlessSound*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <OnEnable>g___clearRef|16_0, addr 0x180330bf0, size 0x50, virtual false, abstract: false, final false
static inline void _OnEnable_g___clearRef_16_0(::GlobalNamespace::SpeechlessSound*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <OnEnable>g___clearRef|16_1, addr 0x180330c40, size 0x50, virtual false, abstract: false, final false
static inline void _OnEnable_g___clearRef_16_1(::GlobalNamespace::SpeechlessSound*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <OnEnable>g___clearRef|16_2, addr 0x1803815a0, size 0x60, virtual false, abstract: false, final false
static inline void _OnEnable_g___clearRef_16_2(::GlobalNamespace::SpeechlessSound*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <OnEnable>g___clearRef|16_3, addr 0x1803df6e0, size 0x60, virtual false, abstract: false, final false
static inline void _OnEnable_g___clearRef_16_3(::GlobalNamespace::SpeechlessSound*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <OnEnable>g___clearRef|16_4, addr 0x1803df740, size 0x60, virtual false, abstract: false, final false
static inline void _OnEnable_g___clearRef_16_4(::GlobalNamespace::SpeechlessSound*  p, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_BaseLoop() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_BaseLoop() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_BellRoomLoop() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_BellRoomLoop() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_EmitterLoop() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_EmitterLoop() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_EmitterPos() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_EmitterPos() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_OffLoop() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_OffLoop() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_OffSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_OffSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_OnLoop() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_OnLoop() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_OrbSpotLoop() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_OrbSpotLoop() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_OrbSpotPos() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_OrbSpotPos() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__baseLoopASC() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__baseLoopASC() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__bellRoomLoopASC() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__bellRoomLoopASC() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__emitterLoopASC() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__emitterLoopASC() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__offLoopASC() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__offLoopASC() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__onLoopASC() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__onLoopASC() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__orbSpotLoopASC() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__orbSpotLoopASC() ;

constexpr float_t const& __cordl_internal_get__speechlessness() const;

constexpr float_t& __cordl_internal_get__speechlessness() ;

constexpr void __cordl_internal_set_BaseLoop(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_BellRoomLoop(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_EmitterLoop(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_EmitterPos(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_OffLoop(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_OffSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_OnLoop(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_OrbSpotLoop(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_OrbSpotPos(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__baseLoopASC(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__bellRoomLoopASC(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__emitterLoopASC(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__offLoopASC(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__onLoopASC(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__orbSpotLoopASC(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__speechlessness(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpeechlessSound() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpeechlessSound", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpeechlessSound(SpeechlessSound && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpeechlessSound", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpeechlessSound(SpeechlessSound const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4872};

/// @brief Field BaseLoop, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___BaseLoop;

/// @brief Field OnLoop, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___OnLoop;

/// @brief Field OffLoop, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___OffLoop;

/// @brief Field OffSound, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___OffSound;

/// @brief Field EmitterLoop, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___EmitterLoop;

/// @brief Field BellRoomLoop, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___BellRoomLoop;

/// @brief Field EmitterPos, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___EmitterPos;

/// @brief Field OrbSpotLoop, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___OrbSpotLoop;

/// @brief Field OrbSpotPos, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___OrbSpotPos;

/// @brief Field _speechlessness, offset: 0x68, size: 0x4, def value: None
 float_t  ____speechlessness;

/// @brief Field _baseLoopASC, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____baseLoopASC;

/// @brief Field _onLoopASC, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____onLoopASC;

/// @brief Field _offLoopASC, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____offLoopASC;

/// @brief Field _emitterLoopASC, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____emitterLoopASC;

/// @brief Field _bellRoomLoopASC, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____bellRoomLoopASC;

/// @brief Field _orbSpotLoopASC, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____orbSpotLoopASC;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpeechlessSound, ___BaseLoop) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessSound, ___OnLoop) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessSound, ___OffLoop) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessSound, ___OffSound) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessSound, ___EmitterLoop) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessSound, ___BellRoomLoop) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessSound, ___EmitterPos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessSound, ___OrbSpotLoop) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessSound, ___OrbSpotPos) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessSound, ____speechlessness) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessSound, ____baseLoopASC) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessSound, ____onLoopASC) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessSound, ____offLoopASC) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessSound, ____emitterLoopASC) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessSound, ____bellRoomLoopASC) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessSound, ____orbSpotLoopASC) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpeechlessSound) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
