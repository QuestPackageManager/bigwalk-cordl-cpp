#pragma once
// IWYU pragma private; include "GlobalNamespace/Prop.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeakHandle_def.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
#include "GlobalNamespace/zzzz__PropCustomHome_def.hpp"
#include "GlobalNamespace/zzzz__PropGroupPeckSystemPair_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "GlobalNamespace/zzzz__PropRegistry_def.hpp"
#include "GlobalNamespace/zzzz__PropSaveType_def.hpp"
#include "GlobalNamespace/zzzz__SaveablePropName_def.hpp"
#include "GlobalNamespace/zzzz__SeaShell_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Prop)
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PlatformingBody;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerPose;
}
namespace GlobalNamespace {
class PropAnimatables;
}
namespace GlobalNamespace {
class PropAudioReferences;
}
namespace GlobalNamespace {
struct PropGroup;
}
namespace GlobalNamespace {
class PropHome;
}
namespace GlobalNamespace {
struct PropSaveType;
}
namespace GlobalNamespace {
class PropZoner;
}
namespace GlobalNamespace {
class RadioVoiceAssigner;
}
namespace GlobalNamespace {
struct SeaShell_ShellReference;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace LobbyNetworking {
class HouseNetworkTransform;
}
namespace Mirror {
class NetworkIdentity;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class PhysicsMaterial;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class Prop;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Prop*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Prop*, "", "Prop");
// Dependencies BeakHandle, Mirror.NetworkBehaviour, PeckStateFilter, PropCustomHome, PropGroup, PropGroupPeckSystemPair, PropRegistry, PropSaveType, SaveablePropName, SeaShell::ShellReference, UnityEngine.Renderer, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: Prop
class CORDL_TYPE Prop : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworkpropHomeShellReference, put=set_NetworkpropHomeShellReference)) ::GlobalNamespace::SeaShell_ShellReference  NetworkpropHomeShellReference;

/// @brief Field XRayIsBlocked, offset 0x2f0, size 0x1 
 __declspec(property(get=__cordl_internal_get_XRayIsBlocked, put=__cordl_internal_set_XRayIsBlocked)) bool  XRayIsBlocked;

/// @brief Field _collidersAreHeld, offset 0x31c, size 0x1 
 __declspec(property(get=__cordl_internal_get__collidersAreHeld, put=__cordl_internal_set__collidersAreHeld)) bool  _collidersAreHeld;

/// @brief Field <defaultStartPosition>k__BackingField, offset 0x310, size 0xc 
 __declspec(property(get=__cordl_internal_get__defaultStartPosition_k__BackingField, put=__cordl_internal_set__defaultStartPosition_k__BackingField)) ::UnityEngine::Vector3  _defaultStartPosition_k__BackingField;

/// @brief Field <houseNetworkTransform>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__houseNetworkTransform_k__BackingField, put=__cordl_internal_set__houseNetworkTransform_k__BackingField)) ::UnityW<::LobbyNetworking::HouseNetworkTransform>  _houseNetworkTransform_k__BackingField;

/// @brief Field _isInInventory, offset 0x338, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInInventory, put=__cordl_internal_set__isInInventory)) bool  _isInInventory;

/// @brief Field _locallyHiddenForPlayer, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get__locallyHiddenForPlayer, put=__cordl_internal_set__locallyHiddenForPlayer)) ::UnityW<::GlobalNamespace::PlayerCharacter>  _locallyHiddenForPlayer;

/// @brief Field _looseLoopEvent, offset 0x2a0, size 0x8 
 __declspec(property(get=__cordl_internal_get__looseLoopEvent, put=__cordl_internal_set__looseLoopEvent)) ::GlobalNamespace::AudioEvent*  _looseLoopEvent;

/// @brief Field <predictedPropHome>k__BackingField, offset 0x320, size 0x8 
 __declspec(property(get=__cordl_internal_get__predictedPropHome_k__BackingField, put=__cordl_internal_set__predictedPropHome_k__BackingField)) ::UnityW<::GlobalNamespace::PropHome>  _predictedPropHome_k__BackingField;

/// @brief Field _propColliders, offset 0x2b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__propColliders, put=__cordl_internal_set__propColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  _propColliders;

/// @brief Field _propZoner, offset 0x308, size 0x8 
 __declspec(property(get=__cordl_internal_get__propZoner, put=__cordl_internal_set__propZoner)) ::UnityW<::GlobalNamespace::PropZoner>  _propZoner;

/// @brief Field affectedByMagnet, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_affectedByMagnet, put=__cordl_internal_set_affectedByMagnet)) bool  affectedByMagnet;

/// @brief Field allProps, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allProps, put=setStaticF_allProps)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  allProps;

/// @brief Field animatables, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get_animatables, put=__cordl_internal_set_animatables)) ::UnityW<::GlobalNamespace::PropAnimatables>  animatables;

/// @brief Field attachPoints, offset 0x2a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachPoints, put=__cordl_internal_set_attachPoints)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  attachPoints;

/// @brief Field beakHandle, offset 0xcc, size 0x144 
 __declspec(property(get=__cordl_internal_get_beakHandle, put=__cordl_internal_set_beakHandle)) ::GlobalNamespace::BeakHandle  beakHandle;

