#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckSwitch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "GlobalNamespace/zzzz__SeaShell_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckSwitch)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckEffectBlockSwitch;
}
namespace GlobalNamespace {
struct PeckSwitch_StateMode;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace LobbyNetworking {
class ITicketed;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct PeckSwitch_StateMode;
}
namespace GlobalNamespace {
class PeckSwitch;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckSwitch_StateMode);
MARK_REF_T(::GlobalNamespace::PeckSwitch*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckSwitch_StateMode, "", "PeckSwitch/StateMode");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckSwitch*, "", "PeckSwitch");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckSwitch/StateMode
struct CORDL_TYPE PeckSwitch_StateMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeckSwitch_StateMode_Unwrapped
enum struct __PeckSwitch_StateMode_Unwrapped : int32_t {
__E_Specific = static_cast<int32_t>(0x0),
__E_Wrap = static_cast<int32_t>(0x1),
__E_Map = static_cast<int32_t>(0x2),
__E_Ignore = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeckSwitch_StateMode_Unwrapped () const noexcept {
return static_cast<__PeckSwitch_StateMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeckSwitch_StateMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckSwitch_StateMode(int32_t  value__) noexcept;

/// @brief Field Ignore value: I32(3)
static ::GlobalNamespace::PeckSwitch_StateMode const Ignore;

/// @brief Field Map value: I32(2)
static ::GlobalNamespace::PeckSwitch_StateMode const Map;

/// @brief Field Specific value: I32(0)
static ::GlobalNamespace::PeckSwitch_StateMode const Specific;

/// @brief Field Wrap value: I32(1)
static ::GlobalNamespace::PeckSwitch_StateMode const Wrap;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5351};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckSwitch_StateMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckSwitch_StateMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckSwitch::StateMode, PropGroup, SeaShell::ShellReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckSwitch
class CORDL_TYPE PeckSwitch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using StateMode = ::GlobalNamespace::PeckSwitch_StateMode;

/// @brief Field <ticket>k__BackingField, offset 0x7e, size 0x2 
 __declspec(property(get=__cordl_internal_get__ticket_k__BackingField, put=__cordl_internal_set__ticket_k__BackingField)) uint16_t  _ticket_k__BackingField;

/// @brief Field blockers, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_blockers, put=__cordl_internal_set_blockers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckEffectBlockSwitch>>*  blockers;

/// @brief Field customCrosshairPoint, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_customCrosshairPoint, put=__cordl_internal_set_customCrosshairPoint)) ::UnityW<::UnityEngine::Transform>  customCrosshairPoint;

 __declspec(property(get=get_isNotBlocked)) bool  isNotBlocked;

/// @brief Field keyType, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_keyType, put=__cordl_internal_set_keyType)) ::GlobalNamespace::PropGroup  keyType;

/// @brief Field logVerbose, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field mapStates, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapStates, put=__cordl_internal_set_mapStates)) ::ArrayW<int32_t>  mapStates;

/// @brief Field needsKey, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_needsKey, put=__cordl_internal_set_needsKey)) bool  needsKey;

/// @brief Field playerHoldingThis, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerHoldingThis, put=__cordl_internal_set_playerHoldingThis)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerHoldingThis;

/// @brief Field shellReference, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_shellReference, put=__cordl_internal_set_shellReference)) ::GlobalNamespace::SeaShell_ShellReference  shellReference;

/// @brief Field showTap, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_showTap, put=__cordl_internal_set_showTap)) bool  showTap;

/// @brief Field specificState, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_specificState, put=__cordl_internal_set_specificState)) int32_t  specificState;

/// @brief Field stateMode, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_stateMode, put=__cordl_internal_set_stateMode)) ::GlobalNamespace::PeckSwitch_StateMode  stateMode;

