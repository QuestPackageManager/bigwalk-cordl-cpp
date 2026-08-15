#pragma once
// IWYU pragma private; include "GlobalNamespace/TrainAudio.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TrainAudio)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioOcclusion;
}
namespace GlobalNamespace {
class AudioPlayer;
}
namespace GlobalNamespace {
class NetworkedTrain;
}
namespace GlobalNamespace {
class StandaloneOcclusion;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class TrainAudio;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TrainAudio*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrainAudio*, "", "TrainAudio");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TrainAudio
class CORDL_TYPE TrainAudio : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field CouplerLoop, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_CouplerLoop, put=__cordl_internal_set_CouplerLoop)) ::UnityW<::GlobalNamespace::AudioAsset>  CouplerLoop;

/// @brief Field CreakSound, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_CreakSound, put=__cordl_internal_set_CreakSound)) ::UnityW<::GlobalNamespace::AudioAsset>  CreakSound;

/// @brief Field Parent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Parent, put=__cordl_internal_set_Parent)) ::UnityW<::UnityEngine::GameObject>  Parent;

/// @brief Field PeckSystem, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PeckSystem, put=__cordl_internal_set_PeckSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  PeckSystem;

/// @brief Field PlatformDisplayLoop, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlatformDisplayLoop, put=__cordl_internal_set_PlatformDisplayLoop)) ::UnityW<::GlobalNamespace::AudioAsset>  PlatformDisplayLoop;

 __declspec(property(get=get_StandaloneOcclusions, put=set_StandaloneOcclusions)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StandaloneOcclusion>>*  StandaloneOcclusions;

/// @brief Field Train, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Train, put=__cordl_internal_set_Train)) ::UnityW<::GlobalNamespace::NetworkedTrain>  Train;

/// @brief Field TrainLoops, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrainLoops, put=__cordl_internal_set_TrainLoops)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>*  TrainLoops;

/// @brief Field TurnLoop, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_TurnLoop, put=__cordl_internal_set_TurnLoop)) ::UnityW<::GlobalNamespace::AudioAsset>  TurnLoop;

/// @brief Field WhooshSound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhooshSound, put=__cordl_internal_set_WhooshSound)) ::UnityW<::GlobalNamespace::AudioAsset>  WhooshSound;

/// @brief Field <StandaloneOcclusions>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__StandaloneOcclusions_k__BackingField, put=__cordl_internal_set__StandaloneOcclusions_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StandaloneOcclusion>>*  _StandaloneOcclusions_k__BackingField;

/// @brief Field _couplerPlayers, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__couplerPlayers, put=__cordl_internal_set__couplerPlayers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  _couplerPlayers;

/// @brief Field _creakPlayers, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__creakPlayers, put=__cordl_internal_set__creakPlayers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  _creakPlayers;

/// @brief Field _occlusions, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__occlusions, put=__cordl_internal_set__occlusions)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioOcclusion>>*  _occlusions;

/// @brief Field _platformDisplayPlayers, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__platformDisplayPlayers, put=__cordl_internal_set__platformDisplayPlayers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  _platformDisplayPlayers;

/// @brief Field _trainLoopPlayers, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__trainLoopPlayers, put=__cordl_internal_set__trainLoopPlayers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  _trainLoopPlayers;

/// @brief Field _turnLoopPlayers, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__turnLoopPlayers, put=__cordl_internal_set__turnLoopPlayers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  _turnLoopPlayers;

/// @brief Method Awake, addr 0x1803e0d80, size 0x3e0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::TrainAudio* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803e1160, size 0x2d0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803e1430, size 0x2d0, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_CouplerLoop() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_CouplerLoop() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_CreakSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_CreakSound() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Parent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Parent() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_PeckSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_PeckSystem() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_PlatformDisplayLoop() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_PlatformDisplayLoop() ;

constexpr ::UnityW<::GlobalNamespace::NetworkedTrain> const& __cordl_internal_get_Train() const;

constexpr ::UnityW<::GlobalNamespace::NetworkedTrain>& __cordl_internal_get_Train() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>* const& __cordl_internal_get_TrainLoops() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>*& __cordl_internal_get_TrainLoops() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_TurnLoop() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_TurnLoop() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_WhooshSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_WhooshSound() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StandaloneOcclusion>>* const& __cordl_internal_get__StandaloneOcclusions_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StandaloneOcclusion>>*& __cordl_internal_get__StandaloneOcclusions_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>* const& __cordl_internal_get__couplerPlayers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*& __cordl_internal_get__couplerPlayers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>* const& __cordl_internal_get__creakPlayers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*& __cordl_internal_get__creakPlayers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioOcclusion>>* const& __cordl_internal_get__occlusions() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioOcclusion>>*& __cordl_internal_get__occlusions() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>* const& __cordl_internal_get__platformDisplayPlayers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*& __cordl_internal_get__platformDisplayPlayers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>* const& __cordl_internal_get__trainLoopPlayers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*& __cordl_internal_get__trainLoopPlayers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>* const& __cordl_internal_get__turnLoopPlayers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*& __cordl_internal_get__turnLoopPlayers() ;

constexpr void __cordl_internal_set_CouplerLoop(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_CreakSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_Parent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_PeckSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_PlatformDisplayLoop(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_Train(::UnityW<::GlobalNamespace::NetworkedTrain>  value) ;

constexpr void __cordl_internal_set_TrainLoops(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>*  value) ;

constexpr void __cordl_internal_set_TurnLoop(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_WhooshSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set__StandaloneOcclusions_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StandaloneOcclusion>>*  value) ;

constexpr void __cordl_internal_set__couplerPlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  value) ;

constexpr void __cordl_internal_set__creakPlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  value) ;

constexpr void __cordl_internal_set__occlusions(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioOcclusion>>*  value) ;

constexpr void __cordl_internal_set__platformDisplayPlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  value) ;

