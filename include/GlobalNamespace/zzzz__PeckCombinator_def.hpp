#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckCombinator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckCombinator)
namespace GlobalNamespace {
struct PeckCombinator_PeckRule;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PeckSystemBlock;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckCombinator;
}
namespace GlobalNamespace {
struct PeckCombinator_PeckRule;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckCombinator*);
MARK_VAL_T(::GlobalNamespace::PeckCombinator_PeckRule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckCombinator*, "", "PeckCombinator");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckCombinator_PeckRule, "", "PeckCombinator/PeckRule");
// Dependencies TrackedPeckState
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckCombinator/PeckRule
struct CORDL_TYPE PeckCombinator_PeckRule {
public:
// Declarations
 __declspec(property(get=get_bestSystemsList)) ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  bestSystemsList;

/// @brief Method IsConditionMet, addr 0x180453980, size 0x100, virtual false, abstract: false, final false
inline bool IsConditionMet() ;

/// @brief Method get_bestSystemsList, addr 0x180453a80, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>> get_bestSystemsList() ;

// Ctor Parameters []
// @brief default ctor
constexpr PeckCombinator_PeckRule() ;

// Ctor Parameters [CppParam { name: "systems", ty: "::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>", modifiers: "", def_value: None }, CppParam { name: "block", ty: "::UnityW<::GlobalNamespace::PeckSystemBlock>", modifiers: "", def_value: None }, CppParam { name: "desiredState", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "desiredStates", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "minimumMatches", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hasMaximum", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "maximumMatches", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckCombinator_PeckRule(::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  systems, ::UnityW<::GlobalNamespace::PeckSystemBlock>  block, int32_t  desiredState, ::ArrayW<int32_t>  desiredStates, int32_t  minimumMatches, bool  hasMaximum, int32_t  maximumMatches) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5423};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field systems, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  systems;

/// @brief Field block, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSystemBlock>  block;

/// @brief Field desiredState, offset: 0x10, size: 0x4, def value: None
 int32_t  desiredState;

/// @brief Field desiredStates, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  desiredStates;

/// @brief Field minimumMatches, offset: 0x20, size: 0x4, def value: None
 int32_t  minimumMatches;

/// @brief Field hasMaximum, offset: 0x24, size: 0x1, def value: None
 bool  hasMaximum;

/// @brief Field maximumMatches, offset: 0x28, size: 0x4, def value: None
 int32_t  maximumMatches;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckCombinator_PeckRule, systems) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckCombinator_PeckRule, block) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckCombinator_PeckRule, desiredState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckCombinator_PeckRule, desiredStates) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckCombinator_PeckRule, minimumMatches) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckCombinator_PeckRule, hasMaximum) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckCombinator_PeckRule, maximumMatches) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckCombinator_PeckRule) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckCombinator::PeckRule, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckCombinator
class CORDL_TYPE PeckCombinator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PeckRule = ::GlobalNamespace::PeckCombinator_PeckRule;

/// @brief Field conditionIsMet, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_conditionIsMet, put=__cordl_internal_set_conditionIsMet)) bool  conditionIsMet;

/// @brief Field directControlBlock, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_directControlBlock, put=__cordl_internal_set_directControlBlock)) ::UnityW<::GlobalNamespace::PeckSystemBlock>  directControlBlock;

/// @brief Field directControlSystem, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_directControlSystem, put=__cordl_internal_set_directControlSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  directControlSystem;

/// @brief Field logVerbose, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onConditionMet, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onConditionMet, put=__cordl_internal_set_onConditionMet)) ::UnityW<::GlobalNamespace::PeckSwitch>  onConditionMet;

/// @brief Field onConditionStop, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onConditionStop, put=__cordl_internal_set_onConditionStop)) ::UnityW<::GlobalNamespace::PeckSwitch>  onConditionStop;

/// @brief Field rules, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rules, put=__cordl_internal_set_rules)) ::ArrayW<::GlobalNamespace::PeckCombinator_PeckRule>  rules;

/// @brief Method AreAllConditionsMet, addr 0x1804468e0, size 0x90, virtual false, abstract: false, final false
inline bool AreAllConditionsMet() ;

/// @brief Method Awake, addr 0x180446970, size 0x120, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckCombinator* New_ctor() ;

/// @brief Method OnChange, addr 0x180446a90, size 0x360, virtual false, abstract: false, final false
inline void OnChange(::GlobalNamespace::PeckContext  peck) ;

/// @brief Method Test, addr 0x180446df0, size 0x1e0, virtual false, abstract: false, final false
inline void Test() ;

constexpr bool const& __cordl_internal_get_conditionIsMet() const;

constexpr bool& __cordl_internal_get_conditionIsMet() ;

constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock> const& __cordl_internal_get_directControlBlock() const;

constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock>& __cordl_internal_get_directControlBlock() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_directControlSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_directControlSystem() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onConditionMet() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onConditionMet() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onConditionStop() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onConditionStop() ;

constexpr ::ArrayW<::GlobalNamespace::PeckCombinator_PeckRule> const& __cordl_internal_get_rules() const;

constexpr ::ArrayW<::GlobalNamespace::PeckCombinator_PeckRule>& __cordl_internal_get_rules() ;

constexpr void __cordl_internal_set_conditionIsMet(bool  value) ;

constexpr void __cordl_internal_set_directControlBlock(::UnityW<::GlobalNamespace::PeckSystemBlock>  value) ;

constexpr void __cordl_internal_set_directControlSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onConditionMet(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onConditionStop(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_rules(::ArrayW<::GlobalNamespace::PeckCombinator_PeckRule>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckCombinator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckCombinator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckCombinator(PeckCombinator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckCombinator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckCombinator(PeckCombinator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5424};

/// @brief Field directControlSystem, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___directControlSystem;

/// @brief Field directControlBlock, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSystemBlock>  ___directControlBlock;

/// @brief Field onConditionMet, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onConditionMet;

/// @brief Field onConditionStop, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onConditionStop;

/// @brief Field rules, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PeckCombinator_PeckRule>  ___rules;

/// @brief Field logVerbose, offset: 0x48, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field conditionIsMet, offset: 0x49, size: 0x1, def value: None
 bool  ___conditionIsMet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckCombinator, ___directControlSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckCombinator, ___directControlBlock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckCombinator, ___onConditionMet) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckCombinator, ___onConditionStop) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckCombinator, ___rules) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckCombinator, ___logVerbose) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckCombinator, ___conditionIsMet) == 0x49, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckCombinator) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
