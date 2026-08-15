#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckRelay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckOutputRules_def.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PeckRelay)
namespace GlobalNamespace {
class PeckBus;
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
class PeckRelay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckRelay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckRelay*, "", "PeckRelay");
// Dependencies PeckOutputRules, PeckStateFilter, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckRelay
class CORDL_TYPE PeckRelay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field baseOnOutputSystem, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_baseOnOutputSystem, put=__cordl_internal_set_baseOnOutputSystem)) bool  baseOnOutputSystem;

/// @brief Field baseOnPropSystem, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_baseOnPropSystem, put=__cordl_internal_set_baseOnPropSystem)) bool  baseOnPropSystem;

/// @brief Field inputBlock, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputBlock, put=__cordl_internal_set_inputBlock)) ::UnityW<::GlobalNamespace::PeckSystemBlock>  inputBlock;

/// @brief Field inputFilter, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_inputFilter, put=__cordl_internal_set_inputFilter)) ::GlobalNamespace::PeckStateFilter  inputFilter;

/// @brief Field inputStateSystem, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputStateSystem, put=__cordl_internal_set_inputStateSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  inputStateSystem;

/// @brief Field keepInSync, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_keepInSync, put=__cordl_internal_set_keepInSync)) bool  keepInSync;

/// @brief Field logVerbose, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onlyOnInitial, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlyOnInitial, put=__cordl_internal_set_onlyOnInitial)) bool  onlyOnInitial;

/// @brief Field outputBlock, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputBlock, put=__cordl_internal_set_outputBlock)) ::UnityW<::GlobalNamespace::PeckSystemBlock>  outputBlock;

/// @brief Field outputBus, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputBus, put=__cordl_internal_set_outputBus)) ::UnityW<::GlobalNamespace::PeckBus>  outputBus;

/// @brief Field outputRules, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_outputRules, put=__cordl_internal_set_outputRules)) ::GlobalNamespace::PeckOutputRules  outputRules;

/// @brief Field outputStateSystem, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputStateSystem, put=__cordl_internal_set_outputStateSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  outputStateSystem;

/// @brief Field outputSwitch, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputSwitch, put=__cordl_internal_set_outputSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  outputSwitch;

/// @brief Method Awake, addr 0x180453160, size 0x1a0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckRelay* New_ctor() ;

/// @brief Method Peck, addr 0x180453530, size 0x450, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  inputSystem) ;

/// @brief Method PeckBackToInput, addr 0x180453300, size 0x50, virtual false, abstract: false, final false
inline void PeckBackToInput(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method PeckToSystem, addr 0x180453350, size 0x1e0, virtual false, abstract: false, final false
inline void PeckToSystem(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  system) ;

constexpr bool const& __cordl_internal_get_baseOnOutputSystem() const;

constexpr bool& __cordl_internal_get_baseOnOutputSystem() ;

constexpr bool const& __cordl_internal_get_baseOnPropSystem() const;

constexpr bool& __cordl_internal_get_baseOnPropSystem() ;

constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock> const& __cordl_internal_get_inputBlock() const;

constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock>& __cordl_internal_get_inputBlock() ;

constexpr ::GlobalNamespace::PeckStateFilter const& __cordl_internal_get_inputFilter() const;

constexpr ::GlobalNamespace::PeckStateFilter& __cordl_internal_get_inputFilter() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_inputStateSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_inputStateSystem() ;

constexpr bool const& __cordl_internal_get_keepInSync() const;

constexpr bool& __cordl_internal_get_keepInSync() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr bool const& __cordl_internal_get_onlyOnInitial() const;

constexpr bool& __cordl_internal_get_onlyOnInitial() ;

constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock> const& __cordl_internal_get_outputBlock() const;

constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock>& __cordl_internal_get_outputBlock() ;

constexpr ::UnityW<::GlobalNamespace::PeckBus> const& __cordl_internal_get_outputBus() const;

constexpr ::UnityW<::GlobalNamespace::PeckBus>& __cordl_internal_get_outputBus() ;

constexpr ::GlobalNamespace::PeckOutputRules const& __cordl_internal_get_outputRules() const;

constexpr ::GlobalNamespace::PeckOutputRules& __cordl_internal_get_outputRules() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_outputStateSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_outputStateSystem() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_outputSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_outputSwitch() ;

constexpr void __cordl_internal_set_baseOnOutputSystem(bool  value) ;

constexpr void __cordl_internal_set_baseOnPropSystem(bool  value) ;

constexpr void __cordl_internal_set_inputBlock(::UnityW<::GlobalNamespace::PeckSystemBlock>  value) ;

constexpr void __cordl_internal_set_inputFilter(::GlobalNamespace::PeckStateFilter  value) ;

constexpr void __cordl_internal_set_inputStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_keepInSync(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onlyOnInitial(bool  value) ;

constexpr void __cordl_internal_set_outputBlock(::UnityW<::GlobalNamespace::PeckSystemBlock>  value) ;

constexpr void __cordl_internal_set_outputBus(::UnityW<::GlobalNamespace::PeckBus>  value) ;

constexpr void __cordl_internal_set_outputRules(::GlobalNamespace::PeckOutputRules  value) ;

constexpr void __cordl_internal_set_outputStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_outputSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckRelay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckRelay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckRelay(PeckRelay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckRelay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckRelay(PeckRelay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5348};

/// @brief Field inputStateSystem, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___inputStateSystem;

/// @brief Field inputBlock, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSystemBlock>  ___inputBlock;

/// @brief Field inputFilter, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  ___inputFilter;

/// @brief Field outputStateSystem, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___outputStateSystem;

/// @brief Field outputBlock, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSystemBlock>  ___outputBlock;

/// @brief Field outputBus, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckBus>  ___outputBus;

/// @brief Field outputRules, offset: 0x58, size: 0x10, def value: None
 ::GlobalNamespace::PeckOutputRules  ___outputRules;

/// @brief Field baseOnOutputSystem, offset: 0x68, size: 0x1, def value: None
 bool  ___baseOnOutputSystem;

/// @brief Field baseOnPropSystem, offset: 0x69, size: 0x1, def value: None
 bool  ___baseOnPropSystem;

/// @brief Field outputSwitch, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___outputSwitch;

/// @brief Field keepInSync, offset: 0x78, size: 0x1, def value: None
 bool  ___keepInSync;

/// @brief Field onlyOnInitial, offset: 0x79, size: 0x1, def value: None
 bool  ___onlyOnInitial;

/// @brief Field logVerbose, offset: 0x7a, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckRelay, ___inputStateSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckRelay, ___inputBlock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckRelay, ___inputFilter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckRelay, ___outputStateSystem) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckRelay, ___outputBlock) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckRelay, ___outputBus) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckRelay, ___outputRules) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckRelay, ___baseOnOutputSystem) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckRelay, ___baseOnPropSystem) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckRelay, ___outputSwitch) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckRelay, ___keepInSync) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckRelay, ___onlyOnInitial) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckRelay, ___logVerbose) == 0x7a, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckRelay) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
