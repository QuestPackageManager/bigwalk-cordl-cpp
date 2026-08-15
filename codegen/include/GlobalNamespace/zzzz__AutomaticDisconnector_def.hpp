#pragma once
// IWYU pragma private; include "GlobalNamespace/AutomaticDisconnector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AutomaticDisconnector)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerZone;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class AutomaticDisconnector;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AutomaticDisconnector*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AutomaticDisconnector*, "", "AutomaticDisconnector");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AutomaticDisconnector
class CORDL_TYPE AutomaticDisconnector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field playerZone, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerZone, put=__cordl_internal_set_playerZone)) ::UnityW<::GlobalNamespace::PlayerZone>  playerZone;

/// @brief Field turnOnLocally, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_turnOnLocally, put=__cordl_internal_set_turnOnLocally)) ::UnityW<::UnityEngine::Transform>  turnOnLocally;

/// @brief Method Awake, addr 0x180391cc0, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::AutomaticDisconnector* New_ctor() ;

/// @brief Method StartEndingTransition, addr 0x180391da0, size 0x110, virtual false, abstract: false, final false
inline void StartEndingTransition(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& __cordl_internal_get_playerZone() const;

constexpr ::UnityW<::GlobalNamespace::PlayerZone>& __cordl_internal_get_playerZone() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_turnOnLocally() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_turnOnLocally() ;

constexpr void __cordl_internal_set_playerZone(::UnityW<::GlobalNamespace::PlayerZone>  value) ;

constexpr void __cordl_internal_set_turnOnLocally(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutomaticDisconnector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutomaticDisconnector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AutomaticDisconnector(AutomaticDisconnector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutomaticDisconnector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutomaticDisconnector(AutomaticDisconnector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5620};

/// @brief Field playerZone, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerZone>  ___playerZone;

/// @brief Field turnOnLocally, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___turnOnLocally;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AutomaticDisconnector, ___playerZone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticDisconnector, ___turnOnLocally) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AutomaticDisconnector) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
