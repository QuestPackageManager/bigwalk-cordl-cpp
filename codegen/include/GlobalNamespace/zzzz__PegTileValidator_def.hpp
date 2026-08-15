#pragma once
// IWYU pragma private; include "GlobalNamespace/PegTileValidator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "GlobalNamespace/zzzz__PropHomeBlock_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PegTileValidator)
namespace GlobalNamespace {
class IOccasional;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PegTileSequenceGenerator;
}
namespace GlobalNamespace {
struct PropGroup;
}
namespace GlobalNamespace {
class PropHome;
}
namespace GlobalNamespace {
class Prop;
}
namespace GlobalNamespace {
class ValidatorDisplay;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PegTileValidator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PegTileValidator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PegTileValidator*, "", "PegTileValidator");
// Dependencies PeckStateFilter, PeckSystemReference, PropHomeBlock, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PegTileValidator
class CORDL_TYPE PegTileValidator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field duration, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field isPlaying, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPlaying, put=__cordl_internal_set_isPlaying)) bool  isPlaying;

/// @brief Field logVerbose, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onButtonPrimed, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_onButtonPrimed, put=__cordl_internal_set_onButtonPrimed)) ::UnityW<::GlobalNamespace::PeckSwitch>  onButtonPrimed;

/// @brief Field onButtonUnprimed, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_onButtonUnprimed, put=__cordl_internal_set_onButtonUnprimed)) ::UnityW<::GlobalNamespace::PeckSwitch>  onButtonUnprimed;

/// @brief Field onFailure, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::UnityW<::GlobalNamespace::PeckSwitch>  onFailure;

/// @brief Field onSucess, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSucess, put=__cordl_internal_set_onSucess)) ::UnityW<::GlobalNamespace::PeckSwitch>  onSucess;

/// @brief Field peckSystem, offset 0x38, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystem, put=__cordl_internal_set_peckSystem)) ::GlobalNamespace::PeckSystemReference  peckSystem;

/// @brief Field propHomeBlocks, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_propHomeBlocks, put=__cordl_internal_set_propHomeBlocks)) ::ArrayW<::UnityW<::GlobalNamespace::PropHomeBlock>>  propHomeBlocks;

 __declspec(property(get=get_sequence)) ::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*  sequence;

/// @brief Field sequenceGenerator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sequenceGenerator, put=__cordl_internal_set_sequenceGenerator)) ::UnityW<::GlobalNamespace::PegTileSequenceGenerator>  sequenceGenerator;

/// @brief Field stateFilter, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_stateFilter, put=__cordl_internal_set_stateFilter)) ::GlobalNamespace::PeckStateFilter  stateFilter;

/// @brief Field timeAtStartValidate, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeAtStartValidate, put=__cordl_internal_set_timeAtStartValidate)) double_t  timeAtStartValidate;

/// @brief Field validatorDisplay, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_validatorDisplay, put=__cordl_internal_set_validatorDisplay)) ::UnityW<::GlobalNamespace::ValidatorDisplay>  validatorDisplay;

/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr operator  ::GlobalNamespace::IOccasional*() noexcept;

/// @brief Method AfterDrumRoll, addr 0x18040ce40, size 0x230, virtual false, abstract: false, final false
inline void AfterDrumRoll() ;

/// @brief Method AreAllHomesFull, addr 0x18040d070, size 0x70, virtual false, abstract: false, final false
inline bool AreAllHomesFull() ;

/// @brief Method Awake, addr 0x18040d0e0, size 0x260, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ConditionIsMet, addr 0x18040d340, size 0x2b0, virtual false, abstract: false, final false
inline bool ConditionIsMet() ;

/// @brief Method IsReadyToValidate, addr 0x18040d5f0, size 0x80, virtual false, abstract: false, final false
inline bool IsReadyToValidate() ;

static inline ::GlobalNamespace::PegTileValidator* New_ctor() ;

/// @brief Method OccasionalUpdate, addr 0x18040d670, size 0x60, virtual true, abstract: false, final true
inline void OccasionalUpdate() ;

/// @brief Method OnDestroy, addr 0x18040d6d0, size 0x20, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnHomeOrSequenceChange, addr 0x18040d6f0, size 0x1e0, virtual false, abstract: false, final false
inline void OnHomeOrSequenceChange() ;

/// @brief Method OnPropHomeChange, addr 0x18040d8d0, size 0x10, virtual false, abstract: false, final false
inline void OnPropHomeChange(::GlobalNamespace::PropHome*  propHome, ::GlobalNamespace::Prop*  propBefore, ::GlobalNamespace::Prop*  propAfter) ;

