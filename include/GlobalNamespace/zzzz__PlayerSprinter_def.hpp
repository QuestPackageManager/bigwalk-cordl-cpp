#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSprinter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerSprinter)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
struct PlayerSprinter_RunMode;
}
// Forward declare root types
namespace GlobalNamespace {
struct PlayerSprinter_RunMode;
}
namespace GlobalNamespace {
class PlayerSprinter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerSprinter_RunMode);
MARK_REF_T(::GlobalNamespace::PlayerSprinter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerSprinter_RunMode, "", "PlayerSprinter/RunMode");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerSprinter*, "", "PlayerSprinter");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerSprinter/RunMode
struct CORDL_TYPE PlayerSprinter_RunMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerSprinter_RunMode_Unwrapped
enum struct __PlayerSprinter_RunMode_Unwrapped : int32_t {
__E_Hold = static_cast<int32_t>(0x0),
__E_Toggle = static_cast<int32_t>(0x1),
__E_PreserveWithToggle = static_cast<int32_t>(0x2),
__E_PreserveNoToggle = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerSprinter_RunMode_Unwrapped () const noexcept {
return static_cast<__PlayerSprinter_RunMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerSprinter_RunMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerSprinter_RunMode(int32_t  value__) noexcept;

/// @brief Field Hold value: I32(0)
static ::GlobalNamespace::PlayerSprinter_RunMode const Hold;

/// @brief Field PreserveNoToggle value: I32(3)
static ::GlobalNamespace::PlayerSprinter_RunMode const PreserveNoToggle;

/// @brief Field PreserveWithToggle value: I32(2)
static ::GlobalNamespace::PlayerSprinter_RunMode const PreserveWithToggle;

/// @brief Field Toggle value: I32(1)
static ::GlobalNamespace::PlayerSprinter_RunMode const Toggle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5483};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSprinter_RunMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerSprinter_RunMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PlayerSprinter::RunMode, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSprinter
class CORDL_TYPE PlayerSprinter : public ::System::Object {
public:
// Declarations
using RunMode = ::GlobalNamespace::PlayerSprinter_RunMode;

/// @brief Field isSprinting, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSprinting, put=__cordl_internal_set_isSprinting)) bool  isSprinting;

/// @brief Field logVerbose, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field pc, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_pc, put=__cordl_internal_set_pc)) ::UnityW<::GlobalNamespace::PlayerCharacter>  pc;

/// @brief Field runMode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_runMode, put=__cordl_internal_set_runMode)) ::GlobalNamespace::PlayerSprinter_RunMode  runMode;

/// @brief Field sprintIsToggledOn, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_sprintIsToggledOn, put=__cordl_internal_set_sprintIsToggledOn)) bool  sprintIsToggledOn;

/// @brief Method Initialize, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method LocalUpdate, addr 0x180376220, size 0x1f0, virtual false, abstract: false, final false
inline void LocalUpdate() ;

static inline ::GlobalNamespace::PlayerSprinter* New_ctor() ;

constexpr bool const& __cordl_internal_get_isSprinting() const;

constexpr bool& __cordl_internal_get_isSprinting() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_pc() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_pc() ;

constexpr ::GlobalNamespace::PlayerSprinter_RunMode const& __cordl_internal_get_runMode() const;

constexpr ::GlobalNamespace::PlayerSprinter_RunMode& __cordl_internal_get_runMode() ;

constexpr bool const& __cordl_internal_get_sprintIsToggledOn() const;

constexpr bool& __cordl_internal_get_sprintIsToggledOn() ;

constexpr void __cordl_internal_set_isSprinting(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_pc(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_runMode(::GlobalNamespace::PlayerSprinter_RunMode  value) ;

constexpr void __cordl_internal_set_sprintIsToggledOn(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerSprinter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerSprinter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerSprinter(PlayerSprinter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSprinter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerSprinter(PlayerSprinter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5484};

/// @brief Field runMode, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::PlayerSprinter_RunMode  ___runMode;

/// @brief Field logVerbose, offset: 0x14, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field pc, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___pc;

/// @brief Field isSprinting, offset: 0x20, size: 0x1, def value: None
 bool  ___isSprinting;

/// @brief Field sprintIsToggledOn, offset: 0x21, size: 0x1, def value: None
 bool  ___sprintIsToggledOn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSprinter, ___runMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSprinter, ___logVerbose) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSprinter, ___pc) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSprinter, ___isSprinting) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSprinter, ___sprintIsToggledOn) == 0x21, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerSprinter) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
