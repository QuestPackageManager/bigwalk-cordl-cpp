#pragma once
// IWYU pragma private; include "GlobalNamespace/CastableTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CastableOutcome_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(CastableTarget)
namespace GlobalNamespace {
struct CastableOutcome;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CastableTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CastableTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CastableTarget*, "", "CastableTarget");
// Dependencies CastableOutcome, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CastableTarget
class CORDL_TYPE CastableTarget : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field customCrosshairPoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_customCrosshairPoint, put=__cordl_internal_set_customCrosshairPoint)) ::UnityW<::UnityEngine::Transform>  customCrosshairPoint;

/// @brief Field logVerbose, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field outcomes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_outcomes, put=__cordl_internal_set_outcomes)) ::ArrayW<::GlobalNamespace::CastableOutcome>  outcomes;

/// @brief Method GetCastableOutcome, addr 0x18045a8d0, size 0xe0, virtual false, abstract: false, final false
inline bool GetCastableOutcome(::GlobalNamespace::PlayerCharacter*  playerCharacter, ::by_ref<::GlobalNamespace::CastableOutcome>  outcome) ;

/// @brief Method GetCrosshairTransform, addr 0x18045a9b0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetCrosshairTransform() ;

static inline ::GlobalNamespace::CastableTarget* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_customCrosshairPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_customCrosshairPoint() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::ArrayW<::GlobalNamespace::CastableOutcome> const& __cordl_internal_get_outcomes() const;

constexpr ::ArrayW<::GlobalNamespace::CastableOutcome>& __cordl_internal_get_outcomes() ;

constexpr void __cordl_internal_set_customCrosshairPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_outcomes(::ArrayW<::GlobalNamespace::CastableOutcome>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CastableTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CastableTarget", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CastableTarget(CastableTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CastableTarget", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CastableTarget(CastableTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5435};

/// @brief Field customCrosshairPoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___customCrosshairPoint;

/// @brief Field outcomes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CastableOutcome>  ___outcomes;

/// @brief Field logVerbose, offset: 0x30, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CastableTarget, ___customCrosshairPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CastableTarget, ___outcomes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CastableTarget, ___logVerbose) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CastableTarget) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