constexpr void __cordl_internal_set__trainLoopPlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  value) ;

constexpr void __cordl_internal_set__turnLoopPlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  value) ;

/// @brief Method .ctor, addr 0x1803e1700, size 0x180, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_StandaloneOcclusions, addr 0x180312ea0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StandaloneOcclusion>>* get_StandaloneOcclusions() ;

/// @brief Method set_StandaloneOcclusions, addr 0x1803e1880, size 0x20, virtual false, abstract: false, final false
inline void set_StandaloneOcclusions(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StandaloneOcclusion>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrainAudio() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrainAudio", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrainAudio(TrainAudio && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrainAudio", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrainAudio(TrainAudio const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4875};

/// @brief Field Train, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkedTrain>  ___Train;

/// @brief Field Parent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Parent;

/// @brief Field PeckSystem, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___PeckSystem;

/// @brief Field TrainLoops, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>*  ___TrainLoops;

/// @brief Field PlatformDisplayLoop, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___PlatformDisplayLoop;

/// @brief Field CreakSound, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___CreakSound;

/// @brief Field CouplerLoop, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___CouplerLoop;

/// @brief Field TurnLoop, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___TurnLoop;

/// @brief Field WhooshSound, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___WhooshSound;

/// @brief Field _trainLoopPlayers, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  ____trainLoopPlayers;

/// @brief Field _platformDisplayPlayers, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  ____platformDisplayPlayers;

/// @brief Field _creakPlayers, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  ____creakPlayers;

/// @brief Field _couplerPlayers, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  ____couplerPlayers;

/// @brief Field _turnLoopPlayers, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  ____turnLoopPlayers;

/// @brief Field <StandaloneOcclusions>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StandaloneOcclusion>>*  ____StandaloneOcclusions_k__BackingField;

/// @brief Field _occlusions, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioOcclusion>>*  ____occlusions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrainAudio, ___Train) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainAudio, ___Parent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainAudio, ___PeckSystem) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainAudio, ___TrainLoops) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainAudio, ___PlatformDisplayLoop) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainAudio, ___CreakSound) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainAudio, ___CouplerLoop) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainAudio, ___TurnLoop) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainAudio, ___WhooshSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainAudio, ____trainLoopPlayers) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainAudio, ____platformDisplayPlayers) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainAudio, ____creakPlayers) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainAudio, ____couplerPlayers) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainAudio, ____turnLoopPlayers) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainAudio, ____StandaloneOcclusions_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainAudio, ____occlusions) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TrainAudio) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
