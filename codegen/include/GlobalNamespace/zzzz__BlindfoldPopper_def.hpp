#pragma once
// IWYU pragma private; include "GlobalNamespace/BlindfoldPopper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Launcher_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BlindfoldPopper)
namespace GlobalNamespace {
class PlayerPose;
}
// Forward declare root types
namespace GlobalNamespace {
class BlindfoldPopper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BlindfoldPopper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BlindfoldPopper*, "", "BlindfoldPopper");
// Dependencies Launcher, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BlindfoldPopper
class CORDL_TYPE BlindfoldPopper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field launcher, offset 0x28, size 0x30 
 __declspec(property(get=__cordl_internal_get_launcher, put=__cordl_internal_set_launcher)) ::GlobalNamespace::Launcher  launcher;

/// @brief Field playerPose, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerPose, put=__cordl_internal_set_playerPose)) ::UnityW<::GlobalNamespace::PlayerPose>  playerPose;

/// @brief Method Launch, addr 0x1803f7b40, size 0xc0, virtual false, abstract: false, final false
inline void Launch() ;

static inline ::GlobalNamespace::BlindfoldPopper* New_ctor() ;

constexpr ::GlobalNamespace::Launcher const& __cordl_internal_get_launcher() const;

constexpr ::GlobalNamespace::Launcher& __cordl_internal_get_launcher() ;

constexpr ::UnityW<::GlobalNamespace::PlayerPose> const& __cordl_internal_get_playerPose() const;

constexpr ::UnityW<::GlobalNamespace::PlayerPose>& __cordl_internal_get_playerPose() ;

constexpr void __cordl_internal_set_launcher(::GlobalNamespace::Launcher  value) ;

constexpr void __cordl_internal_set_playerPose(::UnityW<::GlobalNamespace::PlayerPose>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BlindfoldPopper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BlindfoldPopper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BlindfoldPopper(BlindfoldPopper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlindfoldPopper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlindfoldPopper(BlindfoldPopper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5025};

/// @brief Field playerPose, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerPose>  ___playerPose;

/// @brief Field launcher, offset: 0x28, size: 0x30, def value: None
 ::GlobalNamespace::Launcher  ___launcher;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BlindfoldPopper, ___playerPose) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlindfoldPopper, ___launcher) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BlindfoldPopper) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
