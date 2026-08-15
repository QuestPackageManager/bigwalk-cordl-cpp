#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectTeleporter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PeckEffectTeleporter)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectTeleporter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectTeleporter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectTeleporter*, "", "PeckEffectTeleporter");
// Dependencies PeckStateFilter, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectTeleporter
class CORDL_TYPE PeckEffectTeleporter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field stateFilter, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_stateFilter, put=__cordl_internal_set_stateFilter)) ::GlobalNamespace::PeckStateFilter  stateFilter;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Method Awake, addr 0x18044d780, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectTeleporter* New_ctor() ;

/// @brief Method Peck, addr 0x18044d820, size 0x1f0, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  peckSystem) ;

constexpr ::GlobalNamespace::PeckStateFilter const& __cordl_internal_get_stateFilter() const;

constexpr ::GlobalNamespace::PeckStateFilter& __cordl_internal_get_stateFilter() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr void __cordl_internal_set_stateFilter(::GlobalNamespace::PeckStateFilter  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectTeleporter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectTeleporter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectTeleporter(PeckEffectTeleporter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectTeleporter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectTeleporter(PeckEffectTeleporter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5413};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field stateFilter, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  ___stateFilter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectTeleporter, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTeleporter, ___stateFilter) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectTeleporter) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
