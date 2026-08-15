#pragma once
// IWYU pragma private; include "GlobalNamespace/SweeperBrain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CapsuleBomb_def.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SweeperBrain)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SweeperBrain;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SweeperBrain*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SweeperBrain*, "", "SweeperBrain");
// Dependencies CapsuleBomb, PeckStateFilter, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SweeperBrain
class CORDL_TYPE SweeperBrain : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field bombCount, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_bombCount, put=__cordl_internal_set_bombCount)) int32_t  bombCount;

/// @brief Field bombs, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_bombs, put=__cordl_internal_set_bombs)) ::System::Collections::Generic::List_1<int32_t>*  bombs;

/// @brief Field clearInput, offset 0x68, size 0x28 
 __declspec(property(get=__cordl_internal_get_clearInput, put=__cordl_internal_set_clearInput)) ::GlobalNamespace::PeckSystemReference  clearInput;

/// @brief Field clearStateFilter, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_clearStateFilter, put=__cordl_internal_set_clearStateFilter)) ::GlobalNamespace::PeckStateFilter  clearStateFilter;

/// @brief Field indicators, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_indicators, put=__cordl_internal_set_indicators)) ::ArrayW<::UnityW<::GlobalNamespace::CapsuleBomb>>  indicators;

/// @brief Field inputs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputs, put=__cordl_internal_set_inputs)) ::ArrayW<::UnityW<::GlobalNamespace::CapsuleBomb>>  inputs;

/// @brief Field isPrimed, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPrimed, put=__cordl_internal_set_isPrimed)) bool  isPrimed;

/// @brief Field onFailure, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::UnityW<::GlobalNamespace::TrackedPeckState>  onFailure;

/// @brief Field onSuccess, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::UnityW<::GlobalNamespace::TrackedPeckState>  onSuccess;

/// @brief Field resetInput, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_resetInput, put=__cordl_internal_set_resetInput)) ::GlobalNamespace::PeckSystemReference  resetInput;

/// @brief Field resetStateFilter, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_resetStateFilter, put=__cordl_internal_set_resetStateFilter)) ::GlobalNamespace::PeckStateFilter  resetStateFilter;

/// @brief Field scrambleOnReset, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get_scrambleOnReset, put=__cordl_internal_set_scrambleOnReset)) bool  scrambleOnReset;

/// @brief Method AreAllRemainingInputsBombs, addr 0x180416f50, size 0xb0, virtual false, abstract: false, final false
inline bool AreAllRemainingInputsBombs() ;

/// @brief Method Awake, addr 0x180417000, size 0x120, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Clear, addr 0x180417240, size 0xf0, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ClearPeck, addr 0x180417120, size 0x120, virtual false, abstract: false, final false
inline void ClearPeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method InputPeck, addr 0x180417330, size 0x320, virtual false, abstract: false, final false
inline void InputPeck(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  peckSystem) ;

static inline ::GlobalNamespace::SweeperBrain* New_ctor() ;

/// @brief Method ResetPeck, addr 0x180417650, size 0x1a0, virtual false, abstract: false, final false
inline void ResetPeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method ServerSetIndicatorsToIndicate, addr 0x1804177f0, size 0xa0, virtual false, abstract: false, final false
inline void ServerSetIndicatorsToIndicate() ;

/// @brief Method SetRandomBombs, addr 0x180417890, size 0x110, virtual false, abstract: false, final false
inline void SetRandomBombs() ;

constexpr int32_t const& __cordl_internal_get_bombCount() const;

constexpr int32_t& __cordl_internal_get_bombCount() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_bombs() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_bombs() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_clearInput() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_clearInput() ;

constexpr ::GlobalNamespace::PeckStateFilter const& __cordl_internal_get_clearStateFilter() const;

constexpr ::GlobalNamespace::PeckStateFilter& __cordl_internal_get_clearStateFilter() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::CapsuleBomb>> const& __cordl_internal_get_indicators() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::CapsuleBomb>>& __cordl_internal_get_indicators() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::CapsuleBomb>> const& __cordl_internal_get_inputs() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::CapsuleBomb>>& __cordl_internal_get_inputs() ;

constexpr bool const& __cordl_internal_get_isPrimed() const;

constexpr bool& __cordl_internal_get_isPrimed() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_onFailure() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_onFailure() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_onSuccess() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_onSuccess() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_resetInput() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_resetInput() ;

constexpr ::GlobalNamespace::PeckStateFilter const& __cordl_internal_get_resetStateFilter() const;

constexpr ::GlobalNamespace::PeckStateFilter& __cordl_internal_get_resetStateFilter() ;

constexpr bool const& __cordl_internal_get_scrambleOnReset() const;

constexpr bool& __cordl_internal_get_scrambleOnReset() ;

constexpr void __cordl_internal_set_bombCount(int32_t  value) ;

constexpr void __cordl_internal_set_bombs(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_clearInput(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_clearStateFilter(::GlobalNamespace::PeckStateFilter  value) ;

constexpr void __cordl_internal_set_indicators(::ArrayW<::UnityW<::GlobalNamespace::CapsuleBomb>>  value) ;

constexpr void __cordl_internal_set_inputs(::ArrayW<::UnityW<::GlobalNamespace::CapsuleBomb>>  value) ;

constexpr void __cordl_internal_set_isPrimed(bool  value) ;

constexpr void __cordl_internal_set_onFailure(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_onSuccess(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_resetInput(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_resetStateFilter(::GlobalNamespace::PeckStateFilter  value) ;

constexpr void __cordl_internal_set_scrambleOnReset(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SweeperBrain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SweeperBrain", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SweeperBrain(SweeperBrain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SweeperBrain", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SweeperBrain(SweeperBrain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5123};

/// @brief Field inputs, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::CapsuleBomb>>  ___inputs;

/// @brief Field indicators, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::CapsuleBomb>>  ___indicators;

/// @brief Field resetInput, offset: 0x30, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___resetInput;

/// @brief Field resetStateFilter, offset: 0x58, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  ___resetStateFilter;

/// @brief Field clearInput, offset: 0x68, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___clearInput;

/// @brief Field clearStateFilter, offset: 0x90, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  ___clearStateFilter;

/// @brief Field onSuccess, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___onSuccess;

/// @brief Field onFailure, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___onFailure;

/// @brief Field bombCount, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___bombCount;

/// @brief Field scrambleOnReset, offset: 0xb4, size: 0x1, def value: None
 bool  ___scrambleOnReset;

/// @brief Field bombs, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___bombs;

/// @brief Field isPrimed, offset: 0xc0, size: 0x1, def value: None
 bool  ___isPrimed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SweeperBrain, ___inputs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SweeperBrain, ___indicators) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SweeperBrain, ___resetInput) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SweeperBrain, ___resetStateFilter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SweeperBrain, ___clearInput) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SweeperBrain, ___clearStateFilter) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SweeperBrain, ___onSuccess) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SweeperBrain, ___onFailure) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SweeperBrain, ___bombCount) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SweeperBrain, ___scrambleOnReset) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SweeperBrain, ___bombs) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SweeperBrain, ___isPrimed) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SweeperBrain) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
