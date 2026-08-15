#pragma once
// IWYU pragma private; include "GlobalNamespace/ChairliftAudio.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ChairliftAudio)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioPlayer;
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
class ChairliftAudio;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ChairliftAudio*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ChairliftAudio*, "", "ChairliftAudio");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ChairliftAudio
class CORDL_TYPE ChairliftAudio : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ChairCreak, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ChairCreak, put=__cordl_internal_set_ChairCreak)) ::UnityW<::GlobalNamespace::AudioAsset>  ChairCreak;

/// @brief Field MoveLoop, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_MoveLoop, put=__cordl_internal_set_MoveLoop)) ::UnityW<::GlobalNamespace::AudioAsset>  MoveLoop;

/// @brief Field Parent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Parent, put=__cordl_internal_set_Parent)) ::UnityW<::UnityEngine::GameObject>  Parent;

/// @brief Field PeckSystem, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PeckSystem, put=__cordl_internal_set_PeckSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  PeckSystem;

/// @brief Field PoleLoop, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PoleLoop, put=__cordl_internal_set_PoleLoop)) ::UnityW<::GlobalNamespace::AudioAsset>  PoleLoop;

/// @brief Field StartSound, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_StartSound, put=__cordl_internal_set_StartSound)) ::UnityW<::GlobalNamespace::AudioAsset>  StartSound;

/// @brief Field _chairCreakPlayers, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__chairCreakPlayers, put=__cordl_internal_set__chairCreakPlayers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  _chairCreakPlayers;

/// @brief Field _chairMoveLoopPlayers, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__chairMoveLoopPlayers, put=__cordl_internal_set__chairMoveLoopPlayers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  _chairMoveLoopPlayers;

/// @brief Field _poleLoopPlayers, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__poleLoopPlayers, put=__cordl_internal_set__poleLoopPlayers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  _poleLoopPlayers;

/// @brief Method Awake, addr 0x18032c3f0, size 0x170, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ChairliftAudio* New_ctor() ;

/// @brief Method OnDisable, addr 0x18032c560, size 0x150, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18032c6b0, size 0x280, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_ChairCreak() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_ChairCreak() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_MoveLoop() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_MoveLoop() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Parent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Parent() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_PeckSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_PeckSystem() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_PoleLoop() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_PoleLoop() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_StartSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_StartSound() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>* const& __cordl_internal_get__chairCreakPlayers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*& __cordl_internal_get__chairCreakPlayers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>* const& __cordl_internal_get__chairMoveLoopPlayers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*& __cordl_internal_get__chairMoveLoopPlayers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>* const& __cordl_internal_get__poleLoopPlayers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*& __cordl_internal_get__poleLoopPlayers() ;

constexpr void __cordl_internal_set_ChairCreak(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_MoveLoop(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_Parent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_PeckSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_PoleLoop(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_StartSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set__chairCreakPlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  value) ;

constexpr void __cordl_internal_set__chairMoveLoopPlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  value) ;

constexpr void __cordl_internal_set__poleLoopPlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  value) ;

/// @brief Method .ctor, addr 0x18032c930, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChairliftAudio() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChairliftAudio", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChairliftAudio(ChairliftAudio && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChairliftAudio", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChairliftAudio(ChairliftAudio const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4816};

/// @brief Field Parent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Parent;

/// @brief Field PeckSystem, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___PeckSystem;

/// @brief Field StartSound, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___StartSound;

/// @brief Field PoleLoop, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___PoleLoop;

/// @brief Field ChairCreak, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___ChairCreak;

/// @brief Field MoveLoop, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___MoveLoop;

/// @brief Field _poleLoopPlayers, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  ____poleLoopPlayers;

/// @brief Field _chairCreakPlayers, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  ____chairCreakPlayers;

/// @brief Field _chairMoveLoopPlayers, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  ____chairMoveLoopPlayers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ChairliftAudio, ___Parent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChairliftAudio, ___PeckSystem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChairliftAudio, ___StartSound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChairliftAudio, ___PoleLoop) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChairliftAudio, ___ChairCreak) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChairliftAudio, ___MoveLoop) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChairliftAudio, ____poleLoopPlayers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChairliftAudio, ____chairCreakPlayers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChairliftAudio, ____chairMoveLoopPlayers) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ChairliftAudio) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
