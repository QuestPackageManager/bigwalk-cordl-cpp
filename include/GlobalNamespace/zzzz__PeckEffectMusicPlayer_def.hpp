#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectMusicPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MusicGroup_def.hpp"
#include "GlobalNamespace/zzzz__MusicPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PeckEffectMusicPlayer)
namespace GlobalNamespace {
struct PeckContext;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectMusicPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectMusicPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectMusicPlayer*, "", "PeckEffectMusicPlayer");
// Dependencies MusicGroup, MusicPlayer, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectMusicPlayer
class CORDL_TYPE PeckEffectMusicPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field musicGroupsPerState, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_musicGroupsPerState, put=__cordl_internal_set_musicGroupsPerState)) ::ArrayW<::UnityW<::GlobalNamespace::MusicGroup>>  musicGroupsPerState;

/// @brief Field peckSystemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystemReference, put=__cordl_internal_set_peckSystemReference)) ::GlobalNamespace::PeckSystemReference  peckSystemReference;

/// @brief Field targets, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_targets, put=__cordl_internal_set_targets)) ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>  targets;

/// @brief Method Awake, addr 0x18044a570, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectMusicPlayer* New_ctor() ;

/// @brief Method OnPeck, addr 0x18044a610, size 0x100, virtual false, abstract: false, final false
inline void OnPeck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicGroup>> const& __cordl_internal_get_musicGroupsPerState() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicGroup>>& __cordl_internal_get_musicGroupsPerState() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystemReference() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>> const& __cordl_internal_get_targets() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>& __cordl_internal_get_targets() ;

constexpr void __cordl_internal_set_musicGroupsPerState(::ArrayW<::UnityW<::GlobalNamespace::MusicGroup>>  value) ;

constexpr void __cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_targets(::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectMusicPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectMusicPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectMusicPlayer(PeckEffectMusicPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectMusicPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectMusicPlayer(PeckEffectMusicPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5394};

/// @brief Field peckSystemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystemReference;

/// @brief Field targets, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>  ___targets;

/// @brief Field musicGroupsPerState, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::MusicGroup>>  ___musicGroupsPerState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectMusicPlayer, ___peckSystemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectMusicPlayer, ___targets) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectMusicPlayer, ___musicGroupsPerState) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectMusicPlayer) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
