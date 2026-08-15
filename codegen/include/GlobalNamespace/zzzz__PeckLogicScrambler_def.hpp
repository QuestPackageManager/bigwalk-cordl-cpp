#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckLogicScrambler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PeckLogicScrambler)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckLogicScrambler___c__DisplayClass5_0;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckLogicScrambler;
}
namespace GlobalNamespace {
class PeckLogicScrambler___c__DisplayClass5_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckLogicScrambler*);
MARK_REF_T(::GlobalNamespace::PeckLogicScrambler___c__DisplayClass5_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckLogicScrambler*, "", "PeckLogicScrambler");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckLogicScrambler___c__DisplayClass5_0*, "", "PeckLogicScrambler/<>c__DisplayClass5_0");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckLogicScrambler/<>c__DisplayClass5_0
class CORDL_TYPE PeckLogicScrambler___c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PeckLogicScrambler>  __4__this;

/// @brief Field localIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_localIndex, put=__cordl_internal_set_localIndex)) int32_t  localIndex;

static inline ::GlobalNamespace::PeckLogicScrambler___c__DisplayClass5_0* New_ctor() ;

/// @brief Method <Awake>b__0, addr 0x18045a3d0, size 0xb0, virtual false, abstract: false, final false
inline void _Awake_b__0(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::UnityW<::GlobalNamespace::PeckLogicScrambler> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::PeckLogicScrambler>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_localIndex() const;

constexpr int32_t& __cordl_internal_get_localIndex() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PeckLogicScrambler>  value) ;

constexpr void __cordl_internal_set_localIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckLogicScrambler___c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckLogicScrambler___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckLogicScrambler___c__DisplayClass5_0(PeckLogicScrambler___c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckLogicScrambler___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckLogicScrambler___c__DisplayClass5_0(PeckLogicScrambler___c__DisplayClass5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5426};

/// @brief Field localIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___localIndex;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckLogicScrambler>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckLogicScrambler___c__DisplayClass5_0, ___localIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckLogicScrambler___c__DisplayClass5_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckLogicScrambler___c__DisplayClass5_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies TrackedPeckState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckLogicScrambler
class CORDL_TYPE PeckLogicScrambler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass5_0 = ::GlobalNamespace::PeckLogicScrambler___c__DisplayClass5_0;

/// @brief Field inputs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputs, put=__cordl_internal_set_inputs)) ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  inputs;

/// @brief Field mappings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_mappings, put=__cordl_internal_set_mappings)) ::ArrayW<int32_t>  mappings;

/// @brief Field outputs, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputs, put=__cordl_internal_set_outputs)) ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  outputs;

/// @brief Field peckZeroOnScramble, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_peckZeroOnScramble, put=__cordl_internal_set_peckZeroOnScramble)) bool  peckZeroOnScramble;

/// @brief Field scrambleSystem, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_scrambleSystem, put=__cordl_internal_set_scrambleSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  scrambleSystem;

/// @brief Method Awake, addr 0x180450d30, size 0x2a0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InputPeck, addr 0x180450fd0, size 0xb0, virtual false, abstract: false, final false
inline void InputPeck(::GlobalNamespace::PeckContext  peckContext, int32_t  inputIndex) ;

static inline ::GlobalNamespace::PeckLogicScrambler* New_ctor() ;

/// @brief Method ScramblePeck, addr 0x180451080, size 0x120, virtual false, abstract: false, final false
inline void ScramblePeck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>> const& __cordl_internal_get_inputs() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>& __cordl_internal_get_inputs() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_mappings() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_mappings() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>> const& __cordl_internal_get_outputs() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>& __cordl_internal_get_outputs() ;

constexpr bool const& __cordl_internal_get_peckZeroOnScramble() const;

constexpr bool& __cordl_internal_get_peckZeroOnScramble() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_scrambleSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_scrambleSystem() ;

constexpr void __cordl_internal_set_inputs(::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  value) ;

constexpr void __cordl_internal_set_mappings(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_outputs(::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  value) ;

constexpr void __cordl_internal_set_peckZeroOnScramble(bool  value) ;

constexpr void __cordl_internal_set_scrambleSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckLogicScrambler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckLogicScrambler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckLogicScrambler(PeckLogicScrambler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckLogicScrambler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckLogicScrambler(PeckLogicScrambler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5427};

/// @brief Field scrambleSystem, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___scrambleSystem;

/// @brief Field inputs, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  ___inputs;

/// @brief Field outputs, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  ___outputs;

/// @brief Field mappings, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___mappings;

/// @brief Field peckZeroOnScramble, offset: 0x40, size: 0x1, def value: None
 bool  ___peckZeroOnScramble;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckLogicScrambler, ___scrambleSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckLogicScrambler, ___inputs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckLogicScrambler, ___outputs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckLogicScrambler, ___mappings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckLogicScrambler, ___peckZeroOnScramble) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckLogicScrambler) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