/// @brief Field blockCorpseHolding, offset 0x83, size 0x1 
 __declspec(property(get=__cordl_internal_get_blockCorpseHolding, put=__cordl_internal_set_blockCorpseHolding)) bool  blockCorpseHolding;

/// @brief Field blockRaising, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get_blockRaising, put=__cordl_internal_set_blockRaising)) bool  blockRaising;

/// @brief Field blockRemovingFromHomes, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_blockRemovingFromHomes, put=__cordl_internal_set_blockRemovingFromHomes)) bool  blockRemovingFromHomes;

/// @brief Field canSaveHomeWithGuid, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get_canSaveHomeWithGuid, put=__cordl_internal_set_canSaveHomeWithGuid)) bool  canSaveHomeWithGuid;

/// @brief Field childPropHomes, offset 0x2f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_childPropHomes, put=__cordl_internal_set_childPropHomes)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>*  childPropHomes;

 __declspec(property(put=set_collidersAreHeld)) bool  collidersAreHeld;

 __declspec(property(get=get_currentHome)) ::UnityW<::GlobalNamespace::PropHome>  currentHome;

/// @brief Field customCrosshairPoint, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_customCrosshairPoint, put=__cordl_internal_set_customCrosshairPoint)) ::UnityW<::UnityEngine::Transform>  customCrosshairPoint;

/// @brief Field customHomes, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_customHomes, put=__cordl_internal_set_customHomes)) ::ArrayW<::GlobalNamespace::PropCustomHome>  customHomes;

/// @brief Field defaultPhysicsMaterials, offset 0x2b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultPhysicsMaterials, put=__cordl_internal_set_defaultPhysicsMaterials)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  defaultPhysicsMaterials;

 __declspec(property(get=get_defaultStartPosition, put=set_defaultStartPosition)) ::UnityEngine::Vector3  defaultStartPosition;

/// @brief Field dropPeckFilterConditions, offset 0x250, size 0x10 
 __declspec(property(get=__cordl_internal_get_dropPeckFilterConditions, put=__cordl_internal_set_dropPeckFilterConditions)) ::GlobalNamespace::PeckStateFilter  dropPeckFilterConditions;

/// @brief Field dropPeckFilterSystem, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get_dropPeckFilterSystem, put=__cordl_internal_set_dropPeckFilterSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  dropPeckFilterSystem;

/// @brief Field exclusiveHolder, offset 0x2c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_exclusiveHolder, put=__cordl_internal_set_exclusiveHolder)) ::UnityW<::GlobalNamespace::PlayerCharacter>  exclusiveHolder;

 __declspec(property(get=get_houseNetworkTransform, put=set_houseNetworkTransform)) ::UnityW<::LobbyNetworking::HouseNetworkTransform>  houseNetworkTransform;

 __declspec(property(get=get_isInInventory, put=set_isInInventory)) bool  isInInventory;

/// @brief Field isInRadioDeadzone, offset 0x2f1, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInRadioDeadzone, put=__cordl_internal_set_isInRadioDeadzone)) bool  isInRadioDeadzone;

/// @brief Field kernal, offset 0x2c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_kernal, put=__cordl_internal_set_kernal)) ::UnityW<::UnityEngine::Transform>  kernal;

/// @brief Field launchMultiplier, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_launchMultiplier, put=__cordl_internal_set_launchMultiplier)) float_t  launchMultiplier;

 __declspec(property(get=get_locallyHiddenForPlayer, put=set_locallyHiddenForPlayer)) ::UnityW<::GlobalNamespace::PlayerCharacter>  locallyHiddenForPlayer;

/// @brief Field logVerbose, offset 0x288, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field networkIdentity, offset 0x2d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkIdentity, put=__cordl_internal_set_networkIdentity)) ::UnityW<::Mirror::NetworkIdentity>  networkIdentity;

/// @brief Field onChangePinOrHold, offset 0x330, size 0x8 
 __declspec(property(get=__cordl_internal_get_onChangePinOrHold, put=__cordl_internal_set_onChangePinOrHold)) ::System::Action*  onChangePinOrHold;

/// @brief Field onDropSwitch, offset 0x238, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDropSwitch, put=__cordl_internal_set_onDropSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  onDropSwitch;

/// @brief Field onEjectSwitch, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEjectSwitch, put=__cordl_internal_set_onEjectSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  onEjectSwitch;

/// @brief Field onPickUpSwitch, offset 0x278, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPickUpSwitch, put=__cordl_internal_set_onPickUpSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  onPickUpSwitch;

/// @brief Field onSpawn, offset 0x280, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSpawn, put=__cordl_internal_set_onSpawn)) ::System::Action_1<bool>*  onSpawn;

/// @brief Field onUseAsKey, offset 0x260, size 0x8 
 __declspec(property(get=__cordl_internal_get_onUseAsKey, put=__cordl_internal_set_onUseAsKey)) ::UnityW<::GlobalNamespace::PeckSwitch>  onUseAsKey;

/// @brief Field originalParent, offset 0x2e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalParent, put=__cordl_internal_set_originalParent)) ::UnityW<::UnityEngine::Transform>  originalParent;

