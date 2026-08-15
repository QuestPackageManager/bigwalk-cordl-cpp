#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCharacter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerCharacter)
namespace GlobalNamespace {
class FootstepSound;
}
namespace GlobalNamespace {
class PlayerActions;
}
namespace GlobalNamespace {
class PlayerAnimatables;
}
namespace GlobalNamespace {
class PlayerArms;
}
namespace GlobalNamespace {
class PlayerAudioReferences;
}
namespace GlobalNamespace {
class PlayerBeak;
}
namespace GlobalNamespace {
class PlayerCameraMinder;
}
namespace GlobalNamespace {
class PlayerCaster;
}
namespace GlobalNamespace {
class PlayerCheater;
}
namespace GlobalNamespace {
class PlayerCollision;
}
namespace GlobalNamespace {
class PlayerCroucher;
}
namespace GlobalNamespace {
class PlayerDecisions;
}
namespace GlobalNamespace {
class PlayerDreamer;
}
namespace GlobalNamespace {
class PlayerEyes;
}
namespace GlobalNamespace {
class PlayerFaller;
}
namespace GlobalNamespace {
class PlayerFeet;
}
namespace GlobalNamespace {
class PlayerGestures;
}
namespace GlobalNamespace {
class PlayerGrease;
}
namespace GlobalNamespace {
class PlayerGround;
}
namespace GlobalNamespace {
class PlayerHands;
}
namespace GlobalNamespace {
class PlayerHead;
}
namespace GlobalNamespace {
class PlayerHighlighter;
}
namespace GlobalNamespace {
class PlayerJumper;
}
namespace GlobalNamespace {
class PlayerLips;
}
namespace GlobalNamespace {
class PlayerLooks;
}
namespace GlobalNamespace {
class PlayerMenu;
}
namespace GlobalNamespace {
class PlayerMisc;
}
namespace GlobalNamespace {
class PlayerMover;
}
namespace GlobalNamespace {
class PlayerNetworking;
}
namespace GlobalNamespace {
class PlayerParticles;
}
namespace GlobalNamespace {
class PlayerPlatformer;
}
namespace GlobalNamespace {
class PlayerPoser;
}
namespace GlobalNamespace {
class PlayerRegistry;
}
namespace GlobalNamespace {
class PlayerShepherd;
}
namespace GlobalNamespace {
class PlayerSitter;
}
namespace GlobalNamespace {
class PlayerSleeper;
}
namespace GlobalNamespace {
class PlayerSpeechless;
}
namespace GlobalNamespace {
class PlayerSprinter;
}
namespace GlobalNamespace {
class PlayerTeacher;
}
namespace GlobalNamespace {
class PlayerTeeterer;
}
namespace GlobalNamespace {
class PlayerTexter;
}
namespace GlobalNamespace {
class PlayerTunings;
}
namespace GlobalNamespace {
class PlayerVegetation;
}
namespace LobbyNetworking {
class HouseNetworkTransform;
}
namespace Rewired {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerCharacter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerCharacter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCharacter*, "", "PlayerCharacter");
// Dependencies Mirror.NetworkBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCharacter
class CORDL_TYPE PlayerCharacter : public ::Mirror::NetworkBehaviour {
public:
// Declarations
/// @brief Field actions, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_actions, put=__cordl_internal_set_actions)) ::GlobalNamespace::PlayerActions*  actions;

/// @brief Field allPlayerCharacters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allPlayerCharacters, put=setStaticF_allPlayerCharacters)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  allPlayerCharacters;

/// @brief Field animatables, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_animatables, put=__cordl_internal_set_animatables)) ::UnityW<::GlobalNamespace::PlayerAnimatables>  animatables;

/// @brief Field arms, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_arms, put=__cordl_internal_set_arms)) ::GlobalNamespace::PlayerArms*  arms;

/// @brief Field beak, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_beak, put=__cordl_internal_set_beak)) ::GlobalNamespace::PlayerBeak*  beak;

/// @brief Field bypassFixedUpdate, offset 0x1ed, size 0x1 
 __declspec(property(get=__cordl_internal_get_bypassFixedUpdate, put=__cordl_internal_set_bypassFixedUpdate)) bool  bypassFixedUpdate;

/// @brief Field bypassLateUpdate, offset 0x1ec, size 0x1 
 __declspec(property(get=__cordl_internal_get_bypassLateUpdate, put=__cordl_internal_set_bypassLateUpdate)) bool  bypassLateUpdate;

/// @brief Field bypassUpdate, offset 0x1eb, size 0x1 
 __declspec(property(get=__cordl_internal_get_bypassUpdate, put=__cordl_internal_set_bypassUpdate)) bool  bypassUpdate;

/// @brief Field cameraMinder, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraMinder, put=__cordl_internal_set_cameraMinder)) ::GlobalNamespace::PlayerCameraMinder*  cameraMinder;

/// @brief Field cameraTransform, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraTransform, put=__cordl_internal_set_cameraTransform)) ::UnityW<::UnityEngine::Transform>  cameraTransform;

/// @brief Field caster, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_caster, put=__cordl_internal_set_caster)) ::GlobalNamespace::PlayerCaster*  caster;

/// @brief Field cheater, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_cheater, put=__cordl_internal_set_cheater)) ::GlobalNamespace::PlayerCheater*  cheater;

/// @brief Field collision, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_collision, put=__cordl_internal_set_collision)) ::GlobalNamespace::PlayerCollision*  collision;

/// @brief Field crouchTranslator, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_crouchTranslator, put=__cordl_internal_set_crouchTranslator)) ::UnityW<::UnityEngine::Transform>  crouchTranslator;

/// @brief Field croucher, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_croucher, put=__cordl_internal_set_croucher)) ::GlobalNamespace::PlayerCroucher*  croucher;

/// @brief Field decisions, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_decisions, put=__cordl_internal_set_decisions)) ::GlobalNamespace::PlayerDecisions*  decisions;

/// @brief Field deeperProfile, offset 0x1e9, size 0x1 
 __declspec(property(get=__cordl_internal_get_deeperProfile, put=__cordl_internal_set_deeperProfile)) bool  deeperProfile;

/// @brief Field dreamer, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_dreamer, put=__cordl_internal_set_dreamer)) ::GlobalNamespace::PlayerDreamer*  dreamer;

/// @brief Field faller, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_faller, put=__cordl_internal_set_faller)) ::GlobalNamespace::PlayerFaller*  faller;

/// @brief Field feet, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_feet, put=__cordl_internal_set_feet)) ::GlobalNamespace::PlayerFeet*  feet;

/// @brief Field footstepSound, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_footstepSound, put=__cordl_internal_set_footstepSound)) ::UnityW<::GlobalNamespace::FootstepSound>  footstepSound;

/// @brief Field gestures, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_gestures, put=__cordl_internal_set_gestures)) ::GlobalNamespace::PlayerGestures*  gestures;

/// @brief Field grease, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_grease, put=__cordl_internal_set_grease)) ::GlobalNamespace::PlayerGrease*  grease;

/// @brief Field ground, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_ground, put=__cordl_internal_set_ground)) ::GlobalNamespace::PlayerGround*  ground;

/// @brief Field hands, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_hands, put=__cordl_internal_set_hands)) ::GlobalNamespace::PlayerHands*  hands;

/// @brief Field head, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_head, put=__cordl_internal_set_head)) ::GlobalNamespace::PlayerHead*  head;

/// @brief Field highlighter, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_highlighter, put=__cordl_internal_set_highlighter)) ::GlobalNamespace::PlayerHighlighter*  highlighter;

/// @brief Field houseNetworkTransform, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_houseNetworkTransform, put=__cordl_internal_set_houseNetworkTransform)) ::UnityW<::LobbyNetworking::HouseNetworkTransform>  houseNetworkTransform;

/// @brief Field inputPlayer, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputPlayer, put=__cordl_internal_set_inputPlayer)) ::Rewired::Player*  inputPlayer;

/// @brief Field jumper, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_jumper, put=__cordl_internal_set_jumper)) ::GlobalNamespace::PlayerJumper*  jumper;

/// @brief Field kernal, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_kernal, put=__cordl_internal_set_kernal)) ::UnityW<::UnityEngine::Transform>  kernal;

/// @brief Field lips, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lips, put=__cordl_internal_set_lips)) ::GlobalNamespace::PlayerLips*  lips;

/// @brief Field logVerbose, offset 0x1e8, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field looks, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_looks, put=__cordl_internal_set_looks)) ::GlobalNamespace::PlayerLooks*  looks;

/// @brief Field menu, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_menu, put=__cordl_internal_set_menu)) ::GlobalNamespace::PlayerMenu*  menu;

/// @brief Field misc, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_misc, put=__cordl_internal_set_misc)) ::GlobalNamespace::PlayerMisc*  misc;

/// @brief Field mover, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_mover, put=__cordl_internal_set_mover)) ::GlobalNamespace::PlayerMover*  mover;

/// @brief Field myAnimator, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_myAnimator, put=__cordl_internal_set_myAnimator)) ::UnityW<::UnityEngine::Animator>  myAnimator;

/// @brief Field particles, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_particles, put=__cordl_internal_set_particles)) ::GlobalNamespace::PlayerParticles*  particles;

/// @brief Field pipeCollisionSoundsToProps, offset 0x1ea, size 0x1 
 __declspec(property(get=__cordl_internal_get_pipeCollisionSoundsToProps, put=__cordl_internal_set_pipeCollisionSoundsToProps)) bool  pipeCollisionSoundsToProps;

/// @brief Field platformer, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformer, put=__cordl_internal_set_platformer)) ::GlobalNamespace::PlayerPlatformer*  platformer;

/// @brief Field playerAudio, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerAudio, put=__cordl_internal_set_playerAudio)) ::UnityW<::GlobalNamespace::PlayerAudioReferences>  playerAudio;

/// @brief Field playerEyes, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerEyes, put=__cordl_internal_set_playerEyes)) ::GlobalNamespace::PlayerEyes*  playerEyes;

/// @brief Field playerNetworking, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerNetworking, put=__cordl_internal_set_playerNetworking)) ::UnityW<::GlobalNamespace::PlayerNetworking>  playerNetworking;

/// @brief Field poser, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_poser, put=__cordl_internal_set_poser)) ::GlobalNamespace::PlayerPoser*  poser;

/// @brief Field rb, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field registry, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_registry, put=__cordl_internal_set_registry)) ::GlobalNamespace::PlayerRegistry*  registry;

/// @brief Field shepherd, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_shepherd, put=__cordl_internal_set_shepherd)) ::GlobalNamespace::PlayerShepherd*  shepherd;

/// @brief Field sitter, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_sitter, put=__cordl_internal_set_sitter)) ::GlobalNamespace::PlayerSitter*  sitter;

/// @brief Field sleeper, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_sleeper, put=__cordl_internal_set_sleeper)) ::GlobalNamespace::PlayerSleeper*  sleeper;

/// @brief Field speechless, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_speechless, put=__cordl_internal_set_speechless)) ::GlobalNamespace::PlayerSpeechless*  speechless;

/// @brief Field sprinter, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_sprinter, put=__cordl_internal_set_sprinter)) ::GlobalNamespace::PlayerSprinter*  sprinter;

/// @brief Field teacher, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_teacher, put=__cordl_internal_set_teacher)) ::GlobalNamespace::PlayerTeacher*  teacher;

/// @brief Field teeterer, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_teeterer, put=__cordl_internal_set_teeterer)) ::GlobalNamespace::PlayerTeeterer*  teeterer;

/// @brief Field texter, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_texter, put=__cordl_internal_set_texter)) ::GlobalNamespace::PlayerTexter*  texter;

/// @brief Field tunings, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_tunings, put=__cordl_internal_set_tunings)) ::GlobalNamespace::PlayerTunings*  tunings;

/// @brief Field vegetation, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_vegetation, put=__cordl_internal_set_vegetation)) ::GlobalNamespace::PlayerVegetation*  vegetation;

/// @brief Method Awake, addr 0x18035e860, size 0x580, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EndProfile, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void EndProfile() ;

/// @brief Method FixedUpdate, addr 0x18035ede0, size 0x120, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method LateUpdate, addr 0x18035ef00, size 0x70, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::PlayerCharacter* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x18035ef70, size 0x30, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  hasFocus) ;

/// @brief Method OnCollisionEnter, addr 0x18035efa0, size 0x170, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  col) ;

/// @brief Method OnCollisionExit, addr 0x18035f110, size 0x50, virtual false, abstract: false, final false
inline void OnCollisionExit(::UnityEngine::Collision*  col) ;

/// @brief Method OnDestroy, addr 0x18035f160, size 0x80, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x18035f1e0, size 0x100, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x18035f2e0, size 0x40, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x18035f320, size 0x150, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnNetworkRestored, addr 0x18035f470, size 0x90, virtual false, abstract: false, final false
inline void OnNetworkRestored(double_t  obj) ;

/// @brief Method OnStopClient, addr 0x18035f500, size 0x2e0, virtual true, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method SetLayerRecursive, addr 0x18035f7e0, size 0x430, virtual false, abstract: false, final false
inline void SetLayerRecursive(::UnityEngine::Transform*  thisTransform, int32_t  fromLayer, int32_t  toLayer) ;

/// @brief Method Start, addr 0x18035fc10, size 0x2a0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartProfile, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void StartProfile(::StringW  profileName) ;

/// @brief Method Update, addr 0x18035feb0, size 0x540, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::PlayerActions* const& __cordl_internal_get_actions() const;

constexpr ::GlobalNamespace::PlayerActions*& __cordl_internal_get_actions() ;

constexpr ::UnityW<::GlobalNamespace::PlayerAnimatables> const& __cordl_internal_get_animatables() const;

constexpr ::UnityW<::GlobalNamespace::PlayerAnimatables>& __cordl_internal_get_animatables() ;

constexpr ::GlobalNamespace::PlayerArms* const& __cordl_internal_get_arms() const;

constexpr ::GlobalNamespace::PlayerArms*& __cordl_internal_get_arms() ;

constexpr ::GlobalNamespace::PlayerBeak* const& __cordl_internal_get_beak() const;

constexpr ::GlobalNamespace::PlayerBeak*& __cordl_internal_get_beak() ;

constexpr bool const& __cordl_internal_get_bypassFixedUpdate() const;

constexpr bool& __cordl_internal_get_bypassFixedUpdate() ;

constexpr bool const& __cordl_internal_get_bypassLateUpdate() const;

constexpr bool& __cordl_internal_get_bypassLateUpdate() ;

constexpr bool const& __cordl_internal_get_bypassUpdate() const;

constexpr bool& __cordl_internal_get_bypassUpdate() ;

constexpr ::GlobalNamespace::PlayerCameraMinder* const& __cordl_internal_get_cameraMinder() const;

constexpr ::GlobalNamespace::PlayerCameraMinder*& __cordl_internal_get_cameraMinder() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cameraTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cameraTransform() ;

constexpr ::GlobalNamespace::PlayerCaster* const& __cordl_internal_get_caster() const;

constexpr ::GlobalNamespace::PlayerCaster*& __cordl_internal_get_caster() ;

constexpr ::GlobalNamespace::PlayerCheater* const& __cordl_internal_get_cheater() const;

constexpr ::GlobalNamespace::PlayerCheater*& __cordl_internal_get_cheater() ;

constexpr ::GlobalNamespace::PlayerCollision* const& __cordl_internal_get_collision() const;

constexpr ::GlobalNamespace::PlayerCollision*& __cordl_internal_get_collision() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_crouchTranslator() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_crouchTranslator() ;

constexpr ::GlobalNamespace::PlayerCroucher* const& __cordl_internal_get_croucher() const;

constexpr ::GlobalNamespace::PlayerCroucher*& __cordl_internal_get_croucher() ;

constexpr ::GlobalNamespace::PlayerDecisions* const& __cordl_internal_get_decisions() const;

constexpr ::GlobalNamespace::PlayerDecisions*& __cordl_internal_get_decisions() ;

constexpr bool const& __cordl_internal_get_deeperProfile() const;

constexpr bool& __cordl_internal_get_deeperProfile() ;

constexpr ::GlobalNamespace::PlayerDreamer* const& __cordl_internal_get_dreamer() const;

constexpr ::GlobalNamespace::PlayerDreamer*& __cordl_internal_get_dreamer() ;

constexpr ::GlobalNamespace::PlayerFaller* const& __cordl_internal_get_faller() const;

constexpr ::GlobalNamespace::PlayerFaller*& __cordl_internal_get_faller() ;

constexpr ::GlobalNamespace::PlayerFeet* const& __cordl_internal_get_feet() const;

constexpr ::GlobalNamespace::PlayerFeet*& __cordl_internal_get_feet() ;

constexpr ::UnityW<::GlobalNamespace::FootstepSound> const& __cordl_internal_get_footstepSound() const;

constexpr ::UnityW<::GlobalNamespace::FootstepSound>& __cordl_internal_get_footstepSound() ;

constexpr ::GlobalNamespace::PlayerGestures* const& __cordl_internal_get_gestures() const;

constexpr ::GlobalNamespace::PlayerGestures*& __cordl_internal_get_gestures() ;

constexpr ::GlobalNamespace::PlayerGrease* const& __cordl_internal_get_grease() const;

constexpr ::GlobalNamespace::PlayerGrease*& __cordl_internal_get_grease() ;

constexpr ::GlobalNamespace::PlayerGround* const& __cordl_internal_get_ground() const;

constexpr ::GlobalNamespace::PlayerGround*& __cordl_internal_get_ground() ;

constexpr ::GlobalNamespace::PlayerHands* const& __cordl_internal_get_hands() const;

constexpr ::GlobalNamespace::PlayerHands*& __cordl_internal_get_hands() ;

constexpr ::GlobalNamespace::PlayerHead* const& __cordl_internal_get_head() const;

constexpr ::GlobalNamespace::PlayerHead*& __cordl_internal_get_head() ;

constexpr ::GlobalNamespace::PlayerHighlighter* const& __cordl_internal_get_highlighter() const;

constexpr ::GlobalNamespace::PlayerHighlighter*& __cordl_internal_get_highlighter() ;

constexpr ::UnityW<::LobbyNetworking::HouseNetworkTransform> const& __cordl_internal_get_houseNetworkTransform() const;

constexpr ::UnityW<::LobbyNetworking::HouseNetworkTransform>& __cordl_internal_get_houseNetworkTransform() ;

constexpr ::Rewired::Player* const& __cordl_internal_get_inputPlayer() const;

constexpr ::Rewired::Player*& __cordl_internal_get_inputPlayer() ;

constexpr ::GlobalNamespace::PlayerJumper* const& __cordl_internal_get_jumper() const;

constexpr ::GlobalNamespace::PlayerJumper*& __cordl_internal_get_jumper() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_kernal() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_kernal() ;

constexpr ::GlobalNamespace::PlayerLips* const& __cordl_internal_get_lips() const;

constexpr ::GlobalNamespace::PlayerLips*& __cordl_internal_get_lips() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::GlobalNamespace::PlayerLooks* const& __cordl_internal_get_looks() const;

constexpr ::GlobalNamespace::PlayerLooks*& __cordl_internal_get_looks() ;

constexpr ::GlobalNamespace::PlayerMenu* const& __cordl_internal_get_menu() const;

constexpr ::GlobalNamespace::PlayerMenu*& __cordl_internal_get_menu() ;

constexpr ::GlobalNamespace::PlayerMisc* const& __cordl_internal_get_misc() const;

constexpr ::GlobalNamespace::PlayerMisc*& __cordl_internal_get_misc() ;

constexpr ::GlobalNamespace::PlayerMover* const& __cordl_internal_get_mover() const;

constexpr ::GlobalNamespace::PlayerMover*& __cordl_internal_get_mover() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_myAnimator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_myAnimator() ;

constexpr ::GlobalNamespace::PlayerParticles* const& __cordl_internal_get_particles() const;

constexpr ::GlobalNamespace::PlayerParticles*& __cordl_internal_get_particles() ;

constexpr bool const& __cordl_internal_get_pipeCollisionSoundsToProps() const;

constexpr bool& __cordl_internal_get_pipeCollisionSoundsToProps() ;

constexpr ::GlobalNamespace::PlayerPlatformer* const& __cordl_internal_get_platformer() const;

constexpr ::GlobalNamespace::PlayerPlatformer*& __cordl_internal_get_platformer() ;

constexpr ::UnityW<::GlobalNamespace::PlayerAudioReferences> const& __cordl_internal_get_playerAudio() const;

constexpr ::UnityW<::GlobalNamespace::PlayerAudioReferences>& __cordl_internal_get_playerAudio() ;

constexpr ::GlobalNamespace::PlayerEyes* const& __cordl_internal_get_playerEyes() const;

constexpr ::GlobalNamespace::PlayerEyes*& __cordl_internal_get_playerEyes() ;

constexpr ::UnityW<::GlobalNamespace::PlayerNetworking> const& __cordl_internal_get_playerNetworking() const;

constexpr ::UnityW<::GlobalNamespace::PlayerNetworking>& __cordl_internal_get_playerNetworking() ;

constexpr ::GlobalNamespace::PlayerPoser* const& __cordl_internal_get_poser() const;

constexpr ::GlobalNamespace::PlayerPoser*& __cordl_internal_get_poser() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr ::GlobalNamespace::PlayerRegistry* const& __cordl_internal_get_registry() const;

constexpr ::GlobalNamespace::PlayerRegistry*& __cordl_internal_get_registry() ;

constexpr ::GlobalNamespace::PlayerShepherd* const& __cordl_internal_get_shepherd() const;

constexpr ::GlobalNamespace::PlayerShepherd*& __cordl_internal_get_shepherd() ;

constexpr ::GlobalNamespace::PlayerSitter* const& __cordl_internal_get_sitter() const;

constexpr ::GlobalNamespace::PlayerSitter*& __cordl_internal_get_sitter() ;

constexpr ::GlobalNamespace::PlayerSleeper* const& __cordl_internal_get_sleeper() const;

constexpr ::GlobalNamespace::PlayerSleeper*& __cordl_internal_get_sleeper() ;

constexpr ::GlobalNamespace::PlayerSpeechless* const& __cordl_internal_get_speechless() const;

constexpr ::GlobalNamespace::PlayerSpeechless*& __cordl_internal_get_speechless() ;

constexpr ::GlobalNamespace::PlayerSprinter* const& __cordl_internal_get_sprinter() const;

constexpr ::GlobalNamespace::PlayerSprinter*& __cordl_internal_get_sprinter() ;

constexpr ::GlobalNamespace::PlayerTeacher* const& __cordl_internal_get_teacher() const;

constexpr ::GlobalNamespace::PlayerTeacher*& __cordl_internal_get_teacher() ;

constexpr ::GlobalNamespace::PlayerTeeterer* const& __cordl_internal_get_teeterer() const;

constexpr ::GlobalNamespace::PlayerTeeterer*& __cordl_internal_get_teeterer() ;

constexpr ::GlobalNamespace::PlayerTexter* const& __cordl_internal_get_texter() const;

constexpr ::GlobalNamespace::PlayerTexter*& __cordl_internal_get_texter() ;

constexpr ::GlobalNamespace::PlayerTunings* const& __cordl_internal_get_tunings() const;

constexpr ::GlobalNamespace::PlayerTunings*& __cordl_internal_get_tunings() ;

constexpr ::GlobalNamespace::PlayerVegetation* const& __cordl_internal_get_vegetation() const;

constexpr ::GlobalNamespace::PlayerVegetation*& __cordl_internal_get_vegetation() ;

constexpr void __cordl_internal_set_actions(::GlobalNamespace::PlayerActions*  value) ;

constexpr void __cordl_internal_set_animatables(::UnityW<::GlobalNamespace::PlayerAnimatables>  value) ;

constexpr void __cordl_internal_set_arms(::GlobalNamespace::PlayerArms*  value) ;

constexpr void __cordl_internal_set_beak(::GlobalNamespace::PlayerBeak*  value) ;

constexpr void __cordl_internal_set_bypassFixedUpdate(bool  value) ;

constexpr void __cordl_internal_set_bypassLateUpdate(bool  value) ;

constexpr void __cordl_internal_set_bypassUpdate(bool  value) ;

constexpr void __cordl_internal_set_cameraMinder(::GlobalNamespace::PlayerCameraMinder*  value) ;

constexpr void __cordl_internal_set_cameraTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_caster(::GlobalNamespace::PlayerCaster*  value) ;

constexpr void __cordl_internal_set_cheater(::GlobalNamespace::PlayerCheater*  value) ;

constexpr void __cordl_internal_set_collision(::GlobalNamespace::PlayerCollision*  value) ;

constexpr void __cordl_internal_set_crouchTranslator(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_croucher(::GlobalNamespace::PlayerCroucher*  value) ;

constexpr void __cordl_internal_set_decisions(::GlobalNamespace::PlayerDecisions*  value) ;

constexpr void __cordl_internal_set_deeperProfile(bool  value) ;

constexpr void __cordl_internal_set_dreamer(::GlobalNamespace::PlayerDreamer*  value) ;

constexpr void __cordl_internal_set_faller(::GlobalNamespace::PlayerFaller*  value) ;

constexpr void __cordl_internal_set_feet(::GlobalNamespace::PlayerFeet*  value) ;

constexpr void __cordl_internal_set_footstepSound(::UnityW<::GlobalNamespace::FootstepSound>  value) ;

constexpr void __cordl_internal_set_gestures(::GlobalNamespace::PlayerGestures*  value) ;

constexpr void __cordl_internal_set_grease(::GlobalNamespace::PlayerGrease*  value) ;

constexpr void __cordl_internal_set_ground(::GlobalNamespace::PlayerGround*  value) ;

constexpr void __cordl_internal_set_hands(::GlobalNamespace::PlayerHands*  value) ;

constexpr void __cordl_internal_set_head(::GlobalNamespace::PlayerHead*  value) ;

constexpr void __cordl_internal_set_highlighter(::GlobalNamespace::PlayerHighlighter*  value) ;

constexpr void __cordl_internal_set_houseNetworkTransform(::UnityW<::LobbyNetworking::HouseNetworkTransform>  value) ;

constexpr void __cordl_internal_set_inputPlayer(::Rewired::Player*  value) ;

constexpr void __cordl_internal_set_jumper(::GlobalNamespace::PlayerJumper*  value) ;

constexpr void __cordl_internal_set_kernal(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lips(::GlobalNamespace::PlayerLips*  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_looks(::GlobalNamespace::PlayerLooks*  value) ;

constexpr void __cordl_internal_set_menu(::GlobalNamespace::PlayerMenu*  value) ;

constexpr void __cordl_internal_set_misc(::GlobalNamespace::PlayerMisc*  value) ;

constexpr void __cordl_internal_set_mover(::GlobalNamespace::PlayerMover*  value) ;

constexpr void __cordl_internal_set_myAnimator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_particles(::GlobalNamespace::PlayerParticles*  value) ;

constexpr void __cordl_internal_set_pipeCollisionSoundsToProps(bool  value) ;

constexpr void __cordl_internal_set_platformer(::GlobalNamespace::PlayerPlatformer*  value) ;

constexpr void __cordl_internal_set_playerAudio(::UnityW<::GlobalNamespace::PlayerAudioReferences>  value) ;

constexpr void __cordl_internal_set_playerEyes(::GlobalNamespace::PlayerEyes*  value) ;

constexpr void __cordl_internal_set_playerNetworking(::UnityW<::GlobalNamespace::PlayerNetworking>  value) ;

constexpr void __cordl_internal_set_poser(::GlobalNamespace::PlayerPoser*  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_registry(::GlobalNamespace::PlayerRegistry*  value) ;

constexpr void __cordl_internal_set_shepherd(::GlobalNamespace::PlayerShepherd*  value) ;

constexpr void __cordl_internal_set_sitter(::GlobalNamespace::PlayerSitter*  value) ;

constexpr void __cordl_internal_set_sleeper(::GlobalNamespace::PlayerSleeper*  value) ;

constexpr void __cordl_internal_set_speechless(::GlobalNamespace::PlayerSpeechless*  value) ;

constexpr void __cordl_internal_set_sprinter(::GlobalNamespace::PlayerSprinter*  value) ;

constexpr void __cordl_internal_set_teacher(::GlobalNamespace::PlayerTeacher*  value) ;

constexpr void __cordl_internal_set_teeterer(::GlobalNamespace::PlayerTeeterer*  value) ;

constexpr void __cordl_internal_set_texter(::GlobalNamespace::PlayerTexter*  value) ;

constexpr void __cordl_internal_set_tunings(::GlobalNamespace::PlayerTunings*  value) ;

constexpr void __cordl_internal_set_vegetation(::GlobalNamespace::PlayerVegetation*  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* getStaticF_allPlayerCharacters() ;

static inline void setStaticF_allPlayerCharacters(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCharacter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCharacter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCharacter(PlayerCharacter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCharacter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCharacter(PlayerCharacter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5495};

/// @brief Field hands, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::PlayerHands*  ___hands;

/// @brief Field arms, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::PlayerArms*  ___arms;

/// @brief Field tunings, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::PlayerTunings*  ___tunings;

/// @brief Field ground, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::PlayerGround*  ___ground;

/// @brief Field head, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::PlayerHead*  ___head;

/// @brief Field mover, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::PlayerMover*  ___mover;

/// @brief Field looks, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::PlayerLooks*  ___looks;

/// @brief Field poser, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::PlayerPoser*  ___poser;

/// @brief Field lips, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::PlayerLips*  ___lips;

/// @brief Field highlighter, offset: 0xb0, size: 0x8, def value: None
 ::GlobalNamespace::PlayerHighlighter*  ___highlighter;

/// @brief Field decisions, offset: 0xb8, size: 0x8, def value: None
 ::GlobalNamespace::PlayerDecisions*  ___decisions;

/// @brief Field gestures, offset: 0xc0, size: 0x8, def value: None
 ::GlobalNamespace::PlayerGestures*  ___gestures;

/// @brief Field croucher, offset: 0xc8, size: 0x8, def value: None
 ::GlobalNamespace::PlayerCroucher*  ___croucher;

/// @brief Field cameraMinder, offset: 0xd0, size: 0x8, def value: None
 ::GlobalNamespace::PlayerCameraMinder*  ___cameraMinder;

/// @brief Field cheater, offset: 0xd8, size: 0x8, def value: None
 ::GlobalNamespace::PlayerCheater*  ___cheater;

/// @brief Field caster, offset: 0xe0, size: 0x8, def value: None
 ::GlobalNamespace::PlayerCaster*  ___caster;

/// @brief Field playerEyes, offset: 0xe8, size: 0x8, def value: None
 ::GlobalNamespace::PlayerEyes*  ___playerEyes;

/// @brief Field registry, offset: 0xf0, size: 0x8, def value: None
 ::GlobalNamespace::PlayerRegistry*  ___registry;

/// @brief Field misc, offset: 0xf8, size: 0x8, def value: None
 ::GlobalNamespace::PlayerMisc*  ___misc;

/// @brief Field grease, offset: 0x100, size: 0x8, def value: None
 ::GlobalNamespace::PlayerGrease*  ___grease;

/// @brief Field sleeper, offset: 0x108, size: 0x8, def value: None
 ::GlobalNamespace::PlayerSleeper*  ___sleeper;

/// @brief Field faller, offset: 0x110, size: 0x8, def value: None
 ::GlobalNamespace::PlayerFaller*  ___faller;

/// @brief Field particles, offset: 0x118, size: 0x8, def value: None
 ::GlobalNamespace::PlayerParticles*  ___particles;

/// @brief Field actions, offset: 0x120, size: 0x8, def value: None
 ::GlobalNamespace::PlayerActions*  ___actions;

/// @brief Field texter, offset: 0x128, size: 0x8, def value: None
 ::GlobalNamespace::PlayerTexter*  ___texter;

/// @brief Field sitter, offset: 0x130, size: 0x8, def value: None
 ::GlobalNamespace::PlayerSitter*  ___sitter;

/// @brief Field jumper, offset: 0x138, size: 0x8, def value: None
 ::GlobalNamespace::PlayerJumper*  ___jumper;

/// @brief Field teeterer, offset: 0x140, size: 0x8, def value: None
 ::GlobalNamespace::PlayerTeeterer*  ___teeterer;

/// @brief Field sprinter, offset: 0x148, size: 0x8, def value: None
 ::GlobalNamespace::PlayerSprinter*  ___sprinter;

/// @brief Field feet, offset: 0x150, size: 0x8, def value: None
 ::GlobalNamespace::PlayerFeet*  ___feet;

/// @brief Field beak, offset: 0x158, size: 0x8, def value: None
 ::GlobalNamespace::PlayerBeak*  ___beak;

/// @brief Field platformer, offset: 0x160, size: 0x8, def value: None
 ::GlobalNamespace::PlayerPlatformer*  ___platformer;

/// @brief Field vegetation, offset: 0x168, size: 0x8, def value: None
 ::GlobalNamespace::PlayerVegetation*  ___vegetation;

/// @brief Field collision, offset: 0x170, size: 0x8, def value: None
 ::GlobalNamespace::PlayerCollision*  ___collision;

/// @brief Field menu, offset: 0x178, size: 0x8, def value: None
 ::GlobalNamespace::PlayerMenu*  ___menu;

/// @brief Field shepherd, offset: 0x180, size: 0x8, def value: None
 ::GlobalNamespace::PlayerShepherd*  ___shepherd;

/// @brief Field speechless, offset: 0x188, size: 0x8, def value: None
 ::GlobalNamespace::PlayerSpeechless*  ___speechless;

/// @brief Field teacher, offset: 0x190, size: 0x8, def value: None
 ::GlobalNamespace::PlayerTeacher*  ___teacher;

/// @brief Field dreamer, offset: 0x198, size: 0x8, def value: None
 ::GlobalNamespace::PlayerDreamer*  ___dreamer;

/// @brief Field playerNetworking, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerNetworking>  ___playerNetworking;

/// @brief Field kernal, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___kernal;

/// @brief Field houseNetworkTransform, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::LobbyNetworking::HouseNetworkTransform>  ___houseNetworkTransform;

/// @brief Field myAnimator, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___myAnimator;

/// @brief Field animatables, offset: 0x1c0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerAnimatables>  ___animatables;

/// @brief Field cameraTransform, offset: 0x1c8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___cameraTransform;

/// @brief Field crouchTranslator, offset: 0x1d0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___crouchTranslator;

/// @brief Field playerAudio, offset: 0x1d8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerAudioReferences>  ___playerAudio;

/// @brief Field footstepSound, offset: 0x1e0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FootstepSound>  ___footstepSound;

/// @brief Field logVerbose, offset: 0x1e8, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field deeperProfile, offset: 0x1e9, size: 0x1, def value: None
 bool  ___deeperProfile;

/// @brief Field pipeCollisionSoundsToProps, offset: 0x1ea, size: 0x1, def value: None
 bool  ___pipeCollisionSoundsToProps;

/// @brief Field bypassUpdate, offset: 0x1eb, size: 0x1, def value: None
 bool  ___bypassUpdate;

/// @brief Field bypassLateUpdate, offset: 0x1ec, size: 0x1, def value: None
 bool  ___bypassLateUpdate;

/// @brief Field bypassFixedUpdate, offset: 0x1ed, size: 0x1, def value: None
 bool  ___bypassFixedUpdate;

/// @brief Field inputPlayer, offset: 0x1f0, size: 0x8, def value: None
 ::Rewired::Player*  ___inputPlayer;

/// @brief Field rb, offset: 0x1f8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___hands) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___arms) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___tunings) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___ground) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___head) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___mover) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___looks) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___poser) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___lips) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___highlighter) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___decisions) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___gestures) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___croucher) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___cameraMinder) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___cheater) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___caster) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___playerEyes) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___registry) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___misc) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___grease) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___sleeper) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___faller) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___particles) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___actions) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___texter) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___sitter) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___jumper) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___teeterer) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___sprinter) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___feet) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___beak) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___platformer) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___vegetation) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___collision) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___menu) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___shepherd) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___speechless) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___teacher) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___dreamer) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___playerNetworking) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___kernal) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___houseNetworkTransform) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___myAnimator) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___animatables) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___cameraTransform) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___crouchTranslator) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___playerAudio) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___footstepSound) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___logVerbose) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___deeperProfile) == 0x1e9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___pipeCollisionSoundsToProps) == 0x1ea, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___bypassUpdate) == 0x1eb, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___bypassLateUpdate) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___bypassFixedUpdate) == 0x1ed, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___inputPlayer) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCharacter, ___rb) == 0x1f8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerCharacter) == 0x200, "Size mismatch!");

} // namespace end def GlobalNamespace
