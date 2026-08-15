#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectStickyCurse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckPlayerReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckPropReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PeckEffectStickyCurse)
namespace GlobalNamespace {
struct PeckContext;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectStickyCurse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectStickyCurse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectStickyCurse*, "", "PeckEffectStickyCurse");
// Dependencies PeckPlayerReference, PeckPropReference, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectStickyCurse
class CORDL_TYPE PeckEffectStickyCurse : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field playerReference, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get_playerReference, put=__cordl_internal_set_playerReference)) ::GlobalNamespace::PeckPlayerReference  playerReference;

/// @brief Field propReference, offset 0x60, size 0x38 
 __declspec(property(get=__cordl_internal_get_propReference, put=__cordl_internal_set_propReference)) ::GlobalNamespace::PeckPropReference  propReference;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Method Awake, addr 0x18044d520, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectStickyCurse* New_ctor() ;

/// @brief Method OnPeck, addr 0x18044d5c0, size 0x1c0, virtual false, abstract: false, final false
inline void OnPeck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::GlobalNamespace::PeckPlayerReference const& __cordl_internal_get_playerReference() const;

constexpr ::GlobalNamespace::PeckPlayerReference& __cordl_internal_get_playerReference() ;

constexpr ::GlobalNamespace::PeckPropReference const& __cordl_internal_get_propReference() const;

constexpr ::GlobalNamespace::PeckPropReference& __cordl_internal_get_propReference() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr void __cordl_internal_set_playerReference(::GlobalNamespace::PeckPlayerReference  value) ;

constexpr void __cordl_internal_set_propReference(::GlobalNamespace::PeckPropReference  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectStickyCurse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectStickyCurse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectStickyCurse(PeckEffectStickyCurse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectStickyCurse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectStickyCurse(PeckEffectStickyCurse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5412};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field playerReference, offset: 0x48, size: 0x18, def value: None
 ::GlobalNamespace::PeckPlayerReference  ___playerReference;

/// @brief Field propReference, offset: 0x60, size: 0x38, def value: None
 ::GlobalNamespace::PeckPropReference  ___propReference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectStickyCurse, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectStickyCurse, ___playerReference) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectStickyCurse, ___propReference) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectStickyCurse) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
