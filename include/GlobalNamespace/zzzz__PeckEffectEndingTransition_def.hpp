#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectEndingTransition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PeckEffectEndingTransition)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectEndingTransition;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectEndingTransition*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectEndingTransition*, "", "PeckEffectEndingTransition");
// Dependencies PeckStateFilter, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectEndingTransition
class CORDL_TYPE PeckEffectEndingTransition : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field peckSystemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystemReference, put=__cordl_internal_set_peckSystemReference)) ::GlobalNamespace::PeckSystemReference  peckSystemReference;

/// @brief Field stateFilter, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_stateFilter, put=__cordl_internal_set_stateFilter)) ::GlobalNamespace::PeckStateFilter  stateFilter;

/// @brief Method Awake, addr 0x180449720, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectEndingTransition* New_ctor() ;

/// @brief Method OnPeck, addr 0x1804497c0, size 0x80, virtual false, abstract: false, final false
inline void OnPeck(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  peckState) ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystemReference() ;

constexpr ::GlobalNamespace::PeckStateFilter const& __cordl_internal_get_stateFilter() const;

constexpr ::GlobalNamespace::PeckStateFilter& __cordl_internal_get_stateFilter() ;

constexpr void __cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_stateFilter(::GlobalNamespace::PeckStateFilter  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectEndingTransition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectEndingTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectEndingTransition(PeckEffectEndingTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectEndingTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectEndingTransition(PeckEffectEndingTransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5383};

/// @brief Field peckSystemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystemReference;

/// @brief Field stateFilter, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  ___stateFilter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectEndingTransition, ___peckSystemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectEndingTransition, ___stateFilter) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectEndingTransition) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
