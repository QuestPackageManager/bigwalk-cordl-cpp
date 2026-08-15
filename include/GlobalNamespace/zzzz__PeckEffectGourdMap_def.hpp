#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectGourdMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GourdFlag_def.hpp"
#include "GlobalNamespace/zzzz__PeckPropReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PeckEffectGourdMap)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckEffectGourdMap_EffectSetting;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectGourdMap;
}
namespace GlobalNamespace {
struct PeckEffectGourdMap_EffectSetting;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectGourdMap*);
MARK_VAL_T(::GlobalNamespace::PeckEffectGourdMap_EffectSetting);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectGourdMap*, "", "PeckEffectGourdMap");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectGourdMap_EffectSetting, "", "PeckEffectGourdMap/EffectSetting");
// Dependencies GourdFlag::GourdState
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckEffectGourdMap/EffectSetting
struct CORDL_TYPE PeckEffectGourdMap_EffectSetting {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectGourdMap_EffectSetting() ;

// Ctor Parameters [CppParam { name: "hasEffect", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::GlobalNamespace::GourdFlag_GourdState", modifiers: "", def_value: None }]
constexpr PeckEffectGourdMap_EffectSetting(bool  hasEffect, ::GlobalNamespace::GourdFlag_GourdState  state) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5067};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field hasEffect, offset: 0x0, size: 0x1, def value: None
 bool  hasEffect;

/// @brief Field state, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::GourdFlag_GourdState  state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectGourdMap_EffectSetting, hasEffect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectGourdMap_EffectSetting, state) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectGourdMap_EffectSetting) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectGourdMap::EffectSetting, PeckPropReference, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectGourdMap
class CORDL_TYPE PeckEffectGourdMap : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EffectSetting = ::GlobalNamespace::PeckEffectGourdMap_EffectSetting;

/// @brief Field logVerbose, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field peckPropReference, offset 0x48, size 0x38 
 __declspec(property(get=__cordl_internal_get_peckPropReference, put=__cordl_internal_set_peckPropReference)) ::GlobalNamespace::PeckPropReference  peckPropReference;

/// @brief Field settings, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::ArrayW<::GlobalNamespace::PeckEffectGourdMap_EffectSetting>  settings;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Method Awake, addr 0x180405cd0, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectGourdMap* New_ctor() ;

/// @brief Method OnPeck, addr 0x180405d20, size 0x110, virtual false, abstract: false, final false
inline void OnPeck(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  peckSystem) ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::GlobalNamespace::PeckPropReference const& __cordl_internal_get_peckPropReference() const;

constexpr ::GlobalNamespace::PeckPropReference& __cordl_internal_get_peckPropReference() ;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectGourdMap_EffectSetting> const& __cordl_internal_get_settings() const;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectGourdMap_EffectSetting>& __cordl_internal_get_settings() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_peckPropReference(::GlobalNamespace::PeckPropReference  value) ;

constexpr void __cordl_internal_set_settings(::ArrayW<::GlobalNamespace::PeckEffectGourdMap_EffectSetting>  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectGourdMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectGourdMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectGourdMap(PeckEffectGourdMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectGourdMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectGourdMap(PeckEffectGourdMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5068};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field peckPropReference, offset: 0x48, size: 0x38, def value: None
 ::GlobalNamespace::PeckPropReference  ___peckPropReference;

/// @brief Field settings, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PeckEffectGourdMap_EffectSetting>  ___settings;

/// @brief Field logVerbose, offset: 0x88, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectGourdMap, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectGourdMap, ___peckPropReference) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectGourdMap, ___settings) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectGourdMap, ___logVerbose) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectGourdMap) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
