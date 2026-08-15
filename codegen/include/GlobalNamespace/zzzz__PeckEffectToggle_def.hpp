#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectToggle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PeckEffectToggle)
namespace GlobalNamespace {
struct PeckContext;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectToggle;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectToggle*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectToggle*, "", "PeckEffectToggle");
// Dependencies PeckSystemReference, UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectToggle
class CORDL_TYPE PeckEffectToggle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field logVerbose, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onlyForLocalPlayer, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlyForLocalPlayer, put=__cordl_internal_set_onlyForLocalPlayer)) bool  onlyForLocalPlayer;

/// @brief Field peckSystemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystemReference, put=__cordl_internal_set_peckSystemReference)) ::GlobalNamespace::PeckSystemReference  peckSystemReference;

/// @brief Field settingsPerState, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_settingsPerState, put=__cordl_internal_set_settingsPerState)) ::ArrayW<bool>  settingsPerState;

/// @brief Field target, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field targets, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_targets, put=__cordl_internal_set_targets)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  targets;

/// @brief Method Awake, addr 0x180450550, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectToggle* New_ctor() ;

/// @brief Method Peck, addr 0x1804505f0, size 0x180, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr bool const& __cordl_internal_get_onlyForLocalPlayer() const;

constexpr bool& __cordl_internal_get_onlyForLocalPlayer() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystemReference() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_settingsPerState() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_settingsPerState() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_targets() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_targets() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onlyForLocalPlayer(bool  value) ;

constexpr void __cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_settingsPerState(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_targets(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectToggle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectToggle(PeckEffectToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectToggle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectToggle(PeckEffectToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5420};

/// @brief Field peckSystemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystemReference;

/// @brief Field settingsPerState, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<bool>  ___settingsPerState;

/// @brief Field target, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field targets, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___targets;

/// @brief Field onlyForLocalPlayer, offset: 0x60, size: 0x1, def value: None
 bool  ___onlyForLocalPlayer;

/// @brief Field logVerbose, offset: 0x61, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectToggle, ___peckSystemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectToggle, ___settingsPerState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectToggle, ___target) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectToggle, ___targets) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectToggle, ___onlyForLocalPlayer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectToggle, ___logVerbose) == 0x61, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectToggle) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
