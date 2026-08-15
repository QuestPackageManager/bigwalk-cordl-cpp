#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicPlayerSetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MusicPlayer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MusicPlayerSetter)
namespace GlobalNamespace {
class MusicGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class MusicPlayerSetter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MusicPlayerSetter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MusicPlayerSetter*, "", "MusicPlayerSetter");
// Dependencies MusicPlayer, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MusicPlayerSetter
class CORDL_TYPE MusicPlayerSetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field musicGroup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_musicGroup, put=__cordl_internal_set_musicGroup)) ::UnityW<::GlobalNamespace::MusicGroup>  musicGroup;

/// @brief Field players, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_players, put=__cordl_internal_set_players)) ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>  players;

static inline ::GlobalNamespace::MusicPlayerSetter* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::MusicGroup> const& __cordl_internal_get_musicGroup() const;

constexpr ::UnityW<::GlobalNamespace::MusicGroup>& __cordl_internal_get_musicGroup() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>> const& __cordl_internal_get_players() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>& __cordl_internal_get_players() ;

constexpr void __cordl_internal_set_musicGroup(::UnityW<::GlobalNamespace::MusicGroup>  value) ;

constexpr void __cordl_internal_set_players(::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MusicPlayerSetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MusicPlayerSetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MusicPlayerSetter(MusicPlayerSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MusicPlayerSetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MusicPlayerSetter(MusicPlayerSetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4907};

/// @brief Field musicGroup, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MusicGroup>  ___musicGroup;

/// @brief Field players, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>  ___players;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MusicPlayerSetter, ___musicGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayerSetter, ___players) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MusicPlayerSetter) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
