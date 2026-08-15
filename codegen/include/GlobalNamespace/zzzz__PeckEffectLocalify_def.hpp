#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectLocalify.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckPropReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PeckEffectLocalify)
namespace GlobalNamespace {
struct PeckContext;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectLocalify;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectLocalify*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectLocalify*, "", "PeckEffectLocalify");
// Dependencies PeckPropReference, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectLocalify
class CORDL_TYPE PeckEffectLocalify : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field hideLocalTorso, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_hideLocalTorso, put=__cordl_internal_set_hideLocalTorso)) bool  hideLocalTorso;

/// @brief Field propReference, offset 0x48, size 0x38 
 __declspec(property(get=__cordl_internal_get_propReference, put=__cordl_internal_set_propReference)) ::GlobalNamespace::PeckPropReference  propReference;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Method Awake, addr 0x180449f20, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectLocalify* New_ctor() ;

/// @brief Method Peck, addr 0x180449fc0, size 0x110, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr bool const& __cordl_internal_get_hideLocalTorso() const;

constexpr bool& __cordl_internal_get_hideLocalTorso() ;

constexpr ::GlobalNamespace::PeckPropReference const& __cordl_internal_get_propReference() const;

constexpr ::GlobalNamespace::PeckPropReference& __cordl_internal_get_propReference() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr void __cordl_internal_set_hideLocalTorso(bool  value) ;

constexpr void __cordl_internal_set_propReference(::GlobalNamespace::PeckPropReference  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectLocalify() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectLocalify", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectLocalify(PeckEffectLocalify && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectLocalify", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectLocalify(PeckEffectLocalify const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5389};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field propReference, offset: 0x48, size: 0x38, def value: None
 ::GlobalNamespace::PeckPropReference  ___propReference;

/// @brief Field hideLocalTorso, offset: 0x80, size: 0x1, def value: None
 bool  ___hideLocalTorso;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectLocalify, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectLocalify, ___propReference) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectLocalify, ___hideLocalTorso) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectLocalify) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
