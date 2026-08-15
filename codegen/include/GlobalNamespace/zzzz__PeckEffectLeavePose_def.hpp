#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectLeavePose.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PeckEffectLeavePose)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PlayerPose;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectLeavePose;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectLeavePose*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectLeavePose*, "", "PeckEffectLeavePose");
// Dependencies PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectLeavePose
class CORDL_TYPE PeckEffectLeavePose : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Field targetPose, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetPose, put=__cordl_internal_set_targetPose)) ::UnityW<::GlobalNamespace::PlayerPose>  targetPose;

/// @brief Method Awake, addr 0x180449cf0, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectLeavePose* New_ctor() ;

/// @brief Method OnPeck, addr 0x180449d90, size 0x80, virtual false, abstract: false, final false
inline void OnPeck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr ::UnityW<::GlobalNamespace::PlayerPose> const& __cordl_internal_get_targetPose() const;

constexpr ::UnityW<::GlobalNamespace::PlayerPose>& __cordl_internal_get_targetPose() ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_targetPose(::UnityW<::GlobalNamespace::PlayerPose>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectLeavePose() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectLeavePose", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectLeavePose(PeckEffectLeavePose && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectLeavePose", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectLeavePose(PeckEffectLeavePose const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5387};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field targetPose, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerPose>  ___targetPose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectLeavePose, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectLeavePose, ___targetPose) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectLeavePose) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
