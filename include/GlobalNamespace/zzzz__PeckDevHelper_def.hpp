#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckDevHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PeckDevHelper)
namespace GlobalNamespace {
struct PeckDevHelper_UnlockRules;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckDevHelper;
}
namespace GlobalNamespace {
struct PeckDevHelper_UnlockRules;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckDevHelper*);
MARK_VAL_T(::GlobalNamespace::PeckDevHelper_UnlockRules);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckDevHelper*, "", "PeckDevHelper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckDevHelper_UnlockRules, "", "PeckDevHelper/UnlockRules");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckDevHelper/UnlockRules
struct CORDL_TYPE PeckDevHelper_UnlockRules {
public:
// Declarations
/// @brief Method Matches, addr 0x1803f2720, size 0x120, virtual false, abstract: false, final false
inline bool Matches(::GlobalNamespace::PeckDevHelper_UnlockRules  other) ;

// Ctor Parameters []
// @brief default ctor
constexpr PeckDevHelper_UnlockRules() ;

// Ctor Parameters [CppParam { name: "unlocks", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "lights", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "chairlift", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "train", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "bell", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "tunnel", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "map", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "gourd", ty: "bool", modifiers: "", def_value: None }]
constexpr PeckDevHelper_UnlockRules(bool  unlocks, bool  lights, bool  chairlift, bool  train, bool  bell, bool  tunnel, bool  map, bool  gourd) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4910};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field unlocks, offset: 0x0, size: 0x1, def value: None
 bool  unlocks;

/// @brief Field lights, offset: 0x1, size: 0x1, def value: None
 bool  lights;

/// @brief Field chairlift, offset: 0x2, size: 0x1, def value: None
 bool  chairlift;

/// @brief Field train, offset: 0x3, size: 0x1, def value: None
 bool  train;

/// @brief Field bell, offset: 0x4, size: 0x1, def value: None
 bool  bell;

/// @brief Field tunnel, offset: 0x5, size: 0x1, def value: None
 bool  tunnel;

/// @brief Field map, offset: 0x6, size: 0x1, def value: None
 bool  map;

/// @brief Field gourd, offset: 0x7, size: 0x1, def value: None
 bool  gourd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckDevHelper_UnlockRules, unlocks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckDevHelper_UnlockRules, lights) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckDevHelper_UnlockRules, chairlift) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckDevHelper_UnlockRules, train) == 0x3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckDevHelper_UnlockRules, bell) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckDevHelper_UnlockRules, tunnel) == 0x5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckDevHelper_UnlockRules, map) == 0x6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckDevHelper_UnlockRules, gourd) == 0x7, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckDevHelper_UnlockRules) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckDevHelper::UnlockRules, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckDevHelper
class CORDL_TYPE PeckDevHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using UnlockRules = ::GlobalNamespace::PeckDevHelper_UnlockRules;

/// @brief Field fireWithLights, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_fireWithLights, put=__cordl_internal_set_fireWithLights)) bool  fireWithLights;

/// @brief Field fireWithTrain, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_fireWithTrain, put=__cordl_internal_set_fireWithTrain)) bool  fireWithTrain;

/// @brief Field fireWithUnlocks, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_fireWithUnlocks, put=__cordl_internal_set_fireWithUnlocks)) bool  fireWithUnlocks;

/// @brief Field unlockRules, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockRules, put=__cordl_internal_set_unlockRules)) ::GlobalNamespace::PeckDevHelper_UnlockRules  unlockRules;

static inline ::GlobalNamespace::PeckDevHelper* New_ctor() ;

/// @brief Method Trigger, addr 0x1803ee170, size 0x180, virtual false, abstract: false, final false
static inline void Trigger(::GlobalNamespace::PeckDevHelper_UnlockRules  rules) ;

constexpr bool const& __cordl_internal_get_fireWithLights() const;

constexpr bool& __cordl_internal_get_fireWithLights() ;

constexpr bool const& __cordl_internal_get_fireWithTrain() const;

constexpr bool& __cordl_internal_get_fireWithTrain() ;

constexpr bool const& __cordl_internal_get_fireWithUnlocks() const;

constexpr bool& __cordl_internal_get_fireWithUnlocks() ;

constexpr ::GlobalNamespace::PeckDevHelper_UnlockRules const& __cordl_internal_get_unlockRules() const;

constexpr ::GlobalNamespace::PeckDevHelper_UnlockRules& __cordl_internal_get_unlockRules() ;

constexpr void __cordl_internal_set_fireWithLights(bool  value) ;

constexpr void __cordl_internal_set_fireWithTrain(bool  value) ;

constexpr void __cordl_internal_set_fireWithUnlocks(bool  value) ;

constexpr void __cordl_internal_set_unlockRules(::GlobalNamespace::PeckDevHelper_UnlockRules  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckDevHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckDevHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckDevHelper(PeckDevHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckDevHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckDevHelper(PeckDevHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4911};

/// @brief Field unlockRules, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::PeckDevHelper_UnlockRules  ___unlockRules;

/// @brief Field fireWithUnlocks, offset: 0x28, size: 0x1, def value: None
 bool  ___fireWithUnlocks;

/// @brief Field fireWithLights, offset: 0x29, size: 0x1, def value: None
 bool  ___fireWithLights;

/// @brief Field fireWithTrain, offset: 0x2a, size: 0x1, def value: None
 bool  ___fireWithTrain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckDevHelper, ___unlockRules) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckDevHelper, ___fireWithUnlocks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckDevHelper, ___fireWithLights) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckDevHelper, ___fireWithTrain) == 0x2a, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckDevHelper) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
