#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectAnimatorJump.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckEffectAnimatorJump)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectAnimatorJump;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectAnimatorJump*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectAnimatorJump*, "", "PeckEffectAnimatorJump");
// Dependencies PeckStateFilter, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectAnimatorJump
class CORDL_TYPE PeckEffectAnimatorJump : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animator, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field layer, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_layer, put=__cordl_internal_set_layer)) int32_t  layer;

/// @brief Field logVerbose, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onFinishEvent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFinishEvent, put=__cordl_internal_set_onFinishEvent)) ::UnityW<::GlobalNamespace::PeckSwitch>  onFinishEvent;

/// @brief Field startTime, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) float_t  startTime;

/// @brief Field stateFilter, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_stateFilter, put=__cordl_internal_set_stateFilter)) ::GlobalNamespace::PeckStateFilter  stateFilter;

/// @brief Field stateName, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateName, put=__cordl_internal_set_stateName)) ::StringW  stateName;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Method Awake, addr 0x180447950, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectAnimatorJump* New_ctor() ;

/// @brief Method OnFinish, addr 0x1804479f0, size 0x80, virtual false, abstract: false, final false
inline void OnFinish() ;

/// @brief Method Peck, addr 0x180447a70, size 0xb0, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  context) ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr int32_t const& __cordl_internal_get_layer() const;

constexpr int32_t& __cordl_internal_get_layer() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onFinishEvent() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onFinishEvent() ;

constexpr float_t const& __cordl_internal_get_startTime() const;

constexpr float_t& __cordl_internal_get_startTime() ;

constexpr ::GlobalNamespace::PeckStateFilter const& __cordl_internal_get_stateFilter() const;

constexpr ::GlobalNamespace::PeckStateFilter& __cordl_internal_get_stateFilter() ;

constexpr ::StringW const& __cordl_internal_get_stateName() const;

constexpr ::StringW& __cordl_internal_get_stateName() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_layer(int32_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onFinishEvent(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_startTime(float_t  value) ;

constexpr void __cordl_internal_set_stateFilter(::GlobalNamespace::PeckStateFilter  value) ;

constexpr void __cordl_internal_set_stateName(::StringW  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectAnimatorJump() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectAnimatorJump", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectAnimatorJump(PeckEffectAnimatorJump && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectAnimatorJump", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectAnimatorJump(PeckEffectAnimatorJump const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5364};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field onFinishEvent, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onFinishEvent;

/// @brief Field stateFilter, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  ___stateFilter;

/// @brief Field animator, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// @brief Field stateName, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___stateName;

/// @brief Field startTime, offset: 0x70, size: 0x4, def value: None
 float_t  ___startTime;

/// @brief Field layer, offset: 0x74, size: 0x4, def value: None
 int32_t  ___layer;

/// @brief Field logVerbose, offset: 0x78, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectAnimatorJump, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimatorJump, ___onFinishEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimatorJump, ___stateFilter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimatorJump, ___animator) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimatorJump, ___stateName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimatorJump, ___startTime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimatorJump, ___layer) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimatorJump, ___logVerbose) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectAnimatorJump) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
