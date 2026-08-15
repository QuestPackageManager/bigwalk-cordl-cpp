#pragma once
// IWYU pragma private; include "GlobalNamespace/CowbellAudio.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CowbellAudio)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
struct CowbellAudio_CarryType;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class Prop;
}
namespace GlobalNamespace {
class SoundCue;
}
// Forward declare root types
namespace GlobalNamespace {
struct CowbellAudio_CarryType;
}
namespace GlobalNamespace {
class CowbellAudio;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CowbellAudio_CarryType);
MARK_REF_T(::GlobalNamespace::CowbellAudio*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CowbellAudio_CarryType, "", "CowbellAudio/CarryType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CowbellAudio*, "", "CowbellAudio");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CowbellAudio/CarryType
struct CORDL_TYPE CowbellAudio_CarryType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CowbellAudio_CarryType_Unwrapped
enum struct __CowbellAudio_CarryType_Unwrapped : int32_t {
__E_Held = static_cast<int32_t>(0x0),
__E_Pocket = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CowbellAudio_CarryType_Unwrapped () const noexcept {
return static_cast<__CowbellAudio_CarryType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CowbellAudio_CarryType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CowbellAudio_CarryType(int32_t  value__) noexcept;

/// @brief Field Held value: I32(0)
static ::GlobalNamespace::CowbellAudio_CarryType const Held;

/// @brief Field Pocket value: I32(1)
static ::GlobalNamespace::CowbellAudio_CarryType const Pocket;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4823};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CowbellAudio_CarryType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CowbellAudio_CarryType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CowbellAudio
class CORDL_TYPE CowbellAudio : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CarryType = ::GlobalNamespace::CowbellAudio_CarryType;

/// @brief Field CarryLoop, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CarryLoop, put=__cordl_internal_set_CarryLoop)) ::UnityW<::GlobalNamespace::SoundCue>  CarryLoop;

/// @brief Field ClangSound, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ClangSound, put=__cordl_internal_set_ClangSound)) ::UnityW<::GlobalNamespace::AudioAsset>  ClangSound;

/// @brief Field CowbellProp, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_CowbellProp, put=__cordl_internal_set_CowbellProp)) ::UnityW<::GlobalNamespace::Prop>  CowbellProp;

/// @brief Field PeckState, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_PeckState, put=__cordl_internal_set_PeckState)) int32_t  PeckState;

/// @brief Field ShakeSound, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ShakeSound, put=__cordl_internal_set_ShakeSound)) ::UnityW<::GlobalNamespace::AudioAsset>  ShakeSound;

/// @brief Field SystemReference, offset 0x40, size 0x28 
 __declspec(property(get=__cordl_internal_get_SystemReference, put=__cordl_internal_set_SystemReference)) ::GlobalNamespace::PeckSystemReference  SystemReference;

/// @brief Field _holderPlayer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__holderPlayer, put=__cordl_internal_set__holderPlayer)) ::UnityW<::GlobalNamespace::PlayerCharacter>  _holderPlayer;

/// @brief Field logVerbose, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Method Awake, addr 0x180330eb0, size 0x1d0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetX, addr 0x180331080, size 0xf0, virtual false, abstract: false, final false
inline bool GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

static inline ::GlobalNamespace::CowbellAudio* New_ctor() ;

/// @brief Method OnChangePinOrHold, addr 0x180331170, size 0x770, virtual false, abstract: false, final false
inline void OnChangePinOrHold() ;

/// @brief Method OnDestroy, addr 0x1803318e0, size 0xe0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PlayClangSound, addr 0x1803319c0, size 0x100, virtual false, abstract: false, final false
inline void PlayClangSound() ;

/// @brief Method PlayShakeSound, addr 0x180331be0, size 0x100, virtual false, abstract: false, final false
inline void PlayShakeSound() ;

/// @brief Method PlayShakeSoundOnPeck, addr 0x180331ac0, size 0x120, virtual false, abstract: false, final false
inline void PlayShakeSoundOnPeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method Start, addr 0x180331ce0, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SubscribeToPlayer, addr 0x180331cf0, size 0x3b0, virtual false, abstract: false, final false
inline void SubscribeToPlayer(::GlobalNamespace::PlayerCharacter*  playerCharacter, ::GlobalNamespace::CowbellAudio_CarryType  carryType) ;

/// @brief Method UnsubscribeToPlayer, addr 0x1803320a0, size 0x3a0, virtual false, abstract: false, final false
inline void UnsubscribeToPlayer(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_CarryLoop() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_CarryLoop() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_ClangSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_ClangSound() ;

constexpr ::UnityW<::GlobalNamespace::Prop> const& __cordl_internal_get_CowbellProp() const;

constexpr ::UnityW<::GlobalNamespace::Prop>& __cordl_internal_get_CowbellProp() ;

constexpr int32_t const& __cordl_internal_get_PeckState() const;

constexpr int32_t& __cordl_internal_get_PeckState() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_ShakeSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_ShakeSound() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_SystemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_SystemReference() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get__holderPlayer() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get__holderPlayer() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr void __cordl_internal_set_CarryLoop(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_ClangSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_CowbellProp(::UnityW<::GlobalNamespace::Prop>  value) ;

constexpr void __cordl_internal_set_PeckState(int32_t  value) ;

constexpr void __cordl_internal_set_ShakeSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_SystemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set__holderPlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CowbellAudio() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CowbellAudio", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CowbellAudio(CowbellAudio && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CowbellAudio", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CowbellAudio(CowbellAudio const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4824};

/// @brief Field CarryLoop, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___CarryLoop;

/// @brief Field ShakeSound, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___ShakeSound;

/// @brief Field ClangSound, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___ClangSound;

/// @brief Field CowbellProp, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  ___CowbellProp;

/// @brief Field SystemReference, offset: 0x40, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___SystemReference;

/// @brief Field PeckState, offset: 0x68, size: 0x4, def value: None
 int32_t  ___PeckState;

/// @brief Field logVerbose, offset: 0x6c, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _holderPlayer, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ____holderPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CowbellAudio, ___CarryLoop) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CowbellAudio, ___ShakeSound) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CowbellAudio, ___ClangSound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CowbellAudio, ___CowbellProp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CowbellAudio, ___SystemReference) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CowbellAudio, ___PeckState) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CowbellAudio, ___logVerbose) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CowbellAudio, ____holderPlayer) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CowbellAudio) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
