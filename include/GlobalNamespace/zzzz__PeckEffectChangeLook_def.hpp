#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectChangeLook.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLooks_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PeckEffectChangeLook)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectChangeLook;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectChangeLook*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectChangeLook*, "", "PeckEffectChangeLook");
// Dependencies PeckSystemReference, PlayerLooks::LookPart, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectChangeLook
class CORDL_TYPE PeckEffectChangeLook : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field logVerbose, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field lookPart, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookPart, put=__cordl_internal_set_lookPart)) ::GlobalNamespace::PlayerLooks_LookPart  lookPart;

/// @brief Field playerCharacter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field systemReference, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Method Awake, addr 0x180448eb0, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectChangeLook* New_ctor() ;

/// @brief Method Peck, addr 0x180448f50, size 0x220, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  context) ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::GlobalNamespace::PlayerLooks_LookPart const& __cordl_internal_get_lookPart() const;

constexpr ::GlobalNamespace::PlayerLooks_LookPart& __cordl_internal_get_lookPart() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_lookPart(::GlobalNamespace::PlayerLooks_LookPart  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectChangeLook() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectChangeLook", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectChangeLook(PeckEffectChangeLook && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectChangeLook", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectChangeLook(PeckEffectChangeLook const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5376};

/// @brief Field playerCharacter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field lookPart, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::PlayerLooks_LookPart  ___lookPart;

/// @brief Field systemReference, offset: 0x30, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field logVerbose, offset: 0x58, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectChangeLook, ___playerCharacter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectChangeLook, ___lookPart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectChangeLook, ___systemReference) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectChangeLook, ___logVerbose) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectChangeLook) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
