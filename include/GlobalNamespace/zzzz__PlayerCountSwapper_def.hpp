#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCountSwapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerCount_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlayerCountSwapper)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerCountSwapper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerCountSwapper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCountSwapper*, "", "PlayerCountSwapper");
// Dependencies PlayerCount, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCountSwapper
class CORDL_TYPE PlayerCountSwapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field playerCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_playerCount, put=setStaticF_playerCount)) ::GlobalNamespace::PlayerCount  playerCount;

/// @brief Field target2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_target2, put=__cordl_internal_set_target2)) ::UnityW<::UnityEngine::GameObject>  target2;

/// @brief Field target3, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_target3, put=__cordl_internal_set_target3)) ::UnityW<::UnityEngine::GameObject>  target3;

/// @brief Field target4, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target4, put=__cordl_internal_set_target4)) ::UnityW<::UnityEngine::GameObject>  target4;

/// @brief Method Awake, addr 0x180427e00, size 0x160, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PlayerCountSwapper* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_target2() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_target2() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_target3() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_target3() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_target4() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_target4() ;

constexpr void __cordl_internal_set_target2(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_target3(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_target4(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::PlayerCount getStaticF_playerCount() ;

static inline void setStaticF_playerCount(::GlobalNamespace::PlayerCount  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCountSwapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCountSwapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCountSwapper(PlayerCountSwapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCountSwapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCountSwapper(PlayerCountSwapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5175};

/// @brief Field target4, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___target4;

/// @brief Field target3, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___target3;

/// @brief Field target2, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___target2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerCountSwapper, ___target4) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCountSwapper, ___target3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCountSwapper, ___target2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerCountSwapper) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
