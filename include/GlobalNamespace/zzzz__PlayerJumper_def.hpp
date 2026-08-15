#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerJumper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerJumper)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerJumper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerJumper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerJumper*, "", "PlayerJumper");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerJumper
class CORDL_TYPE PlayerJumper : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Jumpness, put=set_Jumpness)) float_t  Jumpness;

/// @brief Field <Jumpness>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__Jumpness_k__BackingField, put=__cordl_internal_set__Jumpness_k__BackingField)) float_t  _Jumpness_k__BackingField;

/// @brief Field defaultSmoothTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_defaultSmoothTime, put=setStaticF_defaultSmoothTime)) float_t  defaultSmoothTime;

/// @brief Field jumpInQueue, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_jumpInQueue, put=__cordl_internal_set_jumpInQueue)) bool  jumpInQueue;

/// @brief Field justJumped, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_justJumped, put=__cordl_internal_set_justJumped)) bool  justJumped;

/// @brief Field logVerbose, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playerCharacter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Method DoDudJump, addr 0x180350080, size 0x170, virtual false, abstract: false, final false
inline void DoDudJump() ;

/// @brief Method FixedUpdate, addr 0x1803501f0, size 0x10, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method ForceAJump, addr 0x180350200, size 0x30, virtual false, abstract: false, final false
inline void ForceAJump() ;

/// @brief Method Initialize, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method LocalFixedUpdate, addr 0x180350230, size 0xd0, virtual false, abstract: false, final false
inline void LocalFixedUpdate(::by_ref<::UnityEngine::Vector3>  velocity) ;

static inline ::GlobalNamespace::PlayerJumper* New_ctor() ;

/// @brief Method OnJump, addr 0x180350300, size 0x30, virtual false, abstract: false, final false
inline void OnJump() ;

/// @brief Method PerformDudJump, addr 0x180350330, size 0x150, virtual false, abstract: false, final false
inline void PerformDudJump() ;

/// @brief Method Update, addr 0x180350480, size 0x400, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__Jumpness_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Jumpness_k__BackingField() ;

constexpr bool const& __cordl_internal_get_jumpInQueue() const;

constexpr bool& __cordl_internal_get_jumpInQueue() ;

constexpr bool const& __cordl_internal_get_justJumped() const;

constexpr bool& __cordl_internal_get_justJumped() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr void __cordl_internal_set__Jumpness_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_jumpInQueue(bool  value) ;

constexpr void __cordl_internal_set_justJumped(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_defaultSmoothTime() ;

/// @brief Method get_Jumpness, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Jumpness() ;

static inline void setStaticF_defaultSmoothTime(float_t  value) ;

/// @brief Method set_Jumpness, addr 0x1802f81c0, size 0x10, virtual false, abstract: false, final false
inline void set_Jumpness(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerJumper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerJumper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerJumper(PlayerJumper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerJumper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerJumper(PlayerJumper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5464};

/// @brief Field logVerbose, offset: 0x10, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field playerCharacter, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field justJumped, offset: 0x20, size: 0x1, def value: None
 bool  ___justJumped;

/// @brief Field <Jumpness>k__BackingField, offset: 0x24, size: 0x4, def value: None
 float_t  ____Jumpness_k__BackingField;

/// @brief Field jumpInQueue, offset: 0x28, size: 0x1, def value: None
 bool  ___jumpInQueue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerJumper, ___logVerbose) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerJumper, ___playerCharacter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerJumper, ___justJumped) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerJumper, ____Jumpness_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerJumper, ___jumpInQueue) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerJumper) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
