#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHome.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "GlobalNamespace/zzzz__SaveableHomeName_def.hpp"
#include "GlobalNamespace/zzzz__SeaShell_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PropHome)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class CustomAudioAssetBehaviour;
}
namespace GlobalNamespace {
class ICustomHomePositioner;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PropHome_PropHomeChangeEvent;
}
namespace GlobalNamespace {
class PropShepherd;
}
namespace GlobalNamespace {
class Prop;
}
namespace GlobalNamespace {
struct SaveableHomeName;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace LobbyNetworking {
class ITicketed;
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
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PropHome;
}
namespace GlobalNamespace {
class PropHome_PropHomeChangeEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropHome*);
MARK_REF_T(::GlobalNamespace::PropHome_PropHomeChangeEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropHome*, "", "PropHome");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropHome_PropHomeChangeEvent*, "", "PropHome/PropHomeChangeEvent");
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropHome/PropHomeChangeEvent
class CORDL_TYPE PropHome_PropHomeChangeEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180382860, size 0x40, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::PropHome*  propHome, ::GlobalNamespace::Prop*  propBefore, ::GlobalNamespace::Prop*  propAfter, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::PropHome*  propHome, ::GlobalNamespace::Prop*  propBefore, ::GlobalNamespace::Prop*  propAfter) ;

