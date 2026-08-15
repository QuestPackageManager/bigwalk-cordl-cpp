#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomAudioRandomContainerPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomAudioRandomContainerPlayer)
namespace GlobalNamespace {
class AudioRandomContainer;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace Mirror {
class NetworkBehaviour;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomAudioRandomContainerPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomAudioRandomContainerPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomAudioRandomContainerPlayer*, "", "CustomAudioRandomContainerPlayer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomAudioRandomContainerPlayer
class CORDL_TYPE CustomAudioRandomContainerPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Container, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Container, put=__cordl_internal_set_Container)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  Container;

/// @brief Field DeterministicSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_DeterministicSource, put=__cordl_internal_set_DeterministicSource)) ::UnityW<::Mirror::NetworkBehaviour>  DeterministicSource;

/// @brief Field FollowTransform, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_FollowTransform, put=__cordl_internal_set_FollowTransform)) bool  FollowTransform;

/// @brief Field PlayOnEnable, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_PlayOnEnable, put=__cordl_internal_set_PlayOnEnable)) bool  PlayOnEnable;

/// @brief Field StopBeforePlay, offset 0x2b, size 0x1 
 __declspec(property(get=__cordl_internal_get_StopBeforePlay, put=__cordl_internal_set_StopBeforePlay)) bool  StopBeforePlay;

/// @brief Field StopOnDisable, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_StopOnDisable, put=__cordl_internal_set_StopOnDisable)) bool  StopOnDisable;

/// @brief Field _ascList, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ascList, put=__cordl_internal_set__ascList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  _ascList;

/// @brief Method GetCueDeterministic, addr 0x180332440, size 0x50, virtual false, abstract: false, final false
inline int32_t GetCueDeterministic(::GlobalNamespace::AudioRandomContainer*  container) ;

static inline ::GlobalNamespace::CustomAudioRandomContainerPlayer* New_ctor() ;

/// @brief Method OnDisable, addr 0x180332490, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803324a0, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Play, addr 0x1803324b0, size 0x1e0, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Stop, addr 0x180332690, size 0xc0, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method <Play>g___clearRef|9_0, addr 0x180332750, size 0x80, virtual false, abstract: false, final false
static inline void _Play_g___clearRef_9_0(::GlobalNamespace::CustomAudioRandomContainerPlayer*  p, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_Container() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_Container() ;

constexpr ::UnityW<::Mirror::NetworkBehaviour> const& __cordl_internal_get_DeterministicSource() const;

constexpr ::UnityW<::Mirror::NetworkBehaviour>& __cordl_internal_get_DeterministicSource() ;

constexpr bool const& __cordl_internal_get_FollowTransform() const;

constexpr bool& __cordl_internal_get_FollowTransform() ;

constexpr bool const& __cordl_internal_get_PlayOnEnable() const;

constexpr bool& __cordl_internal_get_PlayOnEnable() ;

constexpr bool const& __cordl_internal_get_StopBeforePlay() const;

constexpr bool& __cordl_internal_get_StopBeforePlay() ;

constexpr bool const& __cordl_internal_get_StopOnDisable() const;

constexpr bool& __cordl_internal_get_StopOnDisable() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get__ascList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get__ascList() ;

constexpr void __cordl_internal_set_Container(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_DeterministicSource(::UnityW<::Mirror::NetworkBehaviour>  value) ;

constexpr void __cordl_internal_set_FollowTransform(bool  value) ;

constexpr void __cordl_internal_set_PlayOnEnable(bool  value) ;

constexpr void __cordl_internal_set_StopBeforePlay(bool  value) ;

constexpr void __cordl_internal_set_StopOnDisable(bool  value) ;

constexpr void __cordl_internal_set__ascList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

/// @brief Method .ctor, addr 0x1803327d0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomAudioRandomContainerPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomAudioRandomContainerPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomAudioRandomContainerPlayer(CustomAudioRandomContainerPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomAudioRandomContainerPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomAudioRandomContainerPlayer(CustomAudioRandomContainerPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4825};

/// @brief Field Container, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___Container;

/// @brief Field PlayOnEnable, offset: 0x28, size: 0x1, def value: None
 bool  ___PlayOnEnable;

/// @brief Field StopOnDisable, offset: 0x29, size: 0x1, def value: None
 bool  ___StopOnDisable;

/// @brief Field FollowTransform, offset: 0x2a, size: 0x1, def value: None
 bool  ___FollowTransform;

/// @brief Field StopBeforePlay, offset: 0x2b, size: 0x1, def value: None
 bool  ___StopBeforePlay;

/// @brief Field DeterministicSource, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkBehaviour>  ___DeterministicSource;

/// @brief Field _ascList, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ____ascList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomAudioRandomContainerPlayer, ___Container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomAudioRandomContainerPlayer, ___PlayOnEnable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomAudioRandomContainerPlayer, ___StopOnDisable) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomAudioRandomContainerPlayer, ___FollowTransform) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomAudioRandomContainerPlayer, ___StopBeforePlay) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomAudioRandomContainerPlayer, ___DeterministicSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomAudioRandomContainerPlayer, ____ascList) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomAudioRandomContainerPlayer) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
