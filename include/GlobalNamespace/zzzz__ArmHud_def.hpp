#pragma once
// IWYU pragma private; include "GlobalNamespace/ArmHud.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArmHud)
namespace GlobalNamespace {
struct ArmHud_ArmHudState;
}
namespace GlobalNamespace {
struct ArmHud_PocketHudState;
}
namespace GlobalNamespace {
struct ArmHud_SingleArmHud;
}
namespace GlobalNamespace {
class Prop;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct ArmHud_ArmHudState;
}
namespace GlobalNamespace {
struct ArmHud_PocketHudState;
}
namespace GlobalNamespace {
class ArmHud;
}
namespace GlobalNamespace {
struct ArmHud_SingleArmHud;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ArmHud_ArmHudState);
MARK_VAL_T(::GlobalNamespace::ArmHud_PocketHudState);
MARK_REF_T(::GlobalNamespace::ArmHud*);
MARK_VAL_T(::GlobalNamespace::ArmHud_SingleArmHud);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArmHud_ArmHudState, "", "ArmHud/ArmHudState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArmHud_PocketHudState, "", "ArmHud/PocketHudState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArmHud*, "", "ArmHud");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArmHud_SingleArmHud, "", "ArmHud/SingleArmHud");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ArmHud/ArmHudState
struct CORDL_TYPE ArmHud_ArmHudState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ArmHud_ArmHudState_Unwrapped
enum struct __ArmHud_ArmHudState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Waving = static_cast<int32_t>(0x1),
__E_WavingLocked = static_cast<int32_t>(0x2),
__E_Pointing = static_cast<int32_t>(0x3),
__E_PointingLocked = static_cast<int32_t>(0x4),
__E_Airplane = static_cast<int32_t>(0x5),
__E_AirplaneLocked = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ArmHud_ArmHudState_Unwrapped () const noexcept {
return static_cast<__ArmHud_ArmHudState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ArmHud_ArmHudState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ArmHud_ArmHudState(int32_t  value__) noexcept;

/// @brief Field Airplane value: I32(5)
static ::GlobalNamespace::ArmHud_ArmHudState const Airplane;

/// @brief Field AirplaneLocked value: I32(6)
static ::GlobalNamespace::ArmHud_ArmHudState const AirplaneLocked;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::ArmHud_ArmHudState const None;

/// @brief Field Pointing value: I32(3)
static ::GlobalNamespace::ArmHud_ArmHudState const Pointing;

/// @brief Field PointingLocked value: I32(4)
static ::GlobalNamespace::ArmHud_ArmHudState const PointingLocked;

/// @brief Field Waving value: I32(1)
static ::GlobalNamespace::ArmHud_ArmHudState const Waving;

/// @brief Field WavingLocked value: I32(2)
static ::GlobalNamespace::ArmHud_ArmHudState const WavingLocked;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5244};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArmHud_ArmHudState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArmHud_ArmHudState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ArmHud::ArmHudState
namespace GlobalNamespace {
// Is value type: true
// CS Name: ArmHud/SingleArmHud
struct CORDL_TYPE ArmHud_SingleArmHud {
public:
// Declarations
/// @brief Method SetArmState, addr 0x180428860, size 0x1e0, virtual false, abstract: false, final false
inline void SetArmState(::GlobalNamespace::ArmHud_ArmHudState  newArmHudState, float_t  newLockness) ;

// Ctor Parameters []
// @brief default ctor
constexpr ArmHud_SingleArmHud() ;

// Ctor Parameters [CppParam { name: "waving", ty: "::UnityW<::UnityEngine::UI::Image>", modifiers: "", def_value: None }, CppParam { name: "wavingLocked", ty: "::UnityW<::UnityEngine::UI::Image>", modifiers: "", def_value: None }, CppParam { name: "wavingLockRing", ty: "::UnityW<::UnityEngine::UI::Image>", modifiers: "", def_value: None }, CppParam { name: "airplane", ty: "::UnityW<::UnityEngine::UI::Image>", modifiers: "", def_value: None }, CppParam { name: "airplaneLocked", ty: "::UnityW<::UnityEngine::UI::Image>", modifiers: "", def_value: None }, CppParam { name: "airplaneLockRing", ty: "::UnityW<::UnityEngine::UI::Image>", modifiers: "", def_value: None }, CppParam { name: "armHudState", ty: "::GlobalNamespace::ArmHud_ArmHudState", modifiers: "", def_value: None }, CppParam { name: "lockness", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "logVerbose", ty: "bool", modifiers: "", def_value: None }]
constexpr ArmHud_SingleArmHud(::UnityW<::UnityEngine::UI::Image>  waving, ::UnityW<::UnityEngine::UI::Image>  wavingLocked, ::UnityW<::UnityEngine::UI::Image>  wavingLockRing, ::UnityW<::UnityEngine::UI::Image>  airplane, ::UnityW<::UnityEngine::UI::Image>  airplaneLocked, ::UnityW<::UnityEngine::UI::Image>  airplaneLockRing, ::GlobalNamespace::ArmHud_ArmHudState  armHudState, float_t  lockness, bool  logVerbose) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5243};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field waving, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  waving;

/// @brief Field wavingLocked, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  wavingLocked;

/// @brief Field wavingLockRing, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  wavingLockRing;

/// @brief Field airplane, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  airplane;

/// @brief Field airplaneLocked, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  airplaneLocked;

/// @brief Field airplaneLockRing, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  airplaneLockRing;

/// @brief Field armHudState, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::ArmHud_ArmHudState  armHudState;

/// @brief Field lockness, offset: 0x34, size: 0x4, def value: None
 float_t  lockness;

/// @brief Field logVerbose, offset: 0x38, size: 0x1, def value: None
 bool  logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArmHud_SingleArmHud, waving) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArmHud_SingleArmHud, wavingLocked) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArmHud_SingleArmHud, wavingLockRing) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArmHud_SingleArmHud, airplane) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArmHud_SingleArmHud, airplaneLocked) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArmHud_SingleArmHud, airplaneLockRing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArmHud_SingleArmHud, armHudState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArmHud_SingleArmHud, lockness) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArmHud_SingleArmHud, logVerbose) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArmHud_SingleArmHud) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ArmHud/PocketHudState