/// @brief Field pinDirectControlSystem, offset 0x268, size 0x8 
 __declspec(property(get=__cordl_internal_get_pinDirectControlSystem, put=__cordl_internal_set_pinDirectControlSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  pinDirectControlSystem;

/// @brief Field platformingBody, offset 0x300, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformingBody, put=__cordl_internal_set_platformingBody)) ::UnityW<::GlobalNamespace::PlatformingBody>  platformingBody;

 __declspec(property(get=get_predictedPropHome, put=set_predictedPropHome)) ::UnityW<::GlobalNamespace::PropHome>  predictedPropHome;

/// @brief Field primaryPose, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_primaryPose, put=__cordl_internal_set_primaryPose)) ::UnityW<::GlobalNamespace::PlayerPose>  primaryPose;

/// @brief Field propAudio, offset 0x298, size 0x8 
 __declspec(property(get=__cordl_internal_get_propAudio, put=__cordl_internal_set_propAudio)) ::UnityW<::GlobalNamespace::PropAudioReferences>  propAudio;

 __declspec(property(get=get_propColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  propColliders;

/// @brief Field propGroupOfMostRecentPropHome, offset 0x328, size 0x4 
 __declspec(property(get=__cordl_internal_get_propGroupOfMostRecentPropHome, put=__cordl_internal_set_propGroupOfMostRecentPropHome)) ::GlobalNamespace::PropGroup  propGroupOfMostRecentPropHome;

/// @brief Field propGroups, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_propGroups, put=__cordl_internal_set_propGroups)) ::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*  propGroups;

/// @brief Field propHomeShellReference, offset 0x28c, size 0xc 
 __declspec(property(get=__cordl_internal_get_propHomeShellReference, put=__cordl_internal_set_propHomeShellReference)) ::GlobalNamespace::SeaShell_ShellReference  propHomeShellReference;

/// @brief Field propSaveType, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_propSaveType, put=__cordl_internal_set_propSaveType)) ::GlobalNamespace::PropSaveType  propSaveType;

 __declspec(property(get=get_propZoner)) ::UnityW<::GlobalNamespace::PropZoner>  propZoner;

/// @brief Field radioVoiceAssigner, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_radioVoiceAssigner, put=__cordl_internal_set_radioVoiceAssigner)) ::UnityW<::GlobalNamespace::RadioVoiceAssigner>  radioVoiceAssigner;

/// @brief Field rb, offset 0x2d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field registry, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get_registry, put=__cordl_internal_set_registry)) ::GlobalNamespace::PropRegistry  registry;

/// @brief Field renderers, offset 0x2e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  renderers;

/// @brief Field savablePropGuid, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_savablePropGuid, put=__cordl_internal_set_savablePropGuid)) ::StringW  savablePropGuid;

/// @brief Field saveablePropName, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_saveablePropName, put=__cordl_internal_set_saveablePropName)) ::GlobalNamespace::SaveablePropName  saveablePropName;

/// @brief Field startHome, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_startHome, put=__cordl_internal_set_startHome)) ::UnityW<::GlobalNamespace::PropHome>  startHome;

/// @brief Field sticky, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_sticky, put=__cordl_internal_set_sticky)) bool  sticky;

/// @brief Field taggedPinSystems, offset 0x270, size 0x8 
 __declspec(property(get=__cordl_internal_get_taggedPinSystems, put=__cordl_internal_set_taggedPinSystems)) ::ArrayW<::GlobalNamespace::PropGroupPeckSystemPair>  taggedPinSystems;

/// @brief Field useHeldSwitch, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get_useHeldSwitch, put=__cordl_internal_set_useHeldSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  useHeldSwitch;

/// @brief Field useHeldUpSwitch, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get_useHeldUpSwitch, put=__cordl_internal_set_useHeldUpSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  useHeldUpSwitch;

/// @brief Field xray, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_xray, put=__cordl_internal_set_xray)) ::UnityW<::UnityEngine::GameObject>  xray;

/// @brief Method Awake, addr 0x180384bd0, size 0x360, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearPrediction, addr 0x180384f30, size 0x1e0, virtual false, abstract: false, final false
inline void ClearPrediction() ;

/// @brief Method DeserializeSyncVars, addr 0x180385110, size 0x140, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method GetCrosshairTransform, addr 0x180385250, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetCrosshairTransform() ;

/// @brief Method LocalUnpin, addr 0x180385290, size 0x90, virtual false, abstract: false, final false
inline void LocalUnpin(::GlobalNamespace::PropHome*  oldHome) ;

/// @brief Method LocallySetPinned, addr 0x180385320, size 0x8c0, virtual false, abstract: false, final false
inline void LocallySetPinned(::GlobalNamespace::PropHome*  propHome, bool  alreadyPredicted) ;

/// @brief Method MatchesGroup, addr 0x180385be0, size 0x30, virtual false, abstract: false, final false
inline bool MatchesGroup(::GlobalNamespace::PropGroup  group) ;

/// @brief Method MatchesGroups, addr 0x180385c10, size 0x80, virtual false, abstract: false, final false
inline bool MatchesGroups(::ArrayW<::GlobalNamespace::PropGroup>  groups) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::Prop* New_ctor() ;

/// @brief Method OnChangePropHome, addr 0x180385c90, size 0x420, virtual false, abstract: false, final false
inline void OnChangePropHome(::GlobalNamespace::SeaShell_ShellReference  oldValue, ::GlobalNamespace::SeaShell_ShellReference  newValue) ;

/// @brief Method OnDestroy, addr 0x1803860b0, size 0x130, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1803861e0, size 0x40, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x180386220, size 0x40, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x180386260, size 0xe0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnStartClient, addr 0x180386340, size 0xb0, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStopClient, addr 0x1803863f0, size 0x1a0, virtual true, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method Position, addr 0x180386590, size 0xc0, virtual false, abstract: false, final false
inline void Position(::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) ;

/// @brief Method PreWarmCollidersCollection, addr 0x180386650, size 0x10, virtual false, abstract: false, final false
inline void PreWarmCollidersCollection() ;

/// @brief Method PredictivelyPlaceInHome, addr 0x180386660, size 0x40, virtual false, abstract: false, final false
inline void PredictivelyPlaceInHome(::GlobalNamespace::PropHome*  propHome) ;

/// @brief Method PrepareForDestroy, addr 0x1803860b0, size 0x130, virtual false, abstract: false, final false
inline void PrepareForDestroy() ;

/// @brief Method SavePropHome, addr 0x1803866a0, size 0x110, virtual false, abstract: false, final false
inline void SavePropHome(::GlobalNamespace::PropHome*  propHome, bool  isPinned) ;

/// @brief Method SerializeSyncVars, addr 0x1803867b0, size 0x70, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method ServerSetPinned, addr 0x180386820, size 0x260, virtual false, abstract: false, final false
inline void ServerSetPinned(::GlobalNamespace::PropHome*  propHome) ;

/// @brief Method ServerSetUnpinned, addr 0x180386a80, size 0x240, virtual false, abstract: false, final false
inline void ServerSetUnpinned() ;

/// @brief Method SetDropped, addr 0x180386cc0, size 0x50, virtual false, abstract: false, final false
inline void SetDropped(::GlobalNamespace::PlayerCharacter*  holder) ;

/// @brief Method SetDropped, addr 0x180386d10, size 0x3a0, virtual false, abstract: false, final false
inline void SetDropped(::GlobalNamespace::PlayerCharacter*  holder, ::UnityEngine::Vector3  throwForce, ::UnityEngine::Vector3  throwTorque) ;

/// @brief Method SetFixed, addr 0x1803870b0, size 0x310, virtual false, abstract: false, final false
inline void SetFixed(::UnityEngine::Transform*  newParent, bool  isOnRigidbody) ;

/// @brief Method SetHeld, addr 0x1803873c0, size 0x370, virtual false, abstract: false, final false
inline void SetHeld(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method SetLoose, addr 0x180387730, size 0x300, virtual false, abstract: false, final false
inline void SetLoose() ;

/// @brief Method SetPinDirectControlSystem, addr 0x180387a30, size 0x200, virtual false, abstract: false, final false
inline void SetPinDirectControlSystem(::GlobalNamespace::PropHome*  propHome, bool  pinned) ;

/// @brief Method SetSaveType, addr 0x180387c30, size 0x90, virtual false, abstract: false, final false
inline void SetSaveType(::GlobalNamespace::PropSaveType  newSaveType) ;

/// @brief Method SetUpPropZoner, addr 0x180387cc0, size 0x140, virtual false, abstract: false, final false
inline void SetUpPropZoner() ;

/// @brief Method ShouldUseDropPeck, addr 0x180387e00, size 0x70, virtual false, abstract: false, final false
inline bool ShouldUseDropPeck() ;

/// @brief Method Start, addr 0x180387e70, size 0x470, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get_XRayIsBlocked() const;

constexpr bool& __cordl_internal_get_XRayIsBlocked() ;

constexpr bool const& __cordl_internal_get__collidersAreHeld() const;

constexpr bool& __cordl_internal_get__collidersAreHeld() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__defaultStartPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__defaultStartPosition_k__BackingField() ;

constexpr ::UnityW<::LobbyNetworking::HouseNetworkTransform> const& __cordl_internal_get__houseNetworkTransform_k__BackingField() const;

constexpr ::UnityW<::LobbyNetworking::HouseNetworkTransform>& __cordl_internal_get__houseNetworkTransform_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isInInventory() const;

constexpr bool& __cordl_internal_get__isInInventory() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get__locallyHiddenForPlayer() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get__locallyHiddenForPlayer() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__looseLoopEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__looseLoopEvent() ;

constexpr ::UnityW<::GlobalNamespace::PropHome> const& __cordl_internal_get__predictedPropHome_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::PropHome>& __cordl_internal_get__predictedPropHome_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get__propColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get__propColliders() ;

constexpr ::UnityW<::GlobalNamespace::PropZoner> const& __cordl_internal_get__propZoner() const;

constexpr ::UnityW<::GlobalNamespace::PropZoner>& __cordl_internal_get__propZoner() ;

constexpr bool const& __cordl_internal_get_affectedByMagnet() const;

constexpr bool& __cordl_internal_get_affectedByMagnet() ;

constexpr ::UnityW<::GlobalNamespace::PropAnimatables> const& __cordl_internal_get_animatables() const;

constexpr ::UnityW<::GlobalNamespace::PropAnimatables>& __cordl_internal_get_animatables() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_attachPoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_attachPoints() ;

constexpr ::GlobalNamespace::BeakHandle const& __cordl_internal_get_beakHandle() const;

constexpr ::GlobalNamespace::BeakHandle& __cordl_internal_get_beakHandle() ;

constexpr bool const& __cordl_internal_get_blockCorpseHolding() const;

constexpr bool& __cordl_internal_get_blockCorpseHolding() ;

constexpr bool const& __cordl_internal_get_blockRaising() const;

constexpr bool& __cordl_internal_get_blockRaising() ;

constexpr bool const& __cordl_internal_get_blockRemovingFromHomes() const;

constexpr bool& __cordl_internal_get_blockRemovingFromHomes() ;

constexpr bool const& __cordl_internal_get_canSaveHomeWithGuid() const;

constexpr bool& __cordl_internal_get_canSaveHomeWithGuid() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>* const& __cordl_internal_get_childPropHomes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>*& __cordl_internal_get_childPropHomes() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_customCrosshairPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_customCrosshairPoint() ;

constexpr ::ArrayW<::GlobalNamespace::PropCustomHome> const& __cordl_internal_get_customHomes() const;

constexpr ::ArrayW<::GlobalNamespace::PropCustomHome>& __cordl_internal_get_customHomes() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::PhysicsMaterial>>* const& __cordl_internal_get_defaultPhysicsMaterials() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::PhysicsMaterial>>*& __cordl_internal_get_defaultPhysicsMaterials() ;

constexpr ::GlobalNamespace::PeckStateFilter const& __cordl_internal_get_dropPeckFilterConditions() const;

constexpr ::GlobalNamespace::PeckStateFilter& __cordl_internal_get_dropPeckFilterConditions() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_dropPeckFilterSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_dropPeckFilterSystem() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_exclusiveHolder() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_exclusiveHolder() ;

constexpr bool const& __cordl_internal_get_isInRadioDeadzone() const;

constexpr bool& __cordl_internal_get_isInRadioDeadzone() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_kernal() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_kernal() ;

constexpr float_t const& __cordl_internal_get_launchMultiplier() const;

constexpr float_t& __cordl_internal_get_launchMultiplier() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::Mirror::NetworkIdentity> const& __cordl_internal_get_networkIdentity() const;

constexpr ::UnityW<::Mirror::NetworkIdentity>& __cordl_internal_get_networkIdentity() ;

constexpr ::System::Action* const& __cordl_internal_get_onChangePinOrHold() const;

constexpr ::System::Action*& __cordl_internal_get_onChangePinOrHold() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onDropSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onDropSwitch() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onEjectSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onEjectSwitch() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onPickUpSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onPickUpSwitch() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_onSpawn() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_onSpawn() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onUseAsKey() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onUseAsKey() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_originalParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_originalParent() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_pinDirectControlSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_pinDirectControlSystem() ;

constexpr ::UnityW<::GlobalNamespace::PlatformingBody> const& __cordl_internal_get_platformingBody() const;

constexpr ::UnityW<::GlobalNamespace::PlatformingBody>& __cordl_internal_get_platformingBody() ;

constexpr ::UnityW<::GlobalNamespace::PlayerPose> const& __cordl_internal_get_primaryPose() const;

constexpr ::UnityW<::GlobalNamespace::PlayerPose>& __cordl_internal_get_primaryPose() ;

constexpr ::UnityW<::GlobalNamespace::PropAudioReferences> const& __cordl_internal_get_propAudio() const;

constexpr ::UnityW<::GlobalNamespace::PropAudioReferences>& __cordl_internal_get_propAudio() ;

constexpr ::GlobalNamespace::PropGroup const& __cordl_internal_get_propGroupOfMostRecentPropHome() const;

constexpr ::GlobalNamespace::PropGroup& __cordl_internal_get_propGroupOfMostRecentPropHome() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>* const& __cordl_internal_get_propGroups() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*& __cordl_internal_get_propGroups() ;

constexpr ::GlobalNamespace::SeaShell_ShellReference const& __cordl_internal_get_propHomeShellReference() const;

constexpr ::GlobalNamespace::SeaShell_ShellReference& __cordl_internal_get_propHomeShellReference() ;

constexpr ::GlobalNamespace::PropSaveType const& __cordl_internal_get_propSaveType() const;

constexpr ::GlobalNamespace::PropSaveType& __cordl_internal_get_propSaveType() ;

constexpr ::UnityW<::GlobalNamespace::RadioVoiceAssigner> const& __cordl_internal_get_radioVoiceAssigner() const;

constexpr ::UnityW<::GlobalNamespace::RadioVoiceAssigner>& __cordl_internal_get_radioVoiceAssigner() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr ::GlobalNamespace::PropRegistry const& __cordl_internal_get_registry() const;

constexpr ::GlobalNamespace::PropRegistry& __cordl_internal_get_registry() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_renderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_renderers() ;

constexpr ::StringW const& __cordl_internal_get_savablePropGuid() const;

constexpr ::StringW& __cordl_internal_get_savablePropGuid() ;

constexpr ::GlobalNamespace::SaveablePropName const& __cordl_internal_get_saveablePropName() const;

constexpr ::GlobalNamespace::SaveablePropName& __cordl_internal_get_saveablePropName() ;

constexpr ::UnityW<::GlobalNamespace::PropHome> const& __cordl_internal_get_startHome() const;

constexpr ::UnityW<::GlobalNamespace::PropHome>& __cordl_internal_get_startHome() ;

constexpr bool const& __cordl_internal_get_sticky() const;

constexpr bool& __cordl_internal_get_sticky() ;

constexpr ::ArrayW<::GlobalNamespace::PropGroupPeckSystemPair> const& __cordl_internal_get_taggedPinSystems() const;

constexpr ::ArrayW<::GlobalNamespace::PropGroupPeckSystemPair>& __cordl_internal_get_taggedPinSystems() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_useHeldSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_useHeldSwitch() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_useHeldUpSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_useHeldUpSwitch() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_xray() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_xray() ;

constexpr void __cordl_internal_set_XRayIsBlocked(bool  value) ;

constexpr void __cordl_internal_set__collidersAreHeld(bool  value) ;

constexpr void __cordl_internal_set__defaultStartPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__houseNetworkTransform_k__BackingField(::UnityW<::LobbyNetworking::HouseNetworkTransform>  value) ;

constexpr void __cordl_internal_set__isInInventory(bool  value) ;

constexpr void __cordl_internal_set__locallyHiddenForPlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set__looseLoopEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__predictedPropHome_k__BackingField(::UnityW<::GlobalNamespace::PropHome>  value) ;

constexpr void __cordl_internal_set__propColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set__propZoner(::UnityW<::GlobalNamespace::PropZoner>  value) ;

constexpr void __cordl_internal_set_affectedByMagnet(bool  value) ;

constexpr void __cordl_internal_set_animatables(::UnityW<::GlobalNamespace::PropAnimatables>  value) ;

constexpr void __cordl_internal_set_attachPoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_beakHandle(::GlobalNamespace::BeakHandle  value) ;

constexpr void __cordl_internal_set_blockCorpseHolding(bool  value) ;

constexpr void __cordl_internal_set_blockRaising(bool  value) ;

constexpr void __cordl_internal_set_blockRemovingFromHomes(bool  value) ;

constexpr void __cordl_internal_set_canSaveHomeWithGuid(bool  value) ;

constexpr void __cordl_internal_set_childPropHomes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>*  value) ;

constexpr void __cordl_internal_set_customCrosshairPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_customHomes(::ArrayW<::GlobalNamespace::PropCustomHome>  value) ;

constexpr void __cordl_internal_set_defaultPhysicsMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  value) ;

constexpr void __cordl_internal_set_dropPeckFilterConditions(::GlobalNamespace::PeckStateFilter  value) ;

constexpr void __cordl_internal_set_dropPeckFilterSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_exclusiveHolder(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_isInRadioDeadzone(bool  value) ;

constexpr void __cordl_internal_set_kernal(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_launchMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_networkIdentity(::UnityW<::Mirror::NetworkIdentity>  value) ;

constexpr void __cordl_internal_set_onChangePinOrHold(::System::Action*  value) ;

constexpr void __cordl_internal_set_onDropSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onEjectSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onPickUpSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onSpawn(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_onUseAsKey(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_originalParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_pinDirectControlSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_platformingBody(::UnityW<::GlobalNamespace::PlatformingBody>  value) ;

constexpr void __cordl_internal_set_primaryPose(::UnityW<::GlobalNamespace::PlayerPose>  value) ;

constexpr void __cordl_internal_set_propAudio(::UnityW<::GlobalNamespace::PropAudioReferences>  value) ;

constexpr void __cordl_internal_set_propGroupOfMostRecentPropHome(::GlobalNamespace::PropGroup  value) ;

constexpr void __cordl_internal_set_propGroups(::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*  value) ;

constexpr void __cordl_internal_set_propHomeShellReference(::GlobalNamespace::SeaShell_ShellReference  value) ;

constexpr void __cordl_internal_set_propSaveType(::GlobalNamespace::PropSaveType  value) ;

constexpr void __cordl_internal_set_radioVoiceAssigner(::UnityW<::GlobalNamespace::RadioVoiceAssigner>  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_registry(::GlobalNamespace::PropRegistry  value) ;

constexpr void __cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_savablePropGuid(::StringW  value) ;

constexpr void __cordl_internal_set_saveablePropName(::GlobalNamespace::SaveablePropName  value) ;

constexpr void __cordl_internal_set_startHome(::UnityW<::GlobalNamespace::PropHome>  value) ;

constexpr void __cordl_internal_set_sticky(bool  value) ;

constexpr void __cordl_internal_set_taggedPinSystems(::ArrayW<::GlobalNamespace::PropGroupPeckSystemPair>  value) ;

constexpr void __cordl_internal_set_useHeldSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_useHeldUpSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_xray(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1803882e0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>* getStaticF_allProps() ;

/// @brief Method get_NetworkpropHomeShellReference, addr 0x1803882f0, size 0x20, virtual false, abstract: false, final false
inline ::GlobalNamespace::SeaShell_ShellReference get_NetworkpropHomeShellReference() ;

/// @brief Method get_currentHome, addr 0x180388310, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PropHome> get_currentHome() ;

/// @brief Method get_defaultStartPosition, addr 0x180388320, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_defaultStartPosition() ;

/// @brief Method get_houseNetworkTransform, addr 0x180322760, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::LobbyNetworking::HouseNetworkTransform> get_houseNetworkTransform() ;

/// @brief Method get_isInInventory, addr 0x180388340, size 0x10, virtual false, abstract: false, final false
inline bool get_isInInventory() ;

/// @brief Method get_locallyHiddenForPlayer, addr 0x180388350, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PlayerCharacter> get_locallyHiddenForPlayer() ;

/// @brief Method get_predictedPropHome, addr 0x180388360, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PropHome> get_predictedPropHome() ;

/// @brief Method get_propColliders, addr 0x180388370, size 0x100, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* get_propColliders() ;

/// @brief Method get_propZoner, addr 0x180388470, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PropZoner> get_propZoner() ;

static inline void setStaticF_allProps(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  value) ;

/// @brief Method set_NetworkpropHomeShellReference, addr 0x1803884b0, size 0x160, virtual false, abstract: false, final false
inline void set_NetworkpropHomeShellReference(::ByRefConst<::GlobalNamespace::SeaShell_ShellReference>  value) ;

/// @brief Method set_collidersAreHeld, addr 0x180388610, size 0xe0, virtual false, abstract: false, final false
inline void set_collidersAreHeld(bool  value) ;

/// @brief Method set_defaultStartPosition, addr 0x1803886f0, size 0x20, virtual false, abstract: false, final false
inline void set_defaultStartPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_houseNetworkTransform, addr 0x180322790, size 0x20, virtual false, abstract: false, final false
inline void set_houseNetworkTransform(::LobbyNetworking::HouseNetworkTransform*  value) ;

/// @brief Method set_isInInventory, addr 0x180388710, size 0xf0, virtual false, abstract: false, final false
inline void set_isInInventory(bool  value) ;

/// @brief Method set_locallyHiddenForPlayer, addr 0x180388800, size 0x160, virtual false, abstract: false, final false
inline void set_locallyHiddenForPlayer(::GlobalNamespace::PlayerCharacter*  value) ;

/// @brief Method set_predictedPropHome, addr 0x180388960, size 0x20, virtual false, abstract: false, final false
inline void set_predictedPropHome(::GlobalNamespace::PropHome*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Prop() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Prop", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Prop(Prop && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Prop", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Prop(Prop const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5574};

/// @brief Field startHome, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  ___startHome;

/// @brief Field launchMultiplier, offset: 0x70, size: 0x4, def value: None
 float_t  ___launchMultiplier;

/// @brief Field customCrosshairPoint, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___customCrosshairPoint;

/// @brief Field sticky, offset: 0x80, size: 0x1, def value: None
 bool  ___sticky;

/// @brief Field blockRemovingFromHomes, offset: 0x81, size: 0x1, def value: None
 bool  ___blockRemovingFromHomes;

/// @brief Field blockRaising, offset: 0x82, size: 0x1, def value: None
 bool  ___blockRaising;

/// @brief Field blockCorpseHolding, offset: 0x83, size: 0x1, def value: None
 bool  ___blockCorpseHolding;

/// @brief Field affectedByMagnet, offset: 0x84, size: 0x1, def value: None
 bool  ___affectedByMagnet;

/// @brief Field primaryPose, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerPose>  ___primaryPose;

/// @brief Field xray, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___xray;

/// @brief Field registry, offset: 0x98, size: 0x10, def value: None
 ::GlobalNamespace::PropRegistry  ___registry;

/// @brief Field radioVoiceAssigner, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RadioVoiceAssigner>  ___radioVoiceAssigner;

/// @brief Field <houseNetworkTransform>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::LobbyNetworking::HouseNetworkTransform>  ____houseNetworkTransform_k__BackingField;

/// @brief Field saveablePropName, offset: 0xb8, size: 0x4, def value: None
 ::GlobalNamespace::SaveablePropName  ___saveablePropName;

/// @brief Field canSaveHomeWithGuid, offset: 0xbc, size: 0x1, def value: None
 bool  ___canSaveHomeWithGuid;

/// @brief Field savablePropGuid, offset: 0xc0, size: 0x8, def value: None
 ::StringW  ___savablePropGuid;

/// @brief Field propSaveType, offset: 0xc8, size: 0x4, def value: None
 ::GlobalNamespace::PropSaveType  ___propSaveType;

/// @brief Field beakHandle, offset: 0xcc, size: 0x144, def value: None
 ::GlobalNamespace::BeakHandle  ___beakHandle;

/// @brief Field animatables, offset: 0x210, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropAnimatables>  ___animatables;

/// @brief Field propGroups, offset: 0x218, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*  ___propGroups;

/// @brief Field customHomes, offset: 0x220, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PropCustomHome>  ___customHomes;

/// @brief Field useHeldSwitch, offset: 0x228, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___useHeldSwitch;

/// @brief Field useHeldUpSwitch, offset: 0x230, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___useHeldUpSwitch;

/// @brief Field onDropSwitch, offset: 0x238, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onDropSwitch;

/// @brief Field onEjectSwitch, offset: 0x240, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onEjectSwitch;

/// @brief Field dropPeckFilterSystem, offset: 0x248, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___dropPeckFilterSystem;

/// @brief Field dropPeckFilterConditions, offset: 0x250, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  ___dropPeckFilterConditions;

/// @brief Field onUseAsKey, offset: 0x260, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onUseAsKey;

/// @brief Field pinDirectControlSystem, offset: 0x268, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___pinDirectControlSystem;

/// @brief Field taggedPinSystems, offset: 0x270, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PropGroupPeckSystemPair>  ___taggedPinSystems;

/// @brief Field onPickUpSwitch, offset: 0x278, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onPickUpSwitch;

/// @brief Field onSpawn, offset: 0x280, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___onSpawn;

/// @brief Field logVerbose, offset: 0x288, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field propHomeShellReference, offset: 0x28c, size: 0xc, def value: None
 ::GlobalNamespace::SeaShell_ShellReference  ___propHomeShellReference;

/// @brief Field propAudio, offset: 0x298, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropAudioReferences>  ___propAudio;

/// @brief Field _looseLoopEvent, offset: 0x2a0, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____looseLoopEvent;

/// @brief Field attachPoints, offset: 0x2a8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___attachPoints;

/// @brief Field defaultPhysicsMaterials, offset: 0x2b0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  ___defaultPhysicsMaterials;

/// @brief Field _propColliders, offset: 0x2b8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ____propColliders;

/// @brief Field exclusiveHolder, offset: 0x2c0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___exclusiveHolder;

/// @brief Field kernal, offset: 0x2c8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___kernal;

/// @brief Field rb, offset: 0x2d0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field networkIdentity, offset: 0x2d8, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkIdentity>  ___networkIdentity;

/// @brief Field originalParent, offset: 0x2e0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___originalParent;

/// @brief Field renderers, offset: 0x2e8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___renderers;

/// @brief Field XRayIsBlocked, offset: 0x2f0, size: 0x1, def value: None
 bool  ___XRayIsBlocked;

/// @brief Field isInRadioDeadzone, offset: 0x2f1, size: 0x1, def value: None
 bool  ___isInRadioDeadzone;

/// @brief Field childPropHomes, offset: 0x2f8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>*  ___childPropHomes;

/// @brief Field platformingBody, offset: 0x300, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlatformingBody>  ___platformingBody;

/// @brief Field _propZoner, offset: 0x308, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropZoner>  ____propZoner;

/// @brief Field <defaultStartPosition>k__BackingField, offset: 0x310, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____defaultStartPosition_k__BackingField;

/// @brief Field _collidersAreHeld, offset: 0x31c, size: 0x1, def value: None
 bool  ____collidersAreHeld;

/// @brief Field <predictedPropHome>k__BackingField, offset: 0x320, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  ____predictedPropHome_k__BackingField;

/// @brief Field propGroupOfMostRecentPropHome, offset: 0x328, size: 0x4, def value: None
 ::GlobalNamespace::PropGroup  ___propGroupOfMostRecentPropHome;

/// @brief Field onChangePinOrHold, offset: 0x330, size: 0x8, def value: None
 ::System::Action*  ___onChangePinOrHold;

/// @brief Field _isInInventory, offset: 0x338, size: 0x1, def value: None
 bool  ____isInInventory;

/// @brief Field _locallyHiddenForPlayer, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ____locallyHiddenForPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Prop, ___startHome) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___launchMultiplier) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___customCrosshairPoint) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___sticky) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___blockRemovingFromHomes) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___blockRaising) == 0x82, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___blockCorpseHolding) == 0x83, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___affectedByMagnet) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___primaryPose) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___xray) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___registry) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___radioVoiceAssigner) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ____houseNetworkTransform_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___saveablePropName) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___canSaveHomeWithGuid) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___savablePropGuid) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___propSaveType) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___beakHandle) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___animatables) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___propGroups) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___customHomes) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___useHeldSwitch) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___useHeldUpSwitch) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___onDropSwitch) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___onEjectSwitch) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___dropPeckFilterSystem) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___dropPeckFilterConditions) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___onUseAsKey) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___pinDirectControlSystem) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___taggedPinSystems) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___onPickUpSwitch) == 0x278, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___onSpawn) == 0x280, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___logVerbose) == 0x288, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___propHomeShellReference) == 0x28c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___propAudio) == 0x298, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ____looseLoopEvent) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___attachPoints) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___defaultPhysicsMaterials) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ____propColliders) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___exclusiveHolder) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___kernal) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___rb) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___networkIdentity) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___originalParent) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___renderers) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___XRayIsBlocked) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___isInRadioDeadzone) == 0x2f1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___childPropHomes) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___platformingBody) == 0x300, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ____propZoner) == 0x308, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ____defaultStartPosition_k__BackingField) == 0x310, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ____collidersAreHeld) == 0x31c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ____predictedPropHome_k__BackingField) == 0x320, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___propGroupOfMostRecentPropHome) == 0x328, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ___onChangePinOrHold) == 0x330, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ____isInInventory) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Prop, ____locallyHiddenForPlayer) == 0x340, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Prop) == 0x348, "Size mismatch!");

} // namespace end def GlobalNamespace
