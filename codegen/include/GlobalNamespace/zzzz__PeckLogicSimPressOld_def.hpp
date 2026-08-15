#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckLogicSimPressOld.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PeckLogicSimPressOld)
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
class PeckLogicSimPressOld;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckLogicSimPressOld*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckLogicSimPressOld*, "", "PeckLogicSimPressOld");
// Dependencies TrackedPeckState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckLogicSimPressOld
class CORDL_TYPE PeckLogicSimPressOld : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field directControlSystem, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_directControlSystem, put=__cordl_internal_set_directControlSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  directControlSystem;

/// @brief Field goodState, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_goodState, put=__cordl_internal_set_goodState)) int32_t  goodState;

/// @brief Field logVerbose, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field minPresses, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_minPresses, put=__cordl_internal_set_minPresses)) int32_t  minPresses;

/// @brief Field notSystems, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_notSystems, put=__cordl_internal_set_notSystems)) ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  notSystems;

/// @brief Field notes, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_notes, put=__cordl_internal_set_notes)) ::StringW  notes;

/// @brief Field onSucess, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSucess, put=__cordl_internal_set_onSucess)) ::UnityW<::GlobalNamespace::PeckSwitch>  onSucess;

/// @brief Field peckSystemBlock, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_peckSystemBlock, put=__cordl_internal_set_peckSystemBlock)) ::UnityW<::GlobalNamespace::PeckSystemBlock>  peckSystemBlock;

 __declspec(property(get=get_targetSystems)) ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  targetSystems;

/// @brief Field trackedStateSystems, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackedStateSystems, put=__cordl_internal_set_trackedStateSystems)) ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  trackedStateSystems;

/// @brief Method Awake, addr 0x1804511a0, size 0x230, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckLogicSimPressOld* New_ctor() ;

/// @brief Method Peck, addr 0x1804513d0, size 0x230, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_directControlSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_directControlSystem() ;

constexpr int32_t const& __cordl_internal_get_goodState() const;

constexpr int32_t& __cordl_internal_get_goodState() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr int32_t const& __cordl_internal_get_minPresses() const;

constexpr int32_t& __cordl_internal_get_minPresses() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>> const& __cordl_internal_get_notSystems() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>& __cordl_internal_get_notSystems() ;

constexpr ::StringW const& __cordl_internal_get_notes() const;

constexpr ::StringW& __cordl_internal_get_notes() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onSucess() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onSucess() ;

constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock> const& __cordl_internal_get_peckSystemBlock() const;

constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock>& __cordl_internal_get_peckSystemBlock() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>> const& __cordl_internal_get_trackedStateSystems() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>& __cordl_internal_get_trackedStateSystems() ;

constexpr void __cordl_internal_set_directControlSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_goodState(int32_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_minPresses(int32_t  value) ;

constexpr void __cordl_internal_set_notSystems(::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  value) ;

constexpr void __cordl_internal_set_notes(::StringW  value) ;

constexpr void __cordl_internal_set_onSucess(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_peckSystemBlock(::UnityW<::GlobalNamespace::PeckSystemBlock>  value) ;

constexpr void __cordl_internal_set_trackedStateSystems(::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  value) ;

/// @brief Method .ctor, addr 0x1802f9ce0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_targetSystems, addr 0x180451600, size 0x40, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>> get_targetSystems() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckLogicSimPressOld() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckLogicSimPressOld", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckLogicSimPressOld(PeckLogicSimPressOld && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckLogicSimPressOld", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckLogicSimPressOld(PeckLogicSimPressOld const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5428};

/// @brief Field trackedStateSystems, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  ___trackedStateSystems;

/// @brief Field peckSystemBlock, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSystemBlock>  ___peckSystemBlock;

/// @brief Field goodState, offset: 0x30, size: 0x4, def value: None
 int32_t  ___goodState;

/// @brief Field minPresses, offset: 0x34, size: 0x4, def value: None
 int32_t  ___minPresses;

/// @brief Field notSystems, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  ___notSystems;

/// @brief Field onSucess, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onSucess;

/// @brief Field directControlSystem, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___directControlSystem;

/// @brief Field logVerbose, offset: 0x50, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field notes, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___notes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckLogicSimPressOld, ___trackedStateSystems) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckLogicSimPressOld, ___peckSystemBlock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckLogicSimPressOld, ___goodState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckLogicSimPressOld, ___minPresses) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckLogicSimPressOld, ___notSystems) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckLogicSimPressOld, ___onSucess) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckLogicSimPressOld, ___directControlSystem) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckLogicSimPressOld, ___logVerbose) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckLogicSimPressOld, ___notes) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckLogicSimPressOld) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
