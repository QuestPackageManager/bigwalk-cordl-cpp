#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectBrandishState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PeckEffectBrandishState)
namespace GlobalNamespace {
struct PeckContext;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectBrandishState;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectBrandishState*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectBrandishState*, "", "PeckEffectBrandishState");
// Dependencies PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectBrandishState
class CORDL_TYPE PeckEffectBrandishState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field IdPerPeckState, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_IdPerPeckState, put=__cordl_internal_set_IdPerPeckState)) ::ArrayW<int32_t>  IdPerPeckState;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Method Awake, addr 0x1804489f0, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectBrandishState* New_ctor() ;

/// @brief Method Peck, addr 0x180448a90, size 0x100, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_IdPerPeckState() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_IdPerPeckState() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr void __cordl_internal_set_IdPerPeckState(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectBrandishState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectBrandishState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectBrandishState(PeckEffectBrandishState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectBrandishState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectBrandishState(PeckEffectBrandishState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5372};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field IdPerPeckState, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___IdPerPeckState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectBrandishState, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectBrandishState, ___IdPerPeckState) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectBrandishState) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
