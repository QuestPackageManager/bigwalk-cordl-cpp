#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectPropXRay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckPropReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PeckEffectPropXRay)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PropZone;
}
namespace GlobalNamespace {
struct PropZoner_ZoneChangeType;
}
namespace GlobalNamespace {
class Prop;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectPropXRay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectPropXRay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectPropXRay*, "", "PeckEffectPropXRay");
// Dependencies PeckPropReference, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectPropXRay
class CORDL_TYPE PeckEffectPropXRay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field activeEffect, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_activeEffect, put=setStaticF_activeEffect)) ::UnityW<::GlobalNamespace::PeckEffectPropXRay>  activeEffect;

/// @brief Field deadZoneProp, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_deadZoneProp, put=__cordl_internal_set_deadZoneProp)) ::UnityW<::GlobalNamespace::Prop>  deadZoneProp;

/// @brief Field gogglesPropReference, offset 0x50, size 0x38 
 __declspec(property(get=__cordl_internal_get_gogglesPropReference, put=__cordl_internal_set_gogglesPropReference)) ::GlobalNamespace::PeckPropReference  gogglesPropReference;

/// @brief Field isInDeadZone, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInDeadZone, put=__cordl_internal_set_isInDeadZone)) bool  isInDeadZone;

/// @brief Field logVerbose, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field systemReference, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Method Awake, addr 0x18044c7b0, size 0x180, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectPropXRay* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18044c930, size 0x60, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnPropZonerChange, addr 0x18044c990, size 0x150, virtual false, abstract: false, final false
inline void OnPropZonerChange(::GlobalNamespace::PropZone*  propZone, ::GlobalNamespace::PropZoner_ZoneChangeType  changeType) ;

/// @brief Method Peck, addr 0x18044cae0, size 0x130, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method RefreshAll, addr 0x18044cc10, size 0x220, virtual false, abstract: false, final false
static inline void RefreshAll() ;

/// @brief Method RefreshXRayEffectOnProp, addr 0x18044ce30, size 0x1c0, virtual false, abstract: false, final false
static inline void RefreshXRayEffectOnProp(::GlobalNamespace::Prop*  prop) ;

/// @brief Method SetEffectActive, addr 0x18044cff0, size 0x60, virtual false, abstract: false, final false
inline void SetEffectActive(bool  active) ;

constexpr ::UnityW<::GlobalNamespace::Prop> const& __cordl_internal_get_deadZoneProp() const;

constexpr ::UnityW<::GlobalNamespace::Prop>& __cordl_internal_get_deadZoneProp() ;

constexpr ::GlobalNamespace::PeckPropReference const& __cordl_internal_get_gogglesPropReference() const;

constexpr ::GlobalNamespace::PeckPropReference& __cordl_internal_get_gogglesPropReference() ;

constexpr bool const& __cordl_internal_get_isInDeadZone() const;

constexpr bool& __cordl_internal_get_isInDeadZone() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr void __cordl_internal_set_deadZoneProp(::UnityW<::GlobalNamespace::Prop>  value) ;

constexpr void __cordl_internal_set_gogglesPropReference(::GlobalNamespace::PeckPropReference  value) ;

constexpr void __cordl_internal_set_isInDeadZone(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::PeckEffectPropXRay> getStaticF_activeEffect() ;

static inline void setStaticF_activeEffect(::UnityW<::GlobalNamespace::PeckEffectPropXRay>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectPropXRay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectPropXRay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectPropXRay(PeckEffectPropXRay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectPropXRay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectPropXRay(PeckEffectPropXRay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5408};

/// @brief Field deadZoneProp, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  ___deadZoneProp;

/// @brief Field systemReference, offset: 0x28, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field gogglesPropReference, offset: 0x50, size: 0x38, def value: None
 ::GlobalNamespace::PeckPropReference  ___gogglesPropReference;

/// @brief Field logVerbose, offset: 0x88, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field isInDeadZone, offset: 0x89, size: 0x1, def value: None
 bool  ___isInDeadZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectPropXRay, ___deadZoneProp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropXRay, ___systemReference) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropXRay, ___gogglesPropReference) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropXRay, ___logVerbose) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPropXRay, ___isInDeadZone) == 0x89, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectPropXRay) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
