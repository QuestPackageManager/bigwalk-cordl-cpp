#pragma once
// IWYU pragma private; include "Animancer/AnimancerTransitionAsset_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerTransitionAssetBase_def.hpp"
CORDL_MODULE_EXPORT(AnimancerTransitionAsset_1)
namespace Animancer {
class ITransition;
}
// Forward declare root types
namespace Animancer {
template<typename TTransition>
class AnimancerTransitionAsset_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::AnimancerTransitionAsset_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::AnimancerTransitionAsset_1, "Animancer", "AnimancerTransitionAsset`1");
// Dependencies Animancer.AnimancerTransitionAssetBase
namespace Animancer {
// cpp template
template<typename TTransition>
// Is value type: false
// CS Name: Animancer.AnimancerTransitionAsset`1<TTransition>
class CORDL_TYPE AnimancerTransitionAsset_1 : public ::Animancer::AnimancerTransitionAssetBase {
public:
// Declarations
 __declspec(property(get=get_HasTransition)) bool  HasTransition;

 __declspec(property(get=get_Transition, put=set_Transition)) TTransition  Transition;

/// @brief Field _Transition, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Transition, put=__cordl_internal_set__Transition)) TTransition  _Transition;

/// @brief Method AssertTransition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AssertTransition() ;

/// @brief Method GetTransition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Animancer::ITransition* GetTransition() ;

static inline ::Animancer::AnimancerTransitionAsset_1<TTransition>* New_ctor() ;

constexpr TTransition const& __cordl_internal_get__Transition() const;

constexpr TTransition& __cordl_internal_get__Transition() ;

constexpr void __cordl_internal_set__Transition(TTransition  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasTransition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_HasTransition() ;

/// @brief Method get_Transition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TTransition get_Transition() ;

/// @brief Method set_Transition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Transition(TTransition  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerTransitionAsset_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerTransitionAsset_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerTransitionAsset_1(AnimancerTransitionAsset_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerTransitionAsset_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerTransitionAsset_1(AnimancerTransitionAsset_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18207};

/// @brief Field _Transition, offset: 0x18, size: 0x8, def value: None
 TTransition  ____Transition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