static inline ::GlobalNamespace::PropHome_PropHomeChangeEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180382c40, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropHome_PropHomeChangeEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropHome_PropHomeChangeEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropHome_PropHomeChangeEvent(PropHome_PropHomeChangeEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropHome_PropHomeChangeEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropHome_PropHomeChangeEvent(PropHome_PropHomeChangeEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5580};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PropHome_PropHomeChangeEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PropGroup, SaveableHomeName, SeaShell::ShellReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropHome
class CORDL_TYPE PropHome : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PropHomeChangeEvent = ::GlobalNamespace::PropHome_PropHomeChangeEvent;

/// @brief Field <ticket>k__BackingField, offset 0x9e, size 0x2 
 __declspec(property(get=__cordl_internal_get__ticket_k__BackingField, put=__cordl_internal_set__ticket_k__BackingField)) uint16_t  _ticket_k__BackingField;

/// @brief Field allPropHomes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allPropHomes, put=setStaticF_allPropHomes)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>*  allPropHomes;

/// @brief Field blockGrabbing, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_blockGrabbing, put=__cordl_internal_set_blockGrabbing)) bool  blockGrabbing;

/// @brief Field blockPlacing, offset 0x65, size 0x1 
 __declspec(property(get=__cordl_internal_get_blockPlacing, put=__cordl_internal_set_blockPlacing)) bool  blockPlacing;

/// @brief Field castAsOther, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_castAsOther, put=__cordl_internal_set_castAsOther)) ::UnityW<::GlobalNamespace::Prop>  castAsOther;

/// @brief Field customHomePositioner, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_customHomePositioner, put=__cordl_internal_set_customHomePositioner)) ::GlobalNamespace::ICustomHomePositioner*  customHomePositioner;

/// @brief Field customPlaceOverrideBehaviour, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_customPlaceOverrideBehaviour, put=__cordl_internal_set_customPlaceOverrideBehaviour)) ::UnityW<::GlobalNamespace::CustomAudioAssetBehaviour>  customPlaceOverrideBehaviour;

/// @brief Field customRemoveOverrideBehaviour, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_customRemoveOverrideBehaviour, put=__cordl_internal_set_customRemoveOverrideBehaviour)) ::UnityW<::GlobalNamespace::CustomAudioAssetBehaviour>  customRemoveOverrideBehaviour;

/// @brief Field hasPositionGroup, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasPositionGroup, put=__cordl_internal_set_hasPositionGroup)) bool  hasPositionGroup;

/// @brief Field hideForLocalPlayer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_hideForLocalPlayer, put=__cordl_internal_set_hideForLocalPlayer)) ::UnityW<::GlobalNamespace::PlayerCharacter>  hideForLocalPlayer;

/// @brief Field hideXRay, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_hideXRay, put=__cordl_internal_set_hideXRay)) bool  hideXRay;

/// @brief Field inventoryIsHigherPriority, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_inventoryIsHigherPriority, put=__cordl_internal_set_inventoryIsHigherPriority)) bool  inventoryIsHigherPriority;

/// @brief Field isInventory, offset 0x9d, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInventory, put=__cordl_internal_set_isInventory)) bool  isInventory;

/// @brief Field isReadyForSounds, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isReadyForSounds, put=__cordl_internal_set_isReadyForSounds)) bool  isReadyForSounds;

/// @brief Field logVerbose, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onAnyChangeServer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onAnyChangeServer, put=setStaticF_onAnyChangeServer)) ::GlobalNamespace::PropHome_PropHomeChangeEvent*  onAnyChangeServer;

/// @brief Field onChangeLocal, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onChangeLocal, put=__cordl_internal_set_onChangeLocal)) ::GlobalNamespace::PropHome_PropHomeChangeEvent*  onChangeLocal;

/// @brief Field onChangeServer, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onChangeServer, put=__cordl_internal_set_onChangeServer)) ::GlobalNamespace::PropHome_PropHomeChangeEvent*  onChangeServer;

/// @brief Field onPin, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPin, put=__cordl_internal_set_onPin)) ::UnityW<::GlobalNamespace::PeckSwitch>  onPin;

/// @brief Field onPinServer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPinServer, put=__cordl_internal_set_onPinServer)) ::System::Action_1<::UnityW<::GlobalNamespace::Prop>>*  onPinServer;

/// @brief Field onUnpin, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onUnpin, put=__cordl_internal_set_onUnpin)) ::UnityW<::GlobalNamespace::PeckSwitch>  onUnpin;

/// @brief Field parentCharacter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentCharacter, put=__cordl_internal_set_parentCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  parentCharacter;

/// @brief Field parentProp, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentProp, put=__cordl_internal_set_parentProp)) ::UnityW<::GlobalNamespace::Prop>  parentProp;

/// @brief Field pinDirectControlSystem, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_pinDirectControlSystem, put=__cordl_internal_set_pinDirectControlSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  pinDirectControlSystem;

/// @brief Field pinGroup, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_pinGroup, put=__cordl_internal_set_pinGroup)) ::GlobalNamespace::PropGroup  pinGroup;

/// @brief Field pinnedProp, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pinnedProp, put=__cordl_internal_set_pinnedProp)) ::UnityW<::GlobalNamespace::Prop>  pinnedProp;

/// @brief Field positionGroup, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_positionGroup, put=__cordl_internal_set_positionGroup)) ::GlobalNamespace::PropGroup  positionGroup;

/// @brief Field propPlaceSoundOverride, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_propPlaceSoundOverride, put=__cordl_internal_set_propPlaceSoundOverride)) ::UnityW<::GlobalNamespace::AudioAsset>  propPlaceSoundOverride;

/// @brief Field propRemoveSoundOverride, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_propRemoveSoundOverride, put=__cordl_internal_set_propRemoveSoundOverride)) ::UnityW<::GlobalNamespace::AudioAsset>  propRemoveSoundOverride;

/// @brief Field propShepherd, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_propShepherd, put=__cordl_internal_set_propShepherd)) ::UnityW<::GlobalNamespace::PropShepherd>  propShepherd;

/// @brief Field saveableHomeName, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_saveableHomeName, put=__cordl_internal_set_saveableHomeName)) ::GlobalNamespace::SaveableHomeName  saveableHomeName;

/// @brief Field shellReference, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_shellReference, put=__cordl_internal_set_shellReference)) ::GlobalNamespace::SeaShell_ShellReference  shellReference;

/// @brief Field soundTransformOverride, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundTransformOverride, put=__cordl_internal_set_soundTransformOverride)) ::UnityW<::UnityEngine::Transform>  soundTransformOverride;

 __declspec(property(get=get_ticket, put=set_ticket)) uint16_t  ticket;

/// @brief Convert operator to "::LobbyNetworking::ITicketed"
constexpr operator  ::LobbyNetworking::ITicketed*() noexcept;

/// @brief Method Awake, addr 0x180383530, size 0x100, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckShepherd, addr 0x180383630, size 0xb0, virtual false, abstract: false, final false
inline void CheckShepherd(::GlobalNamespace::Prop*  prop) ;

/// @brief Method FireServerEvents, addr 0x1803836e0, size 0x40, virtual false, abstract: false, final false
inline void FireServerEvents(::GlobalNamespace::Prop*  oldProp, ::GlobalNamespace::Prop*  newProp) ;

/// @brief Method GetParentPlayerWithTransforms, addr 0x180383720, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PlayerCharacter> GetParentPlayerWithTransforms(::GlobalNamespace::Prop*  prop) ;

/// @brief Method GetSaveableHome, addr 0x180383790, size 0x90, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::PropHome> GetSaveableHome(::GlobalNamespace::SaveableHomeName  name) ;

/// @brief Method IsSafeToPlace, addr 0x180383820, size 0x80, virtual false, abstract: false, final false
inline bool IsSafeToPlace(::GlobalNamespace::Prop*  prop) ;

static inline ::GlobalNamespace::PropHome* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803838a0, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803838f0, size 0x130, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetPinned, addr 0x180383a20, size 0xf0, virtual false, abstract: false, final false
inline void SetPinned(::GlobalNamespace::Prop*  prop) ;

/// @brief Method SetUnpinned, addr 0x180383b10, size 0x4f0, virtual false, abstract: false, final false
inline void SetUnpinned(::GlobalNamespace::Prop*  prop) ;

/// @brief Method Start, addr 0x180384000, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

constexpr uint16_t const& __cordl_internal_get__ticket_k__BackingField() const;

constexpr uint16_t& __cordl_internal_get__ticket_k__BackingField() ;

constexpr bool const& __cordl_internal_get_blockGrabbing() const;

constexpr bool& __cordl_internal_get_blockGrabbing() ;

constexpr bool const& __cordl_internal_get_blockPlacing() const;

constexpr bool& __cordl_internal_get_blockPlacing() ;

constexpr ::UnityW<::GlobalNamespace::Prop> const& __cordl_internal_get_castAsOther() const;

constexpr ::UnityW<::GlobalNamespace::Prop>& __cordl_internal_get_castAsOther() ;

constexpr ::GlobalNamespace::ICustomHomePositioner* const& __cordl_internal_get_customHomePositioner() const;

constexpr ::GlobalNamespace::ICustomHomePositioner*& __cordl_internal_get_customHomePositioner() ;

constexpr ::UnityW<::GlobalNamespace::CustomAudioAssetBehaviour> const& __cordl_internal_get_customPlaceOverrideBehaviour() const;

constexpr ::UnityW<::GlobalNamespace::CustomAudioAssetBehaviour>& __cordl_internal_get_customPlaceOverrideBehaviour() ;

constexpr ::UnityW<::GlobalNamespace::CustomAudioAssetBehaviour> const& __cordl_internal_get_customRemoveOverrideBehaviour() const;

constexpr ::UnityW<::GlobalNamespace::CustomAudioAssetBehaviour>& __cordl_internal_get_customRemoveOverrideBehaviour() ;

constexpr bool const& __cordl_internal_get_hasPositionGroup() const;

constexpr bool& __cordl_internal_get_hasPositionGroup() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_hideForLocalPlayer() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_hideForLocalPlayer() ;

constexpr bool const& __cordl_internal_get_hideXRay() const;

constexpr bool& __cordl_internal_get_hideXRay() ;

constexpr bool const& __cordl_internal_get_inventoryIsHigherPriority() const;

constexpr bool& __cordl_internal_get_inventoryIsHigherPriority() ;

constexpr bool const& __cordl_internal_get_isInventory() const;

constexpr bool& __cordl_internal_get_isInventory() ;

constexpr bool const& __cordl_internal_get_isReadyForSounds() const;

constexpr bool& __cordl_internal_get_isReadyForSounds() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::GlobalNamespace::PropHome_PropHomeChangeEvent* const& __cordl_internal_get_onChangeLocal() const;

constexpr ::GlobalNamespace::PropHome_PropHomeChangeEvent*& __cordl_internal_get_onChangeLocal() ;

constexpr ::GlobalNamespace::PropHome_PropHomeChangeEvent* const& __cordl_internal_get_onChangeServer() const;

constexpr ::GlobalNamespace::PropHome_PropHomeChangeEvent*& __cordl_internal_get_onChangeServer() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onPin() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onPin() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::Prop>>* const& __cordl_internal_get_onPinServer() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::Prop>>*& __cordl_internal_get_onPinServer() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onUnpin() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onUnpin() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_parentCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_parentCharacter() ;

constexpr ::UnityW<::GlobalNamespace::Prop> const& __cordl_internal_get_parentProp() const;

constexpr ::UnityW<::GlobalNamespace::Prop>& __cordl_internal_get_parentProp() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_pinDirectControlSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_pinDirectControlSystem() ;

constexpr ::GlobalNamespace::PropGroup const& __cordl_internal_get_pinGroup() const;

constexpr ::GlobalNamespace::PropGroup& __cordl_internal_get_pinGroup() ;

constexpr ::UnityW<::GlobalNamespace::Prop> const& __cordl_internal_get_pinnedProp() const;

constexpr ::UnityW<::GlobalNamespace::Prop>& __cordl_internal_get_pinnedProp() ;

constexpr ::GlobalNamespace::PropGroup const& __cordl_internal_get_positionGroup() const;

constexpr ::GlobalNamespace::PropGroup& __cordl_internal_get_positionGroup() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_propPlaceSoundOverride() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_propPlaceSoundOverride() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_propRemoveSoundOverride() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_propRemoveSoundOverride() ;

constexpr ::UnityW<::GlobalNamespace::PropShepherd> const& __cordl_internal_get_propShepherd() const;

constexpr ::UnityW<::GlobalNamespace::PropShepherd>& __cordl_internal_get_propShepherd() ;

constexpr ::GlobalNamespace::SaveableHomeName const& __cordl_internal_get_saveableHomeName() const;

constexpr ::GlobalNamespace::SaveableHomeName& __cordl_internal_get_saveableHomeName() ;

constexpr ::GlobalNamespace::SeaShell_ShellReference const& __cordl_internal_get_shellReference() const;

constexpr ::GlobalNamespace::SeaShell_ShellReference& __cordl_internal_get_shellReference() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_soundTransformOverride() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_soundTransformOverride() ;

constexpr void __cordl_internal_set__ticket_k__BackingField(uint16_t  value) ;

constexpr void __cordl_internal_set_blockGrabbing(bool  value) ;

constexpr void __cordl_internal_set_blockPlacing(bool  value) ;

constexpr void __cordl_internal_set_castAsOther(::UnityW<::GlobalNamespace::Prop>  value) ;

constexpr void __cordl_internal_set_customHomePositioner(::GlobalNamespace::ICustomHomePositioner*  value) ;

constexpr void __cordl_internal_set_customPlaceOverrideBehaviour(::UnityW<::GlobalNamespace::CustomAudioAssetBehaviour>  value) ;

constexpr void __cordl_internal_set_customRemoveOverrideBehaviour(::UnityW<::GlobalNamespace::CustomAudioAssetBehaviour>  value) ;

constexpr void __cordl_internal_set_hasPositionGroup(bool  value) ;

constexpr void __cordl_internal_set_hideForLocalPlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_hideXRay(bool  value) ;

constexpr void __cordl_internal_set_inventoryIsHigherPriority(bool  value) ;

constexpr void __cordl_internal_set_isInventory(bool  value) ;

constexpr void __cordl_internal_set_isReadyForSounds(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onChangeLocal(::GlobalNamespace::PropHome_PropHomeChangeEvent*  value) ;

constexpr void __cordl_internal_set_onChangeServer(::GlobalNamespace::PropHome_PropHomeChangeEvent*  value) ;

constexpr void __cordl_internal_set_onPin(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onPinServer(::System::Action_1<::UnityW<::GlobalNamespace::Prop>>*  value) ;

constexpr void __cordl_internal_set_onUnpin(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_parentCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_parentProp(::UnityW<::GlobalNamespace::Prop>  value) ;

constexpr void __cordl_internal_set_pinDirectControlSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_pinGroup(::GlobalNamespace::PropGroup  value) ;

constexpr void __cordl_internal_set_pinnedProp(::UnityW<::GlobalNamespace::Prop>  value) ;

constexpr void __cordl_internal_set_positionGroup(::GlobalNamespace::PropGroup  value) ;

constexpr void __cordl_internal_set_propPlaceSoundOverride(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_propRemoveSoundOverride(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_propShepherd(::UnityW<::GlobalNamespace::PropShepherd>  value) ;

constexpr void __cordl_internal_set_saveableHomeName(::GlobalNamespace::SaveableHomeName  value) ;

constexpr void __cordl_internal_set_shellReference(::GlobalNamespace::SeaShell_ShellReference  value) ;

constexpr void __cordl_internal_set_soundTransformOverride(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>* getStaticF_allPropHomes() ;

static inline ::GlobalNamespace::PropHome_PropHomeChangeEvent* getStaticF_onAnyChangeServer() ;

/// @brief Method get_ticket, addr 0x180384010, size 0x10, virtual true, abstract: false, final true
inline uint16_t get_ticket() ;

/// @brief Convert to "::LobbyNetworking::ITicketed"
constexpr ::LobbyNetworking::ITicketed* i___LobbyNetworking__ITicketed() noexcept;

static inline void setStaticF_allPropHomes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>*  value) ;

static inline void setStaticF_onAnyChangeServer(::GlobalNamespace::PropHome_PropHomeChangeEvent*  value) ;

/// @brief Method set_ticket, addr 0x180384020, size 0x10, virtual true, abstract: false, final true
inline void set_ticket(uint16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropHome() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropHome", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropHome(PropHome && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropHome", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropHome(PropHome const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5581};

/// @brief Field shellReference, offset: 0x20, size: 0xc, def value: None
 ::GlobalNamespace::SeaShell_ShellReference  ___shellReference;

/// @brief Field parentCharacter, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___parentCharacter;

/// @brief Field parentProp, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  ___parentProp;

/// @brief Field onPin, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onPin;

/// @brief Field onUnpin, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onUnpin;

/// @brief Field pinDirectControlSystem, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___pinDirectControlSystem;

/// @brief Field onPinServer, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::Prop>>*  ___onPinServer;

/// @brief Field pinGroup, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::PropGroup  ___pinGroup;

/// @brief Field blockGrabbing, offset: 0x64, size: 0x1, def value: None
 bool  ___blockGrabbing;

/// @brief Field blockPlacing, offset: 0x65, size: 0x1, def value: None
 bool  ___blockPlacing;

/// @brief Field castAsOther, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  ___castAsOther;

/// @brief Field hideXRay, offset: 0x70, size: 0x1, def value: None
 bool  ___hideXRay;

/// @brief Field propShepherd, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropShepherd>  ___propShepherd;

/// @brief Field hideForLocalPlayer, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___hideForLocalPlayer;

/// @brief Field positionGroup, offset: 0x88, size: 0x4, def value: None
 ::GlobalNamespace::PropGroup  ___positionGroup;

/// @brief Field hasPositionGroup, offset: 0x8c, size: 0x1, def value: None
 bool  ___hasPositionGroup;

/// @brief Field customHomePositioner, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::ICustomHomePositioner*  ___customHomePositioner;

/// @brief Field saveableHomeName, offset: 0x98, size: 0x4, def value: None
 ::GlobalNamespace::SaveableHomeName  ___saveableHomeName;

/// @brief Field inventoryIsHigherPriority, offset: 0x9c, size: 0x1, def value: None
 bool  ___inventoryIsHigherPriority;

/// @brief Field isInventory, offset: 0x9d, size: 0x1, def value: None
 bool  ___isInventory;

/// @brief Field <ticket>k__BackingField, offset: 0x9e, size: 0x2, def value: None
 uint16_t  ____ticket_k__BackingField;

/// @brief Field customPlaceOverrideBehaviour, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomAudioAssetBehaviour>  ___customPlaceOverrideBehaviour;

/// @brief Field customRemoveOverrideBehaviour, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomAudioAssetBehaviour>  ___customRemoveOverrideBehaviour;

/// @brief Field propPlaceSoundOverride, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___propPlaceSoundOverride;

/// @brief Field propRemoveSoundOverride, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___propRemoveSoundOverride;

/// @brief Field soundTransformOverride, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___soundTransformOverride;

/// @brief Field logVerbose, offset: 0xc8, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field pinnedProp, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  ___pinnedProp;

/// @brief Field onChangeServer, offset: 0xd8, size: 0x8, def value: None
 ::GlobalNamespace::PropHome_PropHomeChangeEvent*  ___onChangeServer;

/// @brief Field onChangeLocal, offset: 0xe0, size: 0x8, def value: None
 ::GlobalNamespace::PropHome_PropHomeChangeEvent*  ___onChangeLocal;

/// @brief Field isReadyForSounds, offset: 0xe8, size: 0x1, def value: None
 bool  ___isReadyForSounds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropHome, ___shellReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___parentCharacter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___parentProp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___onPin) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___onUnpin) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___pinDirectControlSystem) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___onPinServer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___pinGroup) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___blockGrabbing) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___blockPlacing) == 0x65, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___castAsOther) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___hideXRay) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___propShepherd) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___hideForLocalPlayer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___positionGroup) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___hasPositionGroup) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___customHomePositioner) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___saveableHomeName) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___inventoryIsHigherPriority) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___isInventory) == 0x9d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ____ticket_k__BackingField) == 0x9e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___customPlaceOverrideBehaviour) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___customRemoveOverrideBehaviour) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___propPlaceSoundOverride) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___propRemoveSoundOverride) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___soundTransformOverride) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___logVerbose) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___pinnedProp) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___onChangeServer) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___onChangeLocal) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHome, ___isReadyForSounds) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropHome) == 0xf0, "Size mismatch!");

} // namespace end def GlobalNamespace