struct CORDL_TYPE ArmHud_PocketHudState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ArmHud_PocketHudState_Unwrapped
enum struct __ArmHud_PocketHudState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Empty = static_cast<int32_t>(0x1),
__E_Full = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ArmHud_PocketHudState_Unwrapped () const noexcept {
return static_cast<__ArmHud_PocketHudState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ArmHud_PocketHudState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ArmHud_PocketHudState(int32_t  value__) noexcept;

/// @brief Field Empty value: I32(1)
static ::GlobalNamespace::ArmHud_PocketHudState const Empty;

/// @brief Field Full value: I32(2)
static ::GlobalNamespace::ArmHud_PocketHudState const Full;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::ArmHud_PocketHudState const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5245};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArmHud_PocketHudState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArmHud_PocketHudState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies ArmHud::PocketHudState, ArmHud::SingleArmHud, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ArmHud
class CORDL_TYPE ArmHud : public ::System::Object {
public:
// Declarations
using ArmHudState = ::GlobalNamespace::ArmHud_ArmHudState;

using PocketHudState = ::GlobalNamespace::ArmHud_PocketHudState;

using SingleArmHud = ::GlobalNamespace::ArmHud_SingleArmHud;

/// @brief Field armHudLeft, offset 0x10, size 0x40 
 __declspec(property(get=__cordl_internal_get_armHudLeft, put=__cordl_internal_set_armHudLeft)) ::GlobalNamespace::ArmHud_SingleArmHud  armHudLeft;

/// @brief Field armHudRight, offset 0x50, size 0x40 
 __declspec(property(get=__cordl_internal_get_armHudRight, put=__cordl_internal_set_armHudRight)) ::GlobalNamespace::ArmHud_SingleArmHud  armHudRight;

/// @brief Field backpackEmpty, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_backpackEmpty, put=__cordl_internal_set_backpackEmpty)) ::UnityW<::UnityEngine::Transform>  backpackEmpty;

/// @brief Field backpackFull, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_backpackFull, put=__cordl_internal_set_backpackFull)) ::UnityW<::UnityEngine::Transform>  backpackFull;

/// @brief Field currentBackpackState, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentBackpackState, put=__cordl_internal_set_currentBackpackState)) ::GlobalNamespace::ArmHud_PocketHudState  currentBackpackState;

/// @brief Field currentHolsterState, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentHolsterState, put=__cordl_internal_set_currentHolsterState)) ::GlobalNamespace::ArmHud_PocketHudState  currentHolsterState;

/// @brief Field holsterEmpty, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_holsterEmpty, put=__cordl_internal_set_holsterEmpty)) ::UnityW<::UnityEngine::Transform>  holsterEmpty;

/// @brief Field holsterFull, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_holsterFull, put=__cordl_internal_set_holsterFull)) ::UnityW<::UnityEngine::Transform>  holsterFull;

/// @brief Field logVerbose, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Method GetBackpackHudState, addr 0x18041bbd0, size 0x90, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ArmHud_PocketHudState GetBackpackHudState() ;

/// @brief Method GetHolsterHudState, addr 0x18041bc60, size 0x50, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ArmHud_PocketHudState GetHolsterHudState() ;

/// @brief Method GetPocketHudState, addr 0x18041bcb0, size 0xc0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ArmHud_PocketHudState GetPocketHudState(::GlobalNamespace::Prop*  prop) ;

static inline ::GlobalNamespace::ArmHud* New_ctor() ;

/// @brief Method SetBackpackHud, addr 0x18041bd70, size 0x1d0, virtual false, abstract: false, final false
static inline void SetBackpackHud(::GlobalNamespace::ArmHud_PocketHudState  hudState) ;

/// @brief Method SetHolsterHud, addr 0x18041bf40, size 0x1d0, virtual false, abstract: false, final false
static inline void SetHolsterHud(::GlobalNamespace::ArmHud_PocketHudState  hudState) ;

/// @brief Method SetLeftArmState, addr 0x18041c110, size 0x50, virtual false, abstract: false, final false
static inline void SetLeftArmState(::GlobalNamespace::ArmHud_ArmHudState  hudState, float_t  lockness) ;

/// @brief Method SetRightArmState, addr 0x18041c160, size 0x50, virtual false, abstract: false, final false
static inline void SetRightArmState(::GlobalNamespace::ArmHud_ArmHudState  hudState, float_t  lockness) ;

constexpr ::GlobalNamespace::ArmHud_SingleArmHud const& __cordl_internal_get_armHudLeft() const;

constexpr ::GlobalNamespace::ArmHud_SingleArmHud& __cordl_internal_get_armHudLeft() ;

constexpr ::GlobalNamespace::ArmHud_SingleArmHud const& __cordl_internal_get_armHudRight() const;

constexpr ::GlobalNamespace::ArmHud_SingleArmHud& __cordl_internal_get_armHudRight() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_backpackEmpty() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_backpackEmpty() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_backpackFull() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_backpackFull() ;

constexpr ::GlobalNamespace::ArmHud_PocketHudState const& __cordl_internal_get_currentBackpackState() const;

constexpr ::GlobalNamespace::ArmHud_PocketHudState& __cordl_internal_get_currentBackpackState() ;

constexpr ::GlobalNamespace::ArmHud_PocketHudState const& __cordl_internal_get_currentHolsterState() const;

constexpr ::GlobalNamespace::ArmHud_PocketHudState& __cordl_internal_get_currentHolsterState() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_holsterEmpty() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_holsterEmpty() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_holsterFull() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_holsterFull() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr void __cordl_internal_set_armHudLeft(::GlobalNamespace::ArmHud_SingleArmHud  value) ;

constexpr void __cordl_internal_set_armHudRight(::GlobalNamespace::ArmHud_SingleArmHud  value) ;

constexpr void __cordl_internal_set_backpackEmpty(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_backpackFull(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_currentBackpackState(::GlobalNamespace::ArmHud_PocketHudState  value) ;

constexpr void __cordl_internal_set_currentHolsterState(::GlobalNamespace::ArmHud_PocketHudState  value) ;

constexpr void __cordl_internal_set_holsterEmpty(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_holsterFull(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_instance, addr 0x18041c1b0, size 0x500, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ArmHud* get_instance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArmHud() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArmHud", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArmHud(ArmHud && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArmHud", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArmHud(ArmHud const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5246};

/// @brief Field armHudLeft, offset: 0x10, size: 0x40, def value: None
 ::GlobalNamespace::ArmHud_SingleArmHud  ___armHudLeft;

/// @brief Field armHudRight, offset: 0x50, size: 0x40, def value: None
 ::GlobalNamespace::ArmHud_SingleArmHud  ___armHudRight;

/// @brief Field backpackEmpty, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___backpackEmpty;

/// @brief Field backpackFull, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___backpackFull;

/// @brief Field holsterEmpty, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___holsterEmpty;

/// @brief Field holsterFull, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___holsterFull;

/// @brief Field currentBackpackState, offset: 0xb0, size: 0x4, def value: None
 ::GlobalNamespace::ArmHud_PocketHudState  ___currentBackpackState;

/// @brief Field currentHolsterState, offset: 0xb4, size: 0x4, def value: None
 ::GlobalNamespace::ArmHud_PocketHudState  ___currentHolsterState;

/// @brief Field logVerbose, offset: 0xb8, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArmHud, ___armHudLeft) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArmHud, ___armHudRight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArmHud, ___backpackEmpty) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArmHud, ___backpackFull) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArmHud, ___holsterEmpty) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArmHud, ___holsterFull) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArmHud, ___currentBackpackState) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArmHud, ___currentHolsterState) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArmHud, ___logVerbose) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArmHud) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
