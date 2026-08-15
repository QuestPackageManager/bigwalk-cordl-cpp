#pragma once
// IWYU pragma private; include "GlobalNamespace/CountingMachine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CountingMachine)
namespace GlobalNamespace {
class CountingDisplay;
}
namespace GlobalNamespace {
struct PeckContext;
}
// Forward declare root types
namespace GlobalNamespace {
class CountingMachine;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CountingMachine*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CountingMachine*, "", "CountingMachine");
// Dependencies PeckSwitch, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CountingMachine
class CORDL_TYPE CountingMachine : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field countingDisplay, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_countingDisplay, put=__cordl_internal_set_countingDisplay)) ::UnityW<::GlobalNamespace::CountingDisplay>  countingDisplay;

 __declspec(property(get=get_currentValue, put=set_currentValue)) int32_t  currentValue;

/// @brief Field decrementSystem, offset 0x78, size 0x28 
 __declspec(property(get=__cordl_internal_get_decrementSystem, put=__cordl_internal_set_decrementSystem)) ::GlobalNamespace::PeckSystemReference  decrementSystem;

/// @brief Field incrementSystem, offset 0x50, size 0x28 
 __declspec(property(get=__cordl_internal_get_incrementSystem, put=__cordl_internal_set_incrementSystem)) ::GlobalNamespace::PeckSystemReference  incrementSystem;

 __declspec(property(get=get_isServer)) bool  isServer;

/// @brief Field logVerbose, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field primeSwitches, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_primeSwitches, put=__cordl_internal_set_primeSwitches)) ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>  primeSwitches;

/// @brief Field tweenedValue, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_tweenedValue, put=__cordl_internal_set_tweenedValue)) float_t  tweenedValue;

/// @brief Field unprimeSwitches, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_unprimeSwitches, put=__cordl_internal_set_unprimeSwitches)) ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>  unprimeSwitches;

/// @brief Field valueStorageSystem, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_valueStorageSystem, put=__cordl_internal_set_valueStorageSystem)) ::GlobalNamespace::PeckSystemReference  valueStorageSystem;

/// @brief Method Awake, addr 0x1803fba70, size 0xc0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Decrement, addr 0x1803fbb30, size 0x30, virtual false, abstract: false, final false
inline void Decrement(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method Increment, addr 0x1803fbb60, size 0x30, virtual false, abstract: false, final false
inline void Increment(::GlobalNamespace::PeckContext  peckContext) ;

static inline ::GlobalNamespace::CountingMachine* New_ctor() ;

/// @brief Method OnValueChange, addr 0x1803fbb90, size 0x30, virtual false, abstract: false, final false
inline void OnValueChange(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method ServerPrime, addr 0x1803fbbc0, size 0xa0, virtual false, abstract: false, final false
inline void ServerPrime() ;

/// @brief Method ServerUnprime, addr 0x1803fbc60, size 0xa0, virtual false, abstract: false, final false
inline void ServerUnprime() ;

constexpr ::UnityW<::GlobalNamespace::CountingDisplay> const& __cordl_internal_get_countingDisplay() const;

constexpr ::UnityW<::GlobalNamespace::CountingDisplay>& __cordl_internal_get_countingDisplay() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_decrementSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_decrementSystem() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_incrementSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_incrementSystem() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>> const& __cordl_internal_get_primeSwitches() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>& __cordl_internal_get_primeSwitches() ;

constexpr float_t const& __cordl_internal_get_tweenedValue() const;

constexpr float_t& __cordl_internal_get_tweenedValue() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>> const& __cordl_internal_get_unprimeSwitches() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>& __cordl_internal_get_unprimeSwitches() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_valueStorageSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_valueStorageSystem() ;

constexpr void __cordl_internal_set_countingDisplay(::UnityW<::GlobalNamespace::CountingDisplay>  value) ;

constexpr void __cordl_internal_set_decrementSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_incrementSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_primeSwitches(::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>  value) ;

constexpr void __cordl_internal_set_tweenedValue(float_t  value) ;

constexpr void __cordl_internal_set_unprimeSwitches(::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>  value) ;

constexpr void __cordl_internal_set_valueStorageSystem(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_currentValue, addr 0x1803fbd00, size 0x20, virtual false, abstract: false, final false
inline int32_t get_currentValue() ;

/// @brief Method get_isServer, addr 0x1803fbd20, size 0x20, virtual false, abstract: false, final false
inline bool get_isServer() ;

/// @brief Method set_currentValue, addr 0x1803fbd40, size 0x80, virtual false, abstract: false, final false
inline void set_currentValue(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CountingMachine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CountingMachine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CountingMachine(CountingMachine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CountingMachine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CountingMachine(CountingMachine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5039};

/// @brief Field maxValue offset 0xffffffff size 0x4
static constexpr int32_t  maxValue{static_cast<int32_t>(0x63)};

/// @brief Field countingDisplay, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CountingDisplay>  ___countingDisplay;

/// @brief Field valueStorageSystem, offset: 0x28, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___valueStorageSystem;

/// @brief Field incrementSystem, offset: 0x50, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___incrementSystem;

/// @brief Field decrementSystem, offset: 0x78, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___decrementSystem;

/// @brief Field primeSwitches, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>  ___primeSwitches;

/// @brief Field unprimeSwitches, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>  ___unprimeSwitches;

/// @brief Field logVerbose, offset: 0xb0, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field tweenedValue, offset: 0xb4, size: 0x4, def value: None
 float_t  ___tweenedValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CountingMachine, ___countingDisplay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingMachine, ___valueStorageSystem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingMachine, ___incrementSystem) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingMachine, ___decrementSystem) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingMachine, ___primeSwitches) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingMachine, ___unprimeSwitches) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingMachine, ___logVerbose) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountingMachine, ___tweenedValue) == 0xb4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CountingMachine) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