 __declspec(property(get=get_ticket, put=set_ticket)) uint16_t  ticket;

/// @brief Field trackedStateSystem, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackedStateSystem, put=__cordl_internal_set_trackedStateSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  trackedStateSystem;

/// @brief Field upSwitch, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_upSwitch, put=__cordl_internal_set_upSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  upSwitch;

/// @brief Field useTicket, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useTicket, put=__cordl_internal_set_useTicket)) bool  useTicket;

/// @brief Field wrapTotal, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_wrapTotal, put=__cordl_internal_set_wrapTotal)) int32_t  wrapTotal;

/// @brief Convert operator to "::LobbyNetworking::ITicketed"
constexpr operator  ::LobbyNetworking::ITicketed*() noexcept;

/// @brief Method GetCrosshairTransform, addr 0x180453cc0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetCrosshairTransform() ;

/// @brief Method GetNextState, addr 0x180453d00, size 0x50, virtual false, abstract: false, final false
inline int32_t GetNextState(int32_t  oldState) ;

static inline ::GlobalNamespace::PeckSwitch* New_ctor() ;

/// @brief Method OnDisable, addr 0x180453d50, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180453d60, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Peck, addr 0x180453fb0, size 0x80, virtual false, abstract: false, final false
inline void Peck() ;

/// @brief Method Peck, addr 0x180453dc0, size 0x1f0, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr uint16_t const& __cordl_internal_get__ticket_k__BackingField() const;

constexpr uint16_t& __cordl_internal_get__ticket_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckEffectBlockSwitch>>* const& __cordl_internal_get_blockers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckEffectBlockSwitch>>*& __cordl_internal_get_blockers() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_customCrosshairPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_customCrosshairPoint() ;

constexpr ::GlobalNamespace::PropGroup const& __cordl_internal_get_keyType() const;

constexpr ::GlobalNamespace::PropGroup& __cordl_internal_get_keyType() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_mapStates() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_mapStates() ;

constexpr bool const& __cordl_internal_get_needsKey() const;

constexpr bool& __cordl_internal_get_needsKey() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerHoldingThis() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerHoldingThis() ;

constexpr ::GlobalNamespace::SeaShell_ShellReference const& __cordl_internal_get_shellReference() const;

constexpr ::GlobalNamespace::SeaShell_ShellReference& __cordl_internal_get_shellReference() ;

constexpr bool const& __cordl_internal_get_showTap() const;

constexpr bool& __cordl_internal_get_showTap() ;

constexpr int32_t const& __cordl_internal_get_specificState() const;

constexpr int32_t& __cordl_internal_get_specificState() ;

constexpr ::GlobalNamespace::PeckSwitch_StateMode const& __cordl_internal_get_stateMode() const;

constexpr ::GlobalNamespace::PeckSwitch_StateMode& __cordl_internal_get_stateMode() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_trackedStateSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_trackedStateSystem() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_upSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_upSwitch() ;

constexpr bool const& __cordl_internal_get_useTicket() const;

constexpr bool& __cordl_internal_get_useTicket() ;

constexpr int32_t const& __cordl_internal_get_wrapTotal() const;

constexpr int32_t& __cordl_internal_get_wrapTotal() ;

constexpr void __cordl_internal_set__ticket_k__BackingField(uint16_t  value) ;

constexpr void __cordl_internal_set_blockers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckEffectBlockSwitch>>*  value) ;

constexpr void __cordl_internal_set_customCrosshairPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_keyType(::GlobalNamespace::PropGroup  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_mapStates(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_needsKey(bool  value) ;

constexpr void __cordl_internal_set_playerHoldingThis(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_shellReference(::GlobalNamespace::SeaShell_ShellReference  value) ;

constexpr void __cordl_internal_set_showTap(bool  value) ;

constexpr void __cordl_internal_set_specificState(int32_t  value) ;

constexpr void __cordl_internal_set_stateMode(::GlobalNamespace::PeckSwitch_StateMode  value) ;

constexpr void __cordl_internal_set_trackedStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_upSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_useTicket(bool  value) ;

constexpr void __cordl_internal_set_wrapTotal(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isNotBlocked, addr 0x180454030, size 0x20, virtual false, abstract: false, final false
inline bool get_isNotBlocked() ;

/// @brief Method get_ticket, addr 0x180454050, size 0x10, virtual true, abstract: false, final true
inline uint16_t get_ticket() ;

/// @brief Convert to "::LobbyNetworking::ITicketed"
constexpr ::LobbyNetworking::ITicketed* i___LobbyNetworking__ITicketed() noexcept;

/// @brief Method set_ticket, addr 0x180454060, size 0x10, virtual true, abstract: false, final true
inline void set_ticket(uint16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckSwitch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckSwitch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckSwitch(PeckSwitch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckSwitch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckSwitch(PeckSwitch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5352};

/// @brief Field trackedStateSystem, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___trackedStateSystem;

/// @brief Field customCrosshairPoint, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___customCrosshairPoint;

/// @brief Field showTap, offset: 0x30, size: 0x1, def value: None
 bool  ___showTap;

/// @brief Field upSwitch, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___upSwitch;

/// @brief Field stateMode, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::PeckSwitch_StateMode  ___stateMode;

/// @brief Field specificState, offset: 0x44, size: 0x4, def value: None
 int32_t  ___specificState;

/// @brief Field mapStates, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___mapStates;

/// @brief Field wrapTotal, offset: 0x50, size: 0x4, def value: None
 int32_t  ___wrapTotal;

/// @brief Field needsKey, offset: 0x54, size: 0x1, def value: None
 bool  ___needsKey;

/// @brief Field keyType, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::PropGroup  ___keyType;

/// @brief Field logVerbose, offset: 0x5c, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field blockers, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckEffectBlockSwitch>>*  ___blockers;

/// @brief Field playerHoldingThis, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerHoldingThis;

/// @brief Field shellReference, offset: 0x70, size: 0xc, def value: None
 ::GlobalNamespace::SeaShell_ShellReference  ___shellReference;

/// @brief Field useTicket, offset: 0x7c, size: 0x1, def value: None
 bool  ___useTicket;

/// @brief Field <ticket>k__BackingField, offset: 0x7e, size: 0x2, def value: None
 uint16_t  ____ticket_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckSwitch, ___trackedStateSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSwitch, ___customCrosshairPoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSwitch, ___showTap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSwitch, ___upSwitch) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSwitch, ___stateMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSwitch, ___specificState) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSwitch, ___mapStates) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSwitch, ___wrapTotal) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSwitch, ___needsKey) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSwitch, ___keyType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSwitch, ___logVerbose) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSwitch, ___blockers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSwitch, ___playerHoldingThis) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSwitch, ___shellReference) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSwitch, ___useTicket) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckSwitch, ____ticket_k__BackingField) == 0x7e, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckSwitch) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
