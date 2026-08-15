#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectPoseSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PeckEffectPoseSettings)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PlayerPose;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectPoseSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectPoseSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectPoseSettings*, "", "PeckEffectPoseSettings");
// Dependencies PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectPoseSettings
class CORDL_TYPE PeckEffectPoseSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field entryIsBlocked, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_entryIsBlocked, put=__cordl_internal_set_entryIsBlocked)) ::ArrayW<bool>  entryIsBlocked;

/// @brief Field leaveWithJump, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_leaveWithJump, put=__cordl_internal_set_leaveWithJump)) ::ArrayW<bool>  leaveWithJump;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Field targetPose, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetPose, put=__cordl_internal_set_targetPose)) ::UnityW<::GlobalNamespace::PlayerPose>  targetPose;

/// @brief Method Awake, addr 0x18044bdc0, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectPoseSettings* New_ctor() ;

/// @brief Method OnPeck, addr 0x18044be60, size 0x70, virtual false, abstract: false, final false
inline void OnPeck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_entryIsBlocked() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_entryIsBlocked() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_leaveWithJump() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_leaveWithJump() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr ::UnityW<::GlobalNamespace::PlayerPose> const& __cordl_internal_get_targetPose() const;

constexpr ::UnityW<::GlobalNamespace::PlayerPose>& __cordl_internal_get_targetPose() ;

constexpr void __cordl_internal_set_entryIsBlocked(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_leaveWithJump(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_targetPose(::UnityW<::GlobalNamespace::PlayerPose>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectPoseSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectPoseSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectPoseSettings(PeckEffectPoseSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectPoseSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectPoseSettings(PeckEffectPoseSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5402};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field targetPose, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerPose>  ___targetPose;

/// @brief Field leaveWithJump, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<bool>  ___leaveWithJump;

/// @brief Field entryIsBlocked, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<bool>  ___entryIsBlocked;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectPoseSettings, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPoseSettings, ___targetPose) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPoseSettings, ___leaveWithJump) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPoseSettings, ___entryIsBlocked) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectPoseSettings) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
