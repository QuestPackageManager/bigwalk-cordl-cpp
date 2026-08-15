#pragma once
// IWYU pragma private; include "HouseHouse/Dream/Dream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Dream)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
class CorpseLooks;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace HouseHouse::Dream {
class DreamCameraSet;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HouseHouse::Dream {
class Dream;
}
// Write type traits
MARK_REF_T(::HouseHouse::Dream::Dream*);
DEFINE_IL2CPP_CLASS(::HouseHouse::Dream::Dream*, "HouseHouse.Dream", "Dream");
// Dependencies UnityEngine.MonoBehaviour
namespace HouseHouse::Dream {
// Is value type: false
// CS Name: HouseHouse.Dream.Dream
class CORDL_TYPE Dream : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::HouseHouse::Dream::Dream>  Instance;

 __declspec(property(get=get_activeCameraGuide)) ::UnityW<::UnityEngine::Transform>  activeCameraGuide;

/// @brief Field blinkness, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_blinkness, put=__cordl_internal_set_blinkness)) float_t  blinkness;

/// @brief Field cameraSet, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraSet, put=__cordl_internal_set_cameraSet)) ::UnityW<::HouseHouse::Dream::DreamCameraSet>  cameraSet;

/// @brief Field clearness, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_clearness, put=__cordl_internal_set_clearness)) float_t  clearness;

/// @brief Field corpseLooks1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_corpseLooks1, put=__cordl_internal_set_corpseLooks1)) ::UnityW<::GlobalNamespace::CorpseLooks>  corpseLooks1;

/// @brief Field corpseLooks2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_corpseLooks2, put=__cordl_internal_set_corpseLooks2)) ::UnityW<::GlobalNamespace::CorpseLooks>  corpseLooks2;

/// @brief Field currentCameraIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentCameraIndex, put=__cordl_internal_set_currentCameraIndex)) int32_t  currentCameraIndex;

/// @brief Field dreamAmbEvent, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_dreamAmbEvent, put=__cordl_internal_set_dreamAmbEvent)) ::GlobalNamespace::AudioEvent*  dreamAmbEvent;

/// @brief Field dreamAmbFriendsEvent, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_dreamAmbFriendsEvent, put=__cordl_internal_set_dreamAmbFriendsEvent)) ::GlobalNamespace::AudioEvent*  dreamAmbFriendsEvent;

/// @brief Field dreamAmbFriendsLoop, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_dreamAmbFriendsLoop, put=__cordl_internal_set_dreamAmbFriendsLoop)) ::UnityW<::GlobalNamespace::AudioAsset>  dreamAmbFriendsLoop;

/// @brief Field dreamAmbLoop, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_dreamAmbLoop, put=__cordl_internal_set_dreamAmbLoop)) ::UnityW<::GlobalNamespace::AudioAsset>  dreamAmbLoop;

/// @brief Field dreamSpotEvent, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_dreamSpotEvent, put=__cordl_internal_set_dreamSpotEvent)) ::GlobalNamespace::AudioEvent*  dreamSpotEvent;

/// @brief Field dreamSpotLoop, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_dreamSpotLoop, put=__cordl_internal_set_dreamSpotLoop)) ::UnityW<::GlobalNamespace::AudioAsset>  dreamSpotLoop;

/// @brief Field dreamStartSound, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_dreamStartSound, put=__cordl_internal_set_dreamStartSound)) ::UnityW<::GlobalNamespace::AudioAsset>  dreamStartSound;

/// @brief Field dreamStopSound, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_dreamStopSound, put=__cordl_internal_set_dreamStopSound)) ::UnityW<::GlobalNamespace::AudioAsset>  dreamStopSound;

/// @brief Field hudAlpha, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_hudAlpha, put=__cordl_internal_set_hudAlpha)) float_t  hudAlpha;

/// @brief Field lighting, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_lighting, put=__cordl_internal_set_lighting)) float_t  lighting;

/// @brief Field logVerbose, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Method Awake, addr 0x1803c0ae0, size 0x150, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::HouseHouse::Dream::Dream* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803c0c30, size 0xd0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method PlayDreamSound, addr 0x1803c0d00, size 0x160, virtual false, abstract: false, final false
inline void PlayDreamSound(::GlobalNamespace::PlayerCharacter*  pc) ;

/// @brief Method StopDreamSound, addr 0x1803c0e60, size 0x150, virtual false, abstract: false, final false
inline void StopDreamSound(::GlobalNamespace::PlayerCharacter*  pc) ;

constexpr float_t const& __cordl_internal_get_blinkness() const;

constexpr float_t& __cordl_internal_get_blinkness() ;

constexpr ::UnityW<::HouseHouse::Dream::DreamCameraSet> const& __cordl_internal_get_cameraSet() const;

constexpr ::UnityW<::HouseHouse::Dream::DreamCameraSet>& __cordl_internal_get_cameraSet() ;

constexpr float_t const& __cordl_internal_get_clearness() const;

constexpr float_t& __cordl_internal_get_clearness() ;

constexpr ::UnityW<::GlobalNamespace::CorpseLooks> const& __cordl_internal_get_corpseLooks1() const;

constexpr ::UnityW<::GlobalNamespace::CorpseLooks>& __cordl_internal_get_corpseLooks1() ;

constexpr ::UnityW<::GlobalNamespace::CorpseLooks> const& __cordl_internal_get_corpseLooks2() const;

constexpr ::UnityW<::GlobalNamespace::CorpseLooks>& __cordl_internal_get_corpseLooks2() ;

constexpr int32_t const& __cordl_internal_get_currentCameraIndex() const;

constexpr int32_t& __cordl_internal_get_currentCameraIndex() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get_dreamAmbEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get_dreamAmbEvent() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get_dreamAmbFriendsEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get_dreamAmbFriendsEvent() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_dreamAmbFriendsLoop() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_dreamAmbFriendsLoop() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_dreamAmbLoop() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_dreamAmbLoop() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get_dreamSpotEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get_dreamSpotEvent() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_dreamSpotLoop() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_dreamSpotLoop() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_dreamStartSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_dreamStartSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_dreamStopSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_dreamStopSound() ;

constexpr float_t const& __cordl_internal_get_hudAlpha() const;

constexpr float_t& __cordl_internal_get_hudAlpha() ;

constexpr float_t const& __cordl_internal_get_lighting() const;

constexpr float_t& __cordl_internal_get_lighting() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr void __cordl_internal_set_blinkness(float_t  value) ;

constexpr void __cordl_internal_set_cameraSet(::UnityW<::HouseHouse::Dream::DreamCameraSet>  value) ;

constexpr void __cordl_internal_set_clearness(float_t  value) ;

constexpr void __cordl_internal_set_corpseLooks1(::UnityW<::GlobalNamespace::CorpseLooks>  value) ;

constexpr void __cordl_internal_set_corpseLooks2(::UnityW<::GlobalNamespace::CorpseLooks>  value) ;

constexpr void __cordl_internal_set_currentCameraIndex(int32_t  value) ;

constexpr void __cordl_internal_set_dreamAmbEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set_dreamAmbFriendsEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set_dreamAmbFriendsLoop(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_dreamAmbLoop(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_dreamSpotEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set_dreamSpotLoop(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_dreamStartSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_dreamStopSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_hudAlpha(float_t  value) ;

constexpr void __cordl_internal_set_lighting(float_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::HouseHouse::Dream::Dream> getStaticF_Instance() ;

/// @brief Method get_activeCameraGuide, addr 0x1803c0fb0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_activeCameraGuide() ;

static inline void setStaticF_Instance(::UnityW<::HouseHouse::Dream::Dream>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Dream(Dream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dream(Dream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5774};

/// @brief Field cameraSet, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::HouseHouse::Dream::DreamCameraSet>  ___cameraSet;

/// @brief Field currentCameraIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___currentCameraIndex;

/// @brief Field blinkness, offset: 0x2c, size: 0x4, def value: None
 float_t  ___blinkness;

/// @brief Field clearness, offset: 0x30, size: 0x4, def value: None
 float_t  ___clearness;

/// @brief Field lighting, offset: 0x34, size: 0x4, def value: None
 float_t  ___lighting;

/// @brief Field hudAlpha, offset: 0x38, size: 0x4, def value: None
 float_t  ___hudAlpha;

/// @brief Field corpseLooks1, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CorpseLooks>  ___corpseLooks1;

/// @brief Field corpseLooks2, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CorpseLooks>  ___corpseLooks2;

/// @brief Field dreamStartSound, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___dreamStartSound;

/// @brief Field dreamStopSound, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___dreamStopSound;

/// @brief Field dreamAmbLoop, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___dreamAmbLoop;

/// @brief Field dreamSpotLoop, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___dreamSpotLoop;

/// @brief Field dreamAmbFriendsLoop, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___dreamAmbFriendsLoop;

/// @brief Field logVerbose, offset: 0x78, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field dreamAmbEvent, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ___dreamAmbEvent;

/// @brief Field dreamSpotEvent, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ___dreamSpotEvent;

/// @brief Field dreamAmbFriendsEvent, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ___dreamAmbFriendsEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HouseHouse::Dream::Dream, ___cameraSet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::Dream, ___currentCameraIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::Dream, ___blinkness) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::Dream, ___clearness) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::Dream, ___lighting) == 0x34, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::Dream, ___hudAlpha) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::Dream, ___corpseLooks1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::Dream, ___corpseLooks2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::Dream, ___dreamStartSound) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::Dream, ___dreamStopSound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::Dream, ___dreamAmbLoop) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::Dream, ___dreamSpotLoop) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::Dream, ___dreamAmbFriendsLoop) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::Dream, ___logVerbose) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::Dream, ___dreamAmbEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::Dream, ___dreamSpotEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Dream::Dream, ___dreamAmbFriendsEvent) == 0x90, "Offset mismatch!");

static_assert(sizeof(::HouseHouse::Dream::Dream) == 0x98, "Size mismatch!");

} // namespace end def HouseHouse::Dream
