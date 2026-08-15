#pragma once
// IWYU pragma private; include "Animancer/AnimancerTransitionAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerTransitionAsset_1_def.hpp"
CORDL_MODULE_EXPORT(AnimancerTransitionAsset)
namespace Animancer {
class ITransition;
}
// Forward declare root types
namespace Animancer {
class AnimancerTransitionAsset;
}
// Write type traits
MARK_REF_T(::Animancer::AnimancerTransitionAsset*);
DEFINE_IL2CPP_CLASS(::Animancer::AnimancerTransitionAsset*, "Animancer", "AnimancerTransitionAsset");
// Dependencies Animancer.AnimancerTransitionAsset`1<TTransition>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.AnimancerTransitionAsset
class CORDL_TYPE AnimancerTransitionAsset : public ::Animancer::AnimancerTransitionAsset_1<::Animancer::ITransition*> {
public:
// Declarations
static inline ::Animancer::AnimancerTransitionAsset* New_ctor() ;

/// @brief Method .ctor, addr 0x180303e50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerTransitionAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerTransitionAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerTransitionAsset(AnimancerTransitionAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerTransitionAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerTransitionAsset(AnimancerTransitionAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18202};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::AnimancerTransitionAsset) == 0x20, "Size mismatch!");

} // namespace end def Animancer
