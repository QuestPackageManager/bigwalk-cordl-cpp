#pragma once
// IWYU pragma private; include "HouseHouse/Medal/PoseMedal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "HouseHouse/Medal/zzzz__MedalType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PoseMedal)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PlayerPose;
}
// Forward declare root types
namespace HouseHouse::Medal {
class PoseMedal;
}
// Write type traits
MARK_REF_T(::HouseHouse::Medal::PoseMedal*);
DEFINE_IL2CPP_CLASS(::HouseHouse::Medal::PoseMedal*, "HouseHouse.Medal", "PoseMedal");
// Dependencies HouseHouse.Medal.MedalType, PeckStateFilter, PeckSystemReference, UnityEngine.MonoBehaviour
namespace HouseHouse::Medal {
// Is value type: false
// CS Name: HouseHouse.Medal.PoseMedal
class CORDL_TYPE PoseMedal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field medalType, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_medalType, put=__cordl_internal_set_medalType)) ::HouseHouse::Medal::MedalType  medalType;

/// @brief Field peckSystemReference, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystemReference, put=__cordl_internal_set_peckSystemReference)) ::GlobalNamespace::PeckSystemReference  peckSystemReference;

/// @brief Field playerPose, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerPose, put=__cordl_internal_set_playerPose)) ::UnityW<::GlobalNamespace::PlayerPose>  playerPose;

/// @brief Field stateFilter, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_stateFilter, put=__cordl_internal_set_stateFilter)) ::GlobalNamespace::PeckStateFilter  stateFilter;

/// @brief Method CheckAndAward, addr 0x1803d00c0, size 0xd0, virtual false, abstract: false, final false
inline void CheckAndAward() ;

static inline ::HouseHouse::Medal::PoseMedal* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803d0190, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803d0280, size 0x120, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnterPose, addr 0x1803d03a0, size 0x10, virtual false, abstract: false, final false
inline void OnEnterPose() ;

/// @brief Method Peck, addr 0x1803d03a0, size 0x10, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::HouseHouse::Medal::MedalType const& __cordl_internal_get_medalType() const;

constexpr ::HouseHouse::Medal::MedalType& __cordl_internal_get_medalType() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystemReference() ;

constexpr ::UnityW<::GlobalNamespace::PlayerPose> const& __cordl_internal_get_playerPose() const;

constexpr ::UnityW<::GlobalNamespace::PlayerPose>& __cordl_internal_get_playerPose() ;

constexpr ::GlobalNamespace::PeckStateFilter const& __cordl_internal_get_stateFilter() const;

constexpr ::GlobalNamespace::PeckStateFilter& __cordl_internal_get_stateFilter() ;

constexpr void __cordl_internal_set_medalType(::HouseHouse::Medal::MedalType  value) ;

constexpr void __cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_playerPose(::UnityW<::GlobalNamespace::PlayerPose>  value) ;

constexpr void __cordl_internal_set_stateFilter(::GlobalNamespace::PeckStateFilter  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoseMedal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoseMedal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PoseMedal(PoseMedal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoseMedal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoseMedal(PoseMedal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5773};

/// @brief Field playerPose, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerPose>  ___playerPose;

/// @brief Field peckSystemReference, offset: 0x28, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystemReference;

/// @brief Field stateFilter, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  ___stateFilter;

/// @brief Field medalType, offset: 0x60, size: 0x4, def value: None
 ::HouseHouse::Medal::MedalType  ___medalType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HouseHouse::Medal::PoseMedal, ___playerPose) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Medal::PoseMedal, ___peckSystemReference) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Medal::PoseMedal, ___stateFilter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Medal::PoseMedal, ___medalType) == 0x60, "Offset mismatch!");

static_assert(sizeof(::HouseHouse::Medal::PoseMedal) == 0x68, "Size mismatch!");

} // namespace end def HouseHouse::Medal
