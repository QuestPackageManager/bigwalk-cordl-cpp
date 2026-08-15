#pragma once
// IWYU pragma private; include "GlobalNamespace/PropAnimatables.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeakHandle_def.hpp"
#include "GlobalNamespace/zzzz__BeakPostureMask_def.hpp"
#include "GlobalNamespace/zzzz__BeakPosture_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PropAnimatables)
// Forward declare root types
namespace GlobalNamespace {
class PropAnimatables;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropAnimatables*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropAnimatables*, "", "PropAnimatables");
// Dependencies BeakHandle, BeakPosture, BeakPostureMask, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropAnimatables
class CORDL_TYPE PropAnimatables : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field additiveHandle, offset 0x20, size 0x144 
 __declspec(property(get=__cordl_internal_get_additiveHandle, put=__cordl_internal_set_additiveHandle)) ::GlobalNamespace::BeakHandle  additiveHandle;

/// @brief Field beakPostureAdditive, offset 0x2c4, size 0x48 
 __declspec(property(get=__cordl_internal_get_beakPostureAdditive, put=__cordl_internal_set_beakPostureAdditive)) ::GlobalNamespace::BeakPosture  beakPostureAdditive;

/// @brief Field overrideHandle, offset 0x164, size 0x144 
 __declspec(property(get=__cordl_internal_get_overrideHandle, put=__cordl_internal_set_overrideHandle)) ::GlobalNamespace::BeakHandle  overrideHandle;

/// @brief Field overridesMask, offset 0x2a8, size 0x1c 
 __declspec(property(get=__cordl_internal_get_overridesMask, put=__cordl_internal_set_overridesMask)) ::GlobalNamespace::BeakPostureMask  overridesMask;

static inline ::GlobalNamespace::PropAnimatables* New_ctor() ;

constexpr ::GlobalNamespace::BeakHandle const& __cordl_internal_get_additiveHandle() const;

constexpr ::GlobalNamespace::BeakHandle& __cordl_internal_get_additiveHandle() ;

constexpr ::GlobalNamespace::BeakPosture const& __cordl_internal_get_beakPostureAdditive() const;

constexpr ::GlobalNamespace::BeakPosture& __cordl_internal_get_beakPostureAdditive() ;

constexpr ::GlobalNamespace::BeakHandle const& __cordl_internal_get_overrideHandle() const;

constexpr ::GlobalNamespace::BeakHandle& __cordl_internal_get_overrideHandle() ;

constexpr ::GlobalNamespace::BeakPostureMask const& __cordl_internal_get_overridesMask() const;

constexpr ::GlobalNamespace::BeakPostureMask& __cordl_internal_get_overridesMask() ;

constexpr void __cordl_internal_set_additiveHandle(::GlobalNamespace::BeakHandle  value) ;

constexpr void __cordl_internal_set_beakPostureAdditive(::GlobalNamespace::BeakPosture  value) ;

constexpr void __cordl_internal_set_overrideHandle(::GlobalNamespace::BeakHandle  value) ;

constexpr void __cordl_internal_set_overridesMask(::GlobalNamespace::BeakPostureMask  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropAnimatables() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropAnimatables", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropAnimatables(PropAnimatables && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropAnimatables", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropAnimatables(PropAnimatables const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5575};

/// @brief Field additiveHandle, offset: 0x20, size: 0x144, def value: None
 ::GlobalNamespace::BeakHandle  ___additiveHandle;

/// @brief Field overrideHandle, offset: 0x164, size: 0x144, def value: None
 ::GlobalNamespace::BeakHandle  ___overrideHandle;

/// @brief Field overridesMask, offset: 0x2a8, size: 0x1c, def value: None
 ::GlobalNamespace::BeakPostureMask  ___overridesMask;

/// @brief Field beakPostureAdditive, offset: 0x2c4, size: 0x48, def value: None
 ::GlobalNamespace::BeakPosture  ___beakPostureAdditive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropAnimatables, ___additiveHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropAnimatables, ___overrideHandle) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropAnimatables, ___overridesMask) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropAnimatables, ___beakPostureAdditive) == 0x2c4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropAnimatables) == 0x310, "Size mismatch!");

} // namespace end def GlobalNamespace