/// @brief Method OnSequenceChange, addr 0x18040d8d0, size 0x10, virtual false, abstract: false, final false
inline void OnSequenceChange() ;

/// @brief Method Peck, addr 0x18040d8e0, size 0xd0, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method SetIsPlaying, addr 0x18040d9b0, size 0x30, virtual false, abstract: false, final false
inline void SetIsPlaying(bool  newValue) ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr bool const& __cordl_internal_get_isPlaying() const;

constexpr bool& __cordl_internal_get_isPlaying() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onButtonPrimed() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onButtonPrimed() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onButtonUnprimed() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onButtonUnprimed() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onFailure() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onFailure() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onSucess() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onSucess() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystem() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropHomeBlock>> const& __cordl_internal_get_propHomeBlocks() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropHomeBlock>>& __cordl_internal_get_propHomeBlocks() ;

constexpr ::UnityW<::GlobalNamespace::PegTileSequenceGenerator> const& __cordl_internal_get_sequenceGenerator() const;

constexpr ::UnityW<::GlobalNamespace::PegTileSequenceGenerator>& __cordl_internal_get_sequenceGenerator() ;

constexpr ::GlobalNamespace::PeckStateFilter const& __cordl_internal_get_stateFilter() const;

constexpr ::GlobalNamespace::PeckStateFilter& __cordl_internal_get_stateFilter() ;

constexpr double_t const& __cordl_internal_get_timeAtStartValidate() const;

constexpr double_t& __cordl_internal_get_timeAtStartValidate() ;

constexpr ::UnityW<::GlobalNamespace::ValidatorDisplay> const& __cordl_internal_get_validatorDisplay() const;

constexpr ::UnityW<::GlobalNamespace::ValidatorDisplay>& __cordl_internal_get_validatorDisplay() ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_isPlaying(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onButtonPrimed(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onButtonUnprimed(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onFailure(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onSucess(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_peckSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_propHomeBlocks(::ArrayW<::UnityW<::GlobalNamespace::PropHomeBlock>>  value) ;

constexpr void __cordl_internal_set_sequenceGenerator(::UnityW<::GlobalNamespace::PegTileSequenceGenerator>  value) ;

constexpr void __cordl_internal_set_stateFilter(::GlobalNamespace::PeckStateFilter  value) ;

constexpr void __cordl_internal_set_timeAtStartValidate(double_t  value) ;

constexpr void __cordl_internal_set_validatorDisplay(::UnityW<::GlobalNamespace::ValidatorDisplay>  value) ;

/// @brief Method .ctor, addr 0x18040d9e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_sequence, addr 0x18040da00, size 0x20, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>* get_sequence() ;

/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* i___GlobalNamespace__IOccasional() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PegTileValidator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PegTileValidator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PegTileValidator(PegTileValidator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PegTileValidator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PegTileValidator(PegTileValidator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5097};

/// @brief Field sequenceGenerator, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PegTileSequenceGenerator>  ___sequenceGenerator;

/// @brief Field propHomeBlocks, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::PropHomeBlock>>  ___propHomeBlocks;

/// @brief Field validatorDisplay, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ValidatorDisplay>  ___validatorDisplay;

/// @brief Field peckSystem, offset: 0x38, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystem;

/// @brief Field stateFilter, offset: 0x60, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  ___stateFilter;

/// @brief Field onSucess, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onSucess;

/// @brief Field onFailure, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onFailure;

/// @brief Field onButtonPrimed, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onButtonPrimed;

/// @brief Field onButtonUnprimed, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onButtonUnprimed;

/// @brief Field logVerbose, offset: 0x90, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field duration, offset: 0x94, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field isPlaying, offset: 0x98, size: 0x1, def value: None
 bool  ___isPlaying;

/// @brief Field timeAtStartValidate, offset: 0xa0, size: 0x8, def value: None
 double_t  ___timeAtStartValidate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PegTileValidator, ___sequenceGenerator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileValidator, ___propHomeBlocks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileValidator, ___validatorDisplay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileValidator, ___peckSystem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileValidator, ___stateFilter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileValidator, ___onSucess) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileValidator, ___onFailure) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileValidator, ___onButtonPrimed) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileValidator, ___onButtonUnprimed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileValidator, ___logVerbose) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileValidator, ___duration) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileValidator, ___isPlaying) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileValidator, ___timeAtStartValidate) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PegTileValidator) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
